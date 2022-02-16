///////////////////////////////////////////////////////////
/// @copyright copyright description
///
/// @brief UT add library
///
/// @file main.cpp
///
/// @author author
///
/// @date 2022-02-13
///////////////////////////////////////////////////////////

// Current Cpp header
#include "add.h"
// System header
// C/C++ standard library header
#include <memory>
// External library header
// #include <glog/>
// Current module header
// Root directory header

int main(int argc, char **argv)
{
    auto t = std::make_shared<Add>();

    auto a = 1;
    auto b = 2;
    t->add(a, b);

    return 0;
}
