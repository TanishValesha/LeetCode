class Solution {
public:
    int findFirst(vector<int> &nums,int target){
        int n = nums.size();
        int fistPos = -1;
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                fistPos = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return fistPos;
    }
    int findLast(vector<int> &nums,int target){
        int n = nums.size();
        int lastPos = -1;
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                lastPos = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return lastPos;
    }
    vector<int> searchRange(vector<int> &nums,int target){
        int first = findFirst(nums, target);
        int second = findLast(nums, target);
        return {first, second};
    }
};