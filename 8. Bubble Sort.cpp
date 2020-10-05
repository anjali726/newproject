#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[25],m,temp,i,j,com=0,k;
	cout<<"Enter the size of the list :\n";
	cin>>m;
	cout<<"Enter the elements of the list :\n";
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<m;i++)
    {
        for(j=0;j<(m-i);j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                com+=1;
            }
        }
        cout<<"Pass "<<i<<endl;
        for(k=0;k<m;k++)
        {
           cout<<a[k]<<" ";
        }
                cout<<"\n";
    }
    cout<<"Final Sorted Array : ";
	for(i=0;i<m;i++)
    {
    	cout<<a[i]<<" ";
    }
    
    getch();
	return 0;
}
