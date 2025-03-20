#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Gun.h"

TEST(TransformerTest, IncreasePowerLevel) {
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    autobot.increasePowerLevel(50);
    EXPECT_EQ(autobot.getPowerLevel(), 150);
}

TEST(TransformerTest, DecreasePowerLevel) {
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");
    decepticon.decreasePowerLevel(30);
    EXPECT_EQ(decepticon.getPowerLevel(), 60);
}

TEST(TransformerTest, Transform) {
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    autobot.transform();
    EXPECT_TRUE(autobot.getIsTransformed());
}

TEST(TransformerTest, OutputOperator) {
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    std::stringstream ss;
    ss << autobot;
    EXPECT_EQ(ss.str(), "Autobot: Optimus Prime, Power Level: 100, Faction: Autobot, Vehicle Type: Truck");
}

TEST(TransformerTest, ComparisonOperator) {
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");
    EXPECT_TRUE(autobot > decepticon);
    EXPECT_FALSE(autobot < decepticon);
}

TEST(GunTest, OutputOperator) {
    Gun gun("Laser", 50);
    std::stringstream ss;
    ss << gun;
    EXPECT_EQ(ss.str(), "Gun: Laser, Damage: 50");
}

TEST(GunTest, ComparisonOperator) {
    Gun gun1("Laser", 50);
    Gun gun2("Plasma", 40);
    EXPECT_TRUE(gun1 > gun2);
    EXPECT_FALSE(gun1 < gun2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}