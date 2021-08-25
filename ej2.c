#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int i = 0;
    while(n >= m){
        n -= m;
        i++;
    }
    printf("resto: %d, cociente: %d", n, i);
}
