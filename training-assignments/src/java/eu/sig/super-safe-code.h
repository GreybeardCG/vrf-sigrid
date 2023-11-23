#pragma once
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <vector>
#include <type_traits>
#include <utility>
#include "DtSimMessage.h"
#include <functional>

void main() {

    void *mem;  
     
    mem = 0;  
     
    *((int*) mem) = 100;
}