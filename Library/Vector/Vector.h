#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <MathLibrary.h>
#include <cmath>

#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

namespace MathLibrary {
    class Vector {
    private:
        Number x;
        Number y;
    public:
         Vector(Number x_, Number y_);
         Vector& operator=(Vector& v);
         Vector operator+(const Vector& v);
         Number countR();
         Number countPhi();
         friend std::ostream& operator<< (std::ostream&, const Vector&);
         friend std::istream& operator>> (std::istream&, Vector&);
    };
    const Vector ZERO_VECTOR(ZERO, ZERO);
    const Vector ONE_VECTOR(ONE, ONE);
}

#endif //VECTOR_VECTOR_H
