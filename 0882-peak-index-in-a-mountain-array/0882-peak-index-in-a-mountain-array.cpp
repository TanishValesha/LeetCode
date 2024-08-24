class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int peak = 0;
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(arr[mid] < arr[mid + 1]){
                start = mid;
            } else if (arr[mid] < arr[mid - 1]){
                end = mid;
            }
            else if(arr[mid] > arr[mid + 1]){
                peak = mid;
                break;
            }
        }
        return peak;
    }
};