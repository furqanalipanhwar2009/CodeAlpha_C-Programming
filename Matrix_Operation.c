#include <stdio.h>

void addition()
{
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter first matrix:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        scanf("%d", &a[i][j]);
    }

    printf("Enter second matrix:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        scanf("%d", &b[i][j]);
    }

    printf("Addition Result:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplication()
{
    int a[2][2], b[2][2], mul[2][2];
    int i, j, k;

    printf("Enter first matrix:\n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
         scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
    scanf("%d", &b[i][j]);

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
        mul[i][j] = 0;

            for(k=0; k<2; k++)
            mul[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Multiplication Result:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", mul[i][j]);

        printf("\n");
    }
}

void transpose()
{
    int a[2][2], i, j;

    printf("Enter matrix:\n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose Result:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", a[j][i]);

        printf("\n");
    }
}

int main()
{
    int choice;

    printf("\n1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Transpose\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            addition();
            break;

        case 2:
            multiplication();
            break;

        case 3:
            transpose();
            break;

        default:
            printf("Wrong choice");
    }

    return 0;
}
