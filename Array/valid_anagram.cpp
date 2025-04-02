class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,int>myHash;

        for(int i=0;i<s.size();i++){
            myHash[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            myHash[t[i]]--;
        }

        for(auto x:myHash){
            if(x.second>0){
                return false;
            }
        }

        return true;
        
    }
};

// time complexity O(n)
// in worst time complexity ,if collide

// space complexity O(1)

