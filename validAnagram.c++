// https://leetcode.com/problems/valid-anagram/description/

#include<bits/stdc++.h>  
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int>mp1,mp2;
        for (char i : s )
            mp1[i]++;
        for(char i : t )
            mp2[i]++;

        for (char i : s )
        {
            if(mp1[i]!=mp2[i])
                return false;
        }
        return true;
        
    }
};

int main() {   
    
    return 0;
}