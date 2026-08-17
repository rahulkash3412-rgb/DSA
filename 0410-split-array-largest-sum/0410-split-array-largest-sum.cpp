class Solution {
int fxn(vector<int>& a ,long long sum){
   int ele=1;
   long long cursum=0;
   for(int it : a){
    if(cursum + it <= sum)cursum += it ;
    else {
    ele++;
    cursum=it;
         }
                 }
   
return ele;
}


public:
    int splitArray(vector<int>& a, int k) {
        int low = *max_element(a.begin(),a.end());
long long high = accumulate(a.begin(),a.end(),0LL);
long long ans = high;
while(low<=high){
    long long mid = (low+high)/2;
   int elements=fxn(a,mid);
    if(elements>k) low = mid+1;
    else {high = mid-1;
    ans = mid;}
    }
    return ans;
}
};