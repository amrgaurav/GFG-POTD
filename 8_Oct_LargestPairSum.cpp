class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int sum=0;
        sort(arr.begin(),arr.end());
        sum+=arr[arr.size()-1]+arr[arr.size()-2];
    }
};
