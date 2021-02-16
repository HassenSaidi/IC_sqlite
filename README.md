# IC_sqlite
This is a port of the SQL database engine SQLite to the
Internet Computer. SQLite is one of the most widely used database
software.  An SQLite database is normally stored in a single ordinary
disk file. However, there is a possibility to force an SQLite
database to exist purely in memory. The IC's orthogonal persistence
guarantees that a database create in memory is automatically
persisted. 

This port consists of compiling an unmodified source code of SQLite to
WebAssembly and providing a simple canister `src/sqlite3-canister.c`
exposing a database `update` and `query` interfaces.


# Content
The project contains:
* a pre-built sqlite.wasm canister ready to deploy to the IC
* a sqlite.did file containing the functions exposed by the canister:
  * `sqlite_init: () -> (int)` to initialize the database
  * `sqlite_update: (SQL statement text) -> (SQLite Result Code)` to update the database
  * `sqlite_query: (SQL statement text) -> (Query result text)` to query the database
* source code to build `sqlite.wasm` in the `src` folder. Since there is no official C SDK yet for building canisters, I lifted most of the C interface with the IC from [this example](https://github.com/enzoh/counter). 

# Dependencies
To build the project, you need:
* a compiler: `clang-8` or newer versions of the clang compiler.
* wasi-sdk with a pre-built libc.a. Technically, you don't need to use `wasi` at all. You can build your own libc.a independently.
* the DFINITY sdk to run a local replica and to install the canister.

