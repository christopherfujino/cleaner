#include <cstdio>
#include <string>

int main(int argc, char **argv) {
  std::string script = std::string(argv[0]);
  for (int i = 1; i < argc; i++) {
    printf("[%d] %s\n", i, argv[i]);
  }

  printf("end.\n");
  return 0;
}
