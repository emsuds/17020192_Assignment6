#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;

    printf("Enter number : ");
    scanf("%d", &n);

    for(i=1; i<=n;i++)
    {
        for(j=i; j>=1;j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
