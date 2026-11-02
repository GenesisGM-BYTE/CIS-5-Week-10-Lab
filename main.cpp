#include <iostream>

// Lab 10 — Your Name
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
  // References let these assignments change the caller's variables.
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 3, y = 7;
  std::cout << "Before: " << x << " " << y << "\n";
  swap_values(x, y);
  std::cout << "After: " << x << " " << y << "\n";

  // & gets x's address; * reads the value at that address.
  int* p = &x;
  std::cout << "x via pointer: " << *p << "\n";
  return 0;
}
