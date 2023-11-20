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

  if ( (byte_40FB89D & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19014, v8);
    sub_B16FFC(&StringLiteral_17882, v9);
    sub_B16FFC(&StringLiteral_16069, v10);
    sub_B16FFC(&StringLiteral_21606, v11);
    sub_B16FFC(&StringLiteral_22532, v12);
    sub_B16FFC(&StringLiteral_21605, v13);
    byte_40FB89D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureDvcEntity_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_21605;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21605;
  sub_B16F98(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_21606;
  v16->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_21606;
  sub_B16F98((BattleServantConfConponent_o *)&v16->KEY_RANDOM_SEQ_WEIGHT, v17, v18, v19, v20, v21, v22, v23);
  v24 = TreasureDvcEntity_TypeInfo->static_fields;
  v25 = (System_Int32_array **)StringLiteral_19014;
  v24->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19014;
  sub_B16F98((BattleServantConfConponent_o *)&v24->KEY_GROUP_SEQ_ID, v25, v26, v27, v28, v29, v30, v31);
  v32 = TreasureDvcEntity_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_22532;
  v32->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_22532;
  sub_B16F98((BattleServantConfConponent_o *)&v32->KEY_TD_TYPE_CHANGE_ID, v33, v34, v35, v36, v37, v38, v39);
  v40 = TreasureDvcEntity_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_17882;
  v40->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_17882;
  sub_B16F98((BattleServantConfConponent_o *)&v40->KEY_TD_DELAY_END, v41, v42, v43, v44, v45, v46, v47);
  v48 = TreasureDvcEntity_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_16069;
  v48->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16069;
  sub_B16F98((BattleServantConfConponent_o *)&v48->KET_SUFFIX_ACTSET, v49, v50, v51, v52, v53, v54, v55);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB89C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB89C = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB89B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437, method);
    byte_40FB89B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16437, 0LL);
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

  if ( (byte_40FB894 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18558, defArray);
    byte_40FB894 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18558, defArray, v3);
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
  if ( (byte_40FB89A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21067, method);
    byte_40FB89A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21067, 0LL, 0LL);
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

  if ( (byte_40FB898 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, method);
    byte_40FB898 = 1;
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

  if ( (byte_40FB88B & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, method);
    byte_40FB88B = 1;
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

  if ( (byte_40FB899 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6726, method);
    byte_40FB899 = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6726, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_40FB88A & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, method);
    byte_40FB88A = 1;
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


bool __fastcall TreasureDvcEntity__IsRandomTD_27984484(
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

  if ( (byte_40FB895 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, method);
    byte_40FB895 = 1;
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

  if ( (byte_40FB885 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FB885 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_40FB886 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, checkKey);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v8);
    byte_40FB886 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
             (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)script,
             (const MethodInfo_2DA3824 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_B170D4();
    System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
      &v14,
      Keys,
      (const MethodInfo_22C7174 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
              &v14,
              (const MethodInfo_26BE3A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__) )
    {
      if ( !v14.fields.currentKey )
        sub_B170D4();
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
      (const MethodInfo_26BE3A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  DataManager_o *v20; // x0
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v22; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v24; // x24
  System_String_o *v25; // x0
  Il2CppObject *name; // x23
  System_String_o *v27; // x25
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x0
  __int64 v37; // x1
  MethodInfo *v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_o *Detail_27982440; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t gaugeCount; // w8
  bool result; // w0
  LocalizationManager_c *v53; // x0
  System_String_o *unknownNameText; // x1
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB884 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdName);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B16FFC(&StringLiteral_9353, v16);
    sub_B16FFC(&StringLiteral_9354, v17);
    byte_40FB884 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AAFCFC(v19);
  v20 = **(DataManager_o ***)(v19 + 184);
  if ( !v20
    || (MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        v20,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = TreasureDvcLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.id, lv, v22);
  *maxLv = this->fields.maxLv;
  v24 = Entity;
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9353, 0LL);
    v29 = System_String__Format(v36, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9354, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v27 = v25;
    v55 = lv;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    v29 = System_String__Format_43739268(v27, name, v28, 0LL);
  }
  *tdName = v29;
  sub_B16F98((BattleServantConfConponent_o *)tdName, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  if ( v24 )
  {
    Detail_27982440 = TreasureDvcLvEntity__getDetail_27982440(v24, lv, v38);
    *tdExplanation = Detail_27982440;
    sub_B16F98(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)Detail_27982440,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    gaugeCount = v24->fields.gaugeCount;
    result = 1;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v37);
      byte_40F87E5 = 1;
    }
    v53 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v53 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v53->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_B16F98(
      (BattleServantConfConponent_o *)tdExplanation,
      (System_Int32_array **)unknownNameText,
      (System_String_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43);
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
  if ( (byte_40FB892 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18677, *(_QWORD *)&limit);
    byte_40FB892 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_18677, v4, 0LL);
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
  __int64 v11; // x2
  int32_t max_length; // w8

  if ( (byte_40FB891 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, keyGroupSeqId);
    byte_40FB891 = 1;
  }
  v7 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&index);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_B170D4();
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(ScriptIntArrayParam, v10, v11);
    sub_B170A0();
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
  __int64 v19; // x3
  __int64 v20; // x4
  WeightRate_int__o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  unsigned __int64 v26; // x22
  int32_t v27; // w1

  if ( (byte_40FB88F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, keySeqId);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v7);
    sub_B16FFC(&Method_WeightRate_int__getData__, v8);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v10);
    sub_B16FFC(&WeightRate_int__TypeInfo, v11);
    byte_40FB88F = 1;
  }
  v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, keyWeight);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v12, v13);
  v16 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v12, v15);
  v21 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v17, v18, v19, v20);
  WeightRate_int____ctor(v21, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v25 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( v16 )
    {
      if ( v26 >= v16->max_length || v26 >= (unsigned int)v25 )
      {
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
      if ( !v21 )
        break;
      WeightRate_int___setWeight(
        v21,
        v16->m_Items[v26 + 1],
        ScriptIntArrayParam->m_Items[v26 + 1],
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      LODWORD(v25) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_11;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_11:
  if ( !v21 )
    goto LABEL_14;
  v27 = UnityEngine_Random__Range_34843248(0, v21->fields.totalweight, 0LL);
  return WeightRate_int___getData(v21, v27, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int v12; // w8
  __int64 v13; // x23
  const MethodInfo *v14; // x4
  __int64 v15; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x20
  int32_t v20; // w22
  TreasureDvcEntity_c *v21; // x0
  int32_t v22; // w24
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v24; // x4
  System_String_o *v25; // x25
  const MethodInfo *v26; // x4
  System_String_o *v27; // x24
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v31; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v33; // x3
  __int64 v34; // [xsp+8h] [xbp-58h]

  if ( (byte_40FB88D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, v7);
    byte_40FB88D = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v9 = sub_B17014(int___TypeInfo, 2LL, *(_QWORD *)&actSetId);
  if ( !v9 )
    goto LABEL_31;
  v12 = *(_DWORD *)(v9 + 24);
  v13 = v9;
  if ( !v12 || (*(_DWORD *)(v9 + 32) = limitCount, v12 == 1) )
  {
LABEL_30:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  *(_DWORD *)(v9 + 36) = -1;
  if ( !actSetId )
  {
    v9 = sub_B17014(int___TypeInfo, 1LL, v11);
    v15 = v9;
    goto LABEL_12;
  }
  v9 = sub_B17014(int___TypeInfo, 2LL, v11);
  if ( !v9 )
LABEL_31:
    sub_B170D4();
  v15 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_30;
  *(_DWORD *)(v9 + 32) = actSetId;
LABEL_12:
  v16 = *(_QWORD *)(v13 + 24);
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v34 = v13;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_30;
      if ( !v15 )
        goto LABEL_31;
      v18 = *(_QWORD *)(v15 + 24);
      if ( (int)v18 >= 1 )
        break;
LABEL_25:
      ++v17;
      LODWORD(v16) = *(_DWORD *)(v34 + 24);
      if ( (__int64)v17 >= (int)v16 )
        return this->fields.cacheRandomSeqId;
    }
    v19 = 0LL;
    v20 = *(_DWORD *)(v34 + 4 * v17 + 32);
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
        goto LABEL_30;
      v21 = TreasureDvcEntity_TypeInfo;
      v22 = *(_DWORD *)(v15 + 32 + 4 * v19);
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v21 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v21,
                      v21->static_fields->KEY_RANDOM_SEQ_ID,
                      v20,
                      v22,
                      v14);
      v25 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)AddLimitKey,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
              v20,
              v22,
              v24);
      v27 = TreasureDvcEntity__makeAddLimitKey(
              (TreasureDvcEntity_o *)v25,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v20,
              v22,
              v26);
      v9 = TreasureDvcEntity__checkScript(this, AddLimitKey, v28);
      if ( (v9 & 1) != 0 )
      {
        v9 = TreasureDvcEntity__checkScript(this, v25, v11);
        if ( (v9 & 1) != 0 )
          break;
      }
      LODWORD(v18) = *(_DWORD *)(v15 + 24);
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_25;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, AddLimitKey, v25, v29);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, AddLimitKey, RandomSeqId, v31);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v27, RandomSeqIndex, v33);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_int__o *v17; // x21
  __int64 v18; // x2
  _DWORD *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w8
  _DWORD *v23; // x25
  const MethodInfo *v24; // x4
  _DWORD *v25; // x23
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  __int64 v28; // x8
  unsigned __int64 v29; // x26
  int32_t v30; // w24
  TreasureDvcEntity_c *v31; // x0
  int32_t v32; // w25
  System_String_o *AddLimitKey; // x0
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_T__o *ScriptIntArrayParam; // x0
  _DWORD *v37; // [xsp+0h] [xbp-60h]
  unsigned __int64 v38; // [xsp+8h] [xbp-58h]

  if ( (byte_40FB88E & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, v11);
    byte_40FB88E = 1;
  }
  v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&actSetId);
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = (_DWORD *)sub_B17014(int___TypeInfo, 2LL, v18);
  if ( !v19 )
    goto LABEL_27;
  v22 = v19[6];
  v23 = v19;
  if ( !v22 )
    goto LABEL_26;
  v19[8] = limitCount;
  if ( v22 == 1 )
    goto LABEL_26;
  v19[9] = -1;
  if ( actSetId )
  {
    v19 = (_DWORD *)sub_B17014(int___TypeInfo, 2LL, v21);
    if ( !v19 )
      goto LABEL_27;
    v25 = v19;
    if ( !v19[6] )
      goto LABEL_26;
    v19[8] = actSetId;
  }
  else
  {
    v19 = (_DWORD *)sub_B17014(int___TypeInfo, 1LL, v21);
    v25 = v19;
  }
  v26 = *((_QWORD *)v23 + 3);
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v37 = v23;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_26;
      v38 = v27;
      if ( !v25 )
        goto LABEL_27;
      v28 = *((_QWORD *)v25 + 3);
      if ( (int)v28 >= 1 )
        break;
