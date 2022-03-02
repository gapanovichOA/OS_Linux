#include <iostream>
#include <Vector.h>

using namespace MathLibrary;
int main()
{
    Number a(3);
    Number b(6);
    Number c = create(8);
    std::cout << c<<std::endl;
    std::cout << a+b<<std::endl;
    std::cout << a-b<<std::endl;
    std::cout << a*b<<std::endl;
    std::cout << a/b<<std::endl;

    Vector v1(create(1), create(5));
    Vector v2(create(3),create(8));
    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v1 + v2 << std::endl;
    std::cout <<"phi=" <<v1.countPhi() << std::endl;
    std::cout <<"r=" <<v1.countR() << std::endl;
    return 0;
}
