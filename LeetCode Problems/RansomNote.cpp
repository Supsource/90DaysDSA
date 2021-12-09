/*
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
*/


//ANS : 


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(int i=0; i<magazine.size(); i++) {
            m[magazine[i]]++;
        }
        for (int i=0; i<ransomNote.size(); i++) {
            char c = ransomNote[i];
            if (m[c] <=0 ) return false;
            m[c]--;
        }
        return true;
    }
};
