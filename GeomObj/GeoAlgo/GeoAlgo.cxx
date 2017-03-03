// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GeoAlgo

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "GeoVector.h"
#include "GeoTrajectory.h"
#include "GeoHalfLine.h"
#include "GeoLine.h"
#include "GeoDirectedLine.h"
#include "GeoLineSegment.h"

// Header files passed via #pragma extra_include

namespace geoalgo {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *geoalgo_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("geoalgo", 0 /*version*/, "GeoVector.h", 9,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &geoalgo_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *geoalgo_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_geoalgocLcLVector(void *p = 0);
   static void *newArray_geoalgocLcLVector(Long_t size, void *p);
   static void delete_geoalgocLcLVector(void *p);
   static void deleteArray_geoalgocLcLVector(void *p);
   static void destruct_geoalgocLcLVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::Vector*)
   {
      ::geoalgo::Vector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::Vector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::Vector", ::geoalgo::Vector::Class_Version(), "GeoVector.h", 19,
                  typeid(::geoalgo::Vector), DefineBehavior(ptr, ptr),
                  &::geoalgo::Vector::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::Vector) );
      instance.SetNew(&new_geoalgocLcLVector);
      instance.SetNewArray(&newArray_geoalgocLcLVector);
      instance.SetDelete(&delete_geoalgocLcLVector);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLVector);
      instance.SetDestructor(&destruct_geoalgocLcLVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::Vector*)
   {
      return GenerateInitInstanceLocal((::geoalgo::Vector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::Vector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geoalgocLcLTrajectory(void *p = 0);
   static void *newArray_geoalgocLcLTrajectory(Long_t size, void *p);
   static void delete_geoalgocLcLTrajectory(void *p);
   static void deleteArray_geoalgocLcLTrajectory(void *p);
   static void destruct_geoalgocLcLTrajectory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::Trajectory*)
   {
      ::geoalgo::Trajectory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::Trajectory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::Trajectory", ::geoalgo::Trajectory::Class_Version(), "GeoTrajectory.h", 8,
                  typeid(::geoalgo::Trajectory), DefineBehavior(ptr, ptr),
                  &::geoalgo::Trajectory::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::Trajectory) );
      instance.SetNew(&new_geoalgocLcLTrajectory);
      instance.SetNewArray(&newArray_geoalgocLcLTrajectory);
      instance.SetDelete(&delete_geoalgocLcLTrajectory);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLTrajectory);
      instance.SetDestructor(&destruct_geoalgocLcLTrajectory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::Trajectory*)
   {
      return GenerateInitInstanceLocal((::geoalgo::Trajectory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::Trajectory*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geoalgocLcLHalfLine(void *p = 0);
   static void *newArray_geoalgocLcLHalfLine(Long_t size, void *p);
   static void delete_geoalgocLcLHalfLine(void *p);
   static void deleteArray_geoalgocLcLHalfLine(void *p);
   static void destruct_geoalgocLcLHalfLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::HalfLine*)
   {
      ::geoalgo::HalfLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::HalfLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::HalfLine", ::geoalgo::HalfLine::Class_Version(), "GeoHalfLine.h", 6,
                  typeid(::geoalgo::HalfLine), DefineBehavior(ptr, ptr),
                  &::geoalgo::HalfLine::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::HalfLine) );
      instance.SetNew(&new_geoalgocLcLHalfLine);
      instance.SetNewArray(&newArray_geoalgocLcLHalfLine);
      instance.SetDelete(&delete_geoalgocLcLHalfLine);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLHalfLine);
      instance.SetDestructor(&destruct_geoalgocLcLHalfLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::HalfLine*)
   {
      return GenerateInitInstanceLocal((::geoalgo::HalfLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::HalfLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geoalgocLcLLine(void *p = 0);
   static void *newArray_geoalgocLcLLine(Long_t size, void *p);
   static void delete_geoalgocLcLLine(void *p);
   static void deleteArray_geoalgocLcLLine(void *p);
   static void destruct_geoalgocLcLLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::Line*)
   {
      ::geoalgo::Line *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::Line >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::Line", ::geoalgo::Line::Class_Version(), "GeoLine.h", 7,
                  typeid(::geoalgo::Line), DefineBehavior(ptr, ptr),
                  &::geoalgo::Line::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::Line) );
      instance.SetNew(&new_geoalgocLcLLine);
      instance.SetNewArray(&newArray_geoalgocLcLLine);
      instance.SetDelete(&delete_geoalgocLcLLine);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLLine);
      instance.SetDestructor(&destruct_geoalgocLcLLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::Line*)
   {
      return GenerateInitInstanceLocal((::geoalgo::Line*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::Line*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geoalgocLcLDirectedLine(void *p = 0);
   static void *newArray_geoalgocLcLDirectedLine(Long_t size, void *p);
   static void delete_geoalgocLcLDirectedLine(void *p);
   static void deleteArray_geoalgocLcLDirectedLine(void *p);
   static void destruct_geoalgocLcLDirectedLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::DirectedLine*)
   {
      ::geoalgo::DirectedLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::DirectedLine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::DirectedLine", ::geoalgo::DirectedLine::Class_Version(), "GeoDirectedLine.h", 8,
                  typeid(::geoalgo::DirectedLine), DefineBehavior(ptr, ptr),
                  &::geoalgo::DirectedLine::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::DirectedLine) );
      instance.SetNew(&new_geoalgocLcLDirectedLine);
      instance.SetNewArray(&newArray_geoalgocLcLDirectedLine);
      instance.SetDelete(&delete_geoalgocLcLDirectedLine);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLDirectedLine);
      instance.SetDestructor(&destruct_geoalgocLcLDirectedLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::DirectedLine*)
   {
      return GenerateInitInstanceLocal((::geoalgo::DirectedLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::DirectedLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_geoalgocLcLLineSegment(void *p = 0);
   static void *newArray_geoalgocLcLLineSegment(Long_t size, void *p);
   static void delete_geoalgocLcLLineSegment(void *p);
   static void deleteArray_geoalgocLcLLineSegment(void *p);
   static void destruct_geoalgocLcLLineSegment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::geoalgo::LineSegment*)
   {
      ::geoalgo::LineSegment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::geoalgo::LineSegment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("geoalgo::LineSegment", ::geoalgo::LineSegment::Class_Version(), "GeoLineSegment.h", 8,
                  typeid(::geoalgo::LineSegment), DefineBehavior(ptr, ptr),
                  &::geoalgo::LineSegment::Dictionary, isa_proxy, 4,
                  sizeof(::geoalgo::LineSegment) );
      instance.SetNew(&new_geoalgocLcLLineSegment);
      instance.SetNewArray(&newArray_geoalgocLcLLineSegment);
      instance.SetDelete(&delete_geoalgocLcLLineSegment);
      instance.SetDeleteArray(&deleteArray_geoalgocLcLLineSegment);
      instance.SetDestructor(&destruct_geoalgocLcLLineSegment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::geoalgo::LineSegment*)
   {
      return GenerateInitInstanceLocal((::geoalgo::LineSegment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::geoalgo::LineSegment*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr Vector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vector::Class_Name()
{
   return "geoalgo::Vector";
}

//______________________________________________________________________________
const char *Vector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Vector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Vector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Vector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Vector*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr Trajectory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Trajectory::Class_Name()
{
   return "geoalgo::Trajectory";
}

//______________________________________________________________________________
const char *Trajectory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Trajectory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Trajectory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Trajectory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Trajectory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Trajectory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Trajectory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Trajectory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr HalfLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HalfLine::Class_Name()
{
   return "geoalgo::HalfLine";
}

//______________________________________________________________________________
const char *HalfLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::HalfLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HalfLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::HalfLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HalfLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::HalfLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HalfLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::HalfLine*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr Line::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Line::Class_Name()
{
   return "geoalgo::Line";
}

//______________________________________________________________________________
const char *Line::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Line*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Line::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Line*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Line::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Line*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Line::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::Line*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr DirectedLine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DirectedLine::Class_Name()
{
   return "geoalgo::DirectedLine";
}

//______________________________________________________________________________
const char *DirectedLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::DirectedLine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DirectedLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::DirectedLine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DirectedLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::DirectedLine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DirectedLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::DirectedLine*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
atomic_TClass_ptr LineSegment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LineSegment::Class_Name()
{
   return "geoalgo::LineSegment";
}

//______________________________________________________________________________
const char *LineSegment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::LineSegment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LineSegment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::LineSegment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LineSegment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::LineSegment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LineSegment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::geoalgo::LineSegment*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace geoalgo
namespace geoalgo {
//______________________________________________________________________________
void Vector::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::Vector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::Vector::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::Vector::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLVector(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Vector : new ::geoalgo::Vector;
   }
   static void *newArray_geoalgocLcLVector(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Vector[nElements] : new ::geoalgo::Vector[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLVector(void *p) {
      delete ((::geoalgo::Vector*)p);
   }
   static void deleteArray_geoalgocLcLVector(void *p) {
      delete [] ((::geoalgo::Vector*)p);
   }
   static void destruct_geoalgocLcLVector(void *p) {
      typedef ::geoalgo::Vector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::Vector

namespace geoalgo {
//______________________________________________________________________________
void Trajectory::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::Trajectory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::Trajectory::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::Trajectory::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLTrajectory(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Trajectory : new ::geoalgo::Trajectory;
   }
   static void *newArray_geoalgocLcLTrajectory(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Trajectory[nElements] : new ::geoalgo::Trajectory[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLTrajectory(void *p) {
      delete ((::geoalgo::Trajectory*)p);
   }
   static void deleteArray_geoalgocLcLTrajectory(void *p) {
      delete [] ((::geoalgo::Trajectory*)p);
   }
   static void destruct_geoalgocLcLTrajectory(void *p) {
      typedef ::geoalgo::Trajectory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::Trajectory

namespace geoalgo {
//______________________________________________________________________________
void HalfLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::HalfLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::HalfLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::HalfLine::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLHalfLine(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::HalfLine : new ::geoalgo::HalfLine;
   }
   static void *newArray_geoalgocLcLHalfLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::HalfLine[nElements] : new ::geoalgo::HalfLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLHalfLine(void *p) {
      delete ((::geoalgo::HalfLine*)p);
   }
   static void deleteArray_geoalgocLcLHalfLine(void *p) {
      delete [] ((::geoalgo::HalfLine*)p);
   }
   static void destruct_geoalgocLcLHalfLine(void *p) {
      typedef ::geoalgo::HalfLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::HalfLine

namespace geoalgo {
//______________________________________________________________________________
void Line::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::Line.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::Line::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::Line::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLLine(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Line : new ::geoalgo::Line;
   }
   static void *newArray_geoalgocLcLLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::Line[nElements] : new ::geoalgo::Line[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLLine(void *p) {
      delete ((::geoalgo::Line*)p);
   }
   static void deleteArray_geoalgocLcLLine(void *p) {
      delete [] ((::geoalgo::Line*)p);
   }
   static void destruct_geoalgocLcLLine(void *p) {
      typedef ::geoalgo::Line current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::Line

namespace geoalgo {
//______________________________________________________________________________
void DirectedLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::DirectedLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::DirectedLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::DirectedLine::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLDirectedLine(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::DirectedLine : new ::geoalgo::DirectedLine;
   }
   static void *newArray_geoalgocLcLDirectedLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::DirectedLine[nElements] : new ::geoalgo::DirectedLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLDirectedLine(void *p) {
      delete ((::geoalgo::DirectedLine*)p);
   }
   static void deleteArray_geoalgocLcLDirectedLine(void *p) {
      delete [] ((::geoalgo::DirectedLine*)p);
   }
   static void destruct_geoalgocLcLDirectedLine(void *p) {
      typedef ::geoalgo::DirectedLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::DirectedLine

namespace geoalgo {
//______________________________________________________________________________
void LineSegment::Streamer(TBuffer &R__b)
{
   // Stream an object of class geoalgo::LineSegment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(geoalgo::LineSegment::Class(),this);
   } else {
      R__b.WriteClassBuffer(geoalgo::LineSegment::Class(),this);
   }
}

} // namespace geoalgo
namespace ROOT {
   // Wrappers around operator new
   static void *new_geoalgocLcLLineSegment(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::LineSegment : new ::geoalgo::LineSegment;
   }
   static void *newArray_geoalgocLcLLineSegment(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::geoalgo::LineSegment[nElements] : new ::geoalgo::LineSegment[nElements];
   }
   // Wrapper around operator delete
   static void delete_geoalgocLcLLineSegment(void *p) {
      delete ((::geoalgo::LineSegment*)p);
   }
   static void deleteArray_geoalgocLcLLineSegment(void *p) {
      delete [] ((::geoalgo::LineSegment*)p);
   }
   static void destruct_geoalgocLcLLineSegment(void *p) {
      typedef ::geoalgo::LineSegment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::geoalgo::LineSegment

namespace ROOT {
   static TClass *vectorlEvectorlEgeoalgocLcLVectorgRsPgR_Dictionary();
   static void vectorlEvectorlEgeoalgocLcLVectorgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p);
   static void destruct_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<geoalgo::Vector> >*)
   {
      vector<vector<geoalgo::Vector> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<geoalgo::Vector> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<geoalgo::Vector> >", -2, "vector", 214,
                  typeid(vector<vector<geoalgo::Vector> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEgeoalgocLcLVectorgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<geoalgo::Vector> >) );
      instance.SetNew(&new_vectorlEvectorlEgeoalgocLcLVectorgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEgeoalgocLcLVectorgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEgeoalgocLcLVectorgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<geoalgo::Vector> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<geoalgo::Vector> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEgeoalgocLcLVectorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<geoalgo::Vector> >*)0x0)->GetClass();
      vectorlEvectorlEgeoalgocLcLVectorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEgeoalgocLcLVectorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<geoalgo::Vector> > : new vector<vector<geoalgo::Vector> >;
   }
   static void *newArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<geoalgo::Vector> >[nElements] : new vector<vector<geoalgo::Vector> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p) {
      delete ((vector<vector<geoalgo::Vector> >*)p);
   }
   static void deleteArray_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p) {
      delete [] ((vector<vector<geoalgo::Vector> >*)p);
   }
   static void destruct_vectorlEvectorlEgeoalgocLcLVectorgRsPgR(void *p) {
      typedef vector<vector<geoalgo::Vector> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<geoalgo::Vector> >

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLVectorgR_Dictionary();
   static void vectorlEgeoalgocLcLVectorgR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLVectorgR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLVectorgR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLVectorgR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLVectorgR(void *p);
   static void destruct_vectorlEgeoalgocLcLVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::Vector>*)
   {
      vector<geoalgo::Vector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::Vector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::Vector>", -2, "vector", 214,
                  typeid(vector<geoalgo::Vector>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::Vector>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLVectorgR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLVectorgR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLVectorgR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::Vector> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::Vector>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::Vector>*)0x0)->GetClass();
      vectorlEgeoalgocLcLVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLVectorgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Vector> : new vector<geoalgo::Vector>;
   }
   static void *newArray_vectorlEgeoalgocLcLVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Vector>[nElements] : new vector<geoalgo::Vector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLVectorgR(void *p) {
      delete ((vector<geoalgo::Vector>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLVectorgR(void *p) {
      delete [] ((vector<geoalgo::Vector>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLVectorgR(void *p) {
      typedef vector<geoalgo::Vector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::Vector>

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLTrajectorygR_Dictionary();
   static void vectorlEgeoalgocLcLTrajectorygR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLTrajectorygR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLTrajectorygR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLTrajectorygR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLTrajectorygR(void *p);
   static void destruct_vectorlEgeoalgocLcLTrajectorygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::Trajectory>*)
   {
      vector<geoalgo::Trajectory> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::Trajectory>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::Trajectory>", -2, "vector", 214,
                  typeid(vector<geoalgo::Trajectory>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLTrajectorygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::Trajectory>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLTrajectorygR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLTrajectorygR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLTrajectorygR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLTrajectorygR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLTrajectorygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::Trajectory> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::Trajectory>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLTrajectorygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::Trajectory>*)0x0)->GetClass();
      vectorlEgeoalgocLcLTrajectorygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLTrajectorygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLTrajectorygR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Trajectory> : new vector<geoalgo::Trajectory>;
   }
   static void *newArray_vectorlEgeoalgocLcLTrajectorygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Trajectory>[nElements] : new vector<geoalgo::Trajectory>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLTrajectorygR(void *p) {
      delete ((vector<geoalgo::Trajectory>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLTrajectorygR(void *p) {
      delete [] ((vector<geoalgo::Trajectory>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLTrajectorygR(void *p) {
      typedef vector<geoalgo::Trajectory> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::Trajectory>

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLLineSegmentgR_Dictionary();
   static void vectorlEgeoalgocLcLLineSegmentgR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLLineSegmentgR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLLineSegmentgR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLLineSegmentgR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLLineSegmentgR(void *p);
   static void destruct_vectorlEgeoalgocLcLLineSegmentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::LineSegment>*)
   {
      vector<geoalgo::LineSegment> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::LineSegment>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::LineSegment>", -2, "vector", 214,
                  typeid(vector<geoalgo::LineSegment>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLLineSegmentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::LineSegment>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLLineSegmentgR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLLineSegmentgR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLLineSegmentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLLineSegmentgR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLLineSegmentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::LineSegment> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::LineSegment>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLLineSegmentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::LineSegment>*)0x0)->GetClass();
      vectorlEgeoalgocLcLLineSegmentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLLineSegmentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLLineSegmentgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::LineSegment> : new vector<geoalgo::LineSegment>;
   }
   static void *newArray_vectorlEgeoalgocLcLLineSegmentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::LineSegment>[nElements] : new vector<geoalgo::LineSegment>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLLineSegmentgR(void *p) {
      delete ((vector<geoalgo::LineSegment>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLLineSegmentgR(void *p) {
      delete [] ((vector<geoalgo::LineSegment>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLLineSegmentgR(void *p) {
      typedef vector<geoalgo::LineSegment> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::LineSegment>

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLLinegR_Dictionary();
   static void vectorlEgeoalgocLcLLinegR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLLinegR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLLinegR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLLinegR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLLinegR(void *p);
   static void destruct_vectorlEgeoalgocLcLLinegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::Line>*)
   {
      vector<geoalgo::Line> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::Line>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::Line>", -2, "vector", 214,
                  typeid(vector<geoalgo::Line>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLLinegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::Line>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLLinegR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLLinegR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLLinegR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLLinegR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLLinegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::Line> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::Line>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLLinegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::Line>*)0x0)->GetClass();
      vectorlEgeoalgocLcLLinegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLLinegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLLinegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Line> : new vector<geoalgo::Line>;
   }
   static void *newArray_vectorlEgeoalgocLcLLinegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::Line>[nElements] : new vector<geoalgo::Line>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLLinegR(void *p) {
      delete ((vector<geoalgo::Line>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLLinegR(void *p) {
      delete [] ((vector<geoalgo::Line>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLLinegR(void *p) {
      typedef vector<geoalgo::Line> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::Line>

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLHalfLinegR_Dictionary();
   static void vectorlEgeoalgocLcLHalfLinegR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLHalfLinegR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLHalfLinegR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLHalfLinegR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLHalfLinegR(void *p);
   static void destruct_vectorlEgeoalgocLcLHalfLinegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::HalfLine>*)
   {
      vector<geoalgo::HalfLine> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::HalfLine>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::HalfLine>", -2, "vector", 214,
                  typeid(vector<geoalgo::HalfLine>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLHalfLinegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::HalfLine>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLHalfLinegR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLHalfLinegR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLHalfLinegR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLHalfLinegR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLHalfLinegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::HalfLine> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::HalfLine>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLHalfLinegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::HalfLine>*)0x0)->GetClass();
      vectorlEgeoalgocLcLHalfLinegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLHalfLinegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLHalfLinegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::HalfLine> : new vector<geoalgo::HalfLine>;
   }
   static void *newArray_vectorlEgeoalgocLcLHalfLinegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::HalfLine>[nElements] : new vector<geoalgo::HalfLine>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLHalfLinegR(void *p) {
      delete ((vector<geoalgo::HalfLine>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLHalfLinegR(void *p) {
      delete [] ((vector<geoalgo::HalfLine>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLHalfLinegR(void *p) {
      typedef vector<geoalgo::HalfLine> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::HalfLine>

namespace ROOT {
   static TClass *vectorlEgeoalgocLcLDirectedLinegR_Dictionary();
   static void vectorlEgeoalgocLcLDirectedLinegR_TClassManip(TClass*);
   static void *new_vectorlEgeoalgocLcLDirectedLinegR(void *p = 0);
   static void *newArray_vectorlEgeoalgocLcLDirectedLinegR(Long_t size, void *p);
   static void delete_vectorlEgeoalgocLcLDirectedLinegR(void *p);
   static void deleteArray_vectorlEgeoalgocLcLDirectedLinegR(void *p);
   static void destruct_vectorlEgeoalgocLcLDirectedLinegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<geoalgo::DirectedLine>*)
   {
      vector<geoalgo::DirectedLine> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<geoalgo::DirectedLine>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<geoalgo::DirectedLine>", -2, "vector", 214,
                  typeid(vector<geoalgo::DirectedLine>), DefineBehavior(ptr, ptr),
                  &vectorlEgeoalgocLcLDirectedLinegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<geoalgo::DirectedLine>) );
      instance.SetNew(&new_vectorlEgeoalgocLcLDirectedLinegR);
      instance.SetNewArray(&newArray_vectorlEgeoalgocLcLDirectedLinegR);
      instance.SetDelete(&delete_vectorlEgeoalgocLcLDirectedLinegR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeoalgocLcLDirectedLinegR);
      instance.SetDestructor(&destruct_vectorlEgeoalgocLcLDirectedLinegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<geoalgo::DirectedLine> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<geoalgo::DirectedLine>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeoalgocLcLDirectedLinegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<geoalgo::DirectedLine>*)0x0)->GetClass();
      vectorlEgeoalgocLcLDirectedLinegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeoalgocLcLDirectedLinegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeoalgocLcLDirectedLinegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::DirectedLine> : new vector<geoalgo::DirectedLine>;
   }
   static void *newArray_vectorlEgeoalgocLcLDirectedLinegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<geoalgo::DirectedLine>[nElements] : new vector<geoalgo::DirectedLine>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeoalgocLcLDirectedLinegR(void *p) {
      delete ((vector<geoalgo::DirectedLine>*)p);
   }
   static void deleteArray_vectorlEgeoalgocLcLDirectedLinegR(void *p) {
      delete [] ((vector<geoalgo::DirectedLine>*)p);
   }
   static void destruct_vectorlEgeoalgocLcLDirectedLinegR(void *p) {
      typedef vector<geoalgo::DirectedLine> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<geoalgo::DirectedLine>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_GeoAlgo_Impl() {
    static const char* headers[] = {
"GeoVector.h",
"GeoTrajectory.h",
"GeoHalfLine.h",
"GeoLine.h",
"GeoDirectedLine.h",
"GeoLineSegment.h",
0
    };
    static const char* includePaths[] = {
"/home/brooke/WireCell/build_root/include",
"/home/brooke/WireCell/build_root/include",
"/home/brooke/Work/LEE/GeomObj/GeoAlgo/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoVector.h")))  Vector;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoTrajectory.h")))  Trajectory;}
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoHalfLine.h")))  HalfLine;}
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoLine.h")))  Line;}
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoDirectedLine.h")))  DirectedLine;}
namespace geoalgo{class __attribute__((annotate("$clingAutoload$GeoLineSegment.h")))  LineSegment;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "GeoVector.h"
#include "GeoTrajectory.h"
#include "GeoHalfLine.h"
#include "GeoLine.h"
#include "GeoDirectedLine.h"
#include "GeoLineSegment.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"geoalgo::DirectedLine", payloadCode, "@",
"geoalgo::HalfLine", payloadCode, "@",
"geoalgo::Line", payloadCode, "@",
"geoalgo::LineSegment", payloadCode, "@",
"geoalgo::Trajectory", payloadCode, "@",
"geoalgo::Vector", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GeoAlgo",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GeoAlgo_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GeoAlgo_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GeoAlgo() {
  TriggerDictionaryInitialization_GeoAlgo_Impl();
}
