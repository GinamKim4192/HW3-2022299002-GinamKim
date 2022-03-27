#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");
    /*포인터는 할당된 값으로 메모리주소 (ex ‘6422040\0’)으로 가지고 되며
    이러한 메모리주소를 가지게 되기 때문에 포인터 x와 *x의 사이즈는 8bytes이다.
    최종 참조 값은 int형이기 때문에 4bytes를 가지게 된다.*/

    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    printf("%d",&x);

}