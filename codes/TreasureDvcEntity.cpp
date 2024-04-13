void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v27; // x1
  struct TreasureDvcEntity_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TreasureDvcEntity_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct TreasureDvcEntity_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct TreasureDvcEntity_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct TreasureDvcEntity_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_42EACD4 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19327/*"groupSeqIDs"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18174/*"delayEnd"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16325/*"_actSet"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21991/*"randomWeights"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22930/*"tdTypeChangeIDs"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21990/*"randomSeqIds"*/, v23, v24, v25);
    byte_42EACD4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureDvcEntity_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_21990/*"randomSeqIds"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21990/*"randomSeqIds"*/;
  sub_B5D560(static_fields, v27, v2, v3, v4, v5, v6, v7);
  v28 = TreasureDvcEntity_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_21991/*"randomWeights"*/;
  v28->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_21991/*"randomWeights"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v28->KEY_RANDOM_SEQ_WEIGHT, v29, v30, v31, v32, v33, v34, v35);
  v36 = TreasureDvcEntity_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_19327/*"groupSeqIDs"*/;
  v36->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19327/*"groupSeqIDs"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v36->KEY_GROUP_SEQ_ID, v37, v38, v39, v40, v41, v42, v43);
  v44 = TreasureDvcEntity_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_22930/*"tdTypeChangeIDs"*/;
  v44->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_22930/*"tdTypeChangeIDs"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v44->KEY_TD_TYPE_CHANGE_ID, v45, v46, v47, v48, v49, v50, v51);
  v52 = TreasureDvcEntity_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_18174/*"delayEnd"*/;
  v52->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18174/*"delayEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v52->KEY_TD_DELAY_END, v53, v54, v55, v56, v57, v58, v59);
  v60 = TreasureDvcEntity_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_16325/*"_actSet"*/;
  v60->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16325/*"_actSet"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v60->KET_SUFFIX_ACTSET, v61, v62, v63, v64, v65, v66, v67);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EACD3 = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACD2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EACD2 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_42EACCB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18859/*"excludeTdChangeTypes"*/, (_DWORD)defArray, (_DWORD)method, v3);
    byte_42EACCB = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18859/*"excludeTdChangeTypes"*/, defArray, v3);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACD1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21433/*"npNameFileSuffix"*/, (_DWORD)method, v2, v3);
    byte_42EACD1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21433/*"npNameFileSuffix"*/, 0LL, 0LL);
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
  __int64 v3; // x3
  TreasureDvcEntity_c *v5; // x0

  if ( (byte_42EACCF & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EACCF = 1;
  }
  v5 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v5 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v5->static_fields->KEY_TD_DELAY_END, v2);
}


bool __fastcall TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TreasureDvcEntity_c *v5; // x0

  if ( (byte_42EACC2 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EACC2 = 1;
  }
  v5 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v5 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v5->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool __fastcall TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACD0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6832/*"ForcedOnlyFirstOneSpeed"*/, (_DWORD)method, v2, v3);
    byte_42EACD0 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6832/*"ForcedOnlyFirstOneSpeed"*/, 0, v3) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TreasureDvcEntity_c *v5; // x0
  const MethodInfo *v6; // x2
  TreasureDvcEntity_c *v7; // x0

  if ( (byte_42EACC1 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EACC1 = 1;
  }
  v5 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v5 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v5->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v7 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v7 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v7->static_fields->KEY_RANDOM_SEQ_WEIGHT, v6);
}


