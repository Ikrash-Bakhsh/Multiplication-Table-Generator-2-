#include <iostream>
using namespace std;

void table(int num);

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    table(num);
    return 0;

}

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" x "<<i <<" = "<<num*i<<endl;
    }
    
}
