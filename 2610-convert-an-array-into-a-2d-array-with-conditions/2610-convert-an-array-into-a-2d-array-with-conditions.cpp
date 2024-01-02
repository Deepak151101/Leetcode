class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> freq; // Map of frequencies which we maintain

        for(auto el : nums){ // Go to every element
            freq[el]++; // Increase it's freq
            if(ans.size() < freq[el])
                ans.push_back({}); // To get a new row inside ans vector
            ans[freq[el] - 1].push_back(el);
            // If freq is 3, it will be pushed at row 2
            // If freq is 2, it will be pushed at row 1
        }

        return ans;
    }
};