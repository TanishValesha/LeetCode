class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char ch: s){
            if(!st.empty() && st.top() == ch){
                st.pop();
            } else {
                st.push(ch);
            }
        }

        string answer;
        while(!st.empty()){
            answer.push_back(st.top());
            st.pop();
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};