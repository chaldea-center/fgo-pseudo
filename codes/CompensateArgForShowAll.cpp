void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CompensateArgForShowAll___c_c *v23; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v25; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  BitValue_T__o *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_T__o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BDE7EA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
    sub_1C21E38(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
    sub_1C21E38(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
    sub_1C21E38(&Method_CompensateArgForShowAll___ctor_b__13_1__);
    sub_1C21E38(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    sub_1C21E38(&Method_CompensateArgForShowAll___c___ctor_b__13_0__);
    sub_1C21E38(&CompensateArgForShowAll___c_TypeInfo);
    byte_4BDE7EA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, v11, v12, v13, v14, v15, v16);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ActObj_k__BackingField,
    (int64_t)actObj,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v23 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v23->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = CompensateArgForShowAll___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(_9__13_0, v25, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (BitValue_T__o *)sub_1C22084(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_Int32Enum____ctor(
    v33,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_31DD6B8 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v33;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectTypeBit_k__BackingField,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Action_T__o *)sub_1C22084(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_Int32Enum____ctor(v40, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v40,
    (const MethodInfo_2F9CA60 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int64_t)extraEffectIdArray,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4BDE7EB & 1) == 0 )
  {
    sub_1C21E38(&Method_BitValue_CompensateArgForShowAll_EffectType__On__);
    byte_4BDE7EB = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1C22094(0LL, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_31DD6E8 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE7EC & 1) == 0 )
  {
    sub_1C21E38(&CompensateArgForShowAll___c_TypeInfo);
    byte_4BDE7EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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