TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ActivationFunction.cpp \
        layer_dense.cpp \
        main.cpp \
        random_value_generator.cpp

HEADERS += \
    ActivationFunction.h \
    layer_dense.h \
    random_value_generator.h
