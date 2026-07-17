class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>check;
        for(int i=0; i< nums.size(); i++) {
            int save= target - nums[i]; 
            if(check.count(save)) {
                return {check[save], i};
            }
             check[nums[i]] = i;
        }
        return {};
    }
};
