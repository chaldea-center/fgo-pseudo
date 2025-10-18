void BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4C45B1A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom___ctor__);
    byte_4C45B1A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t BattleRandom__GetGutsCount(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  _BOOL8 v5; // x0

  if ( (byte_4C45B19 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B19 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C8776C(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C372B4(v5);
  return *(_DWORD *)(v4 + 52);
}


int32_t BattleRandom__GetLogicCount(const MethodInfo *method)
{
  long double v1; // q0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  _BOOL8 v5; // x0

  if ( (byte_4C45B18 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B18 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C8776C(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C(v1);
  v4 = **(_QWORD **)(v3 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 0;
  if ( !v4 )
    sub_1C372B4(v5);
  return *(_DWORD *)(v4 + 48);
}


void BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  _BOOL8 v9; // x0

  if ( (byte_4C45B17 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B17 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( v9 )
  {
    if ( !v8 )
      sub_1C372B4(v9);
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
  int v6; // w20
  int v7; // w20

  if ( (byte_4C45B13 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B13 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1C8776C(v1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C(v1);
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
      v6 = 0;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 32);
        if ( !v5 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, *(_QWORD *)(*(_QWORD *)v5 + 400LL));
        if ( ++v6 >= *(_DWORD *)(v4 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1C372B4(v5);
    }
LABEL_15:
    if ( *(int *)(v4 + 52) >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 40);
        if ( !v5 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, *(_QWORD *)(*(_QWORD *)v5 + 400LL));
        if ( ++v7 >= *(_DWORD *)(v4 + 52) )
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

  if ( (byte_4C45B15 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B15 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_1C372B4(v7);
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

  if ( (byte_4C45B14 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B14 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_1C372B4(v7);
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

  if ( (byte_4C45B16 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B16 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_1C372B4(v9);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_30D8D9C *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_30D8D9C_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  char *v7; // x22
  Il2CppClass *v8; // x0
  long double v9; // q0
  Il2CppClass *v10; // x27
  Il2CppClass *_0_T; // x26
  __int64 v12; // x0
  __int64 v13; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v14; // x25
  __int64 v15; // x8
  char *v16; // x23
  __int64 Next; // x0
  unsigned int max_length; // w28
  char *v19; // x22
  __int64 v20; // x19
  __int64 native_size; // x21
  long double v22; // q0
  void *v23; // x23
  unsigned int v24; // w19
  long double v25; // q0
  unsigned __int64 v27; // [xsp+0h] [xbp-30h] BYREF
  char *v28; // [xsp+8h] [xbp-28h]
  char *v29; // [xsp+10h] [xbp-20h]
  __int64 v30; // [xsp+18h] [xbp-18h]
  void *v31; // [xsp+20h] [xbp-10h]
  __int64 v32; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v32 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C877C8(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v29 = (char *)&v27 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v29;
  v31 = v29;
  v8 = (Il2CppClass *)memset(v29, 0, actualSize);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0);
  v10 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1C8776C(v9);
    _0_T = v8;
  }
  v27 = StatusReg;
  if ( !v10 )
LABEL_23:
    sub_1C372B4(v8);
  v12 = sub_1C37194(v10, _0_T);
  if ( !v12 )
    sub_1C37574(v10);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v12;
  if ( (int)v13 >= 2 )
  {
    v15 = (unsigned int)*(_QWORD *)(v12 + 24) + 1LL;
    v28 = (char *)&v27 - ((actualSize + 15) & 0x1FFFFFFF0LL);
    do
    {
      v30 = v15;
      v16 = v7;
      Next = BattleRandom__getNext(v13, 0);
      max_length = v14->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v19 = v29;
      v20 = (int)Next;
      native_size = (unsigned int)v14->obj.klass->_2.native_size;
      LODWORD(v13) = v13 - 1;
      memcpy(v29, (char *)v14->m_Items + native_size * (int)Next, actualSize);
      Next = (__int64)memcpy(v31, v19, actualSize);
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_22;
      v7 = v16;
      Next = (__int64)memcpy(v16, (char *)v14->m_Items + native_size * (unsigned int)v13, actualSize);
      if ( (unsigned int)v20 >= LODWORD(v14->max_length) )
        goto LABEL_22;
      memcpy((char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * v20, v16, actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1C8776C(v22);
      v23 = v28;
      if ( (unsigned int)v20 >= LODWORD(v14->max_length) )
        goto LABEL_22;
      sub_1C37000(Next, (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * v20, v7);
      Next = (__int64)memcpy(v23, v31, actualSize);
      v24 = v14->max_length;
      if ( (unsigned int)v13 >= v24 )
        goto LABEL_22;
      memcpy(
        (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v13,
        v23,
        actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1C8776C(v25);
        v24 = v14->max_length;
      }
      if ( (unsigned int)v13 >= v24 )
LABEL_22:
        sub_1C372BC(Next);
      sub_1C37000(
        Next,
        (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)v13,
        v23);
      v15 = v30 - 1;
    }
    while ( v30 - 1 > 2 );
  }
  return v14;
}


System_Int32_array *BattleRandom__getShuffle_int_(System_Int32_array *list, const MethodInfo_30D8BA8 *method)
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
  const MethodInfo_30D8C90 *v18; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C877C8(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C8776C(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1C372B4(list);
  v7 = sub_1C37194(v5, _0_T);
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
          sub_1C372BC(Next);
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
    sub_1C37574(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *BattleRandom__getShuffle_object_(System_Object_array *list, const MethodInfo_30D8C90 *method)
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned int v14; // w8
  __int64 v15; // x0
  CGThumbnailListItem_c *v16; // x21
  CGThumbnailListItem_c *v17; // t1
  __int64 v18; // x22
  CGThumbnailListItem_o *v19; // x22
  CGThumbnailListItem_c *v20; // t1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v24; // x0
  const MethodInfo_30D8D9C *v25; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C877C8(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C8776C(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1C372B4(list);
  v7 = sub_1C37194(v5, _0_T);
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
        v14 = *(_DWORD *)(v9 + 24);
        if ( (unsigned int)Next >= v14 )
          goto LABEL_15;
        v15 = v9 + 8LL * (int)Next;
        v17 = *(CGThumbnailListItem_c **)(v15 + 32);
        Next = (CGThumbnailListItem_o *)(v15 + 32);
        v16 = v17;
        LODWORD(v8) = v8 - 1;
        if ( (unsigned int)v8 >= v14
          || (v18 = v9 + 8LL * (unsigned int)v8,
              v20 = *(CGThumbnailListItem_c **)(v18 + 32),
              v19 = (CGThumbnailListItem_o *)(v18 + 32),
              Next->klass = v20,
              sub_1C36FFC(Next, (int32_t)v20, v12, v13),
              (unsigned int)v8 >= *(_DWORD *)(v9 + 24)) )
        {
LABEL_15:
          sub_1C372BC(Next);
        }
        v19->klass = v16;
        sub_1C36FFC(v19, (int32_t)v16, v21, v22);
        --v10;
      }
      while ( v10 > 2 );
    }
    return (System_Object_array *)v9;
  }
  else
  {
    sub_1C37574(v5);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Random_o *v11; // x21
  CGThumbnailListItem_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45B12 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Random_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_4C45B12 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    v7 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
    System_Random___ctor_65150016(v7, seed, 0);
    if ( !v6 )
      sub_1C372B4(v8);
    *(_QWORD *)(v6 + 32) = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v7, v9, v10);
    v11 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
    System_Random___ctor_65150016(v11, seed, 0);
    *(_QWORD *)(v6 + 40) = v11;
    v12 = (CGThumbnailListItem_o *)(v6 + 40);
    sub_1C36FFC(v12, (int32_t)v11, v13, v14);
    v12->monitor = 0;
  }
}