/**
 *  Common header for Qt binding definition library
 *
 *  DO NOT EDIT THIS FILE. 
 *  This file has been created automatically
 */

#include "tlDefs.h"

#define FORCE_LINK_GSI_QTGUI void force_link_gsiQtGui_f () { extern int force_link_gsiQtGui; force_link_gsiQtGui = 0; }

#if !defined(HDR_gsiQtGuiCommon_h)
# define HDR_gsiQtGuiCommon_h

# ifdef MAKE_GSI_QTGUI_LIBRARY
#   define GSI_QTGUI_PUBLIC           DEF_INSIDE_PUBLIC
#   define GSI_QTGUI_PUBLIC_TEMPLATE  DEF_INSIDE_PUBLIC_TEMPLATE
#   define GSI_QTGUI_LOCAL            DEF_INSIDE_LOCAL
# else
#   define GSI_QTGUI_PUBLIC           DEF_OUTSIDE_PUBLIC
#   define GSI_QTGUI_PUBLIC_TEMPLATE  DEF_OUTSIDE_PUBLIC_TEMPLATE
#   define GSI_QTGUI_LOCAL            DEF_OUTSIDE_LOCAL
# endif

#endif