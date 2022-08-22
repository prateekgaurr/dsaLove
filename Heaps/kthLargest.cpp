#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int,vector<int>,greater<int>> q;

    int i;

    for (i = 0; i < k; i++)
    {
        q.push(nums[i]);
        printf("%d  ", nums[i]);
    }

    printf("\ninserted %d\n", k);

    for (int i = k; i < nums.size(); i++)
    {
        printf("\ntrying to insert %d from index %d and q top is %d", nums[i], i, q.top());
        if (nums[i] > q.top())
        {
            q.pop();
            q.push(nums[i]);
            printf("  INSERTED");
        }
    }
    cout << endl
         << "Giving back q top"<< q.top();
    return q.top();
}

int main(){
    string org = "aaaaabbbccd";

    vector<string> strings;

    char prev = org[0];

    string c = org.substr(0, 1);
    strings.push_back(c);

    string toPush = "";

    for (int i = 1; i<org.length(); i++){

        // find current char
        char curr = org[i];

        // if curr == prev, append and push
        if (prev == curr){
            toPush.append(1, curr);
            strings.push_back(toPush);
        }

        // if curr is not equal to prev
        else{
            toPush = "";
            toPush.append(1, curr);
            strings.push_back(toPush);
        }
        prev = curr;
    }


    // printing all entries
    for(auto str : strings){
        cout << str << "\n";
    }
}