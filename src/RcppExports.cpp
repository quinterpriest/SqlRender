// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// renderSqlInteral
Rcpp::List renderSqlInteral(std::string sql, Rcpp::List parameters);
RcppExport SEXP SQLRender_renderSqlInteral(SEXP sqlSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type parameters(parametersSEXP );
        Rcpp::List __result = renderSqlInteral(sql, parameters);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}