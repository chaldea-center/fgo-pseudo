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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CompensateArgForShowAll___c_c *v22; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v24; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  BitValue_T__o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_T__o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B0444E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, perf);
    sub_1BC3008(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v11);
    sub_1BC3008(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v12);
    sub_1BC3008(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v13);
    sub_1BC3008(&Method_CompensateArgForShowAll___ctor_b__13_1__, v14);
    sub_1BC3008(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v15);
    sub_1BC3008(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v16);
    sub_1BC3008(&CompensateArgForShowAll___c_TypeInfo, v17);
    byte_4B0444E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)perf, v18, v19);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ActObj_k__BackingField, (int32_t)actObj, v20, v21);
  v22 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v22 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v22->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CompensateArgForShowAll___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(_9__13_0, v24, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v26, v27);
  }
  v28 = (BitValue_T__o *)sub_1BC3254(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_Int32Enum____ctor(
    v28,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_3231F8C *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectTypeBit_k__BackingField, (int32_t)v28, v29, v30);
  v31 = (System_Action_T__o *)sub_1BC3254(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_Int32Enum____ctor(v31, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v31,
    (const MethodInfo_2FED8E4 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int32_t)extraEffectIdArray,
    v32,
    v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4B0444F & 1) == 0 )
  {
    sub_1BC3008(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_4B0444F = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1BC3264(0LL, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_3231FBC *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B04450 & 1) == 0 )
  {
    sub_1BC3008(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_4B04450 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)CompensateArgForShowAll___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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