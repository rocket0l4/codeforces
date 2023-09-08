#include <stdio.h>
#include <stdlib.h>
int solve()
{
    int n, a[10][10], i, j,k, b[10][10], c[10][10];
    printf("\nEnter the value of N:");
    scanf("%d", &n);
    printf("\nEnter the column limit:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter second Matrix values:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] =0;
            for(k =0;k<n;k++){
                c[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    printf("The product of two matrices is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    solve();
    return 0;
}