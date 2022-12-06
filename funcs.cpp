#include <vector>

//task A
std::vector<int> makeVector(int n) {
    std::vector <int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    return v;
}

//task B
std::vector<int> goodVibes(const std::vector<int>& v) {
    std::vector<int> ret_vector;
    for (int i = 0; i < v.size(); i++) {
        int num = v.at(i);
        if (num > 0) {
            ret_vector.push_back(num);
        }
    }
    return ret_vector;
}

