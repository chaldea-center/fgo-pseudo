void TreasureDvcEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TreasureDvcEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TreasureDvcEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct TreasureDvcEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct TreasureDvcEntity_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct TreasureDvcEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct TreasureDvcEntity_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct TreasureDvcEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x19
  __int64 v36; // x0
  struct TreasureDvcEntity_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4C43CD5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    sub_1C37058(&StringLiteral_4961/*"DAMAGE_ONE"*/);
    sub_1C37058(&StringLiteral_19913/*"groupSeqIDs"*/);
    sub_1C37058(&StringLiteral_18555/*"delayEnd"*/);
    sub_1C37058(&StringLiteral_16534/*"_actSet"*/);
    sub_1C37058(&StringLiteral_4960/*"DAMAGE_ALL"*/);
    sub_1C37058(&StringLiteral_9754/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/);
    sub_1C37058(&StringLiteral_22957/*"randomWeights"*/);
    sub_1C37058(&StringLiteral_24014/*"tdTypeChangeIDs"*/);
    sub_1C37058(&StringLiteral_6586/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/);
    sub_1C37058(&StringLiteral_9306/*"NOT_DAMAGE"*/);
    sub_1C37058(&StringLiteral_9359/*"NP_INDIVIDUALITY_{0}"*/);
    sub_1C37058(&StringLiteral_22956/*"randomSeqIds"*/);
    byte_4C43CD5 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_22956/*"randomSeqIds"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)TreasureDvcEntity_TypeInfo->static_fields, StringLiteral_22956/*"randomSeqIds"*/, v1, v2);
  v3 = StringLiteral_22957/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22957/*"randomWeights"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v3, v5, v6);
  v7 = StringLiteral_19913/*"groupSeqIDs"*/;
  v8 = TreasureDvcEntity_TypeInfo->static_fields;
  v8->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19913/*"groupSeqIDs"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->KEY_GROUP_SEQ_ID, v7, v9, v10);
  v11 = StringLiteral_24014/*"tdTypeChangeIDs"*/;
  v12 = TreasureDvcEntity_TypeInfo->static_fields;
  v12->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_24014/*"tdTypeChangeIDs"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->KEY_TD_TYPE_CHANGE_ID, v11, v13, v14);
  v15 = StringLiteral_18555/*"delayEnd"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18555/*"delayEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->KEY_TD_DELAY_END, v15, v17, v18);
  v19 = StringLiteral_16534/*"_actSet"*/;
  v20 = TreasureDvcEntity_TypeInfo->static_fields;
  v20->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16534/*"_actSet"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->KET_SUFFIX_ACTSET, v19, v21, v22);
  v23 = StringLiteral_9754/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v24->OVERWRITE_TO_NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9754/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->OVERWRITE_TO_NP_INDIVIDUALITY, v23, v25, v26);
  v27 = StringLiteral_6586/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  v28 = TreasureDvcEntity_TypeInfo->static_fields;
  v28->FUNCTION_TYPE_NOT_NP_DAMAGE = (struct System_String_o *)StringLiteral_6586/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->FUNCTION_TYPE_NOT_NP_DAMAGE, v27, v29, v30);
  v31 = StringLiteral_9359/*"NP_INDIVIDUALITY_{0}"*/;
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v32->NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9359/*"NP_INDIVIDUALITY_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v32->NP_INDIVIDUALITY, v31, v33, v34);
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int64Enum__object____ctor(
    v35,
    (const MethodInfo_34419C4 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
  if ( !v35 )
    sub_1C372B4(v36);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    -1,
    (Il2CppObject *)StringLiteral_9306/*"NOT_DAMAGE"*/,
    (const MethodInfo_3442394 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    1,
    (Il2CppObject *)StringLiteral_4960/*"DAMAGE_ALL"*/,
    (const MethodInfo_3442394 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    2,
    (Il2CppObject *)StringLiteral_4961/*"DAMAGE_ONE"*/,
    (const MethodInfo_3442394 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  v37 = TreasureDvcEntity_TypeInfo->static_fields;
  v37->NpEffectFlagToTypeName = (struct System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__o *)v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&v37->NpEffectFlagToTypeName, (int32_t)v35, v38, v39);
}


void TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43CD4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C43CD4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *TreasureDvcEntity__GetAssumedEffectId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43CD0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16922/*"assumedEffectId"*/);
    byte_4C43CD0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16922/*"assumedEffectId"*/, 0);
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

  if ( (byte_4C43CC9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19325/*"excludeTdChangeTypes"*/);
    byte_4C43CC9 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19325/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43CCF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22321/*"npNameFileSuffix"*/);
    byte_4C43CCF = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22321/*"npNameFileSuffix"*/, 0, 0);
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
  int v11; // w8
  __int64 v12; // x22
  const MethodInfo *v13; // x4
  __int64 v14; // x23
  __int64 v15; // x8
  unsigned __int64 v16; // x28
  __int64 v17; // x8
  int32_t v18; // w24
  unsigned __int64 v19; // x21
  TreasureDvcEntity_c *v20; // x0
  int32_t v21; // w26
  TreasureDvcEntity_o *AddLimitKey; // x25
  const MethodInfo *v23; // x4
  TreasureDvcEntity_o *v24; // x27
  const MethodInfo *v25; // x4
  System_String_o *v26; // x26
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v32; // x3
  int32_t v34; // [xsp+4h] [xbp-6Ch]
  int32_t *v35; // [xsp+8h] [xbp-68h]

  if ( (byte_4C43CC3 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CC3 = 1;
  }
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  v10 = sub_1C37100(int___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_28;
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v10;
  if ( !v11 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 32) = limitCount;
  if ( v11 == 1 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 36) = -1;
  if ( actSetId )
  {
    v10 = sub_1C37100(int___TypeInfo, 2);
    if ( v10 )
    {
      v14 = v10;
      if ( *(_DWORD *)(v10 + 24) )
      {
        *(_DWORD *)(v10 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_27:
      sub_1C372BC(v10);
    }
LABEL_28:
    sub_1C372B4(v10);
  }
  v10 = sub_1C37100(int___TypeInfo, 1);
  v14 = v10;
LABEL_11:
  v15 = *(_QWORD *)(v12 + 24);
  if ( (int)v15 >= 1 )
  {
    v34 = seqId;
    v35 = groupSeqId;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        goto LABEL_27;
      if ( !v14 )
        goto LABEL_28;
      v17 = *(_QWORD *)(v14 + 24);
      if ( (int)v17 >= 1 )
        break;
LABEL_23:
      LODWORD(v15) = *(_DWORD *)(v12 + 24);
      if ( (__int64)++v16 >= (int)v15 )
        return v34;
    }
    v18 = *(_DWORD *)(v12 + 4 * v16 + 32);
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_27;
      v20 = TreasureDvcEntity_TypeInfo;
      v21 = *(_DWORD *)(v14 + 32 + 4 * v19);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v20 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v20,
                                             v20->static_fields->KEY_RANDOM_SEQ_ID,
                                             v18,
                                             v21,
                                             v13);
      v24 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v18,
                                     v21,
                                     v23);
      v26 = TreasureDvcEntity__makeAddLimitKey(
              v24,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v18,
              v21,
              v25);
      v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v27);
      if ( (v10 & 1) != 0 )
      {
        v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)v24, v28);
        if ( (v10 & 1) != 0 )
          break;
      }
      LODWORD(v17) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_23;
    }
    seqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v24, v29);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, seqId, v30);
    *v35 = TreasureDvcEntity__getGroupSeqId(this, v26, RandomSeqIndex, v32);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__object__o *v20; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
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
  int32_t v37; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C43CD1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C37058(&System_Func_string__string__TypeInfo);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1C37058(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1C37058(&TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
    sub_1C37058(&StringLiteral_24010/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4C43CD1 = 1;
  }
  result = 0;
  v5 = sub_1C372A4(TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = battlePontId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v7, v8, v9, v10, v11, v12);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24010/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v13,
                                                                        0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)script, v15, v16);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v18 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0),
        v19 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v18,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_string___),
        v20 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v20,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v19,
                                                                               (System_Func_TSource__TResult__o *)v20,
                                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0) )
  {
LABEL_41:
    sub_1C372B4(script);
  }
  klass = script->klass;
  v22 = script;
  v23 = *(unsigned __int16 *)&script->klass->_2.rank;
  if ( *(_WORD *)&script->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_10;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v25 = sub_1C87870(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v25)(
          v22,
          *(_QWORD *)(v25 + 8));
  if ( !v26 )
    sub_1C372B4(0);
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
      v30 = sub_1C87870(v26, System_Collections_IEnumerator_TypeInfo, 0);
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
      v34 = sub_1C87870(v26, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v36 = System_Int32__TryParse(v35, &result, 0);
    if ( v36 )
    {
      if ( !v6 )
        sub_1C372B4(v36);
      v37 = result;
      items = v6->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C372B4(v36);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v37,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v37;
      }
    }
  }
  v41 = *(_QWORD *)v26;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_36;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_36:
    v44 = sub_1C87870(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v26, *(_QWORD *)(v44 + 8));
  return v6;
}


