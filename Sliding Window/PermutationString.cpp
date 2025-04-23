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
