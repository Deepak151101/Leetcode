class Solution {
private:
    void bubbleSort(vector<int>& nums, int n) {
        // Base Case - Already sorted
        if(n == 0 || n == 1) 
            return ;
        
        // Solve 1 case -> Place the largest element at the end
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
            }
        }
        
        bubbleSort(nums, n - 1);  // Corrected recursive call
    }
    
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        bubbleSort(nums, size);
    }
};
