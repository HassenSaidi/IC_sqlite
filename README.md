# IC_sqlite
This is a port of the SQL database engine sqlite to the Internet Computer.
The project contains:
* a pre-built sqlite.wasm canister ready to deploy to the IC
* a sqlite.did file containing the functions exposed by the canister:
  * `sqlite_init: () -> (int)` to initialize the database
  * `sqlite_update: (SQL statement text) -> (SQLITE Result Code)` to update the database
  * `sqlite_query: (SQL statement text) -> (Query result text)` to query the database
* source cade to build `sqlite.wasm` in the `src` folder

# Dependencies
To build the project, you need:
* a compiler: `clang-8` or newer versions of the clang compiler.
* wasi-sdk with a pre-built libc.a. Technically, you don't need to use `wasi` at all. You can build your own libc.a independently.
* the DFINITY sdk to run a local replica and to install the canister.