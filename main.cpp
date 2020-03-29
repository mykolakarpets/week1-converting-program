#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

namespace {
    constexpr int N = 40;

    template <class T>
    void sum(T &result, T n, vector<T>& d) {
        result = 0;
        for (T i : d) {
            result += i;
        }
    }
}

int main() {
    vector<int> data(N);

    for (int i = 0; i < N; ++i)
        data[i] = i;

    int accum;
    sum(accum, N, data);
    cout << "sum is " << accum << endl;

    return 0;
}
