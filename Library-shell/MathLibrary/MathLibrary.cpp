#include "MathLibrary.h"


namespace MathLibrary
{
    Number::Number(double a) {
        number = a;
    }
    Number& Number::operator=(Number& c)
    {
        number = c.number;
        return (*this);
    }
    Number Number::operator+(const Number& c)
    {
        return Number(number + c.number);
    }

    Number Number::operator-(const Number& c)
    {
        return Number(number - c.number);
    }

    Number Number::operator*(const Number& c)
    {
        return Number(number * c.number);
    }

    Number Number::operator/(const Number& c)
    {
        return Number(number / c.number);
    }

    double Number::getValue() {
        return number;
    }

    Number create(double a) {
        return Number(a);
    }

    std::ostream& operator<< (std::ostream& out, const Number& c)
    {
        out << c.number;
        return out;
    }

    std::istream& operator>> (std::istream& in, Number& c)
    {
        in >> c.number;
        return in;
    }
}