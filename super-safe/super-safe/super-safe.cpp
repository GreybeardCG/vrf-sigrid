#include <iostream>

#pragma once
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <vector>
#include <type_traits>
#include <utility>
#include <functional>

int main() {

    void *mem;  
     
    mem = 0;  
     
    *((int*) mem) = 100;
}
