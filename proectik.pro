QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    circlee.cpp \
    circles.cpp \
    circularsector.cpp \
    commonrectangles.cpp \
    diagonalsrhombus.cpp \
    ellipse.cpp \
    gerona.cpp \
    main.cpp \
    mainwindow.cpp \
    parallelogram.cpp \
    quadrilateral.cpp \
    rectangles.cpp \
    rectangular.cpp \
    rhombus.cpp \
    righttriangle.cpp \
    sinparallelogram.cpp \
    sinrhombus.cpp \
    square.cpp \
    standartformula.cpp \
    standartparallelogram.cpp \
    trapezoid.cpp \
    triangle.cpp

HEADERS += \
    circlee.h \
    circles.h \
    circularsector.h \
    commonrectangles.h \
    diagonalsrhombus.h \
    ellipse.h \
    gerona.h \
    mainwindow.h \
    parallelogram.h \
    quadrilateral.h \
    rectangles.h \
    rectangular.h \
    rhombus.h \
    righttriangle.h \
    sinparallelogram.h \
    sinrhombus.h \
    square.h \
    standartformula.h \
    standartparallelogram.h \
    trapezoid.h \
    triangle.h

FORMS += \
    circlee.ui \
    circles.ui \
    circularsector.ui \
    commonrectangles.ui \
    diagonalsrhombus.ui \
    ellipse.ui \
    gerona.ui \
    mainwindow.ui \
    parallelogram.ui \
    quadrilateral.ui \
    rectangles.ui \
    rectangular.ui \
    rhombus.ui \
    righttriangle.ui \
    sinparallelogram.ui \
    sinrhombus.ui \
    square.ui \
    standartformula.ui \
    standartparallelogram.ui \
    trapezoid.ui \
    triangle.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
