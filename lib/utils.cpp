module;

#include <filesystem>
#include <vector>

export module Utils;

namespace fs = std::filesystem;

namespace __chris_monorepo__cpp__cleaner {

export struct Config {
  fs::path scriptDir;
};

export Config init(int, char **argv) {
  fs::path scriptDir = fs::canonical(fs::path(argv[0])).parent_path();
  return {
      .scriptDir = scriptDir,
  };
}

export std::vector<fs::path> tree_walk(fs::path root) {
  std::vector<fs::path> paths = {};

  fs::directory_entry current = fs::directory_entry(root);

  return paths;
}

} // namespace __chris_monorepo__cpp__cleaner
