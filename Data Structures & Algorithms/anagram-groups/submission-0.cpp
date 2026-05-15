class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp ="";
        unordered_map<string,vector<string>>ana;
        for(int i =0; i<strs.size(); i++) {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            ana[temp].push_back(strs[i]);
        }
     vector<vector<string>> ans;

    for(auto pair : ana) {
        ans.push_back(pair.second);
    }

    return ans;   
    }
};
