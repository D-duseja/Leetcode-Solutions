class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int su=0;
        int sum=0;
        for(int i=1;i<=nums.size();i++){
            su=su+i;
        }

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }

        return (su-sum);

    }
};