#include <AMReX_DG.H>
#include <AMReX_REAL.H>

using namespace amrex;
using namespace DG;

/* names of functions being defined must be all lowercase letters! */

extern "C"
{
  void amrex_fi_initializemeshrefinement_dg
    ( int nN[], Real ProjMatrix[],
      Real WeightsX1[], Real WeightsX2[], Real WeightsX3[],
      Real LX_X1_Refined_Packed[],
      Real LX_X2_Refined_Packed[],
      Real LX_X3_Refined_Packed[] )
  {
    InitializeMeshRefinement_DG
      ( nN, ProjMatrix,
        WeightsX1, WeightsX2, WeightsX3,
        LX_X1_Refined_Packed, LX_X2_Refined_Packed, LX_X3_Refined_Packed );
  }

  void amrex_fi_finalizemeshrefinement_dg()
  {
    FinalizeMeshRefinement_DG();
  }
}
