#ifndef __GEOHALFLINE__
#define __GEOHALFLINE__

#include "GeoVector.h"
namespace geoalgo {
  class HalfLine {
    
  public:
    
    /// Default constructor
    HalfLine();

    /// Default destructor
    virtual ~HalfLine(){};

    /// Alternative ctor (1)
    HalfLine(const double x,    const double y,    const double z,
	     const double dirx, const double diry, const double dirz);

    /// Altenartive ctor (2)
    HalfLine(const Point_t& start, const Vector_t& dir);
    
    const Point_t&  Start () const; ///< Start getter
    const Vector_t& Dir   () const; ///< Direction getter
    
    void Start(const double x, const double y, const double z); ///< Start setter
    void Dir  (const double x, const double y, const double z); ///< Dir setter

    void Start(const TVector3& pt ); ///< Start setter
    void Dir  (const TVector3& dir); ///< Dir setter

  protected:

    void Normalize(); ///< Normalize direction
    Point_t  _start;  ///< Beginning of the half line
    Vector_t _dir;    ///< Direction of the half line from _start

  public:

    //
    // Template
    // 

    /// Alternative ctor using template (3)
    template <class T, class U> HalfLine(const T& start, const U& dir)
      : HalfLine(Point_t(start), Vector_t(dir))
    {}

    /// Start setter template
    template<class T>
    void Start(const T& pos)
    { 
      _start = Point_t(pos); 
      //      if(_start.size()!=3) throw GeoAlgoException("<<Start>> Only 3 dimensional start point allowed!"); 
    }
    
    /// Dir setter template
    template<class T>
    void Dir(const T& dir)
    { 
      _dir = Vector_t(dir);
      //if(_dir.size()!=3) throw GeoAlgoException("<<Start>> Only 3 dimensional start point allowed!"); 
      Normalize();
    }

    ClassDef(HalfLine, 1);
  };
  
  typedef HalfLine HalfLine_t;
}
#endif
/** @} */ // end of doxygen group 

