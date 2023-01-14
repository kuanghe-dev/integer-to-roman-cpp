set(THIS integer_to_roman)
set(EXE ${THIS}_main)

add_library(${THIS} STATIC ${THIS}.cc ${THIS}.h)

add_executable(${EXE} main.cc)
target_link_libraries(${EXE} ${THIS})
