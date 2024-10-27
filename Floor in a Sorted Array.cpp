class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        int low=0;
        int high=n-1;
        int k=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(x>=v[mid])
            {
                k=mid;
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        return k;
    }
};
