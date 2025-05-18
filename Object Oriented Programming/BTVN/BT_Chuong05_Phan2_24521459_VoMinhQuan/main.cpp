#include <vector>
using namespace std;
class FrankSoldier {};
class Line {
protected:
    int capacity;
    int slot;
};
class Frank : public Line {
private:
    bool isLeft;
    vector<vector<FrankSoldier>> all;
public:
    Frank(bool isLeft) {
        this->isLeft = isLeft;
        this->capacity = 60;
        this->slot = 3;
    }
}