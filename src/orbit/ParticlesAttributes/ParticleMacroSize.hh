//////////////////////////////// -*- C++ -*- //////////////////////////////
//
// FILE NAME
//   ParticleMacroSize.hh
//
// AUTHOR
//    A. Shishlo
//
// CREATED
//    07/14/2005
//
// DESCRIPTION
//    A subclass of the particle attributes class. This is container
//    for a macrosize of macro-particles in the bunch.
//
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//
// INCLUDE FILES
//
///////////////////////////////////////////////////////////////////////////
#ifndef PARTICLE_MACROSIZE_H
#define PARTICLE_MACROSIZE_H

///////////////////////////////////////////////////////////////////////////
//
// INCLUDE FILES
//
///////////////////////////////////////////////////////////////////////////
#include <string>

///////////////////////////////////////////////////////////////////////////
//
// CLASS NAME
//    ParticleMacroSize
//
///////////////////////////////////////////////////////////////////////////
#include "ParticleAttributes.hh"

class ParticleMacroSize : public ParticleAttributes
{
public:
  //--------------------------------------
  //the public methods of the ParticleMacroSize class
  //--------------------------------------

  ParticleMacroSize(Bunch* bunch);
  ~ParticleMacroSize();

  double& macrosize(int particle_index);

};

///////////////////////////////////////////////////////////////////////////
//
// END OF FILE
//
///////////////////////////////////////////////////////////////////////////

#endif
