# Makefile

CC = gcc
CFLAGS = -g
OBJS = hang.c
LIBS = 
TARGET = hang
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)
clean:
	rm -f *.o
	rm -f $(TARGET)
