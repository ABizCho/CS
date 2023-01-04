#include <stdio.h>

int main(void)
{
    // 변수 선언
        // 중활호 내에서 변수를 선언할 경우, 변수의 선언문은 중괄호의 앞부분에 위치해야 한다.
        // 
    int num1, num2;

    // 변수 선언 및 초기화
    int num3=10, num4=20;
    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);

    num1=2;
    num2=4;
    printf("num1: %d, num2: %d \n", num1, num2);
}


