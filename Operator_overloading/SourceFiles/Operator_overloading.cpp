#include"Vector.h"

int main()
{
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);
    Vector v3 = v1 + v2;

    v3.display();

    return 0;
}

