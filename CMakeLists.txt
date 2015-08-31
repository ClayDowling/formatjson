cmake_minimum_required(VERSION 2.8)
project(formatjson)

set(APP_SOURCES
	cJSON.c
	cJSON.h
	main.cpp
)

add_executable(formatjson
	${APP_SOURCES}
	)
