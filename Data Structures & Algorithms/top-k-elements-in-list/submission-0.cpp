class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto i : nums) {
            count[i]++;
        }

        vector<vector<int>>num(nums.size()+1);
        for(auto p: count) {
            num[p.second].push_back(p.first);
        }

        vector<int>out;
        for(int i = nums.size(); i>=1 && out.size()<k; i--) {
            for(auto j: num[i]) {
                out.push_back(j);
                if(out.size() == k){
                    break;
                }
            }
        }
        return out;
    }
};
