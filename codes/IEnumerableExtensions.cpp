// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2EAE9AC *method)
{
  __int64 v3; // x3
  __int64 v4; // x24
  __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  char **v12; // x21
  __int64 (__fastcall **v13)(System_Collections_Generic_IEnumerable_T__o *); // x1
  __int64 v14; // x8
  unsigned int v15; // w19
  struct System_Random_o *random; // x8
  System_Random_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w19
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v28; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // x0 OVERLAPPED
  void *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x25
  int v33; // w23
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  void *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x8
  char *v46; // x9
  __int64 *v47; // x1
  __int64 v48; // x0
  int v49; // w22
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // [xsp+0h] [xbp-40h] BYREF
  char *v55; // [xsp+8h] [xbp-38h]
  char *v56; // [xsp+10h] [xbp-30h]
  MethodInfo_2EAE9AC *v57; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v59; // [xsp+28h] [xbp-18h] BYREF
  int v60; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v61; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v57 = (MethodInfo_2EAE9AC *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v61 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1B715CC(&System_IDisposable_TypeInfo, getWeightFunc);
    sub_1B715CC(&IEnumerableExtensions_TypeInfo, v8);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B715CC(&System_Random_TypeInfo, v10);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1BC3504();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v12 = (char **)((char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL));
  memset(v12, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v12, 0, v11);
  memset(v12, 0, v11);
  if ( !self )
  {
    v28 = (char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v28, 0, v11);
    goto LABEL_18;
  }
  v13 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v56 = (char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v13)(self) & 1) == 0 )
  {
    v28 = v56;
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(v4 + 56);
  v55 = (char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL);
  v15 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v14 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v17 = (System_Random_o *)sub_1B71818(System_Random_TypeInfo);
    System_Random___ctor(v17, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v17;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v17,
      v18,
      v19);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1B71828(v20, v21);
  }
  v22 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v15,
          random->klass->vtable._7_Next.methodPtr);
  v23 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BC34A8(**(_QWORD **)(v4 + 56));
  klass = self->klass;
  v25 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v23 )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BC35AC(self, v23, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_1B71828(0LL, v31);
  v33 = 0;
  while ( 1 )
  {
    v34 = *(_QWORD *)v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_26;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_26:
      v37 = sub_1BC35AC(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1BC34A8(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL));
    v39 = *(_QWORD *)v32;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((_QWORD *)v41 - 1) != v38 )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_35;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_35:
      v42 = sub_1BC35AC(v32, v38, 0LL);
    }
    v59 = (char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v42 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL),
      *(_QWORD *)(v42 + 8),
      v32,
      &v59,
      v12);
    memcpy(v12, v12, v11);
    v43 = memcpy(v12, v12, v11);
    if ( !getWeightFunc )
      sub_1B71828(v43, v44);
    v45 = *(_QWORD *)(v4 + 56);
    v46 = (char *)&v54 - ((v11 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v45 + 8) + 40LL) & 0x80000000) == 0 )
      v46 = *v12;
    v47 = *(__int64 **)(v45 + 64);
    v48 = *v47;
    v59 = v46;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v47[2])(
      v48,
      v47,
      getWeightFunc,
      &v59,
      &v60);
    v33 += v60;
    if ( v22 < v33 )
    {
      memcpy(v12, v12, v11);
      v28 = v56;
      memcpy(v56, v12, v11);
      v49 = 7;
      goto LABEL_43;
    }
  }
  v49 = 8;
  v28 = v56;
LABEL_43:
  v50 = *(_QWORD *)v32;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_47;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_47:
    v53 = sub_1BC35AC(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v32, *(_QWORD *)(v53 + 8));
  if ( v49 != 7 )
  {
    v28 = v55;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v12, v28, v11);
  v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v57, v12, v11);
  result.monitor = v30;
  result.klass = v29;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2EAE5B8 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int v9; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // w22
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x19
  int v25; // w24
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( method->rgctx_data
    || (sub_1B715CC(&System_IDisposable_TypeInfo, getWeightFunc),
        sub_1B715CC(&IEnumerableExtensions_TypeInfo, v6),
        sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v7),
        sub_1B715CC(&System_Random_TypeInfo, v8),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1BC3504();
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2E68DBC *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v9 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_2E92A04 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v11 = (System_Random_o *)sub_1B71818(System_Random_TypeInfo);
    System_Random___ctor(v11, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v11;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v11,
      v12,
      v13);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1B71828(v14, v15);
  }
  v16 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v9,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BC34A8(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  v19 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1BC35AC(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_1B71828(0LL, v23);
  v25 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_23;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_23:
      v29 = sub_1BC35AC(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v24, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BC34A8(method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_);
    v31 = *(_QWORD *)v24;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((Il2CppClass **)v33 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_32;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_32:
      v34 = sub_1BC35AC(v24, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v24, *(_QWORD *)(v34 + 8));
    if ( !getWeightFunc )
      sub_1B71828(v35, v36);
    v22 = (Il2CppObject *)v35;
    v25 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v35,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v16 < v25 )
      goto LABEL_38;
  }
  v22 = 0LL;
LABEL_38:
  v37 = *(_QWORD *)v24;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_42;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_42:
    v40 = sub_1BC35AC(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
  return v22;
}