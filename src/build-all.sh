#!/bin/bash

SYSROOT ?= /opt/wasi-libc/sysroot
WASI_LIBC ?= /opt/wasi-libc/sysroot/lib/wasm32-wasi/libc.a

clang -c sqlite3.c -o sqlite3.o \
      -DSQLITE_OS_OTHER=1 \
      -DSQLITE_OMIT_PROGRESS_CALLBACK \
      -DSQLITE_OMIT_XFER_OPT\
      -DHAVE_READLINE=0 -DHAVE_EDITLINE=0 -DSQLITE_OMIT_LOAD_EXTENSION \
      -DSQLITE_OMIT_SHARED_CACHE=1 \
      -DSQLITE_ENABLE_MEMORY_MANAGEMENT=1 \
      -DSQLITE_ENABLE_MEMSYS3=1 \
      -DSQLITE_TEMP_STORE=3 \
      -DSQLITE_OMIT_DEPRECATED=1 \
      -DSQLITE_MAX_EXPR_DEPTH=0 \
      -DSQLITE_THREADSAFE=0 \
      -DSQLITE_OMIT_TRACE=1 -DSQLITE_OMIT_RANDOMNESS=1 \
      -DNDEBUG \
      -DSQLITE_CORE=1 \
      -O3 --sysroot=$(SYSROOT) --target=wasm32-wasi

clang -c memvfs.c  -o memvfs.o \
      -O3 --sysroot=$(SYSROOT) --target=wasm32-wasi \
      -I.

clang -c sqlite_os_init.c -o sqlite_os_init.o \
      -O3 --sysroot=$(SYSROOT) --target=wasm32-wasi

clang -c sqlite3-canister.c  -o sqlite3-canister.o \
      -O3 --sysroot=$(SYSROOT) --target=wasm32-wasi \
      -I. 

clang -c utils.c -o utils.o \
      -O3 --sysroot=$(SYSROOT) --target=wasm32-wasi


wasm-ld sqlite3-canister.o memvfs.o sqlite_os_init.o sqlite3.o utils.o -o sqlite.wasm \
	--demangle --allow-undefined --export-dynamic --no-entry  \
	$(WASI_LIBC)

rm -f *.o

