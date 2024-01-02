// Problem link: https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void fun(int x, vector<int> &v){
    if (x == 0) return;
    fun(x-1, v);
    v.push_back(x);
} 


vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>v;
    fun(x,v);
    return v;
}