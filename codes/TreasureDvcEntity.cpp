void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct TreasureDvcEntity_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct TreasureDvcEntity_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  struct TreasureDvcEntity_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  struct TreasureDvcEntity_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4A4F131 & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_19646/*"groupSeqIDs"*/, v4);
    sub_1B863B8(&StringLiteral_18322/*"delayEnd"*/, v5);
    sub_1B863B8(&StringLiteral_16292/*"_actSet"*/, v6);
    sub_1B863B8(&StringLiteral_22632/*"randomWeights"*/, v7);
    sub_1B863B8(&StringLiteral_23711/*"tdTypeChangeIDs"*/, v8);
    sub_1B863B8(&StringLiteral_22631/*"randomSeqIds"*/, v9);
    byte_4A4F131 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_22631/*"randomSeqIds"*/;
  sub_1B8635C((CGThumbnailListItem_o *)TreasureDvcEntity_TypeInfo->static_fields, StringLiteral_22631/*"randomSeqIds"*/, v2, v3);
  v10 = StringLiteral_22632/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22632/*"randomWeights"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v10, v12, v13);
  v14 = StringLiteral_19646/*"groupSeqIDs"*/;
  v15 = TreasureDvcEntity_TypeInfo->static_fields;
  v15->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19646/*"groupSeqIDs"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v15->KEY_GROUP_SEQ_ID, v14, v16, v17);
  v18 = StringLiteral_23711/*"tdTypeChangeIDs"*/;
  v19 = TreasureDvcEntity_TypeInfo->static_fields;
  v19->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_23711/*"tdTypeChangeIDs"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->KEY_TD_TYPE_CHANGE_ID, v18, v20, v21);
  v22 = StringLiteral_18322/*"delayEnd"*/;
  v23 = TreasureDvcEntity_TypeInfo->static_fields;
  v23->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18322/*"delayEnd"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v23->KEY_TD_DELAY_END, v22, v24, v25);
  v26 = StringLiteral_16292/*"_actSet"*/;
  v27 = TreasureDvcEntity_TypeInfo->static_fields;
  v27->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16292/*"_actSet"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v27->KET_SUFFIX_ACTSET, v26, v28, v29);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F130 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_int___ctor__, method);
    byte_4A4F130 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3211D9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4F12C & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16705/*"assumedEffectId"*/, method);
    byte_4A4F12C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16705/*"assumedEffectId"*/, 0LL);
}


