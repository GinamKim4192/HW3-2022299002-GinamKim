#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");
    
    /* 아래의 정의된 sum함수를 이용하여 list의 각 element들을 더한 값을 return 받을 수 있음.
       아래의 반복문을 실행하여 input값에 Index 0~99까지에 0~99값을 할당함.
       따라서 anser값은 0~99까지 합한 4,950이 할당됨.
       
       아래 for 반복문은 main()에서 실행되는 것이고,
       sum은 다른 위치에서 실행되는 것이기에,
       main()와 sum()가 가르키는 주소는 서로 다르다.
       sum에서 실행되는 주소값이 main 같으려면 포인터를 이용해야 한다.*/
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    /* for checking call by reference */
    printf("address of input = %p\n", input);
    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}