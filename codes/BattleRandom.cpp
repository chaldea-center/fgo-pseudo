void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB16 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_49FEB16 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  _BOOL8 v6; // x0

  if ( (byte_49FEB15 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_49FEB15 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1B64324(v6);
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

  if ( (byte_49FEB14 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_49FEB14 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1B64324(v6);
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

  if ( (byte_49FEB13 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_49FEB13 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_1B64324(v9);
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
  int v7; // w20
  int v8; // w20

  if ( (byte_49FEB0F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_49FEB0F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
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
      v7 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 32);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v7 >= *(_DWORD *)(v5 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1B64324(v6);
    }
LABEL_15:
    if ( *(int *)(v5 + 52) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 40);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v8 >= *(_DWORD *)(v5 + 52) )
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

  if ( (byte_49FEB11 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_49FEB11 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_1B64324(v7);
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

  if ( (byte_49FEB10 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_49FEB10 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_1B64324(v7);
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

  if ( (byte_49FEB12 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_49FEB12 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_1B64324(v9);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2E2ADDC *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2E2ADDC_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  Il2CppClass *v8; // x0
  Il2CppClass *v9; // x27
  Il2CppClass *_0_T; // x26
  __int64 v11; // x0
  __int64 v12; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v13; // x25
  __int64 v14; // x8
  char *v15; // x23
  __int64 Next; // x0
  __int64 v17; // x1
  unsigned int max_length; // w28
  char *v19; // x22
  __int64 v20; // x19
  __int64 thread_static_fields_size; // x21
  void *v22; // x23
  unsigned int v23; // w19
  unsigned __int64 v25; // [xsp+0h] [xbp-30h] BYREF
  char *v26; // [xsp+8h] [xbp-28h]
  char *v27; // [xsp+10h] [xbp-20h]
  __int64 v28; // [xsp+18h] [xbp-18h]
  void *v29; // [xsp+20h] [xbp-10h]
  __int64 v30; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v30 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v27 = (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v27;
  v29 = v27;
  v8 = (Il2CppClass *)memset(v27, 0, native_size);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0LL);
  v9 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T__);
    _0_T = v8;
  }
  v25 = StatusReg;
  if ( !v9 )
LABEL_23:
    sub_1B64324(v8);
  v11 = sub_1B64204(v9, _0_T);
  if ( !v11 )
    sub_1B645E4(v9);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v11;
  if ( (int)v12 >= 2 )
  {
    v14 = (unsigned int)*(_QWORD *)(v11 + 24) + 1LL;
    v26 = (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL);
    do
    {
      v28 = v14;
      v15 = v7;
      Next = BattleRandom__getNext(v12, 0LL);
      max_length = v13->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v19 = v27;
      v20 = (int)Next;
      thread_static_fields_size = v13->obj.klass->_2.thread_static_fields_size;
      LODWORD(v12) = v12 - 1;
      memcpy(v27, (char *)v13->m_Items + thread_static_fields_size * (int)Next, native_size);
      Next = (__int64)memcpy(v29, v19, native_size);
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_22;
      v7 = v15;
      Next = (__int64)memcpy(v15, (char *)v13->m_Items + thread_static_fields_size * (unsigned int)v12, native_size);
      if ( (unsigned int)v20 >= v13->max_length )
        goto LABEL_22;
      memcpy((char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * v20, v15, native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1BB5FA4(Next);
      v22 = v26;
      if ( (unsigned int)v20 >= v13->max_length )
        goto LABEL_22;
      sub_1B64070(Next, (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * v20, v7);
      Next = (__int64)memcpy(v22, v29, native_size);
      v23 = v13->max_length;
      if ( (unsigned int)v12 >= v23 )
        goto LABEL_22;
      memcpy(
        (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v12,
        v22,
        native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1BB5FA4(Next);
        v23 = v13->max_length;
      }
      if ( (unsigned int)v12 >= v23 )
LABEL_22:
        sub_1B6432C(Next, v17);
      sub_1B64070(
        Next,
        (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v12,
        v22);
      v14 = v28 - 1;
    }
    while ( v28 - 1 > 2 );
  }
  return v13;
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_2E2ABE8 *method)
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
  const MethodInfo_2E2ACD0 *v18; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1BB6000(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0LL);
  v4 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1BB5FA4(method->rgctx_data->_0_T__);
    _0_T = list;
  }
  if ( !v4 )
LABEL_15:
    sub_1B64324(list);
  v6 = sub_1B64204(v4, _0_T);
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
          sub_1B6432C(Next, v11);
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
    sub_1B645E4(v4);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_2E2ACD0 *method)
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
  const MethodInfo_2E2ADDC *v25; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1BB6000(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0LL);
  v4 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1BB5FA4(method->rgctx_data->_0_T__);
    _0_T = list;
  }
  if ( !v4 )
LABEL_16:
    sub_1B64324(list);
  v6 = sub_1B64204(v4, _0_T);
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
              sub_1B6406C(Next, (int32_t)v20, v12, v13),
              (unsigned int)v7 >= v8->max_length) )
        {
LABEL_15:
          sub_1B6432C(Next, v11);
        }
        v19->klass = v16;
        sub_1B6406C(v19, (int32_t)v16, v21, v22);
        --v9;
      }
      while ( v9 > 2 );
    }
    return v8;
  }
  else
  {
    sub_1B645E4(v4);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Random_o *v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Random_o *v16; // x21
  ServantStatusBattleListViewItem_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FEB0E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&System_Random_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_49FEB0E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v10 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v8, v9);
    System_Random___ctor_62256296(v10, seed, 0LL);
    if ( !v7 )
      sub_1B64324(v11);
    *(_QWORD *)(v7 + 32) = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v10, v12, v13);
    v16 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v14, v15);
    System_Random___ctor_62256296(v16, seed, 0LL);
    *(_QWORD *)(v7 + 40) = v16;
    v17 = (ServantStatusBattleListViewItem_o *)(v7 + 40);
    sub_1B6406C(v17, (int32_t)v16, v18, v19);
    v17->monitor = 0LL;
  }
}