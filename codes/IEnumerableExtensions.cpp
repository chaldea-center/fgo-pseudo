// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_31390AC *method)
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
  signed int v18; // w19
  long double v19; // q0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  char *v25; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x0
  void *v27; // x1
  __int64 v28; // x25
  signed int v29; // w23
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  long double v34; // q0
  __int64 v35; // x1
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  void *v40; // x0
  __int64 v41; // x8
  char *v42; // x9
  __int64 *v43; // x1
  __int64 v44; // x0
  int v45; // w22
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // [xsp+0h] [xbp-40h] BYREF
  char *v51; // [xsp+8h] [xbp-38h]
  char *v52; // [xsp+10h] [xbp-30h]
  MethodInfo_31390AC *v53; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v55; // [xsp+28h] [xbp-18h] BYREF
  int v56; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v57; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v53 = (MethodInfo_31390AC *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v57 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&IEnumerableExtensions_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C83390();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  if ( !self )
  {
    v25 = (char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v25, 0, v8);
    goto LABEL_18;
  }
  v10 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v52 = (char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v10)(self) & 1) == 0 )
  {
    v25 = v52;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)(v4 + 56);
  v51 = (char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL);
  v12 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v11 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v14 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
    System_Random___ctor(v14, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v14;
    sub_1C32BC4((CGThumbnailListItem_o *)IEnumerableExtensions_TypeInfo->static_fields, (int32_t)v14, v15, v16);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C32E7C(v17);
  }
  v18 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v12,
                        random->klass->vtable._6_Next.method);
  v20 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C83334(v19);
  klass = self->klass;
  v22 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v20 )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v24 = sub_1C83438(self, v20, 0);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v24)(
          self,
          *(_QWORD *)(v24 + 8));
  if ( !v28 )
    sub_1C32E7C(0);
  v29 = 0;
  while ( 1 )
  {
    v30 = *(_QWORD *)v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_26;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_26:
      v33 = sub_1C83438(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v28, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C83334(v34);
    v36 = *(_QWORD *)v28;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
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
      v39 = sub_1C83438(v28, v35, 0);
    }
    v55 = (char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v39 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v39 + 8) + 8LL),
      *(_QWORD *)(v39 + 8),
      v28,
      &v55,
      v9);
    memcpy(v9, v9, v8);
    v40 = memcpy(v9, v9, v8);
    if ( !getWeightFunc )
      sub_1C32E7C(v40);
    v41 = *(_QWORD *)(v4 + 56);
    v42 = (char *)&v50 - ((v8 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v41 + 8) + 40LL) & 0x80000000) == 0 )
      v42 = *v9;
    v43 = *(__int64 **)(v41 + 64);
    v44 = *v43;
    v55 = v42;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v43[2])(
      v44,
      v43,
      getWeightFunc,
      &v55,
      &v56);
    v29 += v56;
    if ( v18 < v29 )
    {
      memcpy(v9, v9, v8);
      v25 = v52;
      memcpy(v52, v9, v8);
      v45 = 7;
      goto LABEL_43;
    }
  }
  v45 = 8;
  v25 = v52;
LABEL_43:
  v46 = *(_QWORD *)v28;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_47;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_47:
    v49 = sub_1C83438(v28, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v28, *(_QWORD *)(v49 + 8));
  if ( v45 != 7 )
  {
    v25 = v51;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v9, v25, v8);
  v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v53, v9, v8);
  result.monitor = v27;
  result.klass = v26;
  return result;
}


