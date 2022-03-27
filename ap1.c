#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");

    int list[5];
    int *plist[5] = {NULL,};
    plist[0] = (int *)malloc(sizeof(int));
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    /* Array의 주소는 0번째 인덱스를 가르키며
    Array에 할당된 값은 0번째 인덱스 주소이다.*/
    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0] = %p\n", &list[0]);
    printf("value of list = %p\n", list);
    printf("address of list (&list) = %p\n", &list);
    printf("----------------------------------------\n\n");

    /* Array에 +1, +2 와 같이 더하는 것은 해당 Array의 인덱스를 이동하는 방법이디.
    Array가 int type으로 Initialize되었고, 해당 리스트에 +1을 하게 되면
    해당리스트의 현재 주소를 int타입의 크기인 4bytes의 메모리 주소를 이동하는 것이다.*/
    printf("value of list[1] = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));
    printf("address of list+1 = %p\n", list+1);

    /* plist는 5개의 Element들이 들어갈 수 있게끔 Initialize되었지만,
    동적메모리할당이기 때문에, 값이 할당되지 않은 인덱스들은
    값이 없으므로, 메모리 주소가 할당되지 않는다. 
    또한 마지막에 free함수를 사용하여 plist[0]에 할당된 메모리를 해제하여
    나중에 다시 사용될 수 있게끔 해준다.
    */
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]);
}