bool TreasureDvcEntity__HasEffectFlag(TreasureDvcEntity_o *this, int64_t effectFlag, const MethodInfo *method)
{
  return (this->fields.effectFlag & effectFlag) != 0;
}


void TreasureDvcEntity__InitializeTreasureDeviceIndividuality(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  TreasureDvcEntity_c *v4; // x8
  ConstantStrMaster_o *v5; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *NpEffectFlagToTypeName; // x0
  TreasureDvcEntity_c *v7; // x0
  Il2CppObject *current; // x21
  System_String_o *v9; // x0
  System_Collections_ICollection_o *ValueArray; // x22
  TreasureDvcEntity_c *v11; // x0
  System_String_o *v12; // x1
  struct System_Int32_array *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v18; // x21
  System_Collections_ICollection_o *FunctionEntitiesByIds; // x21
  struct System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  TreasureDvcEntity_c *v23; // x0
  struct TreasureDvcEntity_StaticFields *static_fields; // x8
  System_String_o *NP_INDIVIDUALITY; // x22
  Il2CppObject *Item; // x0
  struct System_Int32_array *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array **p_treasureDeviceEffectIndividuality; // x19
  TreasureDvcEntity_c *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x23
  System_Collections_Generic_HashSet_int__o *v33; // x22
  _BOOL8 v34; // x0
  Il2CppObject *v35; // x26
  bool isAllTargets; // w8
  TreasureDvcEntity_c *v37; // x0
  uint32_t cctor_finished; // w9
  struct TreasureDvcEntity_StaticFields *v39; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v40; // x0
  System_String_o *v41; // x21
  Il2CppObject *v42; // x1
  System_String_o *v43; // x1
  System_Int32_array *v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct TreasureDvcEntity_StaticFields *v47; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v48; // x0
  System_String_o *v49; // x21
  Il2CppObject *v50; // x1
  System_String_o *v51; // x1
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C43CB9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor___78034736);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
    byte_4C43CB9 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  v4 = TreasureDvcEntity_TypeInfo;
  v5 = (ConstantStrMaster_o *)Master_object;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int64Enum__object___get_Values(
                                                                                      NpEffectFlagToTypeName,
                                                                                      (const MethodInfo_34421A4 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_Int64Enum__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v52,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)NpEffectFlagToTypeName,
    (const MethodInfo_3ADFC40 *)Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
  v54 = v52;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v54,
            (const MethodInfo_355AA94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__) )
  {
    v7 = TreasureDvcEntity_TypeInfo;
    current = v54.fields._current;
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v7 = TreasureDvcEntity_TypeInfo;
    }
    v9 = System_String__Format(v7->static_fields->OVERWRITE_TO_NP_INDIVIDUALITY, current, 0);
    if ( !v5 )
      sub_1C372B4(v9);
    ValueArray = (System_Collections_ICollection_o *)ConstantStrMaster__GetValueArray(v5, v9, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty(ValueArray, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)ValueArray,
           this->fields.id,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v11 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v11 = TreasureDvcEntity_TypeInfo;
      }
      v12 = System_String__Format(v11->static_fields->NP_INDIVIDUALITY, current, 0);
      v13 = ConstantStrMaster__GetValueArray(v5, v12, 0, 0);
      if ( !v13 )
        v13 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
      this->fields.treasureDeviceEffectIndividuality = v13;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.treasureDeviceEffectIndividuality, (int32_t)v13, v14, v15);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v54,
        (const MethodInfo_355AA90 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v54,
    (const MethodInfo_355AA90 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)NpEffectFlagToTypeName,
             this->fields.id,
             this->fields.maxLv,
             v16);
  if ( !Entity )
    goto LABEL_30;
  v18 = Entity;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entity->fields.funcId, 0) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  FunctionEntitiesByIds = (System_Collections_ICollection_o *)FunctionMaster__GetFunctionEntitiesByIds(
                                                                (FunctionMaster_o *)NpEffectFlagToTypeName,
                                                                v18->fields.funcId,
                                                                0);
  if ( BasicHelper__IsNullOrEmpty(FunctionEntitiesByIds, 0) )
  {
LABEL_30:
    v20 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
    this->fields.treasureDeviceEffectIndividuality = v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.treasureDeviceEffectIndividuality, (int32_t)v20, v21, v22);
    return;
  }
  v23 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v23 = TreasureDvcEntity_TypeInfo;
  }
  static_fields = v23->static_fields;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NP_INDIVIDUALITY = static_fields->NP_INDIVIDUALITY;
  Item = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
           NpEffectFlagToTypeName,
           -1,
           (const MethodInfo_34422F4 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__Format(
                                                                                      NP_INDIVIDUALITY,
                                                                                      Item,
                                                                                      0);
  if ( !v5 )
    goto LABEL_63;
  v27 = ConstantStrMaster__GetValueArray(v5, (System_String_o *)NpEffectFlagToTypeName, 0, 0);
  if ( !v27 )
    v27 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  this->fields.treasureDeviceEffectIndividuality = v27;
  p_treasureDeviceEffectIndividuality = &this->fields.treasureDeviceEffectIndividuality;
  sub_1C36FFC((CGThumbnailListItem_o *)p_treasureDeviceEffectIndividuality, (int32_t)v27, v28, v29);
  v31 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v31 = TreasureDvcEntity_TypeInfo;
  }
  v32 = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                         v5,
                                                         v31->static_fields->FUNCTION_TYPE_NOT_NP_DAMAGE,
                                                         0,
                                                         0);
  if ( !v32 )
    v32 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C37100(int___TypeInfo, 0);
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56966008(
    v33,
    v32,
    (const MethodInfo_3653B78 *)Method_System_Collections_Generic_HashSet_int___ctor___78034736);
  if ( !FunctionEntitiesByIds )
