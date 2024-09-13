#include<stdio.h>
void sortArrayByParity(int *ptr , int num){
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(ptr[j]%2==0 && ptr[i]%2!=0){
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    sortArrayByParity(array,num);
    for(int i=0;i<num;i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}