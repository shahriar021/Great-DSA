class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0,r,matchCount=0;

        unordered_map<char,int>s1map,window;

        for(auto s:s1){
            s1map[s]++;
        }

        for(r=0;r<s2.length();r++){
            char R=s2[r];
            window[R]++;

            if(s1map.count(R) && window[R]==s1map[R]){
                matchCount++;
            }

            if(r-l+1>s1.size()){
                char L=s2[l];
                if(s1map.count(L) && window[L]==s1map[L]){
                    matchCount--;
                }
                window[L]--;
                l++;
            }
            
            if(matchCount==s1map.size()){
                return true;
            }
        }

        return false;
        
    }
};

// again

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0,r=0;
        unordered_map<char,int>s1map,s2map;

        for(auto x:s1){
            s1map[x]++;
        }

        while(r<s2.size()){
            s2map[s2[r]]++;

            if(r-l+1>s1.size()){
                s2map[s2[l]]--;
                if(s2map[s2[l]]==0){
                    s2map.erase(s2[l]);
                }
                l++;
            }

            if(r-l+1==s1.size()){
                if(s1map==s2map){
                    return true;
                }
            }


            r++;
        }
        return false;
    }
};

