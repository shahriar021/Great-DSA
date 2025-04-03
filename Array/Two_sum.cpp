class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>result;

        vet

        for(int i=0;i<nums.size();i++){
            int rest=target-nums[i];
            if(result.find(rest) != result.end()){
                return {result[rest],i};
            }
            result.insert({nums[i],i});
        }
        return {-1,-1};
    }
};
