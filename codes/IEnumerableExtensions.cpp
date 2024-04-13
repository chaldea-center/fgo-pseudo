void __fastcall IEnumerableExtensions___cctor(const MethodInfo *method)
{
  ;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_1E59C50 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  unsigned int v17; // w22
  IEnumerableExtensions_c *v18; // x8
  System_Random_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  IEnumerableExtensions_c *v26; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct System_Random_o *random; // x0
  __int64 v29; // x3
  int v30; // w22
  Il2CppClass *_2_System_Collections_Generic_IEnumerable_T; // x23
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x21
  int v39; // w24
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x23
  int v52; // w8
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v58; // [xsp+0h] [xbp-50h]

  if ( (byte_42EC1C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)getWeightFunc, (_DWORD)method, v3);
    sub_B5D5C4(&IEnumerableExtensions_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Random_TypeInfo, v13, v14, v15);
    byte_42EC1C9 = 1;
  }
  if ( !self
    || (((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *))method->rgctx_data->_0_System_Linq_Enumerable_Any_T_->methodPointer)(self) & 1) == 0 )
  {
    return 0LL;
  }
  v17 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))method->rgctx_data->_1_System_Linq_Enumerable_Sum_T_->methodPointer)(
          self,
          getWeightFunc);
  v18 = IEnumerableExtensions_TypeInfo;
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
    v18 = IEnumerableExtensions_TypeInfo;
  }
  if ( !v18->static_fields->random )
  {
    v19 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
    System_Random___ctor(v19, 0LL);
    v26 = IEnumerableExtensions_TypeInfo;
    if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
      v26 = IEnumerableExtensions_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v26->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v19;
    sub_B5D560(static_fields, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    v18 = IEnumerableExtensions_TypeInfo;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = IEnumerableExtensions_TypeInfo;
  }
  random = v18->static_fields->random;
  if ( !random )
    sub_B5D69C(0LL, v16);
  v30 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v17,
          random->klass->vtable._7_Next.methodPtr);
  _2_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE2(_2_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _2_System_Collections_Generic_IEnumerable_T )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AF54C0(self, _2_System_Collections_Generic_IEnumerable_T, 0LL, v29);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_B5D69C(0LL, v36);
  v39 = 0;
  while ( 1 )
  {
    v40 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_31;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_31:
      v43 = sub_AF54C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v38, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE2(_3_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_);
    v45 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((Il2CppClass **)v47 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_40;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_40:
      v48 = sub_AF54C0(v38, _3_System_Collections_Generic_IEnumerator_T, 0LL, v37);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v38, *(_QWORD *)(v48 + 8));
    if ( !getWeightFunc )
      sub_B5D69C(v49, v50);
    v51 = (Il2CppObject *)v49;
    v39 += ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__int__Invoke->methodPointer)(
             getWeightFunc,
             v49,
             method->rgctx_data->_4_System_Func_T__int__Invoke);
    if ( v30 < v39 )
    {
      v52 = 144;
      goto LABEL_46;
    }
  }
  v51 = 0LL;
  v52 = 133;
LABEL_46:
  v58 = v52;
  v53 = *(_QWORD *)v38;
  if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
        goto LABEL_51;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_51:
    v56 = sub_AF54C0(v38, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v38, *(_QWORD *)(v56 + 8));
  if ( v58 == 133 )
    return 0LL;
  return v51;
}