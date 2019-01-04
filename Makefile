
CMAKE_FOLDER_PATH?=./build

# Default target executed when no arguments are given to make.
default_target: all

.PHONY: build test 

all: build run

install:
	@echo "+ $@"
	brew install cmake

init:
	@echo "+ $@"
	cmake ./CMakeLists.txt --build ${CMAKE_FOLDER_PATH}

build:
	@echo "+ $@"
	cd ${CMAKE_FOLDER_PATH} && make

run:
	@echo "+ $@"
	cd ${CMAKE_FOLDER_PATH} && ./labs_cpp



