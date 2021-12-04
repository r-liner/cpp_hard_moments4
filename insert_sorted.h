#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

 
template<typename Vector, typename Type>
void insert_sorted(Vector& vec, const Type num)
{   const auto insert_pos (std::lower_bound(std::begin(vec), std::end(vec), num));
    vec.insert(insert_pos, num);
}
 
template<typename Vector>
void print(const Vector& vec)
{   for(const auto r : vec) std::cout << r << " ";
}
 
int insertsorted()
{   std::vector<int> vec {1, 2, 4, 5, 5};
    insert_sorted(vec, 3);
    print(vec);
    return 0;
}