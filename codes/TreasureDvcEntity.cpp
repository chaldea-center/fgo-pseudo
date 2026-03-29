void TreasureDvcEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TreasureDvcEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct TreasureDvcEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct TreasureDvcEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct TreasureDvcEntity_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct TreasureDvcEntity_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct TreasureDvcEntity_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  struct TreasureDvcEntity_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct TreasureDvcEntity_StaticFields *v71; // x0
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v79; // x19
  __int64 v80; // x0
  __int64 v81; // x1
  struct TreasureDvcEntity_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7

  if ( (byte_4D316FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_4981/*"DAMAGE_ONE"*/);
    sub_1C93AD4(&StringLiteral_20126/*"groupSeqIDs"*/);
    sub_1C93AD4(&StringLiteral_18711/*"delayEnd"*/);
    sub_1C93AD4(&StringLiteral_16637/*"_actSet"*/);
    sub_1C93AD4(&StringLiteral_4980/*"DAMAGE_ALL"*/);
    sub_1C93AD4(&StringLiteral_9809/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/);
    sub_1C93AD4(&StringLiteral_23242/*"randomWeights"*/);
    sub_1C93AD4(&StringLiteral_24318/*"tdTypeChangeIDs"*/);
    sub_1C93AD4(&StringLiteral_24723/*"unit{0}_"*/);
    sub_1C93AD4(&StringLiteral_6616/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/);
    sub_1C93AD4(&StringLiteral_9360/*"NOT_DAMAGE"*/);
    sub_1C93AD4(&StringLiteral_9413/*"NP_INDIVIDUALITY_{0}"*/);
    sub_1C93AD4(&StringLiteral_23241/*"randomSeqIds"*/);
    byte_4D316FB = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_23241/*"randomSeqIds"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_23241/*"randomSeqIds"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23242/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_23242/*"randomWeights"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_20126/*"groupSeqIDs"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_20126/*"groupSeqIDs"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->KEY_GROUP_SEQ_ID, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24318/*"tdTypeChangeIDs"*/;
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v24->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_24318/*"tdTypeChangeIDs"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->KEY_TD_TYPE_CHANGE_ID, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_18711/*"delayEnd"*/;
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v32->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18711/*"delayEnd"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->KEY_TD_DELAY_END, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_16637/*"_actSet"*/;
  v40 = TreasureDvcEntity_TypeInfo->static_fields;
  v40->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16637/*"_actSet"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->KET_SUFFIX_ACTSET, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_24723/*"unit{0}_"*/;
  v48 = TreasureDvcEntity_TypeInfo->static_fields;
  v48->UNIT_PREFIX_FORMAT = (struct System_String_o *)StringLiteral_24723/*"unit{0}_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->UNIT_PREFIX_FORMAT, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_9809/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  v56 = TreasureDvcEntity_TypeInfo->static_fields;
  v56->OVERWRITE_TO_NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9809/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->OVERWRITE_TO_NP_INDIVIDUALITY, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_6616/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  v64 = TreasureDvcEntity_TypeInfo->static_fields;
  v64->FUNCTION_TYPE_NOT_NP_DAMAGE = (struct System_String_o *)StringLiteral_6616/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->FUNCTION_TYPE_NOT_NP_DAMAGE, v63, v65, v66, v67, v68, v69, v70);
  v71 = TreasureDvcEntity_TypeInfo->static_fields;
  v72 = StringLiteral_9413/*"NP_INDIVIDUALITY_{0}"*/;
  v71->NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9413/*"NP_INDIVIDUALITY_{0}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v71->NP_INDIVIDUALITY, v72, v73, v74, v75, v76, v77, v78);
  v79 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int64Enum__object____ctor(
    v79,
    (const MethodInfo_350A038 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
  if ( !v79 )
    sub_1C93D2C(v80, v81);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v79,
    -1,
    (Il2CppObject *)StringLiteral_9360/*"NOT_DAMAGE"*/,
    (const MethodInfo_350AA08 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v79,
    1,
    (Il2CppObject *)StringLiteral_4980/*"DAMAGE_ALL"*/,
    (const MethodInfo_350AA08 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v79,
    2,
    (Il2CppObject *)StringLiteral_4981/*"DAMAGE_ONE"*/,
    (const MethodInfo_350AA08 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  v82 = TreasureDvcEntity_TypeInfo->static_fields;
  v82->NpEffectFlagToTypeName = (struct System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__o *)v79;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v82->NpEffectFlagToTypeName, (int32_t)v79, v83, v84, v85, v86, v87, v88);
}


void TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D316FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D316FA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *TreasureDvcEntity__GetAssumedEffectId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D316F4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17044/*"assumedEffectId"*/);
    byte_4D316F4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17044/*"assumedEffectId"*/, 0);
}


