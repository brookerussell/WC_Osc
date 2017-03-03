#ifndef __GEOLINESEGMENT__
#define __GEOLINESEGMENT__

#include "GeoVector.h"

namespace geoalgo {

  class LineSegment{
    
  public:
    
    /// Default constructor
    LineSegment();
    
    /// Default destructor
    virtual ~LineSegment(){}

    /// Alternative ctor (1)
    LineSegment(const double start_x, const double start_y, const double start_z,
		const double end_x,   const double end_y,   const double end_z   );

    /// Altenartive ctor (2)
    LineSegment(const Point_t& start, const Point_t& end);

    //
    // Getters
    //
    const Point_t& Start() const; ///< Start getter
    const Point_t& End()   const; ///< End getter
    const Vector_t Dir()   const; ///< Direction getter

    //
    // Setters
    //
    void Start(const double x, const double y, const double z); ///< Start setter
    void End  (const double x, const double y, const double z); ///< End setter

  protected:

    void DirReset(); ///< Internal function to reset direction
    Point_t  _start; ///< Start position of a line
    Point_t  _end;   ///< End position of a line
    Vector_t _dir;   ///< Direction

  public:

    //
    // Template
    //
    /// Alternative ctor using template (3)
    template <class T, class U> LineSegment(const T& start, const U& end)
      : LineSegment(Point_t(start), Point_t(end))
    {}

    ClassDef(LineSegment, 1);    
  };

  typedef LineSegment LineSegment_t;
}

#endif

