// Copyright 2024 Marquzes Ford Jr

#pragma once

#include <iostream>
#include <string>

namespace PhotoMagic {
class FibLFSR {
 public:
    explicit FibLFSR(const std::string& seed);

    int step();
    int generate(int k);

    friend std::ostream& operator<<(std::ostream&, const FibLFSR& lfsr);
    
 private:
    std::string currentSeed;
    int leadingBit;
    int rightBit;
};

}  // namespace PhotoMagic
