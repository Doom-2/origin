#pragma once
#include <iostream>

class Exception : public std::runtime_error {
public:
    Exception();
};

int add(int a, int b);

int sub(int a, int b);

int mult(int a, int b);

float divide(int a, int b);

float power(int a, int b);
