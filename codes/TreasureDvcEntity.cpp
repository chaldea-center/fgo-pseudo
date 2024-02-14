void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TreasureDvcEntity_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct TreasureDvcEntity_StaticFields *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct TreasureDvcEntity_StaticFields *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct TreasureDvcEntity_StaticFields *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct TreasureDvcEntity_StaticFields *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_4216841 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19145/*"groupSeqIDs"*/, v8);
    sub_B0D8A4(&StringLiteral_18006/*"delayEnd"*/, v9);
    sub_B0D8A4(&StringLiteral_16180/*"_actSet"*/, v10);
    sub_B0D8A4(&StringLiteral_21768/*"randomWeights"*/, v11);
    sub_B0D8A4(&StringLiteral_22701/*"tdTypeChangeIDs"*/, v12);
    sub_B0D8A4(&StringLiteral_21767/*"randomSeqIds"*/, v13);
    byte_4216841 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureDvcEntity_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_21767/*"randomSeqIds"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21767/*"randomSeqIds"*/;
  sub_B0D840(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_21768/*"randomWeights"*/;
  v16->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_21768/*"randomWeights"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v16->KEY_RANDOM_SEQ_WEIGHT, v17, v18, v19, v20, v21, v22, v23);
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v25 = (System_Int32_array **)StringLiteral_19145/*"groupSeqIDs"*/;
  v24->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19145/*"groupSeqIDs"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v24->KEY_GROUP_SEQ_ID, v25, v26, v27, v28, v29, v30, v31);
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_22701/*"tdTypeChangeIDs"*/;
  v32->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_22701/*"tdTypeChangeIDs"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v32->KEY_TD_TYPE_CHANGE_ID, v33, v34, v35, v36, v37, v38, v39);
  v40 = TreasureDvcEntity_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_18006/*"delayEnd"*/;
  v40->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18006/*"delayEnd"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v40->KEY_TD_DELAY_END, v41, v42, v43, v44, v45, v46, v47);
  v48 = TreasureDvcEntity_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_16180/*"_actSet"*/;
  v48->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16180/*"_actSet"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v48->KET_SUFFIX_ACTSET, v49, v50, v51, v52, v53, v54, v55);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216840 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4216840 = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_421683F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16550/*"assumedEffectId"*/, method);
    byte_421683F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16550/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_4216838 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18686/*"excludeTdChangeTypes"*/, defArray);
    byte_4216838 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18686/*"excludeTdChangeTypes"*/, defArray, v3);
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
  if ( (byte_421683E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21224/*"npNameFileSuffix"*/, method);
    byte_421683E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21224/*"npNameFileSuffix"*/, 0LL, 0LL);
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

  if ( (byte_421683C & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, method);
    byte_421683C = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
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

  if ( (byte_421682F & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, method);
    byte_421682F = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool __fastcall TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421683D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6769/*"ForcedOnlyFirstOneSpeed"*/, method);
    byte_421683D = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6769/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_421682E & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, method);
    byte_421682E = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v6 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v6 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v6->static_fields->KEY_RANDOM_SEQ_WEIGHT, v5);
}


