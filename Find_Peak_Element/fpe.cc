class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        assert(A.size()>=3); 
        int l = 1;
        int r = A.size()-2;
        while(l<r)
        {
            int m = (l+r)/2; 
            if(A[m]>A[m-1] && A[m]>A[m+1])
                return m;
            else if(A[m]<A[m-1])
                r = m-1;
            else 
                l = m+1;
        }
        return l;
    }
};


