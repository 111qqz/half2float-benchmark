#include <cstdio>
#include <iostream>
#include "half/half.hpp"
#include <vector>
#include <chrono>
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

const int num = 12345;
std::vector<half>halfs(num,234.5_h);
std::vector<float>floats;
floats.reserve(num);
 auto t1 = std::chrono::high_resolution_clock::now();
// floats.assign(halfs.begin(),halfs.end());
for ( int i = 0 ; i < num ; i++){
	floats[i] = static_cast<float>(halfs[i]);
}
 auto t2 = std::chrono::high_resolution_clock::now();
 std::chrono::duration<double, std::nano> fp_ns = t2 - t1;
 cout<<" takes "<<fp_ns.count()<<" ns"<<endl;
// for (auto val:floats){
// 	cout<<"val:"<<val<<endl;
// }

	return 0;
}
