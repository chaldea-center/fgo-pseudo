void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B188AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method, v2);
    byte_4B188AD = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
}


int32_t __fastcall BattleRandom__GetGutsCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B188AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5);
    byte_4B188AC = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  return *(_DWORD *)(v8 + 52);
}


int32_t __fastcall BattleRandom__GetLogicCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B188AB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5);
    byte_4B188AB = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  return *(_DWORD *)(v8 + 48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRandom__SetCount(int32_t logic, int32_t guts, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B188AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6, v7);
    byte_4B188AA = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = **(_QWORD **)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( v11 )
  {
    if ( !v10 )
      sub_1BCAA3C(v11, v12);
    *(_DWORD *)(v10 + 48) = logic;
    *(_DWORD *)(v10 + 52) = guts;
  }
}


void __fastcall BattleRandom__adjustment(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // w20
  int v12; // w20

  if ( (byte_4B188A6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4, v5);
    byte_4B188A6 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( (v9 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_20;
    if ( *(int *)(v8 + 48) >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 32);
        if ( !v9 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 392LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 400LL));
        if ( ++v11 >= *(_DWORD *)(v8 + 48) )
          goto LABEL_15;
      }
LABEL_20:
      sub_1BCAA3C(v9, v10);
    }
LABEL_15:
    if ( *(int *)(v8 + 52) >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 40);
        if ( !v9 )
          break;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 392LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 400LL));
        if ( ++v12 >= *(_DWORD *)(v8 + 52) )
          return;
      }
      goto LABEL_20;
    }
  }
}


int32_t __fastcall BattleRandom__getGutsNext(int32_t max, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B188A8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5, v6);
    byte_4B188A8 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
    return max - 1;
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 40), ++*(_DWORD *)(v9 + 52), !v10) )
    sub_1BCAA3C(v10, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 424LL))(
           v10,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v10 + 432LL));
}


int32_t __fastcall BattleRandom__getNext(int32_t max, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B188A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5, v6);
    byte_4B188A7 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
    return max - 1;
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 32), ++*(_DWORD *)(v9 + 48), !v10) )
    sub_1BCAA3C(v10, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 424LL))(
           v10,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v10 + 432LL));
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleRandom__getRandom(int32_t min, int32_t max, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B188A9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6, v7);
    byte_4B188A9 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = **(_QWORD **)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( (v11 & 1) == 0 )
    return min;
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 32), ++*(_DWORD *)(v10 + 48), !v11) )
    sub_1BCAA3C(v11, v12);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 408LL))(
           v11,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v11 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2F043FC *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2F043FC_RGCTXs *rgctx_data; // x8
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
  unsigned int max_length; // w28
  char *v21; // x22
  __int64 v22; // x19
  __int64 thread_static_fields_size; // x21
  long double v24; // q0
  void *v25; // x23
  unsigned int v26; // w19
  long double v27; // q0
  unsigned __int64 v29; // [xsp+0h] [xbp-30h] BYREF
  char *v30; // [xsp+8h] [xbp-28h]
  char *v31; // [xsp+10h] [xbp-20h]
  __int64 v32; // [xsp+18h] [xbp-18h]
  void *v33; // [xsp+20h] [xbp-10h]
  __int64 v34; // [xsp+28h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v34 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v31 = (char *)&v29 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v31;
  v33 = v31;
  v8 = (Il2CppClass *)memset(v31, 0, native_size);
  if ( !list )
    goto LABEL_23;
  v8 = (Il2CppClass *)System_Array__Clone((System_Array_o *)list, 0LL);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppClass *)sub_1C1C6BC(v10);
    _0_T = v8;
  }
  v29 = StatusReg;
  if ( !v11 )
