void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct TreasureDvcEntity_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct TreasureDvcEntity_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct TreasureDvcEntity_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct TreasureDvcEntity_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_48E3231 & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_19584/*"groupSeqIDs"*/, v4);
    sub_1B00CCC(&StringLiteral_18302/*"delayEnd"*/, v5);
    sub_1B00CCC(&StringLiteral_16291/*"_actSet"*/, v6);
    sub_1B00CCC(&StringLiteral_22469/*"randomWeights"*/, v7);
    sub_1B00CCC(&StringLiteral_23517/*"tdTypeChangeIDs"*/, v8);
    sub_1B00CCC(&StringLiteral_22468/*"randomSeqIds"*/, v9);
    byte_48E3231 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_22468/*"randomSeqIds"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_22468/*"randomSeqIds"*/,
    v2,
    v3);
  v10 = StringLiteral_22469/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22469/*"randomWeights"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v10, v12, v13);
  v14 = StringLiteral_19584/*"groupSeqIDs"*/;
  v15 = TreasureDvcEntity_TypeInfo->static_fields;
  v15->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19584/*"groupSeqIDs"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->KEY_GROUP_SEQ_ID, v14, v16, v17);
  v18 = StringLiteral_23517/*"tdTypeChangeIDs"*/;
  v19 = TreasureDvcEntity_TypeInfo->static_fields;
  v19->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_23517/*"tdTypeChangeIDs"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19->KEY_TD_TYPE_CHANGE_ID, v18, v20, v21);
  v22 = StringLiteral_18302/*"delayEnd"*/;
  v23 = TreasureDvcEntity_TypeInfo->static_fields;
  v23->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18302/*"delayEnd"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v23->KEY_TD_DELAY_END, v22, v24, v25);
  v26 = StringLiteral_16291/*"_actSet"*/;
  v27 = TreasureDvcEntity_TypeInfo->static_fields;
  v27->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16291/*"_actSet"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v27->KET_SUFFIX_ACTSET, v26, v28, v29);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E3230 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_int___ctor__, method);
    byte_48E3230 = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2FE684C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E322F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_16709/*"assumedEffectId"*/, method);
    byte_48E322F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16709/*"assumedEffectId"*/, 0LL);
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

  if ( (byte_48E3228 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_19046/*"excludeTdChangeTypes"*/, defArray);
    byte_48E3228 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19046/*"excludeTdChangeTypes"*/, defArray, v3);
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
  if ( (byte_48E322E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21859/*"npNameFileSuffix"*/, method);
    byte_48E322E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21859/*"npNameFileSuffix"*/, 0LL, 0LL);
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

  if ( (byte_48E322C & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, method);
    byte_48E322C = 1;
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

  if ( (byte_48E321F & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, method);
    byte_48E321F = 1;
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

  if ( (byte_48E322D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6715/*"ForcedOnlyFirstOneSpeed"*/, method);
    byte_48E322D = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6715/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_48E321E & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, method);
    byte_48E321E = 1;
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


bool __fastcall TreasureDvcEntity__IsRandomTD_38669656(
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

  if ( (byte_48E3229 & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, method);
    byte_48E3229 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
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

  if ( (byte_48E3219 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_48E3219 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_48E321A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, checkKey);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v6);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v8);
    byte_48E321A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_308D728 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1B00F28(0LL, v11);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v16,
      Keys,
      (const MethodInfo_32E94C4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v16,
              (const MethodInfo_318F1F8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v13 )
        break;
      if ( !v16.fields._currentKey )
        sub_1B00F28(0LL, v12);
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
      (const MethodInfo_318F1F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v13 && v14 == 5;
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
  __int64 v18; // x0
  __int64 v19; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v21; // x3
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v23; // x23
  System_String_o *v24; // x25
  Il2CppObject *name; // x24
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int32_t v36; // w3
  System_String_o *Detail_38667732; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t gaugeCount; // w8
  LocalizationManager_c *v41; // x0
  System_String_o *unknownNameText; // x1
  int32_t v44; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48E3218 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdName);
    sub_1B00CCC(&int_TypeInfo, v13);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1B00CCC(&StringLiteral_9226/*"NP_NAME"*/, v16);
    sub_1B00CCC(&StringLiteral_9227/*"NP_NAME_LEVEL"*/, v17);
    byte_48E3218 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1B52BA8(v18);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1B52BA8(v19);
  MasterData_object = **(Il2CppObject ***)(v19 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_1B00F28(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, v21);
  *maxLv = this->fields.maxLv;
  v23 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9226/*"NP_NAME"*/, 0LL);
    v30 = System_String__Format(v33, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9227/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v44 = lv;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v26, v27, v28);
    v30 = System_String__Format_60340120(v24, name, v29, 0LL);
  }
  *tdName = v30;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)tdName, (int32_t)v30, v31, v32);
  if ( v23 )
  {
    Detail_38667732 = TreasureDvcLvEntity__getDetail_38667732(v23, lv, v35);
    *tdExplanation = Detail_38667732;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)tdExplanation, (int32_t)Detail_38667732, v38, v39);
    gaugeCount = v23->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_48DE045 )
    {
      sub_1B00CCC(&LocalizationManager_TypeInfo, v34);
      byte_48DE045 = 1;
    }
    v41 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v41->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)tdExplanation, (int32_t)unknownNameText, (int32_t)v35, v36);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v23 != 0LL;
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
  if ( (byte_48E3226 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_19184/*"fixAppearanceId_"*/, *(_QWORD *)&limit);
    byte_48E3226 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_19184/*"fixAppearanceId_"*/, v4, 0LL);
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

  if ( (byte_48E3225 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, keyGroupSeqId);
    byte_48E3225 = 1;
  }
  v7 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_1B00F28(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1B00F30(ScriptIntArrayParam, v10);
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

  if ( (byte_48E3223 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, keySeqId);
    sub_1B00CCC(&Method_WeightRate_int___ctor__, v7);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v8);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v9);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v10);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v11);
    byte_48E3223 = 1;
  }
  v12 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v12, v13);
  v16 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v12, v15);
  v17 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v17, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v20 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( v16 )
    {
      if ( v21 >= v16->max_length || v21 >= (unsigned int)v20 )
        sub_1B00F30(v18, v19);
      if ( !v17 )
        break;
      WeightRate_int___setWeight(
        v17,
        v16->m_Items[v21 + 1],
        ScriptIntArrayParam->m_Items[v21 + 1],
        (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      LODWORD(v20) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_11;
    }
LABEL_14:
    sub_1B00F28(v18, v19);
  }
LABEL_11:
  if ( !v17 )
    goto LABEL_14;
  v22 = UnityEngine_Random__Range_68037396(0, v17->fields.totalweight, 0LL);
  return WeightRate_int___getData(v17, v22, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
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
  int v11; // w8
  __int64 v12; // x20
  const MethodInfo *v13; // x4
  __int64 v14; // x21
  __int64 v15; // x8
  unsigned __int64 v16; // x26
  __int64 v17; // x8
  int32_t v18; // w22
  unsigned __int64 v19; // x29
  TreasureDvcEntity_c *v20; // x0
  int32_t v21; // w24
  TreasureDvcEntity_o *AddLimitKey; // x23
  const MethodInfo *v23; // x4
  TreasureDvcEntity_o *v24; // x25
  const MethodInfo *v25; // x4
  System_String_o *v26; // x24
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v31; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v33; // x3

  if ( (byte_48E3221 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, v7);
    byte_48E3221 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v9 = sub_1B00D74(int___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_30;
  v11 = *(_DWORD *)(v9 + 24);
  v12 = v9;
  if ( !v11 || (*(_DWORD *)(v9 + 32) = limitCount, v11 == 1) )
LABEL_29:
    sub_1B00F30(v9, v10);
  *(_DWORD *)(v9 + 36) = -1;
  if ( !actSetId )
  {
    v9 = sub_1B00D74(int___TypeInfo, 1LL);
    v14 = v9;
    goto LABEL_12;
  }
  v9 = sub_1B00D74(int___TypeInfo, 2LL);
  if ( !v9 )
LABEL_30:
    sub_1B00F28(v9, v10);
  v14 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_29;
  *(_DWORD *)(v9 + 32) = actSetId;
LABEL_12:
  v15 = *(_QWORD *)(v12 + 24);
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        goto LABEL_29;
      if ( !v14 )
        goto LABEL_30;
      v17 = *(_QWORD *)(v14 + 24);
      if ( (int)v17 >= 1 )
        break;
LABEL_24:
      LODWORD(v15) = *(_DWORD *)(v12 + 24);
      if ( (__int64)++v16 >= (int)v15 )
        return this->fields.cacheRandomSeqId;
    }
    v18 = *(_DWORD *)(v12 + 4 * v16 + 32);
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_29;
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
      v9 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v27);
      if ( (v9 & 1) != 0 )
      {
        v9 = TreasureDvcEntity__checkScript(this, (System_String_o *)v24, v28);
        if ( (v9 & 1) != 0 )
          break;
      }
      LODWORD(v17) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_24;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v24, v29);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, RandomSeqId, v31);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v26, RandomSeqIndex, v33);
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
  System_Int32_array *v12; // x21
  System_Collections_Generic_List_int__o *v13; // x20
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v15; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *v17; // x22
  const MethodInfo *v18; // x4
  System_Int32_array *v19; // x23
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  __int64 v22; // x8
  unsigned __int64 v23; // x22
  int32_t v24; // w24
  TreasureDvcEntity_c *v25; // x0
  int32_t v26; // w25
  System_String_o *AddLimitKey; // x0
  const MethodInfo *v28; // x3
  System_Int32_array *v30; // [xsp+8h] [xbp-68h]

  if ( (byte_48E3222 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, v11);
    byte_48E3222 = 1;
  }
  v12 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  v13 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  ScriptIntArrayParam = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 2LL);
  if ( !ScriptIntArrayParam )
    goto LABEL_26;
  max_length = ScriptIntArrayParam->max_length;
  v17 = ScriptIntArrayParam;
  if ( !max_length )
    goto LABEL_25;
  ScriptIntArrayParam->m_Items[1] = limitCount;
  if ( max_length == 1 )
    goto LABEL_25;
  ScriptIntArrayParam->m_Items[2] = -1;
  if ( actSetId )
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 2LL);
    if ( !ScriptIntArrayParam )
      goto LABEL_26;
    v19 = ScriptIntArrayParam;
    if ( !ScriptIntArrayParam->max_length )
      goto LABEL_25;
    ScriptIntArrayParam->m_Items[1] = actSetId;
  }
  else
  {
    ScriptIntArrayParam = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
    v19 = ScriptIntArrayParam;
  }
  v20 = *(_QWORD *)&v17->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v30 = v17;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_25;
      if ( !v19 )
        goto LABEL_26;
      v22 = *(_QWORD *)&v19->max_length;
      if ( (int)v22 >= 1 )
        break;
