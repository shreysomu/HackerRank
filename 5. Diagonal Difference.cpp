 

int diagonalDifference(vector<vector<int>> a) {
     int r=0,s=0;
    
    for(int i=0;i<a.size();i++){
        r+=a[i][i];
    }
    reverse(a.begin(),a.end());
    for(int j=0;j<a.size();j++){
        s+=a[j][j];
    }    
    return abs(s-r);

}
