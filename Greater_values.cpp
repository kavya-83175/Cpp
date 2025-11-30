// Problem: 3759. Count Elements With at Least K Greater Values
// Approach: Sort the array, for each element count number of elements greater than it using upper_bound.
// If number of greater elements >= k, increment count.
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int it=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            int p=nums.size()-it;
            if(p>=k){
                cnt++;
            }
        }
        return cnt;
    }
};
