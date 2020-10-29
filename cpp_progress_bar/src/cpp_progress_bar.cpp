#include "cpp_progress_bar.hpp"
#include <cmath>
#include <iostream>

using namespace std;

progress_bar::progress_bar(const int width) : width(width) { position = -1; }

void progress_bar::show(int percentage) {
    // In the case of an exception, the progress bar shows 0 percent.
    try {
        if (percentage < 0 || 100 < percentage) {
            throw "Progress bar exception: an invalid argument.";
        }
    } catch (const char *str) {
        cout << str << endl;
        percentage = 0;
    }
    // Calculate new position.
    int new_position = floor(static_cast<float>(width) *
                             (static_cast<float>(percentage) / 100));
    if (new_position != position) {
        cout << "\r[";
        for (int i = 0; i < new_position; i++) {
            cout << "#";
        }
        for (int i = 0; i < width - new_position; i++) {
            cout << "-";
        }
        cout << "]" << flush;
        position = new_position;
    }
}

void progress_bar::clear() {
    position = -1;
    cout << "[";
    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << "]" << flush;
}