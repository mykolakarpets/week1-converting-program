#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

namespace {
    constexpr int N = 40;

    template <class T>
    void sum(T &result, vector<T>& data) {
        result = 0;
        for (T i : data) {
            result += i;
        }
    }
}

int main() {
    vector<int> data(N);

    for (int i = 0; i < N; ++i)
        data[i] = i;

    int accum;
    sum(accum, data);
    cout << "sum is " << accum << endl;

    return 0;
}
