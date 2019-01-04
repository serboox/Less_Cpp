
CMAKE_FOLDER_PATH?=./build

# Default target executed when no arguments are given to make.
default_target: all

.PHONY: test clean build

all: build run

install:
	@echo "+ $@"
	brew install cmake

init:
	@echo "+ $@"
	cmake ./CMakeLists.txt -B ${CMAKE_FOLDER_PATH}

build:
	@echo "+ $@"
	cd build && make

run:
	@echo "+ $@"
	cd ${CMAKE_FOLDER_PATH} && ./labs_cpp