LABEL_63:
    sub_1C372B4(NpEffectFlagToTypeName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)FunctionEntitiesByIds,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    if ( !v34 )
      break;
    v35 = v53.fields._current;
    if ( !v53.fields._current )
      sub_1C372B4(v34);
    if ( !v33 )
      sub_1C372B4(v34);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v33,
            (int32_t)v53.fields._current[1].monitor,
            (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__)
      && FuncList__isDamage((int32_t)v35[1].monitor, 0) )
    {
      isAllTargets = Target__isAllTargets(HIDWORD(v35[1].monitor), 0);
      v37 = TreasureDvcEntity_TypeInfo;
      cctor_finished = TreasureDvcEntity_TypeInfo->_2.cctor_finished;
      if ( isAllTargets )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v37 = TreasureDvcEntity_TypeInfo;
        }
        v39 = v37->static_fields;
        v40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v39->NpEffectFlagToTypeName;
        if ( !v40 )
          sub_1C372B4(0);
        v41 = v39->NP_INDIVIDUALITY;
        v42 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v40,
                1,
                (const MethodInfo_34422F4 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v43 = System_String__Format(v41, v42, 0);
        v44 = ConstantStrMaster__GetValueArray(v5, v43, 0, 0);
        if ( !v44 )
          v44 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v37 = TreasureDvcEntity_TypeInfo;
        }
        v47 = v37->static_fields;
        v48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v47->NpEffectFlagToTypeName;
        if ( !v48 )
          sub_1C372B4(0);
        v49 = v47->NP_INDIVIDUALITY;
        v50 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v48,
                2,
                (const MethodInfo_34422F4 *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v51 = System_String__Format(v49, v50, 0);
        v44 = ConstantStrMaster__GetValueArray(v5, v51, 0, 0);
        if ( !v44 )
          v44 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
      }
      *p_treasureDeviceEffectIndividuality = v44;
      sub_1C36FFC((CGThumbnailListItem_o *)p_treasureDeviceEffectIndividuality, (int32_t)v44, v45, v46);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
}


