#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *childs[26] = {};
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        isTerminal = false;
        for (auto child : childs)
            child = NULL;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertHelper(TrieNode *node, string word)
    {
        if (word.length() == 0)
        {
            node->isTerminal = true;
            return;
        }

        char ch = word[0];
        int index = ch - 'a';

        TrieNode *child = node->childs[index];

        if (!child)
        {
            child = new TrieNode(ch);
            node->childs[index] = child;
        }

        insertHelper(child, word.substr(1));
    }

    void insert(string word)
    {
        insertHelper(root, word);
    }

    int getChildCounts(TrieNode *node)
    {
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (node->childs[i])
                count++;
        }
        return count;
    }

    void commonPrefixHelper(TrieNode *node, string &prefix)
    {

        int count = 0;
        int mapping;

        for (int i = 0; i < 26; i++)
            if(node->childs[i]){
                count++;
                mapping = i;
            }

        if(count==0 or count > 1){
            return;
        }

        prefix.push_back(node->childs[mapping]->data);
        commonPrefixHelper(node->childs[mapping], prefix);
    }

    void commonPrefix(string &pref)
    {
        commonPrefixHelper(root, pref);
    }
};

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string pref = "";
        Trie *trie = new Trie();

        for (auto s : strs)
            trie->insert(s);

        trie->commonPrefix(pref);

        return pref;
    }

};

int main()
{
    vector<string> strs = {"flower",
                           "flow",
                           "flight"};
    
    Solution* sol = new Solution();

    cout << sol->longestCommonPrefix(strs);

}