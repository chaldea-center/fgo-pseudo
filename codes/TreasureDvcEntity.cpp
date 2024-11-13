void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct TreasureDvcEntity_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct TreasureDvcEntity_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct TreasureDvcEntity_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct TreasureDvcEntity_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B16D9B & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20063/*"groupSeqIDs"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18740/*"delayEnd"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16694/*"_actSet"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_23024/*"randomWeights"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24119/*"tdTypeChangeIDs"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_23023/*"randomSeqIds"*/, v18, v19);
    byte_4B16D9B = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_23023/*"randomSeqIds"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_23023/*"randomSeqIds"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v20 = StringLiteral_23024/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_23024/*"randomWeights"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_20063/*"groupSeqIDs"*/;
  v29 = TreasureDvcEntity_TypeInfo->static_fields;
  v29->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_20063/*"groupSeqIDs"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->KEY_GROUP_SEQ_ID, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_24119/*"tdTypeChangeIDs"*/;
  v37 = TreasureDvcEntity_TypeInfo->static_fields;
  v37->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_24119/*"tdTypeChangeIDs"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->KEY_TD_TYPE_CHANGE_ID, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_18740/*"delayEnd"*/;
  v45 = TreasureDvcEntity_TypeInfo->static_fields;
  v45->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18740/*"delayEnd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->KEY_TD_DELAY_END, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_16694/*"_actSet"*/;
  v53 = TreasureDvcEntity_TypeInfo->static_fields;
  v53->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16694/*"_actSet"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->KET_SUFFIX_ACTSET, v52, v54, v55, v56, v57, v58, v59);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16D9A = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D96 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B16D96 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_4B16D8F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19505/*"excludeTdChangeTypes"*/, defArray, method);
    byte_4B16D8F = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19505/*"excludeTdChangeTypes"*/, defArray, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__GetLotteriedSeqId(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( TreasureDvcEntity__IsRandomTD(this, *(const MethodInfo **)&limit) )
    return this->fields.cacheRandomSeqId;
  else
    return TreasureDvcEntity__getSeqId(this, limit, v5);
}


System_String_o *__fastcall TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D95 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22400/*"npNameFileSuffix"*/, method, v2);
    byte_4B16D95 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22400/*"npNameFileSuffix"*/, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
        TreasureDvcEntity_o *this,
        int32_t battlePontId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_int__o *v42; // x19
  Il2CppObject *v43; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Func_object__bool__o *v56; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Func_object__object__o *v61; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v63; // x20
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x20
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  System_String_o *v77; // x0
  _BOOL8 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  int32_t v89; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B16D97 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Keys__,
      *(_QWORD *)&battlePontId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__string___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_string___, v8, v9);
    sub_1BCA7E0(&System_Func_string__string__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_string__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_string__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&int_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__0__, v30, v31);
    sub_1BCA7E0(&Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__1__, v32, v33);
    sub_1BCA7E0(&TreasureDvcEntity___c__DisplayClass54_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_24115/*"tdChangeByBattlePoint_{0}_"*/, v36, v37);
    byte_4B16D97 = 1;
  }
  result = 0;
  v38 = sub_1BCAA2C(TreasureDvcEntity___c__DisplayClass54_0_TypeInfo, *(_QWORD *)&battlePontId, method, v3);
  TreasureDvcEntity___c__DisplayClass54_0___ctor((TreasureDvcEntity___c__DisplayClass54_0_o *)v38, 0LL);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v89 = battlePontId;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24115/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v43,
                                                                        0LL);
  if ( !v38 )
    goto LABEL_41;
  *(_QWORD *)(v38 + 16) = script;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)script, v46, v47, v48, v49, v50, v51);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_3264F40 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v56 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v53, v54, v55),
        System_Func_object__bool____ctor(
          v56,
          (Il2CppObject *)v38,
          Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0LL),
        v57 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v56,
                (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_string___),
        v61 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_string__string__TypeInfo, v58, v59, v60),
        System_Func_object__object____ctor(
          v61,
          (Il2CppObject *)v38,
          Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0LL),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v57,
                                                                               (System_Func_TSource__TResult__o *)v61,
                                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_string__string___)) == 0LL) )
  {
LABEL_41:
    sub_1BCAA3C(script, v45);
  }
  klass = script->klass;
  v63 = script;
  v64 = *(unsigned __int16 *)(&script->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&script->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v64;
      p_offset += 4;
      if ( !v64 )
        goto LABEL_10;
    }
    v66 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v66 = sub_1C1C7C0(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v68 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v66)(
          v63,
          *(_QWORD *)(v66 + 8));
  if ( !v68 )
    sub_1BCAA3C(0LL, v67);
  while ( 1 )
  {
    v69 = *(_QWORD *)v68;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_17;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_17:
      v72 = sub_1C1C7C0(v68, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8)) & 1) == 0 )
      break;
    v73 = *(_QWORD *)v68;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v75 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_24;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_24:
      v76 = sub_1C1C7C0(v68, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v77 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v68, *(_QWORD *)(v76 + 8));
    v78 = System_Int32__TryParse(v77, &result, 0LL);
    if ( v78 )
    {
      if ( !v42 )
        sub_1BCAA3C(v78, v79);
      v80 = (unsigned int)result;
      items = v42->fields._items;
      v82 = Method_System_Collections_Generic_List_int__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1BCAA3C(v78, v80);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v42,
          v80,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v42->fields._size = size + 1;
        items->m_Items[size + 1] = v80;
      }
    }
  }
  v84 = *(_QWORD *)v68;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_36;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_36:
    v87 = sub_1C1C7C0(v68, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v68, *(_QWORD *)(v87 + 8));
  return v42;
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

  if ( (byte_4B16D93 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, method, v2);
    byte_4B16D93 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v4->static_fields->KEY_TD_DELAY_END, v2);
}


