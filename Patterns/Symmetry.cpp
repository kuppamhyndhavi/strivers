void symmetry(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++){
        int st=i;
        if(i>n) st=2*n-i;
        for(int j=1;j<=st;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=st;j++){
            cout<<"* ";
        }
        cout<<endl;
    
    
    }
}