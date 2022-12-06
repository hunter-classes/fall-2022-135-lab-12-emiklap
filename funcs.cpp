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

//task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    for (int i = 0; i < vegeta.size(); i++) {
        int num = vegeta.at(i);
        goku.push_back(num);
    }
    vegeta.clear();
    return;
}

//task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    int smaller = 2; //by default, we assume v2 <= v1
    std::vector<int> ret_vector;
    if (v1.size() < v2.size()) { smaller = 1; } //changes value if v1 < v2

    if (smaller == 1) {
        for (int i = 0; i < v2.size(); i++) {
            int num = v2.at(i);
            if (i < v1.size()) { num += v1.at(i); }
            ret_vector.push_back(num);
        }
    } else {
        for (int i = 0; i < v1.size(); i++) {
            int num = v1.at(i);
            if (i < v2.size()) { num += v2.at(i); }
            ret_vector.push_back(num);
        }
    }
    return ret_vector;
}
