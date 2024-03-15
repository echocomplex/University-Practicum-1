#include <iostream>
#include "ArrayParsing.h"

int main () {
    std::cout << "Default constructor: " << std::endl;
    ArrayParsing *def = new ArrayParsing;
    def->printDeveloper();
    def->printArray();
    std::cout << "MinABS >>> " << def->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << def->sumAfterNegative() << std::endl;
    negativeSort(*def);
    def->printArray();
    delete def;

    std::cout << "Parameters constructor: " << std::endl;
    ArrayParsing *param = new ArrayParsing(69);
    param->printArray();
    std::cout << "MinABS >>> " << param->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << param->sumAfterNegative() << std::endl;
    negativeSort(*param);
    param->printArray();

    std::cout << "Copy constructor: " << std::endl;
    ArrayParsing *copy = new ArrayParsing(*param);
    delete param;
    param->printArray();
    std::cout << "MinABS >>> " << copy->minABS() << std::endl;
    std::cout << "Sum After Negative >>> " << copy->sumAfterNegative() << std::endl;
    negativeSort(*copy);
    copy->printArray();
    delete copy;

    return 0;
}