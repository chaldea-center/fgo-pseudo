void TreasureDvcEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TreasureDvcEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct TreasureDvcEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct TreasureDvcEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct TreasureDvcEntity_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct TreasureDvcEntity_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct TreasureDvcEntity_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct TreasureDvcEntity_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct TreasureDvcEntity_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v80; // x19
  __int64 v81; // x0
  __int64 v82; // x1
  struct TreasureDvcEntity_StaticFields *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7

  if ( (byte_59715E4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    sub_2213A60(&StringLiteral_5150/*"DAMAGE_ONE"*/);
    sub_2213A60(&StringLiteral_20854/*"groupSeqIDs"*/);
    sub_2213A60(&StringLiteral_19391/*"delayEnd"*/);
    sub_2213A60(&StringLiteral_17206/*"_actSet"*/);
    sub_2213A60(&StringLiteral_5149/*"DAMAGE_ALL"*/);
    sub_2213A60(&StringLiteral_10152/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/);
    sub_2213A60(&StringLiteral_24151/*"randomWeights"*/);
    sub_2213A60(&StringLiteral_25293/*"tdTypeChangeIDs"*/);
    sub_2213A60(&StringLiteral_25756/*"unit{0}_"*/);
    sub_2213A60(&StringLiteral_6871/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/);
    sub_2213A60(&StringLiteral_9692/*"NOT_DAMAGE"*/);
    sub_2213A60(&StringLiteral_9745/*"NP_INDIVIDUALITY_{0}"*/);
    sub_2213A60(&StringLiteral_24150/*"randomSeqIds"*/);
    byte_59715E4 = 1;
  }
  v7 = StringLiteral_24150/*"randomSeqIds"*/;
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_24150/*"randomSeqIds"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)TreasureDvcEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_24151/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_24151/*"randomWeights"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_20854/*"groupSeqIDs"*/;
  v17 = TreasureDvcEntity_TypeInfo->static_fields;
  v17->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_20854/*"groupSeqIDs"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->KEY_GROUP_SEQ_ID, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_25293/*"tdTypeChangeIDs"*/;
  v25 = TreasureDvcEntity_TypeInfo->static_fields;
  v25->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_25293/*"tdTypeChangeIDs"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->KEY_TD_TYPE_CHANGE_ID, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19391/*"delayEnd"*/;
  v33 = TreasureDvcEntity_TypeInfo->static_fields;
  v33->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_19391/*"delayEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->KEY_TD_DELAY_END, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_17206/*"_actSet"*/;
  v41 = TreasureDvcEntity_TypeInfo->static_fields;
  v41->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_17206/*"_actSet"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->KET_SUFFIX_ACTSET, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_25756/*"unit{0}_"*/;
  v49 = TreasureDvcEntity_TypeInfo->static_fields;
  v49->UNIT_PREFIX_FORMAT = (struct System_String_o *)StringLiteral_25756/*"unit{0}_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->UNIT_PREFIX_FORMAT, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_10152/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  v57 = TreasureDvcEntity_TypeInfo->static_fields;
  v57->OVERWRITE_TO_NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_10152/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v57->OVERWRITE_TO_NP_INDIVIDUALITY,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = StringLiteral_6871/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  v65 = TreasureDvcEntity_TypeInfo->static_fields;
  v65->FUNCTION_TYPE_NOT_NP_DAMAGE = (struct System_String_o *)StringLiteral_6871/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->FUNCTION_TYPE_NOT_NP_DAMAGE, v64, v66, v67, v68, v69, v70, v71);
  v72 = TreasureDvcEntity_TypeInfo->static_fields;
  v73 = StringLiteral_9745/*"NP_INDIVIDUALITY_{0}"*/;
  v72->NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9745/*"NP_INDIVIDUALITY_{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->NP_INDIVIDUALITY, v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int64Enum__object____ctor(
    v80,
    (const MethodInfo_3FD242C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
  if ( !v80 )
    sub_2213CDC(v81, v82);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v80,
    -1,
    (Il2CppObject *)StringLiteral_9692/*"NOT_DAMAGE"*/,
    (const MethodInfo_3FD2DDC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v80,
    1,
    (Il2CppObject *)StringLiteral_5149/*"DAMAGE_ALL"*/,
    (const MethodInfo_3FD2DDC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v80,
    2,
    (Il2CppObject *)StringLiteral_5150/*"DAMAGE_ONE"*/,
    (const MethodInfo_3FD2DDC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  v83 = TreasureDvcEntity_TypeInfo->static_fields;
  v83->NpEffectFlagToTypeName = (struct System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__o *)v80;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v83->NpEffectFlagToTypeName,
    (int32_t)v80,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
}


void TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59715E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59715E3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *TreasureDvcEntity__GetAssumedEffectId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59715DB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17638/*"assumedEffectId"*/);
    byte_59715DB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17638/*"assumedEffectId"*/, 0);
}


