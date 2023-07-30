cmake_minimum_required(VERSION 3.26)
project(DerivativesPricer)

set(CMAKE_CXX_STANDARD 20)

add_executable(DerivativesPricer
        "chapter 1 - A simple Monte Carlo model/SimpleMCMain1.cpp"
        "chapter 1 - A simple Monte Carlo model/SimpleMCMain1.cpp"
        "chapter 1 - A simple Monte Carlo model/Random1.cpp"
        Headers/Random1.h
        Headers/PayOff1.h
        "chapter 2 - Encapsulation/PayOff1.cpp"
        Headers/SimpleMC.h
        "chapter 2 - Encapsulation/SimpleMC.cpp"
        "chapter 2 - Encapsulation/SimpleMCMain2.cpp"
        Headers/PayOff2.h
        "chapter 3 - Inheritance and virtual functions/PayOff2.cpp"
)
