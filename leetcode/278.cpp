class Solution {
public:
    int firstBadVersion(int n) {
        return binarySearch(1, n);
    }
    
    int binarySearch(int low, int high){
        if (low == high)
            return low;
        
        int mid = low + (high - low)/2;
        if (isBadVersion(mid))
            return binarySearch(low, mid);
        
        return binarySearch(mid + 1, high);
    }
};