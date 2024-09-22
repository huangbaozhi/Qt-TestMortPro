#ifndef DLL_GLOBAL_H
#define DLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_LIBRARY)
#  define DLL_EXPORT Q_DECL_EXPORT
#else
#  define DLL_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL_GLOBAL_H
