/*
Given a linked list, rearrange it such that the converted list should be of the form a < b > c < d > e < f …
where a, b, c… are consecutive data nodes of the linked list.
*/

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

// Brute force solution is sort and swap alternate from index 1 (0-indexing)

Node *zigZack(Node* head) // 1->2->3->4
{
 bool flag=true;

 Node *cur=head;
 while(cur && cur->next)
 {
  if(flag)
  {
    if(cur->data>cur->next->data)
     swap(cur->data,cur->next->data);
  }
  else
   {
     if(cur->data<cur->next->data)
       swap(cur->data,cur->next->data);
   }
   flag=!flag;
   cur=cur->next;
 }
 return head;


}
