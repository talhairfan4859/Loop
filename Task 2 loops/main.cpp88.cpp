#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
  int n; cin >> n;
  for (int i = 1; i <= 10; i++)
    cout << n << " x " << i << " = " << n * i << endl;
}
