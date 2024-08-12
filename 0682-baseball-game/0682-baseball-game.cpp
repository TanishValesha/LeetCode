#include <vector> 

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                if(scores.size() >= 2){
                    scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
                }
                
            } else if (operations[i] == "D"){
                if(!scores.empty()){

                    scores.push_back(scores.back() * 2);
                }
            } else if(operations[i] == "C") {
                if(!scores.empty()){
                scores.pop_back();
                }
            } else {
                scores.push_back(stoi(operations[i]));
            }
        }
        // for(int i = 0; i < scores.size(); i++){
        //     totalScores += scores[i];
        // }
        return accumulate(scores.begin(), scores.end(), 0);
    }
};