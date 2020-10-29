cmake_minimum_required(VERSION 3.0)
# コンパイルに必要なソースコードを取得
file(GLOB my_src ../src/*.cpp)
# インクルードパスの設定
include_directories(../head)

# コンパイラへのオプション
set(CMAKE_CXX_FLAGS "-std=c++0x -O2")
# コンパイル対象コードと出力ファイル名
add_executable(main ${my_src})