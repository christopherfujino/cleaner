module;

#include <filesystem>

export module Utils;

namespace fs = std::filesystem;

namespace __chris_monorepo__cpp__cleaner {

fs::path _normalize(const char *raw) {
  fs::path script = fs::canonical(fs::path(raw));

#ifndef __cpp_guaranteed_copy_elision
#error "no __cpp_guaranteed_copy_elision present"
#endif
  // TODO __cpp_implicit_move once 2023

  return script.parent_path();
}

export void init(int argc, char **argv) {
  auto scriptDir = _normalize(argv[0]);
  printf("scriptDir = %s\n", scriptDir.c_str());

  for (int i = 1; i < argc; i++) {
    printf("[%d] %s\n", i, argv[i]);
  }
}

} // namespace __chris_monorepo__cpp__cleaner
