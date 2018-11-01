/**
 * 11/2018
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1082
 */
#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

#define D(x) // cout << #x << " = " <<  x << endl

int main() {
  int n, p, counter = 1;
  string requirements;

  cin >> n;
  cin >> p;
  D(n); D(p);

  while (n != 0 and p != 0) {
    
    //Go past the requirements
    cin.ignore();
    for (int i = 0; i < n; i++) {
      getline(cin, requirements);
      D(requirements);
    }

    float max_compli, min_price;
    string result_name;

    for (int i = 0; i < p; i++) {
      float price;
      int r_find;
      string name;

      getline(cin, name);
      cin >> price;
      cin >> r_find;
      cin.ignore();
      D(price); D(r_find); D(name);

      //Go past the requirements
      for (int i = 0; i < r_find; i++) {
        getline(cin, requirements);
        D(requirements);
      }

      float save = float(r_find) / p;

      if(i == 0){
        min_price = price;
        result_name = name;
        max_compli = save;
      }else{
        if(save > max_compli){
          max_compli = save;
          min_price = price;
          result_name = name;
        }else if (save == max_compli){
          if (price < min_price){
            min_price = price;
            result_name = name;
          }
        }
      }
    }

    printf("RFP #%i\n", counter);
    cout << result_name << endl;
    cin >> n;
    cin >> p;
    if (n != 0 and p != 0){
      cout << endl;
    }
    cin.ignore();
    counter++;
    D(n);
    D(p);
  }
}
