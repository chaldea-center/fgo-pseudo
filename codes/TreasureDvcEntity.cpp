void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TreasureDvcEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TreasureDvcEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TreasureDvcEntity_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct TreasureDvcEntity_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct TreasureDvcEntity_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_438D675 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    sub_B775C4(&StringLiteral_19474/*"groupSeqIDs"*/);
    sub_B775C4(&StringLiteral_18309/*"delayEnd"*/);
    sub_B775C4(&StringLiteral_16439/*"_actSet"*/);
    sub_B775C4(&StringLiteral_22157/*"randomWeights"*/);
    sub_B775C4(&StringLiteral_23102/*"tdTypeChangeIDs"*/);
    sub_B775C4(&StringLiteral_22156/*"randomSeqIds"*/);
    byte_438D675 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureDvcEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22156/*"randomSeqIds"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22156/*"randomSeqIds"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TreasureDvcEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22157/*"randomWeights"*/;
  v9->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22157/*"randomWeights"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->KEY_RANDOM_SEQ_WEIGHT, v10, v11, v12, v13, v14, v15, v16);
  v17 = TreasureDvcEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19474/*"groupSeqIDs"*/;
  v17->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19474/*"groupSeqIDs"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->KEY_GROUP_SEQ_ID, v18, v19, v20, v21, v22, v23, v24);
  v25 = TreasureDvcEntity_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_23102/*"tdTypeChangeIDs"*/;
  v25->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_23102/*"tdTypeChangeIDs"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->KEY_TD_TYPE_CHANGE_ID, v26, v27, v28, v29, v30, v31, v32);
  v33 = TreasureDvcEntity_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18309/*"delayEnd"*/;
  v33->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18309/*"delayEnd"*/;
  sub_B77560((BattleServantConfConponent_o *)&v33->KEY_TD_DELAY_END, v34, v35, v36, v37, v38, v39, v40);
  v41 = TreasureDvcEntity_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_16439/*"_actSet"*/;
  v41->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16439/*"_actSet"*/;
  sub_B77560((BattleServantConfConponent_o *)&v41->KET_SUFFIX_ACTSET, v42, v43, v44, v45, v46, v47, v48);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D674 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438D674 = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D673 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16822/*"assumedEffectId"*/);
    byte_438D673 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16822/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_438D66C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18997/*"excludeTdChangeTypes"*/);
    byte_438D66C = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18997/*"excludeTdChangeTypes"*/, defArray, v3);
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
  if ( (byte_438D672 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21593/*"npNameFileSuffix"*/);
    byte_438D672 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21593/*"npNameFileSuffix"*/, 0LL, 0LL);
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

  if ( (byte_438D670 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D670 = 1;
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

  if ( (byte_438D663 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D663 = 1;
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

  if ( (byte_438D671 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6901/*"ForcedOnlyFirstOneSpeed"*/);
    byte_438D671 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6901/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_438D662 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D662 = 1;
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


bool __fastcall TreasureDvcEntity__IsRandomTD_29476212(
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

  if ( (byte_438D66D & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D66D = 1;
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

  if ( (byte_438D65D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_438D65D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438D65E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_438D65E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
             (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)script,
             (const MethodInfo_2F7D204 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_B7769C(0LL, v7);
    System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_21B64BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
              &v12,
              (const MethodInfo_27E4BFC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__) )
    {
      if ( !v12.fields.currentKey )
        sub_B7769C(0LL, v8);
      if ( System_String__Contains((System_String_o *)v12.fields.currentKey, checkKey, 0LL) )
      {
        v9 = 1;
        v10 = 9;
        goto LABEL_11;
      }
    }
    v9 = 0;
    v10 = 7;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
      &v12,
      (const MethodInfo_27E4BF8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = (v10 == 9) & v9;
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
  __int64 v13; // x25
  __int64 v14; // x25
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v18; // x24
  System_String_o *v19; // x0
  Il2CppObject *name; // x23
  System_String_o *v21; // x25
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x0
  MethodInfo *v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *Detail_29474168; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t gaugeCount; // w8
  bool result; // w0
  LocalizationManager_c *v47; // x0
  System_String_o *unknownNameText; // x1
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438D65C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&StringLiteral_9554/*"NP_NAME"*/);
    sub_B775C4(&StringLiteral_9555/*"NP_NAME_LEVEL"*/);
    byte_438D65C = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B0F2C4(v14);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v14 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_B7769C(MasterData_WarQuestSelectionMaster, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_WarQuestSelectionMaster,
             this->fields.id,
             lv,
             v16);
  *maxLv = this->fields.maxLv;
  v18 = Entity;
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9554/*"NP_NAME"*/, 0LL);
    v24 = System_String__Format(v31, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9555/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v21 = v19;
    v49 = lv;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v22);
    v24 = System_String__Format_44897472(v21, name, v23, 0LL);
  }
  *tdName = v24;
  sub_B77560((BattleServantConfConponent_o *)tdName, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  if ( v18 )
  {
    Detail_29474168 = TreasureDvcLvEntity__getDetail_29474168(v18, lv, v32);
    *tdExplanation = Detail_29474168;
    sub_B77560(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)Detail_29474168,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    gaugeCount = v18->fields.gaugeCount;
    result = 1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4388DC6 )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      byte_4388DC6 = 1;
    }
    v47 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v47->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_B77560(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)unknownNameText,
      (System_String_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37);
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
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = limit;
  if ( (byte_438D66A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19125/*"fixAppearanceId_"*/);
    byte_438D66A = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_44901936((System_String_o *)StringLiteral_19125/*"fixAppearanceId_"*/, v4, 0LL);
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
  __int64 v13; // x0

  if ( (byte_438D669 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438D669 = 1;
  }
  v7 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_B7769C(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    v13 = sub_B776C8(ScriptIntArrayParam);
    sub_B77668(v13, 0LL);
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
  System_Int32_array *v7; // x22
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x19
  const MethodInfo *v10; // x3
  System_Int32_array *v11; // x21
  WeightRate_int__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w1
  __int64 v19; // x0

  if ( (byte_438D667 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    byte_438D667 = 1;
  }
  v7 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v15 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( v11 )
    {
      if ( v16 >= v11->max_length || v16 >= (unsigned int)v15 )
      {
        v19 = sub_B776C8(v13);
        sub_B77668(v19, 0LL);
      }
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16 + 1],
        ScriptIntArrayParam->m_Items[v16 + 1],
        (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_11;
    }
LABEL_14:
    sub_B7769C(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v17 = UnityEngine_Random__Range_36343764(0, v12->fields.totalweight, 0LL);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v8; // x0
  __int64 v9; // x1
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

  if ( (byte_438D665 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D665 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v8 = sub_B775DC(int___TypeInfo, 2LL);
  if ( !v8 )
    goto LABEL_31;
  v10 = *(_DWORD *)(v8 + 24);
  v11 = v8;
  if ( !v10 || (*(_DWORD *)(v8 + 32) = limitCount, v10 == 1) )
  {
LABEL_30:
    v33 = sub_B776C8(v8);
    sub_B77668(v33, 0LL);
  }
  *(_DWORD *)(v8 + 36) = -1;
  if ( !actSetId )
  {
    v8 = sub_B775DC(int___TypeInfo, 1LL);
    v13 = v8;
    goto LABEL_12;
  }
  v8 = sub_B775DC(int___TypeInfo, 2LL);
  if ( !v8 )
LABEL_31:
    sub_B7769C(v8, v9);
  v13 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_30;
  *(_DWORD *)(v8 + 32) = actSetId;
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
      v8 = TreasureDvcEntity__checkScript(this, AddLimitKey, v26);
      if ( (v8 & 1) != 0 )
      {
        v8 = TreasureDvcEntity__checkScript(this, v23, v27);
        if ( (v8 & 1) != 0 )
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


System_Int32_array *__fastcall TreasureDvcEntity__getRandomSeqIdList(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x21
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *v12; // x25
  const MethodInfo *v13; // x4
  System_Int32_array *v14; // x23
  __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  int32_t v19; // w24
  TreasureDvcEntity_c *v20; // x0
  int32_t v21; // w25
  System_String_o *AddLimitKey; // x0
  const MethodInfo *v23; // x3
  __int64 v25; // x0
  System_Int32_array *v26; // [xsp+0h] [xbp-60h]
  unsigned __int64 v27; // [xsp+8h] [xbp-58h]

  if ( (byte_438D666 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D666 = 1;
  }
  v7 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  ScriptIntArrayParam = (System_Int32_array *)sub_B775DC(int___TypeInfo, 2LL);
  if ( !ScriptIntArrayParam )
    goto LABEL_27;
  max_length = ScriptIntArrayParam->max_length;
  v12 = ScriptIntArrayParam;
  if ( !max_length )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[1] = limitCount;
  if ( max_length == 1 )
    goto LABEL_26;
  ScriptIntArrayParam->m_Items[2] = -1;
  if ( actSetId )
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B775DC(int___TypeInfo, 2LL);
    if ( !ScriptIntArrayParam )
      goto LABEL_27;
    v14 = ScriptIntArrayParam;
    if ( !ScriptIntArrayParam->max_length )
      goto LABEL_26;
    ScriptIntArrayParam->m_Items[1] = actSetId;
  }
  else
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_B775DC(int___TypeInfo, 1LL);
    v14 = ScriptIntArrayParam;
  }
  v15 = *(_QWORD *)&v12->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v26 = v12;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        goto LABEL_26;
      v27 = v16;
      if ( !v14 )
        goto LABEL_27;
      v17 = *(_QWORD *)&v14->max_length;
      if ( (int)v17 >= 1 )
        break;
LABEL_23:
      LODWORD(v15) = v26->max_length;
      v16 = v27 + 1;
      if ( (__int64)(v27 + 1) >= (int)v15 )
        goto LABEL_24;
    }
    v18 = 0LL;
    v19 = v26->m_Items[v16 + 1];
    while ( v18 < (unsigned int)v17 )
    {
      v20 = TreasureDvcEntity_TypeInfo;
      v21 = v14->m_Items[v18 + 1];
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v20 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v20,
                      v20->static_fields->KEY_RANDOM_SEQ_ID,
                      v19,
                      v21,
                      v13);
      ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, AddLimitKey, v7, v23);
      if ( !v8 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v8,
        (System_Collections_Generic_IEnumerable_T__o *)ScriptIntArrayParam,
        (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
      LODWORD(v17) = v14->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_23;
    }
LABEL_26:
    v25 = sub_B776C8(ScriptIntArrayParam);
    sub_B77668(v25, 0LL);
  }
LABEL_24:
  if ( !v8 )
LABEL_27:
    sub_B7769C(ScriptIntArrayParam, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_438D668 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438D668 = 1;
  }
  v7 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B7769C(0LL, v10);
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
        v14 = sub_B776C8(v13);
        sub_B77668(v14, 0LL);
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
  const MethodInfo *v2; // x3

  if ( (byte_438D66B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22218/*"relationBgmIds"*/);
    byte_438D66B = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22218/*"relationBgmIds"*/, 0LL, v2);
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
  if ( (byte_438D65F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_438D65F = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B77990(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v10, v11, v12, v13);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x21
  System_Collections_Generic_List_object__c *v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x21
  System_Collections_Generic_List_BattleActionData_HealData__o *v11; // x19
  TreasureDvcEntity___c_c *v12; // x8
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__28_0; // x20
  __int64 v15; // x11
  __int64 v16; // x9
  Il2CppObject *v17; // x21
  struct TreasureDvcEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v4 = defVal;
  if ( (byte_438D660 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__);
    sub_B775C4(&TreasureDvcEntity___c_TypeInfo);
    byte_438D660 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           script,
           (System_Type_o *)key,
           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_B77684(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_B77684(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_26;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v12 = TreasureDvcEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v12 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__28_0;
  v7 = System_Collections_Generic_List_object__TypeInfo;
  if ( v11 )
  {
    v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_19;
    }
  }
  if ( !_9__28_0 )
    goto LABEL_20;
  if ( !v11 )
    goto LABEL_26;
  v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_19:
    sub_B77990(v11);
LABEL_20:
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__28_0,
      v17,
      Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v18 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v18->__9__28_0 = (struct System_Converter_object__int__o *)_9__28_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( v11 )
      goto LABEL_24;
LABEL_26:
    sub_B7769C(script, v7);
  }
LABEL_24:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v11,
                                                                               (System_Converter_T__TOutput__o *)_9__28_0,
                                                                               (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_26;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438D661 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_20636/*"limitSeqId_{0}"*/);
    byte_438D661 = 1;
  }
  v9 = limit;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method);
  v6 = System_String__Format((System_String_o *)StringLiteral_20636/*"limitSeqId_{0}"*/, v5, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v6, this->fields.seqId, v7);
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

  if ( (byte_438D66F & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438D66F = 1;
  }
  v7 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B7769C(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
  {
    v12 = sub_B776C8(ScriptIntArrayParam);
    sub_B77668(v12, 0LL);
  }
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
  __int64 v20; // x0

  if ( (byte_438D66E & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    byte_438D66E = 1;
  }
  id = this->fields.id;
  v8 = sub_B775DC(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_B7769C(0LL, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
  {
LABEL_16:
    v20 = sub_B776C8(v8);
    sub_B77668(v20, 0LL);
  }
  *(_DWORD *)(v8 + 36) = -1;
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
  if ( (byte_438D664 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity_TypeInfo);
    sub_B775C4(&StringLiteral_24146/*"{0}{1}{2}"*/);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D664 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v8 = TreasureDvcEntity_TypeInfo;
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v8 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v8->static_fields->KET_SUFFIX_ACTSET;
      v10 = System_Int32__ToString((int32_t)&v16, 0LL);
      v11 = System_String__Concat_44901936(KET_SUFFIX_ACTSET, v10, 0LL);
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
      v14 = (Il2CppObject *)System_String__Concat_44901936((System_String_o *)StringLiteral_16197/*"_"*/, v13, 0LL);
    }
    return System_String__Format_44903000(
             (System_String_o *)StringLiteral_24146/*"{0}{1}{2}"*/,
             (Il2CppObject *)baseKey,
             v14,
             v12,
             0LL);
  }
  return baseKey;
}


void __fastcall TreasureDvcEntity__resetCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  this->fields.cacheRandomSeqId = -1;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4388894 & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcEntity___c_TypeInfo);
    byte_4388894 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_B77560(static_fields);
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

  if ( (byte_4388895 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388895 = 1;
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