void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  CompensateArgForShowAll___c_c *v36; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_CompensateArgForShowAll_EffectType__int__o *_9__13_0; // x22
  Il2CppObject *v39; // x23
  struct CompensateArgForShowAll___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BitValue_CompensateArgForShowAll_EffectType__o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_ShopRootConstants_State__o *v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40FA1BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CompensateArgForShowAll_EffectType___ctor__, perf);
    sub_B16FFC(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v11);
    sub_B16FFC(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v12);
    sub_B16FFC(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v13);
    sub_B16FFC(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v14);
    sub_B16FFC(&Method_CompensateArgForShowAll___ctor_b__13_1__, v15);
    sub_B16FFC(&Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__, v16);
    sub_B16FFC(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v17);
    sub_B16FFC(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v18);
    sub_B16FFC(&CompensateArgForShowAll___c_TypeInfo, v19);
    byte_40FA1BA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)perf, v20, v21, v22, v23, v24, v25);
  this->fields._ActObj_k__BackingField = actObj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ActObj_k__BackingField,
    (System_Int32_array **)actObj,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v36 = CompensateArgForShowAll___c_TypeInfo;
  if ( (BYTE3(CompensateArgForShowAll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v36 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B170CC(
                                                                           System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo,
                                                                           v32,
                                                                           v33,
                                                                           v34,
                                                                           v35);
    System_Func_CompensateArgForShowAll_EffectType__int____ctor(
      _9__13_0,
      v39,
      Method_CompensateArgForShowAll___c___ctor_b__13_0__,
      (const MethodInfo_2B67668 *)Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    v40 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v40->__9__13_0 = _9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (BitValue_CompensateArgForShowAll_EffectType__o *)sub_B170CC(
                                                            BitValue_CompensateArgForShowAll_EffectType__TypeInfo,
                                                            v32,
                                                            v33,
                                                            v34,
                                                            v35);
  BitValue_CompensateArgForShowAll_EffectType____ctor(
    v47,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_2902330 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectTypeBit_k__BackingField,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v58 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                      System_Action_CompensateArgForShowAll_EffectType__TypeInfo,
                                                      v54,
                                                      v55,
                                                      v56,
                                                      v57);
  System_Action_ShopRootConstants_State____ctor(
    v58,
    (Il2CppObject *)this,
    Method_CompensateArgForShowAll___ctor_b__13_1__,
    (const MethodInfo_24B6054 *)Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
  BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    (System_Action_T__o *)v58,
    (const MethodInfo_18B7298 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (System_Int32_array **)extraEffectIdArray,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_40FA1BB & 1) == 0 )
  {
    sub_B16FFC(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_40FA1BB = 1;
  }
  EffectTypeBit_k__BackingField = this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_B170D4();
  BitValue_CompensateArgForShowAll_EffectType___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_290236C *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
}


UnityEngine_GameObject_o *__fastcall CompensateArgForShowAll__get_ActObj(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ActObj_k__BackingField;
}


BitValue_CompensateArgForShowAll_EffectType__o *__fastcall CompensateArgForShowAll__get_EffectTypeBit(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectTypeBit_k__BackingField;
}


System_Int32_array *__fastcall CompensateArgForShowAll__get_ExtraEffectIdArray(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ExtraEffectIdArray_k__BackingField;
}


BattlePerformance_o *__fastcall CompensateArgForShowAll__get_Perf(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall CompensateArgForShowAll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7162 & 1) == 0 )
  {
    sub_B16FFC(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_40F7162 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CompensateArgForShowAll___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompensateArgForShowAll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall CompensateArgForShowAll___c___ctor(CompensateArgForShowAll___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CompensateArgForShowAll___c____ctor_b__13_0(
        CompensateArgForShowAll___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}