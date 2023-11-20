void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_40FA8C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_40FA8C4 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  __int64 v5; // x19

  if ( (byte_40FA8C3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_40FA8C3 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return 0;
  if ( !v5 )
    sub_B170D4();
  return *(_DWORD *)(v5 + 44);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  UnityEngine_Object_o *v5; // x19

  if ( (byte_40FA8C2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_40FA8C2 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
    return 0;
  if ( !v5 )
    sub_B170D4();
  return v5[1].fields.m_CachedPtr;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x21
  __int64 v8; // x21

  if ( (byte_40FA8C1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_40FA8C1 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( !v8 )
      sub_B170D4();
    *(_DWORD *)(v8 + 40) = logic;
    *(_DWORD *)(v8 + 44) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  __int64 v5; // x19
  int v6; // w20
  __int64 v7; // x0
  int v8; // w20
  __int64 v9; // x0

  if ( (byte_40FA8BD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_40FA8BD = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
  {
    if ( !v5 )
      goto LABEL_21;
    if ( *(int *)(v5 + 40) >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v5 + 24);
        if ( !v7 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 392LL))(v7, *(_QWORD *)(*(_QWORD *)v7 + 400LL));
        if ( ++v6 >= *(_DWORD *)(v5 + 40) )
          goto LABEL_16;
      }
LABEL_21:
      sub_B170D4();
    }
LABEL_16:
    if ( *(int *)(v5 + 44) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 32);
        if ( !v9 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 392LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 400LL));
        if ( ++v8 >= *(_DWORD *)(v5 + 44) )
          return;
      }
      goto LABEL_21;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x20
  __int64 v6; // x20
  __int64 v7; // x0

  if ( (byte_40FA8BF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_40FA8BF = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 44), !v7) )
    sub_B170D4();
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 424LL))(
           v7,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v7 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_c *klass; // x0

  if ( (byte_40FA8BE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_40FA8BE = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(v5);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    return max - 1;
  if ( !v6 || (klass = v6[1].klass, ++v6[1].fields.m_CachedPtr, !klass) )
    sub_B170D4();
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD))klass->_1.image + 53))(
           klass,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 54));
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x21
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_c *klass; // x0

  if ( (byte_40FA8C0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_40FA8C0 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return min;
  if ( !v8 || (klass = v8[1].klass, ++v8[1].fields.m_CachedPtr, !klass) )
    sub_B170D4();
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD, _QWORD))klass->_1.image + 51))(
           klass,
           (unsigned int)min,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 52));
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_18BA0D4 *method)
{
  Il2CppObject *v3; // x21
  Il2CppClass *_0_T; // x20
  __int64 v5; // x0
  int32_t v6; // w20
  __int64 v7; // x19
  __int64 v8; // x21
  __int64 Next; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x11
  int v13; // w9
  _DWORD *v14; // x11
  int v15; // t1
  __int64 v16; // x8
  System_Object_array *v18; // x0
  const MethodInfo_18BA1C8 *v19; // x1

  if ( !list )
    goto LABEL_14;
  v3 = System_Array__Clone((System_Array_o *)list, 0LL);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B170D4();
  v5 = sub_B170BC(v3, _0_T);
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
          || (v12 = v7 + 4LL * (int)Next,
              v15 = *(_DWORD *)(v12 + 32),
              v14 = (_DWORD *)(v12 + 32),
              v13 = v15,
              v8 - 8 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24))
          || (*v14 = *(_DWORD *)(v7 + 4 * v8), v8 - 8 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          sub_B17100(Next, v10, v11);
          sub_B170A0();
        }
        v16 = v8 - 7;
        *(_DWORD *)(v7 + 4 * v8--) = v13;
        --v6;
      }
      while ( v16 > 2 );
    }
    return (System_Int32_array *)v7;
  }
  else
  {
    v18 = (System_Object_array *)sub_B173C8(v3);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v18, v19);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_18BA1C8 *method)
{
  Il2CppObject *v3; // x21
  Il2CppClass *_0_T; // x20
  __int64 v5; // x0
  int32_t v6; // w20
  __int64 v7; // x19
  __int64 v8; // x23
  BattleServantConfConponent_o *v9; // x21
  BattleServantConfConponent_o *Next; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  System_Int32_array **v19; // x22
  System_Int32_array **v20; // t1
  System_Int32_array **klass; // x1
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantData_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo_18BA2E0 *v31; // x3

  if ( !list )
    goto LABEL_14;
  v3 = System_Array__Clone((System_Array_o *)list, 0LL);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B170D4();
  v5 = sub_B170BC(v3, _0_T);
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
          || (v18 = v7 + 8LL * (int)Next,
              v20 = *(System_Int32_array ***)(v18 + 32),
              Next = (BattleServantConfConponent_o *)(v18 + 32),
              v19 = v20,
              v8 - 2 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24))
          || (klass = (System_Int32_array **)v9->klass,
              Next->klass = v9->klass,
              sub_B16F98(Next, klass, v12, v13, v14, v15, v16, v17),
              v8 - 2 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          sub_B17100(Next, v11, v12);
          sub_B170A0();
        }
        v9->klass = (BattleServantConfConponent_c *)v19;
        sub_B16F98(v9, v19, v12, v22, v23, v24, v25, v26);
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
    v28 = (BattleServantData_o *)sub_B173C8(v3);
    return (System_Object_array *)BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(v28, v29, v30, v31);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Random_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Random_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FA8BC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&System_Random_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_40FA8BC = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v12 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v8, v9, v10, v11);
    System_Random___ctor_36288572(v12, seed, 0LL);
    if ( !v7 )
      sub_B170D4();
    v7[1].klass = (UnityEngine_Object_c *)v12;
    v19 = v7 + 1;
    sub_B16F98((BattleServantConfConponent_o *)v19, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    v24 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v20, v21, v22, v23);
    System_Random___ctor_36288572(v24, seed, 0LL);
    v19->monitor = v24;
    sub_B16F98((BattleServantConfConponent_o *)&v19->monitor, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    *(_QWORD *)&v19->fields.m_CachedPtr = 0LL;
  }
}