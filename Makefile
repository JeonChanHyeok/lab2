# Makefile

CC = gcc
CFLAGS = -g -rdynamic
OBJS = my_assert.c
LIBS = -ldl
TARGET = run
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)
clean:
	rm -f *.o
	rm -f $(TARGET)
