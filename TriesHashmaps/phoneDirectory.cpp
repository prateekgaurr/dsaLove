#include<iostream>
#include<vector>
#include<string>
using namespace std;


class TrieNode{
    public:
    char data;
    TrieNode *childs[26] = {NULL};
    bool isTerminal;

    TrieNode(char data){
        this->data = data;
        for(auto child : childs)
            child = NULL;
        isTerminal = false;
    }
};


class Trie{
    public:

    TrieNode *root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* node, string word){
        if(word.length() == 0){
            node->isTerminal = true;
            return;
        }

        char ch = word[0];
        int idx = ch - 'a';
        TrieNode *next;

        if(node->childs[idx]){
            next = node->childs[idx];
        }
        else{
            next = new TrieNode(ch);
            node->childs[idx] = next;
        }
        insertUtil(next, word.substr(1));
    }

    void insert(string word){
        insertUtil(root, word);
        cout << endl
             << word << " -> Inserted Successfully";
    }


    void getNames(TrieNode* node, string prefix, vector<string> &tempAns){
        if(node->isTerminal){
            tempAns.push_back(prefix);
        }

        for (int i = 0; i < 26; i++){
            TrieNode *myNode = node->childs[i];
            if(myNode){
                char ch = i + 'a';
                prefix.push_back(ch);
                getNames(myNode, prefix, tempAns);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> getAnswer(string query){
        vector<vector<string>> ans;
        string prefix = "";
        TrieNode *prev = root;

        for(auto ch : query){
            prefix.push_back(ch);
            int mapping = ch - 'a';
            TrieNode *curr = prev->childs[mapping];

            if(curr){
                vector<string> tempAns;
                getNames(curr, prefix, tempAns);
                ans.push_back(tempAns);
                prev = curr;
            }
            else{
                break;
            }
        }
        return ans;
    }

};

int main(){
    system("cls");

    vector<string> contacts = {
        "geeksforgeeks",
        "geeksfortest",
        "geekiest"};

    string query = "geeksiii";

    Trie *t = new Trie();

    for(auto contact : contacts)
        t->insert(contact);

    cout << endl
         << "ALL CONTACTS INSERTED SUCCESSFULLY";

    vector<vector<string>> answer = t->getAnswer(query);

    cout << endl
         << "PRINTING ANSWERS NOW:  ";
    for (auto smallVector : answer){
        for(auto str : smallVector)
            cout << "\t" << str;
        cout << endl << endl;
    }

        return 0;
};