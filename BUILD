load("@rules_cc//cc:defs.bzl", "cc_binary","cc_library")
cc_library(
    name = "half",
    srcs = ["half/half.hpp"]
)
cc_binary(
    name = "benchmark",
    srcs = ["main.cpp"],
    deps = ["half"]
)
