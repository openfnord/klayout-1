
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
*  @file gsiDeclQFileIconProvider.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFileIconProvider

// QIcon QFileIconProvider::icon(QAbstractFileIconProvider::IconType type)


static void _init_f_icon_c3884 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c3884 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider *)cls)->icon (qt_gsi::QtToCppAdaptor<QAbstractFileIconProvider::IconType>(arg1).cref()));
}


// QIcon QFileIconProvider::icon(const QFileInfo &info)


static void _init_f_icon_c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider *)cls)->icon (arg1));
}


namespace gsi
{

static gsi::Methods methods_QFileIconProvider () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QFileIconProvider::icon(QAbstractFileIconProvider::IconType type)\nThis is a reimplementation of QAbstractFileIconProvider::icon", true, &_init_f_icon_c3884, &_call_f_icon_c3884);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QFileIconProvider::icon(const QFileInfo &info)\nThis is a reimplementation of QAbstractFileIconProvider::icon", true, &_init_f_icon_c2174, &_call_f_icon_c2174);
  return methods;
}

gsi::Class<QAbstractFileIconProvider> &qtdecl_QAbstractFileIconProvider ();

gsi::Class<QFileIconProvider> decl_QFileIconProvider (qtdecl_QAbstractFileIconProvider (), "QtWidgets", "QFileIconProvider_Native",
  methods_QFileIconProvider (),
  "@hide\n@alias QFileIconProvider");

GSI_QTWIDGETS_PUBLIC gsi::Class<QFileIconProvider> &qtdecl_QFileIconProvider () { return decl_QFileIconProvider; }

}


class QFileIconProvider_Adaptor : public QFileIconProvider, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFileIconProvider_Adaptor();

  //  [adaptor ctor] QFileIconProvider::QFileIconProvider()
  QFileIconProvider_Adaptor() : QFileIconProvider()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QIcon QFileIconProvider::icon(QAbstractFileIconProvider::IconType type)
  QIcon cbs_icon_c3884_0(const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & type) const
  {
    return QFileIconProvider::icon(qt_gsi::QtToCppAdaptor<QAbstractFileIconProvider::IconType>(type).cref());
  }

  virtual QIcon icon(QAbstractFileIconProvider::IconType type) const
  {
    if (cb_icon_c3884_0.can_issue()) {
      return cb_icon_c3884_0.issue<QFileIconProvider_Adaptor, QIcon, const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type &>(&QFileIconProvider_Adaptor::cbs_icon_c3884_0, qt_gsi::CppToQtAdaptor<QAbstractFileIconProvider::IconType>(type));
    } else {
      return QFileIconProvider::icon(type);
    }
  }

  //  [adaptor impl] QIcon QFileIconProvider::icon(const QFileInfo &info)
  QIcon cbs_icon_c2174_0(const QFileInfo &info) const
  {
    return QFileIconProvider::icon(info);
  }

  virtual QIcon icon(const QFileInfo &info) const
  {
    if (cb_icon_c2174_0.can_issue()) {
      return cb_icon_c2174_0.issue<QFileIconProvider_Adaptor, QIcon, const QFileInfo &>(&QFileIconProvider_Adaptor::cbs_icon_c2174_0, info);
    } else {
      return QFileIconProvider::icon(info);
    }
  }

  //  [adaptor impl] QFlags<QAbstractFileIconProvider::Option> QFileIconProvider::options()
  QFlags<QAbstractFileIconProvider::Option> cbs_options_c0_0() const
  {
    return QFileIconProvider::options();
  }

  virtual QFlags<QAbstractFileIconProvider::Option> options() const
  {
    if (cb_options_c0_0.can_issue()) {
      return cb_options_c0_0.issue<QFileIconProvider_Adaptor, QFlags<QAbstractFileIconProvider::Option> >(&QFileIconProvider_Adaptor::cbs_options_c0_0);
    } else {
      return QFileIconProvider::options();
    }
  }

  //  [adaptor impl] void QFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)
  void cbs_setOptions_4402_0(QFlags<QAbstractFileIconProvider::Option> arg1)
  {
    QFileIconProvider::setOptions(arg1);
  }

  virtual void setOptions(QFlags<QAbstractFileIconProvider::Option> arg1)
  {
    if (cb_setOptions_4402_0.can_issue()) {
      cb_setOptions_4402_0.issue<QFileIconProvider_Adaptor, QFlags<QAbstractFileIconProvider::Option> >(&QFileIconProvider_Adaptor::cbs_setOptions_4402_0, arg1);
    } else {
      QFileIconProvider::setOptions(arg1);
    }
  }

  //  [adaptor impl] QString QFileIconProvider::type(const QFileInfo &)
  QString cbs_type_c2174_0(const QFileInfo &arg1) const
  {
    return QFileIconProvider::type(arg1);
  }

  virtual QString type(const QFileInfo &arg1) const
  {
    if (cb_type_c2174_0.can_issue()) {
      return cb_type_c2174_0.issue<QFileIconProvider_Adaptor, QString, const QFileInfo &>(&QFileIconProvider_Adaptor::cbs_type_c2174_0, arg1);
    } else {
      return QFileIconProvider::type(arg1);
    }
  }

  gsi::Callback cb_icon_c3884_0;
  gsi::Callback cb_icon_c2174_0;
  gsi::Callback cb_options_c0_0;
  gsi::Callback cb_setOptions_4402_0;
  gsi::Callback cb_type_c2174_0;
};

