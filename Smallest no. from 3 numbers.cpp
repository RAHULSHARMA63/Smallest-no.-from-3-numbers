#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;     
    cout << "enter three numbers \n";   
    cin >> a >> b >> c; 

    if (a < b && a < c) 
	{
        cout << "smallest number is \n " << a;
         }
	 else if (b < a && b < c) 
	 {
       cout << "smallest number is \n" << b;
    } 
	else
	{
      cout << "smallest number is \n"<< c;
    }
       return 0;
}
