#include<iostream>
using namespace std;

void pattern1(int n)
{ 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }

        cout<<endl;
    }       
}

void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }

        cout<<endl;
    }       
}

void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n)
{//pattern 6 and pattern 7 combination
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }

        cout<<endl;
    } 

}  

void pattern10(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)     //spaces
        {
            cout<<" ";
        }

        cout<<endl;
    }  
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)      //stars
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)     //spaces
        {
            cout<<" ";
        }

        cout<<endl;
    }       
     
}

void pattern11(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {   int stars = i;
        if(i>n) stars = 2*n -i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern12(int n)
{   int start = 1;
    for(int i=0;i<n;i++)
    {   if(i%2==0)  start =1;
        else start =0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1- start;

        }
        cout<<endl;
    }
}

void pattern13(int n)
{   int space = 2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)     //numbers
        {
            cout<<j;
        }
        for(int j=1;j<=space;j++)      //spaces
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)     //numbers
        {
            cout<<j;
        }

        cout<<endl;
        space-=2;
    }       
}

void pattern14(int n)
{   int nums =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<nums;
            nums = nums+1;
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch = 'A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch = 'A';ch<='A'+(n-i-1);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}



int main()
{   int n;
    cout<<"Enter the value for n to print different patterns:"<<endl;
    cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern7(n);
    cout<<endl;
    pattern8(n);
    cout<<endl;
    pattern9(n);
    cout<<endl;
    pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern12(n);
    cout<<endl;
    pattern13(n);
    cout<<endl;
    pattern14(n);
    cout<<endl;
    pattern15(n);
    cout<<endl;
    pattern16(n);
            
    return 0;
}