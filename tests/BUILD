# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_test
cc_test(
    name = "tests",
    srcs = glob(["**/*.cpp"]),
    deps = [
        "//src/lib:GreetingLib",
        "@googletest//:gtest_main",
    ],
)