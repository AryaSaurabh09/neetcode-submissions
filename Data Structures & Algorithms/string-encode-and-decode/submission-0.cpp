class Solution {
public:

    string encode(vector<string>& strs) {
        string delimiter = "~@!";
        string output ;
        for(int i=0; i<strs.size(); i++)
        {
            output = output + strs[i] + delimiter;
        }
        return output;
    }

    vector<string> decode(string str) {
        string delimiter = "~@!";
        vector<string> tokens;

        size_t start = 0;
        size_t end;

        while ((end = str.find(delimiter, start)) != string::npos) {
            tokens.push_back(str.substr(start, end - start));
            start = end + delimiter.length();
        }
        return tokens;
    }
};
