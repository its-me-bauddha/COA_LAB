#include <iostream>
#include<math.h>


using namespace std;

int main ()
{
    int n ;
    cin >> n ; 

    int bits[n];

    for(int i = 0 ;i <n ;i++)
    {
        cin >> bits[i];

    }


    double ans = 0 ;
    double sum = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
       if (bits[i] == 1)
        {
            ans = bits[i] * pow(2,n-i-1);
            sum = ans + sum ;
        }
    }

    cout << sum << endl;



}
