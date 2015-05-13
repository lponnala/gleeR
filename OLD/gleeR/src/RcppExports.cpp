// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calcXbarStar
NumericMatrix calcXbarStar(NumericMatrix A, double n_A, double n_B, double n_iter, double xbar0_replace);
RcppExport SEXP gleeR_calcXbarStar(SEXP ASEXP, SEXP n_ASEXP, SEXP n_BSEXP, SEXP n_iterSEXP, SEXP xbar0_replaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP );
        Rcpp::traits::input_parameter< double >::type n_A(n_ASEXP );
        Rcpp::traits::input_parameter< double >::type n_B(n_BSEXP );
        Rcpp::traits::input_parameter< double >::type n_iter(n_iterSEXP );
        Rcpp::traits::input_parameter< double >::type xbar0_replace(xbar0_replaceSEXP );
        NumericMatrix __result = calcXbarStar(A, n_A, n_B, n_iter, xbar0_replace);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calcPvals
NumericVector calcPvals(NumericVector x, NumericVector f);
RcppExport SEXP gleeR_calcPvals(SEXP xSEXP, SEXP fSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP );
        NumericVector __result = calcPvals(x, f);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}