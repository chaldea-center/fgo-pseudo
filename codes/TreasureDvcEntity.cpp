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
  __int64 v37; // x1
  struct TreasureDvcEntity_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4C27FD9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_4953/*"DAMAGE_ONE"*/);
    sub_1C2D490(&StringLiteral_19898/*"groupSeqIDs"*/);
    sub_1C2D490(&StringLiteral_18546/*"delayEnd"*/);
    sub_1C2D490(&StringLiteral_16530/*"_actSet"*/);
    sub_1C2D490(&StringLiteral_4952/*"DAMAGE_ALL"*/);
    sub_1C2D490(&StringLiteral_9748/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/);
    sub_1C2D490(&StringLiteral_22936/*"randomWeights"*/);
    sub_1C2D490(&StringLiteral_23992/*"tdTypeChangeIDs"*/);
    sub_1C2D490(&StringLiteral_6580/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/);
    sub_1C2D490(&StringLiteral_9299/*"NOT_DAMAGE"*/);
    sub_1C2D490(&StringLiteral_9352/*"NP_INDIVIDUALITY_{0}"*/);
    sub_1C2D490(&StringLiteral_22935/*"randomSeqIds"*/);
    byte_4C27FD9 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_22935/*"randomSeqIds"*/;
  sub_1C2D434((CGThumbnailListItem_o *)TreasureDvcEntity_TypeInfo->static_fields, StringLiteral_22935/*"randomSeqIds"*/, v1, v2);
  v3 = StringLiteral_22936/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22936/*"randomWeights"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v3, v5, v6);
  v7 = StringLiteral_19898/*"groupSeqIDs"*/;
  v8 = TreasureDvcEntity_TypeInfo->static_fields;
  v8->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19898/*"groupSeqIDs"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->KEY_GROUP_SEQ_ID, v7, v9, v10);
  v11 = StringLiteral_23992/*"tdTypeChangeIDs"*/;
  v12 = TreasureDvcEntity_TypeInfo->static_fields;
  v12->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_23992/*"tdTypeChangeIDs"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->KEY_TD_TYPE_CHANGE_ID, v11, v13, v14);
  v15 = StringLiteral_18546/*"delayEnd"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18546/*"delayEnd"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v16->KEY_TD_DELAY_END, v15, v17, v18);
  v19 = StringLiteral_16530/*"_actSet"*/;
  v20 = TreasureDvcEntity_TypeInfo->static_fields;
  v20->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16530/*"_actSet"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->KET_SUFFIX_ACTSET, v19, v21, v22);
  v23 = StringLiteral_9748/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v24->OVERWRITE_TO_NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9748/*"OVERWRITE_TO_NP_INDIVIDUALITY_{0}_BY_TREASURE_DEVICE_IDS"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->OVERWRITE_TO_NP_INDIVIDUALITY, v23, v25, v26);
  v27 = StringLiteral_6580/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  v28 = TreasureDvcEntity_TypeInfo->static_fields;
  v28->FUNCTION_TYPE_NOT_NP_DAMAGE = (struct System_String_o *)StringLiteral_6580/*"FUNCTION_TYPE_NOT_NP_DAMAGE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->FUNCTION_TYPE_NOT_NP_DAMAGE, v27, v29, v30);
  v31 = StringLiteral_9352/*"NP_INDIVIDUALITY_{0}"*/;
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v32->NP_INDIVIDUALITY = (struct System_String_o *)StringLiteral_9352/*"NP_INDIVIDUALITY_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v32->NP_INDIVIDUALITY, v31, v33, v34);
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int64Enum__object____ctor(
    v35,
    (const MethodInfo_34286BC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string___ctor__);
  if ( !v35 )
    sub_1C2D6EC(v36, v37);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    -1,
    (Il2CppObject *)StringLiteral_9299/*"NOT_DAMAGE"*/,
    (const MethodInfo_342908C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    1,
    (Il2CppObject *)StringLiteral_4952/*"DAMAGE_ALL"*/,
    (const MethodInfo_342908C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  System_Collections_Generic_Dictionary_Int64Enum__object___Add(
    v35,
    2,
    (Il2CppObject *)StringLiteral_4953/*"DAMAGE_ONE"*/,
    (const MethodInfo_342908C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__Add__);
  v38 = TreasureDvcEntity_TypeInfo->static_fields;
  v38->NpEffectFlagToTypeName = (struct System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__o *)v35;
  sub_1C2D434((CGThumbnailListItem_o *)&v38->NpEffectFlagToTypeName, (int32_t)v35, v39, v40);
}


void TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FD8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27FD8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *TreasureDvcEntity__GetAssumedEffectId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FD4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16917/*"assumedEffectId"*/);
    byte_4C27FD4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16917/*"assumedEffectId"*/, 0);
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

  if ( (byte_4C27FCD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19311/*"excludeTdChangeTypes"*/);
    byte_4C27FCD = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19311/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FD3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22301/*"npNameFileSuffix"*/);
    byte_4C27FD3 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22301/*"npNameFileSuffix"*/, 0, 0);
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
  const MethodInfo *v12; // x2
  int v13; // w8
  __int64 v14; // x22
  const MethodInfo *v15; // x4
  __int64 v16; // x23
  __int64 v17; // x8
  unsigned __int64 v18; // x28
  __int64 v19; // x8
  int32_t v20; // w24
  unsigned __int64 v21; // x21
  TreasureDvcEntity_c *v22; // x0
  int32_t v23; // w26
  TreasureDvcEntity_o *AddLimitKey; // x25
  const MethodInfo *v25; // x4
  TreasureDvcEntity_o *v26; // x27
  const MethodInfo *v27; // x4
  System_String_o *v28; // x26
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v33; // x3
  int32_t v35; // [xsp+4h] [xbp-6Ch]
  int32_t *v36; // [xsp+8h] [xbp-68h]

  if ( (byte_4C27FC7 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FC7 = 1;
  }
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  v10 = sub_1C2D538(int___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_28;
  v13 = *(_DWORD *)(v10 + 24);
  v14 = v10;
  if ( !v13 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 32) = limitCount;
  if ( v13 == 1 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 36) = -1;
  if ( actSetId )
  {
    v10 = sub_1C2D538(int___TypeInfo, 2);
    if ( v10 )
    {
      v16 = v10;
      if ( *(_DWORD *)(v10 + 24) )
      {
        *(_DWORD *)(v10 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_27:
      sub_1C2D6F4(v10, v11, v12);
    }
LABEL_28:
    sub_1C2D6EC(v10, v11);
  }
  v10 = sub_1C2D538(int___TypeInfo, 1);
  v16 = v10;
LABEL_11:
  v17 = *(_QWORD *)(v14 + 24);
  if ( (int)v17 >= 1 )
  {
    v35 = seqId;
    v36 = groupSeqId;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_27;
      if ( !v16 )
        goto LABEL_28;
      v19 = *(_QWORD *)(v16 + 24);
      if ( (int)v19 >= 1 )
        break;
LABEL_23:
      LODWORD(v17) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v18 >= (int)v17 )
        return v35;
    }
    v20 = *(_DWORD *)(v14 + 4 * v18 + 32);
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        goto LABEL_27;
      v22 = TreasureDvcEntity_TypeInfo;
      v23 = *(_DWORD *)(v16 + 32 + 4 * v21);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v22 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v22,
                                             v22->static_fields->KEY_RANDOM_SEQ_ID,
                                             v20,
                                             v23,
                                             v15);
      v26 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v20,
                                     v23,
                                     v25);
      v28 = TreasureDvcEntity__makeAddLimitKey(
              v26,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v20,
              v23,
              v27);
      v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v29);
      if ( (v10 & 1) != 0 )
      {
        v10 = TreasureDvcEntity__checkScript(this, (System_String_o *)v26, v12);
        if ( (v10 & 1) != 0 )
          break;
      }
      LODWORD(v19) = *(_DWORD *)(v16 + 24);
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_23;
    }
    seqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v26, v30);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, seqId, v31);
    *v36 = TreasureDvcEntity__getGroupSeqId(this, v28, RandomSeqIndex, v33);
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
  Il2CppObject *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__object__o *v18; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_String_o *v34; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C27FD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C2D490(&System_Func_string__string__TypeInfo);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1C2D490(&Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1C2D490(&TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
    sub_1C2D490(&StringLiteral_23988/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4C27FD5 = 1;
  }
  result = 0;
  v5 = sub_1C2D6DC(TreasureDvcEntity___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = battlePontId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v7, v8, v9);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_23988/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v10,
                                                                        0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)script, v13, v14);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_344A008 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0),
        v17 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v16,
                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_string___),
        v18 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass56_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v17,
                                                                               (System_Func_TSource__TResult__o *)v18,
                                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_string__string___)) == 0) )
  {
LABEL_41:
    sub_1C2D6EC(script, v12);
  }
  klass = script->klass;
  v20 = script;
  v21 = *(unsigned __int16 *)&script->klass->_2.rank;
  if ( *(_WORD *)&script->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_10;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v23 = sub_1C7DCA8(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C2D6EC(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_17;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_17:
      v29 = sub_1C7DCA8(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v32 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_24;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_24:
      v33 = sub_1C7DCA8(v25, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    v35 = System_Int32__TryParse(v34, &result, 0);
    if ( v35 )
    {
      if ( !v6 )
        sub_1C2D6EC(v35, v36);
      v37 = (unsigned int)result;
      items = v6->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C2D6EC(v35, v37);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v37,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v37;
      }
    }
  }
  v41 = *(_QWORD *)v25;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
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
    v44 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
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
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v19; // x21
  System_Collections_ICollection_o *FunctionEntitiesByIds; // x21
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  TreasureDvcEntity_c *v24; // x0
  struct TreasureDvcEntity_StaticFields *static_fields; // x8
  System_String_o *NP_INDIVIDUALITY; // x22
  Il2CppObject *Item; // x0
  struct System_Int32_array *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Int32_array **p_treasureDeviceEffectIndividuality; // x19
  TreasureDvcEntity_c *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x23
  System_Collections_Generic_HashSet_int__o *v34; // x22
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x26
  __int64 v38; // x1
  bool isAllTargets; // w8
  TreasureDvcEntity_c *v40; // x0
  uint32_t cctor_finished; // w9
  struct TreasureDvcEntity_StaticFields *v42; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v43; // x0
  System_String_o *v44; // x21
  Il2CppObject *v45; // x1
  System_String_o *v46; // x1
  System_Int32_array *v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct TreasureDvcEntity_StaticFields *v50; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v51; // x0
  System_String_o *v52; // x21
  Il2CppObject *v53; // x1
  System_String_o *v54; // x1
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C27FBD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
    byte_4C27FBD = 1;
  }
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ConstantStrMaster___);
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
                                                                                      (const MethodInfo_3428E9C *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Values__);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_Int64Enum__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v55,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)NpEffectFlagToTypeName,
    (const MethodInfo_3AC66D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_TreasureDvcEntity_EffectFlag__string__GetEnumerator__);
  v57 = v55;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___MoveNext(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v57,
            (const MethodInfo_354178C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__MoveNext__) )
  {
    v8 = TreasureDvcEntity_TypeInfo;
    current = v57.fields._current;
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v8 = TreasureDvcEntity_TypeInfo;
    }
    v10 = System_String__Format(v8->static_fields->OVERWRITE_TO_NP_INDIVIDUALITY, current, 0);
    if ( !v6 )
      sub_1C2D6EC(v10, v10);
    ValueArray = (System_Collections_ICollection_o *)ConstantStrMaster__GetValueArray(v6, v10, 0, 0);
    if ( !BasicHelper__IsNullOrEmpty(ValueArray, 0)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)ValueArray,
           this->fields.id,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
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
        v14 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      this->fields.treasureDeviceEffectIndividuality = v14;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.treasureDeviceEffectIndividuality, (int32_t)v14, v15, v16);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v57,
        (const MethodInfo_3541788 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int64Enum__object___Dispose(
    (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v57,
    (const MethodInfo_3541788 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TreasureDvcEntity_EffectFlag__string__Dispose__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)NpEffectFlagToTypeName,
             this->fields.id,
             this->fields.maxLv,
             v17);
  if ( !Entity )
    goto LABEL_30;
  v19 = Entity;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entity->fields.funcId, 0) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  FunctionEntitiesByIds = (System_Collections_ICollection_o *)FunctionMaster__GetFunctionEntitiesByIds(
                                                                (FunctionMaster_o *)NpEffectFlagToTypeName,
                                                                v19->fields.funcId,
                                                                0);
  if ( BasicHelper__IsNullOrEmpty(FunctionEntitiesByIds, 0) )
  {
LABEL_30:
    v21 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
    this->fields.treasureDeviceEffectIndividuality = v21;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.treasureDeviceEffectIndividuality, (int32_t)v21, v22, v23);
    return;
  }
  v24 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v24 = TreasureDvcEntity_TypeInfo;
  }
  static_fields = v24->static_fields;
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)static_fields->NpEffectFlagToTypeName;
  if ( !NpEffectFlagToTypeName )
    goto LABEL_63;
  NP_INDIVIDUALITY = static_fields->NP_INDIVIDUALITY;
  Item = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
           NpEffectFlagToTypeName,
           -1,
           (const MethodInfo_3428FEC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
  NpEffectFlagToTypeName = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__Format(
                                                                                      NP_INDIVIDUALITY,
                                                                                      Item,
                                                                                      0);
  if ( !v6 )
    goto LABEL_63;
  v28 = ConstantStrMaster__GetValueArray(v6, (System_String_o *)NpEffectFlagToTypeName, 0, 0);
  if ( !v28 )
    v28 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.treasureDeviceEffectIndividuality = v28;
  p_treasureDeviceEffectIndividuality = &this->fields.treasureDeviceEffectIndividuality;
  sub_1C2D434((CGThumbnailListItem_o *)p_treasureDeviceEffectIndividuality, (int32_t)v28, v29, v30);
  v32 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v32 = TreasureDvcEntity_TypeInfo;
  }
  v33 = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                         v6,
                                                         v32->static_fields->FUNCTION_TYPE_NOT_NP_DAMAGE,
                                                         0,
                                                         0);
  if ( !v33 )
    v33 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C2D538(int___TypeInfo, 0);
  v34 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v34,
    v33,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  if ( !FunctionEntitiesByIds )