bool TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4C43CCD & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CCD = 1;
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

  if ( (byte_4C43CC1 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CC1 = 1;
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

  if ( (byte_4C43CCE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6819/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4C43CCE = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6819/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4C43CC0 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CC0 = 1;
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


bool TreasureDvcEntity__IsRandomTD_42981804(
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

  if ( (byte_4C43CCA & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CCA = 1;
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
  const MethodInfo *v16; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w24
  Il2CppObject *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x2
  System_String_o *v47; // x1
  const MethodInfo *v48; // x3
  bool v49; // w22
  int v50; // w23
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  int32_t v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C43CD2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C37058(&System_Func_int__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__);
    sub_1C37058(&TreasureDvcEntity___c_TypeInfo);
    sub_1C37058(&StringLiteral_24011/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4C43CD2 = 1;
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
    _9__57_0 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__57_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__,
      0);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__57_0,
          (const MethodInfo_31177E8 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v17 )
    sub_1C372B4(0);
  klass = v17->klass;
  v19 = v17;
  v20 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_1C87870(v17, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v23 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_21;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_21:
      v27 = sub_1C87870(v23, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1C87870(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( v38 <= battlePointPhase )
    {
      v57 = battlePointId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v32, v33, v34, v35, v36, v37);
      v56 = v38;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v40, v41, v42, v43, v44, v45);
      v47 = System_String__Format_63602948((System_String_o *)StringLiteral_24011/*"tdChangeByBattlePoint_{0}_{1}"*/, v39, v46, 0);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v47, 0, v48);
      v49 = 1;
      v50 = 5;
      goto LABEL_33;
    }
  }
  v49 = 0;
  v50 = 6;
LABEL_33:
  v51 = *(_QWORD *)v23;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_37;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_37:
    v54 = sub_1C87870(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v23, *(_QWORD *)(v54 + 8));
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C43CD3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24015/*"tdWithBackStepNpcIds"*/);
    byte_4C43CD3 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24015/*"tdWithBackStepNpcIds"*/, 0, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1C36FFC((CGThumbnailListItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8);
  return *npcIds != 0;
}


bool TreasureDvcEntity__checkScript(TreasureDvcEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C43CBB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C43CBB = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  bool v7; // w20
  int v8; // w19
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C43CBC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4C43CBC = 1;
  }
  memset(&v10, 0, sizeof(v10));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v10,
      Keys,
      (const MethodInfo_36C85B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v10,
             (const MethodInfo_3560C80 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v7 )
        break;
      if ( !v10.fields._currentKey )
        sub_1C372B4(0);
      if ( System_String__Contains((System_String_o *)v10.fields._currentKey, checkKey, 0) )
      {
        v8 = 5;
        goto LABEL_11;
      }
    }
    v8 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v7 && v8 == 5;
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  System_String_o *Detail_42979940; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t gaugeCount; // w8
  LocalizationManager_c *v39; // x0
  System_String_o *unknownNameText; // x1
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C43CBA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&StringLiteral_9362/*"NP_NAME"*/);
    sub_1C37058(&StringLiteral_9363/*"NP_NAME_LEVEL"*/);
    byte_4C43CBA = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8776C(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C8776C(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
  {
    sub_1C372B4(MasterData_object);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  *maxLv = this->fields.maxLv;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9362/*"NP_NAME"*/, 0);
    v29 = System_String__Format(v32, (Il2CppObject *)this->fields.name, 0);
  }
  else
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9363/*"NP_NAME_LEVEL"*/, 0);
    name = (Il2CppObject *)this->fields.name;
    v42 = lv;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24, v25, v26, v27);
    v29 = System_String__Format_63602948(v20, name, v28, 0);
  }
  *tdName = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)tdName, (int32_t)v29, v30, v31);
  if ( v19 )
  {
    Detail_42979940 = TreasureDvcLvEntity__getDetail_42979940(v19, lv, v33);
    *tdExplanation = Detail_42979940;
    sub_1C36FFC((CGThumbnailListItem_o *)tdExplanation, (int32_t)Detail_42979940, v36, v37);
    gaugeCount = v19->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C3E2C9 )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      byte_4C3E2C9 = 1;
    }
    v39 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v39->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1C36FFC((CGThumbnailListItem_o *)tdExplanation, (int32_t)unknownNameText, (int32_t)v33, v34);
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
  if ( (byte_4C43CC7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19459/*"fixAppearanceId_"*/);
    byte_4C43CC7 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_19459/*"fixAppearanceId_"*/, v4, 0);
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
  int32_t max_length; // w8

  if ( (byte_4C43CC6 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C43CC6 = 1;
  }
  v7 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( index < 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1C372B4(0);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C372BC(ScriptIntArrayParam);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x22
  int32_t v16; // w1

  if ( (byte_4C43CC4 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_WeightRate_int___ctor__);
    sub_1C37058(&Method_WeightRate_int__getData__);
    sub_1C37058(&Method_WeightRate_int__getTotalWeight__);
    sub_1C37058(&Method_WeightRate_int__setWeight__);
    sub_1C37058(&WeightRate_int__TypeInfo);
    byte_4C43CC4 = 1;
  }
  v7 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1C372A4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3B94A3C *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  max_length = ScriptIntArrayParam->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( v11 )
    {
      if ( v15 >= LODWORD(v11->max_length) || v15 >= (unsigned int)max_length )
        sub_1C372BC(v13);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v15],
        ScriptIntArrayParam->m_Items[v15],
        (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_14:
    sub_1C372B4(v13);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v16 = UnityEngine_Random__Range_71226972(0, v12->fields.totalweight, 0);
  return WeightRate_int___getData(v12, v16, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
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
  int max_length; // w9
  System_Int32_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_4C43CC5 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C43CC5 = 1;
  }
  v7 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C372B4(0);
  max_length = ScriptIntArrayParam->max_length;
  v11 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v12) = -1;
  }
  else
  {
    v12 = 0;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v12 )
        sub_1C372BC(v12);
      if ( v11->m_Items[(int)v12] == seqId )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( max_length == (_DWORD)v12 )
        goto LABEL_9;
    }
  }
  return v12;
}


