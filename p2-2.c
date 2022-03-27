#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");
    
    /* Array의 주소는 Array의 0번째 인덱스의 주소를 가르키며,
    Array의 값은 0번째 인덱스의 주소를 가르킴.

    'one'은 int의 배열로 할당되었기 때문에,
    'one' Array를 +1,+2 .. +5 를 할 경우 int의 메모리 크기만큼 주소를 이동한다.
    아래의 print1 함수를 사용해서 0~5번째 Index까지 이동하며 주소와 할당된 값을 출력한다.
    list +0를 하게 되면 int 타입 0개 크기인 0byte의 메모리 주소가 이동한다.
    따라서, 0byte의 메모리 주소가 이동되는 것은 현재 메모리 주소에 그대로 위치하는 것이다.
    list +1를 하게 되면 int 타입 2개 크기인 4bytes의 메모리 주소가 이동한다.
    list +2를 하게 되면 int 타입 2개 크기인 8bytes의 메모리 주소가 이동한다.
    list +3를 하게 되면 int 타입 2개 크기인 12bytes의 메모리 주소가 이동한다.
    list +4를 하게 되면 int 타입 2개 크기인 16bytes의 메모리 주소가 이동한다.*/
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    print1(&one[0], 5);
    return 0;

}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}