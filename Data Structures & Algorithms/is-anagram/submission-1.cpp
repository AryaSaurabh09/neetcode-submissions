class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> arr(26,0);
        for(auto a:s){
            arr[a-'a']++;
        }
        for(auto a:t){
            int idx = a - 'a';
            if(arr[idx] == 0)return false;
            else arr[idx]--;
        }
        
        return true;
    }
};
