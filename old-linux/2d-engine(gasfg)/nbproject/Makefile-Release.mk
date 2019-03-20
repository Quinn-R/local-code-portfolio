#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/Engine.o \
	${OBJECTDIR}/src/Object.o \
	${OBJECTDIR}/src/draw.o \
	${OBJECTDIR}/src/input.o \
	${OBJECTDIR}/src/main.o \
	${OBJECTDIR}/src/update.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-Llib/SFML-2.5.1/lib -lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/2d-engine

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/2d-engine: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/2d-engine ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/Engine.o: src/Engine.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Engine.o src/Engine.cpp

${OBJECTDIR}/src/Object.o: src/Object.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Object.o src/Object.cpp

${OBJECTDIR}/src/draw.o: src/draw.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/draw.o src/draw.cpp

${OBJECTDIR}/src/input.o: src/input.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/input.o src/input.cpp

${OBJECTDIR}/src/main.o: src/main.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

${OBJECTDIR}/src/update.o: src/update.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Ilib/SFML-2.5.1/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/update.o src/update.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
