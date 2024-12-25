#include "tests/lib.h"
#include "tests/main.h"

void
test_main(void) {
  int fd;
  CHECK((fd = open("sample.txt")) > 1, "open \"sample.txt\"");
  CHECK(close(fd) == 0, "close \"sample.txt\"");
}
