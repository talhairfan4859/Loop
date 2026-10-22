#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  int n, c = 0; cin >> n;
  if (n == 0) c = 1;
  while (n != 0) { c++; n /= 10; }
  cout << "Digits = " << c;
}
