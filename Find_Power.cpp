#include<iostream>
//#include "Solution.h"
using namespace std;

//Start Copying from here for coding ninjas 
int power(int x, int n) {
  /* Don't write main().
    Don't read input, it is passed as function argument.
    Return output and don't print it.
    Taking input and printing output is handled automatically.
  */
    if (n==0)///If the given power  is / becomes 0 , then return 1; 
        return 1;
    int smaller = power(x, n-1);//Recursive relation 
    int bigger = x* smaller ;// Building up of stack. if n is 2 , it will be called for n =1, the  n =2 will call fr n==1 and so onn 
    return bigger ;//Returning the output 
    
    
        

}

//coding ninjas solution ends here -------- stop copying 



int main(){
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
}