int64_t TreasureDvcEntity__GetEffectFlag(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int64_t effectFlag; // x8

  effectFlag = this->fields.effectFlag;
  if ( (effectFlag & 1) != 0 )
    return 1;
  if ( (effectFlag & 2) != 0 )
    return 2;
  return -1;
}


System_Int32_array *TreasureDvcEntity__GetExcludeTdChangeTypes(
        TreasureDvcEntity_o *this,
        System_Int32_array *defArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D316ED & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19519/*"excludeTdChangeTypes"*/);
    byte_4D316ED = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19519/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D316F3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22591/*"npNameFileSuffix"*/);
    byte_4D316F3 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22591/*"npNameFileSuffix"*/, 0, 0);
}


int32_t TreasureDvcEntity__GetRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t *groupSeqId,
        int32_t actSetId,
        int32_t unitIndex,
        const MethodInfo *method)
{
  int32_t seqId; // w21
  __int64 IsRandomTD_43684968; // x0
  __int64 v13; // x1
  int v14; // w8
  __int64 v15; // x26
  const MethodInfo *v16; // x4
  __int64 v17; // x24
  __int64 v18; // x8
  unsigned __int64 v19; // x29
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  int32_t v22; // w25
  TreasureDvcEntity_c *v23; // x0
  int32_t v24; // w27
  TreasureDvcEntity_o *AddLimitKey; // x26
  const MethodInfo *v26; // x4
  TreasureDvcEntity_o *v27; // x28
  const MethodInfo *v28; // x4
  System_String_o *v29; // x27
  const MethodInfo *v30; // x5
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  int32_t RandomSeqIndex; // w22
  System_String_o *v37; // x0
  const MethodInfo *v38; // x3
  int32_t *v40; // [xsp+8h] [xbp-78h]
  __int64 v41; // [xsp+10h] [xbp-70h]
  System_String_o *unitPrefix; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D316E7 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316E7 = 1;
  }
  unitPrefix = 0;
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  IsRandomTD_43684968 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !IsRandomTD_43684968 )
    goto LABEL_27;
  v14 = *(_DWORD *)(IsRandomTD_43684968 + 24);
  v15 = IsRandomTD_43684968;
  if ( !v14 )
    goto LABEL_26;
  *(_DWORD *)(IsRandomTD_43684968 + 32) = limitCount;
  if ( v14 == 1 )
    goto LABEL_26;
  *(_DWORD *)(IsRandomTD_43684968 + 36) = -1;
  if ( actSetId )
  {
    IsRandomTD_43684968 = sub_1C93B7C(int___TypeInfo, 2);
    if ( IsRandomTD_43684968 )
    {
      v17 = IsRandomTD_43684968;
      if ( *(_DWORD *)(IsRandomTD_43684968 + 24) )
      {
        *(_DWORD *)(IsRandomTD_43684968 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_26:
      sub_1C93D34(IsRandomTD_43684968);
    }
LABEL_27:
    sub_1C93D2C(IsRandomTD_43684968, v13);
  }
  IsRandomTD_43684968 = sub_1C93B7C(int___TypeInfo, 1);
  v17 = IsRandomTD_43684968;
LABEL_11:
  v18 = *(_QWORD *)(v15 + 24);
  if ( (int)v18 >= 1 )
  {
    v40 = groupSeqId;
    v19 = 0;
    v41 = v15;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
        goto LABEL_26;
      if ( !v17 )
        goto LABEL_27;
      v20 = *(_QWORD *)(v17 + 24);
      if ( (int)v20 >= 1 )
        break;
LABEL_22:
      ++v19;
      LODWORD(v18) = *(_DWORD *)(v41 + 24);
      if ( (__int64)v19 >= (int)v18 )
        return seqId;
    }
    v21 = 0;
    v22 = *(_DWORD *)(v41 + 4 * v19 + 32);
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_26;
      v23 = TreasureDvcEntity_TypeInfo;
      v24 = *(_DWORD *)(v17 + 32 + 4 * v21);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v23 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v23,
                                             v23->static_fields->KEY_RANDOM_SEQ_ID,
                                             v22,
                                             v24,
                                             v16);
      v27 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v22,
                                     v24,
                                     v26);
      v29 = TreasureDvcEntity__makeAddLimitKey(
              v27,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v22,
              v24,
              v28);
      IsRandomTD_43684968 = TreasureDvcEntity__IsRandomTD_43684968(
                              this,
                              (System_String_o *)AddLimitKey,
                              (System_String_o *)v27,
                              unitIndex,
                              &unitPrefix,
                              v30);
      if ( (IsRandomTD_43684968 & 1) != 0 )
        break;
      LODWORD(v20) = *(_DWORD *)(v17 + 24);
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_22;
    }
    v31 = System_String__Concat_64425724(unitPrefix, (System_String_o *)AddLimitKey, 0);
    v32 = System_String__Concat_64425724(unitPrefix, (System_String_o *)v27, 0);
    seqId = TreasureDvcEntity__getRandomSeqId(this, v31, v32, v33);
    v34 = System_String__Concat_64425724(unitPrefix, (System_String_o *)AddLimitKey, 0);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, v34, seqId, v35);
    v37 = System_String__Concat_64425724(unitPrefix, v29, 0);
    *v40 = TreasureDvcEntity__getGroupSeqId(this, v37, RandomSeqIndex, v38);
  }
  return seqId;
}


