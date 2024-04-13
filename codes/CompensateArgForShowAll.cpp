void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CompensateArgForShowAll___c_c *v50; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_CompensateArgForShowAll_EffectType__int__o *_9__13_0; // x22
  Il2CppObject *v53; // x23
  struct CompensateArgForShowAll___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  BitValue_CompensateArgForShowAll_EffectType__o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Action_ShopRootConstants_State__o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_42E8ED6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_CompensateArgForShowAll_EffectType___ctor__,
      (_DWORD)perf,
      (_DWORD)actObj,
      effectTypes);
    sub_B5D5C4(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v14, v15, v16);
    sub_B5D5C4(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v17, v18, v19);
    sub_B5D5C4(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_CompensateArgForShowAll___ctor_b__13_1__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v32, v33, v34);
    sub_B5D5C4(&CompensateArgForShowAll___c_TypeInfo, v35, v36, v37);
    byte_42E8ED6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)perf, v38, v39, v40, v41, v42, v43);
  this->fields._ActObj_k__BackingField = actObj;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ActObj_k__BackingField,
    (System_Int32_array **)actObj,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = CompensateArgForShowAll___c_TypeInfo;
  if ( (BYTE3(CompensateArgForShowAll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v50 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B5D694(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_CompensateArgForShowAll_EffectType__int____ctor(
      _9__13_0,
      v53,
      Method_CompensateArgForShowAll___c___ctor_b__13_0__,
      (const MethodInfo_2C2AE8C *)Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    v54 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v54->__9__13_0 = _9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v54->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = (BitValue_CompensateArgForShowAll_EffectType__o *)sub_B5D694(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_CompensateArgForShowAll_EffectType____ctor(
    v61,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_2BABCE8 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectTypeBit_k__BackingField,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v68,
    (Il2CppObject *)this,
    Method_CompensateArgForShowAll___ctor_b__13_1__,
    (const MethodInfo_258A064 *)Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
  BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    (System_Action_T__o *)v68,
    (const MethodInfo_1AD8004 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (System_Int32_array **)extraEffectIdArray,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_42E8ED7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, x, (_DWORD)method, v3);
    byte_42E8ED7 = 1;
  }
  EffectTypeBit_k__BackingField = this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  BitValue_CompensateArgForShowAll_EffectType___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_2BABD24 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D1F & 1) == 0 )
  {
    sub_B5D5C4(&CompensateArgForShowAll___c_TypeInfo, v1, v2, v3);
    byte_42E6D1F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompensateArgForShowAll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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