class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> h;
        vector<int> result;
        int length = nums.size();
        for(int i=0;i<length;i++){
            h.insert(pair<int,int>(nums[i],i));
        }
        int i = 0,j = -1;
        for(;i<length;i++){
            int tmp = target - nums[i];
            if(h.find(tmp)!=h.end()){
                j = h[tmp];
                if(i != j){
                    break;
                }
            }
        }
        if(j != -1){
            result.push_back(i);
            result.push_back(j);
        }
        return result;
    }
};