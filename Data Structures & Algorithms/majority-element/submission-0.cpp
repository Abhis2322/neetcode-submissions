class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>most;
        int max=0;
        int maxe= nums[0];
        for(int i:nums) {
            most[i]++;

            if(most[i]>max) {
                max =most[i];
                maxe=i;
            }
        }
        return maxe;
    }
};