class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long int mid = (start + end) / 2;
        long long int ans = 0;
        while(start <= end){
            long int square = mid * mid;
            if(square == x){
                return mid;
            } else if(square > x){
                end = mid - 1;
            } else {
                start = mid + 1;
                ans = mid;
            }
            mid = (start + end) / 2;
        }
        return ans;
    }
};