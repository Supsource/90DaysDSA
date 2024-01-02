vector<int> printNos(int x) {
    // Write Your Code Here
       vector<int> n;
       if(x>0){
           n=printNos(x-1);
           n.insert(n.begin(), x);
       }
       return n;
}