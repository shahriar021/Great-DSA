class Solution {
    public:
        vector<int> sortArray(vector<int>& nums) {
            if (nums.size() <= 1) return nums;
    
            int mid = nums.size()/2;
    
            vector<int>left(nums.begin(),nums.begin()+mid);
            vector<int>right(nums.begin()+mid,nums.end());
    
            return merge(sortArray(left),sortArray(right));
            
        }
    
        vector<int> merge(const vector<int>& left,const vector<int>& right){
            vector<int>r;
    
            int i=0,j=0;
    
            while(i<left.size() && j <right.size()){
                if(left[i]<right[j]){
                    r.push_back(left[i++]);
                }else{
                    r.push_back(right[j++]);
                }
            }
    
            while(i<left.size()){
                r.push_back(left[i++]);
            }
            while(j<right.size()){
                r.push_back(right[j++]);
            }
            return r;
        }
    };