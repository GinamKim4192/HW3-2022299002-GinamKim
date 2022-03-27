#include <stdio.h>
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- [김 기 남]    [2022299002] -----]\n");

    struct student1 st1 = {'A', 100, 'A'};

    /* struct "struct name" {}과
    typedef struct {} "strcut name" 둘 중 어느것으로 struct를 만들 수 있다.
       
    만들어진 struct를 이용하여 할당할때는
    struct "sturct name" "allocation name" 을 사용하여 할당하거나
    "struct name" "allocation name"을 사용하여 할당할 수 있다.
       
    struct의 Element의 값을 할당할때는 {} 안에 선언한 Element의 순서대로 작성한다.

    구조체의 Element를 접근할때는 "struct name"."Element"로 접근할 수 있다.*/
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);


    student2 st2 = {'B', 200, 'B'};

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    /* strcut A를 B에 할당할 수 있지만,
    struct끼리의 연산자(==, +, -, *, / 등) 사용은 불가능하다.*/
    student2 st3;

    st3 = st2;

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    // /* equality test */
    // if(st3 == st2) /* not working */
    //     printf("equal\n");
    // else
    //     printf("not equal\n");
    return 0;
}