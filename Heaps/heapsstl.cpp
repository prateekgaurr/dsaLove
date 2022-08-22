#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> q;

    // stack<int> q;

    q.push(30);
    q.push(40);
    q.push(50);
    q.push(20);
    q.push(10);
    q.push(5);
    q.push(300);
    q.push(0);
    q.push(765);
    q.push(500);
    q.push(205);
    q.push(1);
    q.push(53);
    q.push(56);


    while(!q.empty()){
        cout << q.top() << "  ";
        q.pop();
    }
    return 0;
}