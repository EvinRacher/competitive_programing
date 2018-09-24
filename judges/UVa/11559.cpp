
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int P, B, H, W;
  while(cin >> P >> B >> H >> W){
    char *msg = "stay home";
    int minPrice = B + 1;
    for(auto i = 0; i < H; ++i){
      int price;
      scanf("%i", &price);
      price = price * P;
      for(int i = 0; i < W; ++i){
        int beds;
        scanf("%i", &beds);
        if(beds >= P){
          if(price < minPrice){
            minPrice = price;
          }
        }
      }
    }
    if(minPrice == (B + 1)){
      printf("%s\n", msg);
    }else{
      printf("%i\n", minPrice);
    }
  }
  return 0;
}
