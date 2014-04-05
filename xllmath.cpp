// xllmath.cpp
// Copyright (c) KALX, LLC. All rights reserved. No warranty made.

#include <cmath>
#include"xllmath.h"

using namespace xll;

static AddInX xai_cos(_T("?xll_cos"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.COS"), _T("Num"), CATEGORY, _T("Compute cosine."));
double WINAPI xll_cos(double x)
{
#pragma XLLEXPORT
    return cos(x);
}
static AddInX xai_sin(_T("?xll_sin"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.SIN"), _T("Num"), CATEGORY, _T("Compute sine."));
double WINAPI xll_sin(double x)
{
#pragma XLLEXPORT
    return sin(x);
}
static AddInX xai_tan(_T("?xll_tan"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.TAN"), _T("Num"), CATEGORY, _T("Compute tangent."));
double WINAPI xll_tan(double x)
{
#pragma XLLEXPORT
    return tan(x);
}
static AddInX xai_acos(_T("?xll_acos"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ACOS"), _T("Num"), CATEGORY, _T("Compute arc cosine."));
double WINAPI xll_acos(double x)
{
#pragma XLLEXPORT
    return acos(x);
}
static AddInX xai_asin(_T("?xll_asin"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ASIN"), _T("Num"), CATEGORY, _T("Compute arc sine."));
double WINAPI xll_asin(double x)
{
#pragma XLLEXPORT
    return asin(x);
}
static AddInX xai_atan(_T("?xll_atan"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ATAN"), _T("Num"), CATEGORY, _T("Compute arc tangent."));
double WINAPI xll_atan(double x)
{
#pragma XLLEXPORT
    return atan(x);
}
static AddInX xai_cosh(_T("?xll_cosh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.COSH"), _T("Num"), CATEGORY, _T("Compute hyperbolic cosine."));
double WINAPI xll_cosh(double x)
{
#pragma XLLEXPORT
    return cosh(x);
}
static AddInX xai_sinh(_T("?xll_sinh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.SINH"), _T("Num"), CATEGORY, _T("Compute hyperbolic sine."));
double WINAPI xll_sinh(double x)
{
#pragma XLLEXPORT
    return sinh(x);
}
static AddInX xai_tanh(_T("?xll_tanh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.TANH"), _T("Num"), CATEGORY, _T("Compute hyperbolic tangent."));
double WINAPI xll_tanh(double x)
{
#pragma XLLEXPORT
    return tanh(x);
}
static AddInX xai_acosh (_T("?xll_acosh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ACOSH"), _T("Num"), CATEGORY, _T("Compute arc hyperbolic cosine."));
double WINAPI xll_acosh (double x)
{
#pragma XLLEXPORT
    return acosh(x);
}
static AddInX xai_asinh (_T("?xll_asinh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ASINH"), _T("Num"), CATEGORY, _T("Compute arc hyperbolic sine."));
double WINAPI xll_asinh (double x)
{
#pragma XLLEXPORT
    return asinh(x);
}
static AddInX xai_atanh (_T("?xll_atanh"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ATANH"), _T("Num"), CATEGORY, _T("Compute arc hyperbolic tangent."));
double WINAPI xll_atanh (double x)
{
#pragma XLLEXPORT
    return atanh(x);
}
static AddInX xai_exp(_T("?xll_exp"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.EXP"), _T("Num"), CATEGORY, _T("Compute exponential function."));
double WINAPI xll_exp(double x)
{
#pragma XLLEXPORT
    return exp(x);
}
static AddInX xai_log(_T("?xll_log_"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LOG"), _T("Num"), CATEGORY, _T("Compute natural logarithm."));
double WINAPI xll_log_(double x)
{
#pragma XLLEXPORT
    return log(x);
}
static AddInX xai_log10(_T("?xll_log10"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LOG10"), _T("Num"), CATEGORY, _T("Compute common logarithm."));
double WINAPI xll_log10(double x)
{
#pragma XLLEXPORT
    return log10(x);
}
static AddInX xai_exp2 (_T("?xll_exp2"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.EXP2"), _T("Num"), CATEGORY, _T("Compute binary exponential function."));
double WINAPI xll_exp2 (double x)
{
#pragma XLLEXPORT
    return exp2(x);
}
static AddInX xai_expm1 (_T("?xll_expm1"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.EXPM1"), _T("Num"), CATEGORY, _T("Compute exponential minus one."));
double WINAPI xll_expm1 (double x)
{
#pragma XLLEXPORT
    return expm1(x);
}
static AddInX xai_ilogb (_T("?xll_ilogb"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ILOGB"), _T("Num"), CATEGORY, _T("Integer binary logarithm."));
double WINAPI xll_ilogb (double x)
{
#pragma XLLEXPORT
    return ilogb(x);
}
static AddInX xai_log1p (_T("?xll_log1p"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LOG1P"), _T("Num"), CATEGORY, _T("Compute logarithm plus one."));
double WINAPI xll_log1p (double x)
{
#pragma XLLEXPORT
    return log1p(x);
}
static AddInX xai_log2 (_T("?xll_log2"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LOG2"), _T("Num"), CATEGORY, _T("Compute binary logarithm."));
double WINAPI xll_log2 (double x)
{
#pragma XLLEXPORT
    return log2(x);
}
static AddInX xai_logb (_T("?xll_logb"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LOGB"), _T("Num"), CATEGORY, _T("Compute floating-point base logarithm."));
double WINAPI xll_logb (double x)
{
#pragma XLLEXPORT
    return logb(x);
}
static AddInX xai_sqrt(_T("?xll_sqrt"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.SQRT"), _T("Num"), CATEGORY, _T("Compute square root."));
double WINAPI xll_sqrt(double x)
{
#pragma XLLEXPORT
    return sqrt(x);
}
static AddInX xai_cbrt (_T("?xll_cbrt"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.CBRT"), _T("Num"), CATEGORY, _T("Compute cubic root."));
double WINAPI xll_cbrt (double x)
{
#pragma XLLEXPORT
    return cbrt(x);
}
static AddInX xai_erf (_T("?xll_erf"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ERF"), _T("Num"), CATEGORY, _T("Compute error function."));
double WINAPI xll_erf (double x)
{
#pragma XLLEXPORT
    return erf(x);
}
static AddInX xai_erfc (_T("?xll_erfc"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ERFC"), _T("Num"), CATEGORY, _T("Compute complementary error function."));
double WINAPI xll_erfc (double x)
{
#pragma XLLEXPORT
    return erfc(x);
}
static AddInX xai_tgamma (_T("?xll_tgamma"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.TGAMMA"), _T("Num"), CATEGORY, _T("Compute gamma function."));
double WINAPI xll_tgamma (double x)
{
#pragma XLLEXPORT
    return tgamma(x);
}
static AddInX xai_lgamma (_T("?xll_lgamma"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.LGAMMA"), _T("Num"), CATEGORY, _T("Compute log-gamma function."));
double WINAPI xll_lgamma (double x)
{
#pragma XLLEXPORT
    return lgamma(x);
}
static AddInX xai_ceil(_T("?xll_ceil"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.CEIL"), _T("Num"), CATEGORY, _T("Round up value."));
double WINAPI xll_ceil(double x)
{
#pragma XLLEXPORT
    return ceil(x);
}
static AddInX xai_floor(_T("?xll_floor"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.FLOOR"), _T("Num"), CATEGORY, _T("Round down value."));
double WINAPI xll_floor(double x)
{
#pragma XLLEXPORT
    return floor(x);
}
static AddInX xai_trunc (_T("?xll_trunc"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.TRUNC"), _T("Num"), CATEGORY, _T("Truncate value."));
double WINAPI xll_trunc (double x)
{
#pragma XLLEXPORT
    return trunc(x);
}
static AddInX xai_round (_T("?xll_round"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ROUND"), _T("Num"), CATEGORY, _T("Round to nearest."));
double WINAPI xll_round (double x)
{
#pragma XLLEXPORT
    return round(x);
}
static AddInX xai_rint (_T("?xll_rint"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.RINT"), _T("Num"), CATEGORY, _T("Round to integral value."));
double WINAPI xll_rint (double x)
{
#pragma XLLEXPORT
    return rint(x);
}
static AddInX xai_nearbyint (_T("?xll_nearbyint"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.NEARBYINT"), _T("Num"), CATEGORY, _T("Round to nearby integral value."));
double WINAPI xll_nearbyint (double x)
{
#pragma XLLEXPORT
    return nearbyint(x);
}
static AddInX xai_abs(_T("?xll_abs"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ABS"), _T("Num"), CATEGORY, _T("Compute absolute value."));
double WINAPI xll_abs(double x)
{
#pragma XLLEXPORT
    return abs(x);
}

static AddInX xai_atan2(_T("?xll_atan2"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ATAN2"), _T("Num, Num"), CATEGORY, _T("Compute arc tangent with two parameters."));
double WINAPI xll_atan2(double x, double x_)
{
#pragma XLLEXPORT
    return atan2(x, x_);
}
static AddInX xai_pow(_T("?xll_pow"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.POW"), _T("Num, Num"), CATEGORY, _T("Raise to power."));
double WINAPI xll_pow(double x, double x_)
{
#pragma XLLEXPORT
    return pow(x, x_);
}
static AddInX xai_hypot(_T("?xll_hypot"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.HYPOT"), _T("Num, Num"), CATEGORY, _T("Compute hypotenuse."));
double WINAPI xll_hypot(double x, double x_)
{
#pragma XLLEXPORT
    return hypot(x, x_);
}
static AddInX xai_fdim(_T("?xll_fdim"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.FDIM"), _T("Num, Num"), CATEGORY, _T("Positive difference."));
double WINAPI xll_fdim(double x, double x_)
{
#pragma XLLEXPORT
    return fdim(x, x_);
}
static AddInX xai_fmax(_T("?xll_fmax"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.FMAX"), _T("Num, Num"), CATEGORY, _T("Maximum value."));
double WINAPI xll_fmax(double x, double x_)
{
#pragma XLLEXPORT
    return fmax(x, x_);
}
static AddInX xai_fmin(_T("?xll_fmin"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.FMIN"), _T("Num, Num"), CATEGORY, _T("Minimum value."));
double WINAPI xll_fmin(double x, double x_)
{
#pragma XLLEXPORT
    return fmin(x, x_);
}
static AddInX xai_fmod(_T("?xll_fmod"), XLL_DOUBLEX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.FMOD"), _T("Num, Num"), CATEGORY, _T("Compute remainder of division."));
double WINAPI xll_fmod(double x, double x_)
{
#pragma XLLEXPORT
	return fmod(x, x_);
}

static AddInX xai_isgreater(_T("?xll_isgreater"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISGREATER"), _T("Num, Num"), CATEGORY, _T("Is greater."));
BOOL WINAPI xll_isgreater(double x, double x_)
{
#pragma XLLEXPORT
    return isgreater(x, x_);
}
static AddInX xai_isgreaterequal(_T("?xll_isgreaterequal"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISGREATEREQUAL"), _T("Num, Num"), CATEGORY, _T("Is greater or equal."));
BOOL WINAPI xll_isgreaterequal(double x, double x_)
{
#pragma XLLEXPORT
    return isgreaterequal(x, x_);
}
static AddInX xai_isless(_T("?xll_isless"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISLESS"), _T("Num, Num"), CATEGORY, _T("Is less."));
BOOL WINAPI xll_isless(double x, double x_)
{
#pragma XLLEXPORT
    return isless(x, x_);
}
static AddInX xai_islessequal(_T("?xll_islessequal"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISLESSEQUAL"), _T("Num, Num"), CATEGORY, _T("Is less or equal."));
BOOL WINAPI xll_islessequal(double x, double x_)
{
#pragma XLLEXPORT
    return islessequal(x, x_);
}
static AddInX xai_islessgreater(_T("?xll_islessgreater"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISLESSGREATER"), _T("Num, Num"), CATEGORY, _T("Is less or greater."));
BOOL WINAPI xll_islessgreater(double x, double x_)
{
#pragma XLLEXPORT
    return islessgreater(x, x_);
}
static AddInX xai_isunordered(_T("?xll_isunordered"), XLL_BOOLX XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISUNORDERED"), _T("Num, Num"), CATEGORY, _T("Is unordered."));
BOOL WINAPI xll_isunordered(double x, double x_)
{
#pragma XLLEXPORT
    return isunordered(x, x_);
}

XLL_ENUMX(FP_INFINITE, FP_INFINITE, CATEGORY , "Positive or negative infinity (overflow)");
XLL_ENUMX(FP_NAN, FP_NAN, CATEGORY , "Not-A-Number");
XLL_ENUMX(FP_ZERO, FP_ZERO, CATEGORY , "Value of zero");
XLL_ENUMX(FP_SUBNORMAL, FP_SUBNORMAL, CATEGORY , "Sub-normal value (underflow)");
XLL_ENUMX(FP_NORMAL, FP_NORMAL, CATEGORY , "Normal value (none of the above)");

static AddInX xai_fpclassify(_T("?xll_fpclassify"), XLL_LONGX XLL_DOUBLEX,  _T("XLL.FPCLASSIFY"), _T("Num"), CATEGORY, _T("Classify floating-point value (macro/function )."));
LONG WINAPI xll_fpclassify(double x)
{
#pragma XLLEXPORT
    return fpclassify(x);
}

static AddInX xai_isfinite(_T("?xll_isfinite"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISFINITE"), _T("Num"), CATEGORY, _T("Is finite value."));
BOOL WINAPI xll_isfinite(double x)
{
#pragma XLLEXPORT
    return isfinite(x);
}
static AddInX xai_isinf(_T("?xll_isinf"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISINF"), _T("Num"), CATEGORY, _T("Is infinity (macro/function )."));
BOOL WINAPI xll_isinf(double x)
{
#pragma XLLEXPORT
    return isinf(x);
}
static AddInX xai_isnan(_T("?xll_isnan"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISNAN"), _T("Num"), CATEGORY, _T("Is Not-A-Number (macro/function )."));
BOOL WINAPI xll_isnan(double x)
{
#pragma XLLEXPORT
    return isnan(x);
}
static AddInX xai_isnormal(_T("?xll_isnormal"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.ISNORMAL"), _T("Num"), CATEGORY, _T("Is normal (macro/function )."));
BOOL WINAPI xll_isnormal(double x)
{
#pragma XLLEXPORT
    return isnormal(x);
}
static AddInX xai_signbit(_T("?xll_signbit"), XLL_DOUBLEX XLL_DOUBLEX,  _T("XLL.SIGNBIT"), _T("Num"), CATEGORY, _T("Sign bit (macro/function )."));
BOOL WINAPI xll_signbit(double x)
{
#pragma XLLEXPORT
    return signbit(x);
}

static AddInX xai_modf(
	_T("?xll_modf"), XLL_FPX XLL_DOUBLEX,  
	_T("XLL.MODF"), _T("Num"), 
	CATEGORY, 
	_T("Break into fractional and integral parts.")
);
xfp* WINAPI xll_modf(double x)
{
#pragma XLLEXPORT
	static FPX y(1,2);

    y[0] = modf(x, &y[1]);

	return y.get();
}

static AddInX xai_frexp(
	_T("?xll_frexp"), XLL_FPX XLL_DOUBLEX,  
	_T("XLL.FREXP"), _T("Num"), 
	CATEGORY, 
	_T("Get significand and exponent.")
);
xfp* WINAPI xll_frexp(double x)
{
#pragma XLLEXPORT
	static FPX y(1,2);

	int i;

    y[0] = frexp(x, &i);
	y[1] = i;

	return y.get();
}
static AddInX xai_ldexp(
	_T("?xll_ldexp"), XLL_DOUBLEX XLL_DOUBLEX XLL_LONGX,  
	_T("XLL.LDEXP"), _T("Sig, Exp"), 
	CATEGORY, 
	_T("Generate value from significand and exponent.")
);
double WINAPI xll_ldexp(double x, LONG e)
{
#pragma XLLEXPORT
	return ldexp(x, e);
}
