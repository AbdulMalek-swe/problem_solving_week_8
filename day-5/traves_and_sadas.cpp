#include <iostream>
using namespace std;

int main() 
{
      string str;
      cin>>str;
      int sz = str.size();
      int ans = (1<<sz)-2;
      for(int i=sz-1,count=0;i>=0;i--,count++){
        if(str[i]=='7'){
          ans+=(1<<count);
        }
      }
      cout<<ans+1;
    return 0;
}