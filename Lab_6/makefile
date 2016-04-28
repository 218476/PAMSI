CXX=g++


OBJS=./obj/main.o ./obj/timer.o ./obj/test.o ./obj/queue.o ./obj/list2.o ./obj/tree.o ./obj/treenode.o



Lab.out: $(OBJS)
	$(CXX) $(OBJS) -o Lab.out

./obj/main.o: ./src/main.cpp
	mkdir ./obj -p
	$(CXX) -c ./src/main.cpp -std=c++11 -o ./obj/main.o

./obj/timer.o: ./src/timer.cpp
	$(CXX) -c ./src/timer.cpp -std=c++11 -o ./obj/timer.o

./obj/test.o: ./src/test.cpp
	$(CXX) -c ./src/test.cpp -std=c++11 -o ./obj/test.o

./obj/node.o: ./src/node.cpp
	$(CXX) -c ./src/node.cpp -std=c++11 -o ./obj/node.o

./obj/queue.o: ./imp/queue.cpp
	$(CXX) -c ./imp/queue.cpp -std=c++11 -o ./obj/queue.o

./obj/list2.o: ./imp/list.cpp
	$(CXX) -c ./imp/list.cpp -std=c++11 -o ./obj/list2.o

./obj/tree.o: ./src/tree.cpp
	$(CXX) -c ./src/tree.cpp -std=c++11 -o ./obj/tree.o

./obj/treenode.o: ./src/treenode.cpp
	$(CXX) -c ./src/treenode.cpp -std=c++11 -o ./obj/treenode.o
clean:
	rm -f ./obj/*.o *.out
	rmdir ./obj 

