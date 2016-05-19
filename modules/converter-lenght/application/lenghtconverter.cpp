// Copyright 2016 Maksimenko Alex

#include "include\lenght_converter.h"

#include <stdlib.h>
#include <stdio.h>
#include <string>

int main(int argc, const char** argv) {
    LenghtConverter app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());

    return 0;
}
