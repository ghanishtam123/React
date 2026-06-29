class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=0;

        while (i<n){
            if(nums[i]==nums[j]){
               
                i++;
            }
            else {
                j++;
                nums[j]=nums[i];
                i++;
            }
        }
        return j+1;
        
    }
};