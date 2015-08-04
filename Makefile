CXX = g++
CXXFLAGS = -std=c++11 -Wall -MMD
OBJECTS = Main.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC = Raytrace

${EXEC}: ${OBJECTS}
		${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
		rm ${OBJECTS} ${DEPENDS} ${EXEC}