void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4B04982 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_4B04982 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B04981 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B04981 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C1346C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1346C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1BC3264(v7, v8);
  return *(_DWORD *)(v6 + 52);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B04980 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B04980 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C1346C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1346C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1BC3264(v7, v8);
  return *(_DWORD *)(v6 + 48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B0497F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6);
    byte_4B0497F = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1346C(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1BC3264(v10, v11);
    *(_DWORD *)(v9 + 48) = logic;
    *(_DWORD *)(v9 + 52) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // w20
  int v10; // w20

  if ( (byte_4B0497B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B0497B = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C1346C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1346C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_20;
    if ( *(int *)(v6 + 48) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        if ( !v7 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 392LL))(v7, *(_QWORD *)(*(_QWORD *)v7 + 400LL));
        if ( ++v9 >= *(_DWORD *)(v6 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1BC3264(v7, v8);
    }
LABEL_15:
    if ( *(int *)(v6 + 52) >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6 + 40);
        if ( !v7 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 392LL))(v7, *(_QWORD *)(*(_QWORD *)v7 + 400LL));
        if ( ++v10 >= *(_DWORD *)(v6 + 52) )
          return;
      }
      goto LABEL_20;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B0497D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4B0497D = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1346C(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1346C(v2);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( (v8 & 1) == 0 )
    return max - 1;
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 40), ++*(_DWORD *)(v7 + 52), !v8) )
    sub_1BC3264(v8, v9);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 424LL))(
           v8,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v8 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B0497C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4B0497C = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1346C(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1346C(v2);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( (v8 & 1) == 0 )
    return max - 1;
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 32), ++*(_DWORD *)(v7 + 48), !v8) )
    sub_1BC3264(v8, v9);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 424LL))(
           v8,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v8 + 432LL));
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B0497E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6);
    byte_4B0497E = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1346C(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
    return min;
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 32), ++*(_DWORD *)(v9 + 48), !v10) )
    sub_1BC3264(v10, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 408LL))(
           v10,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v10 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2FF3080 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2FF3080_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  Il2CppClass *v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  Il2CppClass *v11; // x27
  Il2CppClass *_0_T; // x26
  __int64 v13; // x0
  __int64 v14; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v15; // x25
  __int64 v16; // x8
  char *v17; // x23
  __int64 Next; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned int max_length; // w28
  char *v22; // x22
  __int64 v23; // x19
  __int64 thread_static_fields_size; // x21
  long double v25; // q0
  void *v26; // x23
  unsigned int v27; // w19
  long double v28; // q0
  unsigned __int64 v30; // [xsp+0h] [xbp-30h] BYREF
  char *v31; // [xsp+8h] [xbp-28h]
  char *v32; // [xsp+10h] [xbp-20h]
  __int64 v33; // [xsp+18h] [xbp-18h]
  void *v34; // [xsp+20h] [xbp-10h]
  __int64 v35; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v35 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C134C8(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v32 = (char *)&v30 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v32;
  v34 = v32;
  v8 = (Il2CppClass *)memset(v32, 0, native_size);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0LL);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1C1346C(v10);
    _0_T = v8;
  }
  v30 = StatusReg;
  if ( !v11 )
