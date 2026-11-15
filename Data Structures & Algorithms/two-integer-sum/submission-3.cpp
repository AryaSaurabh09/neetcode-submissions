class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            int temp = target - nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(temp == nums[j] )return {i,j};
            }
        }

        return ans;
    }
};