QFileIconProvider_Adaptor::~QFileIconProvider_Adaptor() { }

//  Constructor QFileIconProvider::QFileIconProvider() (adaptor class)

static void _init_ctor_QFileIconProvider_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFileIconProvider_Adaptor> ();
}

static void _call_ctor_QFileIconProvider_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFileIconProvider_Adaptor *> (new QFileIconProvider_Adaptor ());
}


// QIcon QFileIconProvider::icon(QAbstractFileIconProvider::IconType type)

static void _init_cbs_icon_c3884_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c3884_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider_Adaptor *)cls)->cbs_icon_c3884_0 (arg1));
}

static void _set_callback_cbs_icon_c3884_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_icon_c3884_0 = cb;
}


// QIcon QFileIconProvider::icon(const QFileInfo &info)

static void _init_cbs_icon_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider_Adaptor *)cls)->cbs_icon_c2174_0 (arg1));
}

static void _set_callback_cbs_icon_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_icon_c2174_0 = cb;
}


// QFlags<QAbstractFileIconProvider::Option> QFileIconProvider::options()

static void _init_cbs_options_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QAbstractFileIconProvider::Option> > ();
}

static void _call_cbs_options_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QAbstractFileIconProvider::Option> > ((QFlags<QAbstractFileIconProvider::Option>)((QFileIconProvider_Adaptor *)cls)->cbs_options_c0_0 ());
}

static void _set_callback_cbs_options_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_options_c0_0 = cb;
}


// void QFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)

static void _init_cbs_setOptions_4402_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QFlags<QAbstractFileIconProvider::Option> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setOptions_4402_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QAbstractFileIconProvider::Option> arg1 = args.read<QFlags<QAbstractFileIconProvider::Option> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileIconProvider_Adaptor *)cls)->cbs_setOptions_4402_0 (arg1);
}

static void _set_callback_cbs_setOptions_4402_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_setOptions_4402_0 = cb;
}


// QString QFileIconProvider::type(const QFileInfo &)

static void _init_cbs_type_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_type_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QString > ((QString)((QFileIconProvider_Adaptor *)cls)->cbs_type_c2174_0 (arg1));
}

static void _set_callback_cbs_type_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_type_c2174_0 = cb;
}


namespace gsi
{

gsi::Class<QFileIconProvider> &qtdecl_QFileIconProvider ();

static gsi::Methods methods_QFileIconProvider_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileIconProvider::QFileIconProvider()\nThis method creates an object of class QFileIconProvider.", &_init_ctor_QFileIconProvider_Adaptor_0, &_call_ctor_QFileIconProvider_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QFileIconProvider::icon(QAbstractFileIconProvider::IconType type)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c3884_0, &_call_cbs_icon_c3884_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c3884_0, &_call_cbs_icon_c3884_0, &_set_callback_cbs_icon_c3884_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QFileIconProvider::icon(const QFileInfo &info)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0, &_set_callback_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("options", "@brief Virtual method QFlags<QAbstractFileIconProvider::Option> QFileIconProvider::options()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_options_c0_0, &_call_cbs_options_c0_0);
  methods += new qt_gsi::GenericMethod ("options", "@hide", true, &_init_cbs_options_c0_0, &_call_cbs_options_c0_0, &_set_callback_cbs_options_c0_0);
  methods += new qt_gsi::GenericMethod ("setOptions", "@brief Virtual method void QFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setOptions_4402_0, &_call_cbs_setOptions_4402_0);
  methods += new qt_gsi::GenericMethod ("setOptions", "@hide", false, &_init_cbs_setOptions_4402_0, &_call_cbs_setOptions_4402_0, &_set_callback_cbs_setOptions_4402_0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Virtual method QString QFileIconProvider::type(const QFileInfo &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0);
  methods += new qt_gsi::GenericMethod ("type", "@hide", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0, &_set_callback_cbs_type_c2174_0);
  return methods;
}

gsi::Class<QFileIconProvider_Adaptor> decl_QFileIconProvider_Adaptor (qtdecl_QFileIconProvider (), "QtWidgets", "QFileIconProvider",
  methods_QFileIconProvider_Adaptor (),
  "@qt\n@brief Binding of QFileIconProvider");

}
