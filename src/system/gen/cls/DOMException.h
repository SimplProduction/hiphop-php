/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_DOMException_h850df05a__
#define __GENERATED_cls_DOMException_h850df05a__

#include <cls/DOMException.fw.h>
#include <cls/Exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 311 */
FORWARD_DECLARE_CLASS(DOMException);
extern ObjectStaticCallbacks cw_DOMException;
class c_DOMException : public c_Exception {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(DOMException, DOMException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_DOMException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_DOMException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_DOMException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_DOMException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_DOMException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_DOMException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_DOMException 1

  // DECLARE_COMMON_INVOKE
  static const MethodCallInfoTable s_call_info_table[];
  static const int s_call_info_index[];

  public:
  public: void t___construct(Variant v_message, Variant v_code);
  public: c_DOMException *create(CVarRef v_message, CVarRef v_code);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_DOMException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_DOMException_h850df05a__
