/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrRadialGradientLayout.fp; do not modify.
 **************************************************************************************************/
#ifndef GrRadialGradientLayout_DEFINED
#define GrRadialGradientLayout_DEFINED
#include "SkTypes.h"

#include "SkRadialGradient.h"
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrRadialGradientLayout : public GrFragmentProcessor {
public:
    const SkMatrix44& gradientMatrix() const { return fGradientMatrix; }

    static std::unique_ptr<GrFragmentProcessor> Make(const SkRadialGradient& gradient,
                                                     const GrFPArgs& args);
    GrRadialGradientLayout(const GrRadialGradientLayout& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "RadialGradientLayout"; }

private:
    GrRadialGradientLayout(SkMatrix44 gradientMatrix)
            : INHERITED(kGrRadialGradientLayout_ClassID,
                        (OptimizationFlags)kPreservesOpaqueInput_OptimizationFlag)
            , fGradientMatrix(gradientMatrix)
            , fCoordTransform0(gradientMatrix) {
        this->addCoordTransform(&fCoordTransform0);
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    SkMatrix44 fGradientMatrix;
    GrCoordTransform fCoordTransform0;
    typedef GrFragmentProcessor INHERITED;
};
#endif