int32_t TreasureDvcEntity__GetSequenceMaxUnitIndex(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x22
  System_Func_object__bool__o *v8; // x23

  if ( (byte_4D316F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_string____79098232);
    sub_1C93AD4(&System_Func_string__bool__TypeInfo);
    sub_1C93AD4(&Method_TreasureDvcEntity___c__DisplayClass60_0__GetSequenceMaxUnitIndex_b__0__);
    sub_1C93AD4(&TreasureDvcEntity___c__DisplayClass60_0_TypeInfo);
    byte_4D316F8 = 1;
  }
  v3 = sub_1C93D20(TreasureDvcEntity___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 || (*(_DWORD *)(v3 + 16) = 0, (script = this->fields.script) == 0) )
LABEL_8:
    sub_1C93D2C(script, v5);
  v6 = 0;
  while ( 1 )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    v8 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_TreasureDvcEntity___c__DisplayClass60_0__GetSequenceMaxUnitIndex_b__0__,
      0);
    if ( !System_Linq_Enumerable__Any_object__52110824(
            (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
            (System_Func_TSource__bool__o *)v8,
            (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_string____79098232) )
      return v6;
    script = this->fields.script;
    v6 = *(_DWORD *)(v3 + 16);
    if ( !script )
      goto LABEL_8;
  }
}


System_Collections_Generic_List_int__o *TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
        TreasureDvcEntity_o *this,
        int32_t battlePontId,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_int__o *v6; // x19
  Il2CppObject *v7; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__object__o *v19; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_String_o *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  int32_t v47; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D316F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C93AD4(&System_Func_string__string__TypeInfo);
    sub_1C93AD4(&System_Func_string__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1C93AD4(&Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1C93AD4(&TreasureDvcEntity___c__DisplayClass57_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_24313/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4D316F5 = 1;
  }
  result = 0;
  v5 = sub_1C93D20(TreasureDvcEntity___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v47 = battlePontId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24313/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v7,
                                                                        0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)script, v10, v11, v12, v13, v14, v15);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v17 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0),
        v18 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_string___),
        v19 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v18,
                                                                               (System_Func_TSource__TResult__o *)v19,
                                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0) )
  {
LABEL_41:
    sub_1C93D2C(script, v9);
  }
  klass = script->klass;
  v21 = script;
  v22 = *(unsigned __int16 *)&script->klass->_2.rank;
  if ( *(_WORD *)&script->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_10;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v24 = sub_1C69E5C(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v24)(
          v21,
          *(_QWORD *)(v24 + 8));
  if ( !v26 )
    sub_1C93D2C(0, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_17;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_17:
      v30 = sub_1C69E5C(v26, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v33 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_24;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_24:
      v34 = sub_1C69E5C(v26, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v36 = System_Int32__TryParse(v35, &result, 0);
    if ( v36 )
    {
      if ( !v6 )
        sub_1C93D2C(v36, v37);
      v38 = (unsigned int)result;
      items = v6->fields._items;
      v40 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C93D2C(v36, v38);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v38,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v38;
      }
    }
  }
  v42 = *(_QWORD *)v26;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_36;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_36:
    v45 = sub_1C69E5C(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v26, *(_QWORD *)(v45 + 8));
  return v6;
}


System_String_o *TreasureDvcEntity__GetUnitPrefix(int32_t unitIndex, const MethodInfo *method)
{
  TreasureDvcEntity_c *v3; // x0
  System_String_o *UNIT_PREFIX_FORMAT; // x20
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D316F9 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316F9 = 1;
  }
  if ( unitIndex <= 0 )
    return string_TypeInfo->static_fields->Empty;
  v3 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v3 = TreasureDvcEntity_TypeInfo;
  }
  UNIT_PREFIX_FORMAT = v3->static_fields->UNIT_PREFIX_FORMAT;
  v7 = unitIndex;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format(UNIT_PREFIX_FORMAT, v5, 0);
}


bool TreasureDvcEntity__HasEffectFlag(TreasureDvcEntity_o *this, int64_t effectFlag, const MethodInfo *method)
{
  return (this->fields.effectFlag & effectFlag) != 0;
}


