#include "iostream"
using namespace std;
class Navya
{
 public:
 int i,top=-1;
 char a[20];
 void push(char b[],int n1)
 {
  for(i=0;i<n1;i++)
  { 
   if(top==10)
   cout<<"stack over flow";
   else
   {
    top++;
    a[top]=b[i];
   }
  }
 }
 void pop(int m)
 {
  for(i=0;i<m;i++)
  { 
   if(top==-1)
   cout<<"stack under flow";
   else
   {
    cout<<a[top];
    top--;
   }
  }
 }
};
int main()
{
 int p;
 char q[10];
 cout<<"enter the length of string";
 cin>>p;
 cout<<"enter the string:";
 cin>>q;
 Navya n;
 n.push(q,p);
 n.pop(p);
 return 0;
}
 