bool __fastcall TreasureDvcEntity__IsRandomTD_28049448(
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

  if ( (byte_4216839 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, method);
    byte_4216839 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_TD_TYPE_CHANGE_ID, v2);
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4216829 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4216829 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  char v11; // w19
  int v12; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421682A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, checkKey);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v8);
    byte_421682A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
             (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)script,
             (const MethodInfo_2E4A874 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
      &v14,
      Keys,
      (const MethodInfo_201B210 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
              &v14,
              (const MethodInfo_26CA6D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__) )
    {
      if ( !v14.fields.currentKey )
        sub_B0D97C(0LL);
      if ( System_String__Contains((System_String_o *)v14.fields.currentKey, checkKey, 0LL) )
      {
        v11 = 1;
        v12 = 9;
        goto LABEL_11;
      }
    }
    v11 = 0;
    v12 = 7;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
      &v14,
      (const MethodInfo_26CA6D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = (v12 == 9) & v11;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v21; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v23; // x24
  System_String_o *v24; // x0
  Il2CppObject *name; // x23
  System_String_o *v26; // x25
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x0
  __int64 v36; // x1
  MethodInfo *v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *Detail_28047404; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t gaugeCount; // w8
  bool result; // w0
  LocalizationManager_c *v52; // x0
  System_String_o *unknownNameText; // x1
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4216828 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdName);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B0D8A4(&StringLiteral_9406/*"NP_NAME"*/, v16);
    sub_B0D8A4(&StringLiteral_9407/*"NP_NAME_LEVEL"*/, v17);
    byte_4216828 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AA65A4(v19);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v19 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_WarQuestSelectionMaster,
             this->fields.id,
             lv,
             v21);
  *maxLv = this->fields.maxLv;
  v23 = Entity;
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9406/*"NP_NAME"*/, 0LL);
    v28 = System_String__Format(v35, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9407/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v26 = v24;
    v54 = lv;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    v28 = System_String__Format_43845440(v26, name, v27, 0LL);
  }
  *tdName = v28;
  sub_B0D840((BattleServantConfConponent_o *)tdName, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  if ( v23 )
  {
    Detail_28047404 = TreasureDvcLvEntity__getDetail_28047404(v23, lv, v37);
    *tdExplanation = Detail_28047404;
    sub_B0D840(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)Detail_28047404,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    gaugeCount = v23->fields.gaugeCount;
    result = 1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4212885 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, v36);
      byte_4212885 = 1;
    }
    v52 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v52->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_B0D840(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)unknownNameText,
      (System_String_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    gaugeCount = 0;
    result = 0;
  }
  *tdGuageCount = gaugeCount;
  return result;
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = limit;
  if ( (byte_4216836 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18807/*"fixAppearanceId_"*/, *(_QWORD *)&limit);
    byte_4216836 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_18807/*"fixAppearanceId_"*/, v4, 0LL);
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
  int32_t max_length; // w8
  __int64 v12; // x0

  if ( (byte_4216835 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, keyGroupSeqId);
    byte_4216835 = 1;
  }
  v7 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_B0D97C(0LL);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    v12 = sub_B0D9A8(ScriptIntArrayParam);
    sub_B0D948(v12, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array *v12; // x22
  const MethodInfo *v13; // x3
  System_Int32_array *ScriptIntArrayParam; // x19
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  WeightRate_int__o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  int32_t v23; // w1
  __int64 v25; // x0

  if ( (byte_4216833 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, keySeqId);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v7);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v8);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v10);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v11);
    byte_4216833 = 1;
  }
  v12 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v12, v13);
  v16 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v12, v15);
  v19 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v17, v18);
  WeightRate_int____ctor(v19, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v21 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( v16 )
    {
      if ( v22 >= v16->max_length || v22 >= (unsigned int)v21 )
      {
        v25 = sub_B0D9A8(v20);
        sub_B0D948(v25, 0LL);
      }
      if ( !v19 )
        break;
      WeightRate_int___setWeight(
        v19,
        v16->m_Items[v22 + 1],
        ScriptIntArrayParam->m_Items[v22 + 1],
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      LODWORD(v21) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_11;
    }
LABEL_14:
    sub_B0D97C(v20);
  }
LABEL_11:
  if ( !v19 )
    goto LABEL_14;
  v23 = UnityEngine_Random__Range_34969060(0, v19->fields.totalweight, 0LL);
  return WeightRate_int___getData(v19, v23, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t result; // w0
  __int64 v9; // x0
  int v10; // w8
  __int64 v11; // x23
  const MethodInfo *v12; // x4
  __int64 v13; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  __int64 v16; // x8
  unsigned __int64 v17; // x20
  int32_t v18; // w22
  TreasureDvcEntity_c *v19; // x0
  int32_t v20; // w24
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v22; // x4
  System_String_o *v23; // x25
  const MethodInfo *v24; // x4
  System_String_o *v25; // x24
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v30; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  __int64 v34; // [xsp+8h] [xbp-58h]

  if ( (byte_4216831 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, v7);
    byte_4216831 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v9 = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_31;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v9;
  if ( !v10 || (*(_DWORD *)(v9 + 32) = limitCount, v10 == 1) )
  {
LABEL_30:
    v33 = sub_B0D9A8(v9);
    sub_B0D948(v33, 0LL);
  }
  *(_DWORD *)(v9 + 36) = -1;
  if ( !actSetId )
  {
    v9 = sub_B0D8BC(int___TypeInfo, 1LL);
    v13 = v9;
    goto LABEL_12;
  }
  v9 = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v9 )
LABEL_31:
    sub_B0D97C(v9);
  v13 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_30;
  *(_DWORD *)(v9 + 32) = actSetId;
LABEL_12:
  v14 = *(_QWORD *)(v11 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v34 = v11;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_30;
      if ( !v13 )
        goto LABEL_31;
      v16 = *(_QWORD *)(v13 + 24);
      if ( (int)v16 >= 1 )
        break;
LABEL_25:
      ++v15;
      LODWORD(v14) = *(_DWORD *)(v34 + 24);
      if ( (__int64)v15 >= (int)v14 )
        return this->fields.cacheRandomSeqId;
    }
    v17 = 0LL;
    v18 = *(_DWORD *)(v34 + 4 * v15 + 32);
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_30;
      v19 = TreasureDvcEntity_TypeInfo;
      v20 = *(_DWORD *)(v13 + 32 + 4 * v17);
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v19 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v19,
                      v19->static_fields->KEY_RANDOM_SEQ_ID,
                      v18,
                      v20,
                      v12);
      v23 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)AddLimitKey,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
              v18,
              v20,
              v22);
      v25 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)v23,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v18,
              v20,
              v24);
      v9 = TreasureDvcEntity__checkScript(this, AddLimitKey, v26);
      if ( (v9 & 1) != 0 )
      {
        v9 = TreasureDvcEntity__checkScript(this, v23, v27);
        if ( (v9 & 1) != 0 )
          break;
      }
      LODWORD(v16) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_25;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, AddLimitKey, v23, v28);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, AddLimitKey, RandomSeqId, v30);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v25, RandomSeqIndex, v32);
  }
  return this->fields.cacheRandomSeqId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall TreasureDvcEntity__getRandomSeqIdList(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  System_Int32_array *ScriptIntArrayParam; // x0
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *v18; // x25
  const MethodInfo *v19; // x4
  System_Int32_array *v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x9
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  int32_t v25; // w24
  TreasureDvcEntity_c *v26; // x0
  int32_t v27; // w25
  System_String_o *AddLimitKey; // x0
  const MethodInfo *v29; // x3
  __int64 v31; // x0
  System_Int32_array *v32; // [xsp+0h] [xbp-60h]
  unsigned __int64 v33; // [xsp+8h] [xbp-58h]

  if ( (byte_4216832 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, v11);
    byte_4216832 = 1;
  }
  v12 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  ScriptIntArrayParam = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !ScriptIntArrayParam )
    goto LABEL_27;
  max_length = ScriptIntArrayParam->max_length;
  v18 = ScriptIntArrayParam;
  if ( !max_length )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[1] = limitCount;
  if ( max_length == 1 )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[2] = -1;
  if ( actSetId )
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
    if ( !ScriptIntArrayParam )
      goto LABEL_27;
    v20 = ScriptIntArrayParam;
    if ( !ScriptIntArrayParam->max_length )
      goto LABEL_26;
    ScriptIntArrayParam->m_Items[1] = actSetId;
  }
  else
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
    v20 = ScriptIntArrayParam;
  }
  v21 = *(_QWORD *)&v18->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v32 = v18;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_26;
      v33 = v22;
      if ( !v20 )
        goto LABEL_27;
      v23 = *(_QWORD *)&v20->max_length;
      if ( (int)v23 >= 1 )
        break;
