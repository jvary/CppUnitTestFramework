project(testhost)

add_executable(testhost main.cpp ../testhostlib/testhost.cpp ../testhostlib/trxoutput.cpp)

target_link_libraries(testhost dl)
target_link_libraries(testhost Boost::system Boost::filesystem uuid)