#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include "ic0.h"

#include <limits.h>
#include <errno.h>
#include <stdarg.h>

void trap(const char *str) {
  size_t len = strlen(str);
  ic0_trap((uint32_t)(str), (uint32_t)(len));
}

void *dlopen(const char *file, int mode) {
  trap("calling dlopen");
}

char  *dlerror(void) {
  trap("calling dlerror");
}

void *dlsym(void *restrict p, const char *restrict s){
  trap("calling dlsym");
}

int dlclose(void *handle) {
  trap("calling dlclose");
  return 0;
}

int __muloti4(int a, int b, int* overflow) {
  trap("calling __muloti4");
  return 1;
}

long sysconf(int name) {
  trap("calling sysconf");
  return 1;
}

int close(int fd) {
  trap("calling close");
  return 1;
}

int access(const char *pathname, int mode){
  trap("calling access");
  return 1;
}

int stat64(const char *pathname, int mode){
  trap("calling stat64");
  return 1;
}

int fstat64(const char *pathname, int mode){
  trap("calling fstat64");
  return 1;
}

int fchmod(const char *pathname, int mode){
  trap("calling fchmod");
  return 1;
}

int mkdir(const char *pathname, int mode){
  trap("calling mkdir");
  return 1;
}

int munmap(const char *pathname, int mode){
  trap("calling munmap");
  return 1;
}

int lstat64(const char *pathname, int mode){
  trap("calling lstat64");
  return 1;
}

int utimes(const char *pathname, int mode){
  trap("calling utimes");
  return 1;
}

int gettimeofday(const char *pathname, int mode){
  trap("calling gettimeofday");
  return 1;
}

int nanosleep(const char *pathname, int mode){
  trap("calling nanosleep");
  return 1;
}

int __munmap(const char *pathname, int mode){
  trap("calling __mumap");
  return 1;
}

int __map_file(const char *pathname, int mode){
  trap("calling __map_file");
  return 1;
}

int unlink(const char *pathname) {
   trap("calling unlink");
   return 1;
}

int rmdir(const char *pathname) {
   trap("calling rmdir");
   return 1;
}

int fdatasync(int fd) {
   trap("calling fdatasync");
   return 1;
}

int __expand_heap(const char *pathname) {
   trap("calling __expand_heap");
   return 1;
}

ssize_t read(int fd, void *buf, size_t count){
   trap("calling read");
   return 1;
}

void __lock(volatile int *l) {
   trap("calling __lock");
}

void __unlock(volatile int *l) {
   trap("calling __unlock");
}

int *___errno_location(void)
{
  trap("calling __errno_location");
  return 1;
}

int *__errno_location(void)
{
  trap("calling __errno_location");
  return 1;
}

uid_t geteuid(void)
{
  trap("calling getetuid");
  return 1;
}

char *getcwd(char *buf, size_t size) {
   trap("calling getcwd");
   return 1;
}

ssize_t write(int fd, const void *buf, size_t count)
{
   trap("calling write");
  return 1;
}

ssize_t fcntl64(int fd, const void *buf, size_t count)
{
   trap("calling fcntl64");
  return 1;
}

int fchown(int fd, uid_t uid, gid_t gid)
{
  trap("calling fchown");
  return 1;
}

ssize_t readlink(const char *restrict path, char *restrict buf, size_t bufsize)
{
  trap("calling readlink");
  return 1;
}

ssize_t open64(int fd, const void *buf, size_t count)
{
  trap("calling open64");
  return 1;
}

pid_t getpid(void)
{
  trap("calling getpid");
  return 1;
}

off_t lseek64(int fd, off_t offset, int whence) {                                                                                                                               
  trap("calling lseek64");
  return 1;
}

long long __multi3 (long long a , long long b ) {
  trap("calling __multi3");
  return 1;
}

long double __multf3 (long double a, long double b) {
  trap("calling __multf3");
  return 1;
}

long double __subtf3 (long double a, long double b) {
  trap("calling __subtf3");
  return 1;
}

long double __divtf3 (long double a, long double b) {
  trap("calling __divtf3");
  return 1;
}

long double __addtf3 (long double a, long double b) {
  trap("calling __addtf3");
  return 1;
}

void *mmap64(void *start, size_t len, int prot, int flags, int fd, off_t off) {
   trap("calling mmap64");
}

int __letf2 (long double a, long double b) {
   trap("calling __letf2");
   return 1;
}

int __getf2 (long double a, long double b) {
   trap("calling __getf2");
   return 1;
}

int __lttf2 (long double a, long double b) {
   trap("calling __lttf2");
   return 1;
}

int __gttf2 (long double a, long double b) {
   trap("calling __gttf2");
   return 1;
}

void __floatditf () {
  trap("calling __floatditf");
}

void __floatsitf (int i, int j) {
   trap("calling __floatsitf");
}

int __fixtfsi (long double a) {
   trap("calling __fixtfsi");
   return 1;
}

double __trunctfdf2 (long double a) {
  trap("calling __trunctfdf2");
  return 1;
}

long double __extenddftf2 (double a) {
  trap("calling __extenddftf2 ");
  return 1;
}

int posix_fallocate64(int fd, off_t base, off_t len) {
  trap("calling posix_fallocate64");
  return 1;
}

char *strerror(int e) {
  trap("calling strerror");
  return 1;
}

off_t ftruncate64(int fd, off_t offset) {
  trap("calling ftruncate64");
  return 1;
}

int vsnprintf(char *restrict s, size_t n, const char *restrict fmt, va_list ap) {
  trap("calling vsnprintf");
  return 1;
}



