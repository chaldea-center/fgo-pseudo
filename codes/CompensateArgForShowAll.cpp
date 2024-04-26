void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CompensateArgForShowAll___c_c *v23; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_CompensateArgForShowAll_EffectType__int__o *_9__13_0; // x22
  Il2CppObject *v26; // x23
  struct CompensateArgForShowAll___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BitValue_CompensateArgForShowAll_EffectType__o *v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_ShopRootConstants_State__o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4351466 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
    sub_B70694(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
    sub_B70694(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
    sub_B70694(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_B70694(&Method_CompensateArgForShowAll___ctor_b__13_1__);
    sub_B70694(&Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    sub_B70694(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    sub_B70694(&Method_CompensateArgForShowAll___c___ctor_b__13_0__);
    sub_B70694(&CompensateArgForShowAll___c_TypeInfo);
    byte_4351466 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)perf, v11, v12, v13, v14, v15, v16);
  this->fields._ActObj_k__BackingField = actObj;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ActObj_k__BackingField,
    (System_Int32_array **)actObj,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = CompensateArgForShowAll___c_TypeInfo;
  if ( (BYTE3(CompensateArgForShowAll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v23 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B70764(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_CompensateArgForShowAll_EffectType__int____ctor(
      _9__13_0,
      v26,
      Method_CompensateArgForShowAll___c___ctor_b__13_0__,
      (const MethodInfo_29A8734 *)Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    v27 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v27->__9__13_0 = _9__13_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v27->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (BitValue_CompensateArgForShowAll_EffectType__o *)sub_B70764(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_CompensateArgForShowAll_EffectType____ctor(
    v34,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_2C78FB0 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = v34;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectTypeBit_k__BackingField,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v41,
    (Il2CppObject *)this,
    Method_CompensateArgForShowAll___ctor_b__13_1__,
    (const MethodInfo_264AE8C *)Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
  BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    (System_Action_T__o *)v41,
    (const MethodInfo_1BDDD58 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (System_Int32_array **)extraEffectIdArray,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4351467 & 1) == 0 )
  {
    sub_B70694(&Method_BitValue_CompensateArgForShowAll_EffectType__On__);
    byte_4351467 = 1;
  }
  EffectTypeBit_k__BackingField = this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_B7076C(0LL, *(_QWORD *)&x);
  BitValue_CompensateArgForShowAll_EffectType___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_2C78FEC *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FAD1 & 1) == 0 )
  {
    sub_B70694(&CompensateArgForShowAll___c_TypeInfo);
    byte_434FAD1 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompensateArgForShowAll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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