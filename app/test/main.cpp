#include "gtest/gtest.h"
#include "app/math.h"

TEST(GameFrameworks, Placeholder) {
    EXPECT_EQ(plus(2,3), 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}