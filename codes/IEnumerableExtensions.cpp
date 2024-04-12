void __fastcall IEnumerableExtensions___cctor(const MethodInfo *method)
{
  ;
}


Il2CppObject *__fastcall IEnumerableExtensions__DrawLottery_object_(
        System_Collections_Generic_IEnumerable_T__o *self,
        System_Func_T__int__o *getWeightFunc,
        const MethodInfo_1B7C340 *method)
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
  __int64 v19; // x3
  int v20; // w22
  Il2CppClass *_2_System_Collections_Generic_IEnumerable_T; // x23
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x21
  int v29; // w24
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  Il2CppClass *_3_System_Collections_Generic_IEnumerator_T; // x23
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x23
  int v42; // w8
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  int v48; // [xsp+0h] [xbp-50h]

  if ( (byte_42B1FC8 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&IEnumerableExtensions_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&System_Random_TypeInfo);
    byte_42B1FC8 = 1;
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
    v9 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
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
    sub_B52920(static_fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    v8 = IEnumerableExtensions_TypeInfo;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = IEnumerableExtensions_TypeInfo;
  }
  random = v8->static_fields->random;
  if ( !random )
    sub_B52A5C(0LL, v6);
  v20 = ((__int64 (__fastcall *)(struct System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))random->klass->vtable._6_Next.method)(
          random,
          0LL,
          v7,
          random->klass->vtable._7_Next.methodPtr);
  _2_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE2(_2_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_2_System_Collections_Generic_IEnumerable_T_);
  klass = self->klass;
  if ( *(_WORD *)&self->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _2_System_Collections_Generic_IEnumerable_T )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&self->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AEB880(self, _2_System_Collections_Generic_IEnumerable_T, 0LL, v19);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          self,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_B52A5C(0LL, v26);
  v29 = 0;
  while ( 1 )
  {
    v30 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_31;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_31:
      v33 = sub_AEB880(v28, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v28, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    _3_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE2(_3_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AEB684(method->rgctx_data->_3_System_Collections_Generic_IEnumerator_T_);
    v35 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((Il2CppClass **)v37 - 1) != _3_System_Collections_Generic_IEnumerator_T )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_40;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_40:
      v38 = sub_AEB880(v28, _3_System_Collections_Generic_IEnumerator_T, 0LL, v27);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v28, *(_QWORD *)(v38 + 8));
    if ( !getWeightFunc )
      sub_B52A5C(v39, v40);
    v41 = (Il2CppObject *)v39;
    v29 += ((__int64 (__fastcall *)(System_Func_T__int__o *, __int64, MethodInfo *))method->rgctx_data->_4_System_Func_T__int__Invoke->methodPointer)(
             getWeightFunc,
             v39,
             method->rgctx_data->_4_System_Func_T__int__Invoke);
    if ( v20 < v29 )
    {
      v42 = 144;
      goto LABEL_46;
    }
  }
  v41 = 0LL;
  v42 = 133;
LABEL_46:
  v48 = v42;
  v43 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v44 = 0LL;
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_51;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_51:
    v46 = sub_AEB880(v28, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v28, *(_QWORD *)(v46 + 8));
  if ( v48 == 133 )
    return 0LL;
  return v41;
}