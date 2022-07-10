int fun(vector<int>& arr, int n,int sum1,int sum2,int mini){
    if(n<0)return mini;
    if(sum1-sum2==0) return 0;
    if(abs(sum1-sum2)>mini)return mini;
    else
        mini=abs(sum1-sum2);
    return mini=min(fun(arr,n-1,sum1-arr[n],sum2+arr[n],mini),fun(arr,n-1,sum1,sum2,mini));
}

int minSubsetSumDifference(vector<int>& arr, int n)
{
    int sum=0;
    for(auto i: arr)
        sum+=i;

    // This function fun works but memoization is not working. Hence it will return TLE for some cases
//  return fun(arr,n-1,sum,0,99999);

    // Tabulation dp method
    vector<vector<bool>> dp(n,vector<bool> (sum+1,false));
    for(int i=0;i<n;i++) dp[i][0]=true;
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
            int not_take= dp[i-1][j];
            int taken=false;
            if(arr[i]<=j)taken=dp[i-1][j-arr[i]];
            dp[i][j]=not_take|taken;
        }
    }
    int mini=999999;
    for(int i=0;i<sum+1;i++){
        int ans;
        if(dp[n-1][i]){
            ans= abs(sum-2*i);
            mini=min(mini,ans);
        }
    }
    return mini;
}
