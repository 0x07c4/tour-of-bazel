cc_library(
    name = "hello_lib",
    srcs = ["hello_lib.cpp"],
    hdrs = ["hello_lib.hpp"],
    deps = [
        "@fmt//:fmt",  # 引入 fmt 库
    ],
    visibility = ["//main:__pkg__"],  # 允许 main 包访问
)

cc_test(
    name = "hello_lib_test",
    srcs = ["hello_lib_test.cpp"],
    deps = [
        "//lib:hello_lib",          # 你的库
        "@googletest//:gtest_main", # googletest 提供的 main
    ],
    size = "small",
)