LABEL_63:
    sub_1C2D6EC(NpEffectFlagToTypeName, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)FunctionEntitiesByIds,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    if ( !v35 )
      break;
    v37 = v56.fields._current;
    if ( !v56.fields._current )
      sub_1C2D6EC(v35, v36);
    if ( !v34 )
      sub_1C2D6EC(v35, v36);
    if ( !System_Collections_Generic_HashSet_int___Contains(
            v34,
            (int32_t)v56.fields._current[1].monitor,
            (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__)
      && FuncList__isDamage((int32_t)v37[1].monitor, 0) )
    {
      isAllTargets = Target__isAllTargets(HIDWORD(v37[1].monitor), 0);
      v40 = TreasureDvcEntity_TypeInfo;
      cctor_finished = TreasureDvcEntity_TypeInfo->_2.cctor_finished;
      if ( isAllTargets )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v40 = TreasureDvcEntity_TypeInfo;
        }
        v42 = v40->static_fields;
        v43 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v42->NpEffectFlagToTypeName;
        if ( !v43 )
          sub_1C2D6EC(0, v38);
        v44 = v42->NP_INDIVIDUALITY;
        v45 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v43,
                1,
                (const MethodInfo_3428FEC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v46 = System_String__Format(v44, v45, 0);
        v47 = ConstantStrMaster__GetValueArray(v6, v46, 0, 0);
        if ( !v47 )
          v47 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
          v40 = TreasureDvcEntity_TypeInfo;
        }
        v50 = v40->static_fields;
        v51 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v50->NpEffectFlagToTypeName;
        if ( !v51 )
          sub_1C2D6EC(0, v38);
        v52 = v50->NP_INDIVIDUALITY;
        v53 = System_Collections_Generic_Dictionary_Int64Enum__object___get_Item(
                v51,
                2,
                (const MethodInfo_3428FEC *)Method_System_Collections_Generic_Dictionary_TreasureDvcEntity_EffectFlag__string__get_Item__);
        v54 = System_String__Format(v52, v53, 0);
        v47 = ConstantStrMaster__GetValueArray(v6, v54, 0, 0);
        if ( !v47 )
          v47 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      }
      *p_treasureDeviceEffectIndividuality = v47;
      sub_1C2D434((CGThumbnailListItem_o *)p_treasureDeviceEffectIndividuality, (int32_t)v47, v48, v49);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
}


