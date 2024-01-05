class Solution {
public: 
    int lengthOfLIS(vector<int>& nums) {
        //dp with binary search - it is what it is 
        int n=nums.size();
        vector<int>helper;
        helper.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            if(helper.back()<nums[i]){
                helper.push_back(nums[i]);
            }
            else{
                int index=lower_bound(helper.begin(),helper.end(),nums[i])-helper.begin();
                helper[index]=nums[i];
            }
        }

        return helper.size();      
    }
};