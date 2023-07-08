#include <iostream>
using namespace std;

extern "C"{
    int sum(int a, int b) { return a + b;}
}
