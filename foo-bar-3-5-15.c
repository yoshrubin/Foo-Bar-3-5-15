#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 100; i++)
    {
        if (i % 15 == 0)
            printf("FooBar");
        else if (i % 3 == 0)
            printf("Foo");
        else if (i % 5 == 0)
            printf("Bar");
        else
            printf("%d", i);

        printf("\n");
    }
}
