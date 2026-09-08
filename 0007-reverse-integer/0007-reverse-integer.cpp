class Solution {
public:
    int reverse(int x) {
        int rev=0;
        for(int i=x;i!=0;i=i/10) {
            int rem=i%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) {
                return 0;
                break;
            }
            rev=rev*10+rem;
            
        }
        return rev;
    }
};