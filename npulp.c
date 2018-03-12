#include<iostream>
using namespace std;
class Test
{
int value;
public:
Test(int v = 0) {value = v;}
};
int main() 
{
Test t(20);
cout<<t.getValue();
return 0;
}
