// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0;
        int currentMax = 0;
        int i = 0;
        
        while(i<nums.size()){
            if(nums[i]==1){
                currentMax = currentMax + 1;
            }
            else
            {
                currentMax = 0;
            }
            maximum = max(currentMax,maximum);
            i++;
        }
     return maximum;   
    }
};