#include<iostream>
using namespace std;
int main(){
    int arr[4]={15,7,11,2};
    int target=17;
    int n=4;

    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            if (arr[i]+arr[j]==target){
                cout<<"Elements found at: "<<i << "," <<j <<endl;
                cout<<"Sum = "<< target <<endl;           
                return 0;
        }
    }
 }
}