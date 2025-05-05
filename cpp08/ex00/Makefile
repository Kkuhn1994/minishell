CC = g++
FLAGS = -Wall -Wextra -std=c++11


SRCS = main.cpp


OBJS = $(SRCS:.cpp=.o)


TARGET = easyfind
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(TARGET)


%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)


fclean: clean
	rm -f $(TARGET)


re: fclean $(TARGET)