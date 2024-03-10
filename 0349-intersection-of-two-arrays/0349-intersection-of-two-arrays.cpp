class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s(nums1.begin(), nums1.end());
        vector<int> ans;
        for(auto i : nums2) if(s.find(i) != s.end()) ans.push_back(i), s.erase(i);
        return ans;
    }
};