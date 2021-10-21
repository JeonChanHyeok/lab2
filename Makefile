# Makefile

CC = gcc
CFLAGS = -g
OBJS = my_assert.c
LIBS = 
TARGET = my_assert
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)
clean:
	rm -f *.o
	rm -f $(TARGET)