LABEL_23:
    sub_1BC3264(v8, v9);
  v13 = sub_1BC3144(v11, _0_T);
  if ( !v13 )
    sub_1BC3524(v11);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)v14 >= 2 )
  {
    v16 = (unsigned int)*(_QWORD *)(v13 + 24) + 1LL;
    v31 = (char *)&v30 - ((native_size + 15) & 0x1FFFFFFF0LL);
    do
    {
      v33 = v16;
      v17 = v7;
      Next = BattleRandom__getNext(v14, 0LL);
      max_length = v15->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v22 = v32;
      v23 = (int)Next;
      thread_static_fields_size = v15->obj.klass->_2.thread_static_fields_size;
      LODWORD(v14) = v14 - 1;
      memcpy(v32, (char *)v15->m_Items + thread_static_fields_size * (int)Next, native_size);
      Next = (__int64)memcpy(v34, v22, native_size);
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_22;
      v7 = v17;
      Next = (__int64)memcpy(v17, (char *)v15->m_Items + thread_static_fields_size * (unsigned int)v14, native_size);
      if ( (unsigned int)v23 >= v15->max_length )
        goto LABEL_22;
      memcpy((char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * v23, v17, native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1C1346C(v25);
      v26 = v31;
      if ( (unsigned int)v23 >= v15->max_length )
        goto LABEL_22;
      sub_1BC2FB0(Next, (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * v23, v7);
      Next = (__int64)memcpy(v26, v34, native_size);
      v27 = v15->max_length;
      if ( (unsigned int)v14 >= v27 )
        goto LABEL_22;
      memcpy(
        (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v14,
        v26,
        native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1C1346C(v28);
        v27 = v15->max_length;
      }
      if ( (unsigned int)v14 >= v27 )
LABEL_22:
        sub_1BC326C(Next, v19, v20);
      sub_1BC2FB0(
        Next,
        (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v14,
        v26);
      v16 = v33 - 1;
    }
    while ( v33 - 1 > 2 );
  }
  return v15;
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_2FF2E8C *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Int32_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  System_Int32_array *v9; // x19
  __int64 v10; // x21
  __int64 Next; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned int max_length; // w8
  char *v15; // x8
  char *v16; // x9
  int v17; // t1
  System_Object_array *v19; // x0
  const MethodInfo_2FF2F74 *v20; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C134C8(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C1346C(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1BC3264(list, method);
  v7 = sub_1BC3144(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = (System_Int32_array *)v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = BattleRandom__getNext(v8, 0LL);
        max_length = v9->max_length;
        if ( (unsigned int)Next >= max_length || (LODWORD(v8) = v8 - 1, (unsigned int)v8 >= max_length) )
          sub_1BC326C(Next, v12, v13);
        v15 = (char *)v9 + 4 * (int)Next;
        v16 = (char *)v9 + 4 * (unsigned int)v8;
        v17 = *((_DWORD *)v15 + 8);
        --v10;
        *((_DWORD *)v15 + 8) = *((_DWORD *)v16 + 8);
        *((_DWORD *)v16 + 8) = v17;
      }
      while ( v10 > 2 );
    }
    return v9;
  }
  else
  {
    sub_1BC3524(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v19, v20);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_2FF2F74 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Object_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  System_Object_array *v9; // x19
  __int64 v10; // x23
  CGThumbnailListItem_o *Next; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  unsigned int max_length; // w8
  Il2CppClass **v16; // x0
  CGThumbnailListItem_c *v17; // x21
  CGThumbnailListItem_c *v18; // t1
  Il2CppClass **v19; // x22
  CGThumbnailListItem_o *v20; // x22
  CGThumbnailListItem_c *v21; // t1
  const MethodInfo *v22; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v24; // x0
  const MethodInfo_2FF3080 *v25; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C134C8(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C1346C(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1BC3264(list, method);
  v7 = sub_1BC3144(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = (System_Object_array *)v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = (CGThumbnailListItem_o *)BattleRandom__getNext(v8, 0LL);
        max_length = v9->max_length;
        if ( (unsigned int)Next >= max_length )
          goto LABEL_15;
        v16 = &v9->obj.klass + (int)Next;
        v18 = (CGThumbnailListItem_c *)v16[4];
        Next = (CGThumbnailListItem_o *)(v16 + 4);
        v17 = v18;
        LODWORD(v8) = v8 - 1;
        if ( (unsigned int)v8 >= max_length
          || (v19 = &v9->obj.klass + (unsigned int)v8,
              v21 = (CGThumbnailListItem_c *)v19[4],
              v20 = (CGThumbnailListItem_o *)(v19 + 4),
              Next->klass = v21,
              sub_1BC2FAC(Next, (int32_t)v21, v13, v14),
              (unsigned int)v8 >= v9->max_length) )
        {
LABEL_15:
          sub_1BC326C(Next, v12, v13);
        }
        v20->klass = v17;
        sub_1BC2FAC(v20, (int32_t)v17, v13, v22);
        --v10;
      }
      while ( v10 > 2 );
    }
    return v9;
  }
  else
  {
    sub_1BC3524(v5);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v24, v25);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x20
  System_Random_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Random_o *v14; // x21
  CGThumbnailListItem_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B0497A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&System_Random_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_4B0497A = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1346C(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C(v2);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    v9 = (System_Random_o *)sub_1BC3254(System_Random_TypeInfo);
    System_Random___ctor_63935824(v9, seed, 0LL);
    if ( !v8 )
      sub_1BC3264(v10, v11);
    *(_QWORD *)(v8 + 32) = v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v9, v12, v13);
    v14 = (System_Random_o *)sub_1BC3254(System_Random_TypeInfo);
    System_Random___ctor_63935824(v14, seed, 0LL);
    *(_QWORD *)(v8 + 40) = v14;
    v15 = (CGThumbnailListItem_o *)(v8 + 40);
    sub_1BC2FAC(v15, (int32_t)v14, v16, v17);
    v15->monitor = 0LL;
  }
}