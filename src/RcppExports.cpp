// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// countSNPs_cpp
NumericVector countSNPs_cpp(NumericVector POS, double windowSize);
RcppExport SEXP _QTLseqr_countSNPs_cpp(SEXP POSSEXP, SEXP windowSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type POS(POSSEXP);
    Rcpp::traits::input_parameter< double >::type windowSize(windowSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(countSNPs_cpp(POS, windowSize));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP _QTLseqr_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_QTLseqr_countSNPs_cpp", (DL_FUNC) &_QTLseqr_countSNPs_cpp, 2},
    {"_QTLseqr_timesTwo", (DL_FUNC) &_QTLseqr_timesTwo, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_QTLseqr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}