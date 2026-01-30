#ifndef FILE_REDIRECT_H
#define FILE_REDIRECT_H

#include <cstdio>
#include <iostream>

inline void redirectIO() {
#ifndef ONLINE_JUDGE
    if (!freopen("D:/practise/dsa/cb-dsa/input.txt", "r", stdin))
        std::cerr << "input.txt open failed\n";
    if (!freopen("D:/practise/dsa/cb-dsa/output.txt", "w", stdout))
        std::cerr << "output.txt open failed\n";
#endif
}

#endif
