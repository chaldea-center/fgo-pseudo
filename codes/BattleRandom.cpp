void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4A724DD & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_4A724DD = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A724DC & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_4A724DC = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BE1EEC(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1B9026C(v6, v7);
  return *(_DWORD *)(v5 + 52);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A724DB & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_4A724DB = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BE1EEC(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1B9026C(v6, v7);
  return *(_DWORD *)(v5 + 48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A724DA & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_4A724DA = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BE1EEC(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_1B9026C(v9, v10);
    *(_DWORD *)(v8 + 48) = logic;
    *(_DWORD *)(v8 + 52) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w20
  int v9; // w20

  if ( (byte_4A724D6 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_4A724D6 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BE1EEC(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_20;
    if ( *(int *)(v5 + 48) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 32);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v8 >= *(_DWORD *)(v5 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1B9026C(v6, v7);
    }
LABEL_15:
    if ( *(int *)(v5 + 52) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 40);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v9 >= *(_DWORD *)(v5 + 52) )
          return;
      }
      goto LABEL_20;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A724D8 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4A724D8 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_1B9026C(v7, v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A724D7 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4A724D7 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_1B9026C(v7, v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A724D9 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_4A724D9 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BE1EEC(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_1B9026C(v9, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2E7FC0C *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2E7FC0C_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  Il2CppClass *v8; // x0
  __int64 v9; // x1
  Il2CppClass *v10; // x27
  Il2CppClass *_0_T; // x26
  __int64 v12; // x0
  __int64 v13; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v14; // x25
  __int64 v15; // x8
  char *v16; // x23
  __int64 Next; // x0
  __int64 v18; // x1
  unsigned int max_length; // w28
  char *v20; // x22
  __int64 v21; // x19
  __int64 thread_static_fields_size; // x21
  void *v23; // x23
  unsigned int v24; // w19
  unsigned __int64 v26; // [xsp+0h] [xbp-30h] BYREF
  char *v27; // [xsp+8h] [xbp-28h]
  char *v28; // [xsp+10h] [xbp-20h]
  __int64 v29; // [xsp+18h] [xbp-18h]
  void *v30; // [xsp+20h] [xbp-10h]
  __int64 v31; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v31 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BE1F48(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v28 = (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v28;
  v30 = v28;
  v8 = (Il2CppClass *)memset(v28, 0, native_size);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0LL);
  v10 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1BE1EEC(method->rgctx_data->_0_T__);
    _0_T = v8;
  }
  v26 = StatusReg;
  if ( !v10 )
LABEL_23:
    sub_1B9026C(v8, v9);
  v12 = sub_1B9014C(v10, _0_T);
  if ( !v12 )
    sub_1B9052C(v10);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v12;
  if ( (int)v13 >= 2 )
  {
    v15 = (unsigned int)*(_QWORD *)(v12 + 24) + 1LL;
    v27 = (char *)&v26 - ((native_size + 15) & 0x1FFFFFFF0LL);
    do
    {
      v29 = v15;
      v16 = v7;
      Next = BattleRandom__getNext(v13, 0LL);
      max_length = v14->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v20 = v28;
      v21 = (int)Next;
      thread_static_fields_size = v14->obj.klass->_2.thread_static_fields_size;
      LODWORD(v13) = v13 - 1;
      memcpy(v28, (char *)v14->m_Items + thread_static_fields_size * (int)Next, native_size);
      Next = (__int64)memcpy(v30, v20, native_size);
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_22;
      v7 = v16;
      Next = (__int64)memcpy(v16, (char *)v14->m_Items + thread_static_fields_size * (unsigned int)v13, native_size);
      if ( (unsigned int)v21 >= v14->max_length )
        goto LABEL_22;
      memcpy((char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v16, native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1BE1EEC(Next);
      v23 = v27;
      if ( (unsigned int)v21 >= v14->max_length )
        goto LABEL_22;
      sub_1B8FFB8(Next, (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v7);
      Next = (__int64)memcpy(v23, v30, native_size);
      v24 = v14->max_length;
      if ( (unsigned int)v13 >= v24 )
        goto LABEL_22;
      memcpy(
        (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v13,
        v23,
        native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1BE1EEC(Next);
        v24 = v14->max_length;
      }
      if ( (unsigned int)v13 >= v24 )
LABEL_22:
        sub_1B90274(Next, v18);
      sub_1B8FFB8(
        Next,
        (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v13,
        v23);
      v15 = v29 - 1;
    }
    while ( v29 - 1 > 2 );
  }
  return v14;
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_2E7FA18 *method)
{
  System_Array_o *v3; // x20
  System_Int32_array *v4; // x21
  _BYTE *_0_T; // x20
  __int64 v6; // x0
  __int64 v7; // x20
  System_Int32_array *v8; // x19
  __int64 v9; // x21
  __int64 Next; // x0
  __int64 v11; // x1
  unsigned int max_length; // w8
  char *v13; // x8
  char *v14; // x9
  int v15; // t1
  System_Object_array *v17; // x0
  const MethodInfo_2E7FB00 *v18; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1BE1F48(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0LL);
  v4 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1BE1EEC(method->rgctx_data->_0_T__);
    _0_T = list;
  }
  if ( !v4 )
LABEL_15:
    sub_1B9026C(list, method);
  v6 = sub_1B9014C(v4, _0_T);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    v8 = (System_Int32_array *)v6;
    if ( (int)v7 >= 2 )
    {
      v9 = (unsigned int)*(_QWORD *)(v6 + 24) + 1LL;
      do
      {
        Next = BattleRandom__getNext(v7, 0LL);
        max_length = v8->max_length;
        if ( (unsigned int)Next >= max_length || (LODWORD(v7) = v7 - 1, (unsigned int)v7 >= max_length) )
          sub_1B90274(Next, v11);
        v13 = (char *)v8 + 4 * (int)Next;
        v14 = (char *)v8 + 4 * (unsigned int)v7;
        v15 = *((_DWORD *)v13 + 8);
        --v9;
        *((_DWORD *)v13 + 8) = *((_DWORD *)v14 + 8);
        *((_DWORD *)v14 + 8) = v15;
      }
      while ( v9 > 2 );
    }
    return v8;
  }
  else
  {
    sub_1B9052C(v4);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_2E7FB00 *method)
{
  System_Array_o *v3; // x20
  System_Object_array *v4; // x21
  _BYTE *_0_T; // x20
  __int64 v6; // x0
  __int64 v7; // x20
  System_Object_array *v8; // x19
  __int64 v9; // x23
  ServantStatusBattleListViewItem_o *Next; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  unsigned int max_length; // w8
  Il2CppClass **v15; // x0
  ServantStatusBattleListViewItem_c *v16; // x21
  ServantStatusBattleListViewItem_c *v17; // t1
  Il2CppClass **v18; // x22
  ServantStatusBattleListViewItem_o *v19; // x22
  ServantStatusBattleListViewItem_c *v20; // t1
  int32_t v21; // w2
  int32_t v22; // w3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v24; // x0
  const MethodInfo_2E7FC0C *v25; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1BE1F48(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0LL);
  v4 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1BE1EEC(method->rgctx_data->_0_T__);
    _0_T = list;
  }
  if ( !v4 )
LABEL_16:
    sub_1B9026C(list, method);
  v6 = sub_1B9014C(v4, _0_T);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    v8 = (System_Object_array *)v6;
    if ( (int)v7 >= 2 )
    {
      v9 = (unsigned int)*(_QWORD *)(v6 + 24) + 1LL;
      do
      {
        Next = (ServantStatusBattleListViewItem_o *)BattleRandom__getNext(v7, 0LL);
        max_length = v8->max_length;
        if ( (unsigned int)Next >= max_length )
          goto LABEL_15;
        v15 = &v8->obj.klass + (int)Next;
        v17 = (ServantStatusBattleListViewItem_c *)v15[4];
        Next = (ServantStatusBattleListViewItem_o *)(v15 + 4);
        v16 = v17;
        LODWORD(v7) = v7 - 1;
        if ( (unsigned int)v7 >= max_length
          || (v18 = &v8->obj.klass + (unsigned int)v7,
              v20 = (ServantStatusBattleListViewItem_c *)v18[4],
              v19 = (ServantStatusBattleListViewItem_o *)(v18 + 4),
              Next->klass = v20,
              sub_1B8FFB4(Next, (int32_t)v20, v12, v13),
              (unsigned int)v7 >= v8->max_length) )
        {
LABEL_15:
          sub_1B90274(Next, v11);
        }
        v19->klass = v16;
        sub_1B8FFB4(v19, (int32_t)v16, v21, v22);
        --v9;
      }
      while ( v9 > 2 );
    }
    return v8;
  }
  else
  {
    sub_1B9052C(v4);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v24, v25);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x20
  System_Random_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Random_o *v13; // x21
  ServantStatusBattleListViewItem_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A724D5 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&System_Random_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4A724D5 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v8 = (System_Random_o *)sub_1B9025C(System_Random_TypeInfo);
    System_Random___ctor_62668000(v8, seed, 0LL);
    if ( !v7 )
      sub_1B9026C(v9, v10);
    *(_QWORD *)(v7 + 32) = v8;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v8, v11, v12);
    v13 = (System_Random_o *)sub_1B9025C(System_Random_TypeInfo);
    System_Random___ctor_62668000(v13, seed, 0LL);
    *(_QWORD *)(v7 + 40) = v13;
    v14 = (ServantStatusBattleListViewItem_o *)(v7 + 40);
    sub_1B8FFB4(v14, (int32_t)v13, v15, v16);
    v14->monitor = 0LL;
  }
}