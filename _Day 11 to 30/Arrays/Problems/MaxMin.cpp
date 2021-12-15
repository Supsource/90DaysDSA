// Header files

#include<iostream>
using namespace std;


// Func for getting minimum value
int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        mini = min(mini, num[i]);
    }
    // Returning the minimum value
    return mini;
}


// Func for getting maximum value
int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(maxi, num[i]);
    }
    // Returning the maximum value
    return maxi;
}


// Func for compring
int main(){
   int size;
   cin>>size;
   int num[100];

   // Taking input in arrays
   for(int i =0; i<size; i++){
       cin>>num[i];
   }
   cout<<"Maximum value is "<<getMax(num, size)<<endl;
   cout<<"Minimum value is "<<getMin(num, size)<<endl;

   return 0;
}
