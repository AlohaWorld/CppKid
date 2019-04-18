#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  float f = 17.f / 7.0f;
  cout << f << endl;
  //cout << std::fixed << 0.01 << endl;
  cout << setprecision(6) << 0.01 << endl;
  cout << setprecision(0) << f << endl;
  cout << setprecision(1) << f << endl;
  cout << setprecision(2) << f << endl;
  cout << setprecision(3) << f << endl;
  cout << setprecision(6) << f << endl;
  cout << setprecision(8) << f << endl;
  return 0;
}