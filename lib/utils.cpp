module;

#include <filesystem>

export module Utils;

namespace fs = std::filesystem;

export void init(int argc, char **argv) {
  fs::path script = fs::canonical(fs::path(argv[0]));
  fs::path scriptDir = script.parent_path();
  printf("scriptDir = %s\n", scriptDir.c_str());

  for (int i = 1; i < argc; i++) {
    printf("[%d] %s\n", i, argv[i]);
  }
}
