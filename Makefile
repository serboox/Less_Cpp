
CMAKE_FOLDER_PATH?=./cmake-build-debug

# Default target executed when no arguments are given to make.
default_target: all

all: build run

install:
	brew install cmake

init:
	cmake ./CMakeLists.txt -B ./cmake-build-debug

build:
	@echo
	cd ${CMAKE_FOLDER_PATH} && make

run:
	cd ${CMAKE_FOLDER_PATH} && ./labs_cpp



