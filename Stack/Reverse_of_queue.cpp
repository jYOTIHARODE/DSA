#include<bits/stdc++.h>
using namespace std;

void solve(queue<int>&Q)
{
    stack<int>s;
    while(!Q.empty())
    {
        s.push(Q.front());
        Q.pop();
    }

    while(!s.empty())
    {
        Q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    solve(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
