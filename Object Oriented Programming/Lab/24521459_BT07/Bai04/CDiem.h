#pragma once
#include <iostream>
using namespace std;

class CDiem {
private:
    int x, y;
public:
    CDiem(int x = 0, int y = 0);
    float KhoangCach() const;
    bool operator==(const CDiem&);
    bool operator!=(const CDiem&);
};
