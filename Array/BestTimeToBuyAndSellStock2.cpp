// Best Time to Buy and Sell Stock II
//take two pointer one as sell(prices[i]) and one as buy(start) iterate through whole array 
//and then check if buy is less then sell then add the profit(sell-buy) to the max and return 
//max
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int max = 0;
         int start = prices[0];
    for(int i = 1; i<prices.size(); i++){
        if(start < prices[i]){
            max += prices[i] - start;
        }
        start = prices[i];
    }
    return max;
    }
};