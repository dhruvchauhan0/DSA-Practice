class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0 ,bb = prices[0];
        for(int i = 0 ; i<prices.size() ; i++){
            if(bb < prices[i]){
                maxprofit = max(maxprofit, prices[i] - bb);
            }
            bb = min(bb, prices[i]);
        }
        return maxprofit ;
    }
};