int64_t TreasureDvcEntity__GetEffectFlag(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int64_t effectFlag; // x9
  int64_t v3; // x8

  effectFlag = this->fields.effectFlag;
  v3 = 2;
  if ( (effectFlag & 2) == 0 )
    v3 = -1;
  if ( (effectFlag & 1) != 0 )
    return 1;
  else
    return v3;
}


System_Int32_array *TreasureDvcEntity__GetExcludeTdChangeTypes(
        TreasureDvcEntity_o *this,
        System_Int32_array *defArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_59715D4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20218/*"excludeTdChangeTypes"*/);
    byte_59715D4 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20218/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59715DA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23451/*"npNameFileSuffix"*/);
    byte_59715DA = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23451/*"npNameFileSuffix"*/, 0, 0);
}


int32_t TreasureDvcEntity__GetRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t *groupSeqId,
        int32_t actSetId,
        int32_t unitIndex,
        const MethodInfo *method)
{
  Il2CppClass *v11; // x0
  int32_t seqId; // w21
  __int64 IsRandomTD_50002192; // x0
  __int64 v14; // x1
  int v15; // w8
  __int64 v16; // x26
  Il2CppClass *v17; // x0
  const MethodInfo *v18; // x4
  __int64 v19; // x24
  __int64 v20; // x8
  unsigned __int64 v21; // x29
  __int64 v22; // x8
  unsigned __int64 v23; // x23
  int32_t v24; // w25
  TreasureDvcEntity_c *v25; // x0
  int32_t v26; // w27
  TreasureDvcEntity_o *AddLimitKey; // x26
  const MethodInfo *v28; // x4
  TreasureDvcEntity_o *v29; // x28
  const MethodInfo *v30; // x4
  System_String_o *v31; // x27
  const MethodInfo *v32; // x5
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  int32_t RandomSeqIndex; // w22
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  int32_t *v42; // [xsp+8h] [xbp-78h]
  __int64 v43; // [xsp+10h] [xbp-70h]
  System_String_o *unitPrefix; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59715CE & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715CE = 1;
  }
  v11 = int___TypeInfo;
  seqId = this->fields.seqId;
  unitPrefix = 0;
  *groupSeqId = 0;
  IsRandomTD_50002192 = sub_2213B20(v11, 2);
  if ( !IsRandomTD_50002192 )
    goto LABEL_27;
  v15 = *(_DWORD *)(IsRandomTD_50002192 + 24);
  v16 = IsRandomTD_50002192;
  if ( !v15 )
    goto LABEL_26;
  *(_DWORD *)(IsRandomTD_50002192 + 32) = limitCount;
  if ( v15 == 1 )
    goto LABEL_26;
  v17 = int___TypeInfo;
  *(_DWORD *)(v16 + 36) = -1;
  if ( actSetId )
  {
    IsRandomTD_50002192 = sub_2213B20(v17, 2);
    if ( IsRandomTD_50002192 )
    {
      v19 = IsRandomTD_50002192;
      if ( *(_DWORD *)(IsRandomTD_50002192 + 24) )
      {
        *(_DWORD *)(IsRandomTD_50002192 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_26:
      sub_2213CE4(IsRandomTD_50002192);
    }
LABEL_27:
    sub_2213CDC(IsRandomTD_50002192, v14);
  }
  IsRandomTD_50002192 = sub_2213B20(v17, 1);
  v19 = IsRandomTD_50002192;
LABEL_11:
  v20 = *(_QWORD *)(v16 + 24);
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v42 = groupSeqId;
    v43 = v16;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_26;
      if ( !v19 )
        goto LABEL_27;
      v22 = *(_QWORD *)(v19 + 24);
      if ( (int)v22 >= 1 )
        break;
LABEL_22:
      ++v21;
      LODWORD(v20) = *(_DWORD *)(v43 + 24);
      if ( (__int64)v21 >= (int)v20 )
        return seqId;
    }
    v23 = 0;
    v24 = *(_DWORD *)(v43 + 4 * v21 + 32);
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
        goto LABEL_26;
      v25 = TreasureDvcEntity_TypeInfo;
      v26 = *(_DWORD *)(v19 + 32 + 4 * v23);
      if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v14);
        v25 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v25,
                                             v25->static_fields->KEY_RANDOM_SEQ_ID,
                                             v24,
                                             v26,
                                             v18);
      v29 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v24,
                                     v26,
                                     v28);
      v31 = TreasureDvcEntity__makeAddLimitKey(
              v29,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v24,
              v26,
              v30);
      IsRandomTD_50002192 = TreasureDvcEntity__IsRandomTD_50002192(
                              this,
                              (System_String_o *)AddLimitKey,
                              (System_String_o *)v29,
                              unitIndex,
                              &unitPrefix,
                              v32);
      if ( (IsRandomTD_50002192 & 1) != 0 )
        break;
      LODWORD(v22) = *(_DWORD *)(v19 + 24);
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_22;
    }
    v33 = System_String__Concat_75651716(unitPrefix, (System_String_o *)AddLimitKey, 0);
    v34 = System_String__Concat_75651716(unitPrefix, (System_String_o *)v29, 0);
    seqId = TreasureDvcEntity__getRandomSeqId(this, v33, v34, v35);
    v36 = System_String__Concat_75651716(unitPrefix, (System_String_o *)AddLimitKey, 0);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, v36, seqId, v37);
    v39 = System_String__Concat_75651716(unitPrefix, v31, 0);
    *v42 = TreasureDvcEntity__getGroupSeqId(this, v39, RandomSeqIndex, v40);
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

  if ( (byte_59715DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_string____91750144);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_TreasureDvcEntity___c__DisplayClass60_0__GetSequenceMaxUnitIndex_b__0__);
    sub_2213A60(&TreasureDvcEntity___c__DisplayClass60_0_TypeInfo);
    byte_59715DF = 1;
  }
  v3 = sub_2213CCC(TreasureDvcEntity___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 || (script = this->fields.script, *(_DWORD *)(v3 + 16) = 0, !script) )
