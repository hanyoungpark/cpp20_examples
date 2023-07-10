module;
#include <iostream>
export module calc;

template<typename T>
concept Integral = std::is_integral<T>::value;

export class calc {
public:
    calc();
    ~calc();
    template<typename T>
    requires Integral<T>
    T add(T a, T b) {
        return a + b;
    }
};

calc::calc() = default;
calc::~calc() = default;
