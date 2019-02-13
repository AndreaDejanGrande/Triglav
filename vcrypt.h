#ifndef VCRYPT_H
#define VCRYPT_H

#include "miner.h"

/* extern int vcrypt_test(unsigned char *pdata, const unsigned char *ptarget, */
/* 			uint32_t nonce); */
extern void vcrypt_regenhash(struct work *work, uint32_t n);

#endif /* VCRYPT_H */
