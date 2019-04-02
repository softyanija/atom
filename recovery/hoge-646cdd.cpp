#include <bits/stdc++.h>
using namespace std;
int main(){
  div(100,10);
  div(100,0);
  div(100,5);
}

void div(int n,int d){
  if(d==0){
    cerr<<"œŽZ‚Å‚«‚Ü‚¹‚ñ"<<endl;
  }
  else{
    cout<<(n/d)<<endl;
  }
}
