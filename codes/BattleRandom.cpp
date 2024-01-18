void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4188531 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_4188531 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4188530 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_4188530 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_B2C434(v6, v7);
  return *(_DWORD *)(v5 + 44);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_418852F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_418852F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_B2C434(v6, v7);
  return v5[1].fields.m_CachedPtr;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x21
  __int64 v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_418852E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_418852E = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_B2C434(v9, v10);
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
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w20
  int v9; // w20

  if ( (byte_418852A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v2);
    byte_418852A = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_21;
    if ( *(int *)(v5 + 40) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 24);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v8 >= *(_DWORD *)(v5 + 40) )
          goto LABEL_16;
      }
LABEL_21:
      sub_B2C434(v6, v7);
    }
LABEL_16:
    if ( *(int *)(v5 + 44) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 32);
        if ( !v6 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 392LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 400LL));
        if ( ++v9 >= *(_DWORD *)(v5 + 44) )
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
  __int64 v8; // x1

  if ( (byte_418852C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_418852C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(v5);
  v6 = **(_QWORD **)(v5 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
    return max - 1;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 32), ++*(_DWORD *)(v6 + 44), !v7) )
    sub_B2C434(v7, v8);
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
  __int64 v8; // x1

  if ( (byte_418852B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_418852B = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(v5);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return max - 1;
  if ( !v6 || (klass = v6[1].klass, ++v6[1].fields.m_CachedPtr, !klass) )
    sub_B2C434(klass, v8);
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
  __int64 v10; // x1

  if ( (byte_418852D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_418852D = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(v7);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return min;
  if ( !v8 || (klass = v8[1].klass, ++v8[1].fields.m_CachedPtr, !klass) )
    sub_B2C434(klass, v10);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD, _QWORD))klass->_1.image + 51))(
           klass,
           (unsigned int)min,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 52));
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_172A83C *method)
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
  const MethodInfo_172A930 *v18; // x1

  if ( !list )
    goto LABEL_14;
  list = (System_Int32_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Int32_array *)sub_AC505C(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B2C434(list, method);
  v5 = sub_B2C41C(v3, _0_T);
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
          v16 = sub_B2C460(Next);
          sub_B2C400(v16, 0LL);
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
    v17 = (System_Object_array *)sub_B2C728(v3);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_172A930 *method)
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
  const MethodInfo_172AA48 *v32; // x3

  if ( !list )
    goto LABEL_14;
  list = (System_Object_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Object_array *)sub_AC505C(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B2C434(list, method);
  v5 = sub_B2C41C(v3, _0_T);
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
              sub_B2C2F8(Next, klass, v11, v12, v13, v14, v15, v16),
              v8 - 2 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          v28 = sub_B2C460(Next);
          sub_B2C400(v28, 0LL);
        }
        v9->klass = (BattleServantConfConponent_c *)v18;
        sub_B2C2F8(v9, v18, v21, v22, v23, v24, v25, v26);
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
    v29 = (BattleServantData_o *)sub_B2C728(v3);
    return (System_Object_array *)BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(v29, v30, v31, v32);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  UnityEngine_Object_o *v7; // x20
  System_Random_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *v17; // x20
  System_Random_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4188529 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&System_Random_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4188529 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v8 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor_36634176(v8, seed, 0LL);
    if ( !v7 )
      sub_B2C434(v9, v10);
    v7[1].klass = (UnityEngine_Object_c *)v8;
    v17 = v7 + 1;
    sub_B2C2F8((BattleServantConfConponent_o *)v17, (System_Int32_array **)v8, v11, v12, v13, v14, v15, v16);
    v18 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor_36634176(v18, seed, 0LL);
    v17->monitor = v18;
    sub_B2C2F8((BattleServantConfConponent_o *)&v17->monitor, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
    *(_QWORD *)&v17->fields.m_CachedPtr = 0LL;
  }
}