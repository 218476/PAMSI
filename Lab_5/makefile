CXX=g++


OBJS=./obj/main.o ./obj/timer.o ./obj/test.o ./obj/list.o ./obj/node.o ./obj/map.o



Lab.out: $(OBJS)
	$(CXX) $(OBJS) -o Lab.out

./obj/main.o: ./src/main.cpp
	mkdir ./obj -p
	$(CXX) -c ./src/main.cpp -std=c++11 -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	$(CXX) -c ./src/timer.cpp -std=c++11 -o ./obj/timer.o

./obj/test.o: ./src/test.cpp
	$(CXX) -c ./src/test.cpp -std=c++11 -o ./obj/test.o

./obj/list.o: ./src/list.cpp
	$(CXX) -c ./src/list.cpp -std=c++11 -o ./obj/list.o

./obj/node.o: ./src/node.cpp
	$(CXX) -c ./src/node.cpp -std=c++11 -o ./obj/node.o

./obj/map.o: ./src/map.cpp
	$(CXX) -c ./src/map.cpp -std=c++11 -o ./obj/map.o

clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