LABEL_23:
      LODWORD(v21) = v32->max_length;
      v22 = v33 + 1;
      if ( (__int64)(v33 + 1) >= (int)v21 )
        goto LABEL_24;
    }
    v24 = 0LL;
    v25 = v32->m_Items[v22 + 1];
    while ( v24 < (unsigned int)v23 )
    {
      v26 = TreasureDvcEntity_TypeInfo;
      v27 = v20->m_Items[v24 + 1];
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v26 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v26,
                      v26->static_fields->KEY_RANDOM_SEQ_ID,
                      v25,
                      v27,
                      v19);
      ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, AddLimitKey, v12, v29);
      if ( !v15 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v15,
        (System_Collections_Generic_IEnumerable_T__o *)ScriptIntArrayParam,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      LODWORD(v23) = v20->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_23;
    }
LABEL_26:
    v31 = sub_B0D9A8(ScriptIntArrayParam);
    sub_B0D948(v31, 0LL);
  }
LABEL_24:
  if ( !v15 )
LABEL_27:
    sub_B0D97C(ScriptIntArrayParam);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int max_length; // w9
  System_Int32_array *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4216834 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, keySeqId);
    byte_4216834 = 1;
  }
  v7 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B0D97C(0LL);
  max_length = ScriptIntArrayParam->max_length;
  v11 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v12) = -1;
  }
  else
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
      {
        v13 = sub_B0D9A8(v12);
        sub_B0D948(v13, 0LL);
      }
      if ( v11->m_Items[(int)v12 + 1] == seqId )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= max_length )
        goto LABEL_9;
    }
  }
  return v12;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4216837 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21825/*"relationBgmIds"*/, method);
    byte_4216837 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21825/*"relationBgmIds"*/, 0LL, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  TreasureDvcEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_Int32_array *v12; // x2
  const MethodInfo *v13; // x3

  v4 = defVal;
  if ( (byte_421682B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_421682B = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v10 = (TreasureDvcEntity_o *)sub_B0DC70(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v10, v11, v12, v13);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x21
  __int64 v18; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v19; // x19
  TreasureDvcEntity___c_c *v20; // x8
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__28_0; // x20
  System_Collections_Generic_List_object__c *v23; // x1
  __int64 v24; // x11
  __int64 v25; // x9
  Il2CppObject *v26; // x21
  struct TreasureDvcEntity___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  v4 = defVal;
  if ( (byte_421682C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_B0D8A4(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__, v13);
    sub_B0D8A4(&TreasureDvcEntity___c_TypeInfo, v14);
    byte_421682C = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           script,
           (System_Type_o *)key,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_B0D964(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_B0D964(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v20 = TreasureDvcEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v20 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__28_0;
  v23 = System_Collections_Generic_List_object__TypeInfo;
  if ( v19 )
  {
    v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (System_Collections_Generic_List_object__c *)v19->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_19;
    }
  }
  if ( !_9__28_0 )
    goto LABEL_20;
  if ( !v19 )
    goto LABEL_26;
  v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (System_Collections_Generic_List_object__c *)v19->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_19:
    sub_B0DC70(v19);
LABEL_20:
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v23,
                                                                       v18);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__28_0,
      v26,
      Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v27 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v27->__9__28_0 = (struct System_Converter_object__int__o *)_9__28_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( v19 )
      goto LABEL_24;
LABEL_26:
    sub_B0D97C(script);
  }
LABEL_24:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v19,
                                                                               (System_Converter_T__TOutput__o *)_9__28_0,
                                                                               (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_26;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421682D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&limit);
    sub_B0D8A4(&StringLiteral_20288/*"limitSeqId_{0}"*/, v5);
    byte_421682D = 1;
  }
  v10 = limit;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v7 = System_String__Format((System_String_o *)StringLiteral_20288/*"limitSeqId_{0}"*/, v6, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v7, this->fields.seqId, v8);
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
  __int64 v11; // x0

  if ( (byte_421683B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, key);
    byte_421683B = 1;
  }
  v7 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B0D97C(0LL);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
  {
    v11 = sub_B0D9A8(ScriptIntArrayParam);
    sub_B0D948(v11, 0LL);
  }
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
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  __int64 v12; // x22
  unsigned __int64 v13; // x24
  TreasureDvcEntity_o *v14; // x0
  int32_t v15; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  __int64 v20; // x0

  if ( (byte_421683A & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, v7);
    byte_421683A = 1;
  }
  id = this->fields.id;
  v9 = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v9 )
    sub_B0D97C(0LL);
  v11 = *(_QWORD *)(v9 + 24);
  v12 = v9;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v9 + 32) = limitCount, (_DWORD)v11 == 1) )
  {
LABEL_16:
    v20 = sub_B0D9A8(v9);
    sub_B0D948(v20, 0LL);
  }
  *(_DWORD *)(v9 + 36) = -1;
  if ( (int)v11 < 1 )
    return id;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
      goto LABEL_16;
    v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v15 = *(_DWORD *)(v12 + 32 + 4 * v13);
    if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v14,
                    (System_String_o *)v14[1].fields.script->fields.entries,
                    v15,
                    0,
                    v10);
    v9 = TreasureDvcEntity__checkScript(this, AddLimitKey, v17);
    if ( (v9 & 1) != 0 )
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
  if ( (byte_4216830 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity_TypeInfo, baseKey);
    sub_B0D8A4(&StringLiteral_23736/*"{0}{1}{2}"*/, v8);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4216830 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v11 = TreasureDvcEntity_TypeInfo;
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v11 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v11->static_fields->KET_SUFFIX_ACTSET;
      v13 = System_Int32__ToString((int32_t)&v19, 0LL);
      v14 = System_String__Concat_43849904(KET_SUFFIX_ACTSET, v13, 0LL);
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
      v17 = (Il2CppObject *)System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, v16, 0LL);
    }
    return System_String__Format_43850968((System_String_o *)StringLiteral_23736/*"{0}{1}{2}"*/, v7, v17, v15, 0LL);
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
  Il2CppObject *v3; // x19
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42125CA & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcEntity___c_TypeInfo, v1);
    byte_42125CA = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TreasureDvcEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  System_String_o *v4; // x0

  if ( (byte_42125CB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42125CB = 1;
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