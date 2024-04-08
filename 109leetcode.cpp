#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> q;
        for(int i = 0 ; i < students.size() ; i++){
            q.push(students[i]);
        }
        int i = 0 , count = 0;
        while(!q.empty() && count != q.size()){
            if(sandwiches[i] == q.front()){
                q.pop();
                i++;
                count = 0;
            }
            else{
                count++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};