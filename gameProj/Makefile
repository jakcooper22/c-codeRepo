OBJS = 01_hello_SDL.cpp
OBJ_NAME = SDLMain

all : $(OBJS)
	g++ $(OBJS) -IC:\mingw_dev_lib\SDL2\include\SDL2 -LC:\mingw_dev_lib\SDL2\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -o $(OBJ_NAME)