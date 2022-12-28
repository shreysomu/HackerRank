void plusMinus(vector<int> arr) {
 double Neg=0, Pos=0, Zero=0;
    for(int i =0; i<arr.size(); i++){
        if(arr[i]<0)
        Neg++;
        else if(arr[i]>0)
        Pos++;
        else Zero++; 
    }
    cout<<Pos/arr.size()<<endl<<Neg/arr.size()<<endl<<Zero/arr.size()<<endl;
}
