class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int last = m + n - 1;
        m = m - 1;
        n = n - 1;
        // marged in reverse order
        // if both m and n bigger or equal to 0
        
        //if test case, m=0, where m = 0 - 1 = -1 (line 6)
        // in that case first while loop won't run.

        // another case, if (m<n) then m will be again m = -1
        // and n will remain in the operation.
        while(m>=0 && n>=0)
        {
            if(nums1[m]>nums2[n]){
                nums1[last] = nums1[m];
                m = m - 1;
            }
            else{
               nums1[last] = nums2[n];
                n = n - 1;
            }
            last = last - 1;
        }

        while(n>=0){
            nums1[last] = nums2[n];
                n = n - 1;
            last = last - 1;
        }
    }
};

// SOLVE 2 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         using sorting
        
        int i=0;
        // adds elements of num2 in the last of the array
        // works like pushback in vector
        while(i<n){
            
            nums1[m+i]=nums2[i];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};