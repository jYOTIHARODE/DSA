#include<bits/stdc++.h>
using namespace std;

void solve(queue<int>&Q , int k)
{
    int n = Q.size();
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

    for(int i=0 ; i<n-k ; i++)
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
    queue<int>Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);

    int k = 2;

    solve(Q , k);

    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }

}
