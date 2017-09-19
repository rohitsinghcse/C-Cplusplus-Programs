#include <iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int swapped,i,j,k,count=0,temp;
    cout<<"\nno. of elements="<<n<<endl ;
    for(i=0;i<n;i++)
    {   
        cout<<"\niteration - "<<i+1<<endl;
        swapped = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count++;
                swapped = 1;
            }
            //print elements
            for(k=0;k<n;k++)
            {
                cout<<a[k]<<" ";
                
            }
            cout<<endl;
            
        }
        //after swapping
             
        if(swapped == 0)
        {
            break;
        }
    }
    cout<<"\ncount= "<<count; //count to count number of swaps done
}

int main()
{
    int i,n,a[n]; //n is size
    cin>>n; 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before swapping";
    for(i=0;i<n;i++)
    {        cout<<a[i]<<" ";
    }
    bubbleSort(a,n);
    return 0;
}


/*
******************OUTPUT**************
Executed on https://www.tutorialspoint.com/compile_cpp_online.php
$g++ -o main *.cpp
$main
Before swapping5 1 4 2 8 
no. of elements=5

iteration - 1
1 5 4 2 8 
1 4 5 2 8 
1 4 2 5 8 
1 4 2 5 8 

iteration - 2
1 4 2 5 8 
1 2 4 5 8 
1 2 4 5 8 

iteration - 3
1 2 4 5 8 
1 2 4 5 8 

count= 4

*/
