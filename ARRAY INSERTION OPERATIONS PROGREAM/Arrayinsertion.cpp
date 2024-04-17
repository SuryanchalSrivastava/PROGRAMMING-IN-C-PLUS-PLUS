#include<iostream>
using namespace std;
    int main()
    {
        int arr[10],n,i=0,pos,x;
        cout <<"Enter the size of an array:";
        cin>>n;
        cout<<"Ener the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the possition of an array:";
        cin>>pos;
        cout<<"Enter the possition of an array:";
        cin>>x;
        for(int i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;
        n++;
        cout <<"Print the all value of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<"index:"<<i<<"  valuearr:"<<arr[i]<<endl; 
        }
        return 0;
    }