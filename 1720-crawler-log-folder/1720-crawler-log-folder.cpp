class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(int i = 0; i < logs.size(); i++){
            if(logs[i] == "../"){
                count--;
                if(count < 0){
                    count = 0;
                }
            } else if(logs[i] == "./"){
                count;
            } else {
                count++;
            }
        }
        if(count <= 0){
            return 0;
        } else {
            return (count - 0);
        }
    }
};