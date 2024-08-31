
#include<iostream>
using namespace std;
int main(){
   int a[5]={100,140,230,322,411};
   int num,mid,first=0, last=4;

   cout<<"Enter the number find the location: "<<endl;
   cin>>num;

   do
   {
    mid=(first+last)/2;
    if (a[mid]==num)
    {
        cout<<"found at location = "<<mid+1<<endl;
        break;
    }
       else if(a[mid]<=num)
       first = mid+1;
       else 
       last = mid-1;

   } while (first<=last);
    
    if (first>last)
    {
        cout<<"Number are not found.."<<endl;
    }
    
   
return 0;
}
