#include<bits/stdc++.h>
using namespace std;

class MyStack{

    public:
    int* arr;
    int top
;
    int size;   


    MyStack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int data){
        top++;
        arr[top] = data;
    }

    void pop(){
        top--;
    }

    int getSize(){
        return size;
    }

    int getTop(){
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        return false;
    }

};

int findMaxLen(string s)
{
    // code here
    stack<int> st;
    st.push(-1);
    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(i);

        else
        {
            st.pop();

            if (st.empty())
                result = max(result, i - st.top());

            else
                st.push(i);
        }
    }

    return result;
}

int main(){

    cout << findMaxLen("(()(");
}