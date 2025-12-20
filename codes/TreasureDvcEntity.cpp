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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v71; // x19
  __int64 v72; // x0
  __int64 v73; // x1
  struct TreasureDvcEntity_StaticFields *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7

  if ( (byte_4D2D5B7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    sub_1C94098(&StringLiteral_4964/*"DAMAGE_ONE"*/);
    sub_1C94098(&StringLiteral_20077/*"groupSeqIDs"*/);
    sub_1C94098(&StringLiteral_18661/*"delayEnd"*/);
    sub_1C94098(&StringLiteral_16593/*"_actSet"*/);
    sub_1C94098(&StringLiteral_4963/*"DAMAGE_ALL"*/);
    sub_1C94098(&StringLiteral_9775/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/);
    sub_1C94098(&StringLiteral_23182/*"randomWeights"*/);
    sub_1C94098(&StringLiteral_24252/*"tdTypeChangeIDs"*/);
    sub_1C94098(&StringLiteral_6593/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/);
    sub_1C94098(&StringLiteral_9327/*"NOT_DAMAGE"*/);
    sub_1C94098(&StringLiteral_9381/*"NP_INDIVIDUALITY_{0}"*/);
    sub_1C94098(&StringLiteral_23181/*"randomSeqIds"*/);
    byte_4D2D5B7 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_23181/*"randomSeqIds"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_23181/*"randomSeqIds"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23182/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_23182/*"randomWeights"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_20077/*"groupSeqIDs"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_20077/*"groupSeqIDs"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->KEY_GROUP_SEQ_ID, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24252/*"tdTypeChangeIDs"*/;
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v24->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_24252/*"tdTypeChangeIDs"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->KEY_TD_TYPE_CHANGE_ID, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_18661/*"delayEnd"*/;
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v32->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18661/*"delayEnd"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->KEY_TD_DELAY_END, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_16593/*"_actSet"*/;
  v40 = TreasureDvcEntity_TypeInfo->static_fields;
  v40->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16593/*"_actSet"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v40->KET_SUFFIX_ACTSET, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_9775/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  v48 = TreasureDvcEntity_TypeInfo->static_fields;
  v48->OVERWRITE_TO_NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9775/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v48->OVERWRITE_TO_NP_INDIVIDUALITY, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_6593/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  v56 = TreasureDvcEntity_TypeInfo->static_fields;
  v56->FUNCTION_TYPE_NOT_NP_DAMAGE = (struct System_String_o *)StringLiteral_6593/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->FUNCTION_TYPE_NOT_NP_DAMAGE, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_9381/*"NP_INDIVIDUALITY_{0}"*/;
  v64 = TreasureDvcEntity_TypeInfo->static_fields;
  v64->NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9381/*"NP_INDIVIDUALITY_{0}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v64->NP_INDIVIDUALITY, v63, v65, v66, v67, v68, v69, v70);
  v71 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int64Enum__object____ctor(
    v71,
    (const MethodInfo_34FF058 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
  if ( !v71 )
    sub_1C942F0(v72, v73);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v71,
    -1,
    (Il2CppObject *)StringLiteral_9327/*"NOT_DAMAGE"*/,
    (const MethodInfo_34FFA28 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v71,
    1,
    (Il2CppObject *)StringLiteral_4963/*"DAMAGE_ALL"*/,
    (const MethodInfo_34FFA28 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v71,
    2,
    (Il2CppObject *)StringLiteral_4964/*"DAMAGE_ONE"*/,
    (const MethodInfo_34FFA28 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  v74 = TreasureDvcEntity_TypeInfo->static_fields;
  v74->NpEffectFlagToTypeName = (struct System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__o *)v71;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v74->NpEffectFlagToTypeName, (int32_t)v71, v75, v76, v77, v78, v79, v80);
}


void TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5B6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D5B6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *TreasureDvcEntity__GetAssumedEffectId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5B2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17001/*"assumedEffectId"*/);
    byte_4D2D5B2 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17001/*"assumedEffectId"*/, 0);
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

  if ( (byte_4D2D5AB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19470/*"excludeTdChangeTypes"*/);
    byte_4D2D5AB = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19470/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5B1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22530/*"npNameFileSuffix"*/);
    byte_4D2D5B1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22530/*"npNameFileSuffix"*/, 0, 0);
}


