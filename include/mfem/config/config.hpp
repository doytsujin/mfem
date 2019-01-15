// Copyright (c) 2010, Lawrence Livermore National Security, LLC. Produced at
// the Lawrence Livermore National Laboratory. LLNL-CODE-443211. All Rights
// reserved. See file COPYRIGHT for details.
//
// This file is part of the MFEM library. For more information and source code
// availability see http://mfem.org.
//
// MFEM is free software; you can redistribute it and/or modify it under the
// terms of the GNU Lesser General Public License (as published by the Free
// Software Foundation) version 2.1 dated February 1999.

#ifndef MFEM_CONFIG_HEADER
#define MFEM_CONFIG_HEADER

// MFEM version: integer of the form: (major*100 + minor)*100 + patch.
#define MFEM_VERSION 30303

// MFEM version string of the form "3.3" or "3.3.1".
#define MFEM_VERSION_STRING "3.3.3"

// MFEM version type, see the MFEM_VERSION_TYPE_* constants below.
#define MFEM_VERSION_TYPE ((MFEM_VERSION)%2)

// MFEM version type constants.
#define MFEM_VERSION_TYPE_RELEASE 0
#define MFEM_VERSION_TYPE_DEVELOPMENT 1

// Separate MFEM version numbers for major, minor, and patch.
#define MFEM_VERSION_MAJOR ((MFEM_VERSION)/10000)
#define MFEM_VERSION_MINOR (((MFEM_VERSION)/100)%100)
#define MFEM_VERSION_PATCH ((MFEM_VERSION)%100)

// Description of the git commit used to build MFEM.
#define MFEM_GIT_STRING "heads/AIR-0-gbf0474df870128cd16c832acb072669889f8f2cf-dirty"

// Build the parallel MFEM library.
// Requires an MPI compiler, and the libraries HYPRE and METIS.
#define MFEM_USE_MPI

// Enable debug checks in MFEM.
/* #undef MFEM_DEBUG */

// Enable gzstream in MFEM.
/* #undef MFEM_USE_GZSTREAM */

// Enable backtraces for mfem_error through libunwind.
/* #undef MFEM_USE_LIBUNWIND */

// Enable MFEM features that use the METIS library (parallel MFEM).
#define MFEM_USE_METIS

// Enable this option if linking with METIS version 5 (parallel MFEM).
#define MFEM_USE_METIS_5

// Use LAPACK routines for various dense linear algebra operations.
#define MFEM_USE_LAPACK

// Use thread-safe implementation. This comes at the cost of extra memory
// allocation and de-allocation.
/* #undef MFEM_THREAD_SAFE */

// Enable experimental OpenMP support. Requires MFEM_THREAD_SAFE.
/* #undef MFEM_USE_OPENMP */

// Enable MFEM functionality based on the Mesquite library.
/* #undef MFEM_USE_MESQUITE */

// Enable MFEM functionality based on the SuiteSparse library.
/* #undef MFEM_USE_SUITESPARSE */

// Enable MFEM functionality based on the SuperLU_DIST library.
/* #undef MFEM_USE_SUPERLU */

// Enable MFEM functionality based on the STRUMPACK library.
/* #undef MFEM_USE_STRUMPACK */

// Internal MFEM option: enable group/batch allocation for some small objects.
#define MFEM_USE_MEMALLOC

// Enable functionality based on the Gecko library
/* #undef MFEM_USE_GECKO */

// Enable MFEM functionality based on the GnuTLS library
/* #undef MFEM_USE_GNUTLS */

// Enable MFEM functionality based on the NetCDF library
/* #undef MFEM_USE_NETCDF */

// Enable MFEM functionality based on the PETSc library
/* #undef MFEM_USE_PETSC */

// Enable MFEM functionality based on the Sidre library
/* #undef MFEM_USE_SIDRE */

// Which library functions to use in class StopWatch for measuring time.
// For a list of the available options, see INSTALL.
// If not defined, an option is selected automatically.
#define MFEM_TIMER_TYPE 4

// Enable MFEM functionality based on the SUNDIALS libraries.
/* #undef MFEM_USE_SUNDIALS */

// Windows specific options
// Macro needed to get defines like M_PI from <cmath>. (Visual Studio C++ only?)
/* #undef _USE_MATH_DEFINES */

// Version of HYPRE used for building MFEM.
#define MFEM_HYPRE_VERSION 21300

#endif // MFEM_CONFIG_HEADER
