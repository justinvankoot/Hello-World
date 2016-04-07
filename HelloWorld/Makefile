CXXFLAGS = -Wall -Wextra -O -Wuninitialized -pedantic

OBJS = Hello

Hello: messages.o

message.o: messages.h

all: ${OBJS}

clean:
	rm -f *.o ${OBJS}
