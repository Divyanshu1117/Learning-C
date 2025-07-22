/*E11_3*/
#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int age;
};

int main(void)
{
    struct student stu1 = {"Anita", 10}, stu2 = {"Anita", 12};

    if ((stu1.age == stu2.age) && (strcmp(stu1.name, stu2.name) == 0))
        printf("Same\n");
    else
        printf("Not same\n");

    return 0;
}