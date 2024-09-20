// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2ED2ECC *method)
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  int v19; // w19
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v25; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x0 OVERLAPPED
  void *v27; // x1
  __int64 v28; // x1
  __int64 v29; // x25
  int v30; // w23
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  void *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  char *v43; // x9
  __int64 *v44; // x1
  __int64 v45; // x0
  int v46; // w22
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // [xsp+0h] [xbp-40h] BYREF
  char *v52; // [xsp+8h] [xbp-38h]
  char *v53; // [xsp+10h] [xbp-30h]
  MethodInfo_2ED2ECC *v54; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v56; // [xsp+28h] [xbp-18h] BYREF
  int v57; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v58; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v54 = (MethodInfo_2ED2ECC *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v58 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&IEnumerableExtensions_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1BDA4E8();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  if ( !self )
  {
    v25 = (char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v25, 0, v8);
    goto LABEL_18;
  }
  v10 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v53 = (char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v10)(self) & 1) == 0 )
  {
    v25 = v53;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)(v4 + 56);
  v52 = (char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v11 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v14 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
    System_Random___ctor(v14, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v14;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v14,
      v15,
      v16);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1B8880C(v17, v18);
  }
  v19 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v12,
          random->klass->vtable._7_Next.methodPtr);
  v20 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BDA48C(**(_QWORD **)(v4 + 56));
  klass = self->klass;
  v22 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v20 )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(self, v20, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_1B8880C(0LL, v28);
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
          goto LABEL_26;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_26:
      v34 = sub_1BDA590(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BDA48C(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL));
    v36 = *(_QWORD *)v29;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((_QWORD *)v38 - 1) != v35 )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_35;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_35:
      v39 = sub_1BDA590(v29, v35, 0LL);
    }
    v56 = (char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v39 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v39 + 8) + 8LL),
      *(_QWORD *)(v39 + 8),
      v29,
      &v56,
      v9);
    memcpy(v9, v9, v8);
    v40 = memcpy(v9, v9, v8);
    if ( !getWeightFunc )
      sub_1B8880C(v40, v41);
    v42 = *(_QWORD *)(v4 + 56);
    v43 = (char *)&v51 - ((v8 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v42 + 8) + 40LL) & 0x80000000) == 0 )
      v43 = *v9;
    v44 = *(__int64 **)(v42 + 64);
    v45 = *v44;
    v56 = v43;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v44[2])(
      v45,
      v44,
      getWeightFunc,
      &v56,
      &v57);
    v30 += v57;
    if ( v19 < v30 )
    {
      memcpy(v9, v9, v8);
      v25 = v53;
      memcpy(v53, v9, v8);
      v46 = 7;
      goto LABEL_43;
    }
  }
  v46 = 8;
  v25 = v53;
LABEL_43:
  v47 = *(_QWORD *)v29;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_47;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_47:
    v50 = sub_1BDA590(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v29, *(_QWORD *)(v50 + 8));
  if ( v46 != 7 )
  {
    v25 = v52;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v9, v25, v8);
  v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v54, v9, v8);
  result.monitor = v27;
  result.klass = v26;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2ED2AD8 *method)
{
  unsigned int v6; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w22
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x19
  int v22; // w24
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( method->rgctx_data
    || (sub_1B885B0(&System_IDisposable_TypeInfo),
        sub_1B885B0(&IEnumerableExtensions_TypeInfo),
        sub_1B885B0(&System_Collections_IEnumerator_TypeInfo),
        sub_1B885B0(&System_Random_TypeInfo),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1BDA4E8();
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2E8D2DC *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v6 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_2EB7264 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v8 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
    System_Random___ctor(v8, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v8;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v8,
      v9,
      v10);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1B8880C(v11, v12);
  }
  v13 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v6,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  v16 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1BDA590(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B8880C(0LL, v20);
  v22 = 0;
  while ( 1 )
  {
    v23 = *(_QWORD *)v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_);
    v28 = *(_QWORD *)v21;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((Il2CppClass **)v30 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1BDA590(v21, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v21, *(_QWORD *)(v31 + 8));
    if ( !getWeightFunc )
      sub_1B8880C(v32, v33);
    v19 = (Il2CppObject *)v32;
    v22 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v32,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v13 < v22 )
      goto LABEL_38;
  }
  v19 = 0LL;
LABEL_38:
  v34 = *(_QWORD *)v21;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_42;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_42:
    v37 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
  return v19;
}