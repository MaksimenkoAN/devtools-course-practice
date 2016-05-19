// Copyright 2016 Maksimenko Alex

#include <string>

#include <stdlib.h>
#include <stdio.h>

#include "lenghtconverter.h"

int main(int argc, const char** argv) {
    LenghtConverter app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());

    return 0;
}
