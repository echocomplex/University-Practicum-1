#include <iostream>
#include "ArrayParsing.h"
#include <fstream>
#include <string>

void writeToTxt (long long *array, int length) {
    std::string arr = "";
    for (int i = 0; i < length; i++) {
        arr = arr + std::to_string(array[i]) + " ";
    }
    std::ofstream file("result.txt", std::ios::binary);
    file << arr;
    file.close();
}

int main () {
    ArrayParsing *def = new ArrayParsing;
    def->printDeveloper();
    std::cout << std::endl << "Default constructor: " << std::endl;
    def->printArray();
    std::cout << "MinABS >>> " << def->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << def->sumAfterNegative() << std::endl;
    negativeSort(*def);
    def->printArray();
    delete def;

    std::cout << "Parameters constructor: " << std::endl;
    ArrayParsing *param = new ArrayParsing(10);
    param->printArray();
    std::cout << "MinABS >>> " << param->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << param->sumAfterNegative() << std::endl;
    negativeSort(*param);
    param->printArray();

    std::cout << std::endl << "Copy constructor: " << std::endl;
    ArrayParsing *copy = new ArrayParsing(*param);
    delete param;
    copy->printArray();
    std::cout << "MinABS >>> " << copy->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << copy->sumAfterNegative() << std::endl;
    negativeSort(*copy);
    copy->printArray();

    writeToTxt(copy->returnArray(), copy->returnLength());

    delete copy;

    return 0;
}