LABEL_8:
    sub_2213CDC(script, v5);
  v6 = 0;
  while ( 1 )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    v8 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_TreasureDvcEntity___c__DisplayClass60_0__GetSequenceMaxUnitIndex_b__0__,
      0);
    if ( !System_Linq_Enumerable__Any_object__59145568(
            (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
            (System_Func_TSource__bool__o *)v8,
            (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_string____91750144) )
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__object__o *v19; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_String_o *v39; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  _QWORD v49[2]; // [xsp+8h] [xbp-68h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF
  __int64 v51; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_59715DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_string___);
    sub_2213A60(&System_Func_string__string__TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_2213A60(&Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_2213A60(&TreasureDvcEntity___c__DisplayClass57_0_TypeInfo);
    sub_2213A60(&StringLiteral_25288/*"tdChangeByBattlePoint_{0}_"*/);
    byte_59715DC = 1;
  }
  v51 = 0;
  result = 0;
  v5 = sub_2213CCC(TreasureDvcEntity___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  LODWORD(v49[0]) = battlePontId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v49);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_25288/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v7,
                                                                        0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 16) = script;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)script, v10, v11, v12, v13, v14, v15);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0),
        v18 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_string___),
        v19 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass57_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v18,
                                                                               (System_Func_TSource__TResult__o *)v19,
                                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0) )
  {
LABEL_47:
    sub_2213CDC(script, v9);
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
    v24 = sub_224BC3C(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v24)(
          v21,
          *(_QWORD *)(v24 + 8));
  v51 = v25;
  v49[0] = 0;
  v49[1] = &v51;
  if ( !v25 )
LABEL_35:
    sub_2213CDC(v25, v26);
  v27 = v25;
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_18;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_18:
      v31 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    if ( (v32 & 1) == 0 )
      break;
    v34 = v51;
    if ( !v51 )
      sub_2213CDC(v32, v33);
    v35 = *(_QWORD *)v51;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v37 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_26;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_26:
      v38 = sub_224BC3C(v51, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v39 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
    v25 = System_Int32__TryParse(v39, &result, 0);
    if ( (v25 & 1) != 0 )
    {
      if ( !v6
        || (items = v6->fields._items,
            v26 = (unsigned int)result,
            v41 = Method_System_Collections_Generic_List_int__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v25, v26);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v26,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v26;
      }
    }
    v27 = v51;
    if ( !v51 )
      goto LABEL_35;
  }
  v43 = v51;
  if ( v51 )
  {
    v44 = *(_QWORD *)v51;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_41;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_41:
      v47 = sub_224BC3C(v51, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
  }
  return v6;
}


System_String_o *TreasureDvcEntity__GetTreasureDeviceUseMessageLabel(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59715E1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17825/*"battleTreasureDeviceUseMessageLabel"*/);
    byte_59715E1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17825/*"battleTreasureDeviceUseMessageLabel"*/, 0, 0);
}


