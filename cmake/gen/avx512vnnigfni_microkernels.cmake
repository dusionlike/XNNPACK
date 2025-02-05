# Copyright 2022 Google LLC
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree.
#
# Description: microkernel filename lists for avx512vnnigfni
#
# Auto-generated file. Do not edit!
#   Generator: tools/update-microkernels.py


SET(ALL_AVX512VNNIGFNI_MICROKERNEL_SRCS
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-1x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-1x8c8-minmax-avx512vnnigfni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-5x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-5x8c8-minmax-avx512vnnigfni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-7x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-7x8c8-minmax-avx512vnnigfni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-8x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-8x8c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x8c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x16c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x8c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x16c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x8c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x16c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x8c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x8c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x16c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x16c8-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-16x16c4-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-16x16c4-minmax-avx512vnnigfni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-16x16c8-minmax-avx512vnnigfni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-16x16c8-minmax-avx512vnnigfni.c)
