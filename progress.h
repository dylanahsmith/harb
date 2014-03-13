#ifndef PROGRESS_H
#define PROGRESS_H

#include <stdint.h>

class Progress {
  uint64_t current, total;
  int percentage;
  const char *message;

  public:

  Progress(const char *message, uint64_t total);
  void start();
  void complete();
  void print();
  void clear();
  void increment(uint64_t amount=1);
  void update(uint64_t progress);
};

#endif
