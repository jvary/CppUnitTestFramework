# CppUnitTestFramework

Forked from [Kretikus/CppUnitTestFrameworkWrapper](https://github.com/Kretikus/CppUnitTestFrameworkWrapper)

A simple wrapper that allows tests written with the "Microsoft Unit Testing Framework for C++"
from Microsoft to compile and run under linux. Usesful to help you port windows only source code to linux.

This wrapper consists of a header mstest.h, so that the unit tests can be compiled as a shared library, and an execution application which tries to detect all existing tests inside the shared library that needs to be executed.

This wrapper does not support all features from the MS Unit Test Framework yet. Contributions are welcome.

Prerequesites:
  * boost-1.67 and higher
  * C++20 (because the boost shared library lib needs C++17, and std::source_location needs C++20)
  * libuuid

The test runner is called *testhost*.
You needs to call it like this:
`testhost --so <path-to-shared-lib> [--filter <optional-test-filter>] [--trx <optional-path-to-outputTrx>]` 

Why the fork from CppUnitTestFrameworkWrapper?
   * Test macros were conflicting with members functions of testee classes (so we switched back to templates as the MS implementation)
   * Usage of C++20 not desired by all
   * Needed a .trx output
   * No feedback from pull requests upstream :-)
