#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");

    int list[5];
    int *plist[5];
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int));

    /* Array에 +1, +2 와 같이 더하는 것은 해당 Array의 인덱스를 이동하는 방법이다.
    Array가 int type으로 Initialize되었고, list +1을 하게 되면
    해당리스트의 현재 주소를 int타입의 크기인 4bytes의 메모리 주소를 이동하는 것이다.
    list +0를 하게 되면 int 타입 0개 크기인 0byte의 메모리 주소가 이동한다.
    따라서, 0byte의 메모리 주소가 이동되는 것은 현재 메모리 주소에 그대로 위치하는 것이다.
    list +2를 하게 되면 int 타입 2개 크기인 8bytes의 메모리 주소가 이동한다.
    list +3를 하게 되면 int 타입 2개 크기인 12bytes의 메모리 주소가 이동한다.
    list +4를 하게 되면 int 타입 2개 크기인 16bytes의 메모리 주소가 이동한다.*/
    printf("list[0] \t= %d\n", list[0]);
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);
    printf("address of list + 0 \t= %p\n", list+0);
    printf("address of list + 1 \t= %p\n", list+1);
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);
    printf("address of list[4] \t= %p\n", &list[4]);
    free(plist[0]);
}