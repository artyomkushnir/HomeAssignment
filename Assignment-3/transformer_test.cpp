/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

TEST(TransformerTest, IncreasePowerLevel)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    autobot.increasePowerLevel(50);
    EXPECT_EQ(autobot.getPowerLevel(), 150);
}

TEST(TransformerTest, DecreasePowerLevel)
{
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");
    decepticon.decreasePowerLevel(30);
    EXPECT_EQ(decepticon.getPowerLevel(), 60);
}


TEST(TransformerTest, Transform)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    autobot.transform();
    EXPECT_TRUE(autobot.getIsTransformed());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
