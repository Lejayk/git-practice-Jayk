#include <iostream>
#include <locale>
#include <string>
#include <stdexcept>
using namespace std;

int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int (*op)(int, int);
op = &suma;

int n = op(2,2)
