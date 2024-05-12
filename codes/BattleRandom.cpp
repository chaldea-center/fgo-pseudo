void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_438B469 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom___ctor__);
    byte_438B469 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x19
  __int64 v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_438B468 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B468 = 1;
  }
  v1 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v1 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v2 = **(_QWORD **)(v1 + 192);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_B0F2C4(v2);
  v3 = **(_QWORD **)(v2 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v3, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !v3 )
    sub_B7769C(v4, v5);
  return *(_DWORD *)(v3 + 44);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x19
  UnityEngine_Object_o *v3; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_438B467 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B467 = 1;
  }
  v1 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v1 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v2 = **(_QWORD **)(v1 + 192);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_B0F2C4(v2);
  v3 = **(UnityEngine_Object_o ***)(v2 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(v3, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !v3 )
    sub_B7769C(v4, v5);
  return v3[1].fields.m_CachedPtr;
}


void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_438B466 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B466 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  v7 = **(_QWORD **)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( v8 )
  {
    if ( !v7 )
      sub_B7769C(v8, v9);
    *(_DWORD *)(v7 + 40) = logic;
    *(_DWORD *)(v7 + 44) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x19
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w20
  int v7; // w20

  if ( (byte_438B462 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B462 = 1;
  }
  v1 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v1 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v2 = **(_QWORD **)(v1 + 192);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_B0F2C4(v2);
  v3 = **(_QWORD **)(v2 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v3, 0LL, 0LL);
  if ( (v4 & 1) != 0 )
  {
    if ( !v3 )
      goto LABEL_21;
    if ( *(int *)(v3 + 40) >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v3 + 24);
        if ( !v4 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 392LL))(v4, *(_QWORD *)(*(_QWORD *)v4 + 400LL));
        if ( ++v6 >= *(_DWORD *)(v3 + 40) )
          goto LABEL_16;
      }
LABEL_21:
      sub_B7769C(v4, v5);
    }
LABEL_16:
    if ( *(int *)(v3 + 44) >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( !v4 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 392LL))(v4, *(_QWORD *)(*(_QWORD *)v4 + 400LL));
        if ( ++v7 >= *(_DWORD *)(v3 + 44) )
          return;
      }
      goto LABEL_21;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438B464 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B464 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( (v6 & 1) == 0 )
    return max - 1;
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 32), ++*(_DWORD *)(v5 + 44), !v6) )
    sub_B7769C(v6, v7);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 424LL))(
           v6,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v6 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v7; // x1

  if ( (byte_438B463 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B463 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return max - 1;
  if ( !v5 || (klass = v5[1].klass, ++v5[1].fields.m_CachedPtr, !klass) )
    sub_B7769C(klass, v7);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD))klass->_1.image + 53))(
           klass,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 54));
}


