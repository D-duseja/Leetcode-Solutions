class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                if((j-i)>n/2)
                return nums[i];

                i=j;
            }
            else
            j++;
        }
        return nums[i];
    }
};