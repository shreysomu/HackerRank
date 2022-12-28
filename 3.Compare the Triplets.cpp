vector<int> compareTriplets(vector<int> a, vector<int> b) {

    
    vector<int> res;
    int Alice_Score = 0;
    int Bob_Score = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] > b[i]) 
            Alice_Score ++;
        else if(b[i] > a[i])
            Bob_Score++;
        }         
        res.push_back(Alice_Score);
        res.push_back(Bob_Score);
    return res;
}
