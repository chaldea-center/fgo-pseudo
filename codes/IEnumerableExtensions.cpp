// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2F666E4 *method)
{
  __int64 v3; // x3
  __int64 v4; // x24
  __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  char **v15; // x21
  __int64 (__fastcall **v16)(System_Collections_Generic_IEnumerable_T__o *); // x1
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  unsigned int v21; // w19
  struct System_Random_o *random; // x8
  System_Random_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  int v32; // w19
  long double v33; // q0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v39; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // x0 OVERLAPPED
  void *v41; // x1
  __int64 v42; // x1
  __int64 v43; // x25
  int v44; // w23
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  long double v49; // q0
  __int64 v50; // x1
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  void *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x8
  char *v58; // x9
  __int64 *v59; // x1
  __int64 v60; // x0
  int v61; // w22
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // [xsp+0h] [xbp-40h] BYREF
  char *v67; // [xsp+8h] [xbp-38h]
  char *v68; // [xsp+10h] [xbp-30h]
  MethodInfo_2F666E4 *v69; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v71; // [xsp+28h] [xbp-18h] BYREF
  int v72; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v73; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v69 = (MethodInfo_2F666E4 *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v73 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, getWeightFunc, method);
    sub_1BCA7E0(&IEnumerableExtensions_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Random_TypeInfo, v12, v13);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C1C718(v4);
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v14 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v15 = (char **)((char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL));
  memset(v15, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v15, 0, v14);
  memset(v15, 0, v14);
  if ( !self )
  {
    v39 = (char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v39, 0, v14);
    goto LABEL_18;
  }
  v16 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v68 = (char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v16)(self) & 1) == 0 )
  {
    v39 = v68;
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(v4 + 56);
  v67 = (char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL);
  v21 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v17 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v23 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v18, v19, v20);
    System_Random___ctor(v23, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v23;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int64_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1BCAA3C(v30, v31);
  }
  v32 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v21,
          random->klass->vtable._7_Next.methodPtr);
  v34 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(v33);
  klass = self->klass;
  v36 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v34 )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(self, v34, 0LL);
  }
  v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v43 )
    sub_1BCAA3C(0LL, v42);
  v44 = 0;
  while ( 1 )
  {
    v45 = *(_QWORD *)v43;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_26;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_26:
      v48 = sub_1C1C7C0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v43, *(_QWORD *)(v48 + 8)) & 1) == 0 )
      break;
    v50 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
      v50 = sub_1C1C6BC(v49);
    v51 = *(_QWORD *)v43;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((_QWORD *)v53 - 1) != v50 )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_35;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_35:
      v54 = sub_1C1C7C0(v43, v50, 0LL);
    }
    v71 = (char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v54 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8LL),
      *(_QWORD *)(v54 + 8),
      v43,
      &v71,
      v15);
    memcpy(v15, v15, v14);
    v55 = memcpy(v15, v15, v14);
    if ( !getWeightFunc )
      sub_1BCAA3C(v55, v56);
    v57 = *(_QWORD *)(v4 + 56);
    v58 = (char *)&v66 - ((v14 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v57 + 8) + 40LL) & 0x80000000) == 0 )
      v58 = *v15;
    v59 = *(__int64 **)(v57 + 64);
    v60 = *v59;
    v71 = v58;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v59[2])(
      v60,
      v59,
      getWeightFunc,
      &v71,
      &v72);
    v44 += v72;
    if ( v32 < v44 )
    {
      memcpy(v15, v15, v14);
      v39 = v68;
      memcpy(v68, v15, v14);
      v61 = 7;
      goto LABEL_43;
    }
  }
  v61 = 8;
  v39 = v68;
LABEL_43:
  v62 = *(_QWORD *)v43;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_47;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_47:
    v65 = sub_1C1C7C0(v43, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v43, *(_QWORD *)(v65 + 8));
  if ( v61 != 7 )
  {
    v39 = v67;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v15, v39, v14);
  v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v69, v15, v14);
  result.monitor = v41;
  result.klass = v40;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2F662F0 *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  unsigned int v15; // w22
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
  int v26; // w22
  long double v27; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x19
  int v36; // w24
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  long double v41; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&System_IDisposable_TypeInfo, getWeightFunc, method),
        sub_1BCA7E0(&IEnumerableExtensions_TypeInfo, v6, v7),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9),
        sub_1BCA7E0(&System_Random_TypeInfo, v10, v11),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1C1C718(method);
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2F1E844 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v15 = System_Linq_Enumerable__Sum_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (System_Func_TSource__int__o *)getWeightFunc,
          (const MethodInfo_2F4A588 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v17 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v12, v13, v14);
    System_Random___ctor(v17, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v17;
    sub_1BCA784(
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
      sub_1BCAA3C(v24, v25);
  }
  v26 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v15,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v27);
  klass = self->klass;
  v30 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C1C7C0(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v35 )
    sub_1BCAA3C(0LL, v34);
  v36 = 0;
  while ( 1 )
  {
    v37 = *(_QWORD *)v35;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_23;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_23:
      v40 = sub_1C1C7C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v35, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v41);
    v43 = *(_QWORD *)v35;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((Il2CppClass **)v45 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_32;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_32:
      v46 = sub_1C1C7C0(v35, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v35, *(_QWORD *)(v46 + 8));
    if ( !getWeightFunc )
      sub_1BCAA3C(v47, v48);
    v33 = (Il2CppObject *)v47;
    v36 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v47,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v26 < v36 )
      goto LABEL_38;
  }
  v33 = 0LL;
LABEL_38:
  v49 = *(_QWORD *)v35;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_42;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_42:
    v52 = sub_1C1C7C0(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v35, *(_QWORD *)(v52 + 8));
  return v33;
}