void TreasureDvcEntity__InitializeTreasureDeviceIndividuality(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  TreasureDvcEntity_c *v5; // x8
  ConstantStrMaster_o *v6; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *NpEffectFlagToTypeName; // x0
  TreasureDvcEntity_c *v8; // x0
  Il2CppObject *current; // x21
  System_String_o *v10; // x0
  System_Collections_ICollection_o *ValueArray; // x22
  TreasureDvcEntity_c *v12; // x0
  System_String_o *v13; // x1
  struct System_Int32_array *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v23; // x21
  System_Collections_ICollection_o *FunctionEntitiesByIds; // x21
  struct System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  TreasureDvcEntity_c *v32; // x0
  struct TreasureDvcEntity_StaticFields *static_fields; // x8
  System_String_o *NP_INDIVIDUALITY; // x22
  Il2CppObject *Item; // x0
  struct System_Int32_array *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Int32_array **p_treasureDeviceEffectIndividuality; // x19
  TreasureDvcEntity_c *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *v45; // x23
  System_Collections_Generic_HashSet_int__o *v46; // x22
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x26
  __int64 v50; // x1
  bool isAllTargets; // w8
  TreasureDvcEntity_c *v52; // x0
  uint32_t cctor_finished; // w9
  struct TreasureDvcEntity_StaticFields *v54; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v55; // x0
  System_String_o *v56; // x21
  Il2CppObject *v57; // x1
  System_String_o *v58; // x1
  System_Int32_array *v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct TreasureDvcEntity_StaticFields *v66; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v67; // x0
  System_String_o *v68; // x21
  Il2CppObject *v69; // x1
  System_String_o *v70; // x1
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D316DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor___78987192);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
    byte_4D316DC = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  v5 = TreasureDvcEntity_TypeInfo;
  v6 = (ConstantStrMaster_o *)Master_object;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v5 = TreasureDvcEntity_TypeInfo;
  }
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int64Enum__object___get_Values(
                                                                                      NpEffectFlagToTypeName,
                                                                                      (const MethodInfo_350A818 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_Int64Enum__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v71,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)NpEffectFlagToTypeName,
    (const MethodInfo_3BBA0B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
  v73 = v71;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v73,
            (const MethodInfo_362840C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__) )
  {
    v8 = TreasureDvcEntity_TypeInfo;
    current = v73.fields._current;
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v8 = TreasureDvcEntity_TypeInfo;
    }
    v10 = System_String__Format(v8->static_fields->OVERWRITE_TO_NP_INDIVIDUALITY, current, 0);
    if ( !v6 )
      sub_1C93D2C(v10, v10);
    ValueArray = (System_Collections_ICollection_o *)ConstantStrMaster__GetValueArray(v6, v10, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty(ValueArray, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)ValueArray,
           this->fields.id,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v12 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v12 = TreasureDvcEntity_TypeInfo;
      }
      v13 = System_String__Format(v12->static_fields->NP_INDIVIDUALITY, current, 0);
      v14 = ConstantStrMaster__GetValueArray(v6, v13, 0, 0);
      if ( !v14 )
        v14 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
      this->fields.treasureDeviceEffectIndividuality = v14;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
        (int32_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v73,
        (const MethodInfo_3628408 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v73,
    (const MethodInfo_3628408 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)NpEffectFlagToTypeName,
             this->fields.id,
             this->fields.maxLv,
             v21);
  if ( !Entity )
    goto LABEL_30;
  v23 = Entity;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entity->fields.funcId, 0) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  FunctionEntitiesByIds = (System_Collections_ICollection_o *)FunctionMaster__GetFunctionEntitiesByIds(
                                                                (FunctionMaster_o *)NpEffectFlagToTypeName,
                                                                v23->fields.funcId,
                                                                0);
  if ( BasicHelper__IsNullOrEmpty(FunctionEntitiesByIds, 0) )
  {
LABEL_30:
    v25 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
    this->fields.treasureDeviceEffectIndividuality = v25;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
      (int32_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    return;
  }
  v32 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v32 = TreasureDvcEntity_TypeInfo;
  }
  static_fields = v32->static_fields;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NP_INDIVIDUALITY = static_fields->NP_INDIVIDUALITY;
  Item = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
           NpEffectFlagToTypeName,
           -1,
           (const MethodInfo_350A968 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__Format(
                                                                                      NP_INDIVIDUALITY,
                                                                                      Item,
                                                                                      0);
  if ( !v6 )
    goto LABEL_63;
  v36 = ConstantStrMaster__GetValueArray(v6, (System_String_o *)NpEffectFlagToTypeName, 0, 0);
  if ( !v36 )
    v36 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.treasureDeviceEffectIndividuality = v36;
  p_treasureDeviceEffectIndividuality = &this->fields.treasureDeviceEffectIndividuality;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_treasureDeviceEffectIndividuality,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v44 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v44 = TreasureDvcEntity_TypeInfo;
  }
  v45 = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                         v6,
                                                         v44->static_fields->FUNCTION_TYPE_NOT_NP_DAMAGE,
                                                         0,
                                                         0);
  if ( !v45 )
    v45 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C93B7C(int___TypeInfo, 0);
  v46 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57824408(
    v46,
    v45,
    (const MethodInfo_3725498 *)Method_System_Collections_Generic_HashSet_int___ctor___78987192);
  if ( !FunctionEntitiesByIds )
