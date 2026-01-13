cmake_minimum_required(VERSION 3.16)

project(TP4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# ---- Qt ----
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Gui OpenGL)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Gui OpenGL)

if (QT_VERSION_MAJOR EQUAL 6)
    find_package(Qt6 REQUIRED COMPONENTS OpenGLWidgets)
endif()

# ---- Sources ----
set(SOURCES
    main.cpp
    mainwindow.cpp
    vrbody.cpp
    vrcamera.cpp
    vrcube.cpp
    vrdice.cpp
    vrlight.cpp
    vrplane.cpp
    vrplanet.cpp
    vrscene.cpp
    vrskybox.cpp
    vrspecularcube.cpp
    vrspecularsphere.cpp
    vrspeculartorus.cpp
    vrsphere.cpp
    vrsphericalcamera.cpp
    vrsurface.cpp
    vrtexcube.cpp
    vrtorus.cpp
    vrwidget.cpp
)

set(HEADERS
    mainwindow.h
    vrbody.h
    vrcamera.h
    vrcube.h
    vrdice.h
    vrlight.h
    vrplane.h
    vrplanet.h
    vrscene.h
    vrskybox.h
    vrspecularcube.h
    vrspecularsphere.h
    vrspeculartorus.h
    vrsphere.h
    vrsphericalcamera.h
    vrsurface.h
    vrtexcube.h
    vrtorus.h
    vrwidget.h
)

set(UI_FILES
    mainwindow.ui
)

set(RESOURCE_FILES
    VRResources.qrc
)

# ---- Target ----
if (QT_VERSION_MAJOR EQUAL 6)
    qt_add_executable(TP4
        MANUAL_FINALIZATION
        ${SOURCES}
        ${HEADERS}
        ${UI_FILES}
        ${RESOURCE_FILES}
    )
else()
    add_executable(TP4
        ${SOURCES}
        ${HEADERS}
        ${UI_FILES}
        ${RESOURCE_FILES}
    )
endif()

# IMPORTANT: pour que les headers du dossier source soient trouvés
# (notamment depuis le ui_mainwindow.h généré dans le build dir)
target_include_directories(TP4 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(TP4 PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::OpenGL
)

if (QT_VERSION_MAJOR EQUAL 6)
    target_link_libraries(TP4 PRIVATE Qt6::OpenGLWidgets)
endif()

if (WIN32)
    target_link_libraries(TP4 PRIVATE opengl32)
endif()

