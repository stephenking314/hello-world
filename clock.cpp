#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    // some function
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();

}