LABEL_63:
    sub_1C93D2C(NpEffectFlagToTypeName, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)FunctionEntitiesByIds,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    if ( !v47 )
      break;
    v49 = v72.fields._current;
    if ( !v72.fields._current )
      sub_1C93D2C(v47, v48);
    if ( !v46 )
      sub_1C93D2C(v47, v48);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v46,
            (int32_t)v72.fields._current[1].monitor,
            (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__)
      && FuncList__isDamage((int32_t)v49[1].monitor, 0) )
    {
      isAllTargets = Target__isAllTargets(HIDWORD(v49[1].monitor), 0);
      v52 = TreasureDvcEntity_TypeInfo;
      cctor_finished = TreasureDvcEntity_TypeInfo->_2.cctor_finished;
      if ( isAllTargets )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v52 = TreasureDvcEntity_TypeInfo;
        }
        v54 = v52->static_fields;
        v55 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v54->NpEffectFlagToTypeName;
        if ( !v55 )
          sub_1C93D2C(0, v50);
        v56 = v54->NP_INDIVIDUALITY;
        v57 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v55,
                1,
                (const MethodInfo_350A968 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v58 = System_String__Format(v56, v57, 0);
        v59 = ConstantStrMaster__GetValueArray(v6, v58, 0, 0);
        if ( !v59 )
          v59 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v52 = TreasureDvcEntity_TypeInfo;
        }
        v66 = v52->static_fields;
        v67 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v66->NpEffectFlagToTypeName;
        if ( !v67 )
          sub_1C93D2C(0, v50);
        v68 = v66->NP_INDIVIDUALITY;
        v69 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v67,
                2,
                (const MethodInfo_350A968 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v70 = System_String__Format(v68, v69, 0);
        v59 = ConstantStrMaster__GetValueArray(v6, v70, 0, 0);
        if ( !v59 )
          v59 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
      }
      *p_treasureDeviceEffectIndividuality = v59;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)p_treasureDeviceEffectIndividuality,
        (int32_t)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
}


bool TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4D316F1 & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316F1 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v4->static_fields->KEY_TD_DELAY_END, v2);
}


bool TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4D316E4 & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316E4 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D316F2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6851/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4D316F2 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6851/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4D316E3 & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316E3 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v6 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v6 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v6->static_fields->KEY_RANDOM_SEQ_WEIGHT, v5);
}


bool TreasureDvcEntity__IsRandomTD_43684968(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        int32_t unitIndex,
        System_String_o **unitPrefix,
        const MethodInfo *method)
{
  System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_4D316E5 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316E5 = 1;
  }
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
  v11 = TreasureDvcEntity__GetUnitPrefix(unitIndex, (const MethodInfo *)keySeqId);
  *unitPrefix = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)unitPrefix, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = System_String__Concat_64425724(*unitPrefix, keySeqId, 0);
  if ( TreasureDvcEntity__checkScript(this, v18, v19) )
  {
    v26 = System_String__Concat_64425724(*unitPrefix, keyWeight, 0);
    if ( TreasureDvcEntity__checkScript(this, v26, v27) )
      return 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *unitPrefix = static_fields->Empty;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)unitPrefix, (int32_t)Empty, v20, v21, v22, v23, v24, v25);
  return TreasureDvcEntity__checkScript(this, keySeqId, v31) && TreasureDvcEntity__checkScript(this, keyWeight, v32);
}


bool TreasureDvcEntity__IsTDTypeChange(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4D316EE & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316EE = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_TD_TYPE_CHANGE_ID, v2);
}


