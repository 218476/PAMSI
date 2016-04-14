CXX=g++


OBJS=./obj/main.o ./obj/timer.o ./obj/test.o ./obj/stack.o ./obj/queue.o ./obj/list.o ./obj/node.o ./obj/impqueue.o ./obj/implist.o ./obj/quicksort.o ./obj/mergesort.o



Lab.out: $(OBJS)
	$(CXX) $(OBJS) -o Lab.out

./obj/main.o: ./src/main.cpp
	mkdir ./obj -p
	$(CXX) -c ./src/main.cpp -std=c++11 -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	$(CXX) -c ./src/timer.cpp -std=c++11 -o ./obj/timer.o

./obj/stack.o: ./src/stack.cpp
	$(CXX) -c ./src/stack.cpp -std=c++11 -o ./obj/stack.o

./obj/queue.o: ./src/queue.cpp
	$(CXX) -c ./src/queue.cpp -std=c++11 -o ./obj/queue.o

./obj/test.o: ./src/test.cpp
	$(CXX) -c ./src/test.cpp -std=c++11 -o ./obj/test.o

./obj/list.o: ./src/list.cpp
	$(CXX) -c ./src/list.cpp -std=c++11 -o ./obj/list.o

./obj/node.o: ./src/node.cpp
	$(CXX) -c ./src/node.cpp -std=c++11 -o ./obj/node.o

./obj/quicksort.o: ./src/quicksort.cpp
	$(CXX) -c ./src/quicksort.cpp -std=c++11 -o ./obj/quicksort.o

./obj/mergesort.o: ./src/mergesort.cpp
	$(CXX) -c ./src/mergesort.cpp -std=c++11 -o ./obj/mergesort.o

./obj/impqueue.o: ./imp/queue.cpp
	$(CXX) -c ./imp/queue.cpp -std=c++11 -o ./obj/impqueue.o

./obj/implist.o: ./imp/list.cpp
	$(CXX) -c ./imp/list.cpp -std=c++11 -o ./obj/implist.o


clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