LABEL_23:
    sub_1BCAA3C(v8, v9);
  v13 = sub_1BCA91C(v11, _0_T);
  if ( !v13 )
    sub_1BCACFC(v11);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)v14 >= 2 )
  {
    v16 = (unsigned int)*(_QWORD *)(v13 + 24) + 1LL;
    v30 = (char *)&v29 - ((native_size + 15) & 0x1FFFFFFF0LL);
    do
    {
      v32 = v16;
      v17 = v7;
      Next = BattleRandom__getNext(v14, 0LL);
      max_length = v15->max_length;
      if ( (unsigned int)Next >= max_length )
        goto LABEL_22;
      v21 = v31;
      v22 = (int)Next;
      thread_static_fields_size = v15->obj.klass->_2.thread_static_fields_size;
      LODWORD(v14) = v14 - 1;
      memcpy(v31, (char *)v15->m_Items + thread_static_fields_size * (int)Next, native_size);
      Next = (__int64)memcpy(v33, v21, native_size);
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_22;
      v7 = v17;
      Next = (__int64)memcpy(v17, (char *)v15->m_Items + thread_static_fields_size * (unsigned int)v14, native_size);
      if ( (unsigned int)v22 >= v15->max_length )
        goto LABEL_22;
      memcpy((char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * v22, v17, native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
        Next = sub_1C1C6BC(v24);
      v25 = v30;
      if ( (unsigned int)v22 >= v15->max_length )
        goto LABEL_22;
      sub_1BCA788(Next, (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * v22, v7);
      Next = (__int64)memcpy(v25, v33, native_size);
      v26 = v15->max_length;
      if ( (unsigned int)v14 >= v26 )
        goto LABEL_22;
      memcpy(
        (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v14,
        v25,
        native_size);
      Next = (__int64)method->rgctx_data->_1_T;
      if ( (*(_BYTE *)(Next + 309) & 1) == 0 )
      {
        Next = sub_1C1C6BC(v27);
        v26 = v15->max_length;
      }
      if ( (unsigned int)v14 >= v26 )
LABEL_22:
        sub_1BCAA44(Next, v19);
      sub_1BCA788(
        Next,
        (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)v14,
        v25);
      v16 = v32 - 1;
    }
    while ( v32 - 1 > 2 );
  }
  return v15;
}


System_Int32_array *__fastcall BattleRandom__getShuffle_int_(
        System_Int32_array *list,
        const MethodInfo_2F04208 *method)
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
  unsigned int max_length; // w8
  char *v14; // x8
  char *v15; // x9
  int v16; // t1
  System_Object_array *v18; // x0
  const MethodInfo_2F042F0 *v19; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C1C718(method, method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C1C6BC(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1BCAA3C(list, method);
  v7 = sub_1BCA91C(v5, _0_T);
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
          sub_1BCAA44(Next, v12);
        v14 = (char *)v9 + 4 * (int)Next;
        v15 = (char *)v9 + 4 * (unsigned int)v8;
        v16 = *((_DWORD *)v14 + 8);
        --v10;
        *((_DWORD *)v14 + 8) = *((_DWORD *)v15 + 8);
        *((_DWORD *)v15 + 8) = v16;
      }
      while ( v10 > 2 );
    }
    return v9;
  }
  else
  {
    sub_1BCACFC(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v18, v19);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_2F042F0 *method)
{
  System_Array_o *v3; // x20
  long double v4; // q0
  System_Object_array *v5; // x21
  _BYTE *_0_T; // x20
  __int64 v7; // x0
  __int64 v8; // x20
  System_Object_array *v9; // x19
  __int64 v10; // x23
  PartyOrganizationUtility_o *Next; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  unsigned int max_length; // w8
  Il2CppClass **v20; // x0
  int64_t v21; // x21
  int64_t v22; // t1
  Il2CppClass **v23; // x22
  PartyOrganizationUtility_o *v24; // x22
  int64_t v25; // t1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v33; // x0
  const MethodInfo_2F043FC *v34; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C1C718(method, method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C1C6BC(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1BCAA3C(list, method);
  v7 = sub_1BCA91C(v5, _0_T);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v9 = (System_Object_array *)v7;
    if ( (int)v8 >= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(v7 + 24) + 1LL;
      do
      {
        Next = (PartyOrganizationUtility_o *)BattleRandom__getNext(v8, 0LL);
        max_length = v9->max_length;
        if ( (unsigned int)Next >= max_length )
          goto LABEL_15;
        v20 = &v9->obj.klass + (int)Next;
        v22 = (int64_t)v20[4];
        Next = (PartyOrganizationUtility_o *)(v20 + 4);
        v21 = v22;
        LODWORD(v8) = v8 - 1;
        if ( (unsigned int)v8 >= max_length
          || (v23 = &v9->obj.klass + (unsigned int)v8,
              v25 = (int64_t)v23[4],
              v24 = (PartyOrganizationUtility_o *)(v23 + 4),
              Next->klass = (PartyOrganizationUtility_c *)v25,
              sub_1BCA784(Next, v25, v13, v14, v15, v16, v17, v18),
              (unsigned int)v8 >= v9->max_length) )
        {
LABEL_15:
          sub_1BCAA44(Next, v12);
        }
        v24->klass = (PartyOrganizationUtility_c *)v21;
        sub_1BCA784(v24, v21, v26, v27, v28, v29, v30, v31);
        --v10;
      }
      while ( v10 > 2 );
    }
    return v9;
  }
  else
  {
    sub_1BCACFC(v5);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v33, v34);
  }
}


void __fastcall BattleRandom__setSeed(int32_t seed, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Random_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Random_o *v27; // x21
  PartyOrganizationUtility_o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B188A5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Random_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v7, v8);
    byte_4B188A5 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    v15 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v12, v13, v14);
    System_Random___ctor_63282456(v15, seed, 0LL);
    if ( !v11 )
      sub_1BCAA3C(v16, v17);
    *(_QWORD *)(v11 + 32) = v15;
    sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v15, v18, v19, v20, v21, v22, v23);
    v27 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v24, v25, v26);
    System_Random___ctor_63282456(v27, seed, 0LL);
    *(_QWORD *)(v11 + 40) = v27;
    v28 = (PartyOrganizationUtility_o *)(v11 + 40);
    sub_1BCA784(v28, (int64_t)v27, v29, v30, v31, v32, v33, v34);
    v28->monitor = 0LL;
  }
}