int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_c *klass; // x0
  __int64 v9; // x1

  if ( (byte_438B465 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B465 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return min;
  if ( !v7 || (klass = v7[1].klass, ++v7[1].fields.m_CachedPtr, !klass) )
    sub_B7769C(klass, v9);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD, _QWORD))klass->_1.image + 51))(
           klass,
           (unsigned int)min,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 52));
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_1C6A2F4 *method)
{
  System_Int32_array *v3; // x21
  Il2CppClass *_0_T; // x20
  __int64 v5; // x0
  int32_t v6; // w20
  __int64 v7; // x19
  __int64 v8; // x21
  __int64 Next; // x0
  __int64 v10; // x11
  int v11; // w9
  _DWORD *v12; // x11
  int v13; // t1
  __int64 v14; // x8
  __int64 v16; // x0
  System_Object_array *v17; // x0
  const MethodInfo_1C6A3E8 *v18; // x1

  if ( !list )
    goto LABEL_14;
  list = (System_Int32_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Int32_array *)sub_B0F2C4(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B7769C(list, method);
  v5 = sub_B77684(v3, _0_T);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 24);
    v7 = v5;
    if ( v6 >= 2 )
    {
      v8 = v6 + 7LL;
      do
      {
        Next = BattleRandom__getNext(v6, 0LL);
        if ( (unsigned int)Next >= (unsigned int)*(_QWORD *)(v7 + 24)
          || (v10 = v7 + 4LL * (int)Next,
              v13 = *(_DWORD *)(v10 + 32),
              v12 = (_DWORD *)(v10 + 32),
              v11 = v13,
              v8 - 8 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24))
          || (*v12 = *(_DWORD *)(v7 + 4 * v8), v8 - 8 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          v16 = sub_B776C8(Next);
          sub_B77668(v16, 0LL);
        }
        v14 = v8 - 7;
        *(_DWORD *)(v7 + 4 * v8--) = v11;
        --v6;
      }
      while ( v14 > 2 );
    }
    return (System_Int32_array *)v7;
  }
  else
  {
    sub_B77990(v3);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_1C6A3E8 *method)
{
  System_Object_array *v3; // x21
  Il2CppClass *_0_T; // x20
  __int64 v5; // x0
  int32_t v6; // w20
  __int64 v7; // x19
  __int64 v8; // x23
  BattleServantConfConponent_o *v9; // x21
  BattleServantConfConponent_o *Next; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  System_Int32_array **v18; // x22
  System_Int32_array **v19; // t1
  System_Int32_array **klass; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v28; // x0
  BattleServantData_o *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo_1C6A500 *v32; // x3

  if ( !list )
    goto LABEL_14;
  list = (System_Object_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Object_array *)sub_B0F2C4(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B7769C(list, method);
  v5 = sub_B77684(v3, _0_T);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 24);
    v7 = v5;
    if ( v6 >= 2 )
    {
      v8 = v6 + 1LL;
      v9 = (BattleServantConfConponent_o *)(v5 + 8LL * v6 + 24);
      do
      {
        Next = (BattleServantConfConponent_o *)BattleRandom__getNext(v6, 0LL);
        if ( (unsigned int)Next >= (unsigned int)*(_QWORD *)(v7 + 24)
          || (v17 = v7 + 8LL * (int)Next,
              v19 = *(System_Int32_array ***)(v17 + 32),
              Next = (BattleServantConfConponent_o *)(v17 + 32),
              v18 = v19,
              v8 - 2 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24))
          || (klass = (System_Int32_array **)v9->klass,
              Next->klass = v9->klass,
              sub_B77560(Next, klass, v11, v12, v13, v14, v15, v16),
              v8 - 2 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          v28 = sub_B776C8(Next);
          sub_B77668(v28, 0LL);
        }
        v9->klass = (BattleServantConfConponent_c *)v18;
        sub_B77560(v9, v18, v21, v22, v23, v24, v25, v26);
        --v8;
        --v6;
        v9 = (BattleServantConfConponent_o *)((char *)v9 - 8);
      }
      while ( v8 > 2 );
    }
    return (System_Object_array *)v7;
  }
  else
  {
    sub_B77990(v3);
    return (System_Object_array *)BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(v29, v30, v31, v32);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  UnityEngine_Object_o *v5; // x20
  System_Random_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *v15; // x20
  System_Random_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_438B461 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&System_Random_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__);
    byte_438B461 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = (System_Random_o *)sub_B77694(System_Random_TypeInfo);
    System_Random___ctor_37888616(v6, seed, 0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    v5[1].klass = (UnityEngine_Object_c *)v6;
    v15 = v5 + 1;
    sub_B77560((BattleServantConfConponent_o *)v15, (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
    v16 = (System_Random_o *)sub_B77694(System_Random_TypeInfo);
    System_Random___ctor_37888616(v16, seed, 0LL);
    v15->monitor = v16;
    sub_B77560((BattleServantConfConponent_o *)&v15->monitor, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)&v15->fields.m_CachedPtr = 0LL;
  }
}