// local variable allocation has failed, the output may be wrong!
bool TreasureDvcEntity__TryGetTdIdChangeByBattlePoint(
        TreasureDvcEntity_o *this,
        int32_t battlePointId,
        int32_t battlePointPhase,
        int32_t *tdIdChangeByBattlePoint,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x0
  TreasureDvcEntity___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_int__int__o *_9__58_0; // x24
  Il2CppObject *v13; // x25
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x20
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x20
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  int32_t v38; // w24
  Il2CppObject *v39; // x22
  Il2CppObject *v40; // x2
  System_String_o *v41; // x1
  const MethodInfo *v42; // x3
  bool v43; // w22
  int v44; // w23
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  int32_t v50; // [xsp+8h] [xbp-58h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D316F6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C93AD4(&System_Func_int__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__58_0__);
    sub_1C93AD4(&TreasureDvcEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_24314/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4D316F6 = 1;
  }
  v9 = TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
         this,
         battlePointId,
         *(const MethodInfo **)&battlePointPhase);
  v10 = TreasureDvcEntity___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v10 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__58_0 = v10->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TreasureDvcEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__58_0 = (System_Func_int__int__o *)sub_1C93D20(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__58_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__58_0__,
      0);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__58_0,
      (int32_t)_9__58_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__58_0,
          (const MethodInfo_31D3CA0 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v21 )
    sub_1C93D2C(0, v22);
  klass = v21->klass;
  v24 = v21;
  v25 = *(unsigned __int16 *)&v21->klass->_2.rank;
  if ( *(_WORD *)&v21->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_14;
    }
    v27 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v27 = sub_1C69E5C(v21, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v29 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1C93D2C(0, v28);
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_21;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_21:
      v33 = sub_1C69E5C(v29, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v36 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_28;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_28:
      v37 = sub_1C69E5C(v29, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    if ( v38 <= battlePointPhase )
    {
      v51 = battlePointId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
      v50 = v38;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      v41 = System_String__Format_64467032((System_String_o *)StringLiteral_24314/*"tdChangeByBattlePoint_{0}_{1}"*/, v39, v40, 0);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v41, 0, v42);
      v43 = 1;
      v44 = 5;
      goto LABEL_33;
    }
  }
  v43 = 0;
  v44 = 6;
LABEL_33:
  v45 = *(_QWORD *)v29;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_37;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_37:
    v48 = sub_1C69E5C(v29, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v29, *(_QWORD *)(v48 + 8));
  if ( v44 == 6 )
  {
    v43 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v43;
}


bool TreasureDvcEntity__TryGetWithBackStepNpcIds(
        TreasureDvcEntity_o *this,
        System_Int32_array **npcIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D316F7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24319/*"tdWithBackStepNpcIds"*/);
    byte_4D316F7 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24319/*"tdWithBackStepNpcIds"*/, 0, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8, v9, v10, v11, v12);
  return *npcIds != 0;
}


bool TreasureDvcEntity__checkScript(TreasureDvcEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D316DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D316DE = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  bool v9; // w20
  int v10; // w19
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D316DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4D316DF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1C93D2C(0, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_379C724 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v12,
             (const MethodInfo_362EDC8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._currentKey )
        sub_1C93D2C(0, v8);
      if ( System_String__Contains((System_String_o *)v12.fields._currentKey, checkKey, 0) )
      {
        v10 = 5;
        goto LABEL_11;
      }
    }
    v10 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v12,
      (const MethodInfo_362EDC4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v9 && v10 == 5;
  }
  return (char)script;
}


bool TreasureDvcEntity__getEffectExplanation(
        TreasureDvcEntity_o *this,
        System_String_o **tdName,
        System_String_o **tdExplanation,
        int32_t *maxLv,
        int32_t *tdGuageCount,
        int32_t lv,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v14; // x0
  __int64 v15; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v17; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v19; // x23
  System_String_o *v20; // x25
  Il2CppObject *name; // x24
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_String_o *Detail_43682852; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t gaugeCount; // w8
  LocalizationManager_c *v45; // x0
  System_String_o *unknownNameText; // x1
  int32_t v48; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D316DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&StringLiteral_9416/*"NP_NAME"*/);
    sub_1C93AD4(&StringLiteral_9417/*"NP_NAME_LEVEL"*/);
    byte_4D316DD = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C69B68(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C69B68(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
  {
    sub_1C93D2C(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  *maxLv = this->fields.maxLv;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NP_NAME"*/, 0);
    v23 = System_String__Format(v30, (Il2CppObject *)this->fields.name, 0);
  }
  else
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9417/*"NP_NAME_LEVEL"*/, 0);
    name = (Il2CppObject *)this->fields.name;
    v48 = lv;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v23 = System_String__Format_64467032(v20, name, v22, 0);
  }
  *tdName = v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)tdName, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  if ( v19 )
  {
    Detail_43682852 = TreasureDvcLvEntity__getDetail_43682852(v19, lv, v31);
    *tdExplanation = Detail_43682852;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)tdExplanation, (int32_t)Detail_43682852, v38, v39, v40, v41, v42, v43);
    gaugeCount = v19->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4D2BD02 )
    {
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      byte_4D2BD02 = 1;
    }
    v45 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v45->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)tdExplanation,
      (int32_t)unknownNameText,
      (int32_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v19 != 0;
}


