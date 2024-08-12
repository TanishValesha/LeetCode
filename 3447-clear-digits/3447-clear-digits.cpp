class Solution {
public:
    bool isDigit(char a){
        string nums = "0123456789";
        for(char ch: nums){
            if(ch == a){
                return true;
            }
        }
        return false;
    }
    string clearDigits(string s) {
        int strLen = s.length();
        for(int i = 0; i < strLen; i++){
            if(isDigit(s[i])){
                if(i != 0){
                    s.erase(i-1, 2);
                    i -= 2;
                    strLen -= 2;
                } else {
                    s.erase(i, 1);
                    i--;
                    strLen--;
                }
            }
        }
        return s;

    }
};