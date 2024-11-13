void __fastcall ClassBoardEffectPlayer___ctor(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectPlayer___ctor_45241472(
        ClassBoardEffectPlayer_o *this,
        System_String_o *playerName,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Name_k__BackingField = playerName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)playerName, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardEffectPlayer__End(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *endCallback; // x8
  PartyOrganizationUtility_o *p_endCallback; // x19

  p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      *(_QWORD *)&endCallback->fields.extra_arg);
  p_endCallback->klass = 0LL;
  sub_1BCA784(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardEffectPlayer__GetData___Il2CppFullySharedGenericType_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_2F06850 *method)
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
    sub_1C1C718(v2);
    v6 = *(__int64 **)(v7 + 56);
  }
  v8 = *v6;
  v9 = *(unsigned int *)(*v6 + 252);
  data = this->fields.data;
  if ( (*(_BYTE *)(*v6 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v11 = (const void *)sub_1BCA92C(data, v8, (char *)v14 - ((v9 + 15) & 0x1FFFFFFF0LL));
  v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy((void *)method, v11, v9);
  result.monitor = v13;
  result.klass = v12;
  return result;
}


bool __fastcall ClassBoardEffectPlayer__GetData_bool_(ClassBoardEffectPlayer_o *this, const MethodInfo_2F06760 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F06760_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_2F067D8 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C1C6BC(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1BCAA3C(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_BYTE *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1BCACFC(data);
  return ClassBoardEffectPlayer__GetData_int_(v11, v12);
}


int32_t __fastcall ClassBoardEffectPlayer__GetData_int_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_2F067D8 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F067D8_RGCTXs *rgctx_data; // x8
  ClassBoardEffectPlayer_o *v6; // x19
  ClassBoardEffectPlayer_o *_0_T; // x1
  Il2CppObject *data; // x19
  ClassBoardEffectPlayer_o *v11; // x0
  const MethodInfo_2F06850 *v12; // x1

  rgctx_data = method->rgctx_data;
  v6 = this;
  if ( !rgctx_data )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  _0_T = (ClassBoardEffectPlayer_o *)rgctx_data->_0_T;
  data = v6->fields.data;
  if ( (BYTE5(rgctx_data->_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    this = (ClassBoardEffectPlayer_o *)sub_1C1C6BC(v4);
    _0_T = this;
  }
  if ( !data )
    sub_1BCAA3C(this, _0_T);
  if ( data->klass->_1.element_class == (Il2CppClass *)_0_T[1].fields._Name_k__BackingField )
    return *(_DWORD *)j_il2cpp_object_unbox_0(data, _0_T, v2, v3);
  sub_1BCACFC(data);
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
        const MethodInfo_2F069CC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  _QWORD *v5; // x23
  _QWORD *monitor; // x21
  __int64 v7; // x2
  char *v8; // x21
  __int64 *v9; // x1
  Il2CppObject *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17[2]; // [xsp+0h] [xbp-10h] BYREF

  klass = obj.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v17[0] = (__int64)obj.klass;
  v5 = (_QWORD *)*((_QWORD *)obj.monitor + 7);
  if ( !v5 )
  {
    monitor = obj.monitor;
    sub_1C1C718(obj.monitor);
    v5 = (_QWORD *)monitor[7];
  }
  v7 = *(unsigned int *)(*v5 + 252LL);
  v8 = (char *)v17 - ((v7 + 15) & 0x1FFFFFFF0LL);
  if ( *(int *)(*v5 + 40LL) >= 0 )
    v9 = v17;
  else
    v9 = (__int64 *)klass;
  memcpy((char *)v17 - ((v7 + 15) & 0x1FFFFFFF0LL), v9, v7);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(*v5, v8);
  this->fields.data = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall ClassBoardEffectPlayer__SetData_bool_(
        ClassBoardEffectPlayer_o *this,
        bool obj,
        const MethodInfo_2F06910 *method)
{
  const MethodInfo_2F06910_RGCTXs *rgctx_data; // x8
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  char v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  v14[0] = obj;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, v14);
  this->fields.data = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall ClassBoardEffectPlayer__SetData_int_(
        ClassBoardEffectPlayer_o *this,
        int32_t obj,
        const MethodInfo_2F06970 *method)
{
  const MethodInfo_2F06970_RGCTXs *rgctx_data; // x8
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  v14 = obj;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(rgctx_data->_0_T, &v14);
  this->fields.data = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall ClassBoardEffectPlayer__SetEndEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.endCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardEffectPlayer__SetPlayEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.playCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall ClassBoardEffectPlayer__get_Name(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}