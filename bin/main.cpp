#include <cstdio>

import Utils;

using namespace __chris_monorepo__cpp__cleaner;

int main(int argc, char **argv) {
  auto config = init(argc, argv);
  printf("About to clean out %s\n", config.scriptDir.c_str());
  return 0;
}
