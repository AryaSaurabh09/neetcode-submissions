class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left<=right)
        {
            while (!(s[left] >= 65 && s[left] <= 90 || s[left] >= 97 && s[left] <= 122 || s[left] >= 48 && s[left] <=57 )&& left < right) {
            left++;
            }
            while (!(s[right] >= 65 && s[right] <= 90 || s[right] >= 97 && s[right] <= 122 || s[right] >= 48 && s[right] <=57 )&& left < right) {
            right--;
            }
            
            if(s[left]>=65 && s[left]<=90) s[left]+=32;
            if(s[right]>=65 && s[right]<=90) s[right]+=32;
            if(s[left] != s[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