bool __fastcall TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4B16D87 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, method, v2);
    byte_4B16D87 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool __fastcall TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16D94 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6904/*"ForcedOnlyFirstOneSpeed"*/, method, v2);
    byte_4B16D94 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6904/*"ForcedOnlyFirstOneSpeed"*/, 0, v3) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  TreasureDvcEntity_c *v7; // x0

  if ( (byte_4B16D86 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, method, v2);
    byte_4B16D86 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v7 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v5);
    v7 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v7->static_fields->KEY_RANDOM_SEQ_WEIGHT, v6);
}


bool __fastcall TreasureDvcEntity__IsRandomTD_40754676(
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

  if ( (byte_4B16D90 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, method, v2);
    byte_4B16D90 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, method);
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
  __int64 v10; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  TreasureDvcEntity___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_int__int__o *_9__55_0; // x24
  Il2CppObject *v34; // x25
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x20
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x20
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  int32_t v59; // w24
  Il2CppObject *v60; // x22
  Il2CppObject *v61; // x2
  System_String_o *v62; // x1
  const MethodInfo *v63; // x3
  bool v64; // w22
  int v65; // w23
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  int32_t v71; // [xsp+8h] [xbp-58h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B16D98 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_int__int___,
      *(_QWORD *)&battlePointId,
      *(_QWORD *)&battlePointPhase);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__55_0__, v21, v22);
    sub_1BCA7E0(&TreasureDvcEntity___c_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_24116/*"tdChangeByBattlePoint_{0}_{1}"*/, v25, v26);
    byte_4B16D98 = 1;
  }
  v27 = TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
          this,
          battlePointId,
          *(const MethodInfo **)&battlePointPhase);
  v31 = TreasureDvcEntity___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo, v28);
    v31 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__55_0 = v31->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v28);
      v31 = TreasureDvcEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__55_0 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v28, v29, v30);
    System_Func_int__int____ctor(
      _9__55_0,
      v34,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__55_0__,
      0LL);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = _9__55_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__55_0,
      (int64_t)_9__55_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v32,
          (System_Func_TSource__TKey__o *)_9__55_0,
          (const MethodInfo_2F3B7EC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v42 )
    sub_1BCAA3C(0LL, v43);
  klass = v42->klass;
  v45 = v42;
  v46 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v46;
      p_offset += 4;
      if ( !v46 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v42, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v50 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v45,
          *(_QWORD *)(p_method + 8));
  if ( !v50 )
    sub_1BCAA3C(0LL, v49);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_21;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_21:
      v54 = sub_1C1C7C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v50;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v57 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_28;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_28:
      v58 = sub_1C1C7C0(v50, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
    if ( v59 <= battlePointPhase )
    {
      v72 = battlePointId;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
      v71 = v59;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      v62 = System_String__Format_62415592((System_String_o *)StringLiteral_24116/*"tdChangeByBattlePoint_{0}_{1}"*/, v60, v61, 0LL);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v62, 0, v63);
      v64 = 1;
      v65 = 5;
      goto LABEL_33;
    }
  }
  v64 = 0;
  v65 = 6;
