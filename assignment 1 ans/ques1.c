#include<stdio.h>
int main(){
    int num,originalNum, remainder, result=0, n=0;
    printf("Enter an integer:");
    scanf("%d",&num);
    originalNum = num;
    while(originalNum!=0){
        originalNum/=10;
        ++n;
    }
originalNum= num;
while(originalNum!=0){
    remainder=originalNum %10;
    result+=pow(remainder,n);
    originalNum/=10;
    }
    if (result == num)
    printf("%d is not an Amstrong number.\n", num);
    else 
    printf("%d is not an Amstrong number.\n", num);

    return 0;
}