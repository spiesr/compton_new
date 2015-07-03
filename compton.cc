/*
  Compton polarimeter simulation

  Ryan Spies, et al.
  spiesr@myumanitoba.ca

*/


#include "CLHEP/Random/Random.h"

#include "G4Version.hh"
#include "G4PhysListFactory.hh"
#if G4VERSION_NUMBER < 1000
#include "LHEP.hh"
#endif

#include "G4RunManager.hh"

#include "G4UnitsTable.hh"

#include "G4RunManagerKernel.hh"

#include <G4UImanager.hh>
#include <G4UIExecutive.hh>
#include <G4UIterminal.hh>

#ifdef G4UI_USE_QT
#include "G4UIQt.hh"
#endif

#ifdef G4UI_USE_XM
#include "G4UIXm.hh"
#endif

#ifdef G4UI_USE_TCSH
#include "G4UItcsh.hh"
#endif

#ifdef G4VIS_USE
#include "G4VisExecutive.hh"
#endif

#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char** argv){


  return 0;
}
