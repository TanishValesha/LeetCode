class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char ch: s){
            if(!st.empty() && ch != st.top() && (ch == toupper(st.top()) || toupper(ch) == st.top())){
                st.pop();
            } else {
                st.push(ch);
            }
        }
        string answer = "";
        while(!st.empty()){
            answer.push_back(st.top());
            st.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};