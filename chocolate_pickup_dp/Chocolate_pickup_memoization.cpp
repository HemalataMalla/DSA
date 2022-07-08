int fun(int r,int c,int row,int acol,int bcol,vector<vector<vector<int>>> &v,vector<vector<int>> &grid){
    if(row>=r ||  acol<0 || acol>=c || bcol<0 || bcol>=c)
        return INT_MIN;
    if(row==r-1)
    {
        if(bcol==acol)
            return grid[row][acol];
        else
            return grid[row][acol]+grid[row][bcol];
    }
    if(v[row][acol][bcol]!=-1) return v[row][acol][bcol];
    int maxi=INT_MIN,ans;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(bcol==acol){
                ans= grid[row][acol]+fun(r,c,row+1,acol+i,bcol+j,v,grid);
            }
            else{
                ans= grid[row][acol]+grid[row][bcol]+fun(r,c,row+1,acol+i,bcol+j,v,grid);
            }
            maxi=max(maxi,ans);
        }
    }
    return v[row][acol][bcol]=maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> v(r,vector<vector<int>> (c,vector<int> (c,-1)));
    return fun(r,c,0,0,c-1,v,grid);
}