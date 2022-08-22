#include <stdio.h>

int main()
{
    int cost,sell;
    printf("Enter cost price: ");
    scanf("%d", &cost);
    printf("Enter selling price: ");
    scanf("%d", &sell);

    (sell > cost)?
        printf("Profit = %d", sell - cost):
    (cost > sell)?
        printf("Loss = %d", cost - sell):
        printf("No Profit No Loss.");

    return 0;
}
