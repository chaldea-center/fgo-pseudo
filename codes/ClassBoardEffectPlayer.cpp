void __fastcall ClassBoardEffectPlayer___ctor(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectPlayer___ctor_46667492(
        ClassBoardEffectPlayer_o *this,
        System_String_o *playerName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Name_k__BackingField = playerName;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)playerName, v5, v6);
}


void __fastcall ClassBoardEffectPlayer__End(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *endCallback; // x8
  CGThumbnailListItem_o *p_endCallback; // x19

  p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      *(_QWORD *)&endCallback->fields.extra_arg);
  p_endCallback->klass = 0LL;
  sub_1BDB81C(p_endCallback, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_3027248 *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 *v6; // x8
  __int64 v7; // x20
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *data; // x21
  const void *v11; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v12; // x0 OVERLAPPED
  void *v13; // x1
  _QWORD v14[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v14[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v6 = *(__int64 **)(v2 + 56);
  if ( !v6 )
  {
    v7 = v2;
    sub_1C2BF64();
    v6 = *(__int64 **)(v7 + 56);
  }
  v8 = *v6;
  v9 = *(unsigned int *)(*v6 + 252);
  data = this->fields.data;
  if ( (*(_BYTE *)(*v6 + 309) & 1) == 0 )
    v8 = sub_1C2BF08(v3);
  v11 = (const void *)sub_1BDB9C4(data, v8, (char *)v14 - ((v9 + 15) & 0x1FFFFFFF0LL));
  v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v11, v9);
  result.monitor = v13;
  result.klass = v12;
  return result;
}


bool __fastcall ClassBoardEffectPlayer__GetData_bool_(ClassBoardEffectPlayer_o *this, const MethodInfo_3027158 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_3027158_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_30271D0 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C2BF64(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C2BF08(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1BDBAD4(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_BYTE *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1BDBD94(data);
  return ClassBoardEffectPlayer__GetData_int_(v11, v12);
}


int32_t __fastcall ClassBoardEffectPlayer__GetData_int_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_30271D0 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_30271D0_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_3027248 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C2BF64(method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C2BF08(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1BDBAD4(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_DWORD *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1BDBD94(data);
  return (unsigned int)ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(v11, v12).klass;
}


void __fastcall ClassBoardEffectPlayer__Play(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  struct System_Action_o *playCallback; // x8

  playCallback = this->fields.playCallback;
  if ( playCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playCallback->fields.m_target)(
      playCallback->fields.original_method_info,
      *(_QWORD *)&playCallback->fields.extra_arg);
}


void __fastcall ClassBoardEffectPlayer__SetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o obj,
        const MethodInfo_30273C4 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  _QWORD *v5; // x23
  _QWORD *monitor; // x21
  __int64 v7; // x2
  char *v8; // x21
  __int64 *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16[2]; // [xsp+0h] [xbp-10h] BYREF

  klass = obj.klass;
  v16[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v16[0] = (__int64)obj.klass;
  v5 = (_QWORD *)*((_QWORD *)obj.monitor + 7);
  if ( !v5 )
  {
    monitor = obj.monitor;
    sub_1C2BF64();
    v5 = (_QWORD *)monitor[7];
  }
  v7 = *(unsigned int *)(*v5 + 252LL);
  v8 = (char *)v16 - ((v7 + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(*v5 + 40LL) >= 0 )
    v9 = v16;
  else
    v9 = (__int64 *)klass;
  memcpy((char *)v16 - ((v7 + 15) & 0x1FFFFFFF0LL), v9, v7);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(*v5, v8, v10, v11, v12);
  this->fields.data = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.data, (int32_t)v13, v14, v15);
}


void __fastcall ClassBoardEffectPlayer__SetData_bool_(
        ClassBoardEffectPlayer_o *this,
        bool obj,
        const MethodInfo_3027308 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  const MethodInfo_3027308_RGCTXs *rgctx_data; // x8
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  char v12[4]; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  v12[0] = obj;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, v12, method, v3, v4);
  this->fields.data = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.data, (int32_t)v9, v10, v11);
}


void __fastcall ClassBoardEffectPlayer__SetData_int_(
        ClassBoardEffectPlayer_o *this,
        int32_t obj,
        const MethodInfo_3027368 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  const MethodInfo_3027368_RGCTXs *rgctx_data; // x8
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  v12 = obj;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, &v12, method, v3, v4);
  this->fields.data = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.data, (int32_t)v9, v10, v11);
}


void __fastcall ClassBoardEffectPlayer__SetEndEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.endCallback = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall ClassBoardEffectPlayer__SetPlayEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.playCallback = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.playCallback, (int32_t)callback, (int32_t)method, v3);
}


System_String_o *__fastcall ClassBoardEffectPlayer__get_Name(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}