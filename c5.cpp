#include <iostream>

using namespace std;

constexpr int C = 10;

void test(int speed){
    const int s = 1;
    static_assert(s<C , "hello");

}
