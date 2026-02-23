
#include <iostream>
using namespace std;
// function 1
int add(int x, int y) {
    return x + y;
}
// function 2
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;           
    cout << add(15.5, 16.5) << endl;     
    return 0;
}
