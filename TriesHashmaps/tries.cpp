#include<iostream>
using namespace std;


class TrieNode{
    public:
    char data;
    bool isTerminal;
    TrieNode *childrens[26];

    TrieNode(char data){
        this->isTerminal = false;
        for (auto trieNode : this->childrens){
            trieNode = NULL;
        }
        this->data = data;
    }
};

class MyTrie{

    public:
    TrieNode *root;

    MyTrie()
    {
        this->root = new TrieNode('\0');
    }

    void insertHelper(TrieNode* myRoot, string str)
    {
        if (str.length() == 0){
            myRoot->isTerminal = true;
            return;
        }
            
        char strChar = str[0];
        int index = strChar - 'a';

        TrieNode *child;

        // child not null hai, mtlb wo already exist krta h, age badho, or string ka ek char nikal dena
        if (myRoot->childrens[index] != NULL)
        {
            // cout << "\nChild phle hi mil gya tha, string ka ek character kam krke aage badh rha hu";
            child = myRoot->childrens[index];
            }
            //character nahi mila, root ki appropriate location pe nya TrieNode bnao or lga do
            else{
                child = new TrieNode(strChar);
                myRoot->childrens[index] = child;
                // cout << "\nNahi mila tha, nya bnaya or lga dia";
            }
            insertHelper(child, str.substr(1));
    }


    bool searchHelpder(TrieNode* myRoot, string s){
        if(s.length() == 0){
            return myRoot->isTerminal;
        }

        if(!myRoot) return false;

        char ch = s[0];
        int index = ch - 'a';

        return searchHelpder(myRoot->childrens[index], s.substr(1));
        
        
    }


    bool search(string str){
        return searchHelpder(root, str);
    }

    void insert(string s){
        insertHelper(root, s);
        cout << "\n"
             << s << " --> Insert Successful";
    }

};



int main(){
    MyTrie* myTrie = new MyTrie();
    
    myTrie->insert("code");
    myTrie->insert("codehelp");
    myTrie->insert("codemonk");
    myTrie->insert("coder");
    myTrie->insert("codingbaaz");
    myTrie->insert("keeda");

    cout << endl
         << myTrie->search("co");
    cout << endl
         << myTrie->search("cod");
    cout << endl
         << myTrie->search("code");
    cout << endl
         << myTrie->search("codehel");
    cout << endl
         << myTrie->search("codehelper");
    cout << endl
         << myTrie->search("codehelp");
    cout << endl
         << myTrie->search("codingbaaz");

    int arr[26] ={0};

    for(auto i : arr){
        cout << endl
             << i;
    }
}