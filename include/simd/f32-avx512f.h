// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//

#ifndef THIRD_PARTY_XNNPACK_INCLUDE_SIMD_F32_AVX512F_H_
#define THIRD_PARTY_XNNPACK_INCLUDE_SIMD_F32_AVX512F_H_

#include <assert.h>
#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>
#include <xnnpack/common.h>

// SIMD vector type for f32 using AVX512F.
typedef __m512 xnn_simd_f32_t;
#define xnn_simd_size_f32 16
static const size_t xnn_simd_log2_size_f32 = 4;
static const size_t xnn_simd_bytes_f32 = xnn_simd_size_f32 * sizeof(float);

#define XNN_SIMD_CONST_F32(var, val) \
  const xnn_simd_f32_t var = _mm512_set1_ps(val);

#define XNN_SIMD_CONST_U32(var, val) const __m512i var = _mm512_set1_epi32(val);

// Arithmetic operations.
static XNN_INLINE xnn_simd_f32_t xnn_zero_f32() { return _mm512_setzero_ps(); }

static XNN_INLINE xnn_simd_f32_t xnn_add_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_add_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_mul_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_mul_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_fmadd_f32(xnn_simd_f32_t a,
                                               xnn_simd_f32_t b,
                                               xnn_simd_f32_t c) {
  return _mm512_fmadd_ps(a, b, c);
}

static XNN_INLINE xnn_simd_f32_t xnn_fnmadd_f32(xnn_simd_f32_t a,
                                                xnn_simd_f32_t b,
                                                xnn_simd_f32_t c) {
  return _mm512_fnmadd_ps(a, b, c);
}

static XNN_INLINE xnn_simd_f32_t xnn_sub_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_sub_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_div_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_div_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_max_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_max_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_min_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_min_ps(a, b);
}

static XNN_INLINE xnn_simd_f32_t xnn_abs_f32(xnn_simd_f32_t a) {
  XNN_SIMD_CONST_U32(vnonsign_mask, 0x7FFFFFFFUL);
  return _mm512_castsi512_ps(
      _mm512_and_epi32(_mm512_castps_si512(a), vnonsign_mask));
}

static XNN_INLINE xnn_simd_f32_t xnn_neg_f32(xnn_simd_f32_t a) {
  XNN_SIMD_CONST_F32(vsign_mask, -0.0f);
  return _mm512_castsi512_ps(_mm512_xor_epi32(_mm512_castps_si512(a),
                                              _mm512_castps_si512(vsign_mask)));
}

// Logical operations.
static XNN_INLINE xnn_simd_f32_t xnn_and_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_castsi512_ps(
      _mm512_and_epi32(_mm512_castps_si512(a), _mm512_castps_si512(b)));
}

static XNN_INLINE xnn_simd_f32_t xnn_or_f32(xnn_simd_f32_t a,
                                            xnn_simd_f32_t b) {
  return _mm512_castsi512_ps(
      _mm512_or_epi32(_mm512_castps_si512(a), _mm512_castps_si512(b)));
}

static XNN_INLINE xnn_simd_f32_t xnn_xor_f32(xnn_simd_f32_t a,
                                             xnn_simd_f32_t b) {
  return _mm512_castsi512_ps(
      _mm512_xor_epi32(_mm512_castps_si512(a), _mm512_castps_si512(b)));
}

// Special functions.
#define XNN_SIMD_HAVE_RCP_F32 1
#define XNN_SIMD_NUM_RCP_ITER_F32 1
static XNN_INLINE xnn_simd_f32_t xnn_rcp_f32(xnn_simd_f32_t a) {
  return _mm512_rcp14_ps(a);
}

#define XNN_SIMD_HAVE_RSQRT_F32 1
#define XNN_SIMD_NUM_RSQRT_ITER_F32 1
static XNN_INLINE xnn_simd_f32_t xnn_rsqrt_f32(xnn_simd_f32_t a) {
  return _mm512_rsqrt14_ps(a);
}

// Load/store operations.
static XNN_INLINE xnn_simd_f32_t xnn_loadu_f32(const float* ptr) {
  return _mm512_loadu_ps(ptr);
}

static XNN_INLINE xnn_simd_f32_t xnn_load_f32(const float* ptr) {
  return _mm512_load_ps(ptr);
}

static XNN_INLINE void xnn_storeu_f32(float* ptr, xnn_simd_f32_t v) {
  _mm512_storeu_ps(ptr, v);
}

static XNN_INLINE void xnn_store_f32(float* ptr, xnn_simd_f32_t v) {
  _mm512_store_ps(ptr, v);
}

static XNN_INLINE xnn_simd_f32_t xnn_set1_f32(float v) {
  return _mm512_set1_ps(v);
}

static XNN_INLINE xnn_simd_f32_t xnn_set1_or_load_f32(const float* v) {
  return _mm512_set1_ps(*v);
}

// Tail load/store operations.
static XNN_INLINE xnn_simd_f32_t xnn_load_tail_f32(const float* input,
                                                   size_t num_elements) {
  assert(num_elements > 0);
  assert(num_elements < xnn_simd_size_f32);

  const __mmask16 vmask =
      _cvtu32_mask16((uint32_t)((UINT32_C(1) << num_elements) - UINT32_C(1)));
  return _mm512_maskz_loadu_ps(vmask, input);
}

static XNN_INLINE void xnn_store_tail_f32(float* output, xnn_simd_f32_t v,
                                          size_t num_elements) {
  assert(num_elements > 0);
  assert(num_elements < xnn_simd_size_f32);

  const __mmask16 vmask =
      _cvtu32_mask16((uint32_t)((UINT32_C(1) << num_elements) - UINT32_C(1)));
  _mm512_mask_storeu_ps(output, vmask, v);
}

#endif  // THIRD_PARTY_XNNPACK_INCLUDE_SIMD_F32_AVX512F_H_
