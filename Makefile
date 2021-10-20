# Makefile

CC = gcc
CFLAGS = -rdynamic
OBJS = dltest.c
LIBS = -ldl
TARGET = run
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)
clean:
	rm -f *.o
	rm -f $(TARGET)
