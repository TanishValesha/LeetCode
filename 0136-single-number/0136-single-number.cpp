class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(auto it = nums.begin(); it != nums.end(); it++){
            result = result ^ *(it);
        }
        return (result);

    }
};