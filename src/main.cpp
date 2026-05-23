#include <cstdlib>
#include "types.h"


int main(int argc, char **argv) {
  const char *worker_id_str = std::getenv("WORKER_ID");
  if (worker_id_str == nullptr) {
    return 1;
  }
  bool c = CT;
  return 0;
}