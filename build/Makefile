# Makefile for Simple 2D LBM code
# Andreas B�lling, 2012
# andreas@bulling.se

#Paths
SRCDIR = ../src
APPDIR = $(SRCDIR)/app
TESTDIR = $(SRCDIR)/tests
TOPDIR = ..

vpath %.cpp $(SRCDIR) $(APPDIR) $(SRCDIR)/col \
			$(SRCDIR)/lat $(SRCDIR)/str \
			$(SRCDIR)/bdr $(SRCDIR)/unit

#Settings

#Objects
OBJS := LBM.o \
		Aux.o \
		HalfWayBBNodes.o \
		BoundaryNodes.o \
		ValueNode.o \
		NodeNeighbors.o \
		BounceBackNodes.o \
		HeZouPressureNodes.o \
		HeZouLPMChaiNodes.o \
		DirichletLPMNodes.o \
		NeumannLPMNodes.o \
		StreamModel.o \
		PeriodicStreamModel.o \
		DefaultStreamModel.o \
		CollisionD2Q9.o \
		CollisionD2Q9BGK.o \
		CollisionD2Q9LPM.o \
		CollisionD2Q9LPMChai.o \
		CollisionD2Q9LPMChaiHelmholtz.o \
		CollisionD2Q9LPMWang.o \
		CollisionD2Q9WangHelmholtz.o \
		CollisionModel.o \
		LatticeModel.o \
		Lattice2D.o \
		StreamD2Q9.o \
		StreamD2Q9Periodic.o \
		Node.o \
		UnitHandler.o \
		UnitHandlerLPM.o \
		AppHelmholtzWang.o \
		#AppLPMChaiTest.o \
		
		#AppLPMTest.o \
		#AppTaylorVortex.o \
		#AppCylinderBFL.o  \
		#AppPoiseuilleForce.o \
		AppForceCylinderBFL.o \
		#AppCylinder.o  \
		ConstantPressureBoundaryNodes.o\
		ConstantVelocityBoundaryNodes.o\
		BFLBoundaryNodes.o \
	
		
#C++-compiler
CXX = g++

#Compiler options
CPPFLAGS =-O2 -pg

#Libraries
LIBS = -lm

#misc for osx
#OSX = -framework cocoa

all: a.out 

a.out: $(OBJS)
	$(CXX) -o $@ $(CPPFLAGS) $(OBJS) $(LIBS)
	
clean:
	rm -f a.out *.o