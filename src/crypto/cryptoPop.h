/* Copyright 2016-2018 The Pop Core Foundation */

#ifndef __CRYPTOPOP_H__
#define __CRYPTOPOP_H__

#include <stddef.h>
#include <stdint.h>

#include "net/Job.h"


#define WORK_MEMORY_SIZE (1024*1024)


class cryptoPop
{
public:
	static bool init();
    static bool hash(const Job &job, uint8_t *result, uint8_t *memory);
    static void hash(uint8_t *input, uint32_t size, uint8_t *output, uint8_t *memory);
/*
private:
    static bool selfTest();
*/
};

#endif /* __CRYPTOPOP_H__ */