int64_t __fastcall TreasureDvcEntity__GetEffectFlag(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int64_t effectFlag; // x8

  effectFlag = this->fields.effectFlag;
  if ( (effectFlag & 1) != 0 )
    return 1LL;
  if ( (effectFlag & 2) != 0 )
    return 2LL;
  return -1LL;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetExcludeTdChangeTypes(
        TreasureDvcEntity_o *this,
        System_Int32_array *defArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A4F125 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19085/*"excludeTdChangeTypes"*/, defArray);
    byte_4A4F125 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19085/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *__fastcall TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F12B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22000/*"npNameFileSuffix"*/, method);
    byte_4A4F12B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22000/*"npNameFileSuffix"*/, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__GetRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t *groupSeqId,
        int32_t actSetId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t seqId; // w21
  __int64 v11; // x0
  __int64 v12; // x1
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
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v34; // x3
  int32_t v36; // [xsp+4h] [xbp-6Ch]
  int32_t *v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4A4F11F & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, v9);
    byte_4A4F11F = 1;
  }
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  v11 = sub_1B86460(int___TypeInfo, 2LL);
  if ( !v11 )
    goto LABEL_28;
  v13 = *(_DWORD *)(v11 + 24);
  v14 = v11;
  if ( !v13 )
    goto LABEL_27;
  *(_DWORD *)(v11 + 32) = limitCount;
  if ( v13 == 1 )
    goto LABEL_27;
  *(_DWORD *)(v11 + 36) = -1;
  if ( actSetId )
  {
    v11 = sub_1B86460(int___TypeInfo, 2LL);
    if ( v11 )
    {
      v16 = v11;
      if ( *(_DWORD *)(v11 + 24) )
      {
        *(_DWORD *)(v11 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_27:
      sub_1B8661C(v11, v12);
    }
LABEL_28:
    sub_1B86614(v11, v12);
  }
  v11 = sub_1B86460(int___TypeInfo, 1LL);
  v16 = v11;
LABEL_11:
  v17 = *(_QWORD *)(v14 + 24);
  if ( (int)v17 >= 1 )
  {
    v36 = seqId;
    v37 = groupSeqId;
    v18 = 0LL;
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
        return v36;
    }
    v20 = *(_DWORD *)(v14 + 4 * v18 + 32);
    v21 = 0LL;
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
      v11 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v29);
      if ( (v11 & 1) != 0 )
      {
        v11 = TreasureDvcEntity__checkScript(this, (System_String_o *)v26, v30);
        if ( (v11 & 1) != 0 )
          break;
      }
      LODWORD(v19) = *(_DWORD *)(v16 + 24);
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_23;
    }
    seqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v26, v31);
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, seqId, v32);
    *v37 = TreasureDvcEntity__getGroupSeqId(this, v28, RandomSeqIndex, v34);
  }
  return seqId;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
        TreasureDvcEntity_o *this,
        int32_t battlePontId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x22
  System_Collections_Generic_List_int__o *v22; // x19
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_object__object__o *v34; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v36; // x20
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_String_o *v50; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  int32_t v62; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4F12D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, *(_QWORD *)&battlePontId);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_string__string___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_string___, v6);
    sub_1B863B8(&System_Func_string__string__TypeInfo, v7);
    sub_1B863B8(&System_Func_string__bool__TypeInfo, v8);
    sub_1B863B8(&System_IDisposable_TypeInfo, v9);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_string__TypeInfo, v10);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_string__TypeInfo, v11);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B863B8(&int_TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B863B8(&Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__0__, v17);
    sub_1B863B8(&Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__1__, v18);
    sub_1B863B8(&TreasureDvcEntity___c__DisplayClass48_0_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_23707/*"tdChangeByBattlePoint_{0}_"*/, v20);
    byte_4A4F12D = 1;
  }
  result = 0;
  v21 = sub_1B86604(TreasureDvcEntity___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v62 = battlePontId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v23, v24, v25);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_23707/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v26,
                                                                        0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = script;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)script, v29, v30);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_32CE3C0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v32 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v32,
          (Il2CppObject *)v21,
          Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0LL),
        v33 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v32,
                (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_string___),
        v34 = (System_Func_object__object__o *)sub_1B86604(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v34,
          (Il2CppObject *)v21,
          Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0LL),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v33,
                                                                               (System_Func_TSource__TResult__o *)v34,
                                                                               (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0LL) )
  {
LABEL_41:
    sub_1B86614(script, v28);
  }
  klass = script->klass;
  v36 = script;
  v37 = *(unsigned __int16 *)(&script->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&script->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_10;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v39 = sub_1BD6B4C(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v39)(
          v36,
          *(_QWORD *)(v39 + 8));
  if ( !v41 )
    sub_1B86614(0LL, v40);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_17;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_17:
      v45 = sub_1BD6B4C(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v41;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v48 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_24;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_24:
      v49 = sub_1BD6B4C(v41, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v50 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
    v51 = System_Int32__TryParse(v50, &result, 0LL);
    if ( v51 )
    {
      if ( !v22 )
        sub_1B86614(v51, v52);
      v53 = (unsigned int)result;
      items = v22->fields._items;
      v55 = Method_System_Collections_Generic_List_int__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B86614(v51, v53);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v22,
          v53,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size + 1] = v53;
      }
    }
  }
  v57 = *(_QWORD *)v41;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_36;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_36:
    v60 = sub_1BD6B4C(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v60)(v41, *(_QWORD *)(v60 + 8));
  return v22;
}


bool __fastcall TreasureDvcEntity__HasEffectFlag(
        TreasureDvcEntity_o *this,
        int64_t effectFlag,
        const MethodInfo *method)
{
  return (this->fields.effectFlag & effectFlag) != 0;
}


