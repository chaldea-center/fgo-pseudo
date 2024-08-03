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
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  CompensateArgForShowAll___c_c *v24; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v26; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  BitValue_T__o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_T__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_49FE486 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, perf);
    sub_1B640C8(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v11);
    sub_1B640C8(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v12);
    sub_1B640C8(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v13);
    sub_1B640C8(&Method_CompensateArgForShowAll___ctor_b__13_1__, v14);
    sub_1B640C8(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v15);
    sub_1B640C8(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v16);
    sub_1B640C8(&CompensateArgForShowAll___c_TypeInfo, v17);
    byte_49FE486 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)perf, v18, v19);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ActObj_k__BackingField, (int32_t)actObj, v20, v21);
  v24 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v24 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = CompensateArgForShowAll___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo,
                                              v22,
                                              v23);
    System_Func_Int32Enum__int____ctor(_9__13_0, v26, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v28, v29);
  }
  v30 = (BitValue_T__o *)sub_1B64314(BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v22, v23);
  BitValue_Int32Enum____ctor(
    v30,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_30587F8 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._EffectTypeBit_k__BackingField, (int32_t)v30, v31, v32);
  v35 = (System_Action_T__o *)sub_1B64314(System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v33, v34);
  System_Action_Int32Enum____ctor(v35, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v35,
    (const MethodInfo_2E26560 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int32_t)extraEffectIdArray,
    v36,
    v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_49FE487 & 1) == 0 )
  {
    sub_1B640C8(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_49FE487 = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1B64324(0LL);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_3058828 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE488 & 1) == 0 )
  {
    sub_1B640C8(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_49FE488 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CompensateArgForShowAll___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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