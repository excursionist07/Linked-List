#include <bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define F first
#define S second
#define pi 3.14159265359
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;


Node* segregate(Node *head)
{
  Node* temp=head;
  int cnt0=0,cnt1=0,cnt2=0;
  while(temp!=NULL)
  {
    if(temp->data==0)
      cnt0++;
    else if(temp->data==1)
      cnt1++;
    else
      cnt2++;
    temp=temp->next;

  }
    Node* temp2=head;
    Node*temp3=head;
    for(int i=0;i<cnt0;i++)
    {
      temp2->data=0;
      temp2=temp2->next;
    }

    for(int i=0;i<cnt1;i++)
    {
      temp2->data=1;
      temp2=temp2->next;
    }

    for(int i=0;i<cnt2;i++)
    {
        temp2->data=2;
        temp2=temp2->next;
    }

    return temp3;


}
