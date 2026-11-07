#include<stdio.h>
int main(){
    char op;
    printf("Enter [number1] [+ - * /] [number2]\n");
    scanf("%f %c %f",&num1,&op,&num2);
    switch(op){
    case'+':
        result=num1 + num2;
        break;
    case'-':
        result=num1 - num2;
        break;
    case'*':
        result=num1 * num2;
        break;
    case'/':
        result=num1 / num2;
        break;
    default:
        printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
}