bool TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4C27FD1 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FD1 = 1;
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

  if ( (byte_4C27FC5 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FC5 = 1;
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

  if ( (byte_4C27FD2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6813/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4C27FD2 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6813/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4C27FC4 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FC4 = 1;
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


bool TreasureDvcEntity__IsRandomTD_42747216(
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

  if ( (byte_4C27FCE & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FCE = 1;
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
  __int64 v18; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w24
  Il2CppObject *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x2
  System_String_o *v43; // x1
  const MethodInfo *v44; // x3
  bool v45; // w22
  int v46; // w23
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C27FD6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__);
    sub_1C2D490(&TreasureDvcEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_23989/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4C27FD6 = 1;
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
    _9__57_0 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__57_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__57_0__,
      0);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__57_0,
          (const MethodInfo_30FE4E0 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v17 )
    sub_1C2D6EC(0, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_1C7DCA8(v17, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C2D6EC(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1C7DCA8(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1C7DCA8(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( v37 <= battlePointPhase )
    {
      v53 = battlePointId;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
      v52 = v37;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v39, v40, v41);
      v43 = System_String__Format_63499156((System_String_o *)StringLiteral_23989/*"tdChangeByBattlePoint_{0}_{1}"*/, v38, v42, 0);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v43, 0, v44);
      v45 = 1;
      v46 = 5;
      goto LABEL_33;
    }
  }
  v45 = 0;
  v46 = 6;
LABEL_33:
  v47 = *(_QWORD *)v25;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_37;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_37:
    v50 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v25, *(_QWORD *)(v50 + 8));
  if ( v46 == 6 )
  {
    v45 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v45;
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

  if ( (byte_4C27FD7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23993/*"tdWithBackStepNpcIds"*/);
    byte_4C27FD7 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23993/*"tdWithBackStepNpcIds"*/, 0, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1C2D434((CGThumbnailListItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8);
  return *npcIds != 0;
}


bool TreasureDvcEntity__checkScript(TreasureDvcEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C27FBF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C27FBF = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4C27FC0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4C27FC0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_344A008 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1C2D6EC(0, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_36AF2AC *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v12,
             (const MethodInfo_3547978 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._currentKey )
        sub_1C2D6EC(0, v8);
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
      (const MethodInfo_3547974 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  System_String_o *Detail_42745352; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t gaugeCount; // w8
  LocalizationManager_c *v36; // x0
  System_String_o *unknownNameText; // x1
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C27FBE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&StringLiteral_9355/*"NP_NAME"*/);
    sub_1C2D490(&StringLiteral_9356/*"NP_NAME_LEVEL"*/);
    byte_4C27FBE = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C7DBA4(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C7DBA4(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
  {
    sub_1C2D6EC(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  *maxLv = this->fields.maxLv;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9355/*"NP_NAME"*/, 0);
    v26 = System_String__Format(v29, (Il2CppObject *)this->fields.name, 0);
  }
  else
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9356/*"NP_NAME_LEVEL"*/, 0);
    name = (Il2CppObject *)this->fields.name;
    v39 = lv;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v22, v23, v24);
    v26 = System_String__Format_63499156(v20, name, v25, 0);
  }
  *tdName = v26;
  sub_1C2D434((CGThumbnailListItem_o *)tdName, (int32_t)v26, v27, v28);
  if ( v19 )
  {
    Detail_42745352 = TreasureDvcLvEntity__getDetail_42745352(v19, lv, v30);
    *tdExplanation = Detail_42745352;
    sub_1C2D434((CGThumbnailListItem_o *)tdExplanation, (int32_t)Detail_42745352, v33, v34);
    gaugeCount = v19->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C2267D )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      byte_4C2267D = 1;
    }
    v36 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v36->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1C2D434((CGThumbnailListItem_o *)tdExplanation, (int32_t)unknownNameText, (int32_t)v30, v31);
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
  if ( (byte_4C27FCB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19445/*"fixAppearanceId_"*/);
    byte_4C27FCB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_19445/*"fixAppearanceId_"*/, v4, 0);
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
  __int64 v11; // x2
  int32_t max_length; // w8

  if ( (byte_4C27FCA & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C27FCA = 1;
  }
  v7 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( index < 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1C2D6EC(0, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C2D6F4(ScriptIntArrayParam, v10, v11);
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
  __int64 v15; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w1

  if ( (byte_4C27FC8 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C27FC8 = 1;
  }
  v7 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  max_length = ScriptIntArrayParam->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    while ( v11 )
    {
      if ( v17 >= LODWORD(v11->max_length) || v17 >= (unsigned int)max_length )
        sub_1C2D6F4(v13, v14, v15);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v17],
        ScriptIntArrayParam->m_Items[v17],
        (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_14:
    sub_1C2D6EC(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v18 = UnityEngine_Random__Range_71123924(0, v12->fields.totalweight, 0);
  return WeightRate_int___getData(v12, v18, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
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
  __int64 v11; // x2
  int max_length; // w9
  System_Int32_array *v13; // x8
  __int64 v14; // x0

  if ( (byte_4C27FC9 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C27FC9 = 1;
  }
  v7 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C2D6EC(0, v10);
  max_length = ScriptIntArrayParam->max_length;
  v13 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v14) = -1;
  }
  else
  {
    v14 = 0;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v14 )
        sub_1C2D6F4(v14, v10, v11);
      if ( v13->m_Items[(int)v14] == seqId )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( max_length == (_DWORD)v14 )
        goto LABEL_9;
    }
  }
  return v14;
}


System_Int32_array *TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27FCC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22999/*"relationBgmIds"*/);
    byte_4C27FCC = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22999/*"relationBgmIds"*/, 0, v2);
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
  if ( (byte_4C27FC1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C27FC1 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C2D9AC(script);
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
  const MethodInfo *v18; // x3
  TreasureDvcEntity_o *v19; // x0
  int32_t v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4C27FC2 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__);
    sub_1C2D490(&TreasureDvcEntity___c_TypeInfo);
    byte_4C27FC2 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1C2D5CC(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1C2D5CC(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__34_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__34_0,
        v15,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__34_0__,
        0);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = _9__34_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v17, v18);
    }
    if ( v11 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v11,
                                                                            (System_Converter_T__TOutput__o *)_9__34_0,
                                                                            (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1C2D6EC(script, v7);
  }
  sub_1C2D9AC(v11);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v19, v20, v21);
}


int32_t TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C27FC3 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_21223/*"limitSeqId_{0}"*/);
    byte_4C27FC3 = 1;
  }
  v11 = limit;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_21223/*"limitSeqId_{0}"*/, v7, 0);
  return TreasureDvcEntity__getScriptInt(this, v8, this->fields.seqId, v9);
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
  __int64 v11; // x2

  if ( (byte_4C27FD0 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C27FD0 = 1;
  }
  v7 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C2D6EC(0, v10);
  if ( (unsigned int)(commandType - 1) >= LODWORD(ScriptIntArrayParam->max_length) )
    sub_1C2D6F4(ScriptIntArrayParam, v10, v11);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  __int64 v13; // x22
  unsigned __int64 v14; // x24
  TreasureDvcEntity_o *v15; // x0
  int32_t v16; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3

  if ( (byte_4C27FCF & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    byte_4C27FCF = 1;
  }
  id = this->fields.id;
  v8 = sub_1C2D538(int___TypeInfo, 2);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
  v12 = *(_QWORD *)(v8 + 24);
  v13 = v8;
  if ( !(_DWORD)v12 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v12 == 1) )
LABEL_15:
    sub_1C2D6F4(v8, v9, v10);
  *(_DWORD *)(v8 + 36) = -1;
  if ( (int)v12 < 1 )
    return id;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
      goto LABEL_15;
    v15 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v16 = *(_DWORD *)(v13 + 32 + 4 * v14);
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v15 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v15,
                    (System_String_o *)v15[1].fields.script->fields._entries,
                    v16,
                    0,
                    v11);
    v8 = TreasureDvcEntity__checkScript(this, AddLimitKey, v18);
    if ( (v8 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v19);
    LODWORD(v12) = *(_DWORD *)(v13 + 24);
    if ( (__int64)++v14 >= (int)v12 )
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
  if ( (byte_4C27FC6 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_25188/*"{0}{1}{2}"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27FC6 = 1;
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
      v11 = System_String__Concat_63457864(KET_SUFFIX_ACTSET, v10, 0);
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
      v14 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)StringLiteral_16105/*"_"*/, v13, 0);
    }
    return System_String__Format_63499224((System_String_o *)StringLiteral_25188/*"{0}{1}{2}"*/, (Il2CppObject *)baseKey, v14, v12, 0);
  }
  return baseKey;
}


void TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27FDA & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcEntity___c_TypeInfo);
    byte_4C27FDA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C27FDB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27FDB = 1;
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
    sub_1C2D6EC(this, 0);
  return System_String__StartsWith(x, this->fields.checkKey, 0);
}


System_String_o *TreasureDvcEntity___c__DisplayClass56_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass56_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass56_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C27FDC & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass56_0_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27FDC = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  return System_String__Replace_63504412(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0);
}