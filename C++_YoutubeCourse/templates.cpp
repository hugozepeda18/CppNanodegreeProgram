#include <cassert>

template <typename T>
T Max(T a, T b){
    return a > b ? a : b;
}

int main(){
    assert(Max<int>(2,4) == 4);
    return 0;
}
