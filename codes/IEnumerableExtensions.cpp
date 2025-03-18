// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3045C48 *method)
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // w19
  long double v27; // q0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v33; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v34; // x0 OVERLAPPED
  void *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x25
  int v38; // w23
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  long double v43; // q0
  __int64 v44; // x1
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  void *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x8
  char *v52; // x9
  __int64 *v53; // x1
  __int64 v54; // x0
  int v55; // w22
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // [xsp+0h] [xbp-40h] BYREF
  char *v61; // [xsp+8h] [xbp-38h]
  char *v62; // [xsp+10h] [xbp-30h]
  MethodInfo_3045C48 *v63; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v65; // [xsp+28h] [xbp-18h] BYREF
  int v66; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v67; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v63 = (MethodInfo_3045C48 *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v67 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C3B764(&System_IDisposable_TypeInfo, getWeightFunc);
    sub_1C3B764(&IEnumerableExtensions_TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&System_Random_TypeInfo, v10);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C8D69C();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v12 = (char **)((char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL));
  memset(v12, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v12, 0, v11);
  memset(v12, 0, v11);
  if ( !self )
  {
    v33 = (char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v33, 0, v11);
    goto LABEL_18;
  }
  v13 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v62 = (char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v13)(self) & 1) == 0 )
  {
    v33 = v62;
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(v4 + 56);
  v61 = (char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL);
  v15 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v14 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v17 = (System_Random_o *)sub_1C3B9B0(System_Random_TypeInfo);
    System_Random___ctor(v17, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v17;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int64_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C3B9C0(v24, v25);
  }
  v26 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v15,
          random->klass->vtable._7_Next.methodPtr);
  v28 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C8D640(v27);
  klass = self->klass;
  v30 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v28 )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C8D744(self, v28, 0LL);
  }
  v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v37 )
    sub_1C3B9C0(0LL, v36);
  v38 = 0;
  while ( 1 )
  {
    v39 = *(_QWORD *)v37;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_26;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_26:
      v42 = sub_1C8D744(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
      v44 = sub_1C8D640(v43);
    v45 = *(_QWORD *)v37;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((_QWORD *)v47 - 1) != v44 )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_35;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_35:
      v48 = sub_1C8D744(v37, v44, 0LL);
    }
    v65 = (char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v48 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v48 + 8) + 8LL),
      *(_QWORD *)(v48 + 8),
      v37,
      &v65,
      v12);
    memcpy(v12, v12, v11);
    v49 = memcpy(v12, v12, v11);
    if ( !getWeightFunc )
      sub_1C3B9C0(v49, v50);
    v51 = *(_QWORD *)(v4 + 56);
    v52 = (char *)&v60 - ((v11 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v51 + 8) + 40LL) & 0x80000000) == 0 )
      v52 = *v12;
    v53 = *(__int64 **)(v51 + 64);
    v54 = *v53;
    v65 = v52;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v53[2])(
      v54,
      v53,
      getWeightFunc,
      &v65,
      &v66);
    v38 += v66;
    if ( v26 < v38 )
    {
      memcpy(v12, v12, v11);
      v33 = v62;
      memcpy(v62, v12, v11);
      v55 = 7;
      goto LABEL_43;
    }
  }
  v55 = 8;
  v33 = v62;
LABEL_43:
  v56 = *(_QWORD *)v37;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_47;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_47:
    v59 = sub_1C8D744(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v37, *(_QWORD *)(v59 + 8));
  if ( v55 != 7 )
  {
    v33 = v61;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v12, v33, v11);
  v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v63, v12, v11);
  result.monitor = v35;
  result.klass = v34;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3045854 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int v9; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w22
  long double v21; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x19
  int v30; // w24
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  long double v35; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( method->rgctx_data
    || (sub_1C3B764(&System_IDisposable_TypeInfo, getWeightFunc),
        sub_1C3B764(&IEnumerableExtensions_TypeInfo, v6),
        sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7),
        sub_1C3B764(&System_Random_TypeInfo, v8),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1C8D69C();
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2FFBC00 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v9 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_3029848 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v11 = (System_Random_o *)sub_1C3B9B0(System_Random_TypeInfo);
    System_Random___ctor(v11, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v11;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int64_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C3B9C0(v18, v19);
  }
  v20 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v9,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8D640(v21);
  klass = self->klass;
  v24 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C8D744(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_1C3B9C0(0LL, v28);
  v30 = 0;
  while ( 1 )
  {
    v31 = *(_QWORD *)v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_23;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_23:
      v34 = sub_1C8D744(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8D640(v35);
    v37 = *(_QWORD *)v29;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((Il2CppClass **)v39 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_32;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_32:
      v40 = sub_1C8D744(v29, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v29, *(_QWORD *)(v40 + 8));
    if ( !getWeightFunc )
      sub_1C3B9C0(v41, v42);
    v27 = (Il2CppObject *)v41;
    v30 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v41,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v20 < v30 )
      goto LABEL_38;
  }
  v27 = 0LL;
LABEL_38:
  v43 = *(_QWORD *)v29;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_42;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_42:
    v46 = sub_1C8D744(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v29, *(_QWORD *)(v46 + 8));
  return v27;
}