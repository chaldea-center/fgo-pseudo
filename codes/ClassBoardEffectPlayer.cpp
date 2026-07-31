void ClassBoardEffectPlayer___ctor(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardEffectPlayer___ctor_55215796(
        ClassBoardEffectPlayer_o *this,
        System_String_o *playerName,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Name_k__BackingField = playerName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)playerName, v5, v6, v7, v8, v9, v10);
}


void ClassBoardEffectPlayer__End(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *endCallback; // x8
  MissionNaviTransitionBoardItem_o *p_endCallback; // x19

  p_endCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback;
  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      endCallback->fields.method);
  p_endCallback->klass = 0;
  sub_21FFBF4(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_37EA2A4 *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 *v6; // x8
  __int64 v7; // x20
  __int64 v8; // x1
  size_t v9; // x20
  Il2CppObject *data; // x21
  const void *v11; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v12; // x0
  void *v13; // x1
  _QWORD v14[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v14[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(__int64 **)(v2 + 56);
  if ( !v6 )
  {
    v7 = v2;
    sub_2237B54();
    v6 = *(__int64 **)(v7 + 56);
  }
  v8 = *v6;
  v9 = *(unsigned int *)(*v6 + 252);
  data = this->fields.data;
  if ( (*(_WORD *)(*v6 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v3);
  v11 = (const void *)sub_21FFDB4(data, v8, (char *)v14 - ((v9 + 15) & 0x1FFFFFFF0LL));
  v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v11, v9);
  result.monitor = v13;
  result.klass = v12;
  return result;
}


bool ClassBoardEffectPlayer__GetData_bool_(ClassBoardEffectPlayer_o *this, const MethodInfo_37EA1AC *method)
{
  __int64 v2; // x2
  long double v3; // q0
  const MethodInfo_37EA1AC_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v5; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v10; // x0
  const MethodInfo_37EA228 *v11; // x1

  rgctx_data = method->rgctx_data;
  v5 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_2237B54(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v5->fields.data;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_2237AF8(v3);
    _0_T = this;
  }
  if ( !data )
    sub_21FFECC(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_BYTE *)j_il2cpp_object_unbox_0(data, _0_T, v2);
  sub_220024C(data, _0_T, v2);
  return ClassBoardEffectPlayer__GetData_int_(v10, v11);
}


int32_t ClassBoardEffectPlayer__GetData_int_(ClassBoardEffectPlayer_o *this, const MethodInfo_37EA228 *method)
{
  __int64 v2; // x2
  long double v3; // q0
  const MethodInfo_37EA228_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v5; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v10; // x0
  const MethodInfo_37EA2A4 *v11; // x1

  rgctx_data = method->rgctx_data;
  v5 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_2237B54(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v5->fields.data;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_2237AF8(v3);
    _0_T = this;
  }
  if ( !data )
    sub_21FFECC(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_DWORD *)j_il2cpp_object_unbox_0(data, _0_T, v2);
  sub_220024C(data, _0_T, v2);
  return (unsigned int)ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(v10, v11).klass;
}


void ClassBoardEffectPlayer__Play(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  struct System_Action_o *playCallback; // x8

  playCallback = this->fields.playCallback;
  if ( playCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))playCallback->fields.invoke_impl)(
      playCallback->fields.method_code,
      playCallback->fields.method);
}


void ClassBoardEffectPlayer__SetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o obj,
        const MethodInfo_37EA424 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 *v5; // x8
  _QWORD *monitor; // x21
  __int64 v7; // x21
  size_t v8; // x2
  char *v9; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF

  klass = obj.klass;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (__int64 *)*((_QWORD *)obj.monitor + 7);
  v18[0] = obj.klass;
  if ( !v5 )
  {
    monitor = obj.monitor;
    sub_2237B54();
    v5 = (__int64 *)monitor[7];
  }
  v7 = *v5;
  v8 = *(unsigned int *)(*v5 + 252);
  v9 = (char *)v18 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(*v5 + 40) >= 0 )
    v10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v18;
  else
    v10 = klass;
  memcpy((char *)v18 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(v7, v9);
  this->fields.data = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


void ClassBoardEffectPlayer__SetData_bool_(ClassBoardEffectPlayer_o *this, bool obj, const MethodInfo_37EA368 *method)
{
  const MethodInfo_37EA368_RGCTXs *rgctx_data; // x8
  Il2CppClass *_0_T; // x0
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool v15[4]; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_T = rgctx_data->_0_T;
  v15[0] = obj;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(_0_T, v15);
  this->fields.data = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void ClassBoardEffectPlayer__SetData_int_(
        ClassBoardEffectPlayer_o *this,
        int32_t obj,
        const MethodInfo_37EA3C8 *method)
{
  const MethodInfo_37EA3C8_RGCTXs *rgctx_data; // x8
  Il2CppClass *_0_T; // x0
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_T = rgctx_data->_0_T;
  v15 = obj;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(_0_T, &v15);
  this->fields.data = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void ClassBoardEffectPlayer__SetEndEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.endCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardEffectPlayer__SetPlayEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.playCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *ClassBoardEffectPlayer__get_Name(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}