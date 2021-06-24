#ifndef OBJECTS_GLOBAL_H
#define OBJECTS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OBJECTS_LIBRARY)
#  define OBJECTS_EXPORT Q_DECL_EXPORT
#else
#  define OBJECTS_EXPORT Q_DECL_IMPORT
#endif

#endif // OBJECTS_GLOBAL_H
