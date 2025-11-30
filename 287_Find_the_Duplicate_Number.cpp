// Problem: 287. Find the Duplicate Number
// Difficulty: Medium
// Approach: Use an unordered_map to count occurrences of each number.
//           Return the number that appears more than once.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto& p:m){
            if(p.second>1){
                return p.first;
            }
        }
        return 0;
    }
};
