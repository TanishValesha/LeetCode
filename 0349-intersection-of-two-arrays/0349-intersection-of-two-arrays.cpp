class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> answer;
        int i = 0;
        int j = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while( i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            } else if(nums1[i] > nums2[j]){
                j++;
            } else {
                st.insert(nums1[i]);
                i++;
                j++;
            }
        }

        for(auto it: st){
            answer.push_back(it);
        }

        return answer;
    }
};