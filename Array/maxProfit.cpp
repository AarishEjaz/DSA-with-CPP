int maxProfit(int price[], int n){
    int profit = 0;
    for(int i=1; i<n; i++ ){
        if(price[i]>price[i-1]){
            profit = profit + (price[i]-price[i-1]);
        }
    }
    return profit;
}

// in this problem we have an array with stocks price
//     we have to maximize the profit

//         we will buy the profit at their lowest and sell them at the heighest

//             we will traverse the array and see if the next element is greater than current we will sell it
//                 in terms of logic we will do : profit = profit + (price[i] - price[i - 1]);