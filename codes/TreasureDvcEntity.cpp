void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct TreasureDvcEntity_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct TreasureDvcEntity_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct TreasureDvcEntity_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct TreasureDvcEntity_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BDD139 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_20204/*"groupSeqIDs"*/);
    sub_1C21E38(&StringLiteral_18866/*"delayEnd"*/);
    sub_1C21E38(&StringLiteral_16805/*"_actSet"*/);
    sub_1C21E38(&StringLiteral_23194/*"randomWeights"*/);
    sub_1C21E38(&StringLiteral_24301/*"tdTypeChangeIDs"*/);
    sub_1C21E38(&StringLiteral_23193/*"randomSeqIds"*/);
    byte_4BDD139 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_23193/*"randomSeqIds"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_23193/*"randomSeqIds"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23194/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_23194/*"randomWeights"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_20204/*"groupSeqIDs"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_20204/*"groupSeqIDs"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->KEY_GROUP_SEQ_ID, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24301/*"tdTypeChangeIDs"*/;
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v24->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_24301/*"tdTypeChangeIDs"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->KEY_TD_TYPE_CHANGE_ID, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_18866/*"delayEnd"*/;
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v32->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18866/*"delayEnd"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->KEY_TD_DELAY_END, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_16805/*"_actSet"*/;
  v40 = TreasureDvcEntity_TypeInfo->static_fields;
  v40->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16805/*"_actSet"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->KET_SUFFIX_ACTSET, v39, v41, v42, v43, v44, v45, v46);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD138 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDD138 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD134 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17228/*"assumedEffectId"*/);
    byte_4BDD134 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17228/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_4BDD12D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19637/*"excludeTdChangeTypes"*/);
    byte_4BDD12D = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19637/*"excludeTdChangeTypes"*/, defArray, v3);
}


System_String_o *__fastcall TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD133 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22567/*"npNameFileSuffix"*/);
    byte_4BDD133 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22567/*"npNameFileSuffix"*/, 0LL, 0LL);
}


