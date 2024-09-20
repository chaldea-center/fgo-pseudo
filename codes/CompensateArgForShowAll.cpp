void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  CompensateArgForShowAll___c_c *v15; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v17; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  BitValue_T__o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_T__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5D30B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
    sub_1B885B0(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
    sub_1B885B0(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_1B885B0(&Method_CompensateArgForShowAll___ctor_b__13_1__);
    sub_1B885B0(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    sub_1B885B0(&Method_CompensateArgForShowAll___c___ctor_b__13_0__);
    sub_1B885B0(&CompensateArgForShowAll___c_TypeInfo);
    byte_4A5D30B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)perf, v11, v12);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ActObj_k__BackingField, (int32_t)actObj, v13, v14);
  v15 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v15 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = CompensateArgForShowAll___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(_9__13_0, v17, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v19, v20);
  }
  v21 = (BitValue_T__o *)sub_1B887FC(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_Int32Enum____ctor(
    v21,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_30A2270 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._EffectTypeBit_k__BackingField, (int32_t)v21, v22, v23);
  v24 = (System_Action_T__o *)sub_1B887FC(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_Int32Enum____ctor(v24, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v24,
    (const MethodInfo_2E6C9C0 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int32_t)extraEffectIdArray,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4A5D30C & 1) == 0 )
  {
    sub_1B885B0(&Method_BitValue_CompensateArgForShowAll_EffectType__On__);
    byte_4A5D30C = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1B8880C(0LL, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_30A22A0 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D30D & 1) == 0 )
  {
    sub_1B885B0(&CompensateArgForShowAll___c_TypeInfo);
    byte_4A5D30D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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