LABEL_22:
      ++v21;
      LODWORD(v20) = v30->max_length;
      if ( (__int64)v21 >= (int)v20 )
        goto LABEL_23;
    }
    v23 = 0LL;
    v24 = v30->m_Items[v21 + 1];
    while ( v23 < (unsigned int)v22 )
    {
      v25 = TreasureDvcEntity_TypeInfo;
      v26 = v19->m_Items[v23 + 1];
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v25 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                      (TreasureDvcEntity_o *)v25,
                      v25->static_fields->KEY_RANDOM_SEQ_ID,
                      v24,
                      v26,
                      v18);
      ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, AddLimitKey, v12, v28);
      if ( !v13 )
        goto LABEL_26;
      System_Collections_Generic_List_int___AddRange(
        v13,
        (System_Collections_Generic_IEnumerable_T__o *)ScriptIntArrayParam,
        (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      LODWORD(v22) = v19->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_22;
    }
LABEL_25:
    sub_1B00F30(ScriptIntArrayParam, v15);
  }
LABEL_23:
  if ( !v13 )
LABEL_26:
    sub_1B00F28(ScriptIntArrayParam, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_48E3224 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, keySeqId);
    byte_48E3224 = 1;
  }
  v7 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B00F28(0LL, v10);
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
        sub_1B00F30(v13, v10);
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

  if ( (byte_48E3227 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_22532/*"relationBgmIds"*/, method);
    byte_48E3227 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22532/*"relationBgmIds"*/, 0LL, v2);
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
  if ( (byte_48E321B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B00CCC(&long_TypeInfo, v7);
    byte_48E321B = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B00F28(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B011E8(script);
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
  System_Converter_object__int__o *_9__28_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v22; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  TreasureDvcEntity_o *v26; // x0
  int32_t v27; // w1
  const MethodInfo *v28; // x2

  if ( (byte_48E321C & 1) == 0 )
  {
    sub_1B00CCC(&System_Converter_object__int__TypeInfo, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B00CCC(&int___TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B00CCC(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__, v12);
    sub_1B00CCC(&TreasureDvcEntity___c_TypeInfo, v13);
    byte_48E321C = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1B00E08(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1B00E08(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v18 = (System_Collections_Generic_List_object__o *)script;
  v19 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v19 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__28_0 = v19->static_fields->__9__28_0;
  if ( !v18
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v18->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__28_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = TreasureDvcEntity___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__28_0 = (System_Converter_object__int__o *)sub_1B00F18(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__28_0,
        v22,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
        0LL);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = _9__28_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v24, v25);
    }
    if ( v18 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v18,
                                                                            (System_Converter_T__TOutput__o *)_9__28_0,
                                                                            (const MethodInfo_2C9D7DC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1B00F28(script, v14);
  }
  sub_1B011E8(v18);
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

  if ( (byte_48E321D & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&limit);
    sub_1B00CCC(&StringLiteral_20824/*"limitSeqId_{0}"*/, v7);
    byte_48E321D = 1;
  }
  v12 = limit;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20824/*"limitSeqId_{0}"*/, v8, 0LL);
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

  if ( (byte_48E322B & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, key);
    byte_48E322B = 1;
  }
  v7 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B00F28(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
    sub_1B00F30(ScriptIntArrayParam, v10);
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

  if ( (byte_48E322A & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&limitCount);
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, v7);
    byte_48E322A = 1;
  }
  id = this->fields.id;
  v9 = sub_1B00D74(int___TypeInfo, 2LL);
  if ( !v9 )
    sub_1B00F28(0LL, v10);
  v12 = *(_QWORD *)(v9 + 24);
  v13 = v9;
  if ( !(_DWORD)v12 || (*(_DWORD *)(v9 + 32) = limitCount, (_DWORD)v12 == 1) )
LABEL_15:
    sub_1B00F30(v9, v10);
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
                    (System_String_o *)v15[1].fields.script->fields._entries,
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
  if ( (byte_48E3220 & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity_TypeInfo, baseKey);
    sub_1B00CCC(&StringLiteral_24744/*"{0}{1}{2}"*/, v8);
    sub_1B00CCC(&StringLiteral_15891/*"_"*/, v9);
    sub_1B00CCC(&StringLiteral_1/*""*/, v10);
    byte_48E3220 = 1;
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
      v14 = System_String__Concat_60325748(KET_SUFFIX_ACTSET, v13, 0LL);
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
      v17 = (Il2CppObject *)System_String__Concat_60325748((System_String_o *)StringLiteral_15891/*"_"*/, v16, 0LL);
    }
    return System_String__Format_60340188((System_String_o *)StringLiteral_24744/*"{0}{1}{2}"*/, v7, v17, v15, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E3232 & 1) == 0 )
  {
    sub_1B00CCC(&TreasureDvcEntity___c_TypeInfo, v1);
    byte_48E3232 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_48E3233 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, x);
    byte_48E3233 = 1;
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