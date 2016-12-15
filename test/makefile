#make test for linux
#Steven Yi - 2016-12-13
TEST_TARGET=test_out_bin
TEST_OBJ=base64.o test.o main.o
CC=gcc

CFLAGS=-Wall -g -I../sm2/ -I ../libtommath -I. -D_LINUX -g -O3 #-D_DEBUG
LDFLAGS=../sm2/libsm2.a ../libtommath/libtommath.a

all: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJ)
	$(CC) -o $@ $(TEST_OBJ) $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $< -o $@ -c
 	
.PHONY:clean

clean:
	-rm -fr $(TEST_TARGET) $(TEST_OBJ) 
