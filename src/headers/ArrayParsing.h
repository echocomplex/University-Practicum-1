#ifndef UNIVERSITY_PRACTICUM_1_ARRAYPARSING_H
#define UNIVERSITY_PRACTICUM_1_ARRAYPARSING_H

#include <algorithm>
#include <ctime>
#include <cmath>
#include <iostream>

class ArrayParsing {
private:
    long long *arr;
    int len;

public:
    ArrayParsing ();
    ArrayParsing (const int length);
    ArrayParsing (const ArrayParsing &unit);
    ~ArrayParsing ();
    void printDeveloper ();
    void printArray ();
    long long minABS();
    long long sumAfterNegative();
    friend void negativeSort (const ArrayParsing &unit);
};

void negativeSort (const ArrayParsing &unit) {
    for (int i = 0; i < unit.len - 1; i++) {
        int smallestPosition = i;

        for (int a = i + 1; a < unit.len; a++) {
            if (unit.arr[i] > unit.arr[smallestPosition]) {
                smallestPosition = a;
            }
        }
        std::swap(unit.arr[i], unit.arr[smallestPosition]);
    }
}

#endif //UNIVERSITY_PRACTICUM_1_ARRAYPARSING_H
