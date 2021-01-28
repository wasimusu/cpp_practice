#include "strlib.cpp"
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MemoryPool {
 public:
  MemoryPool() : ptr(mem) {
  }

  void *allocate(int mem_size) {
    assert((ptr + mem_size) <= (mem + sizeof(mem)) && "Pool Exhausted!");
    void *mem = ptr;
    ptr += mem_size;
    return mem;
  }
 private:
  MemoryPool(const MemoryPool &);
  MemoryPool &operator=(const MemoryPool &);
  char mem[4096];
  char *ptr;
};

int main() {
  MemoryPool pool;

  int *num = new(pool.allocate(sizeof(int) * 10)) int;
  return 0;
}