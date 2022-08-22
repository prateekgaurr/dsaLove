#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length()!=str2.length())
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i <= str1.length(); i++){
        if(str1[i]!=str2[i])
            return false;
    }
    return true;
}

bool isAnagram2(string str1, string str2){
    if(str1.length()!= str2.length())
        return false;
    int count1[256] = {0};
    int count2[256] = {0};
    for (int i = 0; str1[i]; i++){
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if(count1[i]!=count2[i])
            return false;
    }
    return true;
}

char flip(char ch){
    if(ch=='0')
        return '1';
    else
        return '0';
}

int flipsRequired(string str){
    //if string stats with 0
    int flips0 = 0, flips1 = 0;
    char ch = '0';
    for (int i = 0; i < str.length(); i++){
        if(str[i]!=ch)
            flips0++;
        ch = flip(ch);
    }
    //if string starts with 1
    ch = '1';
    for (int i = 0; i < str.length(); i++){
        if(str[i]!=ch)
            flips1++;
        ch = flip(ch);
    }
    return min(flips0, flips1);
}


// int compress(char * arr){
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int uniqueCharCount = 0;
//     int numsCount = 0;
//     char previous = arr[0];
//     int thisCharCount = 0;
//     for (int i = 1; i < size; i++){
//         //case if new characher is equal to previous
//         if(arr[i]==previous){
//             arr[i] = ++thisCharCount;
//         }
//         //case if new character is not equal to previous
//         else{

//         }

//     }
// }

    int isSubstring2(string small, string large){
        int smallsize = small.length(), largesize = large.length();
        for (int i = 0; i <= largesize - smallsize; i++){
            int j;
            for (j = 0; j < smallsize; j++){
                if(large[i+j]!= small[j]) break;
            }
            if(j==smallsize)
                return i;
        }
        return -1;
    }


    int isSubstring(string sub, string large){
        int smallsize = sub.length(), largesize = large.length();
        int j = 0;
        for (int i = 0; i < largesize; i++){
            if(j==smallsize)
                return i-smallsize;
            if(large[i]==sub[j])
                j++;
            else
                j = 0;
        }
        return -1;
    }


    bool areRotation(string s1, string s2){
        if(s1==s2)
            return true;
        if(s1.length() != s2.length())
            return false;
        string temp = s1 + s1;
        if(temp.find(s2))
            return true;
        return false;
    }

    char maxOccuring(string str)
    {
        int finder[26] = {0};
        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z')
                finder[(int)ch - 'a']++;
            else
                finder[(int)ch - 'A']++;
        }

        // checking finder array
        int maxi = -1, ans=0;
        for (int i = 0; i < 26; i++){
            if (maxi < finder[i]){
                maxi = finder[i];
                ans = i;
            }
        }
        return ans + 'a';
    }

    char maxOccuring2(string str){
        int count[26] = {0};
        int size = str.length();
        // for counting occurences
        for (int i = 0; i < size; i++)
        {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z')
                count[ch - 'a']++;
            else if (ch >= 'A' && ch <= 'Z')
                count[ch - 'A']++;
        }
        // for getting count
        int maxi = -1, ans = 0;
        for (int i = 0; i < 26; i++){
            if (maxi < count[i]){
                maxi = count[i];
                ans = i;
            }
        }
        // return the charater
        return ans + 'a';
    }

    string reverseWhole(string str){
        int s = 0, e = str.length()-1;
        while(s<e){
            swap(str[s], str[e]);
            s++;
            e--;
        }
        return str;
    }

    string reverseWhole2(string str) {
        reverse(str.begin(),str.end());
        return str;
    }

    string reverseWords(string str){
        string neww = "";
        string word = "";
        int start = 0, end = 0;
        for (int i = 0; i < str.length(); i++){
            if(str[i]==' '){
            
            }
        }
    }

    int factorialr(int num){
        if(num == 1)
            return 1;
        return num * factorialr(num - 1);
    }

    void printc(int n){
        if(n==0)
            return;

        printc(n - 1);
        
        cout << endl
             << n;
        
    }


    

    int main()
    {
        string str1 = "television is";
        string str2 = "television";
        string strBinary = "0001010111";


        // cout << endl<<isAnagram2(str1, str2);

        // cout << "Flips Required: " << flipsRequired(strBinary);

        // cout << "Is Present: " << isSubstring("for", "geeksforgeeks");

        // cout << "Is Palindrome: " << isPalindrome("bob");

        // cout << "Max Occuring: " << maxOccuring("testsamplett");

        // cout << "Are rotation: " << areRotation(str1, str2);

        // cout << "Max Occuring: " << maxOccuring("gfdghu");

        // cout << "Reverse Whole2: " << reverseWhole("My name is Prateek");

        // cout << "Reverse Words: " << reverseWords("My name is Prateek");

        // cout << "Recusrive Factorial: " << factorialr(5);

        cout << "Counting:" << endl;
        printc(5);

        return 0;


        }