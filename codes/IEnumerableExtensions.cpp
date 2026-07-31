// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__DrawLottery___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_388A18C *method)
{
  __int64 v3; // x3
  unsigned __int64 StatusReg; // x27
  __int64 v5; // x23
  __int64 v7; // x19
  size_t v8; // x20
  char **v9; // x21
  System_Collections_Generic_IEnumerable_T__o *v10; // x22
  __int64 (__fastcall **v11)(System_Collections_Generic_IEnumerable_T__o *); // x1
  __int64 v12; // x8
  unsigned int v13; // w27
  struct System_Random_o *random; // x8
  System_Random_o *v15; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  __int64 v23; // x1
  signed int v24; // w27
  long double v25; // q0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  char *v32; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // x0
  void *v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  signed int v37; // w19
  __int64 v38; // x28
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  long double v45; // q0
  __int64 v46; // x28
  __int64 v47; // x1
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x1
  void *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x9
  char *v56; // x8
  __int64 *v57; // x1
  __int64 v58; // x0
  __int64 (__fastcall *v59)(__int64, __int64 *, System_Func_T__int__o *, char **, int *); // x9
  char *v60; // x25
  int v61; // w19
  __int64 v62; // x24
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  unsigned __int64 v67; // [xsp+0h] [xbp-50h] BYREF
  char *v68; // [xsp+8h] [xbp-48h]
  MethodInfo_388A18C *v69; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_IEnumerable_T__o *v70; // [xsp+18h] [xbp-38h]
  __int64 v71; // [xsp+20h] [xbp-30h]
  __int64 *v72; // [xsp+28h] [xbp-28h]
  __int64 v73; // [xsp+30h] [xbp-20h] BYREF
  char *v74; // [xsp+38h] [xbp-18h] BYREF
  int v75; // [xsp+44h] [xbp-Ch] BYREF
  __int64 v76; // [xsp+48h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v69 = (MethodInfo_388A18C *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = v3;
  v76 = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD *)(v3 + 56);
  v70 = self;
  if ( !v7 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&IEnumerableExtensions_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&System_Random_TypeInfo);
    v7 = *(_QWORD *)(v5 + 56);
    if ( !v7 )
    {
      sub_2237B54();
      v7 = *(_QWORD *)(v5 + 56);
    }
  }
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  v9 = (char **)((char *)&v67 - ((v8 + 15) & 0x1FFFFFFF0LL));
  memset(v9, 0, v8);
  v73 = 0;
  memset(v9, 0, v8);
  v10 = v70;
  if ( !v70 )
  {
    v32 = (char *)&v67 - ((v8 + 15) & 0x1FFFFFFF0LL);
LABEL_17:
    memset(v32, 0, v8);
    memset(v9, 0, v8);
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memset(v69, 0, v8);
    goto LABEL_58;
  }
  v11 = *(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *))(v7 + 16);
  v68 = (char *)&v67 - ((v8 + 15) & 0x1FFFFFFF0LL);
  if ( ((*v11)(v70) & 1) == 0 )
  {
    v32 = v68;
    goto LABEL_17;
  }
  v12 = *(_QWORD *)(v5 + 56);
  v67 = StatusReg;
  v13 = (**(__int64 (__fastcall ***)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))(v12 + 32))(
          v10,
          getWeightFunc);
  random = IEnumerableExtensions_TypeInfo->static_fields->random;
  if ( !random )
  {
    v15 = (System_Random_o *)sub_21FFEBC(System_Random_TypeInfo);
    System_Random___ctor(v15, 0);
    IEnumerableExtensions_TypeInfo->static_fields->random = v15;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    random = IEnumerableExtensions_TypeInfo->static_fields->random;
    if ( !random )
      sub_21FFECC(v22, v23);
  }
  v24 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                        random,
                        random,
                        0,
                        v13,
                        random->klass->vtable._6_Next.method);
  v26 = **(_QWORD **)(v5 + 56);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_2237AF8(v25);
  v27 = v70;
  klass = v70->klass;
  v29 = *(unsigned __int16 *)&v70->klass->_2.rank;
  if ( *(_WORD *)&v70->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != v26 )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_14;
    }
    v31 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v31 = sub_2237E2C(v70, v26, 0);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v31)(
          v27,
          *(_QWORD *)(v31 + 8));
  v73 = v35;
  v37 = 0;
  v71 = 0;
  v72 = &v73;
  while ( 1 )
  {
    v38 = v73;
    if ( !v73 )
      sub_21FFECC(v35, v36);
    v39 = *(_QWORD *)v73;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_25;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_25:
      v42 = sub_2237E2C(v73, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8));
    if ( (v43 & 1) == 0 )
      break;
    v46 = v73;
    if ( !v73 )
      sub_21FFECC(v43, v44);
    v47 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 48LL);
    if ( (*(_WORD *)(v47 + 309) & 1) == 0 )
      v47 = sub_2237AF8(v45);
    v48 = *(_QWORD *)v46;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((_QWORD *)v50 - 1) != v47 )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_35;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_35:
      v51 = sub_2237E2C(v46, v47, 0);
    }
    v52 = *(_QWORD *)(v51 + 8);
    v74 = (char *)&v67 - ((v8 + 15) & 0x1FFFFFFF0LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, char **, char **))(v52 + 16))(
      *(_QWORD *)(v52 + 8),
      v52,
      v46,
      &v74,
      v9);
    memcpy(v9, v9, v8);
    v53 = memcpy(v9, v9, v8);
    if ( !getWeightFunc )
      sub_21FFECC(v53, v54);
    v55 = *(_QWORD *)(v5 + 56);
    v56 = (char *)&v67 - ((v8 + 15) & 0x1FFFFFFF0LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v55 + 8) + 40LL) & 0x80000000) == 0 )
      v56 = *v9;
    v57 = *(__int64 **)(v55 + 64);
    v58 = *v57;
    v59 = (__int64 (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, int *))v57[2];
    v74 = v56;
    v35 = v59(v58, v57, getWeightFunc, &v74, &v75);
    v37 += v75;
    if ( v24 < v37 )
    {
      memcpy(v9, v9, v8);
      v60 = v68;
      memcpy(v68, v9, v8);
      v61 = 7;
      goto LABEL_43;
    }
  }
  v61 = 8;
  v60 = v68;
