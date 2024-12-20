 #include <bits/stdc++.h>
using namespace std;
#define testCase while(tt--)
#define ll long long int
#define loop(i, start, end) for(int i = (start); i < (end); i++)
#define nl '\n'
#define cyes cout << "YES\n";
#define cno cout << "NO\n";
void solve(){
  int n;
  cin>>n;
  string st ="abc";
  string vl = "";
  loop(i,0,n){
    vl+=st[i%3];
  }
  cout<<vl;
        
}
int main() 
{
    int tt;
   
        solve(); 
    
    return 0;
}