bool __fastcall TreasureDvcEntity__IsRandomTD_29256324(
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
  __int64 v3; // x3
  TreasureDvcEntity_c *v5; // x0

  if ( (byte_42EACCC & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EACCC = 1;
  }
  v5 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v5 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v5->static_fields->KEY_TD_TYPE_CHANGE_ID, v2);
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42EACBC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EACBC = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  char v22; // w19
  int v23; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EACBD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Keys__,
      (_DWORD)checkKey,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__,
      v15,
      v16,
      v17);
    byte_42EACBD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
             (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)script,
             (const MethodInfo_2F267C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_B5D69C(0LL, v20);
    System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
      &v25,
      Keys,
      (const MethodInfo_2440BA8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
              &v25,
              (const MethodInfo_2769150 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__) )
    {
      if ( !v25.fields.currentKey )
        sub_B5D69C(0LL, v21);
      if ( System_String__Contains((System_String_o *)v25.fields.currentKey, checkKey, 0LL) )
      {
        v22 = 1;
        v23 = 9;
        goto LABEL_11;
      }
    }
    v22 = 0;
    v23 = 7;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
      &v25,
      (const MethodInfo_276914C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = (v23 == 9) & v22;
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x25
  __int64 v29; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v31; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v33; // x24
  System_String_o *v34; // x0
  Il2CppObject *name; // x23
  System_String_o *v36; // x25
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *v45; // x0
  int v46; // w1
  MethodInfo *v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_o *Detail_29254280; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t gaugeCount; // w8
  bool result; // w0
  LocalizationManager_c *v62; // x0
  System_String_o *unknownNameText; // x1
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EACBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, (_DWORD)tdName, (_DWORD)tdExplanation, maxLv);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_9479/*"NP_NAME"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_9480/*"NP_NAME_LEVEL"*/, v25, v26, v27);
    byte_42EACBB = 1;
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v29 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_WarQuestSelectionMaster,
             this->fields.id,
             lv,
             v31);
  *maxLv = this->fields.maxLv;
  v33 = Entity;
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9479/*"NP_NAME"*/, 0LL);
    v38 = System_String__Format(v45, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9480/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v36 = v34;
    v64 = lv;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
    v38 = System_String__Format_44573324(v36, name, v37, 0LL);
  }
  *tdName = v38;
  sub_B5D560((BattleServantConfConponent_o *)tdName, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  if ( v33 )
  {
    Detail_29254280 = TreasureDvcLvEntity__getDetail_29254280(v33, lv, v47);
    *tdExplanation = Detail_29254280;
    sub_B5D560(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)Detail_29254280,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    gaugeCount = v33->fields.gaugeCount;
    result = 1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v46, (_DWORD)v47, v48);
      byte_42E6772 = 1;
    }
    v62 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v62->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_B5D560(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)unknownNameText,
      (System_String_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    gaugeCount = 0;
    result = 0;
  }
  *tdGuageCount = gaugeCount;
  return result;
}


System_Int32_array *__fastcall TreasureDvcEntity__getFixAppearanceInfoArray(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = limit;
  if ( (byte_42EACC9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18985/*"fixAppearanceId_"*/, limit, (_DWORD)method, v3);
    byte_42EACC9 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_String__Concat_44577788((System_String_o *)StringLiteral_18985/*"fixAppearanceId_"*/, v5, 0LL);
  return TreasureDvcEntity__getScriptIntArrayParam(this, v6, 0LL, v7);
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
  __int64 v13; // x0

  if ( (byte_42EACC8 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)keyGroupSeqId, index, method);
    byte_42EACC8 = 1;
  }
  v7 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_B5D69C(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    v13 = sub_B5D6C8(ScriptIntArrayParam);
    sub_B5D668(v13, 0LL);
  }
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Int32_array *v22; // x22
  const MethodInfo *v23; // x3
  System_Int32_array *ScriptIntArrayParam; // x19
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x21
  WeightRate_int__o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x22
  int32_t v32; // w1
  __int64 v34; // x0

  if ( (byte_42EACC6 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)keySeqId, (_DWORD)keyWeight, method);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v10, v11, v12);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v13, v14, v15);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v16, v17, v18);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v19, v20, v21);
    byte_42EACC6 = 1;
  }
  v22 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v22, v23);
  v26 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v22, v25);
  v27 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v27, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v30 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v26 )
    {
      if ( v31 >= v26->max_length || v31 >= (unsigned int)v30 )
      {
        v34 = sub_B5D6C8(v28);
        sub_B5D668(v34, 0LL);
      }
      if ( !v27 )
        break;
      WeightRate_int___setWeight(
        v27,
        v26->m_Items[v31 + 1],
        ScriptIntArrayParam->m_Items[v31 + 1],
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v30) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_11;
    }
LABEL_14:
    sub_B5D69C(v28, v29);
  }
