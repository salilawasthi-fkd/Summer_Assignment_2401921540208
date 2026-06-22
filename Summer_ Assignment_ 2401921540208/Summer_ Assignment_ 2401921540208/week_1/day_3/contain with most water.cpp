class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int bestArea = 0;

        while (left < right) {
            int width = right - left;
            int currHeight = min(height[left], height[right]);
            int area = width * currHeight;

            bestArea = max(bestArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return bestArea;
    }
};