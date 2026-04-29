

class Solution {
    public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k = k % n;

        // k position s right rotate
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);

        //reverse left

        reverse(nums, 0, k-1);
        reverse(nums,k,n-1);
        reverse(nums,0,n-1);

    }

    void reverse(int[] nums, int left, int right){
        while(left < right){
            swap(nums[left] < nums[right]);
            left++;
            right--
        }
    }
}