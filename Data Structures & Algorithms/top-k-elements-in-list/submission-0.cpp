class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        while(k>0){
            int max = nums[0];
            int temp = mp[nums[0]];
            for(auto a:mp){
                if(a.second > temp) {
                    temp = a.second;
                    max = a.first;
                }                    
            }
            ans.push_back(max);
            mp[max] = -1;
            k--;
            // mp.remove(max);
        }
        return ans;
    }
};
