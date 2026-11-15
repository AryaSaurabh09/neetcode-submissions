class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length()!=t.length()) return false;
        vector<int> arr(26,0);
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i]!=0) return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0) return {{}};
        vector<vector<string>> ans;
        ans.push_back({strs[0]});
        for(int i=1; i<strs.size(); i++){
            string s = strs[i];
            bool temp = false;
            for(int j=0; j<ans.size(); j++){
                string t = ans[j][0];
                if(isAnagram(s,t)){
                    ans[j].push_back(s);
                    temp = true;
                    break;
                }
                
            }
            if(!temp){
                ans.push_back({s});
            }
        }
        return ans;
    }
};
