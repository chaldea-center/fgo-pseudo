// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3155808 *method)
{
  __int64 v3; // x3
  __int64 v4; // x24
  __int64 v7; // x19
  size_t v8; // x20
  char **v9; // x21
  __int64 (__fastcall **v10)(System_Collections_Generic_IEnumerable_T__o *); // x1
  __int64 v11; // x8
  unsigned int v12; // w19
  struct System_Random_o *random; // x8
  System_Random_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  signed int v19; // w19
  long double v20; // q0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  char *v26; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // x0
  void *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x25
  signed int v31; // w23
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  long double v36; // q0
  __int64 v37; // x1
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  void *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x8
  char *v45; // x9
  __int64 *v46; // x1
  __int64 v47; // x0
  int v48; // w22
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // [xsp+0h] [xbp-40h] BYREF
  char *v54; // [xsp+8h] [xbp-38h]
  char *v55; // [xsp+10h] [xbp-30h]
  MethodInfo_3155808 *v56; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v58; // [xsp+28h] [xbp-18h] BYREF
  int v59; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v60; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v56 = (MethodInfo_3155808 *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v60 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&IEnumerableExtensions_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C8ECD4();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  if ( !self )
  {
    v26 = (char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v26, 0, v8);
    goto LABEL_18;
  }
  v10 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v55 = (char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v10)(self) & 1) == 0 )
  {
    v26 = v55;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)(v4 + 56);
  v54 = (char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v11 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v14 = (System_Random_o *)sub_1C3E7B0(System_Random_TypeInfo);
    System_Random___ctor(v14, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v14;
    sub_1C3E508((CGThumbnailListItem_o *)IEnumerableExtensions_TypeInfo->static_fields, (int32_t)v14, v15, v16);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C3E7C0(v17, v18);
  }
  v19 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v12,
                        random->klass->vtable._6_Next.method);
  v21 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8EC78(v20);
  klass = self->klass;
  v23 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v21 )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v25 = sub_1C8ED7C(self, v21, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v25)(
          self,
          *(_QWORD *)(v25 + 8));
  if ( !v30 )
    sub_1C3E7C0(0, v29);
  v31 = 0;
  while ( 1 )
  {
    v32 = *(_QWORD *)v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_26;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_26:
      v35 = sub_1C8ED7C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v30, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C8EC78(v36);
    v38 = *(_QWORD *)v30;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((_QWORD *)v40 - 1) != v37 )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_35;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_35:
      v41 = sub_1C8ED7C(v30, v37, 0);
    }
    v58 = (char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v41 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8LL),
      *(_QWORD *)(v41 + 8),
      v30,
      &v58,
      v9);
    memcpy(v9, v9, v8);
    v42 = memcpy(v9, v9, v8);
    if ( !getWeightFunc )
      sub_1C3E7C0(v42, v43);
    v44 = *(_QWORD *)(v4 + 56);
    v45 = (char *)&v53 - ((v8 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v44 + 8) + 40LL) & 0x80000000) == 0 )
      v45 = *v9;
    v46 = *(__int64 **)(v44 + 64);
    v47 = *v46;
    v58 = v45;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v46[2])(
      v47,
      v46,
      getWeightFunc,
      &v58,
      &v59);
    v31 += v59;
    if ( v19 < v31 )
    {
      memcpy(v9, v9, v8);
      v26 = v55;
      memcpy(v55, v9, v8);
      v48 = 7;
      goto LABEL_43;
    }
  }
  v48 = 8;
  v26 = v55;
LABEL_43:
  v49 = *(_QWORD *)v30;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_47;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_47:
    v52 = sub_1C8ED7C(v30, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v30, *(_QWORD *)(v52 + 8));
  if ( v48 != 7 )
  {
    v26 = v54;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v9, v26, v8);
  v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v56, v9, v8);
  result.monitor = v28;
  result.klass = v27;
  return result;
}


