cmake_minimum_required(VERSION 3.0)
# プロジェクト名を設定(なくても良い)
project(myprj CXX)
# コンパイルに必要なソースコードを取得
file(GLOB my_src ../src/*.cpp)
# インクルードパスの設定
include_directories(../head)
# コンパイラへのオプション
set(CMAKE_CXX_FLAGS "-std=c++0x -O3")
# コンパイル対象コードと出力ファイル名
add_executable(main ${my_src})

# OpenCVに必要(Linuxの場合)
#find_package(OpenCV REQUIRED)
#include_directories(${OpenCV_INCLUDE_DIRS})
#target_link_libraries(main ${OpenCV_LIBS})