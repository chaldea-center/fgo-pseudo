void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E961B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, (_DWORD)method, v2, v3);
    byte_42E961B = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x19
  __int64 v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E961A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5, v6);
    byte_42E961A = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(v8);
  v9 = **(_QWORD **)(v8 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( !v10 )
    return 0;
  if ( !v9 )
    sub_B5D69C(v10, v11);
  return *(_DWORD *)(v9 + 44);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x19
  UnityEngine_Object_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9619 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5, v6);
    byte_42E9619 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(v8);
  v9 = **(UnityEngine_Object_o ***)(v8 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( !v10 )
    return 0;
  if ( !v9 )
    sub_B5D69C(v10, v11);
  return v9[1].fields.m_CachedPtr;
}


void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E9618 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, guts, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6, v7, v8);
    byte_42E9618 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( v12 )
  {
    if ( !v11 )
      sub_B5D69C(v12, v13);
    *(_DWORD *)(v11 + 40) = logic;
    *(_DWORD *)(v11 + 44) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w20
  int v13; // w20

  if ( (byte_42E9614 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5, v6);
    byte_42E9614 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(v8);
  v9 = **(_QWORD **)(v8 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( (v10 & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_21;
    if ( *(int *)(v9 + 40) >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 24);
        if ( !v10 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 392LL))(v10, *(_QWORD *)(*(_QWORD *)v10 + 400LL));
        if ( ++v12 >= *(_DWORD *)(v9 + 40) )
          goto LABEL_16;
      }
LABEL_21:
      sub_B5D69C(v10, v11);
    }
LABEL_16:
    if ( *(int *)(v9 + 44) >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( !v10 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 392LL))(v10, *(_QWORD *)(*(_QWORD *)v10 + 400LL));
        if ( ++v13 >= *(_DWORD *)(v9 + 44) )
          return;
      }
      goto LABEL_21;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E9616 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5, v6, v7);
    byte_42E9616 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(v9);
  v10 = **(_QWORD **)(v9 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( (v11 & 1) == 0 )
    return max - 1;
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 32), ++*(_DWORD *)(v10 + 44), !v11) )
    sub_B5D69C(v11, v12);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 424LL))(
           v11,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v11 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x20
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v12; // x1

  if ( (byte_42E9615 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5, v6, v7);
    byte_42E9615 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(v9);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return max - 1;
  if ( !v10 || (klass = v10[1].klass, ++v10[1].fields.m_CachedPtr, !klass) )
    sub_B5D69C(klass, v12);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD))klass->_1.image + 53))(
           klass,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 54));
}


int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x21
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_c *klass; // x0
  __int64 v13; // x1

  if ( (byte_42E9617 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, max, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6, v7, v8);
    byte_42E9617 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(v10);
  v11 = **(UnityEngine_Object_o ***)(v10 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return min;
  if ( !v11 || (klass = v11[1].klass, ++v11[1].fields.m_CachedPtr, !klass) )
    sub_B5D69C(klass, v13);
  return (*((__int64 (__fastcall **)(UnityEngine_Object_c *, _QWORD, _QWORD, _QWORD))klass->_1.image + 51))(
           klass,
           (unsigned int)min,
           (unsigned int)max,
           *((_QWORD *)klass->_1.image + 52));
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_1ADAEE4 *method)
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
  const MethodInfo_1ADAFD8 *v18; // x1

  if ( !list )
    goto LABEL_14;
  list = (System_Int32_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Int32_array *)sub_AF52C4(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B5D69C(list, method);
  v5 = sub_B5D684(v3, _0_T);
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
          v16 = sub_B5D6C8(Next);
          sub_B5D668(v16, 0LL);
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
    v17 = (System_Object_array *)sub_B5D990(v3);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v17, v18);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_1ADAFD8 *method)
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
  const MethodInfo_1ADB0F0 *v32; // x3

  if ( !list )
    goto LABEL_14;
  list = (System_Object_array *)System_Array__Clone((System_Array_o *)list, 0LL);
  v3 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    list = (System_Object_array *)sub_AF52C4(method->rgctx_data->_0_T__);
  if ( !v3 )
LABEL_14:
    sub_B5D69C(list, method);
  v5 = sub_B5D684(v3, _0_T);
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
              sub_B5D560(Next, klass, v11, v12, v13, v14, v15, v16),
              v8 - 2 >= (unsigned __int64)*(unsigned int *)(v7 + 24)) )
        {
          v28 = sub_B5D6C8(Next);
          sub_B5D668(v28, 0LL);
        }
        v9->klass = (BattleServantConfConponent_c *)v18;
        sub_B5D560(v9, v18, v21, v22, v23, v24, v25, v26);
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
    v29 = (BattleServantData_o *)sub_B5D990(v3);
    return (System_Object_array *)BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(v29, v30, v31, v32);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  UnityEngine_Object_o *v13; // x20
  System_Random_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x20
  System_Random_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E9613 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Random_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v8, v9, v10);
    byte_42E9613 = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  v13 = **(UnityEngine_Object_o ***)(v12 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    v14 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor_37331700(v14, seed, 0LL);
    if ( !v13 )
      sub_B5D69C(v15, v16);
    v13[1].klass = (UnityEngine_Object_c *)v14;
    v23 = v13 + 1;
    sub_B5D560((BattleServantConfConponent_o *)v23, (System_Int32_array **)v14, v17, v18, v19, v20, v21, v22);
    v24 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor_37331700(v24, seed, 0LL);
    v23->monitor = v24;
    sub_B5D560((BattleServantConfConponent_o *)&v23->monitor, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    *(_QWORD *)&v23->fields.m_CachedPtr = 0LL;
  }
}