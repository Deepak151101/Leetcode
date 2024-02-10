class Solution {
public:
    bool isPalindrome(const std::string& s, int left, int right) {
        while (left < right) {
            if (std::tolower(s[left++]) != std::tolower(s[right--])) {
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        // Iterate through all possible starting points
        for (int i = 0; i < n; ++i) {
            // Expand around the current center, checking for palindromes
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j)) {
                    ++count;
                }
            }
        }
        return count;
    }
};