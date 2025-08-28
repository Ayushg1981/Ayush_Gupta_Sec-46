class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,j=arr.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int x=arr[mid]-mid-1;
            if(x<k) i=mid+1;
            else j=mid-1;
        }
        return j+k+1;
    }
};