bool __fastcall TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A4F129 & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, method);
    byte_4A4F129 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v4->static_fields->KEY_TD_DELAY_END, v2);
}


bool __fastcall TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A4F11D & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, method);
    byte_4A4F11D = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool __fastcall TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4F12A & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_6746/*"ForcedOnlyFirstOneSpeed"*/, method);
    byte_4A4F12A = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6746/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4A4F11C & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, method);
    byte_4A4F11C = 1;
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


bool __fastcall TreasureDvcEntity__IsRandomTD_41059336(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  return TreasureDvcEntity__checkScript(this, keySeqId, (const MethodInfo *)keyWeight)
      && TreasureDvcEntity__checkScript(this, keyWeight, v6);
}


bool __fastcall TreasureDvcEntity__IsTDTypeChange(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A4F126 & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, method);
    byte_4A4F126 = 1;
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
bool __fastcall TreasureDvcEntity__TryGetTdIdChangeByBattlePoint(
        TreasureDvcEntity_o *this,
        int32_t battlePointId,
        int32_t battlePointPhase,
        int32_t *tdIdChangeByBattlePoint,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x0
  TreasureDvcEntity___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_int__int__o *_9__49_0; // x24
  Il2CppObject *v22; // x25
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int32_t v46; // w24
  Il2CppObject *v47; // x22
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x2
  System_String_o *v52; // x1
  const MethodInfo *v53; // x3
  bool v54; // w22
  int v55; // w23
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  int32_t v61; // [xsp+8h] [xbp-58h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A4F12E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, *(_QWORD *)&battlePointId);
    sub_1B863B8(&System_Func_int__int__TypeInfo, v9);
    sub_1B863B8(&System_IDisposable_TypeInfo, v10);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B863B8(&int_TypeInfo, v14);
    sub_1B863B8(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__49_0__, v15);
    sub_1B863B8(&TreasureDvcEntity___c_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_23708/*"tdChangeByBattlePoint_{0}_{1}"*/, v17);
    byte_4A4F12E = 1;
  }
  v18 = TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
          this,
          battlePointId,
          *(const MethodInfo **)&battlePointPhase);
  v19 = TreasureDvcEntity___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v19 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__49_0 = v19->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TreasureDvcEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__49_0 = (System_Func_int__int__o *)sub_1B86604(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__49_0,
      v22,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__49_0__,
      0LL);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v24, v25);
  }
  v26 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v20,
          (System_Func_TSource__TKey__o *)_9__49_0,
          (const MethodInfo_2F9B014 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v26 )
    sub_1B86614(0LL, v27);
  klass = v26->klass;
  v29 = v26;
  v30 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BD6B4C(v26, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_1B86614(0LL, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_21;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_21:
      v38 = sub_1BD6B4C(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v41 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_28;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_28:
      v42 = sub_1BD6B4C(v34, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    if ( v46 <= battlePointPhase )
    {
      v62 = battlePointId;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v43, v44, v45);
      v61 = v46;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v48, v49, v50);
      v52 = System_String__Format_61686468((System_String_o *)StringLiteral_23708/*"tdChangeByBattlePoint_{0}_{1}"*/, v47, v51, 0LL);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v52, 0, v53);
      v54 = 1;
      v55 = 5;
      goto LABEL_33;
    }
  }
  v54 = 0;
  v55 = 6;
LABEL_33:
  v56 = *(_QWORD *)v34;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_37;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_37:
    v59 = sub_1BD6B4C(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v34, *(_QWORD *)(v59 + 8));
  if ( v55 == 6 )
  {
    v54 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v54;
}