System_Int32_array *TreasureDvcEntity__getFixAppearanceInfoArray(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = limit;
  if ( (byte_4D316EB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19667/*"fixAppearanceId_"*/);
    byte_4D316EB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_String__Concat_64425724((System_String_o *)StringLiteral_19667/*"fixAppearanceId_"*/, v4, 0);
  return TreasureDvcEntity__getScriptIntArrayParam(this, v5, 0, v6);
}


int32_t TreasureDvcEntity__getGroupSeqId(
        TreasureDvcEntity_o *this,
        System_String_o *keyGroupSeqId,
        int32_t index,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1
  int32_t max_length; // w8

  if ( (byte_4D316EA & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D316EA = 1;
  }
  v7 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( index < 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1C93D2C(0, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C93D34(ScriptIntArrayParam);
  return ScriptIntArrayParam->m_Items[index];
}


System_Int32_array *TreasureDvcEntity__getIndividualities(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


System_String_o *TreasureDvcEntity__getName(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t TreasureDvcEntity__getRandomSeqId(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x22
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x20
  const MethodInfo *v10; // x3
  System_Int32_array *v11; // x21
  WeightRate_int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w1

  if ( (byte_4D316E8 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_WeightRate_int___ctor__);
    sub_1C93AD4(&Method_WeightRate_int__getData__);
    sub_1C93AD4(&Method_WeightRate_int__getTotalWeight__);
    sub_1C93AD4(&Method_WeightRate_int__setWeight__);
    sub_1C93AD4(&WeightRate_int__TypeInfo);
    byte_4D316E8 = 1;
  }
  v7 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1C93D20(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3C8EB14 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  max_length = ScriptIntArrayParam->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( v11 )
    {
      if ( v16 >= LODWORD(v11->max_length) || v16 >= (unsigned int)max_length )
        sub_1C93D34(v13);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16],
        ScriptIntArrayParam->m_Items[v16],
        (const MethodInfo_3C8E030 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_14:
    sub_1C93D2C(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v17 = UnityEngine_Random__Range_72079620(0, v12->fields.totalweight, 0);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_3C8E4A4 *)Method_WeightRate_int__getData__);
}


int32_t TreasureDvcEntity__getRandomSeqIndex(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        int32_t seqId,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1
  int max_length; // w9
  System_Int32_array *v12; // x8
  __int64 v13; // x0

  if ( (byte_4D316E9 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D316E9 = 1;
  }
  v7 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C93D2C(0, v10);
  max_length = ScriptIntArrayParam->max_length;
  v12 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v13) = -1;
  }
  else
  {
    v13 = 0;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v13 )
        sub_1C93D34(v13);
      if ( v12->m_Items[(int)v13] == seqId )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( max_length == (_DWORD)v13 )
        goto LABEL_9;
    }
  }
  return v13;
}


System_Int32_array *TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D316EC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23306/*"relationBgmIds"*/);
    byte_4D316EC = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23306/*"relationBgmIds"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t TreasureDvcEntity__getScriptInt(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  TreasureDvcEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_Int32_array *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4D316E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D316E0 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C93D2C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C940C8(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v12, v13, v14, v15);
}


System_Int32_array *TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__c *v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *v11; // x19
  TreasureDvcEntity___c_c *v12; // x8
  System_Converter_object__int__o *_9__35_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  TreasureDvcEntity_o *v23; // x0
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4D316E1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Converter_object__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__35_0__);
    sub_1C93AD4(&TreasureDvcEntity___c_TypeInfo);
    byte_4D316E1 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1C93C10(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1C93C10(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_object__o *)script;
  v12 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v12 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__35_0 = v12->static_fields->__9__35_0;
  if ( !v11
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__35_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TreasureDvcEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__35_0 = (System_Converter_object__int__o *)sub_1C93D20(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__35_0,
        v15,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__35_0__,
        0);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = _9__35_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__35_0,
        (int32_t)_9__35_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( v11 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v11,
                                                                            (System_Converter_T__TOutput__o *)_9__35_0,
                                                                            (const MethodInfo_30C8494 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1C93D2C(script, v7);
  }
  sub_1C940C8(v11);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v23, v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
int32_t TreasureDvcEntity__getSeqId(
        TreasureDvcEntity_o *this,
        int32_t limit,
        int32_t unitIndex,
        const MethodInfo *method)
{
  Il2CppObject *UnitPrefix; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D316E2 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_25527/*"{0}limitSeqId_{1}"*/);
    byte_4D316E2 = 1;
  }
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
  UnitPrefix = (Il2CppObject *)TreasureDvcEntity__GetUnitPrefix(unitIndex, *(const MethodInfo **)&limit);
  v12 = limit;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v9 = System_String__Format_64467032((System_String_o *)StringLiteral_25527/*"{0}limitSeqId_{1}"*/, UnitPrefix, v8, 0);
  return TreasureDvcEntity__getScriptInt(this, v9, this->fields.seqId, v10);
}


