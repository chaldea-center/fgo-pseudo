void __fastcall IEnumerableExtensions___cctor(const MethodInfo *method)
{
  ;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_1DED14C *method)
{
  __int64 v6; // x1
  unsigned int v7; // w22
  IEnumerableExtensions_c *v8; // x8
  System_Random_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  IEnumerableExtensions_c *v16; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct System_Random_o *random; // x0
  int v19; // w22
  Il2CppClass *_2_System_Collections_Generic_IEnumerable_T; // x23
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  int v27; // w24
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x23
  int v40; // w8
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  int v46; // [xsp+0h] [xbp-50h]

  if ( (byte_438E65F & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&IEnumerableExtensions_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&System_Random_TypeInfo);
    byte_438E65F = 1;
  }
  if ( !self
    || (((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *))method->rgctx_data->_0_System_Linq_Enumerable_Any_T_->methodPointer)(self) & 1) == 0 )
  {
    return 0LL;
  }
  v7 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))method->rgctx_data->_1_System_Linq_Enumerable_Sum_T_->methodPointer)(
         self,
         getWeightFunc);
  v8 = IEnumerableExtensions_TypeInfo;
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
    v8 = IEnumerableExtensions_TypeInfo;
  }
  if ( !v8->static_fields->random )
  {
    v9 = (System_Random_o *)sub_B77694(System_Random_TypeInfo);
    System_Random___ctor(v9, 0LL);
    v16 = IEnumerableExtensions_TypeInfo;
    if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
      v16 = IEnumerableExtensions_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v16->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v9;
    sub_B77560(static_fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    v8 = IEnumerableExtensions_TypeInfo;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = IEnumerableExtensions_TypeInfo;
  }
  random = v8->static_fields->random;
  if ( !random )
    sub_B7769C(0LL, v6);
  v19 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v7,
          random->klass->vtable._7_Next.methodPtr);
  _2_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE2(_2_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _2_System_Collections_Generic_IEnumerable_T )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_B0F4C0(self, _2_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B7769C(0LL, v25);
  v27 = 0;
  while ( 1 )
  {
    v28 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_31;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_B0F4C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v26, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE2(_3_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4(method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_);
    v33 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((Il2CppClass **)v35 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_40;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_40:
      v36 = sub_B0F4C0(v26, _3_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v26, *(_QWORD *)(v36 + 8));
    if ( !getWeightFunc )
      sub_B7769C(v37, v38);
    v39 = (Il2CppObject *)v37;
    v27 += ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__int__Invoke->methodPointer)(
             getWeightFunc,
             v37,
             method->rgctx_data->_4_System_Func_T__int__Invoke);
    if ( v19 < v27 )
    {
      v40 = 144;
      goto LABEL_46;
    }
  }
  v39 = 0LL;
  v40 = 133;
LABEL_46:
  v46 = v40;
  v41 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_51;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_51:
    v44 = sub_B0F4C0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v26, *(_QWORD *)(v44 + 8));
  if ( v46 == 133 )
    return 0LL;
  return v39;
}