#include <iostream>
using namespace std;
 
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;   
    a = b;       
    b = temp;     
}

int main() {
    // Simple test to verify
    int x = 5, y = 10;
    cout << "Before: x=" << x << ", y=" << y << endl;
    swapValues(x, y);
    cout << "After: x=" << x << ", y=" << y << endl;
    return 0;
}
