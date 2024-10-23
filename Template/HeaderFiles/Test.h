#pragma once
template <class T>
class Test
{
private:
    T val;
public:
    static int count;
    Test() { count++; }

};
template <class T>
int Test<T>::count = 0;