# Este es el archivo de compilación del proyecto :)
COMPILER = g++
OBJECTS = target/main.o target/Entity.o target/EntityDimensions.o target/EntityPosition.o
APPFLAGS = -std=c++11 -Wall -Isrc/include -Isrc
LIBFLAGS = -std=c++11 -Isrc/include -Isrc -c
LIBS = -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system # Bibliotecas de SFML

DEBUG = false

ifeq ($(DEBUG), true)
    TARGET = debug/appDebug.exe
else
	ADITIONALFLAGS = -mwindows
    TARGET = dist/app.exe
endif

$(TARGET): $(OBJECTS)
	$(COMPILER) $(APPFLAGS) $(ADITIONALFLAGS) $(OBJECTS) -o $(TARGET) $(LIBS)

target/main.o: src/main.cpp target/Entity.o
	$(COMPILER) $(LIBFLAGS) src/main.cpp -o target/main.o $(LIBS)

target/Entity.o: src/model/src/Entity.cpp
	$(COMPILER) $(LIBFLAGS) src/model/src/Entity.cpp -o target/Entity.o $(LIBS)

target/EntityDimensions.o: src/model/src/EntityDimensions.cpp
	$(COMPILER) $(LIBFLAGS) src/model/src/EntityDimensions.cpp -o target/EntityDimensions.o $(LIBS)

target/EntityPosition.o: src/model/src/EntityPosition.cpp
	$(COMPILER) $(LIBFLAGS) src/model/src/EntityPosition.cpp -o target/EntityPosition.o $(LIBS)