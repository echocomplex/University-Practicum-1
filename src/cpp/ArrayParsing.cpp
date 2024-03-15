#include "ArrayParsing.h"

ArrayParsing::ArrayParsing () {
    this->len = 15;
    this->arr = new long long[this->len];
    srand(time(nullptr));
    for (int i = 0; i < this->len; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

ArrayParsing::ArrayParsing (const int length) {
    this->len = length;
    this->arr = new long long[this->len];
    srand(time(nullptr));
    for (int i = 0; i < this->len; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

ArrayParsing::ArrayParsing (const ArrayParsing &unit) {
    this->len = unit.len;
    this->arr = new long long[this->len];
    for (int i = 0; i < this->len; i++) {
        arr[i] = unit.arr[i];
    }
}

ArrayParsing::~ArrayParsing () {
    delete[] this->arr;
}

long long ArrayParsing::minABS () {
    long long min = std::abs(this->arr[0]);
    for (int i = 1; i < this->len; i++) {
        if (std::abs(this->arr[i]) < min) {
            min = this->arr[i];
        }
    }
    return min;
}

long long ArrayParsing::sumAfterNegative () {
    long long sum = 0;
    bool afterStatus = false;
    for (int i = 0; i < this->len; i++) {
        if (afterStatus) {
            sum += this->arr[i];
        } else if (this->arr[i] < 0) {
            afterStatus = true;
        }
    }
    return sum;
}

void ArrayParsing::printDeveloper() {
    std::cout << "This code was writen by Ivanov A. A. (BBBO-07-23), Exercise 10" << std::endl <<
    "GitHub: https://github.com/echocomplex/University-Practicum-1" << std::endl;
}

void ArrayParsing::printArray() {
    for (int i = 0; i < this->len; i++) {
        std::cout << this->arr[i] << " ";
    }
}