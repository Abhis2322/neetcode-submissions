class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> p1;
        for(int i=0; i<nums.size() ; i++){
            int diff =target -nums[i];

            if(p1.find(diff)!= p1.end()) {
                return {p1[diff],i};
            }
            p1.insert({nums[i],i});
        }
        return {};
        
    }
};
