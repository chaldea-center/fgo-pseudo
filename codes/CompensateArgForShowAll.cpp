void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  CompensateArgForShowAll___c_c *v40; // x0
  System_Func_T__TResult__o *_9__13_0; // x22
  Il2CppObject *v42; // x23
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  BitValue_T__o *v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_T__o *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4B183E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, perf, actObj);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v11, v12);
    sub_1BCA7E0(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v13, v14);
    sub_1BCA7E0(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_CompensateArgForShowAll___ctor_b__13_1__, v17, v18);
    sub_1BCA7E0(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v21, v22);
    sub_1BCA7E0(&CompensateArgForShowAll___c_TypeInfo, v23, v24);
    byte_4B183E0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, v25, v26, v27, v28, v29, v30);
  this->fields._ActObj_k__BackingField = actObj;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ActObj_k__BackingField,
    (int64_t)actObj,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v40 = CompensateArgForShowAll___c_TypeInfo;
  if ( !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo, v37);
    v40 = CompensateArgForShowAll___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v40->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40, v37);
      v40 = CompensateArgForShowAll___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v40->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo,
                                              v37,
                                              v38,
                                              v39);
    System_Func_Int32Enum__int____ctor(_9__13_0, v42, Method_CompensateArgForShowAll___c___ctor_b__13_0__, 0LL);
    static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_CompensateArgForShowAll_EffectType__int__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (BitValue_T__o *)sub_1BCAA2C(BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v37, v38, v39);
  BitValue_Int32Enum____ctor(
    v50,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_3137100 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = (struct BitValue_CompensateArgForShowAll_EffectType__o *)v50;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectTypeBit_k__BackingField,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v60 = (System_Action_T__o *)sub_1BCAA2C(System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v57, v58, v59);
  System_Action_Int32Enum____ctor(v60, (Il2CppObject *)this, Method_CompensateArgForShowAll___ctor_b__13_1__, 0LL);
  BasicHelper__ForEach_Int32Enum_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    v60,
    (const MethodInfo_2EFF984 *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (int64_t)extraEffectIdArray,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_T__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4B183E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x, method);
    byte_4B183E1 = 1;
  }
  EffectTypeBit_k__BackingField = (BitValue_T__o *)this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  BitValue_Int32Enum___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_3137130 *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183E2 & 1) == 0 )
  {
    sub_1BCA7E0(&CompensateArgForShowAll___c_TypeInfo, v1, v2);
    byte_4B183E2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CompensateArgForShowAll___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CompensateArgForShowAll___c_TypeInfo->static_fields->__9 = (struct CompensateArgForShowAll___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CompensateArgForShowAll___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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