System_String_o *TreasureDvcEntity__GetUnitPrefix(int32_t unitIndex, const MethodInfo *method)
{
  TreasureDvcEntity_c *v3; // x0
  struct TreasureDvcEntity_StaticFields *static_fields; // x8
  System_String_o *UNIT_PREFIX_FORMAT; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_59715E0 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715E0 = 1;
  }
  if ( unitIndex <= 0 )
    return **(System_String_o ***)(qword_5984390 + 184);
  v3 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v3 = TreasureDvcEntity_TypeInfo;
  }
  static_fields = v3->static_fields;
  v8 = unitIndex;
  UNIT_PREFIX_FORMAT = static_fields->UNIT_PREFIX_FORMAT;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  return System_String__Format(UNIT_PREFIX_FORMAT, v6, 0);
}


bool TreasureDvcEntity__HasEffectFlag(TreasureDvcEntity_o *this, int64_t effectFlag, const MethodInfo *method)
{
  return (this->fields.effectFlag & effectFlag) != 0;
}


void TreasureDvcEntity__InitializeTreasureDeviceIndividuality(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  TreasureDvcEntity_c *v6; // x8
  ConstantStrMaster_o *v7; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *NpEffectFlagToTypeName; // x0
  __int64 v9; // x1
  TreasureDvcEntity_c *v10; // x0
  Il2CppObject *current; // x21
  System_String_o *v12; // x0
  System_Collections_ICollection_o *ValueArray; // x22
  __int64 v14; // x1
  TreasureDvcEntity_c *v15; // x0
  System_String_o *v16; // x1
  struct System_Int32_array *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v27; // x21
  __int64 v28; // x1
  System_Collections_ICollection_o *FunctionEntitiesByIds; // x22
  struct System_Int32_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  TreasureDvcEntity_c *v37; // x0
  struct TreasureDvcEntity_StaticFields *static_fields; // x8
  System_String_o *NP_INDIVIDUALITY; // x21
  Il2CppObject *Item; // x0
  struct System_Int32_array *v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  TreasureDvcEntity_c *v49; // x0
  System_Collections_Generic_IEnumerable_T__o *v50; // x24
  System_Collections_Generic_HashSet_int__o *v51; // x23
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x27
  __int64 v55; // x1
  bool isAllTargets; // w8
  TreasureDvcEntity_c *v57; // x0
  int v58; // w9
  struct TreasureDvcEntity_StaticFields *v59; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v60; // x0
  System_String_o *v61; // x22
  Il2CppObject *v62; // x1
  System_String_o *v63; // x1
  System_Int32_array *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Int32_array *v71; // x1
  struct TreasureDvcEntity_StaticFields *v72; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v73; // x0
  System_String_o *v74; // x22
  Il2CppObject *v75; // x1
  System_String_o *v76; // x1
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_59715C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
    byte_59715C3 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v78, 0, sizeof(v78));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  v6 = TreasureDvcEntity_TypeInfo;
  v7 = (ConstantStrMaster_o *)Master_object;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v5);
    v6 = TreasureDvcEntity_TypeInfo;
  }
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int64Enum__object___get_Values(
                                                                                      NpEffectFlagToTypeName,
                                                                                      (const MethodInfo_3FD2BE0 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_Int64Enum__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v77,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)NpEffectFlagToTypeName,
    (const MethodInfo_3CCA06C *)Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
  v79 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v79;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v79,
            (const MethodInfo_41626F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__) )
  {
    v10 = TreasureDvcEntity_TypeInfo;
    current = v79.fields._current;
    if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v9);
      v10 = TreasureDvcEntity_TypeInfo;
    }
    v12 = System_String__Format(v10->static_fields->OVERWRITE_TO_NP_INDIVIDUALITY, current, 0);
    if ( !v7 )
      sub_2213CDC(v12, v12);
    ValueArray = (System_Collections_ICollection_o *)ConstantStrMaster__GetValueArray(v7, v12, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty(ValueArray, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)ValueArray,
           this->fields.id,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v15 = TreasureDvcEntity_TypeInfo;
      if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v14);
        v15 = TreasureDvcEntity_TypeInfo;
      }
      v16 = System_String__Format(v15->static_fields->NP_INDIVIDUALITY, current, 0);
      v17 = ConstantStrMaster__GetValueArray(v7, v16, 0, 0);
      if ( !v17 )
        v17 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      this->fields.treasureDeviceEffectIndividuality = v17;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
        (int32_t)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v79,
        (const MethodInfo_41626EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v79,
    (const MethodInfo_41626EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)NpEffectFlagToTypeName,
             this->fields.id,
             this->fields.maxLv,
             v25);
  if ( !Entity )
    goto LABEL_30;
  v27 = Entity;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entity->fields.funcId, 0) )
    goto LABEL_30;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  FunctionEntitiesByIds = (System_Collections_ICollection_o *)FunctionMaster__GetFunctionEntitiesByIds(
                                                                (FunctionMaster_o *)NpEffectFlagToTypeName,
                                                                v27->fields.funcId,
                                                                0);
  if ( BasicHelper__IsNullOrEmpty(FunctionEntitiesByIds, 0) )
  {
LABEL_30:
    v30 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    this->fields.treasureDeviceEffectIndividuality = v30;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
      (int32_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return;
  }
  v37 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v5);
    v37 = TreasureDvcEntity_TypeInfo;
  }
  static_fields = v37->static_fields;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NP_INDIVIDUALITY = static_fields->NP_INDIVIDUALITY;
  Item = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
           NpEffectFlagToTypeName,
           -1,
           (const MethodInfo_3FD2D3C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__Format(
                                                                                      NP_INDIVIDUALITY,
                                                                                      Item,
                                                                                      0);
  if ( !v7 )
    goto LABEL_63;
  v41 = ConstantStrMaster__GetValueArray(v7, (System_String_o *)NpEffectFlagToTypeName, 0, 0);
  if ( !v41 )
    v41 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  this->fields.treasureDeviceEffectIndividuality = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v49 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v48);
    v49 = TreasureDvcEntity_TypeInfo;
  }
  v50 = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                         v7,
                                                         v49->static_fields->FUNCTION_TYPE_NOT_NP_DAMAGE,
                                                         0,
                                                         0);
  if ( !v50 )
    v50 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213B20(int___TypeInfo, 0);
  v51 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69943008(
    v51,
    v50,
    (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
  if ( !FunctionEntitiesByIds )
LABEL_63:
    sub_2213CDC(NpEffectFlagToTypeName, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)FunctionEntitiesByIds,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    if ( !v52 )
      break;
    v54 = v78.fields._current;
    if ( !v78.fields._current )
      sub_2213CDC(v52, v53);
    if ( !v51 )
      sub_2213CDC(v52, v53);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v51,
            (int32_t)v78.fields._current[1].monitor,
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__)
      && FuncList__isDamage((int32_t)v54[1].monitor, 0) )
    {
      isAllTargets = Target__isAllTargets(HIDWORD(v54[1].monitor), 0);
      v57 = TreasureDvcEntity_TypeInfo;
      v58 = *(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1);
      if ( isAllTargets )
      {
        if ( !v58 )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v55);
          v57 = TreasureDvcEntity_TypeInfo;
        }
        v59 = v57->static_fields;
        v60 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v59->NpEffectFlagToTypeName;
        if ( !v60 )
          sub_2213CDC(0, v55);
        v61 = v59->NP_INDIVIDUALITY;
        v62 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v60,
                1,
                (const MethodInfo_3FD2D3C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v63 = System_String__Format(v61, v62, 0);
        v64 = ConstantStrMaster__GetValueArray(v7, v63, 0, 0);
        v71 = v64;
        if ( !v64 )
          goto LABEL_58;
      }
      else
      {
        if ( !v58 )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v55);
          v57 = TreasureDvcEntity_TypeInfo;
        }
        v72 = v57->static_fields;
        v73 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v72->NpEffectFlagToTypeName;
        if ( !v73 )
          sub_2213CDC(0, v55);
        v74 = v72->NP_INDIVIDUALITY;
        v75 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v73,
                2,
                (const MethodInfo_3FD2D3C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v76 = System_String__Format(v74, v75, 0);
        v64 = ConstantStrMaster__GetValueArray(v7, v76, 0, 0);
        v71 = v64;
        if ( !v64 )
        {
LABEL_58:
          v64 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
          v71 = v64;
        }
      }
      if ( !this )
        sub_2213CDC(v64, v71);
      this->fields.treasureDeviceEffectIndividuality = v71;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDeviceEffectIndividuality,
        (int32_t)v71,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
}


