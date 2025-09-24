//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float purchasing_price, selling_price, loss, profit;
    
    printf("Enter the purchasing price and selling price: ");
    scanf("%f %f", &purchasing_price, &selling_price);

    if (purchasing_price == selling_price) {
        printf("No profit, no loss\n");
    }
    else if (purchasing_price > selling_price) {
        loss = ((purchasing_price - selling_price) * 100.0) / purchasing_price;
        printf("The loss is %.2f%%\n", loss);
    }
    else {
        profit = ((selling_price - purchasing_price) * 100.0) / purchasing_price;
        printf("The profit is %.2f%%\n", profit);
    }

    return 0;
}
