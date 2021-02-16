#include "sqlite3.h"

extern sqlite3_vfs *sqlite3_memvfs(void);


int sqlite3_os_init()
{
  sqlite3_vfs_register(sqlite3_memvfs(), 0);
  return 0;
}
