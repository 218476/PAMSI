Lab4.out: ./obj/main.o ./obj/timer.o ./obj/tabtest.o ./obj/stack.o ./obj/queue.o ./obj/list.o ./obj/node.o ./obj/impqueue.o ./obj/implist.o ./obj/quicksort.o
	g++ ./obj/main.o ./obj/timer.o ./obj/stack.o  ./obj/test.o ./obj/queue.o ./obj/list.o ./obj/node.o ./obj/impqueue.o ./obj/implist.o ./obj/quicksort.o -o Lab4.out

./obj/main.o: ./src/main.cpp
	mkdir ./obj
	g++ -c ./src/main.cpp -std=c++11 -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	g++ -c ./src/timer.cpp -std=c++11 -o ./obj/timer.o

./obj/stack.o: ./src/stack.cpp
	g++ -c ./src/stack.cpp -std=c++11 -o ./obj/stack.o

./obj/queue.o: ./src/queue.cpp
	g++ -c ./src/queue.cpp -std=c++11 -o ./obj/queue.o

./obj/tabtest.o: ./src/test.cpp
	g++ -c ./src/test.cpp -std=c++11 -o ./obj/test.o

./obj/list.o: ./src/list.cpp
	g++ -c ./src/list.cpp -std=c++11 -o ./obj/list.o

./obj/node.o: ./src/node.cpp
	g++ -c ./src/node.cpp -std=c++11 -o ./obj/node.o

./obj/quicksort.o: ./src/quicksort.cpp
	g++ -c ./src/quicksort.cpp -std=c++11 -o ./obj/quicksort.o

./obj/impqueue.o: ./imp/queue.cpp
	g++ -c ./imp/queue.cpp -std=c++11 -o ./obj/impqueue.o

./obj/implist.o: ./imp/list.cpp
	g++ -c ./imp/list.cpp -std=c++11 -o ./obj/implist.o


clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