System_Int32_array *TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C43CC8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23020/*"relationBgmIds"*/);
    byte_4C43CC8 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23020/*"relationBgmIds"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t TreasureDvcEntity__getScriptInt(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  TreasureDvcEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_4C43CBD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C43CBD = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1C37574(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v11, v12, v13, v14);
}


System_Int32_array *TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *v10; // x19
  TreasureDvcEntity___c_c *v11; // x8
  System_Converter_object__int__o *_9__34_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v14; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  TreasureDvcEntity_o *v18; // x0
  int32_t v19; // w1
  const MethodInfo *v20; // x2

  if ( (byte_4C43CBE & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__);
    sub_1C37058(&TreasureDvcEntity___c_TypeInfo);
    byte_4C43CBE = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1C37194(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1C37194(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = (System_Collections_Generic_List_object__o *)script;
  v11 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v11 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__34_0 = v11->static_fields->__9__34_0;
  if ( !v10
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__34_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = TreasureDvcEntity___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__34_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__34_0,
        v14,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__,
        0);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = _9__34_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v16, v17);
    }
    if ( v10 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v10,
                                                                            (System_Converter_T__TOutput__o *)_9__34_0,
                                                                            (const MethodInfo_300F174 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1C372B4(script);
  }
  sub_1C37574(v10);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v18, v19, v20);
}


int32_t TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C43CBF & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_21238/*"limitSeqId_{0}"*/);
    byte_4C43CBF = 1;
  }
  v14 = limit;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4, v5, v6, v7);
  v11 = System_String__Format((System_String_o *)StringLiteral_21238/*"limitSeqId_{0}"*/, v10, 0);
  return TreasureDvcEntity__getScriptInt(this, v11, this->fields.seqId, v12);
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

  if ( (byte_4C43CCC & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C43CCC = 1;
  }
  v7 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C372B4(0);
  if ( (unsigned int)(commandType - 1) >= LODWORD(ScriptIntArrayParam->max_length) )
    sub_1C372BC(ScriptIntArrayParam);
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
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  __int64 v11; // x22
  unsigned __int64 v12; // x24
  TreasureDvcEntity_o *v13; // x0
  int32_t v14; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_4C43CCB & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    byte_4C43CCB = 1;
  }
  id = this->fields.id;
  v8 = sub_1C37100(int___TypeInfo, 2);
  if ( !v8 )
    sub_1C372B4(0);
  v10 = *(_QWORD *)(v8 + 24);
  v11 = v8;
  if ( !(_DWORD)v10 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v10 == 1) )
