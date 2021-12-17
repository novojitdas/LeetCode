// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/
class Solution {
public:
    int numberOfDigits(int n){
        int counter = 0;
        while(n>0){
            n = n/10;
            counter++;
        }
        return counter;
    }
    
    int findNumbers(vector<int>& nums) {
        
        int even = 0;
        for(int i: nums)
        {
            if(numberOfDigits(i)%2==0)
            {
                even++;
            }
        }
        
       return even; 
    }
};