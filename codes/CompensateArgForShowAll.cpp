void CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  CompensateArgForShowAll___c_c *v24; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v27; // x23
  struct CompensateArgForShowAll___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  BitValue_T__o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Action_T__o *v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_593AC52 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
    sub_21FFC50(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
    sub_21FFC50(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_21FFC50(&Method_CompensateArgForShowAll___ctor_b__13_1__);
    sub_21FFC50(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    sub_21FFC50(&Method_CompensateArgForShowAll___c___ctor_b__13_0__);
    sub_21FFC50(&CompensateArgForShowAll___c_TypeInfo);
    byte_593AC52 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Perf_k__BackingField = perf;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)perf, v11, v12, v13, v14, v15, v16);
  this->fields._ActObj_k__BackingField = actObj;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ActObj_k__BackingField,
    (int32_t)actObj,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = CompensateArgForShowAll___c_TypeInfo;
  if ( !*(&CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo, v23);
    v24 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__13_0 = (System_Func_T__TResult__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(_9__13_0, v27, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0);
    v28 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v28->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__13_0, (int32_t)_9__13_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = (BitValue_T__o *)sub_21FFEBC(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_Int32Enum____ctor(
    v35,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_3E435A8 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectTypeBit_k__BackingField,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Action_T__o *)sub_21FFEBC(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_Int32Enum____ctor(v42, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v42,
    (const MethodInfo_37DEEDC *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int32_t)extraEffectIdArray,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


// local variable allocation has failed, the output may be wrong!
void CompensateArgForShowAll____ctor_b__13_1(CompensateArgForShowAll_o *this, int32_t x, const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_593AC53 & 1) == 0 )
  {
    sub_21FFC50(&Method_BitValue_CompensateArgForShowAll_EffectType__On__);
    byte_593AC53 = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_21FFECC(0, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_3E435D8 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
}


UnityEngine_GameObject_o *CompensateArgForShowAll__get_ActObj(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ActObj_k__BackingField;
}


BitValue_CompensateArgForShowAll_EffectType__o *CompensateArgForShowAll__get_EffectTypeBit(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectTypeBit_k__BackingField;
}


System_Int32_array *CompensateArgForShowAll__get_ExtraEffectIdArray(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ExtraEffectIdArray_k__BackingField;
}


BattlePerformance_o *CompensateArgForShowAll__get_Perf(CompensateArgForShowAll_o *this, const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void CompensateArgForShowAll___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AC54 & 1) == 0 )
  {
    sub_21FFC50(&CompensateArgForShowAll___c_TypeInfo);
    byte_593AC54 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CompensateArgForShowAll___c___ctor(CompensateArgForShowAll___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CompensateArgForShowAll___c____ctor_b__13_0(
        CompensateArgForShowAll___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}