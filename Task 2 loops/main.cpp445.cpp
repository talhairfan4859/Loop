#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
  int n, sum = 0; cin >> n;
  for (int i = 1; i <= n; i++) sum += i;
  cout << "Sum = " << sum;
}

