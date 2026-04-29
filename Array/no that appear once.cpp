class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int count = 0;
        

        for (int j = 0; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count == 1){
            return nums[i];
        }
    }
    return -1;
    }
};




class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            ans = ans ^ nums[i]; //(ans XOR NUM)
        }

        return ans;
    }
};