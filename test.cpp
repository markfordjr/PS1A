// Copyright 2024 Marquzes Ford Jr

#include <iostream>
#include <string>
#include "FibLFSR.hpp"

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

using PhotoMagic::FibLFSR;

BOOST_AUTO_TEST_CASE(testStepInstr) {
    FibLFSR l("1011011000110110");
    BOOST_REQUIRE_EQUAL(l.step(), 0);
    BOOST_REQUIRE_EQUAL(l.step(), 0);
    BOOST_REQUIRE_EQUAL(l.step(), 0);
    BOOST_REQUIRE_EQUAL(l.step(), 1);
    BOOST_REQUIRE_EQUAL(l.step(), 1);
    BOOST_REQUIRE_EQUAL(l.step(), 0);
    BOOST_REQUIRE_EQUAL(l.step(), 0);
    BOOST_REQUIRE_EQUAL(l.step(), 1);
}

BOOST_AUTO_TEST_CASE(testGenerateInstr) {
    FibLFSR l("1011011000110110");
    BOOST_REQUIRE_EQUAL(l.generate(9), 51);
}

BOOST_AUTO_TEST_CASE(sixteenBitsThreeTaps) {
    FibLFSR l3("0011101100000001");
    BOOST_REQUIRE(l3.generate(5) == 13);

    FibLFSR l4("1101100001100110");
    BOOST_REQUIRE(l4.generate(5) == 14);
}

BOOST_AUTO_TEST_CASE(additionalTests) {
    FibLFSR aT("11111111111111111");
    BOOST_REQUIRE(aT.step() == 0);
    BOOST_REQUIRE(aT.step() == 0);
    BOOST_REQUIRE(aT.step() == 0);
    BOOST_REQUIRE(aT.step() == 0);
    BOOST_REQUIRE(aT.step() == 0);
  
    FibLFSR aT2("1010101010101010");
    BOOST_REQUIRE(aT2.generate(2) == 0);
}
