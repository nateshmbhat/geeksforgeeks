
//Rotate the array by k positions

#include<bits/stdc++.h>
#include<vector>

using namespace std ; 

//USING TEMP ARRAY 
// ---------------------------------------------------------------------->
// vector <int> rotateleft(vector <int> a , int k)
// {
//     vector <int> temp(a.size()) ;
//     for(int i =0  , j = k ; i<a.size() ; i++ , (j = (j+1)%a.size()))
//         temp[i] = a[j] ; 
//     return temp; 
// } 

// vector <int> rotateright(vector <int> a , int k)
// {
//     if(k==0) return a ; 
//     vector <int> temp(a.size()) ;
//     for(int i =0  , j = a.size()-k ; i<a.size() ; i++ , (j = (j+1)%a.size()))
//         temp[i] = a[j] ; 
//     return temp; 
// }
// // ---------------------------------------------------------------------->


// WITHOUT USING TEMP ARRAY 


void   reverse(int * a , int n )
{
    for(int i =0 , j = n-1, temp =0    ; i<j ; i++ , j--)
    {
       temp = a[i] ; 
       a[i] = a[j] ; 
       a[j] = temp ;  
    } 
}

void display(int * a , int n )
{
    for(int i =0 ; i<n ; i++)
        cout<<a[i] <<" "  ; 
    cout<<endl ; 
}

//ROTATE LEFT
void rotateleft(int * a , int n   , int k )
{
    reverse(a+k , n-k) ; 
    reverse(a , k) ;
    reverse(a , n ) ;
}


//ROTATE RIGHT
void  rotateright(int * a , int n  , int k )
{
    reverse(a , n-k) ; 
    reverse(a+n-k , k) ;
    reverse(a , n ) ;
} 


int main()
{
    int n = 6  , k = 2 ; 

    int a[] = {1 ,2  ,3 , 4 , 5 , 6} ;
    display(a , n ) ;
    rotateleft(a , n  , k) ;     
    display(a , n ) ; 
    rotateright(a , n  , k) ; 
    display(a ,n ) ; 
}

