#pragma once
#include <chrono>

class stopwatch {
   public:
    stopwatch();
    ~stopwatch();

   private:
    std::chrono::system_clock::time_point start, end;
};