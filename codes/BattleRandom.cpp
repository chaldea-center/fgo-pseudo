void BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9FE8 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom___ctor__);
    byte_4CC9FE8 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t BattleRandom__GetGutsCount(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC9FE7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE7 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C47444(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C47444(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C71608(v5, v6);
  return *(_DWORD *)(v4 + 52);
}


int32_t BattleRandom__GetLogicCount(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC9FE6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE6 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C47444(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C47444(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C71608(v5, v6);
  return *(_DWORD *)(v4 + 48);
}


void BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC9FE5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE5 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( v9 )
  {
    if ( !v8 )
      sub_1C71608(v9, v10);
    *(_DWORD *)(v8 + 48) = logic;
    *(_DWORD *)(v8 + 52) = guts;
  }
}


void BattleRandom__adjustment(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w20
  int v8; // w20

  if ( (byte_4CC9FE1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE1 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C47444(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C47444(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( (v5 & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_20;
    if ( *(int *)(v4 + 48) >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 32);
        if ( !v5 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, *(_QWORD *)(*(_QWORD *)v5 + 400LL));
        if ( ++v7 >= *(_DWORD *)(v4 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1C71608(v5, v6);
    }
LABEL_15:
    if ( *(int *)(v4 + 52) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 40);
        if ( !v5 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, *(_QWORD *)(*(_QWORD *)v5 + 400LL));
        if ( ++v8 >= *(_DWORD *)(v4 + 52) )
          return;
      }
      goto LABEL_20;
    }
  }
}


int32_t BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC9FE3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE3 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C47444(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C47444(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_1C71608(v7, v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


int32_t BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC9FE2 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE2 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C47444(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C47444(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_1C71608(v7, v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


int32_t BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC9FE4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE4 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_1C71608(v9, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_313C148 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_313C148_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
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
  unsigned int max_length; // w28
  char *v20; // x22
  __int64 v21; // x19
  __int64 native_size; // x21
  long double v23; // q0
  void *v24; // x23
  unsigned int v25; // w19
  long double v26; // q0
  unsigned __int64 v28; // [xsp+0h] [xbp-30h] BYREF
  char *v29; // [xsp+8h] [xbp-28h]
  char *v30; // [xsp+10h] [xbp-20h]
  __int64 v31; // [xsp+18h] [xbp-18h]
  void *v32; // [xsp+20h] [xbp-10h]
  __int64 v33; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v33 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C474A0(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v30 = (char *)&v28 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v30;
  v32 = v30;
  v8 = (Il2CppClass *)memset(v30, 0, actualSize);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1C47444(v10);
    _0_T = v8;
  }
  v28 = StatusReg;
  if ( !v11 )
LABEL_23:
    sub_1C71608(v8, v9);
  v13 = sub_1C714EC(v11, _0_T);
  if ( !v13 )
    sub_1C719A4(v11);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)v14 >= 2 )
  {
    v16 = (unsigned int)*(_QWORD *)(v13 + 24) + 1LL;
    v29 = (char *)&v28 - ((actualSize + 15) & 0x1FFFFFFF0LL);
    do
    {
      v31 = v16;
      v17 = v7;
      Next = BattleRandom__getNext(v14, 0);
      max_length = v15->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v20 = v30;
      v21 = (int)Next;
      native_size = (unsigned int)v15->obj.klass->_2.native_size;
      LODWORD(v14) = v14 - 1;
      memcpy(v30, (char *)v15->m_Items + native_size * (int)Next, actualSize);
      Next = (__int64)memcpy(v32, v20, actualSize);
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_22;
      v7 = v17;
      Next = (__int64)memcpy(v17, (char *)v15->m_Items + native_size * (unsigned int)v14, actualSize);
      if ( (unsigned int)v21 >= LODWORD(v15->max_length) )
        goto LABEL_22;
      memcpy((char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * v21, v17, actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1C47444(v23);
      v24 = v29;
      if ( (unsigned int)v21 >= LODWORD(v15->max_length) )
        goto LABEL_22;
      sub_1C71358(Next, (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * v21, v7);
      Next = (__int64)memcpy(v24, v32, actualSize);
      v25 = v15->max_length;
      if ( (unsigned int)v14 >= v25 )
        goto LABEL_22;
      memcpy(
        (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v14,
        v24,
        actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1C47444(v26);
        v25 = v15->max_length;
      }
      if ( (unsigned int)v14 >= v25 )
LABEL_22:
        sub_1C71610(Next);
      sub_1C71358(
        Next,
        (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v14,
        v24);
      v16 = v31 - 1;
    }
    while ( v31 - 1 > 2 );
  }
  return v15;
}


System_Int32_array *BattleRandom__getShuffle_int_(System_Int32_array *list, const MethodInfo_313BF54 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Int32_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x19
  __int64 v10; // x21
  __int64 Next; // x0
  unsigned int v12; // w8
  __int64 v13; // x8
  __int64 v14; // x9
  int v15; // t1
  System_Object_array *v17; // x0
  const MethodInfo_313C03C *v18; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C474A0(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C47444(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1C71608(list, method);
  v7 = sub_1C714EC(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = BattleRandom__getNext(v8, 0);
        v12 = *(_DWORD *)(v9 + 24);
        if ( (unsigned int)Next >= v12 || (LODWORD(v8) = v8 - 1, (unsigned int)v8 >= v12) )
          sub_1C71610(Next);
        v13 = v9 + 4LL * (int)Next;
        v14 = v9 + 4LL * (unsigned int)v8;
        v15 = *(_DWORD *)(v13 + 32);
        --v10;
        *(_DWORD *)(v13 + 32) = *(_DWORD *)(v14 + 32);
        *(_DWORD *)(v14 + 32) = v15;
      }
      while ( v10 > 2 );
    }
    return (System_Int32_array *)v9;
  }
  else
  {
    sub_1C719A4(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *BattleRandom__getShuffle_object_(System_Object_array *list, const MethodInfo_313C03C *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Object_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x19
  __int64 v10; // x23
  GrandQuestFolderBoardItem_o *Next; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  unsigned int v18; // w8
  __int64 v19; // x0
  GrandQuestFolderBoardItem_c *v20; // x21
  GrandQuestFolderBoardItem_c *v21; // t1
  __int64 v22; // x22
  GrandQuestFolderBoardItem_o *v23; // x22
  GrandQuestFolderBoardItem_c *v24; // t1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v32; // x0
  const MethodInfo_313C148 *v33; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C474A0(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C47444(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1C71608(list, method);
  v7 = sub_1C714EC(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = (GrandQuestFolderBoardItem_o *)BattleRandom__getNext(v8, 0);
        v18 = *(_DWORD *)(v9 + 24);
        if ( (unsigned int)Next >= v18 )
          goto LABEL_15;
        v19 = v9 + 8LL * (int)Next;
        v21 = *(GrandQuestFolderBoardItem_c **)(v19 + 32);
        Next = (GrandQuestFolderBoardItem_o *)(v19 + 32);
        v20 = v21;
        LODWORD(v8) = v8 - 1;
        if ( (unsigned int)v8 >= v18
          || (v22 = v9 + 8LL * (unsigned int)v8,
              v24 = *(GrandQuestFolderBoardItem_c **)(v22 + 32),
              v23 = (GrandQuestFolderBoardItem_o *)(v22 + 32),
              Next->klass = v24,
              sub_1C71354(Next, (int32_t)v24, v12, v13, v14, v15, v16, v17),
              (unsigned int)v8 >= *(_DWORD *)(v9 + 24)) )
        {
LABEL_15:
          sub_1C71610(Next);
        }
        v23->klass = v20;
        sub_1C71354(v23, (int32_t)v20, v25, v26, v27, v28, v29, v30);
        --v10;
      }
      while ( v10 > 2 );
    }
    return (System_Object_array *)v9;
  }
  else
  {
    sub_1C719A4(v5);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v32, v33);
  }
}


void BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  System_Random_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Random_o *v16; // x21
  GrandQuestFolderBoardItem_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC9FE0 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Random_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4CC9FE0 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C47444(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C47444(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    v7 = (System_Random_o *)sub_1C715FC(System_Random_TypeInfo);
    System_Random___ctor_65618472(v7, seed, 0);
    if ( !v6 )
      sub_1C71608(v8, v9);
    *(_QWORD *)(v6 + 32) = v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)v7, v10, v11, v12, v13, v14, v15);
    v16 = (System_Random_o *)sub_1C715FC(System_Random_TypeInfo);
    System_Random___ctor_65618472(v16, seed, 0);
    *(_QWORD *)(v6 + 40) = v16;
    v17 = (GrandQuestFolderBoardItem_o *)(v6 + 40);
    sub_1C71354(v17, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    v17->monitor = 0;
  }
}