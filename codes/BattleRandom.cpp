void BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_5973587 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom___ctor__);
    byte_5973587 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5973586 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973586 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_2213CDC(v6, v7);
  return *(_DWORD *)(v5 + 52);
}


int32_t BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5973585 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973585 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_2213CDC(v6, v7);
  return *(_DWORD *)(v5 + 48);
}


// local variable allocation has failed, the output may be wrong!
void BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_5973584 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973584 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( v9 )
  {
    if ( !v8 )
      sub_2213CDC(v9, v10);
    *(_DWORD *)(v8 + 48) = logic;
    *(_DWORD *)(v8 + 52) = guts;
  }
}


void BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w20
  int v9; // w20

  if ( (byte_5973580 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973580 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
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
      sub_2213CDC(v6, v7);
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


int32_t BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5973582 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973582 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), ++*(_DWORD *)(v6 + 52), !v7) )
    sub_2213CDC(v7, v8);
  return (*(int32_t (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
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

  if ( (byte_5973581 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973581 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 48), !v7) )
    sub_2213CDC(v7, v8);
  return (*(int32_t (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_5973583 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_5973583 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (v9 & 1) == 0 )
    return min;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 32), ++*(_DWORD *)(v8 + 48), !v9) )
    sub_2213CDC(v9, v10);
  return (*(int32_t (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 408LL))(
           v9,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v9 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_38178AC *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_38178AC_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  char *v7; // x23
  Il2CppClass *v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  Il2CppClass *v11; // x26
  Il2CppClass *_0_T; // x25
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x9
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v16; // x26
  __int64 v17; // x24
  __int64 v18; // x19
  char *v19; // x25
  __int64 Next; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppClass *klass; // x22
  __int64 v23; // x21
  unsigned __int64 v24; // x19
  __int64 native_size; // x26
  unsigned __int64 v26; // x23
  const void *v27; // x26
  long double v28; // q0
  char *v29; // x21
  long double v30; // q0
  unsigned __int64 v32; // [xsp+0h] [xbp-30h] BYREF
  char *v33; // [xsp+8h] [xbp-28h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v34; // [xsp+10h] [xbp-20h]
  __int64 v35; // [xsp+18h] [xbp-18h]
  __int64 v36; // [xsp+20h] [xbp-10h]
  __int64 v37; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v37 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v7 = (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v8 = (Il2CppClass *)memset(v7, 0, actualSize);
  if ( !list )
    goto LABEL_22;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_224B908(v10);
    _0_T = v8;
  }
  if ( !v11 )
LABEL_22:
    sub_2213CDC(v8, v9);
  v32 = StatusReg;
  v13 = sub_2213BB4(v11, _0_T);
  if ( !v13 )
    sub_221405C(v11, _0_T, v14);
  v15 = *(_QWORD *)(v13 + 24);
  v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)v15 >= 2 )
  {
    v17 = v13 + 32;
    v33 = (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL);
    v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
    v18 = (unsigned int)v15 + 1LL;
    do
    {
      v19 = v7;
      v36 = v15;
      Next = BattleRandom__getNext(v15, 0);
      max_length = v16->max_length;
      if ( (unsigned int)Next >= (unsigned int)max_length )
        goto LABEL_21;
      klass = v16->obj.klass;
      v23 = (int)Next;
      v35 = v18;
      v24 = v18 - 2;
      native_size = (unsigned int)klass->_2.native_size;
      v26 = (unsigned int)max_length;
      Next = (__int64)memcpy(
                        (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
                        (const void *)(v17 + native_size * (int)Next),
                        actualSize);
      if ( v24 >= v26 )
        goto LABEL_21;
      v27 = (const void *)(v17 + v24 * native_size);
      v7 = v19;
      memcpy(v19, v27, actualSize);
      memmove((void *)(v17 + (unsigned int)klass->_2.native_size * v23), v27, actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_WORD *)(Next + 309) & 1) == 0 )
        Next = sub_224B908(v28);
      v16 = v34;
      if ( (unsigned int)v23 >= LODWORD(v34->max_length) )
        goto LABEL_21;
      sub_2213A08(Next, v17 + (unsigned int)v34->obj.klass->_2.native_size * v23, v19);
      v29 = v33;
      Next = (__int64)memcpy(v33, (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL), actualSize);
      if ( v24 >= LODWORD(v16->max_length) )
        goto LABEL_21;
      memcpy(
        (void *)(v17 + v24 * (unsigned int)v16->obj.klass->_2.native_size),
        (char *)&v32 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_WORD *)(Next + 309) & 1) == 0 )
        Next = sub_224B908(v30);
      if ( v24 >= LODWORD(v16->max_length) )
