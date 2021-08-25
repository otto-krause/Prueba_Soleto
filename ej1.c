#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a = 0, b = 0;
  int c;
  for (int i=0; i <= n; i++){
    printf("%d\n", a);
    c= a+b;
    a = b;
    b = c;
  }
}