LABEL_33:
  v66 = *(_QWORD *)v50;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_37;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_37:
    v69 = sub_1C1C7C0(v50, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v50, *(_QWORD *)(v69 + 8));
  if ( v65 == 6 )
  {
    v64 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v64;
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

  if ( (byte_4B16D99 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24120/*"tdWithBackStepNpcIds"*/, npcIds, method);
    byte_4B16D99 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24120/*"tdWithBackStepNpcIds"*/, 0LL, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1BCA784((PartyOrganizationUtility_o *)npcIds, (int64_t)ScriptIntArrayParam, v7, v8, v9, v10, v11, v12);
  return *npcIds != 0LL;
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16D81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B16D81 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  bool v17; // w20
  int v18; // w19
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16D82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, checkKey, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v11, v12);
    byte_4B16D82 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3264F40 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1BCAA3C(0LL, v15);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v20,
      Keys,
      (const MethodInfo_34C6D64 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v20,
              (const MethodInfo_33654BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v17 )
        break;
      if ( !v20.fields._currentKey )
        sub_1BCAA3C(0LL, v16);
      if ( System_String__Contains((System_String_o *)v20.fields._currentKey, checkKey, 0LL) )
      {
        v18 = 5;
        goto LABEL_11;
      }
    }
    v18 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v20,
      (const MethodInfo_33654B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v17 && v18 == 5;
  }
  return (char)script;
}


int32_t __fastcall TreasureDvcEntity__getCacheGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.cacheGroupId;
}


