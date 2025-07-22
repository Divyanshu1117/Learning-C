/*E11_12*/
#include <stdio.h>
#include <stdlib.h>

// Typedef for stu
typedef struct
{
    char name[20];
    int age;
} stu;

// Forward declaration for node
typedef struct node
{
    int data;
    struct node *link;
} node;

int main(void)
{
    stu *p = malloc(sizeof(stu));
    node *ptr = malloc(sizeof(node));

    if (p == NULL || ptr == NULL) // Always check malloc
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    p->age = 30;
    ptr->data = 3;

    printf("%d  %d\n", p->age, ptr->data);

    free(p);
    free(ptr);
    return 0;
}