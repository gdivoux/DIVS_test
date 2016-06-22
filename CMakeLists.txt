cmake_minimum_required(VERSION 2.6)

#Configuration du projet

project(divs_test)

set(LIBRARY_OUTPUT_PATH lib/)


#Inclusion des en-têtes publics

include_directories(
include
/usr/include/qt5/)


#Configuration de la bibliothèque

file(
        GLOB_RECURSE
        source_files
        src/*
        include/*
)

add_library(
        divs_test
        SHARED
        ${source_files}
)
