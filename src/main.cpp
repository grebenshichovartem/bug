int main(int argc, char **argv) {
  const char *worker_id_str = getenv("WORKER_ID");
  if (worker_id_str == nullptr) {
    spdlog::error("WORKER_ID environment variable not set");
    return 1;
  }
  return 0;
}