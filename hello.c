#include <stdio.h>

int main() {
    int num1,num2;

    printf("Please enter a number:-");
    scanf("%d",&num1);
    printf("Please enter another number:-");
    scanf("%d",&num2);
    
    int sum= num1+num2;
    printf("Sum= %d \n",sum);
    int abs= num1-num2;
    printf("Abs= %d \n",abs);
    int mul= num1*num2;
    printf("Mul= %d \n",mul);
    float div= num1/num2;
    printf("Div= %f \n",div);

    return 0;
}