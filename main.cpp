#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

namespace {
    constexpr int n_elements = 40;

    template <class Summable>
    inline void sum(Summable &result, vector<Summable>& data) {
        result = 0;
        for (Summable elem : data) {
            result += elem;
        }
    }
}

int main() {
    vector<int> data(n_elements);

    /* Assigning each element it's number. We need some random data */
    for (int i = 0; i < n_elements; ++i)
        data[i] = i;

    int accum;
    sum(accum, data);

    cout << "sum is " << accum << endl;

    return 0;
}