bool __fastcall TreasureDvcEntity__TryGetWithBackStepNpcIds(
        TreasureDvcEntity_o *this,
        System_Int32_array **npcIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A4F12F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_23712/*"tdWithBackStepNpcIds"*/, npcIds);
    byte_4A4F12F = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23712/*"tdWithBackStepNpcIds"*/, 0LL, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1B8635C((CGThumbnailListItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8);
  return *npcIds != 0LL;
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A4F117 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4A4F117 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w20
  int v14; // w19
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4F118 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, checkKey);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v6);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v8);
    byte_4A4F118 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_32CE3C0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1B86614(0LL, v11);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v16,
      Keys,
      (const MethodInfo_352A2F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v16,
              (const MethodInfo_33CA630 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v13 )
        break;
      if ( !v16.fields._currentKey )
        sub_1B86614(0LL, v12);
      if ( System_String__Contains((System_String_o *)v16.fields._currentKey, checkKey, 0LL) )
      {
        v14 = 5;
        goto LABEL_11;
      }
    }
    v14 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v16,
      (const MethodInfo_33CA62C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v13 && v14 == 5;
  }
  return (char)script;
}


bool __fastcall TreasureDvcEntity__getEffectExplanation(
        TreasureDvcEntity_o *this,
        System_String_o **tdName,
        System_String_o **tdExplanation,
        int32_t *maxLv,
        int32_t *tdGuageCount,
        int32_t lv,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v22; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v24; // x23
  System_String_o *v25; // x25
  Il2CppObject *name; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  System_String_o *Detail_41057472; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t gaugeCount; // w8
  LocalizationManager_c *v42; // x0
  System_String_o *unknownNameText; // x1
  int32_t v45; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A4F116 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdName);
    sub_1B863B8(&int_TypeInfo, v14);
    sub_1B863B8(&LocalizationManager_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_1B863B8(&StringLiteral_9207/*"NP_NAME"*/, v17);
    sub_1B863B8(&StringLiteral_9208/*"NP_NAME_LEVEL"*/, v18);
    byte_4A4F116 = 1;
  }
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BD6A48(v7);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BD6A48(v7);
  MasterData_object = **(Il2CppObject ***)(v20 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_1B86614(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v22);
  *maxLv = this->fields.maxLv;
  v24 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9207/*"NP_NAME"*/, 0LL);
    v31 = System_String__Format(v34, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9208/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v45 = lv;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v27, v28, v29);
    v31 = System_String__Format_61686468(v25, name, v30, 0LL);
  }
  *tdName = v31;
  sub_1B8635C((CGThumbnailListItem_o *)tdName, (int32_t)v31, v32, v33);
  if ( v24 )
  {
    Detail_41057472 = TreasureDvcLvEntity__getDetail_41057472(v24, lv, v36);
    *tdExplanation = Detail_41057472;
    sub_1B8635C((CGThumbnailListItem_o *)tdExplanation, (int32_t)Detail_41057472, v39, v40);
    gaugeCount = v24->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A49A43 )
    {
      sub_1B863B8(&LocalizationManager_TypeInfo, v35);
      byte_4A49A43 = 1;
    }
    v42 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v42->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1B8635C((CGThumbnailListItem_o *)tdExplanation, (int32_t)unknownNameText, (int32_t)v36, v37);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v24 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall TreasureDvcEntity__getFixAppearanceInfoArray(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = limit;
  if ( (byte_4A4F123 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_19223/*"fixAppearanceId_"*/, *(_QWORD *)&limit);
    byte_4A4F123 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_61645176((System_String_o *)StringLiteral_19223/*"fixAppearanceId_"*/, v4, 0LL);
  return TreasureDvcEntity__getScriptIntArrayParam(this, v5, 0LL, v6);
}


int32_t __fastcall TreasureDvcEntity__getGroupSeqId(
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

  if ( (byte_4A4F122 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, keyGroupSeqId);
    byte_4A4F122 = 1;
  }
  v7 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1B86614(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B8661C(ScriptIntArrayParam, v10);
  return ScriptIntArrayParam->m_Items[index + 1];
}


System_Int32_array *__fastcall TreasureDvcEntity__getIndividualities(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.individuality;
}


System_String_o *__fastcall TreasureDvcEntity__getName(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqId(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array *v12; // x22
  const MethodInfo *v13; // x3
  System_Int32_array *ScriptIntArrayParam; // x20
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x21
  WeightRate_int__o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x22
  int32_t v22; // w1

  if ( (byte_4A4F120 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, keySeqId);
    sub_1B863B8(&Method_WeightRate_int___ctor__, v7);
    sub_1B863B8(&Method_WeightRate_int__getData__, v8);
    sub_1B863B8(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_1B863B8(&Method_WeightRate_int__setWeight__, v10);
    sub_1B863B8(&WeightRate_int__TypeInfo, v11);
    byte_4A4F120 = 1;
  }
  v12 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v12, v13);
  v16 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v12, v15);
  v17 = (WeightRate_int__o *)sub_1B86604(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v17, (const MethodInfo_39D8F68 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v20 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( v16 )
    {
      if ( v21 >= v16->max_length || v21 >= (unsigned int)v20 )
        sub_1B8661C(v18, v19);
      if ( !v17 )
        break;
      WeightRate_int___setWeight(
        v17,
        v16->m_Items[v21 + 1],
        ScriptIntArrayParam->m_Items[v21 + 1],
        (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
      LODWORD(v20) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_11;
    }
LABEL_14:
    sub_1B86614(v18, v19);
  }
LABEL_11:
  if ( !v17 )
    goto LABEL_14;
  v22 = UnityEngine_Random__Range_69316044(0, v17->fields.totalweight, 0LL);
  return WeightRate_int___getData(v17, v22, (const MethodInfo_39D88F8 *)Method_WeightRate_int__getData__);
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqIndex(
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

  if ( (byte_4A4F121 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, keySeqId);
    byte_4A4F121 = 1;
  }
  v7 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B86614(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  v12 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v13) = -1;
  }
  else
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v13 )
        sub_1B8661C(v13, v10);
      if ( v12->m_Items[(int)v13 + 1] == seqId )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( max_length == (_DWORD)v13 )
        goto LABEL_9;
    }
  }
  return v13;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A4F124 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22695/*"relationBgmIds"*/, method);
    byte_4A4F124 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22695/*"relationBgmIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getScriptInt(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  TreasureDvcEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_4A4F119 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B863B8(&long_TypeInfo, v7);
    byte_4A4F119 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B86614(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B868D4(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v13, v14, v15, v16);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  TreasureDvcEntity___c_c *v19; // x8
  System_Converter_object__int__o *_9__26_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v22; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  TreasureDvcEntity_o *v26; // x0
  int32_t v27; // w1
  const MethodInfo *v28; // x2

  if ( (byte_4A4F11A & 1) == 0 )
  {
    sub_1B863B8(&System_Converter_object__int__TypeInfo, key);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B863B8(&int___TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B863B8(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B863B8(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__26_0__, v12);
    sub_1B863B8(&TreasureDvcEntity___c_TypeInfo, v13);
    byte_4A4F11A = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1B864F4(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1B864F4(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v18 = (System_Collections_Generic_List_object__o *)script;
  v19 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v19 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__26_0 = v19->static_fields->__9__26_0;
  if ( !v18
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v18->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__26_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = TreasureDvcEntity___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__26_0 = (System_Converter_object__int__o *)sub_1B86604(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__26_0,
        v22,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__26_0__,
        0LL);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v24, v25);
    }
    if ( v18 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v18,
                                                                            (System_Converter_T__TOutput__o *)_9__26_0,
                                                                            (const MethodInfo_2EA0FEC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1B86614(script, v14);
  }
  sub_1B868D4(v18);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v26, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4F11B & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&limit);
    sub_1B863B8(&StringLiteral_20923/*"limitSeqId_{0}"*/, v7);
    byte_4A4F11B = 1;
  }
  v12 = limit;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20923/*"limitSeqId_{0}"*/, v8, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v9, this->fields.seqId, v10);
}


