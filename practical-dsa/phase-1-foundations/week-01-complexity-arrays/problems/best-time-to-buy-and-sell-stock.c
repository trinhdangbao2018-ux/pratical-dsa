//baciscally I ultilize 1 loop to go through every posibility inside an array
//this work because the every time the machine go through an element it find the highest
//posible way to earn interest and renember the lowest price to buy to use in the next loop

#include <stdio.h>
#include <stdlib.h>
int maxProfit(int* prices, int pricesSize) {
    long long buy = prices[0];
    long long profit = 0;
    for(int i = 0; i < pricesSize; i++){
        if(prices[i] < buy){
            buy = prices[i];
        }
        if(prices[i] -  buy > profit){
            profit = prices[i] - buy;
        }
    }
    return profit;
}
