#include <iostream>
#include <vector>
#include "funcs.h"

int main() {

    std::cout << "\n--------------TASK A--------------\n" << " makeVector(10) : { ";
    std::vector<int> taskA = makeVector(10);
    for (int i = 0; i < taskA.size(); i++) {
        std::cout << taskA.at(i) << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "\n--------------TASK B--------------\n" << " goodVibes() :    { ";
    std::vector<int> taskB{3, -3, -2, 8, -9, 4, 5, 10, -13};
    std::vector<int> taskB_new = goodVibes(taskB);
    for (int i = 0; i < taskB_new.size(); i++) {
        std::cout << taskB_new.at(i) << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "\n--------------TASK C--------------\n" << " gogeta(taskA, taskB) : { ";
    std::vector<int> taskC = taskA;
    std::vector<int> taskC_2 = taskB_new;
    gogeta(taskC, taskC_2);
    for (int i = 0; i < taskC.size(); i++) {
        std::cout << taskC.at(i) << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "\n--------------TASK D--------------\n" << " sumPairWise(taskA, taskB) : { ";
    std::vector<int> taskD = sumPairWise(taskA, taskB_new);
    for (int i = 0; i < taskD.size(); i++) {
        std::cout << taskD.at(i) << " ";
    }
    std::cout << "}" << std::endl;
    return 0;
}
