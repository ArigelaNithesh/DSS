#include <iostream>
using namespace std;

// Function template definition for swapValues()
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;  // Temporary variable to hold value of a
    a = b;       // Assign b to a
    b = temp;    // Assign temp (original a) to b
}

int main() {
    // Simple test to verify
    int x = 5, y = 10;
    cout << "Before: x=" << x << ", y=" << y << endl;
    swapValues(x, y);
    cout << "After: x=" << x << ", y=" << y << endl;
    return 0;
}
