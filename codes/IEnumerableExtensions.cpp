void __fastcall IEnumerableExtensions___cctor(const MethodInfo *method)
{
  ;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_1B63D30 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int v11; // w22
  IEnumerableExtensions_c *v12; // x8
  System_Random_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  IEnumerableExtensions_c *v20; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct System_Random_o *random; // x0
  int v23; // w22
  Il2CppClass *_2_System_Collections_Generic_IEnumerable_T; // x23
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x21
  int v30; // w24
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  Il2CppObject *v41; // x23
  int v42; // w8
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  int v48; // [xsp+0h] [xbp-50h]

  if ( (byte_4216D81 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, getWeightFunc);
    sub_B0D8A4(&IEnumerableExtensions_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&System_Random_TypeInfo, v8);
    byte_4216D81 = 1;
  }
  if ( !self
    || (((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *))method->rgctx_data->_0_System_Linq_Enumerable_Any_T_->methodPointer)(self) & 1) == 0 )
  {
    return 0LL;
  }
  v11 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))method->rgctx_data->_1_System_Linq_Enumerable_Sum_T_->methodPointer)(
          self,
          getWeightFunc);
  v12 = IEnumerableExtensions_TypeInfo;
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
    v12 = IEnumerableExtensions_TypeInfo;
  }
  if ( !v12->static_fields->random )
  {
    v13 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v9, v10);
    System_Random___ctor(v13, 0LL);
    v20 = IEnumerableExtensions_TypeInfo;
    if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
      v20 = IEnumerableExtensions_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v20->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v13;
    sub_B0D840(static_fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    v12 = IEnumerableExtensions_TypeInfo;
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = IEnumerableExtensions_TypeInfo;
  }
  random = v12->static_fields->random;
  if ( !random )
    sub_B0D97C(0LL);
  v23 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v11,
          random->klass->vtable._7_Next.methodPtr);
  _2_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE2(_2_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _2_System_Collections_Generic_IEnumerable_T )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AA67A0(self, _2_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_B0D97C(0LL);
  v30 = 0;
  while ( 1 )
  {
    v31 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_31;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_31:
      v34 = sub_AA67A0(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE2(_3_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_);
    v36 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((Il2CppClass **)v38 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_40;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_40:
      v39 = sub_AA67A0(v29, _3_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
    if ( !getWeightFunc )
      sub_B0D97C(v40);
    v41 = (Il2CppObject *)v40;
    v30 += ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__int__Invoke->methodPointer)(
             getWeightFunc,
             v40,
             method->rgctx_data->_4_System_Func_T__int__Invoke);
    if ( v23 < v30 )
    {
      v42 = 144;
      goto LABEL_46;
    }
  }
  v41 = 0LL;
  v42 = 133;
LABEL_46:
  v48 = v42;
  v43 = *(_QWORD *)v29;
  if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
  {
    v44 = 0LL;
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
        goto LABEL_51;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_51:
    v46 = sub_AA67A0(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v29, *(_QWORD *)(v46 + 8));
  if ( v48 == 133 )
    return 0LL;
  return v41;
}