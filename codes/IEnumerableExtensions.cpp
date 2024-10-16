// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2F17984 *method)
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
  long double v23; // q0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char *v29; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // x0 OVERLAPPED
  void *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x25
  int v34; // w23
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  long double v39; // q0
  __int64 v40; // x1
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  void *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  char *v48; // x9
  __int64 *v49; // x1
  __int64 v50; // x0
  int v51; // w22
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // [xsp+0h] [xbp-40h] BYREF
  char *v57; // [xsp+8h] [xbp-38h]
  char *v58; // [xsp+10h] [xbp-30h]
  MethodInfo_2F17984 *v59; // [xsp+18h] [xbp-28h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-20h]
  char *v61; // [xsp+28h] [xbp-18h] BYREF
  int v62; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v63; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v59 = (MethodInfo_2F17984 *)method;
  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v4 = v3;
  v63 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1BAB41C(&System_IDisposable_TypeInfo, getWeightFunc);
    sub_1BAB41C(&IEnumerableExtensions_TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BAB41C(&System_Random_TypeInfo, v10);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1BFD354();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v12 = (char **)((char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL));
  memset(v12, 0, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 252LL));
  memset(v12, 0, v11);
  memset(v12, 0, v11);
  if ( !self )
  {
    v29 = (char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v29, 0, v11);
    goto LABEL_18;
  }
  v13 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v58 = (char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v13)(self) & 1) == 0 )
  {
    v29 = v58;
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(v4 + 56);
  v57 = (char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL);
  v15 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v14 + 32))(
          self,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v17 = (System_Random_o *)sub_1BAB668(System_Random_TypeInfo);
    System_Random___ctor(v17, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v17;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v17,
      v18,
      v19);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1BAB678(v20, v21);
  }
  v22 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v15,
          random->klass->vtable._7_Next.methodPtr);
  v24 = **(_QWORD **)(v4 + 56);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BFD2F8(v23);
  klass = self->klass;
  v26 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v24 )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BFD3FC(self, v24, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_1BAB678(0LL, v32);
  v34 = 0;
  while ( 1 )
  {
    v35 = *(_QWORD *)v33;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_26;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_26:
      v38 = sub_1BFD3FC(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48LL);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1BFD2F8(v39);
    v41 = *(_QWORD *)v33;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((_QWORD *)v43 - 1) != v40 )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_35;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_35:
      v44 = sub_1BFD3FC(v33, v40, 0LL);
    }
    v61 = (char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char **, char **))(*(_QWORD *)(v44 + 8) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(v44 + 8) + 8LL),
      *(_QWORD *)(v44 + 8),
      v33,
      &v61,
      v12);
    memcpy(v12, v12, v11);
    v45 = memcpy(v12, v12, v11);
    if ( !getWeightFunc )
      sub_1BAB678(v45, v46);
    v47 = *(_QWORD *)(v4 + 56);
    v48 = (char *)&v56 - ((v11 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v47 + 8) + 40LL) & 0x80000000) == 0 )
      v48 = *v12;
    v49 = *(__int64 **)(v47 + 64);
    v50 = *v49;
    v61 = v48;
    ((void (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v49[2])(
      v50,
      v49,
      getWeightFunc,
      &v61,
      &v62);
    v34 += v62;
    if ( v22 < v34 )
    {
      memcpy(v12, v12, v11);
      v29 = v58;
      memcpy(v58, v12, v11);
      v51 = 7;
      goto LABEL_43;
    }
  }
  v51 = 8;
  v29 = v58;
LABEL_43:
  v52 = *(_QWORD *)v33;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_47;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_47:
    v55 = sub_1BFD3FC(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v33, *(_QWORD *)(v55 + 8));
  if ( v51 != 7 )
  {
    v29 = v57;
    goto LABEL_17;
  }
LABEL_18:
  memcpy(v12, v29, v11);
  v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v59, v12, v11);
  result.monitor = v31;
  result.klass = v30;
  return result;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_2F17590 *method)
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
  long double v17; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x19
  int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  long double v31; // q0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( method->rgctx_data
    || (sub_1BAB41C(&System_IDisposable_TypeInfo, getWeightFunc),
        sub_1BAB41C(&IEnumerableExtensions_TypeInfo, v6),
        sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v7),
        sub_1BAB41C(&System_Random_TypeInfo, v8),
        method->rgctx_data) )
  {
    if ( !self )
      return 0LL;
  }
  else
  {
    sub_1BFD354();
    if ( !self )
      return 0LL;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)self,
          (const MethodInfo_2ED117C *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    return 0LL;
  v9 = System_Linq_Enumerable__Sum_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)self,
         (System_Func_TSource__int__o *)getWeightFunc,
         (const MethodInfo_2EFBC6C *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v11 = (System_Random_o *)sub_1BAB668(System_Random_TypeInfo);
    System_Random___ctor(v11, 0LL);
    IEnumerableExtensions_TypeInfo->static_fields->random = v11;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v11,
      v12,
      v13);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_1BAB678(v14, v15);
  }
  v16 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v9,
          random->klass->vtable._7_Next.methodPtr);
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BFD2F8(v17);
  klass = self->klass;
  v20 = *(unsigned __int16 *)(&self->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&self->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1BFD3FC(self, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1BAB678(0LL, v24);
  v26 = 0;
  while ( 1 )
  {
    v27 = *(_QWORD *)v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_23;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_23:
      v30 = sub_1BFD3FC(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v25, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BFD2F8(v31);
    v33 = *(_QWORD *)v25;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((Il2CppClass **)v35 - 1) != _6_System_Collections_Generic_IEnumerator_T )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_32;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_32:
      v36 = sub_1BFD3FC(v25, _6_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v25, *(_QWORD *)(v36 + 8));
    if ( !getWeightFunc )
      sub_1BAB678(v37, v38);
    v23 = (Il2CppObject *)v37;
    v26 += ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))getWeightFunc->fields.m_target)(
             getWeightFunc->fields.original_method_info,
             v37,
             *(_QWORD *)&getWeightFunc->fields.extra_arg);
    if ( v16 < v26 )
      goto LABEL_38;
  }
  v23 = 0LL;
LABEL_38:
  v39 = *(_QWORD *)v25;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_42;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_42:
    v42 = sub_1BFD3FC(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v25, *(_QWORD *)(v42 + 8));
  return v23;
}