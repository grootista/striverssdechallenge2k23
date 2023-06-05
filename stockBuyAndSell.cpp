class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int maxpro=0;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            minp=min(minp,prices[i]);
            maxpro=max(maxpro,int(prices[i] - minp));
        }
        return maxpro;
    }
};
