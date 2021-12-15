#include <stdio.h>
#include <stdlib.h>
 
int d(int n){
    int result = n;
    while(true){
        if(n == 0) break;
        result += n%10; //1의자리를 더함
        n=n/10;
    }
    return result;
}
 
bool self[10001];
 
int main() {
    for(int i=1; i<=10000; i++){
        int x = d(i);
        if(x <= 10001) {
            self[x] = true;
        }
    }
 
    for(int i=1; i<=10000; i++){
        if(!self[i])
            printf("%d\n", i);
    }
}