LABEL_43:
  v62 = v73;
  if ( v73 )
  {
    v63 = *(_QWORD *)v73;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_48;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_48:
      v66 = sub_2237E2C(v73, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
  }
  if ( v61 == 8 )
  {
    memset(v9, 0, v8);
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memset(v69, 0, v8);
  }
  else
  {
    memcpy(v9, v60, v8);
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v69, v60, v8);
  }
LABEL_58:
  result.monitor = v34;
  result.klass = v33;
  return result;
}


Il2CppObject *IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_3889DCC *method)
{
  unsigned int v6; // w21
  struct System_Random_o *random; // x8
  System_Random_o *v8; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1
  signed int v17; // w21
  long double v18; // q0
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  signed int v26; // w23
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
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v44; // [xsp+18h] [xbp-38h]

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&IEnumerableExtensions_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&System_Random_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( self )
  {
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)self,
           (const MethodInfo_3832C14 *)method->rgctx_data->_2_System_Linq_Enumerable_Any_T_) )
    {
      v6 = System_Linq_Enumerable__Sum_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)self,
             (System_Func_TSource__int__o *)getWeightFunc,
             (const MethodInfo_3866AE0 *)method->rgctx_data->_4_System_Linq_Enumerable_Sum_T_);
      random = IEnumerableExtensions_TypeInfo->static_fields->random;
      if ( !random )
      {
        v8 = (System_Random_o *)sub_21FFEBC(System_Random_TypeInfo);
        System_Random___ctor(v8, 0);
        IEnumerableExtensions_TypeInfo->static_fields->random = v8;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)IEnumerableExtensions_TypeInfo->static_fields,
          (int32_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        random = IEnumerableExtensions_TypeInfo->static_fields->random;
        if ( !random )
          sub_21FFECC(v15, v16);
      }
      v17 = (unsigned int)((_QWORD *(__fastcall *)(struct System_Random_o *__return_ptr, struct System_Random_o *, _QWORD, _QWORD, const MethodInfo *))random->klass->vtable._6_Next.methodPtr)(
                            random,
                            random,
                            0,
                            v6,
                            random->klass->vtable._6_Next.method);
      _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
      if ( (*((_WORD *)&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
        _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_2237AF8(v18);
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
            goto LABEL_14;
        }
        v23 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_14:
        v23 = sub_2237E2C(self, _0_System_Collections_Generic_IEnumerable_T, 0);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v23)(
              self,
              *(_QWORD *)(v23 + 8));
      v44 = v24;
      v26 = 0;
      while ( 1 )
      {
        if ( !v44 )
          sub_21FFECC(v24, v25);
        v27 = *(_QWORD *)v44;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
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
          v30 = sub_2237E2C(v44, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v44, *(_QWORD *)(v30 + 8)) & 1) == 0 )
          break;
        _6_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_6_System_Collections_Generic_IEnumerator_T_;
        if ( (*((_WORD *)&_6_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
          _6_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_2237AF8(v31);
        v33 = *(_QWORD *)v44;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
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
          v36 = sub_2237E2C(v44, _6_System_Collections_Generic_IEnumerator_T, 0);
        }
        v37 = (System_Collections_Generic_IEnumerable_T__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(
                                                               v44,
                                                               *(_QWORD *)(v36 + 8));
        if ( !getWeightFunc )
          sub_21FFECC(v37, v38);
        self = v37;
        v24 = ((__int64 (__fastcall *)(intptr_t, System_Collections_Generic_IEnumerable_T__o *, intptr_t))getWeightFunc->fields.invoke_impl)(
                getWeightFunc->fields.method_code,
                v37,
                getWeightFunc->fields.method);
        v26 += v24;
        if ( v17 < v26 )
          goto LABEL_38;
      }
      self = 0;
LABEL_38:
      v39 = *(_QWORD *)v44;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
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
        v42 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
    }
    else
    {
      return 0;
    }
  }
  return (Il2CppObject *)self;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o IEnumerableExtensions__GetMaxValueOwner___Il2CppFullySharedGenericType_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_388AAA8 *method)
{
  __int64 v3; // x3
  unsigned __int64 StatusReg; // x28
  __int64 v5; // x23
  _QWORD *v8; // x19
  size_t v9; // x20
  char **v10; // x21
  long double v11; // q0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // x0
  void *v18; // x1
  __int64 *v19; // x0
  __int64 v20; // x1
  signed int v21; // w28
  void *v22; // x27
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  long double v29; // q0
  __int64 *v30; // x27
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  void *v37; // x0
  __int64 v38; // x1
  _QWORD *v39; // x9
  char *v40; // x8
  __int64 *v41; // x1
  __int64 v42; // x0
  __int64 (__fastcall *v43)(__int64, __int64 *, System_Func_T__int__o *, char **, signed int *); // x9
  signed int v44; // w27
  void *v45; // x24
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  unsigned __int64 v50; // [xsp+0h] [xbp-40h] BYREF
  MethodInfo_388AAA8 *v51; // [xsp+8h] [xbp-38h]
  __int64 v52; // [xsp+10h] [xbp-30h]
  void **v53; // [xsp+18h] [xbp-28h]
  __int64 *v54; // [xsp+20h] [xbp-20h] BYREF
  char *v55; // [xsp+28h] [xbp-18h] BYREF
  signed int v56; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v57; // [xsp+38h] [xbp-8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v51 = (MethodInfo_388AAA8 *)method;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = v3;
  v57 = *(_QWORD *)(StatusReg + 40);
  v8 = *(_QWORD **)(v3 + 56);
  if ( !v8 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    v8 = *(_QWORD **)(v5 + 56);
    if ( !v8 )
    {
      sub_2237B54();
      v8 = *(_QWORD **)(v5 + 56);
    }
  }
  v9 = *(unsigned int *)(*v8 + 252LL);
  v10 = (char **)((char *)&v50 - ((v9 + 15) & 0x1FFFFFFF0LL));
  memset(v10, 0, v9);
  v54 = 0;
  memset(v10, 0, v9);
  memset(v10, 0, v9);
  if ( self )
  {
    v12 = v8[1];
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_2237AF8(v11);
    klass = self->klass;
    v50 = StatusReg;
    v14 = *(unsigned __int16 *)&klass->_2.rank;
    if ( *(_WORD *)&klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)p_offset - 1) != v12 )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_2237E2C(self, v12, 0);
    }
    v19 = (__int64 *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v16)(
                       self,
                       *(_QWORD *)(v16 + 8));
    v54 = v19;
    v52 = 0;
    v53 = (void **)&v54;
    v21 = 0x80000000;
    while ( 1 )
    {
      v22 = v54;
      if ( !v54 )
        sub_21FFECC(v19, v20);
      v23 = *v54;
      v24 = *(unsigned __int16 *)(*v54 + 302);
      if ( *(_WORD *)(*v54 + 302) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_20;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_20:
        v26 = sub_2237E2C(v54, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v27 = (*(__int64 (__fastcall **)(void *, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
      if ( (v27 & 1) == 0 )
        break;
      v30 = v54;
      if ( !v54 )
        sub_21FFECC(v27, v28);
      v31 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 24LL);
      if ( (*(_WORD *)(v31 + 309) & 1) == 0 )
        v31 = sub_2237AF8(v29);
      v32 = *v30;
      v33 = *(unsigned __int16 *)(*v30 + 302);
      if ( *(_WORD *)(*v30 + 302) )
      {
        v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((_QWORD *)v34 - 1) != v31 )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_30;
        }
        v35 = v32 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_30:
        v35 = sub_2237E2C(v30, v31, 0);
      }
      v36 = *(_QWORD *)(v35 + 8);
      v55 = (char *)&v50 - ((v9 + 15) & 0x1FFFFFFF0LL);
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *, char **, char **))(v36 + 16))(
        *(_QWORD *)(v36 + 8),
        v36,
        v30,
        &v55,
        v10);
      memcpy(v10, v10, v9);
      v37 = memcpy(v10, v10, v9);
      if ( !getValueFunc )
        sub_21FFECC(v37, v38);
      v39 = *(_QWORD **)(v5 + 56);
      v40 = (char *)&v50 - ((v9 + 15) & 0x1FFFFFFF0LL);
      if ( (*(_DWORD *)(*v39 + 40LL) & 0x80000000) == 0 )
        v40 = *v10;
      v41 = (__int64 *)v39[6];
      v42 = *v41;
      v43 = (__int64 (__fastcall *)(__int64, __int64 *, System_Func_T__int__o *, char **, signed int *))v41[2];
      v55 = v40;
      v19 = (__int64 *)v43(v42, v41, getValueFunc, &v55, &v56);
      v44 = v56;
      if ( v56 > v21 )
      {
        memcpy(v10, v10, v9);
        v19 = (__int64 *)memcpy(v10, v10, v9);
        v21 = v44;
      }
    }
    v45 = v54;
    if ( v54 )
    {
      v46 = *v54;
      v47 = *(unsigned __int16 *)(*v54 + 302);
      if ( *(_WORD *)(*v54 + 302) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_42;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_42:
        v49 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(void *, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
    }
    memcpy(v10, v10, v9);
    v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(v51, v10, v9);
  }
  else
  {
    memset(v10, 0, v9);
    v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memset(v51, 0, v9);
  }
  result.monitor = v18;
  result.klass = v17;
  return result;
}


