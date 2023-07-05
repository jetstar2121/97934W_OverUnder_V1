#include "vex.h"

using namespace vex;


class Toggle_Switch {
public:

    bool status;

    Toggle_Switch(bool initial) {
        this->status = initial;
    }

    void toggle() {
        this->status != this->status;
    }
    void set_status(bool new_status) {
        this->status = new_status;
    }


};
