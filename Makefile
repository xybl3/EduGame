FILE_WIN = ./game_win.exe

build_mac:
	clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL ./lib/libraylib_mac.a src/*.c -o ./game
build_win:
	@g++ ./src/*.cpp -o game_win -L ./lib -lraylib -lopengl32 -lgdi32 -lwinmm -lkernel32 
run_win:
	@$(FILE_WIN)