#!/bin/bash

build_number(){
    echo "BUIDLING MATHLIBRARY"
    g++ -c MathLibrary/MathLibrary.cpp -o build/MathLibrary.o
    ar rvs build/MathLibrary.a build/MathLibrary.o
    echo "BUIDLING MATHLIBRARY DONE"
}

build_vector(){
    echo "BUIDLING VECTOR"
    g++ -c -IMathLibrary Vector/Vector.cpp -o build/Vector.o
    g++ -shared -o build/libVector.so build/Vector.o build/MathLibrary.a
    echo "BUIDLING VECTOR DONE"
}
build_app(){
    echo "BUIDLING MATHCLIENT"
    g++ -o build/main MathClient/main.cpp -IMathLibrary -IVector build/libVector.so build/MathLibrary.a
    #g++ -IMathLibrary -IVector -Lbuild/ -lVector MathClient/main.cpp -o build/main
    echo "BUIDLING MATHCLIENT DONE"
}

build(){
    [ -d build ] || mkdir build
    build_number
    build_vector
    build_app
}

clean(){
    echo "CLEANING BUILD FILES"
    rm -rf build
    echo "CLEANING BUILD FILES DONE"
}

run(){
    echo "RUNNING APP..."
    [ -f build/main ] && ./build/main || echo "ERROR: executable main not found!"
}

build
run