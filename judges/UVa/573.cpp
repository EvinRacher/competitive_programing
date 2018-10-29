#include <stdio.h>
#include <iostream>

using namespace std;

#define D(x) //cout << #x << " = " <<  x << endl

int main() {
  double H, U, D, F;

  scanf("%lf %lf %lf %lf", &H, &U, &D, &F);
  D(H);
  D(U);
  D(D);
  D(F);
  while (H != 0) {

    int days = 0;
    double height = 0, climbing = 0, delta = 0;
    climbing = U;
    while (height >= 0) {
      delta = climbing - ((U * F) / 100);
      if (delta >= 0) {
        height += climbing;
        D(height);
        climbing -= ((U * F) / 100);
      }
      D(climbing);
      if (height > H) {
        cout << "success on day " << days + 1 << endl;
        break;
      }
      height -= D;
      D(height);
      days++;
      D(days);
    }

    if (height < 0) {
      cout << "failure on day " << days << endl;
    }
    scanf("%lf %lf %lf %lf", &H, &U, &D, &F);
  }
  return 0;
}
