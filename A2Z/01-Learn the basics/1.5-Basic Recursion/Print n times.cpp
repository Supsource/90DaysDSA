// Problem Link : https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

vector<string> printNTimes(int n) {
	// Write your code here.
       if(n==0){
        return{};
    }
      vector<string>v = printNTimes(n-1); 
      v.push_back("Coding Ninjas");
  return v;
}