int32_t __fastcall TreasureDvcEntity__GetRandomSeqIdEachLimit(
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

  if ( (byte_4BDD127 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD127 = 1;
  }
  seqId = this->fields.seqId;
  *groupSeqId = 0;
  v10 = sub_1C21EE0(int___TypeInfo, 2LL);
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
    v10 = sub_1C21EE0(int___TypeInfo, 2LL);
    if ( v10 )
    {
      v15 = v10;
      if ( *(_DWORD *)(v10 + 24) )
      {
        *(_DWORD *)(v10 + 32) = actSetId;
        goto LABEL_11;
      }
LABEL_27:
      sub_1C2209C(v10, v11);
    }
LABEL_28:
    sub_1C22094(v10, v11);
  }
  v10 = sub_1C21EE0(int___TypeInfo, 1LL);
  v15 = v10;
LABEL_11:
  v16 = *(_QWORD *)(v13 + 24);
  if ( (int)v16 >= 1 )
  {
    v35 = seqId;
    v36 = groupSeqId;
    v17 = 0LL;
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
    v20 = 0LL;
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


System_Collections_Generic_List_int__o *__fastcall TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__object__o *v22; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
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
  System_String_o *v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  int32_t v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDD135 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C21E38(&System_Func_string__string__TypeInfo);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1C21E38(&Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1C21E38(&TreasureDvcEntity___c__DisplayClass48_0_TypeInfo);
    sub_1C21E38(&StringLiteral_24297/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4BDD135 = 1;
  }
  result = 0;
  v5 = sub_1C22084(TreasureDvcEntity___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v50 = battlePontId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v7, v8, v9);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24297/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v10,
                                                                        0LL);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)script, v13, v14, v15, v16, v17, v18);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_3316360 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v20 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v20,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0LL),
        v21 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v20,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_string___),
        v22 = (System_Func_object__object__o *)sub_1C22084(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v22,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass48_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0LL),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v21,
                                                                               (System_Func_TSource__TResult__o *)v22,
                                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0LL) )
  {
LABEL_41:
    sub_1C22094(script, v12);
  }
  klass = script->klass;
  v24 = script;
  v25 = *(unsigned __int16 *)(&script->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&script->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_10;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v27 = sub_1C73E18(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v27)(
          v24,
          *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1C22094(0LL, v28);
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
          goto LABEL_17;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_17:
      v33 = sub_1C73E18(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v36 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_24;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_24:
      v37 = sub_1C73E18(v29, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v38 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v39 = System_Int32__TryParse(v38, &result, 0LL);
    if ( v39 )
    {
      if ( !v6 )
        sub_1C22094(v39, v40);
      v41 = (unsigned int)result;
      items = v6->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C22094(v39, v41);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v41,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size + 1] = v41;
      }
    }
  }
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
        goto LABEL_36;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_36:
    v48 = sub_1C73E18(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v29, *(_QWORD *)(v48 + 8));
  return v6;
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

  if ( (byte_4BDD131 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD131 = 1;
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

  if ( (byte_4BDD125 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD125 = 1;
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

  if ( (byte_4BDD132 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6955/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4BDD132 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6955/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4BDD124 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD124 = 1;
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


bool __fastcall TreasureDvcEntity__IsRandomTD_41296048(
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

  if ( (byte_4BDD12E & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD12E = 1;
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
  System_Collections_Generic_List_int__o *v9; // x0
  TreasureDvcEntity___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_int__int__o *_9__49_0; // x24
  Il2CppObject *v13; // x25
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x20
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w24
  Il2CppObject *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
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

  if ( (byte_4BDD136 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C21E38(&System_Func_int__int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__49_0__);
    sub_1C21E38(&TreasureDvcEntity___c_TypeInfo);
    sub_1C21E38(&StringLiteral_24298/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4BDD136 = 1;
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
  _9__49_0 = v10->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TreasureDvcEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Func_int__int__o *)sub_1C22084(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__49_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__49_0__,
      0LL);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__49_0,
          (const MethodInfo_2FD9334 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v21 )
    sub_1C22094(0LL, v22);
  klass = v21->klass;
  v24 = v21;
  v25 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C73E18(v21, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_1C22094(0LL, v28);
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
      v33 = sub_1C73E18(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v37 = sub_1C73E18(v29, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    if ( v41 <= battlePointPhase )
    {
      v57 = battlePointId;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v38, v39, v40);
      v56 = v41;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v43, v44, v45);
      v47 = System_String__Format_63129848((System_String_o *)StringLiteral_24298/*"tdChangeByBattlePoint_{0}_{1}"*/, v42, v46, 0LL);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v47, 0, v48);
      v49 = 1;
      v50 = 5;
      goto LABEL_33;
    }
  }
  v49 = 0;
  v50 = 6;
LABEL_33:
  v51 = *(_QWORD *)v29;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
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
    v54 = sub_1C73E18(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v29, *(_QWORD *)(v54 + 8));
  if ( v50 == 6 )
  {
    v49 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v49;
}


bool __fastcall TreasureDvcEntity__TryGetWithBackStepNpcIds(
        TreasureDvcEntity_o *this,
        System_Int32_array **npcIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDD137 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24302/*"tdWithBackStepNpcIds"*/);
    byte_4BDD137 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24302/*"tdWithBackStepNpcIds"*/, 0LL, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1C21DDC((PartyOrganizationUtility_o *)npcIds, (int64_t)ScriptIntArrayParam, v7, v8, v9, v10, v11, v12);
  return *npcIds != 0LL;
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BDD11F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDD11F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall TreasureDvcEntity__checkScriptPartialMatch(
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

  if ( (byte_4BDD120 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4BDD120 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3316360 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1C22094(0LL, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_3574940 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v12,
             (const MethodInfo_34135E0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._currentKey )
        sub_1C22094(0LL, v8);
      if ( System_String__Contains((System_String_o *)v12.fields._currentKey, checkKey, 0LL) )
      {
        v10 = 5;
        goto LABEL_11;
      }
    }
    v10 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v12,
      (const MethodInfo_34135DC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v9 && v10 == 5;
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_String_o *v33; // x0
  const MethodInfo *v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *Detail_41294184; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int32_t gaugeCount; // w8
  LocalizationManager_c *v48; // x0
  System_String_o *unknownNameText; // x1
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDD11E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&StringLiteral_9523/*"NP_NAME"*/);
    sub_1C21E38(&StringLiteral_9524/*"NP_NAME_LEVEL"*/);
    byte_4BDD11E = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C73D14(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C73D14(v7);
  MasterData_object = **(Il2CppObject ***)(v15 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_1C22094(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v17);
  *maxLv = this->fields.maxLv;
  v19 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9523/*"NP_NAME"*/, 0LL);
    v26 = System_String__Format(v33, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9524/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v51 = lv;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v22, v23, v24);
    v26 = System_String__Format_63129848(v20, name, v25, 0LL);
  }
  *tdName = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)tdName, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  if ( v19 )
  {
    Detail_41294184 = TreasureDvcLvEntity__getDetail_41294184(v19, lv, v34);
    *tdExplanation = Detail_41294184;
    sub_1C21DDC((PartyOrganizationUtility_o *)tdExplanation, (int64_t)Detail_41294184, v41, v42, v43, v44, v45, v46);
    gaugeCount = v19->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4BD7BC3 )
    {
      sub_1C21E38(&LocalizationManager_TypeInfo);
      byte_4BD7BC3 = 1;
    }
    v48 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v48->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)tdExplanation,
      (int64_t)unknownNameText,
      (int64_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v19 != 0LL;
}


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
  if ( (byte_4BDD12B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19777/*"fixAppearanceId_"*/);
    byte_4BDD12B = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_19777/*"fixAppearanceId_"*/, v4, 0LL);
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

  if ( (byte_4BDD12A & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDD12A = 1;
  }
  v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return 0;
  if ( !ScriptIntArrayParam )
    sub_1C22094(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C2209C(ScriptIntArrayParam, v10);
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
  System_Int32_array *v7; // x22
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x20
  const MethodInfo *v10; // x3
  System_Int32_array *v11; // x21
  WeightRate_int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w1

  if ( (byte_4BDD128 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    byte_4BDD128 = 1;
  }
  v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v15 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( v11 )
    {
      if ( v16 >= v11->max_length || v16 >= (unsigned int)v15 )
        sub_1C2209C(v13, v14);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16 + 1],
        ScriptIntArrayParam->m_Items[v16 + 1],
        (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_11;
    }
LABEL_14:
    sub_1C22094(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v17 = UnityEngine_Random__Range_70829352(0, v12->fields.totalweight, 0LL);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
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

  if ( (byte_4BDD129 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDD129 = 1;
  }
  v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C22094(0LL, v10);
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
        sub_1C2209C(v13, v10);
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

  if ( (byte_4BDD12C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23263/*"relationBgmIds"*/);
    byte_4BDD12C = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23263/*"relationBgmIds"*/, 0LL, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  TreasureDvcEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_Int32_array *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4BDD121 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDD121 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C22094(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C22354(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v12, v13, v14, v15);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
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
  System_Converter_object__int__o *_9__26_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v15; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TreasureDvcEntity_o *v23; // x0
  int32_t v24; // w1
  const MethodInfo *v25; // x2

  if ( (byte_4BDD122 & 1) == 0 )
  {
    sub_1C21E38(&System_Converter_object__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C21E38(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__26_0__);
    sub_1C21E38(&TreasureDvcEntity___c_TypeInfo);
    byte_4BDD122 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1C21F74(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1C21F74(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_object__o *)script;
  v12 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v12 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__26_0 = v12->static_fields->__9__26_0;
  if ( !v11
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__26_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TreasureDvcEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__26_0 = (System_Converter_object__int__o *)sub_1C22084(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__26_0,
        v15,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__26_0__,
        0LL);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__26_0,
        (int64_t)_9__26_0,
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
                                                                            (System_Converter_T__TOutput__o *)_9__26_0,
                                                                            (const MethodInfo_2EDFBE4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1C22094(script, v7);
  }
  sub_1C22354(v11);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v23, v24, v25);
}


int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDD123 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_21484/*"limitSeqId_{0}"*/);
    byte_4BDD123 = 1;
  }
  v11 = limit;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_21484/*"limitSeqId_{0}"*/, v7, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v8, this->fields.seqId, v9);
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

  if ( (byte_4BDD130 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDD130 = 1;
  }
  v7 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1C22094(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
    sub_1C2209C(ScriptIntArrayParam, v10);
  return ScriptIntArrayParam->m_Items[commandType];
}


int32_t __fastcall TreasureDvcEntity__getTDTypeChangeIdEachLimit(
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

  if ( (byte_4BDD12F & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    byte_4BDD12F = 1;
  }
  id = this->fields.id;
  v8 = sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_1C22094(0LL, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
LABEL_15:
    sub_1C2209C(v8, v9);
  *(_DWORD *)(v8 + 36) = -1;
  if ( (int)v11 < 1 )
    return id;
  v13 = 0LL;
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
                    *(System_String_o **)(v14[1].fields.effectFlag + 24),
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


System_String_o *__fastcall TreasureDvcEntity__makeAddLimitKey(
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
  if ( (byte_4BDD126 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_25558/*"{0}{1}{2}"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD126 = 1;
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
      v10 = System_Int32__ToString((int32_t)&v16, 0LL);
      v11 = System_String__Concat_63115476(KET_SUFFIX_ACTSET, v10, 0LL);
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
      v13 = System_Int32__ToString((int32_t)&v17, 0LL);
      v14 = (Il2CppObject *)System_String__Concat_63115476((System_String_o *)StringLiteral_16399/*"_"*/, v13, 0LL);
    }
    return System_String__Format_63129916(
             (System_String_o *)StringLiteral_25558/*"{0}{1}{2}"*/,
             (Il2CppObject *)baseKey,
             v14,
             v12,
             0LL);
  }
  return baseKey;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD13A & 1) == 0 )
  {
    sub_1C21E38(&TreasureDvcEntity___c_TypeInfo);
    byte_4BDD13A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TreasureDvcEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BDD13B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD13B = 1;
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
    sub_1C22094(this, 0LL);
  return System_String__StartsWith(x, this->fields.checkKey, 0LL);
}


System_String_o *__fastcall TreasureDvcEntity___c__DisplayClass48_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass48_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass48_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BDD13C & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass48_0_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD13C = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  return System_String__Replace_63135104(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}