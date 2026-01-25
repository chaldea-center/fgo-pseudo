// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_31CB804 *method)
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  signed int v23; // w19
  long double v24; // q0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  char *v30; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // x0
  void *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x25
  signed int v35; // w23
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
  MethodInfo_31CB804 *v60; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v62; // [xsp+28h] [xbp-18h] BYREF
  int v63; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v64; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v60 = (MethodInfo_31CB804 *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v64 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&IEnumerableExtensions_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C51BD8();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v57 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
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
    v14 = (System_Random_o *)sub_1C7BD34(System_Random_TypeInfo);
    System_Random___ctor(v14, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v14;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C7BD40(v21, v22);
  }
  v23 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v12,
                        random->klass->vtable._6_Next.method);
  v25 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C51B7C(v24);
  klass = self->klass;
  v27 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v25 )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_14;
    }
    v29 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v29 = sub_1C51E70(self, v25, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v29)(
          self,
          *(_QWORD *)(v29 + 8));
  if ( !v34 )
    sub_1C7BD40(0, v33);
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
      v39 = sub_1C51E70(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v34, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C51B7C(v40);
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
      v45 = sub_1C51E70(v34, v41, 0);
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
      sub_1C7BD40(v46, v47);
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
    v56 = sub_1C51E70(v34, System_IDisposable_TypeInfo, 0);
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


Il2CppObject *IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_31CB410 *method)
{
  unsigned int v6; // w22
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  signed int v17; // w22
  long double v18; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  Il2CppObject *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x19
  signed int v27; // w24
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
    || (sub_1C7BAE8(&System_IDisposable_TypeInfo),
        sub_1C7BAE8(&IEnumerableExtensions_TypeInfo),
        sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo),
        sub_1C7BAE8(&System_Random_TypeInfo),
        method->rgctx_data) )
  {
    if ( !self )
      return 0;
  }
  else
  {
    sub_1C51BD8();
    if ( !self )
      return 0;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_317C204 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0;
  v6 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_31AD7D0 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v8 = (System_Random_o *)sub_1C7BD34(System_Random_TypeInfo);
    System_Random___ctor(v8, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v8;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1C7BD40(v15, v16);
  }
  v17 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v6,
                        random->klass->vtable._6_Next.method);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C51B7C(v18);
  klass = self->klass;
  v21 = *(unsigned __int16 *)&self->klass->_2.rank;
  if ( *(_WORD *)&self->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_13;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v23 = sub_1C51E70(self, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v23)(
          self,
          *(_QWORD *)(v23 + 8));
  if ( !v26 )
    sub_1C7BD40(0, v25);
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
      v31 = sub_1C51E70(v26, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v26, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_6_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C51B7C(v32);
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
      v37 = sub_1C51E70(v26, _6_System_Collections_Generic_IEnumerator_T, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v26, *(_QWORD *)(v37 + 8));
    if ( !getWeightFunc )
      sub_1C7BD40(v38, v39);
    v24 = (Il2CppObject *)v38;
    v27 += ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getWeightFunc->fields.invoke_impl)(
             getWeightFunc->fields.method_code,
             v38,
             getWeightFunc->fields.method);
    if ( v17 < v27 )
      goto LABEL_38;
  }
  v24 = 0;
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
    v43 = sub_1C51E70(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
  return v24;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__GetMaxValueOwner___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_31CC0CC *method)
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
  MethodInfo_31CC0CC *v42; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-28h]
  char **v44; // [xsp+10h] [xbp-20h]
  char *v45; // [xsp+18h] [xbp-18h] BYREF
  signed int v46; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v47; // [xsp+28h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v42 = (MethodInfo_31CC0CC *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = v3;
  v47 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD **)(v3 + 56);
  if ( !v7 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    v7 = *(_QWORD **)(v4 + 56);
    if ( !v7 )
    {
      sub_1C51BD8();
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
      v11 = sub_1C51B7C(v10);
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
      v15 = sub_1C51E70(self, v11, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v15)(
            self,
            *(_QWORD *)(v15 + 8));
    if ( !v17 )
      sub_1C7BD40(0, v16);
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
        v22 = sub_1C51E70(v17, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v24 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C51B7C(v23);
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
        v28 = sub_1C51E70(v17, v24, 0);
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
        sub_1C7BD40(v29, v30);
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
      v39 = sub_1C51E70(v17, System_IDisposable_TypeInfo, 0);
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
        const MethodInfo_31CBD9C *method)
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
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
    {
      sub_1C51BD8();
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
    _1_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C51B7C(v3);
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
    v11 = sub_1C51E70(self, _1_System_Collections_Generic_IEnumerable_T, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
          self,
          *(_QWORD *)(v11 + 8));
  if ( !v13 )
    sub_1C7BD40(0, v12);
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
      v19 = sub_1C51E70(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v13, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_3_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _3_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C51B7C(v20);
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
      v25 = sub_1C51E70(v13, _3_System_Collections_Generic_IEnumerator_T, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v13, *(_QWORD *)(v25 + 8));
    if ( !getValueFunc )
      sub_1C7BD40(v26, v27);
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
    v33 = sub_1C51E70(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v13, *(_QWORD *)(v33 + 8));
  return v14;
}