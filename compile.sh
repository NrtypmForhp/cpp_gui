cflags=$(pkg-config --cflags gtkmm-4.0)
libs=$(pkg-config --libs gtkmm-4.0)
g++ main.cpp -o main $cflags $libs -std=c++17
