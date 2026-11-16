class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> rightMax(n);
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int ans = 0;
        int leftMax = 0;

        for (int i = 0; i < n; i++) {
            leftMax = max(leftMax, height[i]);
            int waterLevel = min(leftMax, rightMax[i]);
            ans += waterLevel - height[i]; 
        }

        return ans;
    }
};