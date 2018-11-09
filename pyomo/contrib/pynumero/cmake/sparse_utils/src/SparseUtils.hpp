/**___________________________________________________________________________
 *
 * Pyomo: Python Optimization Modeling Objects
 * Copyright 2017 National Technology and Engineering Solutions of Sandia, LLC
 * Under the terms of Contract DE-NA0003525 with National Technology and
 * Engineering Solutions of Sandia, LLC, the U.S. Government retains certain
 * rights in this software.
 * This software is distributed under the 3-clause BSD License.
 * ___________________________________________________________________________
**/
#ifndef __SPARSEUTIL_HPP__
#define __SPARSEUTIL_HPP__

#include <algorithm>
#include <functional>
#include <vector>

#include <iostream>

// index start from 0
void sym_coo_matvec(int* irow,
                    int* jcol,
                    double* values,
                    int nnz,
                    double* x,
                    int nx,
                    double* result,
                    int nres);

void sym_csr_matvec(int nrows,
                    int* row_pointer,
                    int nrowp,
                    int* col_indices,
                    double* values,
                    int nnz,
                    double* x,
                    int nx,
                    double* result,
                    int nres);

void sym_csc_matvec(int ncols,
                    int* col_pointer,
                    int ncolp,
                    int* row_indices,
                    double* values,
                    int nnz,
                    double* x,
                    int nx,
                    double* result,
                    int nres);

void csr_matvec_no_diag(int nrows,
                        int* row_pointer,
                        int nrowp,
                        int* col_indices,
                        double* values,
                        int nnz,
                        double* x,
                        int nx,
                        double* result,
                        int nres);

void csc_matvec_no_diag(int ncols,
                        int* col_pointer,
                        int ncolp,
                        int* row_indices,
                        double* values,
                        int nnz,
                        double* x,
                        int nx,
                        double* result,
                        int nres);

void sym_csr_diagonal(int* row_pointer,
                      int nrowp,
                      int* col_indices,
                      double* values,
                      int nnz,
                      double* diag,
                      int nrows);

void sym_csc_diagonal(int* col_pointer,
                      int ncolp,
                      int* row_indices,
                      double* values,
                      int nnz,
                      double* diag,
                      int ncols);

int sym_csr_allnnz(int* row_pointer,
                   int* col_indices,
                   int nrows);

int sym_csc_allnnz(int* col_pointer,
                   int* row_indices,
                   int ncols);

#endif