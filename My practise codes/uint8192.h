#ifndef UINT8192_H
#define UINT8192_H
#include <stdint.h>
#include <string.h>

#define UINT8192_LIMBS 128

typedef struct {
    uint64_t limb[UINT8192_LIMBS];
} uint8192_t;

static inline void uint8192_zero(uint8192_t *x) {
    memset(x->limb, 0, sizeof x->limb);
}

static inline void uint8192_set_u64(uint8192_t *x, uint64_t v) {
    uint8192_zero(x);
    x->limb[0] = v;
}

static inline int uint8192_is_zero(const uint8192_t *x) {
    for (int i = 0; i < UINT8192_LIMBS; i++)
        if (x->limb[i]) return 0;
    return 1;
}

static inline void uint8192_copy(uint8192_t *dst, const uint8192_t *src) {
    memcpy(dst->limb, src->limb, sizeof src->limb);
}

static inline void uint8192_mul_u64(uint8192_t *res, const uint8192_t *a, uint64_t b) {
    unsigned __int128 carry = 0;
    for (int i = 0; i < UINT8192_LIMBS; i++) {
        unsigned __int128 prod = (unsigned __int128)a->limb[i] * b + carry;
        res->limb[i] = (uint64_t)prod;
        carry = prod >> 64;
    }
}

static inline uint32_t uint8192_div10(uint8192_t *q, const uint8192_t *a) {
    unsigned __int128 rem = 0;
    for (int i = UINT8192_LIMBS - 1; i >= 0; i--) {
        rem = (rem << 64) | a->limb[i];
        uint64_t qlimb = (uint64_t)(rem / 10);
        rem = rem % 10;
        q->limb[i] = qlimb;
    }
    return (uint32_t)rem;
}

static inline void uint8192_to_decimal(const uint8192_t *x, char *out, size_t out_size) {
    if (uint8192_is_zero(x)) {
        if (out_size >= 2) { out[0] = '0'; out[1] = '\0'; }
        return;
    }
    uint8192_t work, q;
    uint8192_copy(&work, x);
    char digits[4096];
    size_t di = 0;
    while (!uint8192_is_zero(&work)) {
        uint32_t rem = uint8192_div10(&q, &work);
        digits[di++] = '0' + rem;
        uint8192_copy(&work, &q);
    }
    if (di + 1 > out_size) { out[0] = '\0'; return; }
    for (size_t i = 0; i < di; i++) out[i] = digits[di - 1 - i];
    out[di] = '\0';
}
static inline int uint8192_factorial(uint8192_t *res, unsigned int n) {
    if (n == 0) { uint8192_set_u64(res, 1); return 0; }
    uint8192_set_u64(res, 1);
    uint8192_t tmp;
    for (unsigned int k = 2; k <= n; ++k) {
        unsigned __int128 carry = 0;
        for (int i = 0; i < UINT8192_LIMBS; ++i) {
            unsigned __int128 prod = (unsigned __int128)res->limb[i] * (unsigned __int128)k + carry;
            tmp.limb[i] = (uint64_t)prod;
            carry = prod >> 64;
        }
        if (carry) return -1; /* overflow */
        uint8192_copy(res, &tmp);
    }
    return 0;
}

#endif

