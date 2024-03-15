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
    long long* returnArray ();
    int returnLength ();
    friend void negativeSort (const ArrayParsing &unit);
};

void negativeSort (const ArrayParsing &unit);

#endif //UNIVERSITY_PRACTICUM_1_ARRAYPARSING_H
