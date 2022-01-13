#include <stdio.h>

int quadrantNumber(short x_location, short y_location);

int main() {
  short x_location = 0, y_location = 0;

  scanf("%hd", &x_location);
  scanf("%hd", &y_location);
  int quadrantNum = quadrantNumber(x_location, y_location);
  
  printf("%d \n", quadrantNum);

  return 0;
}

int quadrantNumber(short x_location, short y_location) {
  short quadrantNum = 0;
  if(x_location>0 && y_location>0) {
    quadrantNum = 1;
  } else if(x_location > 0 && y_location <0) {
    quadrantNum = 4;
  } else if(x_location < 0 && y_location < 0) {
    quadrantNum = 3;
  } else {
    quadrantNum = 2;
  }
  return quadrantNum;
}
