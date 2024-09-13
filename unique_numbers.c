#include<stdio.h>
int fun(int num){
    if(num==0) return 1;
    if(num==1) return 10;
    
    int total = 0;
    for(int i=1;i<=num;i++){
        if(i==1) {total += 10;
            continue;
        }
        int x=9;
        int mul = 1;
        for(int j=1;j<=i;j++){
            if(j==2) x=9;
            mul *= x;
            x--;
        }
        total += mul;
    }
    return total;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",fun(num));
    return 0;
}