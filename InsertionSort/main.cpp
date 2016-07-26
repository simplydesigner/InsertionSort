#include <iostream>
#include <vector>
#include <algorithm>

auto insertionSort( std::vector<int> & vector )
{
    auto size = vector.size();
    for ( int i = 1; i < size; ++i ) {
        auto element = vector[ i ];
        
        auto j = i;
        while ( j != 0 && vector[j - 1] > element ) {
            vector[j] = vector[j - 1];
            j = j - 1;
        }
        
        vector[j] = element;
    }
}

int main(int argc, const char * argv[]) {
    
    std::vector<int> v = { 2, 3, 4, 5, 5, 9, 1 };
    insertionSort(v);
    std::ostream_iterator<int> out_it (std::cout,", ");
    std::copy(v.begin(), v.end(), out_it);
    
    return 0;
}
