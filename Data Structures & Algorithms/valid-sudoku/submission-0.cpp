class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            vector<int> arr(9,0);
            for(int j=0; j<board[0].size(); j++){
                int idx = board[i][j] - '1';
                if(idx>=0 && idx<=9){
                    if(arr[idx] != 0) return false;
                    arr[idx]++;
                }
            }
        }
        for(int i=0; i<board.size(); i++){
            vector<int> arr(9,0);
            for(int j=0; j<board[0].size(); j++){
                int idx = board[j][i] - '1';
                if(idx>=0 && idx<=9){
                    if(arr[idx] != 0) return false;
                    arr[idx]++;
                }
            }
        }
        int sr = 0;
        int se = 2;
        int cr = 0;
        int ce = 2;
        while(se<9){
            cr = 0;
            ce = 2;
            while(ce<9){
            vector<int> arr(9,0);
            for(int i=sr; i<=se; i++){
                for(int j=cr; j<=ce; j++){
                    int idx = board[i][j] - '1';
                    if(idx>=0 && idx<=9){
                        if(arr[idx] != 0) return false;
                        arr[idx]++;
                    }
                }
            }
            cr += 3;
            ce += 3;
            }
            sr+=3;
            se+=3;
        }
        return true;
    }
};
