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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CompensateArgForShowAll___c_c *v30; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v32; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BitValue_T__o *v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Action_T__o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4BC9D3C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, perf);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v11);
    sub_1C1ABD4(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v12);
    sub_1C1ABD4(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v13);
    sub_1C1ABD4(&Method_CompensateArgForShowAll___ctor_b__13_1__, v14);
    sub_1C1ABD4(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v15);
    sub_1C1ABD4(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v16);
    sub_1C1ABD4(&CompensateArgForShowAll___c_TypeInfo, v17);
    byte_4BC9D3C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, v18, v19, v20, v21, v22, v23);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ActObj_k__BackingField,
    (int64_t)actObj,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v30 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v30->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = CompensateArgForShowAll___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(_9__13_0, v32, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (BitValue_T__o *)sub_1C1AE20(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_Int32Enum____ctor(
    v40,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_31C9F68 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v40;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EffectTypeBit_k__BackingField,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Action_T__o *)sub_1C1AE20(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_Int32Enum____ctor(v47, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v47,
    (const MethodInfo_2F8C0EC *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int64_t)extraEffectIdArray,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4BC9D3D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_4BC9D3D = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1C1AE30(0LL, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_31C9F98 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC9D3E & 1) == 0 )
  {
    sub_1C1ABD4(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_4BC9D3E = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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