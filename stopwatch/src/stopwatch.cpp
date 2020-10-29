#include "stopwatch.hpp"

#include <chrono>
#include <iostream>

stopwatch::stopwatch() {
    std::cout << "Stopwatch: starts..." << std::endl;
    start = std::chrono::system_clock::now();
}

stopwatch::~stopwatch() {
    end = std::chrono::system_clock::now();
    std::cout << "Stopwatch: stops." << std::endl;
    auto elapsed =
        std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
    std::cout << "Duration time is... " << elapsed << " [s]" << std::endl;
}