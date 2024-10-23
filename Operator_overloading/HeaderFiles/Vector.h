#pragma once
#include<iostream>
using namespace std;
class Vector
{
private:
    double x, y, z;

public:
    // Constructor
    Vector(double x, double y, double z);

    // Operator overloading for vector addition
    Vector operator+(const Vector& other) const;

    // Method to display vector data
    void display() const;
};

