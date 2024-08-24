class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = numbers[start] + numbers[end];
            if(mid == target){
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                break;
            }
            else if(mid < target){
                start++;
            } else if (mid > target){
                end--;
            }
        }
        return ans;

    }
};