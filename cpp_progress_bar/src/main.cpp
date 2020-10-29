#include <unistd.h>
#include <iostream>
#include "cpp_progress_bar.hpp"

using namespace std;

int main(void) {
    progress_bar bar(50);
    for (int i = 0; i < 100; i++) {
        bar.show(i);
        usleep(10000);
    }
    cout << "end." << endl;
    return 0;
}
