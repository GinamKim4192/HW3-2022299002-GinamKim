#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
    };
int main()
{
    printf("[----- [김 기 남]    [2022299002] -----]\n");
    /* lastName[13]은 char의 배열, 즉 string이기 때문에 마지막 '\0'을 포함해서 14bytes이며
    int는 4bytes, short은 2byte이므로 총 20btyes이다.
    하지만 구조체의 특성상 해당 구조체의 Element중에서 가장 큰 자료형의 배수로 정렬되므로
    int 자료형의 배수로 결정된다. 따라서 20보다 큰 4의 다음 배수는 24이므로
    student 구조체에는 24bytes를 할당한다. */
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));
    return 0;
}