int32_t __fastcall TreasureDvcEntity__getCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.cacheRandomSeqId;
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *MasterData_object; // x0
  TreasureDvcLvEntity_o *Entity; // x0
  __int64 v28; // x1
  TreasureDvcLvEntity_o *v29; // x23
  System_String_o *v30; // x25
  Il2CppObject *name; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *Detail_40762364; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t gaugeCount; // w8
  LocalizationManager_c *v56; // x0
  System_String_o *unknownNameText; // x1
  int32_t v59; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B16D80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdName, tdExplanation);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_9461/*"NP_NAME"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_9462/*"NP_NAME_LEVEL"*/, v22, v23);
    byte_4B16D80 = 1;
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v7);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v7);
  MasterData_object = **(Il2CppObject ***)(v25 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, 0LL);
  *maxLv = this->fields.maxLv;
  v29 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  if ( lv < 1 )
  {
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9461/*"NP_NAME"*/, 0LL);
    v33 = System_String__Format(v40, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9462/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v59 = lv;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v33 = System_String__Format_62415592(v30, name, v32, 0LL);
  }
  *tdName = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)tdName, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  if ( v29 )
  {
    Detail_40762364 = TreasureDvcLvEntity__getDetail_40762364(v29, lv, 0LL);
    *tdExplanation = Detail_40762364;
    sub_1BCA784((PartyOrganizationUtility_o *)tdExplanation, (int64_t)Detail_40762364, v49, v50, v51, v52, v53, v54);
    gaugeCount = v29->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v41, v42);
      byte_4B1194D = 1;
    }
    v56 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      v56 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v56->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1BCA784((PartyOrganizationUtility_o *)tdExplanation, (int64_t)unknownNameText, v42, v43, v44, v45, v46, v47);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v29 != 0LL;
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
  if ( (byte_4B16D8D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19645/*"fixAppearanceId_"*/, *(_QWORD *)&limit, method);
    byte_4B16D8D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_62401220((System_String_o *)StringLiteral_19645/*"fixAppearanceId_"*/, v4, 0LL);
  return TreasureDvcEntity__getScriptIntArrayParam(this, v5, 0LL, v6);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16D8C & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, keyGroupSeqId, *(_QWORD *)&index);
    byte_4B16D8C = 1;
  }
  v7 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_1BCAA3C(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1BCAA44(ScriptIntArrayParam, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array *v17; // x22
  const MethodInfo *v18; // x3
  System_Int32_array *ScriptIntArrayParam; // x20
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  WeightRate_int__o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x22
  int32_t v30; // w1

  if ( (byte_4B16D8A & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, keySeqId, keyWeight);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v9, v10);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v11, v12);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v13, v14);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v15, v16);
    byte_4B16D8A = 1;
  }
  v17 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v17, v18);
  v21 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v17, v20);
  v25 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v22, v23, v24);
  WeightRate_int____ctor(v25, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v28 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    while ( v21 )
    {
      if ( v29 >= v21->max_length || v29 >= (unsigned int)v28 )
        sub_1BCAA44(v26, v27);
      if ( !v25 )
        break;
      WeightRate_int___setWeight(
        v25,
        v21->m_Items[v29 + 1],
        ScriptIntArrayParam->m_Items[v29 + 1],
        (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
      LODWORD(v28) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v29 >= (int)v28 )
        goto LABEL_11;
    }
LABEL_14:
    sub_1BCAA3C(v26, v27);
  }
LABEL_11:
  if ( !v25 )
    goto LABEL_14;
  v30 = UnityEngine_Random__Range_70113984(0, v25->fields.totalweight, 0LL);
  return WeightRate_int___getData(v25, v30, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t result; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  __int64 v13; // x20
  const MethodInfo *v14; // x4
  __int64 v15; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  __int64 v18; // x8
  int32_t v19; // w22
  unsigned __int64 v20; // x29
  TreasureDvcEntity_c *v21; // x0
  int32_t v22; // w24
  TreasureDvcEntity_o *AddLimitKey; // x23
  const MethodInfo *v24; // x4
  TreasureDvcEntity_o *v25; // x25
  const MethodInfo *v26; // x4
  System_String_o *v27; // x24
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v32; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v34; // x3

  if ( (byte_4B16D89 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&actSetId);
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, v7, v8);
    byte_4B16D89 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v10 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_30;
  v12 = *(_DWORD *)(v10 + 24);
  v13 = v10;
  if ( !v12 || (*(_DWORD *)(v10 + 32) = limitCount, v12 == 1) )
LABEL_29:
    sub_1BCAA44(v10, v11);
  *(_DWORD *)(v10 + 36) = -1;
  if ( !actSetId )
  {
    v10 = sub_1BCA888(int___TypeInfo, 1LL);
    v15 = v10;
    goto LABEL_12;
  }
  v10 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v10 )
LABEL_30:
    sub_1BCAA3C(v10, v11);
  v15 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_29;
  *(_DWORD *)(v10 + 32) = actSetId;
LABEL_12:
  v16 = *(_QWORD *)(v13 + 24);
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_29;
      if ( !v15 )
        goto LABEL_30;
      v18 = *(_QWORD *)(v15 + 24);
      if ( (int)v18 >= 1 )
        break;
LABEL_24:
      LODWORD(v16) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v17 >= (int)v16 )
        return this->fields.cacheRandomSeqId;
    }
    v19 = *(_DWORD *)(v13 + 4 * v17 + 32);
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        goto LABEL_29;
      v21 = TreasureDvcEntity_TypeInfo;
      v22 = *(_DWORD *)(v15 + 32 + 4 * v20);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v11);
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
        goto LABEL_24;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v25, v30);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, RandomSeqId, v32);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v27, RandomSeqIndex, v34);
  }
  return this->fields.cacheRandomSeqId;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16D8B & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, keySeqId, *(_QWORD *)&seqId);
    byte_4B16D8B = 1;
  }
  v7 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1BCAA3C(0LL, v10);
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
        sub_1BCAA44(v13, v10);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16D8E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23091/*"relationBgmIds"*/, method, v2);
    byte_4B16D8E = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23091/*"relationBgmIds"*/, 0LL, v3);
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
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  TreasureDvcEntity_o *v14; // x0
  System_String_o *v15; // x1
  System_Int32_array *v16; // x2
  const MethodInfo *v17; // x3

  v4 = defVal;
  if ( (byte_4B16D83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B16D83 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v9);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v11, v12);
  sub_1BCACFC(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v14, v15, v16, v17);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_List_object__c *v21; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *Item; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  TreasureDvcEntity___c_c *v28; // x8
  System_Converter_object__int__o *_9__28_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  TreasureDvcEntity_o *v39; // x0
  int32_t v40; // w1
  const MethodInfo *v41; // x2

  if ( (byte_4B16D84 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__, v17, v18);
    sub_1BCA7E0(&TreasureDvcEntity___c_TypeInfo, v19, v20);
    byte_4B16D84 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1BCA91C(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1BCA91C(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_Collections_Generic_List_object__o *)script;
  v28 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo, v21);
    v28 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__28_0 = v28->static_fields->__9__28_0;
  if ( !v27
    || (v21 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__28_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28, v21);
        v28 = TreasureDvcEntity___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__28_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v21, v25, v26);
      System_Converter_object__int____ctor(
        _9__28_0,
        v31,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
        0LL);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = _9__28_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
        (int64_t)_9__28_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v27 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v27,
                                                                            (System_Converter_T__TOutput__o *)_9__28_0,
                                                                            (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1BCAA3C(script, v21);
  }
  sub_1BCACFC(v27);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16D85 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&limit, method);
    sub_1BCA7E0(&StringLiteral_21332/*"limitSeqId_{0}"*/, v5, v6);
    byte_4B16D85 = 1;
  }
  v11 = limit;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v8 = System_String__Format((System_String_o *)StringLiteral_21332/*"limitSeqId_{0}"*/, v7, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v8, this->fields.seqId, v9);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16D92 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, key, *(_QWORD *)&commandType);
    byte_4B16D92 = 1;
  }
  v7 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1BCAA3C(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
    sub_1BCAA44(ScriptIntArrayParam, v10);
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
  __int64 v8; // x2
  int32_t id; // w21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  __int64 v14; // x22
  unsigned __int64 v15; // x24
  TreasureDvcEntity_o *v16; // x0
  int32_t v17; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4B16D91 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&commandType);
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, v7, v8);
    byte_4B16D91 = 1;
  }
  id = this->fields.id;
  v10 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v10 )
    sub_1BCAA3C(0LL, v11);
  v13 = *(_QWORD *)(v10 + 24);
  v14 = v10;
  if ( !(_DWORD)v13 || (*(_DWORD *)(v10 + 32) = limitCount, (_DWORD)v13 == 1) )
