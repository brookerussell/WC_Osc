CXXFLAGS	= -g +al +Z -I$(ROOTSYS)/include
LDFLAGS		= -g +al -b
LD		= CC

HDRS		= GeoVector.h GeoTrajectory.h GeoHalfLine.h GeoLine.h GeoDirectedLine.h GeoLineSegment.h Linkdef.h
SRCS		= GeoVects.cxx GeoTrajectory.cxx GeoHalfLine.cxx GeoLine.cxx GeoDirectedLine.cxx GeoLineSegment.cxx
OBJS		= GeoVector.o GeoTrajectory.o GeoHalfLine.o GeoLine.o GeoDirectedLine.o GeoLineSegment.o

GeoAlgo.cxx: $(HDRS) Linkdef.h
	rootcint -f $@ -c $(CXXFLAGS) -p $^

libGeoAlgo.so: GeoAlgo.cxx $(SRCS)
	g++ -shared -o$@ `root-config --ldflags` $(CXXFLAGS) -I$(ROOTSYS)/include $^
