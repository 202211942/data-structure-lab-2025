#pragma once
#include <iostream>
#define MAX_DEGREE 101
using namespace std;

class SparsePoly {
private:
    int exponents[MAX_DEGREE];
    int coefficients[MAX_DEGREE];

public:
    SparsePoly();
    void read();
    void display(const char* str);
    void add(SparsePoly a, SparsePoly b);
};
