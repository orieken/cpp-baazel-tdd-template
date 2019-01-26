#include "gmock/gmock.h"
#include "src/lib/Greeting.h"

using testing::Eq;

TEST(greetingShould, ReturnHelloWorld) {
    Greeting *greet = new Greeting();
    ASSERT_THAT(greet->getGreetingMessage(), Eq("Hello World!"));
}
