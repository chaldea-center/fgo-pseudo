void ClassBoardEffectPlayer___ctor(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardEffectPlayer___ctor_48906144(
        ClassBoardEffectPlayer_o *this,
        System_String_o *playerName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Name_k__BackingField = playerName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)playerName, v5, v6, v7, v8, v9, v10);
}


void ClassBoardEffectPlayer__End(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *endCallback; // x8
  GrandQuestFolderBoardItem_o *p_endCallback; // x19

  p_endCallback = (GrandQuestFolderBoardItem_o *)&this->fields.endCallback;
  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      endCallback->fields.method);
  p_endCallback->klass = 0;
  sub_1C9403C(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_318F8F0 *method)
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
    sub_1C6A188();
    v6 = *(__int64 **)(v7 + 56);
  }
  v8 = *v6;
  v9 = *(unsigned int *)(*v6 + 252);
  data = this->fields.data;
  if ( (*(_BYTE *)(*v6 + 309) & 1) == 0 )
    v8 = sub_1C6A12C(v3);
  v11 = (const void *)sub_1C941E4(data, v8, (char *)v14 - ((v9 + 15) & 0x1FFFFFFF0LL));
  v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v11, v9);
  result.monitor = v13;
  result.klass = v12;
  return result;
}


bool ClassBoardEffectPlayer__GetData_bool_(ClassBoardEffectPlayer_o *this, const MethodInfo_318F800 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_318F800_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_318F878 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C6A188(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (*(&rgctx_data->_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C6A12C(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1C942F0(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_BYTE *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1C9468C(data);
  return ClassBoardEffectPlayer__GetData_int_(v11, v12);
}


int32_t ClassBoardEffectPlayer__GetData_int_(ClassBoardEffectPlayer_o *this, const MethodInfo_318F878 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_318F878_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_318F8F0 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C6A188(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (*(&rgctx_data->_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C6A12C(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1C942F0(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_DWORD *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1C9468C(data);
  return (unsigned int)ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(v11, v12).klass;
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
        const MethodInfo_318FA6C *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  _QWORD *v5; // x23
  _QWORD *monitor; // x21
  size_t v7; // x2
  char *v8; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v9; // x1
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  _QWORD v17[2]; // [xsp+0h] [xbp-10h] BYREF

  klass = obj.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17[0] = obj.klass;
  v5 = (_QWORD *)*((_QWORD *)obj.monitor + 7);
  if ( !v5 )
  {
    monitor = obj.monitor;
    sub_1C6A188();
    v5 = (_QWORD *)monitor[7];
  }
  v7 = *(unsigned int *)(*v5 + 252LL);
  v8 = (char *)v17 - ((v7 + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(*v5 + 40LL) >= 0 )
    v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v9 = klass;
  memcpy((char *)v17 - ((v7 + 15) & 0x1FFFFFFF0LL), v9, v7);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(*v5, v8);
  this->fields.data = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void ClassBoardEffectPlayer__SetData_bool_(ClassBoardEffectPlayer_o *this, bool obj, const MethodInfo_318F9B0 *method)
{
  const MethodInfo_318F9B0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6A188();
    rgctx_data = method->rgctx_data;
  }
  v14[0] = obj;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, v14);
  this->fields.data = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void ClassBoardEffectPlayer__SetData_int_(
        ClassBoardEffectPlayer_o *this,
        int32_t obj,
        const MethodInfo_318FA10 *method)
{
  const MethodInfo_318FA10_RGCTXs *rgctx_data; // x8
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6A188();
    rgctx_data = method->rgctx_data;
  }
  v14 = obj;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, &v14);
  this->fields.data = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void ClassBoardEffectPlayer__SetEndEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.endCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.playCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.playCallback,
    (int32_t)callback,
    (int32_t)method,
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