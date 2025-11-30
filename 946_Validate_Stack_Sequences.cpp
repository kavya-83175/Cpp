// Problem: 946. Validate Stack Sequences
// Difficulty: Medium
// Approach: Simulate the stack using the pushed array and pop elements
//           whenever the top matches the popped array.
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        if(st.empty())
        return 1;
        else
        return 0;
    }
};
