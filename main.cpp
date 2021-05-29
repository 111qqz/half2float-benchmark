#include <cstdio>
#include <iostream>
#include "half/half.h"
#include <vector>
using namespace std;
using half_float::half;
using namespace half_float::literal;
int main(){
	cout<<"hello half"<<endl;

half a(3.4), b(5);
half c = a * b;
c += 3;
if(c > a)
    std::cout << c << std::endl;

const int num = 55555;
std::vector<half>halfs(num,234.5_h);
std::vector<float>floats;


	return 0;
}
