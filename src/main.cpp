// main.cpp — минимальный валидный C++ файл
#include <cstdlib>  // для std::getenv

int main(int argc, char **argv) {
  const char *worker_id_str = std::getenv("WORKER_ID");
  if (worker_id_str == nullptr) {
    return 1;
  }
  return 0;
}