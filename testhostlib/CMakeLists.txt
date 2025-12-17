
project(testhostlib)

add_library(testhostlib SHARED testhost.cpp trxoutput.cpp)

target_link_libraries(testhostlib dl)
target_link_libraries(testhostlib Boost::system Boost::filesystem uuid)