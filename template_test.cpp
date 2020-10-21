#include <iostream>

using namespace std;

template<int thread_num = 1>
class template_test
{
public:
    template_test() =default;
    ~template_test() = default;

    show(){
        cout<<thread_num<<endl;
    }
    
};





int main(int argc, char const *argv[])
{
    /* code */
    template_test a ;

    a.show();


    return 0;
}