bool TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_59715D8 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715D8 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v4->static_fields->KEY_TD_DELAY_END, v2);
}


bool TreasureDvcEntity__IsDispUnavailable(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59715E2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21921/*"isDispUnavailable"*/);
    byte_59715E2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21921/*"isDispUnavailable"*/, 0, 0) == 1;
}


bool TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_59715CB & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715CB = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59715D9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7106/*"ForcedOnlyFirstOneSpeed"*/);
    byte_59715D9 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_7106/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  TreasureDvcEntity_c *v7; // x0

  if ( (byte_59715CA & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715CA = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v7 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v5);
    v7 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v7->static_fields->KEY_RANDOM_SEQ_WEIGHT, v6);
}


bool TreasureDvcEntity__IsRandomTD_50002192(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        int32_t unitIndex,
        System_String_o **unitPrefix,
        const MethodInfo *method)
{
  System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  System_String_o **v29; // x8
  System_String_o *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_59715CC & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715CC = 1;
  }
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, keySeqId);
  v11 = TreasureDvcEntity__GetUnitPrefix(unitIndex, (const MethodInfo *)keySeqId);
  *unitPrefix = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unitPrefix, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = System_String__Concat_75651716(*unitPrefix, keySeqId, 0);
  if ( TreasureDvcEntity__checkScript(this, v18, v19) )
  {
    v26 = System_String__Concat_75651716(*unitPrefix, keyWeight, 0);
    if ( TreasureDvcEntity__checkScript(this, v26, v27) )
      return 1;
  }
  v29 = *(System_String_o ***)(qword_5984390 + 184);
  v30 = *v29;
  *unitPrefix = *v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unitPrefix, (int32_t)v30, v20, v21, v22, v23, v24, v25);
  return TreasureDvcEntity__checkScript(this, keySeqId, v31) && TreasureDvcEntity__checkScript(this, keyWeight, v32);
}


