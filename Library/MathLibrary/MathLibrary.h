#ifndef MATHLIBRARY_MATHLIBRARY_H
#define MATHLIBRARY_MATHLIBRARY_H

#include <fstream>

namespace MathLibrary
{
    class Number
    {
        double number = 0;
    public:
        Number() = default;
        Number(double a);
        Number& operator=(Number& c);
        Number operator+(const Number& c);
        Number operator-(const Number& c);
        Number operator*(const Number& c);
        Number operator/(const Number& c);

        double getValue();

        friend std::ostream& operator<< (std::ostream&, const Number&);
        friend std::istream& operator>> (std::istream&, Number&);

    };

    const Number ZERO(0);
    const Number ONE(1);

    Number create(double a);

}
#endif //MATHLIBRARY_MATHLIBRARY_H
