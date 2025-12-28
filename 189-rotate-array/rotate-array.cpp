class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n);
        for(int index=0;index<n;index++){
           int tempindex=(index+k)%n;
           ans[tempindex]=nums[index];
        }
        nums=ans;
    }
};