int32_t __fastcall TreasureDvcEntity__getTDTypeChangeId(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1

  if ( (byte_4A4F128 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, key);
    byte_4A4F128 = 1;
  }
  v7 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B86614(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
    sub_1B8661C(ScriptIntArrayParam, v10);
  return ScriptIntArrayParam->m_Items[commandType];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getTDTypeChangeIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t commandType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t id; // w21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  __int64 v13; // x22
  unsigned __int64 v14; // x24
  TreasureDvcEntity_o *v15; // x0
  int32_t v16; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3

  if ( (byte_4A4F127 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, v7);
    byte_4A4F127 = 1;
  }
  id = this->fields.id;
  v9 = sub_1B86460(int___TypeInfo, 2LL);
  if ( !v9 )
    sub_1B86614(0LL, v10);
  v12 = *(_QWORD *)(v9 + 24);
  v13 = v9;
  if ( !(_DWORD)v12 || (*(_DWORD *)(v9 + 32) = limitCount, (_DWORD)v12 == 1) )
LABEL_15:
    sub_1B8661C(v9, v10);
  *(_DWORD *)(v9 + 36) = -1;
  if ( (int)v12 < 1 )
    return id;
  v14 = 0LL;
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
                    *(System_String_o **)(v15[1].fields.effectFlag + 24),
                    v16,
                    0,
                    v11);
    v9 = TreasureDvcEntity__checkScript(this, AddLimitKey, v18);
    if ( (v9 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v19);
    LODWORD(v12) = *(_DWORD *)(v13 + 24);
    if ( (__int64)++v14 >= (int)v12 )
      return id;
  }
}


