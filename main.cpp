#include <cmath>
#include <iostream>

// basic
template <typename A, typename B>
auto add(A x, B y) {
    return x + y;
}

template <typename T> auto negate(T x){
    return x * -1;
}

template <typename A, typename B>
auto multiply(A x, B y) {
    return x * y;
}

template <typename T> auto reciproral(T x){
    return 1.0 / x;
}

// trig
template <typename T> auto radConversion(T x){
    return x * M_PI / 180.0;
}

// other
template <typename A, typename B> auto exponentation(A x, B y = 2){
    return pow(x, y);
}

template <typename B>
auto logBase(B x) {
    if (x <= 0) throw std::invalid_argument("x must be > 0");
    return std::log(x); 
}

template <typename A, typename B>
auto logBase(A base, B x) {
    if (x <= 0 || base <= 0 || base == 1)
        throw std::invalid_argument("x > 0, base > 0 and base != 1");
    return std::log(x) / std::log(base);
}

int main(){
    W calc
}