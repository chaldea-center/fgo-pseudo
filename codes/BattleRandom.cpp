void __fastcall BattleRandom___ctor(BattleRandom_o *this, const MethodInfo *method)
{
  if ( (byte_4B39887 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom___ctor__, method);
    byte_4B39887 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37FE060 *)Method_SingletonMonoBehaviour_BattleRandom___ctor__);
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

  if ( (byte_4B39886 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B39886 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C25334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C25334(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1BD36B4(v7, v8);
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

  if ( (byte_4B39885 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B39885 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C25334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C25334(v2);
  v6 = **(_QWORD **)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1BD36B4(v7, v8);
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

  if ( (byte_4B39884 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&guts);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6);
    byte_4B39884 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C25334(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C25334(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1BD36B4(v10, v11);
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

  if ( (byte_4B39880 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v1);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v3);
    byte_4B39880 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C25334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C25334(v2);
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
      sub_1BD36B4(v7, v8);
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

  if ( (byte_4B39882 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4B39882 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C25334(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C25334(v2);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( (v8 & 1) == 0 )
    return max - 1;
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 40), ++*(_DWORD *)(v7 + 52), !v8) )
    sub_1BD36B4(v8, v9);
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

  if ( (byte_4B39881 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v4);
    byte_4B39881 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C25334(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C25334(v2);
  v7 = **(_QWORD **)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( (v8 & 1) == 0 )
    return max - 1;
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 32), ++*(_DWORD *)(v7 + 48), !v8) )
    sub_1BD36B4(v8, v9);
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

  if ( (byte_4B39883 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v6);
    byte_4B39883 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C25334(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C25334(v3);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
    return min;
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 32), ++*(_DWORD *)(v9 + 48), !v10) )
    sub_1BD36B4(v10, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 408LL))(
           v10,
           (unsigned int)min,
           (unsigned int)max,
           *(_QWORD *)(*(_QWORD *)v10 + 416LL));
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleRandom__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2F22DF0 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2F22DF0_RGCTXs *rgctx_data; // x8
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
    sub_1C25390(method);
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
    v8 = (Il2CppClass *)sub_1C25334(v10);
    _0_T = v8;
  }
  v29 = StatusReg;
  if ( !v11 )
LABEL_23:
    sub_1BD36B4(v8, v9);
  v13 = sub_1BD3594(v11, _0_T);
  if ( !v13 )
    sub_1BD3974(v11);
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
        Next = sub_1C25334(v24);
      v25 = v30;
      if ( (unsigned int)v22 >= v15->max_length )
        goto LABEL_22;
      sub_1BD3400(Next, (char *)v15->m_Items + v15->obj.klass->_2.thread_static_fields_size * v22, v7);
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
        Next = sub_1C25334(v27);
        v26 = v15->max_length;
      }
      if ( (unsigned int)v14 >= v26 )
LABEL_22:
        sub_1BD36BC(Next, v19);
      sub_1BD3400(
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
        const MethodInfo_2F22BFC *method)
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
  const MethodInfo_2F22CE4 *v19; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Int32_array *)sub_1C25390(method);
  if ( !v3 )
    goto LABEL_15;
  list = (System_Int32_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Int32_array *)sub_1C25334(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_15:
    sub_1BD36B4(list, method);
  v7 = sub_1BD3594(v5, _0_T);
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
          sub_1BD36BC(Next, v12);
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
    sub_1BD3974(v5);
    return (System_Int32_array *)BattleRandom__getShuffle_object_(v18, v19);
  }
}


System_Object_array *__fastcall BattleRandom__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_2F22CE4 *method)
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
  const MethodInfo_2F22DF0 *v34; // x1

  v3 = (System_Array_o *)list;
  if ( !method->rgctx_data )
    list = (System_Object_array *)sub_1C25390(method);
  if ( !v3 )
    goto LABEL_16;
  list = (System_Object_array *)System_Array__Clone(v3, 0LL);
  v5 = list;
  _0_T = method->rgctx_data->_0_T__;
  if ( (_0_T[309] & 1) == 0 )
  {
    list = (System_Object_array *)sub_1C25334(v4);
    _0_T = list;
  }
  if ( !v5 )
LABEL_16:
    sub_1BD36B4(list, method);
  v7 = sub_1BD3594(v5, _0_T);
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
              sub_1BD33FC(Next, v25, v13, v14, v15, v16, v17, v18),
              (unsigned int)v8 >= v9->max_length) )
        {
LABEL_15:
          sub_1BD36BC(Next, v12);
        }
        v24->klass = (PartyOrganizationUtility_c *)v21;
        sub_1BD33FC(v24, v21, v26, v27, v28, v29, v30, v31);
        --v10;
      }
      while ( v10 > 2 );
    }
    return v9;
  }
  else
  {
    sub_1BD3974(v5);
    return (System_Object_array *)BattleRandom__getShuffle___Il2CppFullySharedGenericType_(v33, v34);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Random_o *v18; // x21
  PartyOrganizationUtility_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B3987F & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&System_Random_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleRandom__getInstance__, v5);
    byte_4B3987F = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_BattleRandom__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C25334(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C25334(v2);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    v9 = (System_Random_o *)sub_1BD36A4(System_Random_TypeInfo);
    System_Random___ctor_63406484(v9, seed, 0LL);
    if ( !v8 )
      sub_1BD36B4(v10, v11);
    *(_QWORD *)(v8 + 32) = v9;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)v9, v12, v13, v14, v15, v16, v17);
    v18 = (System_Random_o *)sub_1BD36A4(System_Random_TypeInfo);
    System_Random___ctor_63406484(v18, seed, 0LL);
    *(_QWORD *)(v8 + 40) = v18;
    v19 = (PartyOrganizationUtility_o *)(v8 + 40);
    sub_1BD33FC(v19, (int64_t)v18, v20, v21, v22, v23, v24, v25);
    v19->monitor = 0LL;
  }
}