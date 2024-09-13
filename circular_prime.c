#include<stdio.h>
#include<math.h>
int prime(int);
void printt(int);
int rotate(int,int);
void fun(int num){
    int flag=1;
    int len = log10(num)+1;
    for(int i=0;i<len;i++){
        if(prime(num));
        else {
            printt(0);
            flag=0;
            break;
        }
        num = rotate(num,len);
    }
    if(flag==1) printt(1);
}
int prime(int num){

    for(int i=2;i<num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}
int rotate(int num,int len){
    int temp1 =  num / pow(10,len-1);
    int temp2 = num % ((int)pow(10,len-1));
    return (temp2*10 + temp1);
}
void printt(int n){
    if(n) printf("yes");
    else printf("false");
}
int main(){
    int num;
    scanf("%d",&num);
    fun(num);
    return 0;
}