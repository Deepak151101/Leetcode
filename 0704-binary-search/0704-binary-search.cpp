class Solution {
private:
    int binarySearch(int *arr, int s, int e, int k) {

        // Base Case
        if (s > e)
            return -1; // Element not found

        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
            return mid; // Element found at index mid
        } 
        else if (arr[mid] < k) {
            return binarySearch(arr, mid + 1, e, k);
        } 
        else {
            return binarySearch(arr, s, mid - 1, k);
        }
    }
    
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int *arr = &nums[0]; // Pointer to the first element of the vector

        return binarySearch(arr, 0, n - 1, target);
    }
};