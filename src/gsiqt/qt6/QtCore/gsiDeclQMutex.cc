
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQMutex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMutex>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMutex

//  Constructor QMutex::QMutex()


static void _init_ctor_QMutex_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMutex> ();
}

static void _call_ctor_QMutex_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMutex *> (new QMutex ());
}


// bool QMutex::tryLock()


static void _init_f_tryLock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_tryLock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMutex *)cls)->tryLock ());
}


// bool QMutex::tryLock(int timeout)


static void _init_f_tryLock_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryLock_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QMutex *)cls)->tryLock (arg1));
}


// bool QMutex::try_lock()


static void _init_f_try_lock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_try_lock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMutex *)cls)->try_lock ());
}



namespace gsi
{

static gsi::Methods methods_QMutex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMutex::QMutex()\nThis method creates an object of class QMutex.", &_init_ctor_QMutex_0, &_call_ctor_QMutex_0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QMutex::tryLock()\n", false, &_init_f_tryLock_0, &_call_f_tryLock_0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QMutex::tryLock(int timeout)\n", false, &_init_f_tryLock_767, &_call_f_tryLock_767);
  methods += new qt_gsi::GenericMethod ("try_lock", "@brief Method bool QMutex::try_lock()\n", false, &_init_f_try_lock_0, &_call_f_try_lock_0);
  return methods;
}

gsi::Class<QBasicMutex> &qtdecl_QBasicMutex ();

gsi::Class<QMutex> decl_QMutex (qtdecl_QBasicMutex (), "QtCore", "QMutex",
  methods_QMutex (),
  "@qt\n@brief Binding of QMutex");


GSI_QTCORE_PUBLIC gsi::Class<QMutex> &qtdecl_QMutex () { return decl_QMutex; }

}
