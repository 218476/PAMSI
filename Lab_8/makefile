CXX=g++


OBJS=./obj/main.o ./obj/timer.o ./obj/test.o ./obj/list.o ./obj/node.o ./obj/graph.o ./obj/find.o ./obj/queue.o



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

./obj/graph.o: ./src/graph.cpp
	$(CXX) -c ./src/graph.cpp -std=c++11 -o ./obj/graph.o

./obj/find.o: ./src/find.cpp
	$(CXX) -c ./src/find.cpp -std=c++11 -o ./obj/find.o

./obj/queue.o: ./src/queue.cpp
	$(CXX) -c ./src/queue.cpp -std=c++11 -o ./obj/queue.o

clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

