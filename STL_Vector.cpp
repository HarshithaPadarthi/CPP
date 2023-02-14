#include<iostream>
#include<vector>
using namespace std;
int main(){
  //vector<data_type>vector_name;
  //declaring vectors
  vector<int>a;//empty vector {}
  vector<int>b={1,2,3,4,5};
  //to create a vector having n elements and all the elements are 10's
  int n;//5
  cin>>n;
  vector<int>c(n,10);
  for(int i=0;i<n;i++){
    cout<<c[i]<<" ";//10 10 10 10 10
  }
  //to read vector without giving its size
  for(int i=0;i<n;i++){//n=4 , i/p: 1 2 3 4
    int x;
    cin>>x;
    a.push_back(x);//{1,2,3,4}
  }
  //to read vector by giving its size
  int m;
  cin>>m;//6
  vector<int>d(m);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
}
