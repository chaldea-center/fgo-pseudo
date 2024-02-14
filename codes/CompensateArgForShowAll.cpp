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
  CompensateArgForShowAll___c_c *v34; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_CompensateArgForShowAll_EffectType__int__o *_9__13_0; // x22
  Il2CppObject *v37; // x23
  struct CompensateArgForShowAll___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BitValue_CompensateArgForShowAll_EffectType__o *v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  System_Action_ShopRootConstants_State__o *v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_4214E4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CompensateArgForShowAll_EffectType___ctor__, perf);
    sub_B0D8A4(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v11);
    sub_B0D8A4(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v12);
    sub_B0D8A4(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v13);
    sub_B0D8A4(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v14);
    sub_B0D8A4(&Method_CompensateArgForShowAll___ctor_b__13_1__, v15);
    sub_B0D8A4(&Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__, v16);
    sub_B0D8A4(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v17);
    sub_B0D8A4(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v18);
    sub_B0D8A4(&CompensateArgForShowAll___c_TypeInfo, v19);
    byte_4214E4B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)perf, v20, v21, v22, v23, v24, v25);
  this->fields._ActObj_k__BackingField = actObj;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ActObj_k__BackingField,
    (System_Int32_array **)actObj,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = CompensateArgForShowAll___c_TypeInfo;
  if ( (BYTE3(CompensateArgForShowAll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v34 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B0D974(
                                                                           System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo,
                                                                           v32,
                                                                           v33);
    System_Func_CompensateArgForShowAll_EffectType__int____ctor(
      _9__13_0,
      v37,
      Method_CompensateArgForShowAll___c___ctor_b__13_0__,
      (const MethodInfo_26154E0 *)Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    v38 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v38->__9__13_0 = _9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (BitValue_CompensateArgForShowAll_EffectType__o *)sub_B0D974(
                                                            BitValue_CompensateArgForShowAll_EffectType__TypeInfo,
                                                            v32,
                                                            v33);
  BitValue_CompensateArgForShowAll_EffectType____ctor(
    v45,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_2AA9500 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectTypeBit_k__BackingField,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = (System_Action_ShopRootConstants_State__o *)sub_B0D974(
                                                      System_Action_CompensateArgForShowAll_EffectType__TypeInfo,
                                                      v52,
                                                      v53);
  System_Action_ShopRootConstants_State____ctor(
    v54,
    (Il2CppObject *)this,
    Method_CompensateArgForShowAll___ctor_b__13_1__,
    (const MethodInfo_246D780 *)Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
  BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    (System_Action_T__o *)v54,
    (const MethodInfo_1708408 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (System_Int32_array **)extraEffectIdArray,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4214E4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_4214E4C = 1;
  }
  EffectTypeBit_k__BackingField = this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_B0D97C(0LL);
  BitValue_CompensateArgForShowAll_EffectType___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_2AA953C *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213164 & 1) == 0 )
  {
    sub_B0D8A4(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_4213164 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CompensateArgForShowAll___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompensateArgForShowAll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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