int32_t TreasureDvcEntity__GetRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t *groupSeqId,
        int32_t actSetId,
        const MethodInfo *method)
{
  int32_t seqId; // w21
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  __int64 v13; // x22
  const MethodInfo *v14; // x4
  __int64 v15; // x23
  __int64 v16; // x8
  unsigned __int64 v17; // x28
  __int64 v18; // x8
  int32_t v19; // w24
  unsigned __int64 v20; // x21
  TreasureDvcEntity_c *v21; // x0
  int32_t v22; // w26
  TreasureDvcEntity_o *AddLimitKey; // x25
  const MethodInfo *v24; // x4
  TreasureDvcEntity_o *v25; // x27
  const MethodInfo *v26; // x4
  System_String_o *v27; // x26
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v33; // x3
  int32_t v35; // [xsp+4h] [xbp-6Ch]
  int32_t *v36; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2D5A5 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5A5 = 1;
  }
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  v10 = sub_1C94140(int___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_28;
  v12 = *(_DWORD *)(v10 + 24);
  v13 = v10;
  if ( !v12 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 32) = limitCount;
  if ( v12 == 1 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 36) = -1;
  if ( actSetId )
  {
    v10 = sub_1C94140(int___TypeInfo, 2);
    if ( v10 )
    {
      v15 = v10;
      if ( *(_DWORD *)(v10 + 24) )
      {
        *(_DWORD *)(v10 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_27:
      sub_1C942F8(v10);
    }
LABEL_28:
    sub_1C942F0(v10, v11);
  }
  v10 = sub_1C94140(int___TypeInfo, 1);
  v15 = v10;
LABEL_11:
  v16 = *(_QWORD *)(v13 + 24);
  if ( (int)v16 >= 1 )
  {
    v35 = seqId;
    v36 = groupSeqId;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_27;
      if ( !v15 )
        goto LABEL_28;
      v18 = *(_QWORD *)(v15 + 24);
      if ( (int)v18 >= 1 )
        break;
LABEL_23:
      LODWORD(v16) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v17 >= (int)v16 )
        return v35;
    }
    v19 = *(_DWORD *)(v13 + 4 * v17 + 32);
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        goto LABEL_27;
      v21 = TreasureDvcEntity_TypeInfo;
      v22 = *(_DWORD *)(v15 + 32 + 4 * v20);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v21 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v21,
                                             v21->static_fields->KEY_RANDOM_SEQ_ID,
                                             v19,
                                             v22,
                                             v14);
      v25 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v19,
                                     v22,
                                     v24);
      v27 = TreasureDvcEntity__makeAddLimitKey(
              v25,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v19,
              v22,
              v26);
      v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v28);
      if ( (v10 & 1) != 0 )
      {
        v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)v25, v29);
        if ( (v10 & 1) != 0 )
          break;
      }
      LODWORD(v18) = *(_DWORD *)(v15 + 24);
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_23;
    }
    seqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v25, v30);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, seqId, v31);
    *v36 = TreasureDvcEntity__getGroupSeqId(this, v27, RandomSeqIndex, v33);
  }
  return seqId;
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

  if ( (byte_4D2D5B3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C94098(&System_Func_string__string__TypeInfo);
    sub_1C94098(&System_Func_string__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1C94098(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1C94098(&TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
    sub_1C94098(&StringLiteral_24248/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4D2D5B3 = 1;
  }
  result = 0;
  v5 = sub_1C942E4(TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  v47 = battlePontId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24248/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v7,
                                                                        0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)script, v10, v11, v12, v13, v14, v15);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_35208D4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v17 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0),
        v18 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_string___),
        v19 = (System_Func_object__object__o *)sub_1C942E4(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v18,
                                                                               (System_Func_TSource__TResult__o *)v19,
                                                                               (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_string__string___)) == 0) )
  {
LABEL_41:
    sub_1C942F0(script, v9);
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
    v24 = sub_1C6A420(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v24)(
          v21,
          *(_QWORD *)(v24 + 8));
  if ( !v26 )
    sub_1C942F0(0, v25);
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
      v30 = sub_1C6A420(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
      v34 = sub_1C6A420(v26, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v36 = System_Int32__TryParse(v35, &result, 0);
    if ( v36 )
    {
      if ( !v6 )
        sub_1C942F0(v36, v37);
      v38 = (unsigned int)result;
      items = v6->fields._items;
      v40 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C942F0(v36, v38);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v38,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
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
    v45 = sub_1C6A420(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v26, *(_QWORD *)(v45 + 8));
  return v6;
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

  if ( (byte_4D2D59B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor___78973968);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
    byte_4D2D59B = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
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
                                                                                      (const MethodInfo_34FF838 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_Int64Enum__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v71,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)NpEffectFlagToTypeName,
    (const MethodInfo_3BAF12C *)Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
  v73 = v71;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v73,
            (const MethodInfo_3619EC4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__) )
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
      sub_1C942F0(v10, v10);
    ValueArray = (System_Collections_ICollection_o *)ConstantStrMaster__GetValueArray(v6, v10, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty(ValueArray, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)ValueArray,
           this->fields.id,
           (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
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
        v14 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
      this->fields.treasureDeviceEffectIndividuality = v14;
      sub_1C9403C(
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
        (const MethodInfo_3619EC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v73,
    (const MethodInfo_3619EC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
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
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  FunctionEntitiesByIds = (System_Collections_ICollection_o *)FunctionMaster__GetFunctionEntitiesByIds(
                                                                (FunctionMaster_o *)NpEffectFlagToTypeName,
                                                                v23->fields.funcId,
                                                                0);
  if ( BasicHelper__IsNullOrEmpty(FunctionEntitiesByIds, 0) )
  {
LABEL_30:
    v25 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
    this->fields.treasureDeviceEffectIndividuality = v25;
    sub_1C9403C(
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
           (const MethodInfo_34FF988 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__Format(
                                                                                      NP_INDIVIDUALITY,
                                                                                      Item,
                                                                                      0);
  if ( !v6 )
    goto LABEL_63;
  v36 = ConstantStrMaster__GetValueArray(v6, (System_String_o *)NpEffectFlagToTypeName, 0, 0);
  if ( !v36 )
    v36 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.treasureDeviceEffectIndividuality = v36;
  p_treasureDeviceEffectIndividuality = &this->fields.treasureDeviceEffectIndividuality;
  sub_1C9403C(
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
    v45 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C94140(int___TypeInfo, 0);
  v46 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57771124(
    v46,
    v45,
    (const MethodInfo_3718474 *)Method_System_Collections_Generic_HashSet_int___ctor___78973968);
  if ( !FunctionEntitiesByIds )
LABEL_63:
    sub_1C942F0(NpEffectFlagToTypeName, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)FunctionEntitiesByIds,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    if ( !v47 )
      break;
    v49 = v72.fields._current;
    if ( !v72.fields._current )
      sub_1C942F0(v47, v48);
    if ( !v46 )
      sub_1C942F0(v47, v48);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v46,
            (int32_t)v72.fields._current[1].monitor,
            (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__)
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
          sub_1C942F0(0, v50);
        v56 = v54->NP_INDIVIDUALITY;
        v57 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v55,
                1,
                (const MethodInfo_34FF988 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v58 = System_String__Format(v56, v57, 0);
        v59 = ConstantStrMaster__GetValueArray(v6, v58, 0, 0);
        if ( !v59 )
          v59 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
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
          sub_1C942F0(0, v50);
        v68 = v66->NP_INDIVIDUALITY;
        v69 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v67,
                2,
                (const MethodInfo_34FF988 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v70 = System_String__Format(v68, v69, 0);
        v59 = ConstantStrMaster__GetValueArray(v6, v70, 0, 0);
        if ( !v59 )
          v59 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
      }
      *p_treasureDeviceEffectIndividuality = v59;
      sub_1C9403C(
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
}


bool TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4D2D5AF & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5AF = 1;
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

  if ( (byte_4D2D5A3 & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5A3 = 1;
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

  if ( (byte_4D2D5B0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_6827/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4D2D5B0 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6827/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4D2D5A2 & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5A2 = 1;
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


bool TreasureDvcEntity__IsRandomTD_43763732(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  return TreasureDvcEntity__checkScript(this, keySeqId, (const MethodInfo *)keyWeight)
      && TreasureDvcEntity__checkScript(this, keyWeight, v6);
}


bool TreasureDvcEntity__IsTDTypeChange(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4D2D5AC & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5AC = 1;
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
  System_Func_int__int__o *_9__57_0; // x24
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

  if ( (byte_4D2D5B4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C94098(&System_Func_int__int__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__);
    sub_1C94098(&TreasureDvcEntity___c_TypeInfo);
    sub_1C94098(&StringLiteral_24249/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4D2D5B4 = 1;
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
  _9__57_0 = v10->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TreasureDvcEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__57_0 = (System_Func_int__int__o *)sub_1C942E4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__57_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__,
      0);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0,
      (int32_t)_9__57_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__57_0,
          (const MethodInfo_31CC540 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v21 )
    sub_1C942F0(0, v22);
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
    v27 = sub_1C6A420(v21, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v29 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1C942F0(0, v28);
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
      v33 = sub_1C6A420(v29, System_Collections_IEnumerator_TypeInfo, 0);
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
      v37 = sub_1C6A420(v29, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    if ( v38 <= battlePointPhase )
    {
      v51 = battlePointId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
      v50 = v38;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      v41 = System_String__Format_64459052((System_String_o *)StringLiteral_24249/*"tdChangeByBattlePoint_{0}_{1}"*/, v39, v40, 0);
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
    v48 = sub_1C6A420(v29, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4D2D5B5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24253/*"tdWithBackStepNpcIds"*/);
    byte_4D2D5B5 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24253/*"tdWithBackStepNpcIds"*/, 0, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8, v9, v10, v11, v12);
  return *npcIds != 0;
}


bool TreasureDvcEntity__checkScript(TreasureDvcEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D2D59D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D2D59D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4D2D59E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4D2D59E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_35208D4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1C942F0(0, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_378DE9C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v12,
             (const MethodInfo_36200B0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._currentKey )
        sub_1C942F0(0, v8);
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
      (const MethodInfo_36200AC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  System_String_o *Detail_43761868; // x0
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

  if ( (byte_4D2D59C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&StringLiteral_9384/*"NP_NAME"*/);
    sub_1C94098(&StringLiteral_9385/*"NP_NAME_LEVEL"*/);
    byte_4D2D59C = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C6A12C(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C6A12C(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
  {
    sub_1C942F0(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  *maxLv = this->fields.maxLv;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NP_NAME"*/, 0);
    v23 = System_String__Format(v30, (Il2CppObject *)this->fields.name, 0);
  }
  else
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9385/*"NP_NAME_LEVEL"*/, 0);
    name = (Il2CppObject *)this->fields.name;
    v48 = lv;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v23 = System_String__Format_64459052(v20, name, v22, 0);
  }
  *tdName = v23;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)tdName, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  if ( v19 )
  {
    Detail_43761868 = TreasureDvcLvEntity__getDetail_43761868(v19, lv, v31);
    *tdExplanation = Detail_43761868;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)tdExplanation, (int32_t)Detail_43761868, v38, v39, v40, v41, v42, v43);
    gaugeCount = v19->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4D277C7 )
    {
      sub_1C94098(&LocalizationManager_TypeInfo);
      byte_4D277C7 = 1;
    }
    v45 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v45->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1C9403C(
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
  if ( (byte_4D2D5A9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19619/*"fixAppearanceId_"*/);
    byte_4D2D5A9 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_String__Concat_64417744((System_String_o *)StringLiteral_19619/*"fixAppearanceId_"*/, v4, 0);
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

  if ( (byte_4D2D5A8 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2D5A8 = 1;
  }
  v7 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( index < 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1C942F0(0, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(ScriptIntArrayParam);
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

  if ( (byte_4D2D5A6 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_WeightRate_int___ctor__);
    sub_1C94098(&Method_WeightRate_int__getData__);
    sub_1C94098(&Method_WeightRate_int__getTotalWeight__);
    sub_1C94098(&Method_WeightRate_int__setWeight__);
    sub_1C94098(&WeightRate_int__TypeInfo);
    byte_4D2D5A6 = 1;
  }
  v7 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1C942E4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3C84680 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  max_length = ScriptIntArrayParam->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( v11 )
    {
      if ( v16 >= LODWORD(v11->max_length) || v16 >= (unsigned int)max_length )
        sub_1C942F8(v13);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16],
        ScriptIntArrayParam->m_Items[v16],
        (const MethodInfo_3C83B9C *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_14:
    sub_1C942F0(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v17 = UnityEngine_Random__Range_72070684(0, v12->fields.totalweight, 0);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_3C84010 *)Method_WeightRate_int__getData__);
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

  if ( (byte_4D2D5A7 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2D5A7 = 1;
  }
  v7 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C942F0(0, v10);
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
        sub_1C942F8(v13);
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

  if ( (byte_4D2D5AA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23246/*"relationBgmIds"*/);
    byte_4D2D5AA = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23246/*"relationBgmIds"*/, 0, v2);
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
  if ( (byte_4D2D59F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2D59F = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C9468C(script);
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
  System_Converter_object__int__o *_9__34_0; // x20
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
  const MethodInfo *v25; // x2

  if ( (byte_4D2D5A0 & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__);
    sub_1C94098(&TreasureDvcEntity___c_TypeInfo);
    byte_4D2D5A0 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1C941D4(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1C941D4(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_object__o *)script;
  v12 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v12 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__34_0 = v12->static_fields->__9__34_0;
  if ( !v11
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__34_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TreasureDvcEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__34_0 = (System_Converter_object__int__o *)sub_1C942E4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__34_0,
        v15,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__,
        0);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = _9__34_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0,
        (int32_t)_9__34_0,
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
                                                                            (System_Converter_T__TOutput__o *)_9__34_0,
                                                                            (const MethodInfo_30C054C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1C942F0(script, v7);
  }
  sub_1C9468C(v11);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v23, v24, v25);
}


int32_t TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2D5A1 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_21439/*"limitSeqId_{0}"*/);
    byte_4D2D5A1 = 1;
  }
  v9 = limit;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v6 = System_String__Format((System_String_o *)StringLiteral_21439/*"limitSeqId_{0}"*/, v5, 0);
  return TreasureDvcEntity__getScriptInt(this, v6, this->fields.seqId, v7);
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

  if ( (byte_4D2D5AE & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2D5AE = 1;
  }
  v7 = (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C942F0(0, v10);
  if ( (unsigned int)(commandType - 1) >= LODWORD(ScriptIntArrayParam->max_length) )
    sub_1C942F8(ScriptIntArrayParam);
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

  if ( (byte_4D2D5AD & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    byte_4D2D5AD = 1;
  }
  id = this->fields.id;
  v8 = sub_1C94140(int___TypeInfo, 2);
  if ( !v8 )
    sub_1C942F0(0, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
LABEL_15:
    sub_1C942F8(v8);
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
  if ( (byte_4D2D5A4 & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity_TypeInfo);
    sub_1C94098(&StringLiteral_25464/*"{0}{1}{2}"*/);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D5A4 = 1;
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
      v11 = System_String__Concat_64417744(KET_SUFFIX_ACTSET, v10, 0);
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
      v14 = (Il2CppObject *)System_String__Concat_64417744((System_String_o *)StringLiteral_16163/*"_"*/, v13, 0);
    }
    return System_String__Format_64459120((System_String_o *)StringLiteral_25464/*"{0}{1}{2}"*/, (Il2CppObject *)baseKey, v14, v12, 0);
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

  if ( (byte_4D2D5B8 & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcEntity___c_TypeInfo);
    byte_4D2D5B8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1C9403C(
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


int32_t TreasureDvcEntity___c___TryGetTdIdChangeByBattlePoint_b__57_0(
        TreasureDvcEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t TreasureDvcEntity___c___getScriptIntArrayParam_b__34_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2D5B9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D5B9 = 1;
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


void TreasureDvcEntity___c__DisplayClass56_0___ctor(
        TreasureDvcEntity___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TreasureDvcEntity___c__DisplayClass56_0___GetTdChangeByBattlePointPhaseList_b__0(
        TreasureDvcEntity___c__DisplayClass56_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return System_String__StartsWith(x, this->fields.checkKey, 0);
}


System_String_o *TreasureDvcEntity___c__DisplayClass56_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass56_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass56_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2D5BA & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass56_0_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D5BA = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  return System_String__Replace_64464308(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0);
}