class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto a:s){
            if(a == '('){
                st.push(')');
            }else if(a == '{'){
                st.push('}');
            }else if(a == '['){
                st.push(']');
            }else {
                if(st.empty()){
                    return false;
                }
                char curr = st.top();
                st.pop();
                if(curr != a){
                    return false;
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
