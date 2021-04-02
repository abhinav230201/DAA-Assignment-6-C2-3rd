#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,w;
    cin>>n>>w;
    pair<double,double>arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i].first>>arr[i].second;
    sort(arr,arr+n,[](auto a,auto b){
       return a.first/a.second > b.first/b.second; 
    });
    double current_weight=0, current_profit=0;
    for(int i=0;i<n;i++){
        if(current_weight+arr[i].second<=w){
            current_profit+=arr[i].first;
            current_weight+=arr[i].second;
        }
        else{
            current_profit+=arr[i].first*(w-current_weight)/arr[i].second;
            current_weight=w;
        }
    }
    cout<<"Maximum Profit we can obtain is : "<<setprecision(15)<<current_profit;
}
