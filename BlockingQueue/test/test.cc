#include <BlockingQueue/BlockingQueue.h>

#include <catch2/catch_test_macros.hpp>
#include <iostream>

TEST_CASE( "One is returned", "[one]" ) {
    BlockingQueue<int> bq = BlockingQueue<int>();
}