#include <iostream>
#include <vector>
#include "funcs.h"

int main() {

    std::cout << "\n--------------TASK A--------------\n" << "makeVector(10) : { ";
    std::vector<int> taskA_1 = makeVector(10);
    for (int i = 0; i < taskA_1.size(); i++) {
        std::cout << taskA_1.at(i) << " ";
    }
    std::cout << "}" << std::endl;


    return 0;
}
