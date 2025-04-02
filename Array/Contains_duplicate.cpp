class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int>myHash;

        for(int i =0;i<nums.size();i++){
            myHash[nums[i]]++;
        }

        for(auto x:myHash){
            if(x.second>1){
                return true;
            }
        }
    
    return false;
    
    }
};