LABEL_21:
        sub_2213CE4(Next);
      sub_2213A08(Next, v17 + v24 * (unsigned int)v16->obj.klass->_2.native_size, v29);
      v18 = v35 - 1;
      v15 = (unsigned int)(v36 - 1);
    }
    while ( (unsigned __int64)(v35 - 1) > 2 );
  }
  return v16;
}


System_Int32_array *BattleRandom__getShuffle_int_(System_Int32_array *list, const MethodInfo_3817684 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Int32_array *v5; // x21
  void *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x2
  System_Int32_array *v9; // x19
  __int64 v10; // x20
  __int64 v11; // x21
  __int64 Next; // x0
  __int64 v13; // x8
  char *v14; // x9
  int v15; // w12
  System_Object_array *v17; // x0
  const MethodInfo_3817774 *v18; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_224B964(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(_WORD *)((_BYTE *)_0_T + 309) & 1) == 0 )
  {
    list = (System_Int32_array *)sub_224B908(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, method);
  v7 = sub_2213BB4(v5, _0_T);
  if ( v7 )
  {
    v9 = (System_Int32_array *)v7;
    if ( (int)*(_QWORD *)(v7 + 24) >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24);
      v11 = v7 + 28;
      do
      {
        Next = BattleRandom__getNext(v10, 0);
        if ( (unsigned int)Next >= (unsigned int)v9->max_length
          || (v13 = v10 - 1, v10 - 1 >= (unsigned __int64)(unsigned int)v9->max_length) )
        {
          sub_2213CE4(Next);
        }
        v14 = (char *)v9 + 4 * (int)Next;
        v15 = *((_DWORD *)v14 + 8);
        *((_DWORD *)v14 + 8) = *(_DWORD *)(v11 + 4 * v10);
        *(_DWORD *)(v11 + 4 * v10--) = v15;
      }
      while ( (unsigned __int64)(v13 + 1) > 2 );
    }
    return v9;
  }
  else
  {
    sub_221405C(v5, _0_T, v8);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *BattleRandom__getShuffle_object_(System_Object_array *list, const MethodInfo_3817774 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Object_array *v5; // x21
  void *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x2
  __int64 v9; // x20
  System_Object_array *v10; // x19
  unsigned __int64 v11; // x24
  MissionNaviTransitionBoardItem_o *v12; // x21
  __int64 Next; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MissionNaviTransitionBoardItem_c *klass; // x1
  Il2CppClass **v21; // x9
  MissionNaviTransitionBoardItem_c *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v30; // x0
  const MethodInfo_38178AC *v31; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_224B964(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(_WORD *)((_BYTE *)_0_T + 309) & 1) == 0 )
  {
    list = (System_Object_array *)sub_224B908(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_2213CDC(list, method);
  v7 = sub_2213BB4(v5, _0_T);
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    v10 = (System_Object_array *)v7;
    if ( (int)v9 >= 2 )
    {
      v11 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      v12 = (MissionNaviTransitionBoardItem_o *)(v7 + 8LL * (unsigned int)*(_QWORD *)(v7 + 24) + 24);
      do
      {
        Next = BattleRandom__getNext(v9, 0);
        if ( (unsigned int)Next >= (unsigned int)v10->max_length
          || v11 - 2 >= (unsigned int)v10->max_length
          || (klass = v12->klass,
              v21 = &v10->obj.klass + (int)Next,
              v22 = (MissionNaviTransitionBoardItem_c *)v21[4],
              v21[4] = (Il2CppClass *)v12->klass,
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v10->m_Items[(int)Next],
                (int32_t)klass,
                v14,
                v15,
                v16,
                v17,
                v18,
                v19),
              v11 - 2 >= LODWORD(v10->max_length)) )
        {
          sub_2213CE4(Next);
        }
        v12->klass = v22;
        sub_2213A04(v12, (int32_t)v22, v23, v24, v25, v26, v27, v28);
        --v11;
        LODWORD(v9) = v9 - 1;
        v12 = (MissionNaviTransitionBoardItem_o *)((char *)v12 - 8);
      }
      while ( v11 > 2 );
    }
    return v10;
  }
  else
  {
    sub_221405C(v5, _0_T, v8);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v30, v31);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Random_o *v16; // x21
  MissionNaviTransitionBoardItem_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_597357F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_597357F = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    v7 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor_77219528(v7, seed, 0);
    if ( !v6 )
      sub_2213CDC(v8, v9);
    *(_QWORD *)(v6 + 32) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)v7, v10, v11, v12, v13, v14, v15);
    v16 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor_77219528(v16, seed, 0);
    *(_QWORD *)(v6 + 40) = v16;
    v17 = (MissionNaviTransitionBoardItem_o *)(v6 + 40);
    sub_2213A04(v17, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    v17->monitor = 0;
  }
}