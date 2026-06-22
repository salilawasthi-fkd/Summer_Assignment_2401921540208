class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxGain = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxGain = max(maxGain, price - minPrice);
        }

        return maxGain;
    }
};