int32_t TreasureDvcEntity__getTDTypeChangeId(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1

  if ( (byte_4D316F0 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D316F0 = 1;
  }
  v7 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C93D2C(0, v10);
  if ( (unsigned int)(commandType - 1) >= LODWORD(ScriptIntArrayParam->max_length) )
    sub_1C93D34(ScriptIntArrayParam);
  return ScriptIntArrayParam->m_Items[commandType - 1];
}


int32_t TreasureDvcEntity__getTDTypeChangeIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t commandType,
        const MethodInfo *method)
{
  int32_t id; // w21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  __int64 v12; // x22
  unsigned __int64 v13; // x24
  TreasureDvcEntity_o *v14; // x0
  int32_t v15; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3

  if ( (byte_4D316EF & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316EF = 1;
  }
  id = this->fields.id;
  v8 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v8 )
    sub_1C93D2C(0, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
LABEL_15:
    sub_1C93D34(v8);
  *(_DWORD *)(v8 + 36) = -1;
  if ( (int)v11 < 1 )
    return id;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
      goto LABEL_15;
    v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v15 = *(_DWORD *)(v12 + 32 + 4 * v13);
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v14,
                    (System_String_o *)v14[1].fields.script->fields._entries,
                    v15,
                    0,
                    v10);
    v8 = TreasureDvcEntity__checkScript(this, AddLimitKey, v17);
    if ( (v8 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v18);
    LODWORD(v11) = *(_DWORD *)(v12 + 24);
    if ( (__int64)++v13 >= (int)v11 )
      return id;
  }
}


System_Int32_array *TreasureDvcEntity__get_TreasureDeviceEffectIndividuality(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = this->fields.treasureDeviceEffectIndividuality;
  if ( !result )
  {
    TreasureDvcEntity__InitializeTreasureDeviceIndividuality(this, method);
    return this->fields.treasureDeviceEffectIndividuality;
  }
  return result;
}


System_String_o *TreasureDvcEntity__makeAddLimitKey(
        TreasureDvcEntity_o *this,
        System_String_o *baseKey,
        int32_t limit,
        int32_t actSet,
        const MethodInfo *method)
{
  int32_t v6; // w20
  TreasureDvcEntity_c *v8; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *v12; // x21
  System_String_o *v13; // x0
  Il2CppObject *v14; // x2
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v6 = limit;
  v16 = actSet;
  v17 = limit;
  if ( (byte_4D316E6 & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_25537/*"{0}{1}{2}"*/);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D316E6 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v8 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v8 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v8->static_fields->KET_SUFFIX_ACTSET;
      v10 = System_Int32__ToString((int32_t)&v16, 0);
      v11 = System_String__Concat_64425724(KET_SUFFIX_ACTSET, v10, 0);
      v6 = v17;
      v12 = (Il2CppObject *)v11;
    }
    else
    {
      v12 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    if ( v6 == -1 )
    {
      v14 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      v13 = System_Int32__ToString((int32_t)&v17, 0);
      v14 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_16207/*"_"*/, v13, 0);
    }
    return System_String__Format_64467100((System_String_o *)StringLiteral_25537/*"{0}{1}{2}"*/, (Il2CppObject *)baseKey, v14, v12, 0);
  }
  return baseKey;
}


void TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D316FC & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity___c_TypeInfo);
    byte_4D316FC = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TreasureDvcEntity___c___ctor(TreasureDvcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TreasureDvcEntity___c___TryGetTdIdChangeByBattlePoint_b__58_0(
        TreasureDvcEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t TreasureDvcEntity___c___getScriptIntArrayParam_b__35_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D316FD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D316FD = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}


void TreasureDvcEntity___c__DisplayClass57_0___ctor(
        TreasureDvcEntity___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TreasureDvcEntity___c__DisplayClass57_0___GetTdChangeByBattlePointPhaseList_b__0(
        TreasureDvcEntity___c__DisplayClass57_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return System_String__StartsWith(x, this->fields.checkKey, 0);
}


System_String_o *TreasureDvcEntity___c__DisplayClass57_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass57_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass57_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D316FE & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass57_0_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D316FE = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return System_String__Replace_64472288(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void TreasureDvcEntity___c__DisplayClass60_0___ctor(
        TreasureDvcEntity___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TreasureDvcEntity___c__DisplayClass60_0___GetSequenceMaxUnitIndex_b__0(
        TreasureDvcEntity___c__DisplayClass60_0_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_String_o *UnitPrefix; // x0
  __int64 v7; // x1

  if ( (byte_4D316FF & 1) == 0 )
  {
    sub_1C93AD4(&TreasureDvcEntity_TypeInfo);
    byte_4D316FF = 1;
  }
  v5 = this->fields.unitIndex + 1;
  this->fields.unitIndex = v5;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
  UnitPrefix = TreasureDvcEntity__GetUnitPrefix(v5, (const MethodInfo *)key);
  if ( !key )
    sub_1C93D2C(UnitPrefix, v7);
  return System_String__StartsWith(key, UnitPrefix, 0);
}