// sm2_libtom.cpp : Defines the entry point for the console application.
//
#include "stdio.h"
#include "stdlib.h"
#include "test.h"
#include "base64.h"

#define CHECK_RET_TEST(x) { if(x) { printf("err!code:%04x\n", x); exit(x); } };

int main(int argc, char* argv[])
{
	int ret = 0;

// 	ret = test_sig_veri();
// 	ret = test_SM3_withZ_value_process();
 	//ret = test_encryption_and_decryption();
 	ret = test_signature_and_verify();
 	//ret = test_gen_keypair();
	getchar();
	return ret;
}