LABEL_11:
  if ( !v27 )
    goto LABEL_14;
  v32 = UnityEngine_Random__Range_35654020(0, v27->fields.totalweight, 0LL);
  return WeightRate_int___getData(v27, v32, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t result; // w0
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w8
  __int64 v14; // x23
  const MethodInfo *v15; // x4
  __int64 v16; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  __int64 v19; // x8
  unsigned __int64 v20; // x20
  int32_t v21; // w22
  TreasureDvcEntity_c *v22; // x0
  int32_t v23; // w24
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v25; // x4
  System_String_o *v26; // x25
  const MethodInfo *v27; // x4
  System_String_o *v28; // x24
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v33; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  __int64 v37; // [xsp+8h] [xbp-58h]

  if ( (byte_42EACC4 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, limitCount, actSetId, method);
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, v7, v8, v9);
    byte_42EACC4 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v11 = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v11 )
    goto LABEL_31;
  v13 = *(_DWORD *)(v11 + 24);
  v14 = v11;
  if ( !v13 || (*(_DWORD *)(v11 + 32) = limitCount, v13 == 1) )
  {
LABEL_30:
    v36 = sub_B5D6C8(v11);
    sub_B5D668(v36, 0LL);
  }
  *(_DWORD *)(v11 + 36) = -1;
  if ( !actSetId )
  {
    v11 = sub_B5D5DC(int___TypeInfo, 1LL);
    v16 = v11;
    goto LABEL_12;
  }
  v11 = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v11 )
LABEL_31:
    sub_B5D69C(v11, v12);
  v16 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_30;
  *(_DWORD *)(v11 + 32) = actSetId;
LABEL_12:
  v17 = *(_QWORD *)(v14 + 24);
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v37 = v14;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_30;
      if ( !v16 )
        goto LABEL_31;
      v19 = *(_QWORD *)(v16 + 24);
      if ( (int)v19 >= 1 )
        break;
LABEL_25:
      ++v18;
      LODWORD(v17) = *(_DWORD *)(v37 + 24);
      if ( (__int64)v18 >= (int)v17 )
        return this->fields.cacheRandomSeqId;
    }
    v20 = 0LL;
    v21 = *(_DWORD *)(v37 + 4 * v18 + 32);
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
        goto LABEL_30;
      v22 = TreasureDvcEntity_TypeInfo;
      v23 = *(_DWORD *)(v16 + 32 + 4 * v20);
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v22 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v22,
                      v22->static_fields->KEY_RANDOM_SEQ_ID,
                      v21,
                      v23,
                      v15);
      v26 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)AddLimitKey,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
              v21,
              v23,
              v25);
      v28 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)v26,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v21,
              v23,
              v27);
      v11 = TreasureDvcEntity__checkScript(this, AddLimitKey, v29);
      if ( (v11 & 1) != 0 )
      {
        v11 = TreasureDvcEntity__checkScript(this, v26, v30);
        if ( (v11 & 1) != 0 )
          break;
      }
      LODWORD(v19) = *(_DWORD *)(v16 + 24);
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_25;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, AddLimitKey, v26, v31);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, AddLimitKey, RandomSeqId, v33);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v28, RandomSeqIndex, v35);
  }
  return this->fields.cacheRandomSeqId;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRandomSeqIdList(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Int32_array *v22; // x20
  System_Collections_Generic_List_int__o *v23; // x21
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v25; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *v27; // x25
  const MethodInfo *v28; // x4
  System_Int32_array *v29; // x23
  __int64 v30; // x8
  unsigned __int64 v31; // x9
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  int32_t v34; // w24
  TreasureDvcEntity_c *v35; // x0
  int32_t v36; // w25
  System_String_o *AddLimitKey; // x0
  const MethodInfo *v38; // x3
  __int64 v40; // x0
  System_Int32_array *v41; // [xsp+0h] [xbp-60h]
  unsigned __int64 v42; // [xsp+8h] [xbp-58h]

  if ( (byte_42EACC5 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, limitCount, actSetId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, v19, v20, v21);
    byte_42EACC5 = 1;
  }
  v22 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  ScriptIntArrayParam = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !ScriptIntArrayParam )
    goto LABEL_27;
  max_length = ScriptIntArrayParam->max_length;
  v27 = ScriptIntArrayParam;
  if ( !max_length )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[1] = limitCount;
  if ( max_length == 1 )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[2] = -1;
  if ( actSetId )
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
    if ( !ScriptIntArrayParam )
      goto LABEL_27;
    v29 = ScriptIntArrayParam;
    if ( !ScriptIntArrayParam->max_length )
      goto LABEL_26;
    ScriptIntArrayParam->m_Items[1] = actSetId;
  }
  else
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
    v29 = ScriptIntArrayParam;
  }
  v30 = *(_QWORD *)&v27->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    v41 = v27;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        goto LABEL_26;
      v42 = v31;
      if ( !v29 )
        goto LABEL_27;
      v32 = *(_QWORD *)&v29->max_length;
      if ( (int)v32 >= 1 )
        break;
