#include "Counter.h"
#include <iostream>

    void Counter::add() {
        count++;
    }
    void Counter::subtract() {
        count--;
    }
    void Counter::result() {
        std::cout << count << std::endl;
    }
    Counter::Counter() {
        Counter::count = 1;
    }
    Counter::Counter(int numb) {
        this->count = numb;
    }