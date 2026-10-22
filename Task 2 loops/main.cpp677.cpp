#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  int m, count = 0, sum = 0;
  cin >> m;
  while (m != -1) { sum += m; count++; cin >> m; }
  if (count > 0) cout << "Average = " << (float)sum / count;
}
