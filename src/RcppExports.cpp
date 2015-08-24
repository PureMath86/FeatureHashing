// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pair_sort
void pair_sort(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_pair_sort(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    pair_sort(i, x);
    return R_NilValue;
END_RCPP
}
// merge
int merge(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_merge(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(merge(i, x));
    return __result;
END_RCPP
}
// todgCMatrix
SEXP todgCMatrix(S4 m);
RcppExport SEXP FeatureHashing_todgCMatrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    __result = Rcpp::wrap(todgCMatrix(m));
    return __result;
END_RCPP
}
// tomatrix
SEXP tomatrix(S4 m);
RcppExport SEXP FeatureHashing_tomatrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    __result = Rcpp::wrap(tomatrix(m));
    return __result;
END_RCPP
}
// hashed_model_matrix_dataframe
SEXP hashed_model_matrix_dataframe(RObject tf, DataFrame data, unsigned long hash_size, bool transpose, S4 retval, bool keep_hashing_mapping, bool is_xi);
RcppExport SEXP FeatureHashing_hashed_model_matrix_dataframe(SEXP tfSEXP, SEXP dataSEXP, SEXP hash_sizeSEXP, SEXP transposeSEXP, SEXP retvalSEXP, SEXP keep_hashing_mappingSEXP, SEXP is_xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type tf(tfSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< S4 >::type retval(retvalSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_hashing_mapping(keep_hashing_mappingSEXP);
    Rcpp::traits::input_parameter< bool >::type is_xi(is_xiSEXP);
    __result = Rcpp::wrap(hashed_model_matrix_dataframe(tf, data, hash_size, transpose, retval, keep_hashing_mapping, is_xi));
    return __result;
END_RCPP
}
// xi
IntegerVector xi(CharacterVector src);
RcppExport SEXP FeatureHashing_xi(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP);
    __result = Rcpp::wrap(xi(src));
    return __result;
END_RCPP
}
// h
IntegerVector h(CharacterVector src);
RcppExport SEXP FeatureHashing_h(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP);
    __result = Rcpp::wrap(h(src));
    return __result;
END_RCPP
}
// h2
IntegerVector h2(CharacterVector src);
RcppExport SEXP FeatureHashing_h2(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP);
    __result = Rcpp::wrap(h2(src));
    return __result;
END_RCPP
}
// intToRaw
SEXP intToRaw(int src);
RcppExport SEXP FeatureHashing_intToRaw(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type src(srcSEXP);
    __result = Rcpp::wrap(intToRaw(src));
    return __result;
END_RCPP
}
// Xv
NumericVector Xv(S4 m, NumericVector v, NumericVector retval);
RcppExport SEXP FeatureHashing_Xv(SEXP mSEXP, SEXP vSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP);
    __result = Rcpp::wrap(Xv(m, v, retval));
    return __result;
END_RCPP
}
// vX
NumericVector vX(NumericVector v, S4 m, NumericVector retval);
RcppExport SEXP FeatureHashing_vX(SEXP vSEXP, SEXP mSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP);
    __result = Rcpp::wrap(vX(v, m, retval));
    return __result;
END_RCPP
}
// split_existence
SEXP split_existence(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_split_existence(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP);
    __result = Rcpp::wrap(split_existence(src, delim));
    return __result;
END_RCPP
}
// split_count
SEXP split_count(CharacterVector src, const std::string& delim);
RcppExport SEXP FeatureHashing_split_count(SEXP srcSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type delim(delimSEXP);
    __result = Rcpp::wrap(split_count(src, delim));
    return __result;
END_RCPP
}
// selectColumn
SEXP selectColumn(S4 m, IntegerVector index, bool drop, SEXP Rretval);
RcppExport SEXP FeatureHashing_selectColumn(SEXP mSEXP, SEXP indexSEXP, SEXP dropSEXP, SEXP RretvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rretval(RretvalSEXP);
    __result = Rcpp::wrap(selectColumn(m, index, drop, Rretval));
    return __result;
END_RCPP
}
// selectRow
SEXP selectRow(S4 m, IntegerVector index, bool drop, SEXP Rretval);
RcppExport SEXP FeatureHashing_selectRow(SEXP mSEXP, SEXP indexSEXP, SEXP dropSEXP, SEXP RretvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rretval(RretvalSEXP);
    __result = Rcpp::wrap(selectRow(m, index, drop, Rretval));
    return __result;
END_RCPP
}
