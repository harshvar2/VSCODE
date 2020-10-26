#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}
int main()
{
    int d[5] = { 0, 2, 4, 5, 6 };
    int p[5]={0,80,20,60,70};
    int m[5];
    int y[5];
    int k=2;
    int x=0;
    copy(begin(p), end(p), begin(m));
    int n = sizeof(m) / sizeof(m[0]); 
    sort(m, m + n,greater<int>());         //sort(arr, arr + n, greater<T>());
   for(auto e:m)
    cout<<e<<" ";
    cout<<endl;
  
    int n1 = sizeof(d) / sizeof(d[0]);
    int max_dis= *max_element (d, d+n1);
   // cout<<max_dis<<endl;
    int max_res=max_dis/k;
  //  int count=0;
    int n2,n3;
    int profit=0;
   // cout<<"Hey\n";
    for(int z=max_res;z>0;z--)
    {

   // cout<<"Hey1\n";
   profit=0;x=0;
      for(int j=0;j<5;j++)
         {
         n2=m[j];
         int din = find(p,5,n2);
         //cout<<din<<endl;
         if(x==0 || ((y[x-1]-d[din])>=k)|| ((d[din]-y[x-1])>=k) )
           { 
               y[x++]=d[din];
               profit+=m[j];
           }
           
     //   else
       // continue;
    
         if(x>=z)
         break;
         
          
          
       
        
    
    }//cout<<"Hey3\n";
        for(int i=0;i<z;i++)
    cout<<y[i]<<" ";
    cout<<endl;
    cout<<"Profit is "<<profit<<endl;
  //  cout<<"Hey4\n";
    }
   // int x = find(arr,5,3);
  //  cout <<x<<endl;    
    return 0;
}