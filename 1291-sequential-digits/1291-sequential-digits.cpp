class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;
        for(int len = 2; len <= s.length(); len++) {
            for(int startIdx = 0; startIdx <= s.length()-len; startIdx++) {
                string temp = s.substr(startIdx, len);
                int possibility = stoi(temp);
                
                if(possibility >= low && possibility <= high) ans.push_back(possibility);
            }
            
        }
        return ans;
    }
};

// Time Complexity - O(1)
// Space Complexity - O(1)