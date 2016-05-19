// Copyright 2016 Maksimenko Alex

#ifndef MODULES_CONVERTER_LENGHT_INCLUDE_LENGTHCONVERTER_H_
#define MODULES_CONVERTER_LENGHT_INCLUDE_LENGTHCONVERTER_H_
#include <string>

#include "include\ConvertorLenght.h"

class LenghtConverter {
public:
    LenghtConverter();
    std::string operator()(int argc, const char** argv);

private:
    void help(const char* appname, const char* message = "");
    bool validateNumberOfArguments(int argc, const char** argv);
    std::string message_;
    typedef struct {
        std::string _value;
        std::string _measure;
        std::string _measure_result;
        char operation;
    } Arguments;
};

#endif  // MODULES_CONVERTER_LENGHT_INCLUDE_LENGTHCONVERTER_H_