bool TreasureDvcEntity__IsTDTypeChange(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_59715D5 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715D5 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
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
  __int64 v10; // x1
  TreasureDvcEntity___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x23
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Func_int__int__o *_9__58_0; // x24
  Il2CppObject *v15; // x25
  struct TreasureDvcEntity___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x23
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x23
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x23
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  int v44; // w23
  Il2CppObject *v45; // x21
  Il2CppObject *v46; // x2
  System_String_o *v47; // x1
  const MethodInfo *v48; // x3
  bool v49; // w21
  int v50; // w23
  __int64 v51; // x22
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  int v57; // [xsp+0h] [xbp-70h] BYREF
  int32_t v58; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v59; // [xsp+8h] [xbp-68h]
  __int64 *v60; // [xsp+10h] [xbp-60h]
  __int64 v61; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59715DD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__58_0__);
    sub_2213A60(&TreasureDvcEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_25289/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_59715DD = 1;
  }
  v61 = 0;
  v9 = TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
         this,
         battlePointId,
         *(const MethodInfo **)&battlePointPhase);
  v11 = TreasureDvcEntity___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !*(&TreasureDvcEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo, v10);
    v11 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__58_0 = static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__58_0,
      v15,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__58_0__,
      0);
    v16 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v16->__9__58_0 = _9__58_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__58_0, (int32_t)_9__58_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__58_0,
          (const MethodInfo_3889074 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v23 )
    sub_2213CDC(0, v24);
  klass = v23->klass;
  v26 = v23;
  v27 = *(unsigned __int16 *)&v23->klass->_2.rank;
  if ( *(_WORD *)&v23->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_14;
    }
    v29 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v29 = sub_224BC3C(v23, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  v61 = v30;
  v59 = 0;
  v60 = &v61;
  while ( 1 )
  {
    v32 = v61;
    if ( !v61 )
      sub_2213CDC(v30, v31);
    v33 = *(_QWORD *)v61;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_22;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_22:
      v36 = sub_224BC3C(v61, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    if ( (v37 & 1) == 0 )
      break;
    v39 = v61;
    if ( !v61 )
      sub_2213CDC(v37, v38);
    v40 = *(_QWORD *)v61;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_30;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_30:
      v43 = sub_224BC3C(v61, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    v44 = v30;
    if ( (int)v30 <= battlePointPhase )
    {
      v58 = battlePointId;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v58);
      v57 = v44;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v57);
      v47 = System_String__Format_75697880((System_String_o *)StringLiteral_25289/*"tdChangeByBattlePoint_{0}_{1}"*/, v45, v46, 0);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v47, 0, v48);
      v49 = 1;
      v50 = 5;
      goto LABEL_35;
    }
  }
  v49 = 0;
  v50 = 6;
LABEL_35:
  v51 = v61;
  if ( v61 )
  {
    v52 = *(_QWORD *)v61;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_40;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_40:
      v55 = sub_224BC3C(v61, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
  }
  if ( v50 == 6 )
  {
    v49 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v49;
}


bool TreasureDvcEntity__TryGetWithBackStepNpcIds(
        TreasureDvcEntity_o *this,
        System_Int32_array **npcIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59715DE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25294/*"tdWithBackStepNpcIds"*/);
    byte_59715DE = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_25294/*"tdWithBackStepNpcIds"*/, 0, v3);
  *npcIds = ScriptIntArrayParam;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8, v9, v10, v11, v12);
  return *npcIds != 0;
}


