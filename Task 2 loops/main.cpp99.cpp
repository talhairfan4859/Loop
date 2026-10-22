#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  int n; long long f = 1; cin >> n;
  for (int i = 2; i <= n; i++) f *= i;
  cout << n << "! = " << f;
}