LABEL_23:
      LODWORD(v30) = v41->max_length;
      v31 = v42 + 1;
      if ( (__int64)(v42 + 1) >= (int)v30 )
        goto LABEL_24;
    }
    v33 = 0LL;
    v34 = v41->m_Items[v31 + 1];
    while ( v33 < (unsigned int)v32 )
    {
      v35 = TreasureDvcEntity_TypeInfo;
      v36 = v29->m_Items[v33 + 1];
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v35 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v35,
                      v35->static_fields->KEY_RANDOM_SEQ_ID,
                      v34,
                      v36,
                      v28);
      ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, AddLimitKey, v22, v38);
      if ( !v23 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)ScriptIntArrayParam,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      LODWORD(v32) = v29->max_length;
      if ( (__int64)++v33 >= (int)v32 )
        goto LABEL_23;
    }
LABEL_26:
    v40 = sub_B5D6C8(ScriptIntArrayParam);
    sub_B5D668(v40, 0LL);
  }
LABEL_24:
  if ( !v23 )
LABEL_27:
    sub_B5D69C(ScriptIntArrayParam, v25);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v14; // x0

  if ( (byte_42EACC7 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)keySeqId, seqId, method);
    byte_42EACC7 = 1;
  }
  v7 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B5D69C(0LL, v10);
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
      if ( (unsigned int)v13 >= max_length )
      {
        v14 = sub_B5D6C8(v13);
        sub_B5D668(v14, 0LL);
      }
      if ( v12->m_Items[(int)v13 + 1] == seqId )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (int)v13 >= max_length )
        goto LABEL_9;
    }
  }
  return v13;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EACCA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22049/*"relationBgmIds"*/, (_DWORD)method, v2, v3);
    byte_42EACCA = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22049/*"relationBgmIds"*/, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getScriptInt(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  TreasureDvcEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_42EACBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42EACBE = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v10);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B5D990(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v13, v14, v15, v16);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_object__c *v31; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x21
  System_Collections_Generic_List_BattleActionData_HealData__o *v35; // x19
  TreasureDvcEntity___c_c *v36; // x8
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__28_0; // x20
  __int64 v39; // x11
  __int64 v40; // x9
  Il2CppObject *v41; // x21
  struct TreasureDvcEntity___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  v4 = defVal;
  if ( (byte_42EACBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11, v12);
    sub_B5D5C4(&int___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__, v25, v26, v27);
    sub_B5D5C4(&TreasureDvcEntity___c_TypeInfo, v28, v29, v30);
    byte_42EACBF = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           script,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_B5D684(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_B5D684(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v35 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v36 = TreasureDvcEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v36 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__28_0;
  v31 = System_Collections_Generic_List_object__TypeInfo;
  if ( v35 )
  {
    v39 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (System_Collections_Generic_List_object__c *)v35->klass->_2.typeHierarchy[v39 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_19;
    }
  }
  if ( !_9__28_0 )
    goto LABEL_20;
  if ( !v35 )
    goto LABEL_26;
  v40 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v40
    || (System_Collections_Generic_List_object__c *)v35->klass->_2.typeHierarchy[v40 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_19:
    sub_B5D990(v35);
LABEL_20:
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__28_0,
      v41,
      Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v42 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v42->__9__28_0 = (struct System_Converter_object__int__o *)_9__28_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v42->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    if ( v35 )
      goto LABEL_24;
LABEL_26:
    sub_B5D69C(script, v31);
  }
LABEL_24:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v35,
                                                                               (System_Converter_T__TOutput__o *)_9__28_0,
                                                                               (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_26;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EACC0 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, limit, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20481/*"limitSeqId_{0}"*/, v6, v7, v8);
    byte_42EACC0 = 1;
  }
  v13 = limit;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v10 = System_String__Format((System_String_o *)StringLiteral_20481/*"limitSeqId_{0}"*/, v9, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v10, this->fields.seqId, v11);
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
  __int64 v12; // x0

  if ( (byte_42EACCE & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)key, commandType, method);
    byte_42EACCE = 1;
  }
  v7 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B5D69C(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
  {
    v12 = sub_B5D6C8(ScriptIntArrayParam);
    sub_B5D668(v12, 0LL);
  }
  return ScriptIntArrayParam->m_Items[commandType];
}


int32_t __fastcall TreasureDvcEntity__getTDTypeChangeIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t commandType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t id; // w21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  __int64 v14; // x8
  __int64 v15; // x22
  unsigned __int64 v16; // x24
  TreasureDvcEntity_o *v17; // x0
  int32_t v18; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  __int64 v23; // x0

  if ( (byte_42EACCD & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, limitCount, commandType, method);
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, v7, v8, v9);
    byte_42EACCD = 1;
  }
  id = this->fields.id;
  v11 = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  v14 = *(_QWORD *)(v11 + 24);
  v15 = v11;
  if ( !(_DWORD)v14 || (*(_DWORD *)(v11 + 32) = limitCount, (_DWORD)v14 == 1) )
  {
LABEL_16:
    v23 = sub_B5D6C8(v11);
    sub_B5D668(v23, 0LL);
  }
  *(_DWORD *)(v11 + 36) = -1;
  if ( (int)v14 < 1 )
    return id;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)v14 )
      goto LABEL_16;
    v17 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v18 = *(_DWORD *)(v15 + 32 + 4 * v16);
    if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v17 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v17,
                    (System_String_o *)v17[1].fields.script->fields.entries,
                    v18,
                    0,
                    v13);
    v11 = TreasureDvcEntity__checkScript(this, AddLimitKey, v20);
    if ( (v11 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v21);
    LODWORD(v14) = *(_DWORD *)(v15 + 24);
    if ( (__int64)++v16 >= (int)v14 )
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  TreasureDvcEntity_c *v17; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  Il2CppObject *v21; // x21
  System_String_o *v22; // x0
  Il2CppObject *v23; // x2
  int32_t v25; // [xsp+8h] [xbp-28h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v6 = limit;
  v7 = (Il2CppObject *)baseKey;
  v25 = actSet;
  v26 = limit;
  if ( (byte_42EACC3 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity_TypeInfo, (_DWORD)baseKey, limit, *(_QWORD *)&actSet);
    sub_B5D5C4(&StringLiteral_23970/*"{0}{1}{2}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EACC3 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v17 = TreasureDvcEntity_TypeInfo;
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v17 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v17->static_fields->KET_SUFFIX_ACTSET;
      v19 = System_Int32__ToString((int32_t)&v25, 0LL);
      v20 = System_String__Concat_44577788(KET_SUFFIX_ACTSET, v19, 0LL);
      v6 = v26;
      v21 = (Il2CppObject *)v20;
    }
    else
    {
      v21 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    if ( v6 == -1 )
    {
      v23 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      v22 = System_Int32__ToString((int32_t)&v26, 0LL);
      v23 = (Il2CppObject *)System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, v22, 0LL);
    }
    return System_String__Format_44578852((System_String_o *)StringLiteral_23970/*"{0}{1}{2}"*/, v7, v23, v21, 0LL);
  }
  return (System_String_o *)v7;
}


void __fastcall TreasureDvcEntity__resetCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  this->fields.cacheRandomSeqId = -1;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E626A & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcEntity___c_TypeInfo, v1, v2, v3);
    byte_42E626A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall TreasureDvcEntity___c___ctor(TreasureDvcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDvcEntity___c___getScriptIntArrayParam_b__28_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E626B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E626B = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}