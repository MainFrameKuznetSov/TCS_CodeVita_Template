#include<bits/stdc++.h>
using vi vector<int>
using namespace std;
vi extractElements(string s)
{
  vi v;
  s=s.substr(1,s.size()-2);
  size_t i=0;
  while(i<s.size())   
  {
    size_t f=s.find(',',i);
    if(f!=string::npos)
    {
      v.pb(stoi(s.substr(i,f-i)));
      i=f+1;
    }
    else
    {
      v.pb(stoi(s.substr(i)));
      break;
    }
  }
  return v;
}

void solve()
{
  string s;
  cin>>s;
  vi v=extractElements(s);
  for(int i:v)
    cout<<i<<" ";
  cout<<"\n";
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	   solve();
	return 0;
}
