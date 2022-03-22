#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> v = {1,2,3};
    list <int> ::iterator it;

    int j;
    int *ptrv = &v.front();

    for(j=0;j < 10; ++j){
        cout << std::hex << *(ptrv+j) << " ";
        cout.flush();
    }
    return 0;
}