bool TreasureDvcEntity__checkScript(TreasureDvcEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_59715C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_59715C5 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59715C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_59715C6 = 1;
  }
  script = this->fields.script;
  memset(&v11, 0, sizeof(v11));
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_2213CDC(0, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v11,
      Keys,
      (const MethodInfo_43896F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    do
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v11,
             (const MethodInfo_4169D50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v11.fields._currentKey )
        sub_2213CDC(0, v8);
    }
    while ( !System_String__Contains((System_String_o *)v11.fields._currentKey, checkKey, 0) );
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v11,
      (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
  }
  else
  {
    return 0;
  }
  return v9;
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
  __int64 v19; // x1
  LocalizationManager_c *v20; // x8
  TreasureDvcLvEntity_o *v21; // x23
  int v22; // w9
  System_String_o *v23; // x25
  Il2CppObject *name; // x24
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x0
  __int64 v34; // x1
  MethodInfo *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *Detail_50000128; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t gaugeCount; // w8
  LocalizationManager_c *v49; // x0
  System_String_o *unknownNameText; // x1
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59715C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_9748/*"NP_NAME"*/);
    sub_2213A60(&StringLiteral_9749/*"NP_NAME_LEVEL"*/);
    byte_59715C4 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  v20 = LocalizationManager_TypeInfo;
  *maxLv = this->fields.maxLv;
  v21 = Entity;
  v22 = *(&v20->_2.cctor_finished + 1);
  if ( lv < 1 )
  {
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20, v19);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9748/*"NP_NAME"*/, 0);
    v26 = System_String__Format(v33, (Il2CppObject *)this->fields.name, 0);
  }
  else
  {
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20, v19);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9749/*"NP_NAME_LEVEL"*/, 0);
    name = (Il2CppObject *)this->fields.name;
    v52 = lv;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
    v26 = System_String__Format_75697880(v23, name, v25, 0);
  }
  *tdName = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)tdName, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  if ( v21 )
  {
    Detail_50000128 = TreasureDvcLvEntity__getDetail_50000128(v21, lv, v35);
    *tdExplanation = Detail_50000128;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)tdExplanation,
      (int32_t)Detail_50000128,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    gaugeCount = v21->fields.gaugeCount;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v49 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      v49 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v49->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)tdExplanation,
      (int32_t)unknownNameText,
      (System_String_o *)v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v21 != 0;
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
  if ( (byte_59715D2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20370/*"fixAppearanceId_"*/);
    byte_59715D2 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_20370/*"fixAppearanceId_"*/, v4, 0);
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

  if ( (byte_59715D1 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_59715D1 = 1;
  }
  v7 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( index < 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_2213CDC(0, v10);
  if ( SLODWORD(ScriptIntArrayParam->max_length) <= index )
    return 0;
  else
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

  if ( (byte_59715CF & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_59715CF = 1;
  }
  v7 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_13;
  max_length = ScriptIntArrayParam->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( v11 )
    {
      if ( v16 >= LODWORD(v11->max_length) || v16 >= (unsigned int)max_length )
        sub_2213CE4(v13);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16],
        ScriptIntArrayParam->m_Items[v16],
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_2213CDC(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_13;
  v17 = UnityEngine_Random__Range_83400680(0, v12->fields.totalweight, 0);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
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

  if ( (byte_59715D0 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_59715D0 = 1;
  }
  v7 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_2213CDC(0, v10);
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
        sub_2213CE4(v13);
      if ( v12->m_Items[(int)v13] == seqId )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (max_length & ~(max_length >> 31)) == (_DWORD)v13 )
        goto LABEL_9;
    }
  }
  return v13;
}


System_Int32_array *TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59715D3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24217/*"relationBgmIds"*/);
    byte_59715D3 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24217/*"relationBgmIds"*/, 0, v2);
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
  TreasureDvcEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_59715C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59715C7 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_5984368, v9);
  sub_221405C(script, qword_5984368, v9);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v11, v12, v13, v14);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x19
  TreasureDvcEntity___c_c *v14; // x8
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__35_0; // x20
  __int64 v17; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v19; // x21
  struct TreasureDvcEntity___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  TreasureDvcEntity_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_59715C8 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__35_0__);
    sub_2213A60(&TreasureDvcEntity___c_TypeInfo);
    byte_59715C8 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_2213BB4(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_2213BB4(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_24;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v13 = (System_Collections_Generic_List_object__o *)script;
  v14 = TreasureDvcEntity___c_TypeInfo;
  if ( !*(&TreasureDvcEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo, v11);
    v14 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__35_0 = static_fields->__9__35_0;
  v7 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__35_0 )
  {
    if ( v13 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_25;
      }
    }
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, System_Collections_Generic_List_object__TypeInfo);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__35_0,
      v19,
      Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__35_0__,
      0);
    v20 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v20->__9__35_0 = _9__35_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__35_0, (int32_t)_9__35_0, v21, v22, v23, v24, v25, v26);
    if ( !v13 )
LABEL_24:
      sub_2213CDC(script, v7);
