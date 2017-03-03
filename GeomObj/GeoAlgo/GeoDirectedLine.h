#ifndef __GEODIRECTEDLINE__
#define __GEODIRECTEDLINE__

#include "GeoLine.h"

namespace geoalgo {

  class DirectedLine : public Line {

  public:

    /// Default ctor
    DirectedLine();

    /// Alternative ctor (1)
    DirectedLine(const double x, const double y, const double z,
		 const double dirx, const double diry, const double dirz);
    
    /// Altenartive ctor (2)
    DirectedLine(const Point_t& pt, const Vector_t& dir);

    /// Alternative ctor (3)
    DirectedLine(const HalfLine& l);

    /// Alternative ctor using template (3)
    template <class T, class U> DirectedLine(const T& pt, const U& dir)
      : Line(Point_t(pt), Point_t(pt+dir))
    {}
    
    Vector_t Dir() const;

    ClassDef(DirectedLine, 1);
  };

  typedef DirectedLine DirectedLine_t;
}
#endif
/** @} */ // end of doxygen group 