Il2CppObject *IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3138CB8 *method)
{
  unsigned int v6; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  signed int v12; // w22
  long double v13; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  Il2CppObject *v19; // x23
  __int64 v20; // x19
  signed int v21; // w24
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  long double v26; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( method->rgctx_data
    || (sub_1C32C20(&System_IDisposable_TypeInfo),
        sub_1C32C20(&IEnumerableExtensions_TypeInfo),
        sub_1C32C20(&System_Collections_IEnumerator_TypeInfo),
        sub_1C32C20(&System_Random_TypeInfo),
        method->rgctx_data) )
  {
    if ( !self )
      return 0;
  }
  else
  {
    sub_1C83390();
    if ( !self )
      return 0;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_30E8F68 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0;
  v6 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_311B144 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v8 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
    System_Random___ctor(v8, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)IEnumerableExtensions_TypeInfo->static_fields, (int32_t)v8, v9, v10);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C32E7C(v11);
  }
  v12 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v6,
                        random->klass->vtable._6_Next.method);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C83334(v13);
  klass = self->klass;
  v16 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_13;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v18 = sub_1C83438(self, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v18)(
          self,
          *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C32E7C(0);
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_23;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_23:
      v25 = sub_1C83438(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_6_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C83334(v26);
    v28 = *(_QWORD *)v20;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
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
      v31 = sub_1C83438(v20, _6_System_Collections_Generic_IEnumerator_T, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
    if ( !getWeightFunc )
      sub_1C32E7C(v32);
    v19 = (Il2CppObject *)v32;
    v21 += ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getWeightFunc->fields.invoke_impl)(
             getWeightFunc->fields.method_code,
             v32,
             getWeightFunc->fields.method);
    if ( v12 < v21 )
      goto LABEL_38;
  }
  v19 = 0;
LABEL_38:
  v33 = *(_QWORD *)v20;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_42;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_42:
    v36 = sub_1C83438(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v20, *(_QWORD *)(v36 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__GetMaxValueOwner___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_3139974 *method)
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
  __int64 v16; // x23
  signed int v17; // w22
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  long double v22; // q0
  __int64 v23; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  void *v28; // x0
  _QWORD *v29; // x8
  char *v30; // x9
  __int64 *v31; // x1
  __int64 v32; // x0
  signed int v33; // w28
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v38; // x0
  void *v39; // x1
  MethodInfo_3139974 *v40; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  char **v42; // [xsp+10h] [xbp-20h]
  char *v43; // [xsp+18h] [xbp-18h] BYREF
  signed int v44; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v45; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v40 = (MethodInfo_3139974 *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v45 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD **)(v3 + 56);
  if ( !v7 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    v7 = *(_QWORD **)(v4 + 56);
    if ( !v7 )
    {
      sub_1C83390();
      v7 = *(_QWORD **)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*v7 + 252LL);
  v9 = (char **)((char *)&v40 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
  memset(v9, 0, v8);
  v42 = v9;
  memset(v9, 0, v8);
  if ( self )
  {
    v11 = v7[1];
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(v10);
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
      v15 = sub_1C83438(self, v11, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v15)(
            self,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C32E7C(0);
    v17 = 0x80000000;
    while ( 1 )
    {
      v18 = *(_QWORD *)v16;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_19:
        v21 = sub_1C83438(v16, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
        v23 = sub_1C83334(v22);
      v24 = *(_QWORD *)v16;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((_QWORD *)v26 - 1) != v23 )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_28;
        }
        v27 = v24 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_28:
        v27 = sub_1C83438(v16, v23, 0);
      }
      v43 = (char *)&v40 - ((v8 + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v27 + 8) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v27 + 8) + 8LL),
        *(_QWORD *)(v27 + 8),
        v16,
        &v43,
        v9);
      memcpy(v9, v9, v8);
      v28 = memcpy(v9, v9, v8);
      if ( !getValueFunc )
        sub_1C32E7C(v28);
      v29 = *(_QWORD **)(v4 + 56);
      v30 = (char *)&v40 - ((v8 + 15) & 0x1FFFFFFF0LL);
      if ( (*(_DWORD *)(*v29 + 40LL) & 0x80000000) == 0 )
        v30 = *v9;
      v31 = (__int64 *)v29[6];
      v32 = *v31;
      v43 = v30;
      ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, signed int *))v31[2])(
        v32,
        v31,
        getValueFunc,
        &v43,
        &v44);
      v33 = v44;
      if ( v44 > v17 )
      {
        memcpy(v9, v9, v8);
        memcpy(v42, v9, v8);
        v17 = v33;
      }
    }
    v34 = *(_QWORD *)v16;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_39;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_39:
      v37 = sub_1C83438(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v16, *(_QWORD *)(v37 + 8));
  }
  memcpy(v9, v42, v8);
  v38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v40, v9, v8);
  result.monitor = v39;
  result.klass = v38;
  return result;
}


Il2CppObject *IEnumerableExtensions__GetMaxValueOwner_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_3139644 *method)
{
  long double v3; // q0
  Il2CppClass *_1_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  Il2CppObject *v13; // x20
  signed int v14; // w24
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  long double v19; // q0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *v26; // x23
  signed int v27; // w0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
    {
      sub_1C83390();
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
    _1_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C83334(v3);
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
    v11 = sub_1C83438(self, _1_System_Collections_Generic_IEnumerable_T, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          self,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C32E7C(0);
  v13 = 0;
  v14 = 0x80000000;
  while ( 1 )
  {
    v15 = *(_QWORD *)v12;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_18:
      v18 = sub_1C83438(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v12, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_3_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _3_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C83334(v19);
    v21 = *(_QWORD *)v12;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((Il2CppClass **)v23 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_27;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_27:
      v24 = sub_1C83438(v12, _3_System_Collections_Generic_IEnumerator_T, 0);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v12, *(_QWORD *)(v24 + 8));
    if ( !getValueFunc )
      sub_1C32E7C(v25);
    v26 = (Il2CppObject *)v25;
    v27 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getValueFunc->fields.invoke_impl)(
            getValueFunc->fields.method_code,
            v25,
            getValueFunc->fields.method);
    if ( v27 > v14 )
    {
      v13 = v26;
      v14 = v27;
    }
  }
  v28 = *(_QWORD *)v12;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_37;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_37:
    v31 = sub_1C83438(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v12, *(_QWORD *)(v31 + 8));
  return v13;
}