// Copyright 2024 Marquzes Ford Jr

#include "FibLFSR.hpp"

namespace PhotoMagic {

FibLFSR::FibLFSR(const std::string& seed) {
    currentSeed = seed;
    leadingBit = currentSeed[0];
}

int FibLFSR::step() {
    int newBit = currentSeed[5];
    newBit ^= currentSeed[3];
    newBit ^= currentSeed[2];
    newBit ^= leadingBit;

    currentSeed = currentSeed.substr(1) + std::to_string(newBit);
    leadingBit = currentSeed[0];

    return newBit;
}

int FibLFSR::generate(int k) {
    int generatedValue = 0;
    for (int i = 0; i < k; ++i) {
        generatedValue = (generatedValue * 2) + step();
    }
    return generatedValue;
}

std::ostream& operator<<(std::ostream& out, const FibLFSR& lfsr) {
    out << lfsr.currentSeed;  // Only print the seed, not the rightBit
    return out;
}

}  // namespace PhotoMagic
