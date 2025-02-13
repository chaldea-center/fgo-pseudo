// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3004764 *method)
{
  __int64 v3; // x3
  __int64 v4; // x24
  __int64 v7; // x19
  __int64 v8; // x20
  char **v9; // x21
  __int64 (__fastcall **v10)(System_Collections_Generic_IEnumerable_T__o *); // x1
  __int64 v11; // x8
  unsigned int v12; // w19
  struct System_Random_o *random; // x8
  System_Random_o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  int v23; // w19
  long double v24; // q0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v30; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // x0 OVERLAPPED
  void *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x25
  int v35; // w23
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  long double v40; // q0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  void *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  char *v49; // x9
  __int64 *v50; // x1
  __int64 v51; // x0
  int v52; // w22
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // [xsp+0h] [xbp-40h] BYREF
  char *v58; // [xsp+8h] [xbp-38h]
  char *v59; // [xsp+10h] [xbp-30h]
  MethodInfo_3004764 *v60; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v62; // [xsp+28h] [xbp-18h] BYREF
  int v63; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v64; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v60 = (MethodInfo_3004764 *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v64 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&IEnumerableExtensions_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C73D70();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  if ( !self )
  {
    v30 = (char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v30, 0, v8);
    goto LABEL_18;
  }
  v10 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v59 = (char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v10)(self) & 1) == 0 )
  {
    v30 = v59;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)(v4 + 56);
  v58 = (char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v11 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v14 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v14, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v14;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int64_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C22094(v21, v22);
  }
  v23 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v12,
          random->klass->vtable._7_Next.methodPtr);
  v25 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C73D14(v24);
  klass = self->klass;
  v27 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v25 )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C73E18(self, v25, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_1C22094(0LL, v33);
  v35 = 0;
  while ( 1 )
  {
    v36 = *(_QWORD *)v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_26;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_26:
      v39 = sub_1C73E18(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v34, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C73D14(v40);
    v42 = *(_QWORD *)v34;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((_QWORD *)v44 - 1) != v41 )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_35;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_35:
      v45 = sub_1C73E18(v34, v41, 0LL);
    }
    v62 = (char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v45 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v45 + 8) + 8LL),
      *(_QWORD *)(v45 + 8),
      v34,
      &v62,
      v9);
    memcpy(v9, v9, v8);
    v46 = memcpy(v9, v9, v8);
    if ( !getWeightFunc )
      sub_1C22094(v46, v47);
    v48 = *(_QWORD *)(v4 + 56);
    v49 = (char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v48 + 8) + 40LL) & 0x80000000) == 0 )
      v49 = *v9;
    v50 = *(__int64 **)(v48 + 64);
    v51 = *v50;
    v62 = v49;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v50[2])(
      v51,
      v50,
      getWeightFunc,
      &v62,
      &v63);
    v35 += v63;
    if ( v23 < v35 )
    {
      memcpy(v9, v9, v8);
      v30 = v59;
      memcpy(v59, v9, v8);
      v52 = 7;
      goto LABEL_43;
    }
  }
  v52 = 8;
  v30 = v59;
LABEL_43:
  v53 = *(_QWORD *)v34;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_47;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_47:
    v56 = sub_1C73E18(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v34, *(_QWORD *)(v56 + 8));
  if ( v52 != 7 )
  {
    v30 = v58;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v9, v30, v8);
  v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v60, v9, v8);
  result.monitor = v32;
  result.klass = v31;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3004370 *method)
{
  unsigned int v6; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  int v17; // w22
  long double v18; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x19
  int v27; // w24
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  long double v32; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( method->rgctx_data
    || (sub_1C21E38(&System_IDisposable_TypeInfo),
        sub_1C21E38(&IEnumerableExtensions_TypeInfo),
        sub_1C21E38(&System_Collections_IEnumerator_TypeInfo),
        sub_1C21E38(&System_Random_TypeInfo),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1C73D70();
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2FBB2A4 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v6 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_2FE8364 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v8 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v8, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v8;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int64_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C22094(v15, v16);
  }
  v17 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v6,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C73D14(v18);
  klass = self->klass;
  v21 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C73E18(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_1C22094(0LL, v25);
  v27 = 0;
  while ( 1 )
  {
    v28 = *(_QWORD *)v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_1C73E18(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v26, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C73D14(v32);
    v34 = *(_QWORD *)v26;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((Il2CppClass **)v36 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_32;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_32:
      v37 = sub_1C73E18(v26, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v26, *(_QWORD *)(v37 + 8));
    if ( !getWeightFunc )
      sub_1C22094(v38, v39);
    v24 = (Il2CppObject *)v38;
    v27 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v38,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v17 < v27 )
      goto LABEL_38;
  }
  v24 = 0LL;
LABEL_38:
  v40 = *(_QWORD *)v26;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_42;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_42:
    v43 = sub_1C73E18(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
  return v24;
}