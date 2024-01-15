class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> w,l; // 2 set of winners & loosers - Automatically sorts the entries
        unordered_map<int, int> tot;
        
        for(auto it: matches)
            w.insert(it[0]), l.insert(it[1]), tot[it[1]]++; // Adding 1st elem i winner set & 2nd elem in looser set.... in tot store the elem and how many times have they lost
                     
        vector<int> v1, v2;
        vector<vector<int>> ans;
        
        for(auto it: w)
            if(tot.find(it) == tot.end()) // If never lost
                v1.push_back(it); // v1 stores only those elem who have won 
                     
        for(auto it: l)
            if(tot[it] == 1)
                v2.push_back(it);
        
        ans.push_back(v1);
        ans.push_back(v2);
                     
        return ans;
    }
};