LABEL_15:
    sub_1C372BC(v8);
  *(_DWORD *)(v8 + 36) = -1;
  if ( (int)v10 < 1 )
    return id;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      goto LABEL_15;
    v13 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v14 = *(_DWORD *)(v11 + 32 + 4 * v12);
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v13 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v13,
                    (System_String_o *)v13[1].fields.script->fields._entries,
                    v14,
                    0,
                    v9);
    v8 = TreasureDvcEntity__checkScript(this, AddLimitKey, v16);
    if ( (v8 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v17);
    LODWORD(v10) = *(_DWORD *)(v11 + 24);
    if ( (__int64)++v12 >= (int)v10 )
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
  if ( (byte_4C43CC2 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity_TypeInfo);
    sub_1C37058(&StringLiteral_25211/*"{0}{1}{2}"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43CC2 = 1;
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
      v11 = System_String__Concat_63561656(KET_SUFFIX_ACTSET, v10, 0);
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
      v14 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_16109/*"_"*/, v13, 0);
    }
    return System_String__Format_63603016((System_String_o *)StringLiteral_25211/*"{0}{1}{2}"*/, (Il2CppObject *)baseKey, v14, v12, 0);
  }
  return baseKey;
}


void TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43CD6 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcEntity___c_TypeInfo);
    byte_4C43CD6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C43CD7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43CD7 = 1;
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
    sub_1C372B4(this);
  return System_String__StartsWith(x, this->fields.checkKey, 0);
}


System_String_o *TreasureDvcEntity___c__DisplayClass56_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass56_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass56_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C43CD8 & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass56_0_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43CD8 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return System_String__Replace_63608204(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0);
}