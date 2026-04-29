class Solution{
    public:
    boolen check(vector<int>& nums){
        int n = nums.size();
        int count = 0;


        for(int i = 0; i < n; i++){
            int next;
            if(i == n -1){
                next = 0;
            }
            else{
                next = i + 1;
            }
            if(nums[i] > nums[next]){
                count++;
            }
        }
        if (count <= 1){
            return true;
        }
        else {
            return false;
        }
    }
}