Il2CppObject *IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3155414 *method)
{
  unsigned int v6; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  signed int v13; // w22
  long double v14; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  Il2CppObject *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x19
  signed int v23; // w24
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  long double v28; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( method->rgctx_data
    || (sub_1C3E564(&System_IDisposable_TypeInfo),
        sub_1C3E564(&IEnumerableExtensions_TypeInfo),
        sub_1C3E564(&System_Collections_IEnumerator_TypeInfo),
        sub_1C3E564(&System_Random_TypeInfo),
        method->rgctx_data) )
  {
    if ( !self )
      return 0;
  }
  else
  {
    sub_1C8ECD4();
    if ( !self )
      return 0;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_31055E8 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0;
  v6 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_31378A0 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v8 = (System_Random_o *)sub_1C3E7B0(System_Random_TypeInfo);
    System_Random___ctor(v8, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v8;
    sub_1C3E508((CGThumbnailListItem_o *)IEnumerableExtensions_TypeInfo->static_fields, (int32_t)v8, v9, v10);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C3E7C0(v11, v12);
  }
  v13 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v6,
                        random->klass->vtable._6_Next.method);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8EC78(v14);
  klass = self->klass;
  v17 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_13;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v19 = sub_1C8ED7C(self, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v19)(
          self,
          *(_QWORD *)(v19 + 8));
  if ( !v22 )
    sub_1C3E7C0(0, v21);
  v23 = 0;
  while ( 1 )
  {
    v24 = *(_QWORD *)v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_23;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_23:
      v27 = sub_1C8ED7C(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v22, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_6_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8EC78(v28);
    v30 = *(_QWORD *)v22;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((Il2CppClass **)v32 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1C8ED7C(v22, _6_System_Collections_Generic_IEnumerator_T, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v22, *(_QWORD *)(v33 + 8));
    if ( !getWeightFunc )
      sub_1C3E7C0(v34, v35);
    v20 = (Il2CppObject *)v34;
    v23 += ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getWeightFunc->fields.invoke_impl)(
             getWeightFunc->fields.method_code,
             v34,
             getWeightFunc->fields.method);
    if ( v13 < v23 )
      goto LABEL_38;
  }
  v20 = 0;
LABEL_38:
  v36 = *(_QWORD *)v22;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_42;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_42:
    v39 = sub_1C8ED7C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v22, *(_QWORD *)(v39 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__GetMaxValueOwner___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_31560D0 *method)
{
  __int64 v3; // x3
  __int64 v4; // x24
  _QWORD *v7; // x19
  size_t v8; // x20
  char **v9; // x21
  long double v10; // q0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  signed int v18; // w22
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  long double v23; // q0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  void *v29; // x0
  __int64 v30; // x1
  _QWORD *v31; // x8
  char *v32; // x9
  __int64 *v33; // x1
  __int64 v34; // x0
  signed int v35; // w28
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // x0
  void *v41; // x1
  MethodInfo_31560D0 *v42; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  char **v44; // [xsp+10h] [xbp-20h]
  char *v45; // [xsp+18h] [xbp-18h] BYREF
  signed int v46; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v47; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v42 = (MethodInfo_31560D0 *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v47 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD **)(v3 + 56);
  if ( !v7 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    v7 = *(_QWORD **)(v4 + 56);
    if ( !v7 )
    {
      sub_1C8ECD4();
      v7 = *(_QWORD **)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*v7 + 252LL);
  v9 = (char **)((char *)&v42 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  v44 = v9;
  memset(v9, 0, v8);
  if ( self )
  {
    v11 = v7[1];
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8EC78(v10);
    klass = self->klass;
    v13 = *(unsigned __int16 *)&self->klass->_2.rank;
    if ( *(_WORD *)&self->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != v11 )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v15 = sub_1C8ED7C(self, v11, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v15)(
            self,
            *(_QWORD *)(v15 + 8));
    if ( !v17 )
      sub_1C3E7C0(0, v16);
    v18 = 0x80000000;
    while ( 1 )
    {
      v19 = *(_QWORD *)v17;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_19;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_19:
        v22 = sub_1C8ED7C(v17, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v24 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C8EC78(v23);
      v25 = *(_QWORD *)v17;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((_QWORD *)v27 - 1) != v24 )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_28;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_1C8ED7C(v17, v24, 0);
      }
      v45 = (char *)&v42 - ((v8 + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v28 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL),
        *(_QWORD *)(v28 + 8),
        v17,
        &v45,
        v9);
      memcpy(v9, v9, v8);
      v29 = memcpy(v9, v9, v8);
      if ( !getValueFunc )
        sub_1C3E7C0(v29, v30);
      v31 = *(_QWORD **)(v4 + 56);
      v32 = (char *)&v42 - ((v8 + 15) & 0x1FFFFFFF0LL);
      if ( (*(_DWORD *)(*v31 + 40LL) & 0x80000000) == 0 )
        v32 = *v9;
      v33 = (__int64 *)v31[6];
      v34 = *v33;
      v45 = v32;
      ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, signed int *))v33[2])(
        v34,
        v33,
        getValueFunc,
        &v45,
        &v46);
      v35 = v46;
      if ( v46 > v18 )
      {
        memcpy(v9, v9, v8);
        memcpy(v44, v9, v8);
        v18 = v35;
      }
    }
    v36 = *(_QWORD *)v17;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_39;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_39:
      v39 = sub_1C8ED7C(v17, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v17, *(_QWORD *)(v39 + 8));
  }
  memcpy(v9, v44, v8);
  v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v42, v9, v8);
  result.monitor = v41;
  result.klass = v40;
  return result;
}


Il2CppObject *IEnumerableExtensions__GetMaxValueOwner_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_3155DA0 *method)
{
  long double v3; // q0
  Il2CppClass *_1_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  Il2CppObject *v14; // x20
  signed int v15; // w24
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  long double v20; // q0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x23
  signed int v29; // w0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( !method->rgctx_data )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
    {
      sub_1C8ECD4();
      if ( self )
        goto LABEL_4;
      return 0;
    }
  }
  if ( !self )
    return 0;
LABEL_4:
  _1_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_1_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C8EC78(v3);
  klass = self->klass;
  v9 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _1_System_Collections_Generic_IEnumerable_T )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C8ED7C(self, _1_System_Collections_Generic_IEnumerable_T, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          self,
          *(_QWORD *)(v11 + 8));
  if ( !v13 )
    sub_1C3E7C0(0, v12);
  v14 = 0;
  v15 = 0x80000000;
  while ( 1 )
  {
    v16 = *(_QWORD *)v13;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_18:
      v19 = sub_1C8ED7C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v13, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_3_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _3_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C8EC78(v20);
    v22 = *(_QWORD *)v13;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((Il2CppClass **)v24 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_27;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_27:
      v25 = sub_1C8ED7C(v13, _3_System_Collections_Generic_IEnumerator_T, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v13, *(_QWORD *)(v25 + 8));
    if ( !getValueFunc )
      sub_1C3E7C0(v26, v27);
    v28 = (Il2CppObject *)v26;
    v29 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getValueFunc->fields.invoke_impl)(
            getValueFunc->fields.method_code,
            v26,
            getValueFunc->fields.method);
    if ( v29 > v15 )
    {
      v14 = v28;
      v15 = v29;
    }
  }
  v30 = *(_QWORD *)v13;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_37;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_37:
    v33 = sub_1C8ED7C(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v13, *(_QWORD *)(v33 + 8));
  return v14;
}