Il2CppObject *IEnumerableExtensions__GetMaxValueOwner_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getValueFunc,
        const MethodInfo_388A7A8 *method)
{
  long double v3; // q0
  Il2CppClass *_1_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  signed int v15; // w25
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  long double v22; // q0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_T__o *v30; // x23
  signed int v31; // w0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v37; // [xsp+18h] [xbp-48h]

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( self )
  {
    _1_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_1_System_Collections_Generic_IEnumerable_T_;
    if ( (*((_WORD *)&_1_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 1) & 1) == 0 )
      _1_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_2237AF8(v3);
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
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_2237E2C(self, _1_System_Collections_Generic_IEnumerable_T, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            self,
            *(_QWORD *)(v11 + 8));
    v37 = v12;
    if ( !v12 )
      sub_21FFECC(v12, v13);
    v14 = v12;
    self = 0;
    v15 = 0x80000000;
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_19;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_19:
        v19 = sub_2237E2C(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v14, *(_QWORD *)(v19 + 8));
      if ( (v20 & 1) == 0 )
        break;
      if ( !v37 )
        sub_21FFECC(v20, v21);
      _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
      if ( (*((_WORD *)&_3_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 1) & 1) == 0 )
        _3_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_2237AF8(v22);
      v24 = *(_QWORD *)v37;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((Il2CppClass **)v26 - 1) != _3_System_Collections_Generic_IEnumerator_T )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_29;
        }
        v27 = v24 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_29:
        v27 = sub_2237E2C(v37, _3_System_Collections_Generic_IEnumerator_T, 0);
      }
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v37, *(_QWORD *)(v27 + 8));
      if ( !getValueFunc )
        sub_21FFECC(v28, v29);
      v30 = (System_Collections_Generic_IEnumerable_T__o *)v28;
      v31 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))getValueFunc->fields.invoke_impl)(
              getValueFunc->fields.method_code,
              v28,
              getValueFunc->fields.method);
      v14 = v37;
      if ( v31 > v15 )
      {
        self = v30;
        v15 = v31;
      }
    }
    if ( v37 )
    {
      v32 = *(_QWORD *)v37;
      v33 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_40;
        }
        v35 = v32 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_40:
        v35 = sub_2237E2C(v37, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v35)(v37, *(_QWORD *)(v35 + 8));
    }
  }
  return (Il2CppObject *)self;
}