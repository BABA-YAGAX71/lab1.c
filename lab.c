#include<stdio.h>
int main()
{
    int selling_price,costing_price,profit,loss;
    scanf("%d %d", &selling_price, &costing_price);

    if(selling_price>costing_price)
    {
        profit=selling_price-costing_price;
        printf("PROFIT = %d",profit);
    }
    else
    {
        loss=costing_price-selling_price;
        printf("LOSS = %d",loss);
    }
    return 0;
}
