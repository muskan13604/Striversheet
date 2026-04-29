class solution {
    public:
    int secondLargestElement(vectoe<int>& nums){
            int largest = nums[0];
            int secondl = -1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > largest){
                secondl = largest;
                largest = nums[i];
            }
            else if (nums[i] > largest && nums[i] < secondl){
                secondl = nums[i];
            }
        }
        return secondl;
    }
}