https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#pragma once

#include <stdint.h>

typedef struct {
   uint64_t moves;
   uint64_t compares;
} Stats;

int cmp(Stats *stats, uint32_t x, uint32_t y);

uint32_t move(Stats *stats, uint32_t x);

void swap(Stats *stats, uint32_t *x, uint32_t *y);

void reset(Stats *stats);
