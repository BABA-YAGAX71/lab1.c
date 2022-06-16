#include<stdio.h>
int main (){
    int costing_price,selling_price,profit,loss;
    scanf("%d %d", &costing_price, &selling_price);

    if(costing_price>selling_price)
    {
        loss=costing_price-selling_price;
        printf("loss=%d",loss);
    }
    else
    {
        profit=selling_price-costing_price;
        printf("profit=%d",profit);
    }
    return 0;
}