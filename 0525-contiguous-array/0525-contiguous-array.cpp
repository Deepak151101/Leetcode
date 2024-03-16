class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        std::unordered_map<int, int> arr;
        arr[nums.size()] = -1;
        int maxlen = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += (nums[i] == 0 ? -1 : 1);
            if (arr.find(count + nums.size()) != arr.end()) {
                maxlen = std::max(maxlen, i - arr[count + nums.size()]);
            } else {
                arr[count + nums.size()] = i;
            }
        }
        return maxlen;
    }
};