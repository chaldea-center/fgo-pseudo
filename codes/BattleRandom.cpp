void BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4C29E00 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom___ctor__);
    byte_4C29E00 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t BattleRandom__GetGutsCount(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C29DFF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFF = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C7DBA4(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C7DBA4(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C29DFE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFE = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C7DBA4(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C7DBA4(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C29DFD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFD = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( v9 )
  {
    if ( !v8 )
      sub_1C2D6EC(v9, v10);
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

  if ( (byte_4C29DF9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DF9 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C7DBA4(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C7DBA4(v1);
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
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C29DFB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFB = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_1C2D6EC(v7, v8);
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

  if ( (byte_4C29DFA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_1C2D6EC(v7, v8);
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

  if ( (byte_4C29DFC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DFC = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_1C2D6EC(v9, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_30BFA94 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_30BFA94_RGCTXs *rgctx_data; // x8
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
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned int max_length; // w28
  char *v22; // x22
  __int64 v23; // x19
  __int64 native_size; // x21
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

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v35 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C7DC00(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v32 = (char *)&v30 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v32;
  v34 = v32;
  v8 = (Il2CppClass *)memset(v32, 0, actualSize);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1C7DBA4(v10);
    _0_T = v8;
  }
  v30 = StatusReg;
  if ( !v11 )
LABEL_23:
    sub_1C2D6EC(v8, v9);
  v13 = sub_1C2D5CC(v11, _0_T);
  if ( !v13 )
    sub_1C2D9AC(v11);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)v14 >= 2 )
  {
    v16 = (unsigned int)*(_QWORD *)(v13 + 24) + 1LL;
    v31 = (char *)&v30 - ((actualSize + 15) & 0x1FFFFFFF0LL);
    do
    {
      v33 = v16;
      v17 = v7;
      Next = BattleRandom__getNext(v14, 0);
      max_length = v15->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v22 = v32;
      v23 = (int)Next;
      native_size = (unsigned int)v15->obj.klass->_2.native_size;
      LODWORD(v14) = v14 - 1;
      memcpy(v32, (char *)v15->m_Items + native_size * (int)Next, actualSize);
      Next = (__int64)memcpy(v34, v22, actualSize);
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_22;
      v7 = v17;
      Next = (__int64)memcpy(v17, (char *)v15->m_Items + native_size * (unsigned int)v14, actualSize);
      if ( (unsigned int)v23 >= LODWORD(v15->max_length) )
        goto LABEL_22;
      memcpy((char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * v23, v17, actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1C7DBA4(v25);
      v26 = v31;
      if ( (unsigned int)v23 >= LODWORD(v15->max_length) )
        goto LABEL_22;
      sub_1C2D438(Next, (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * v23, v7);
      Next = (__int64)memcpy(v26, v34, actualSize);
      v27 = v15->max_length;
      if ( (unsigned int)v14 >= v27 )
        goto LABEL_22;
      memcpy(
        (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v14,
        v26,
        actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1C7DBA4(v28);
        v27 = v15->max_length;
      }
      if ( (unsigned int)v14 >= v27 )
LABEL_22:
        sub_1C2D6F4(Next, v19, v20);
      sub_1C2D438(
        Next,
        (char *)v15->m_Items + (unsigned int)v15->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v14,
        v26);
      v16 = v33 - 1;
    }
    while ( v33 - 1 > 2 );
  }
  return v15;
}


System_Int32_array *BattleRandom__getShuffle_int_(System_Int32_array *list, const MethodInfo_30BF8A0 *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned int v14; // w8
  __int64 v15; // x8
  __int64 v16; // x9
  int v17; // t1
  System_Object_array *v19; // x0
  const MethodInfo_30BF988 *v20; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C7DC00(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C7DBA4(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1C2D6EC(list, method);
  v7 = sub_1C2D5CC(v5, _0_T);
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
        v14 = *(_DWORD *)(v9 + 24);
        if ( (unsigned int)Next >= v14 || (LODWORD(v8) = v8 - 1, (unsigned int)v8 >= v14) )
          sub_1C2D6F4(Next, v12, v13);
        v15 = v9 + 4LL * (int)Next;
        v16 = v9 + 4LL * (unsigned int)v8;
        v17 = *(_DWORD *)(v15 + 32);
        --v10;
        *(_DWORD *)(v15 + 32) = *(_DWORD *)(v16 + 32);
        *(_DWORD *)(v16 + 32) = v17;
      }
      while ( v10 > 2 );
    }
    return (System_Int32_array *)v9;
  }
  else
  {
    sub_1C2D9AC(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v19, v20);
  }
}


System_Object_array *BattleRandom__getShuffle_object_(System_Object_array *list, const MethodInfo_30BF988 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Object_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x19
  __int64 v10; // x23
  CGThumbnailListItem_o *Next; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  unsigned int v15; // w8
  __int64 v16; // x0
  CGThumbnailListItem_c *v17; // x21
  CGThumbnailListItem_c *v18; // t1
  __int64 v19; // x22
  CGThumbnailListItem_o *v20; // x22
  CGThumbnailListItem_c *v21; // t1
  const MethodInfo *v22; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v24; // x0
  const MethodInfo_30BFA94 *v25; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C7DC00(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C7DBA4(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1C2D6EC(list, method);
  v7 = sub_1C2D5CC(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = (CGThumbnailListItem_o *)BattleRandom__getNext(v8, 0);
        v15 = *(_DWORD *)(v9 + 24);
        if ( (unsigned int)Next >= v15 )
          goto LABEL_15;
        v16 = v9 + 8LL * (int)Next;
        v18 = *(CGThumbnailListItem_c **)(v16 + 32);
        Next = (CGThumbnailListItem_o *)(v16 + 32);
        v17 = v18;
        LODWORD(v8) = v8 - 1;
        if ( (unsigned int)v8 >= v15
          || (v19 = v9 + 8LL * (unsigned int)v8,
              v21 = *(CGThumbnailListItem_c **)(v19 + 32),
              v20 = (CGThumbnailListItem_o *)(v19 + 32),
              Next->klass = v21,
              sub_1C2D434(Next, (int32_t)v21, v13, v14),
              (unsigned int)v8 >= *(_DWORD *)(v9 + 24)) )
        {
LABEL_15:
          sub_1C2D6F4(Next, v12, v13);
        }
        v20->klass = v17;
        sub_1C2D434(v20, (int32_t)v17, v13, v22);
        --v10;
      }
      while ( v10 > 2 );
    }
    return (System_Object_array *)v9;
  }
  else
  {
    sub_1C2D9AC(v5);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v24, v25);
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
  const MethodInfo *v11; // x3
  System_Random_o *v12; // x21
  CGThumbnailListItem_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C29DF8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C29DF8 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    v7 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
    System_Random___ctor_65046968(v7, seed, 0);
    if ( !v6 )
      sub_1C2D6EC(v8, v9);
    *(_QWORD *)(v6 + 32) = v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v7, v10, v11);
    v12 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
    System_Random___ctor_65046968(v12, seed, 0);
    *(_QWORD *)(v6 + 40) = v12;
    v13 = (CGThumbnailListItem_o *)(v6 + 40);
    sub_1C2D434(v13, (int32_t)v12, v14, v15);
    v13->monitor = 0;
  }
}