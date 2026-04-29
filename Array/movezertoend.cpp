class solution{
    public:
    void movezero(vector<int>& nums){
        int j = 0;
        for(int i = 0; i = nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
}
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }

        while(j < nums.size()){
            nums[j] = 0;
            j++;
        }
    }
};