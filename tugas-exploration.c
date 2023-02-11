#include <stdio.h>
#include <string.h>

int main(){
    int operator , num1, num2;
    printf("1.And \n 2.Or \n 3.XOr \n 4. << \n 5. >> \n 6. ~ \n");
    printf("Enter the operator: ");
    scanf("%d", &operator);
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    if (operator == 1){
        printf("%d", num1&num2);
    } else if (operator == 2){
        printf("%d", num1|num2);
    } else if (operator == 3){
        printf("%d", num1^num2);
    } else if (operator == 4){
        printf("%d", num1<<num2);
    } else if (operator == 5){
        printf("%d", num1>>num2);
    } else {
        printf("%d", ~num1);
    }
}