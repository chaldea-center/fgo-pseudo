void __fastcall IEnumerableExtensions___cctor(const MethodInfo *method)
{
  ;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_1AA8A64 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int v10; // w22
  IEnumerableExtensions_c *v11; // x8
  System_Random_o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  IEnumerableExtensions_c *v19; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct System_Random_o *random; // x0
  __int64 v22; // x3
  int v23; // w22
  Il2CppClass *_2_System_Collections_Generic_IEnumerable_T; // x23
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  __int64 v31; // x21
  int v32; // w24
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x23
  int v45; // w8
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  int v51; // [xsp+0h] [xbp-50h]

  if ( (byte_41893A7 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, getWeightFunc);
    sub_B2C35C(&IEnumerableExtensions_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&System_Random_TypeInfo, v8);
    byte_41893A7 = 1;
  }
  if ( !self
    || (((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *))method->rgctx_data->_0_System_Linq_Enumerable_Any_T_->methodPointer)(self) & 1) == 0 )
  {
    return 0LL;
  }
  v10 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Func_T__int__o *))method->rgctx_data->_1_System_Linq_Enumerable_Sum_T_->methodPointer)(
          self,
          getWeightFunc);
  v11 = IEnumerableExtensions_TypeInfo;
  if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
    v11 = IEnumerableExtensions_TypeInfo;
  }
  if ( !v11->static_fields->random )
  {
    v12 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
    System_Random___ctor(v12, 0LL);
    v19 = IEnumerableExtensions_TypeInfo;
    if ( (BYTE3(IEnumerableExtensions_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !IEnumerableExtensions_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(IEnumerableExtensions_TypeInfo);
      v19 = IEnumerableExtensions_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v19->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v12;
    sub_B2C2F8(static_fields, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    v11 = IEnumerableExtensions_TypeInfo;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = IEnumerableExtensions_TypeInfo;
  }
  random = v11->static_fields->random;
  if ( !random )
    sub_B2C434(0LL, v9);
  v23 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v10,
          random->klass->vtable._7_Next.methodPtr);
  _2_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE2(_2_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_);
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
    p_method = sub_AC5258(self, _2_System_Collections_Generic_IEnumerable_T, 0LL, v22);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v31 )
    sub_B2C434(0LL, v29);
  v32 = 0;
  while ( 1 )
  {
    v33 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_31;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_31:
      v36 = sub_AC5258(v31, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v31, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE2(_3_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_);
    v38 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((Il2CppClass **)v40 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_40;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_40:
      v41 = sub_AC5258(v31, _3_System_Collections_Generic_IEnumerator_T, 0LL, v30);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v31, *(_QWORD *)(v41 + 8));
    if ( !getWeightFunc )
      sub_B2C434(v42, v43);
    v44 = (Il2CppObject *)v42;
    v32 += ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__int__Invoke->methodPointer)(
             getWeightFunc,
             v42,
             method->rgctx_data->_4_System_Func_T__int__Invoke);
    if ( v23 < v32 )
    {
      v45 = 144;
      goto LABEL_46;
    }
  }
  v44 = 0LL;
  v45 = 133;
LABEL_46:
  v51 = v45;
  v46 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_51;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_51:
    v49 = sub_AC5258(v31, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v31, *(_QWORD *)(v49 + 8));
  if ( v51 == 133 )
    return 0LL;
  return v44;
}