System_String_o *__fastcall TreasureDvcEntity__makeAddLimitKey(
        TreasureDvcEntity_o *this,
        System_String_o *baseKey,
        int32_t limit,
        int32_t actSet,
        const MethodInfo *method)
{
  int32_t v6; // w20
  Il2CppObject *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TreasureDvcEntity_c *v11; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x21
  System_String_o *v16; // x0
  Il2CppObject *v17; // x2
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v6 = limit;
  v7 = (Il2CppObject *)baseKey;
  v19 = actSet;
  v20 = limit;
  if ( (byte_4A4F11E & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity_TypeInfo, baseKey);
    sub_1B863B8(&StringLiteral_24942/*"{0}{1}{2}"*/, v8);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    byte_4A4F11E = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v11 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v11 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v11->static_fields->KET_SUFFIX_ACTSET;
      v13 = System_Int32__ToString((int32_t)&v19, 0LL);
      v14 = System_String__Concat_61645176(KET_SUFFIX_ACTSET, v13, 0LL);
      v6 = v20;
      v15 = (Il2CppObject *)v14;
    }
    else
    {
      v15 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    if ( v6 == -1 )
    {
      v17 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      v16 = System_Int32__ToString((int32_t)&v20, 0LL);
      v17 = (Il2CppObject *)System_String__Concat_61645176((System_String_o *)StringLiteral_15886/*"_"*/, v16, 0LL);
    }
    return System_String__Format_61686536((System_String_o *)StringLiteral_24942/*"{0}{1}{2}"*/, v7, v17, v15, 0LL);
  }
  return (System_String_o *)v7;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F132 & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcEntity___c_TypeInfo, v1);
    byte_4A4F132 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TreasureDvcEntity___c___ctor(TreasureDvcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDvcEntity___c___TryGetTdIdChangeByBattlePoint_b__49_0(
        TreasureDvcEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t __fastcall TreasureDvcEntity___c___getScriptIntArrayParam_b__26_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A4F133 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, x);
    byte_4A4F133 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}


void __fastcall TreasureDvcEntity___c__DisplayClass48_0___ctor(
        TreasureDvcEntity___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDvcEntity___c__DisplayClass48_0___GetTdChangeByBattlePointPhaseList_b__0(
        TreasureDvcEntity___c__DisplayClass48_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return System_String__StartsWith(x, this->fields.checkKey, 0LL);
}


System_String_o *__fastcall TreasureDvcEntity___c__DisplayClass48_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass48_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass48_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A4F134 & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass48_0_o *)sub_1B863B8(&StringLiteral_1/*""*/, x);
    byte_4A4F134 = 1;
  }
  if ( !x )
    sub_1B86614(this, x);
  return System_String__Replace_61691724(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}