LABEL_22:
    script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v13,
                                                                          (System_Converter_T__TOutput__o *)_9__35_0,
                                                                          (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( script )
      return System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)script,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_24;
  }
  if ( !v13 )
    goto LABEL_24;
  v17 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v13->klass->_2.naturalAligment >= (unsigned int)v17
    && (System_Collections_Generic_List_object__c *)v13->klass->_2.typeHierarchy[v17 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_22;
  }
LABEL_25:
  sub_221405C(v13, System_Collections_Generic_List_object__TypeInfo, v12);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v27, v28, v29, v30);
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

  if ( (byte_59715C9 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    sub_2213A60(&StringLiteral_26601/*"{0}limitSeqId_{1}"*/);
    byte_59715C9 = 1;
  }
  if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, *(_QWORD *)&limit);
  UnitPrefix = (Il2CppObject *)TreasureDvcEntity__GetUnitPrefix(unitIndex, *(const MethodInfo **)&limit);
  v12 = limit;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v9 = System_String__Format_75697880((System_String_o *)StringLiteral_26601/*"{0}limitSeqId_{1}"*/, UnitPrefix, v8, 0);
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

  if ( (byte_59715D7 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_59715D7 = 1;
  }
  v7 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_2213CDC(0, v10);
  if ( (unsigned int)(commandType - 1) >= LODWORD(ScriptIntArrayParam->max_length) )
    sub_2213CE4(ScriptIntArrayParam);
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

  if ( (byte_59715D6 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715D6 = 1;
  }
  id = this->fields.id;
  v8 = sub_2213B20(int___TypeInfo, 2);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
LABEL_15:
    sub_2213CE4(v8);
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
    if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v9);
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
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x20
  TreasureDvcEntity_c *v9; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  bool v13; // zf
  System_String_o *v14; // x0
  Il2CppObject *v15; // x2
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v7 = (Il2CppObject *)baseKey;
  v17 = actSet;
  v18 = limit;
  if ( (byte_59715CD & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    sub_2213A60(&StringLiteral_26612/*"{0}{1}{2}"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59715CD = 1;
  }
  if ( limit != -1 )
  {
    if ( !actSet )
    {
      v8 = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_10;
    }
LABEL_7:
    v9 = TreasureDvcEntity_TypeInfo;
    if ( !*(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, baseKey);
      v9 = TreasureDvcEntity_TypeInfo;
    }
    KET_SUFFIX_ACTSET = v9->static_fields->KET_SUFFIX_ACTSET;
    v11 = System_Int32__ToString((int32_t)&v17, 0);
    v12 = System_String__Concat_75651716(KET_SUFFIX_ACTSET, v11, 0);
    v13 = limit == -1;
    v8 = (Il2CppObject *)v12;
    if ( v13 )
    {
      v15 = (Il2CppObject *)StringLiteral_1/*""*/;
      return System_String__Format_75697948((System_String_o *)StringLiteral_26612/*"{0}{1}{2}"*/, v7, v15, v8, 0);
    }
LABEL_10:
    v14 = System_Int32__ToString((int32_t)&v18, 0);
    v15 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, v14, 0);
    return System_String__Format_75697948((System_String_o *)StringLiteral_26612/*"{0}{1}{2}"*/, v7, v15, v8, 0);
  }
  if ( actSet )
    goto LABEL_7;
  return (System_String_o *)v7;
}


void TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59715E5 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity___c_TypeInfo);
    byte_59715E5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields,
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

  if ( (byte_59715E6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59715E6 = 1;
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
    sub_2213CDC(this, 0);
  return System_String__StartsWith(x, this->fields.checkKey, 0);
}


System_String_o *TreasureDvcEntity___c__DisplayClass57_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass57_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass57_0_o *v4; // x20

  v4 = this;
  if ( (byte_59715E7 & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass57_0_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59715E7 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return System_String__Replace_75703400(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0);
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
  TreasureDvcEntity_c *v5; // x0
  int v6; // w9
  int32_t v7; // w21
  System_String_o *UnitPrefix; // x0
  __int64 v9; // x1

  if ( (byte_59715E8 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcEntity_TypeInfo);
    byte_59715E8 = 1;
  }
  v5 = TreasureDvcEntity_TypeInfo;
  v6 = *(&TreasureDvcEntity_TypeInfo->_2.cctor_finished + 1);
  v7 = this->fields.unitIndex + 1;
  this->fields.unitIndex = v7;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, key);
  UnitPrefix = TreasureDvcEntity__GetUnitPrefix(v7, (const MethodInfo *)key);
  if ( !key )
    sub_2213CDC(UnitPrefix, v9);
  return System_String__StartsWith(key, UnitPrefix, 0);
}