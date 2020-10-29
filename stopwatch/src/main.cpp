// *****************************
// An example code to use stopwatch class.
// *****************************

#include <unistd.h>

#include <iostream>

#include "stopwatch.hpp"

int main(void) {
    std::cout << "start..." << std::endl;

    // Start the stopwatch.
    stopwatch* obj0 = new stopwatch;

    // Sleep 10 seconds.
    sleep(10);

    // Stop the stopwatch.
    delete obj0;

    // Finish.
    std::cout << "ends this program." << std::endl;

    return 0;
}