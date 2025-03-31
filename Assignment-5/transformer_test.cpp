/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Gun.h"

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


TEST(TransformerTest, OutputOperator)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    std::stringstream ss;
    ss << autobot;
    EXPECT_EQ(ss.str(), "Autobot: Optimus Prime, Power Level: 100, Faction: Autobot, Vehicle Type: Truck");
}

TEST(TransformerTest, ComparisonOperator)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");
    EXPECT_TRUE(autobot > decepticon);
    EXPECT_FALSE(autobot < decepticon);
}

TEST(GunTest, OutputOperator)
{
    Gun gun("Laser", 50);
    std::stringstream ss;
    ss << gun;
    EXPECT_EQ(ss.str(), "Gun: Laser, Damage: 50");
}

TEST(GunTest, ComparisonOperator)
{
    Gun gun1("Laser", 50);
    Gun gun2("Plasma", 40);
    EXPECT_TRUE(gun1 > gun2);
    EXPECT_FALSE(gun1 < gun2);
}

TEST(TransformerTest, DirectMethodCalls)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");

    autobot.transform();
    autobot.openFire();
    autobot.ulta();
    decepticon.transform();
    decepticon.openFire();
    decepticon.ulta();
}

TEST(TransformerTest, PolymorphicMethodCalls)
{
    Autobot autobot("Optimus Prime", 100, "Autobot", "Truck");
    Decepticon decepticon("Megatron", 90, "Decepticon", "Cannon");

    Transformer* transformer1 = &autobot;
    Transformer* transformer2 = &decepticon;

    transformer1->transform();
    transformer1->openFire();
    transformer1->ulta();

    transformer2->transform();
    transformer2->openFire();
    transformer2->ulta();
}

TEST(TransformerTest, VectorOfTransformers)
{
    std::vector<Transformer*> transformers;

    transformers.push_back(new Autobot("Optimus Prime", 100, "Autobot", "Truck"));
    transformers.push_back(new Autobot("Bumblebee", 80, "Autobot", "Car"));
    transformers.push_back(new Autobot("Ironhide", 90, "Autobot", "Van"));

    transformers.push_back(new Decepticon("Megatron", 95, "Decepticon", "Cannon"));
    transformers.push_back(new Decepticon("Starscream", 85, "Decepticon", "Jet"));
    transformers.push_back(new Decepticon("Soundwave", 88, "Decepticon", "Boombox"));

    transformers.push_back(new Autobot("Ratchet", 75, "Autobot", "Ambulance"));
    transformers.push_back(new Decepticon("Shockwave", 92, "Decepticon", "Laser"));
    transformers.push_back(new Decepticon("Devastator", 120, "Decepticon", "Combiner"));

    for (auto transformer : transformers)
    {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
    }

    // Очистка памяти
    for (auto transformer : transformers)
    {
        delete transformer;
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}