LABEL_23:
      LODWORD(v26) = v37[6];
      v27 = v38 + 1;
      if ( (__int64)(v38 + 1) >= (int)v26 )
        goto LABEL_24;
    }
    v29 = 0LL;
    v30 = v37[v27 + 8];
    while ( v29 < (unsigned int)v28 )
    {
      v31 = TreasureDvcEntity_TypeInfo;
      v32 = v25[v29 + 8];
      if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v31 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v31,
                      v31->static_fields->KEY_RANDOM_SEQ_ID,
                      v30,
                      v32,
                      v24);
      ScriptIntArrayParam = (System_Collections_Generic_IEnumerable_T__o *)TreasureDvcEntity__getScriptIntArrayParam(
                                                                             this,
                                                                             AddLimitKey,
                                                                             v12,
                                                                             v34);
      if ( !v17 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v17,
        ScriptIntArrayParam,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      LODWORD(v28) = v25[6];
      if ( (__int64)++v29 >= (int)v28 )
        goto LABEL_23;
    }
LABEL_26:
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
LABEL_24:
  if ( !v17 )
LABEL_27:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x2
  int max_length; // w9
  System_Int32_array *v13; // x8
  __int64 v14; // x0

  if ( (byte_40FB890 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, keySeqId);
    byte_40FB890 = 1;
  }
  v7 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&seqId);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B170D4();
  max_length = ScriptIntArrayParam->max_length;
  v13 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v14) = -1;
  }
  else
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
      {
        sub_B17100(v14, v10, v11);
        sub_B170A0();
      }
      if ( v13->m_Items[(int)v14 + 1] == seqId )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (int)v14 >= max_length )
        goto LABEL_9;
    }
  }
  return v14;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB893 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21663, method);
    byte_40FB893 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21663, 0LL, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  TreasureDvcEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_40FB887 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FB887 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (TreasureDvcEntity_o *)sub_B173C8(Item);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v11, v12, v13, v14);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  UnityEngine_Purchasing_IStoreExtension_o *v22; // x19
  TreasureDvcEntity___c_c *v23; // x8
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__28_0; // x20
  System_Collections_Generic_List_object__c *v26; // x1
  __int64 v27; // x11
  __int64 v28; // x9
  Il2CppObject *v29; // x21
  struct TreasureDvcEntity___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_int__o *v37; // x0

  v4 = defVal;
  if ( (byte_40FB888 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_B16FFC(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__, v13);
    sub_B16FFC(&TreasureDvcEntity___c_TypeInfo, v14);
    byte_40FB888 = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return v4;
  script = this->fields.script;
  if ( !script )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_B170BC(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_B170BC(Item, int___TypeInfo);
  v18 = this->fields.script;
  if ( !v18 )
    goto LABEL_26;
  v22 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v18,
          (System_Type_o *)key,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v23 = TreasureDvcEntity___c_TypeInfo;
  if ( (BYTE3(TreasureDvcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v23 = TreasureDvcEntity___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__28_0;
  v26 = System_Collections_Generic_List_object__TypeInfo;
  if ( v22 )
  {
    v27 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (System_Collections_Generic_List_object__c *)v22->klass->_2.typeHierarchy[v27 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_19;
    }
  }
  if ( !_9__28_0 )
    goto LABEL_20;
  if ( !v22 )
    goto LABEL_26;
  v28 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v28
    || (System_Collections_Generic_List_object__c *)v22->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_19:
    sub_B173C8(v22);
LABEL_20:
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v26,
                                                                       v19,
                                                                       v20,
                                                                       v21);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__28_0,
      v29,
      Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v30 = TreasureDvcEntity___c_TypeInfo->static_fields;
    v30->__9__28_0 = (struct System_Converter_object__int__o *)_9__28_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( v22 )
      goto LABEL_24;
LABEL_26:
    sub_B170D4();
  }
LABEL_24:
  v37 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)v22,
                                                    (System_Converter_T__TOutput__o *)_9__28_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v37 )
    goto LABEL_26;
  return System_Collections_Generic_List_int___ToArray(
           v37,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB889 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&limit);
    sub_B16FFC(&StringLiteral_20142, v5);
    byte_40FB889 = 1;
  }
  v10 = limit;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v7 = System_String__Format((System_String_o *)StringLiteral_20142, v6, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v7, this->fields.seqId, v8);
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
  __int64 v11; // x2

  if ( (byte_40FB897 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, key);
    byte_40FB897 = 1;
  }
  v7 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&commandType);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_B170D4();
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
  {
    sub_B17100(ScriptIntArrayParam, v10, v11);
    sub_B170A0();
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
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  __int64 v14; // x22
  unsigned __int64 v15; // x24
  TreasureDvcEntity_o *v16; // x0
  int32_t v17; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_40FB896 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, v7);
    byte_40FB896 = 1;
  }
  id = this->fields.id;
  v9 = sub_B17014(int___TypeInfo, 2LL, *(_QWORD *)&commandType);
  if ( !v9 )
    sub_B170D4();
  v13 = *(_QWORD *)(v9 + 24);
  v14 = v9;
  if ( !(_DWORD)v13 || (*(_DWORD *)(v9 + 32) = limitCount, (_DWORD)v13 == 1) )
  {
LABEL_16:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  *(_DWORD *)(v9 + 36) = -1;
  if ( (int)v13 < 1 )
    return id;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v13 )
      goto LABEL_16;
    v16 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v17 = *(_DWORD *)(v14 + 32 + 4 * v15);
    if ( (BYTE3(TreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v16 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v16,
                    (System_String_o *)v16[1].fields.script->fields.entries,
                    v17,
                    0,
                    v12);
    v9 = TreasureDvcEntity__checkScript(this, AddLimitKey, v19);
    if ( (v9 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v20);
    LODWORD(v13) = *(_DWORD *)(v14 + 24);
    if ( (__int64)++v15 >= (int)v13 )
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
  if ( (byte_40FB88C & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity_TypeInfo, baseKey);
    sub_B16FFC(&StringLiteral_23564, v8);
    sub_B16FFC(&StringLiteral_15842, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FB88C = 1;
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
      v14 = System_String__Concat_43743732(KET_SUFFIX_ACTSET, v13, 0LL);
      v6 = v20;
      v15 = (Il2CppObject *)v14;
    }
    else
    {
      v15 = (Il2CppObject *)StringLiteral_1;
    }
    if ( v6 == -1 )
    {
      v17 = (Il2CppObject *)StringLiteral_1;
    }
    else
    {
      v16 = System_Int32__ToString((int32_t)&v20, 0LL);
      v17 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)StringLiteral_15842, v16, 0LL);
    }
    return System_String__Format_43744796((System_String_o *)StringLiteral_23564, v7, v17, v15, 0LL);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F792D & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcEntity___c_TypeInfo, v1);
    byte_40F792D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TreasureDvcEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TreasureDvcEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F792E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F792E = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}