LABEL_15:
    sub_1BCAA44(v10, v11);
  *(_DWORD *)(v10 + 36) = -1;
  if ( (int)v13 < 1 )
    return id;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v13 )
      goto LABEL_15;
    v16 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v17 = *(_DWORD *)(v14 + 32 + 4 * v15);
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, v11);
      v16 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v16,
                    (System_String_o *)v16[1].fields.script->fields._entries,
                    v17,
                    0,
                    v12);
    v10 = TreasureDvcEntity__checkScript(this, AddLimitKey, v19);
    if ( (v10 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v20);
    LODWORD(v13) = *(_DWORD *)(v14 + 24);
    if ( (__int64)++v15 >= (int)v13 )
      return id;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  TreasureDvcEntity_c *v14; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *v18; // x21
  System_String_o *v19; // x0
  Il2CppObject *v20; // x2
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v6 = limit;
  v7 = (Il2CppObject *)baseKey;
  v22 = actSet;
  v23 = limit;
  if ( (byte_4B16D88 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity_TypeInfo, baseKey, *(_QWORD *)&limit);
    sub_1BCA7E0(&StringLiteral_25366/*"{0}{1}{2}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B16D88 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v14 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo, baseKey);
        v14 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v14->static_fields->KET_SUFFIX_ACTSET;
      v16 = System_Int32__ToString((int32_t)&v22, 0LL);
      v17 = System_String__Concat_62401220(KET_SUFFIX_ACTSET, v16, 0LL);
      v6 = v23;
      v18 = (Il2CppObject *)v17;
    }
    else
    {
      v18 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    if ( v6 == -1 )
    {
      v20 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      v19 = System_Int32__ToString((int32_t)&v23, 0LL);
      v20 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, v19, 0LL);
    }
    return System_String__Format_62415660((System_String_o *)StringLiteral_25366/*"{0}{1}{2}"*/, v7, v20, v18, 0LL);
  }
  return (System_String_o *)v7;
}


void __fastcall TreasureDvcEntity__resetCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  this->fields.cacheRandomSeqId = -1;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16D9C & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcEntity___c_TypeInfo, v1, v2);
    byte_4B16D9C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TreasureDvcEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TreasureDvcEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TreasureDvcEntity___c___ctor(TreasureDvcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDvcEntity___c___TryGetTdIdChangeByBattlePoint_b__55_0(
        TreasureDvcEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t __fastcall TreasureDvcEntity___c___getScriptIntArrayParam_b__28_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B16D9D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16D9D = 1;
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


void __fastcall TreasureDvcEntity___c__DisplayClass54_0___ctor(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDvcEntity___c__DisplayClass54_0___GetTdChangeByBattlePointPhaseList_b__0(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return System_String__StartsWith(x, this->fields.checkKey, 0LL);
}


System_String_o *__fastcall TreasureDvcEntity___c__DisplayClass54_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass54_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B16D9E & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass54_0_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16D9E = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return System_String__Replace_62420848(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}