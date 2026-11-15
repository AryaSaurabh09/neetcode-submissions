class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre = nums;
        int prev = nums[0];
        pre[0] = 1;
        for(int i=1; i<nums.size(); i++){
            pre[i] = pre[i-1]*prev;
            prev = nums[i];
        }
        vector<int> suf = nums;
        prev = nums[nums.size()-1];
        suf[nums.size()-1] = 1;
        for(int i=nums.size()-2; i>=0; i--){
            suf[i] = suf[i+1]*prev;
            prev = nums[i];
        } 
        vector<int> out;
        for(int i=0; i<nums.size(); i++){
            out.push_back(suf[i]*pre[i]);
        }
        return out;
    }
};
