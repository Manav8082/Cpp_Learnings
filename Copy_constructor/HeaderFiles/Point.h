#pragma once
#include<iostream>
using namespace std;
class Point {
    int x;
public:
    Point(int x);
    Point(const Point& p);
    int getX();
};

