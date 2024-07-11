// https://leetcode.com/problems/group-anagrams/

#include<bits/stdc++.h>  
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

            unordered_map<string,vector<string>>mp;
            for(int i=0;i<strs.size();i++)
            {
                mp[getKey(strs[i])].push_back(strs[i]);
            }
            vector<vector<string>>result;
            for(auto i:mp){
                result.push_back(i.second);
            }
            return(result);
    }
private:
    string getKey(string str){
        vector<int>count(26);
        for(int i=0;i<str.size();i++){
            count[str[i] - 'a']++;        
        }
        string key="";
        for (int i=0;i<count.size();i++){
            key.append(to_string(count[i])+ '#');
        }
        return key;
    }
    
    
};
int main() {   
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);
    for (const auto& group : result) {
        cout << "[";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}