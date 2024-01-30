#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(int i = 0 ; i <tokens.size() ; i++){
            int n,k;
            if(tokens[i] == "+"){
                n = st.top();
                st.pop();
                k = st.top();
                st.pop();
                n += k;
                st.push(n);
            }
            else if(tokens[i] == "-"){
               n = st.top();
                st.pop();
                k = st.top();
                st.pop();
                k -= n;
                st.push(k);
            }
            else if(tokens[i] == "*"){
                n = st.top();
                st.pop();
                k = st.top();
                st.pop();
                n *= k;
                st.push(n);
            }
            else if(tokens[i] == "/"){
                n = st.top();
                st.pop();
                k = st.top();
                st.pop();
                k /= n;
                st.push(k);
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};