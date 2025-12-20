void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2AB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2AB = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, v2);
}


bool BattleDeckServantData__ExistsScript(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.npcId, 0);
}


int32_t BattleDeckServantData__GetAiResetTiming(
        BattleDeckServantData_o *this,
        int32_t defTiming,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2F2C5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16803/*"aiResetTiming"*/);
    byte_4D2F2C5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16803/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F2E6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17001/*"assumedEffectId"*/);
    byte_4D2F2E6 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_17001/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17907/*"changePersonality"*/);
    byte_4D2F2F1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17907/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17908/*"changePolicy"*/);
    byte_4D2F2F0 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17908/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4D2F2CE & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_long___);
    sub_1C94098(&StringLiteral_23651/*"shiftPosition"*/);
    byte_4D2F2CE = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23651/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_3189950 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2EC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18754/*"dispBreakShift"*/);
    byte_4D2F2EC = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18754/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2EE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18757/*"dispLimitCount"*/);
    byte_4D2F2EE = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18757/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F2F8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18755/*"dispChangeSkillIds"*/);
    byte_4D2F2F8 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18755/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F300 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18148/*"colorType"*/);
    byte_4D2F300 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18148/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4D2F303 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string__object___);
    sub_1C94098(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&StringLiteral_19183/*"enemyTargetTouchArea"*/);
    byte_4D2F303 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19183/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_318A1E8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v4,
                                                            (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F306 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19193/*"entryOrder"*/);
    byte_4D2F306 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19193/*"entryOrder"*/,
           0x7FFFFFFF,
           0);
}


int32_t BattleDeckServantData__GetFollowerType(
        BattleDeckServantData_o *this,
        int32_t oldFollowerType,
        const MethodInfo *method)
{
  if ( this->fields.followerType >= 0 )
    return this->fields.followerType;
  else
    return oldFollowerType;
}


int32_t BattleDeckServantData__GetHideStatePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20134/*"hidePersonality"*/);
    byte_4D2F2F6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20134/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20135/*"hidePolicy"*/);
    byte_4D2F2F5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20135/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20132/*"hideAttri"*/);
    byte_4D2F2F7 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20132/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2ED & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20464/*"imageSvtId"*/);
    byte_4D2F2ED = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20464/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2AA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2AA = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  BattleMotionSelectType_array *v4; // x19

  if ( (byte_4D2F30D & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string__object___);
    sub_1C94098(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&StringLiteral_21864/*"motionSelectTypeByGender"*/);
    byte_4D2F30D = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_21864/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_318A1E8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v4->obj,
                                             (const MethodInfo_320C67C *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2E5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9534/*"NoSkipDeadFirstId"*/);
    byte_4D2F2E5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9534/*"NoSkipDeadFirstId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 HasKey; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4D2F2FE & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&StringLiteral_12852/*"SetFriendShipRankFromUserServant"*/);
    sub_1C94098(&StringLiteral_6824/*"ForceSetFriendShipRank"*/);
    byte_4D2F2FE = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6824/*"ForceSetFriendShipRank"*/,
         0) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6824/*"ForceSetFriendShipRank"*/,
             0,
             0);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12852/*"SetFriendShipRankFromUserServant"*/,
             0);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1C942F0(HasKey, v7);
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v10, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4D2F2FF & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string__object___);
    sub_1C94098(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&StringLiteral_22799/*"overwriteShiftIcon"*/);
    byte_4D2F2FF = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_22799/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_318A1E8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22747/*"overwriteBreakShiftVoice"*/);
    byte_4D2F2F9 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22747/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22784/*"overwritePersonality"*/);
    byte_4D2F2F3 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22784/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22786/*"overwritePolicy"*/);
    byte_4D2F2F2 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22786/*"overwritePolicy"*/, 0, v2);
}


EnemyScriptParam_OverwriteShadowData_array *BattleDeckServantData__GetOverwriteShadowDataArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x0
  long double inited; // q0
  Il2CppObject *v5; // x19
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4D2F2E1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_1C94098(&Method_BasicHelper_GetValue_string__object___);
    sub_1C94098(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&StringLiteral_10109/*"OverwriteShadow"*/);
    byte_4D2F2E1 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10109/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_318A1E8 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v5 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v5,
                                                           (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v8 )
    {
      sub_1C6A188(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6A12C(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v10 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2F4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22745/*"overwriteAttri"*/);
    byte_4D2F2F4 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22745/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F302 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23329/*"revivalTarget"*/);
    byte_4D2F302 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23329/*"revivalTarget"*/,
           0,
           0);
}


System_String_array *BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_object__c *v10; // x10
  System_Collections_Generic_List_object__o *v11; // x20
  void *v12; // x0
  System_Converter_TInput__TOutput__o *v13; // x19
  Il2CppObject *v14; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2F2E7 & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__string__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    byte_4D2F2E7 = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          v10 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1];
          v11 = v10 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v10 == System_Collections_Generic_List_object__TypeInfo )
          {
            v12 = BattleDeckServantData___c_TypeInfo;
            if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v12 = BattleDeckServantData___c_TypeInfo;
            }
            v13 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)v12 + 23) + 40LL);
            if ( !v13 )
            {
              if ( !*((_DWORD *)v12 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v12);
                v12 = BattleDeckServantData___c_TypeInfo;
              }
              v14 = (Il2CppObject *)**((_QWORD **)v12 + 23);
              v13 = (System_Converter_TInput__TOutput__o *)sub_1C942E4(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v13,
                v14,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__,
                0);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__79_0 = (struct System_Converter_object__string__o *)v13;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__79_0,
                (int32_t)v13,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
            }
            if ( !v11
              || (v12 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v11,
                          (System_Converter_T__TOutput__o *)v13,
                          (const MethodInfo_30C0650 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0 )
            {
              sub_1C942F0(v12, v8);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v12,
                                            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F30A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22798/*"overwriteShift"*/);
    byte_4D2F30A = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22798/*"overwriteShift"*/,
           0,
           0);
}


int32_t BattleDeckServantData__GetStatusUiType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23917/*"statusUiType"*/);
    byte_4D2F2B6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23917/*"statusUiType"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2F2E8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24433/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4D2F2E8 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24433/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2E9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24434/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4D2F2E9 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24434/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2C4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24960/*"voicePatternId"*/);
    byte_4D2F2C4 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24960/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F307 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19193/*"entryOrder"*/);
    byte_4D2F307 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19193/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F304 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22505/*"notActiveEnemyMeshCollider"*/);
    byte_4D2F304 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22505/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsBreakShiftHp0(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2D1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17500/*"breakShiftHp0"*/);
    byte_4D2F2D1 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_17500/*"breakShiftHp0"*/, v2);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2D2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21141/*"isSkillShiftInfo"*/);
    byte_4D2F2D2 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21141/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2A9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2A9 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4D2F2FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&StringLiteral_7349/*"HideBattlePointGauge"*/);
    byte_4D2F2FD = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7349/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2EB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20133/*"hideClassSkill"*/);
    byte_4D2F2EB = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20133/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F308 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20136/*"hideStatusDuringEntry"*/);
    byte_4D2F308 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20136/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4D2F2FC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&StringLiteral_7565/*"IgnoreBattlePointUp"*/);
    byte_4D2F2FC = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7565/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F30B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20450/*"ignoreShiftWhiteFade"*/);
    byte_4D2F30B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20450/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2EA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21111/*"isLateUpdatePopup"*/);
    byte_4D2F2EA = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21111/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2F2DC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2F2DC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F30C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21864/*"motionSelectTypeByGender"*/);
    byte_4D2F30C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21864/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2E4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9527/*"NoAutoSkipDead"*/);
    byte_4D2F2E4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9527/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2FA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9531/*"NoMotion"*/);
    byte_4D2F2FA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9531/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2E3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9533/*"NoSkipDead"*/);
    byte_4D2F2E3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9533/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2AD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22463/*"noVoice"*/);
    byte_4D2F2AD = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22463/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2EF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21139/*"isShadow"*/);
    byte_4D2F2EF = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21139/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F309 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21140/*"isShowGrandEffect"*/);
    byte_4D2F309 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21140/*"isShowGrandEffect"*/,
           0);
}


System_Nullable_bool__o BattleDeckServantData__IsVoiceEnabledOnBreakShift(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  int32_t Script; // w0
  System_Nullable_bool__o *v6; // x0
  System_Nullable_bool__o *v8; // x0
  System_Nullable_bool__o v10; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_bool__o v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2F2FB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    sub_1C94098(&StringLiteral_19121/*"enableBreakShiftVoice"*/);
    byte_4D2F2FB = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19121/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19121/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F305 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24972/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_4D2F305 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24972/*"waitHpGaugeHideUntilDeadMotion"*/,
           0);
}


bool BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F2DE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19585/*"fieldMotionIds"*/);
    byte_4D2F2DE = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19585/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D2F2DF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17126/*"baseUniqueCameraId"*/);
    byte_4D2F2DF = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17126/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4D2F2DD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19787/*"fov"*/);
    byte_4D2F2DD = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19787/*"fov"*/,
                 0.0,
                 0);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


bool BattleDeckServantData__TryGetOverwriteShadowData(
        BattleDeckServantData_o *this,
        int32_t battleBgId,
        int32_t battleBgType,
        EnemyScriptParam_OverwriteShadowData_o **shadowData,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShadowDataArray; // x20
  System_Func_object__bool__o *v13; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2F2E2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_1C94098(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__);
    sub_1C94098(&BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
    byte_4D2F2E2 = 1;
  }
  v9 = sub_1C942E4(BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)shadowData, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return *shadowData != 0;
}


bool BattleDeckServantData__TryGetSequenceSelectTypeByGender(
        BattleDeckServantData_o *this,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v8; // x21
  System_Object_array *v9; // x0
  BattleDeckServantData___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__int__o *_9__105_0; // x22
  Il2CppObject *v13; // x23
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x21
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v26; // x22
  unsigned int v27; // w23
  Il2CppObject *v28; // x24

  if ( (byte_4D2F301 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string__object___);
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C94098(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C94098(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    sub_1C94098(&StringLiteral_23512/*"sequenceSelectTypeByGender"*/);
    byte_4D2F301 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23512/*"sequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_318A1E8 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v8 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__DeserializeArray_object_(
           v8,
           (const MethodInfo_320C67C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    v10 = BattleDeckServantData___c_TypeInfo;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v10 = BattleDeckServantData___c_TypeInfo;
    }
    _9__105_0 = (System_Func_object__int__o *)v10->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleDeckServantData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__105_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__105_0,
        v13,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__105_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__105_0,
        (int32_t)_9__105_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TKey__o *)_9__105_0,
                                                                 (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v22 = System_Linq_Enumerable__ToArray_object_(
            v21,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v22 )
LABEL_26:
      sub_1C942F0(Master_object, monitor_high);
    max_length = v22->max_length;
    if ( max_length < 1 )
    {
LABEL_23:
      LOBYTE(Value_object__object) = 0;
    }
    else
    {
      v26 = (CommonReleaseMaster_o *)Master_object;
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          sub_1C942F8(Master_object);
        v28 = v22->m_Items[v27];
        if ( !v28 )
          goto LABEL_26;
        monitor_high = HIDWORD(v28[1].monitor);
        if ( (int)monitor_high < 1 )
          break;
        if ( !v26 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v26, monitor_high, 0, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v22->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_23;
      }
      LOBYTE(Value_object__object) = 1;
      *genderSelectType = HIDWORD(v28[1].klass);
      *patternId = (int32_t)v28[1].monitor;
    }
  }
  return (char)Value_object__object;
}


bool BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4D2F2D4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19192/*"entryIndex"*/);
    byte_4D2F2D4 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19192/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19192/*"entryIndex"*/, entryIndex + 1, v5);
}


bool BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4D2F2C6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2F2C6 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C942F0(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) == val;
      }
      else
      {
        sub_1C9468C(Item);
        LOBYTE(v7) = BattleDeckServantData__isDeadStand(v12, v13);
      }
    }
    else
    {
      LOBYTE(v7) = 0;
    }
  }
  return (char)v7;
}


int32_t BattleDeckServantData__getBillBoardGroup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2BE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17238/*"billBoardGroup"*/);
    byte_4D2F2BE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17238/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2BC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17895/*"changeAttri"*/);
    byte_4D2F2BC = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17895/*"changeAttri"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getChangeList(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__55_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  BattleDeckServantData_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4D2F2D0 & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__getChangeList_b__55_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    sub_1C94098(&StringLiteral_17894/*"change"*/);
    byte_4D2F2D0 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_17894/*"change"*/,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17894/*"change"*/,
                                                                      (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  _9__55_0 = v7->static_fields->__9__55_0;
  if ( !v6
    || (v4 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__55_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__55_0 = (System_Converter_object__int__o *)sub_1C942E4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__55_0, v10, Method_BattleDeckServantData___c__getChangeList_b__55_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__55_0 = _9__55_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__55_0,
        (int32_t)_9__55_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__55_0,
                                                                          (const MethodInfo_30C054C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C942F0(Item, v4);
  }
  sub_1C9468C(v6);
  return (System_Int32_array *)BattleDeckServantData__IsBreakShiftHp0(v19, v20);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4D2F2D7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22529/*"npInfoEnable"*/);
    byte_4D2F2D7 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22529/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22529/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2BD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19181/*"enemyNameEffect"*/);
    byte_4D2F2BD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19181/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2BB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24438/*"treasureDeviceVoiceId"*/);
    byte_4D2F2BB = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24438/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20185/*"hpBarType"*/);
    byte_4D2F2B2 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20185/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_4D2F2D3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&StringLiteral_19716/*"forceDropItem"*/);
    byte_4D2F2D3 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_19716/*"forceDropItem"*/,
                   (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2C3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18615/*"deadChangePos"*/);
    byte_4D2F2C3 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18615/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4D2F2D8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22528/*"npCharge"*/);
    byte_4D2F2D8 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22528/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22528/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24107/*"svtVoiceId"*/);
    byte_4D2F2B9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24107/*"svtVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantChangeEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  ServantChangeEntity_o *v9; // x20
  const MethodInfo *v10; // x4
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2F2DB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_24113/*"svt_voice_id"*/);
    byte_4D2F2DB = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_24113/*"svt_voice_id"*/,
         v9->fields.priority,
         &value,
         v10) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v8);
  }
}


int32_t BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2AF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23158/*"raid"*/);
    byte_4D2F2AF = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23158/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23424/*"scale"*/);
    byte_4D2F2B8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23424/*"scale"*/, 100, v2);
}


int32_t BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4D2F2C9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2F2C9 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C9468C(Item);
  return BattleDeckServantData__ExistKillType(v13, v14);
}


int32_t BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2F2CB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2F2CB = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C942F0(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C9468C(value);
  return BattleDeckServantData__getUniqueID(v12, v13);
}


System_String_o *BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4D2F2CA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2F2CA = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9 )
    sub_1C942F0(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v9,
           (Il2CppObject *)key,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C9468C(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v12, v13);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23506/*"sendDamageForSuperBossId"*/);
    byte_4D2F2B5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23506/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  BattleDeckServantData_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4D2F2CF & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    sub_1C94098(&StringLiteral_23649/*"shiftClear"*/);
    byte_4D2F2CF = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23649/*"shiftClear"*/,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23649/*"shiftClear"*/,
                                                                      (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  _9__54_0 = v7->static_fields->__9__54_0;
  if ( !v6
    || (v4 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1C942E4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v10,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__54_0,
        (int32_t)_9__54_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_30C054C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C942F0(Item, v4);
  }
  sub_1C9468C(v6);
  return BattleDeckServantData__getChangeList(v19, v20);
}


System_Int32_array *BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        System_Int32_array_array **resList,
        int32_t shiftPhaseIdx,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Int32_array_array *v14; // x8
  System_Collections_Generic_List_object__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__52_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BattleDeckServantData_o *v28; // x0
  int64_t v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_4D2F2CD & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__getShiftList_b__52_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    sub_1C94098(&StringLiteral_23650/*"shiftPhase"*/);
    sub_1C94098(&StringLiteral_23647/*"shift"*/);
    byte_4D2F2CD = 1;
  }
  *resList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)resList, 0, shiftPhaseIdx, (int32_t)method, v4, v5, v6, v7);
  v11 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  if ( !v11 )
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)EntityScriptUtil__TryGet2DimensionalIntArray(
                                                                      v11,
                                                                      (System_String_o *)StringLiteral_23650/*"shiftPhase"*/,
                                                                      resList,
                                                                      0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           Item,
           (Il2CppObject *)StringLiteral_23647/*"shift"*/,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
      if ( Item )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23647/*"shift"*/,
                                                                            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v16 = (System_Collections_Generic_List_object__o *)Item;
        v17 = BattleDeckServantData___c_TypeInfo;
        if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
          v17 = BattleDeckServantData___c_TypeInfo;
        }
        _9__52_0 = v17->static_fields->__9__52_0;
        if ( v16 )
        {
          v13 = System_Collections_Generic_List_object__TypeInfo;
          naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
          if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
          {
            sub_1C9468C(v16);
            return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v28, v29, v30);
          }
        }
        if ( !_9__52_0 )
        {
          if ( !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = BattleDeckServantData___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v17->static_fields->__9;
          _9__52_0 = (System_Converter_object__int__o *)sub_1C942E4(System_Converter_object__int__TypeInfo);
          System_Converter_object__int____ctor(
            _9__52_0,
            v20,
            Method_BattleDeckServantData___c__getShiftList_b__52_0__,
            0);
          static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
          static_fields->__9__52_0 = _9__52_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__52_0,
            (int32_t)_9__52_0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
        }
        if ( v16 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                              v16,
                                                                              (System_Converter_T__TOutput__o *)_9__52_0,
                                                                              (const MethodInfo_30C054C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( Item )
            return System_Collections_Generic_List_int___ToArray(
                     (System_Collections_Generic_List_int__o *)Item,
                     (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
      }
LABEL_24:
      sub_1C942F0(Item, v13);
    }
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  }
  v14 = *resList;
  if ( !*resList )
    goto LABEL_24;
  if ( LODWORD(v14->max_length) <= shiftPhaseIdx )
    sub_1C942F8(Item);
  return v14->m_Items[shiftPhaseIdx];
}


int32_t BattleDeckServantData__getSummonNpcId(BattleDeckServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  BattleDeckServantData___c_c *v9; // x8
  System_Converter_object__int__o *_9__51_0; // x21
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w8

  if ( (byte_4D2F2CC & 1) == 0 )
  {
    sub_1C94098(&System_Converter_object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__);
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    sub_1C94098(&StringLiteral_17784/*"call"*/);
    byte_4D2F2CC = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v5,
         (Il2CppObject *)StringLiteral_17784/*"call"*/,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17784/*"call"*/,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v8 = (System_Collections_Generic_List_object__o *)Item;
    v9 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v9 = BattleDeckServantData___c_TypeInfo;
    }
    _9__51_0 = v9->static_fields->__9__51_0;
    if ( v8 )
    {
      v6 = System_Collections_Generic_List_object__TypeInfo;
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v8->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1C9468C(v8);
        goto LABEL_26;
      }
    }
    if ( !_9__51_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleDeckServantData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1C942E4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v12, Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0,
        (int32_t)_9__51_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !v8
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v8,
                   (System_Converter_T__TOutput__o *)_9__51_0,
                   (const MethodInfo_30C054C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0 )
    {
LABEL_24:
      sub_1C942F0(Item, v6);
    }
    v20 = *((_DWORD *)Item + 6);
    if ( v20 > index )
    {
      if ( v20 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1C942F8(Item);
    }
  }
  return -1;
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24079/*"superBoss"*/);
    byte_4D2F2B1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24079/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4D2F2D5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24436/*"treasureDeviceName"*/);
    byte_4D2F2D5 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24436/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24436/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4D2F2D6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24437/*"treasureDeviceRuby"*/);
    byte_4D2F2D6 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24437/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24437/*"treasureDeviceRuby"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


int32_t BattleDeckServantData__getUniqueID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return *(&this->fields.equipTarget2SkillChange + 1);
}


int64_t BattleDeckServantData__getUserServantID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool BattleDeckServantData__isAddition(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2BA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21083/*"isAddition"*/);
    byte_4D2F2BA = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_21083/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2AC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16897/*"appear"*/);
    byte_4D2F2AC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16897/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2A7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2A7 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2A6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2A6 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2A8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2A8 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2A5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21323/*"kill"*/);
    byte_4D2F2A5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21323/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2E0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21107/*"isHideShadow"*/);
    byte_4D2F2E0 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21107/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4D2F2C8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D2F2C8 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2B7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21391/*"leader"*/);
    byte_4D2F2B7 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21391/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2C2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23896/*"startPos"*/);
    byte_4D2F2C2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23896/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2BF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22349/*"multiTargetCore"*/);
    byte_4D2F2BF = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22349/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2C1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22350/*"multiTargetUnder"*/);
    byte_4D2F2C1 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22350/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2F2C0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22351/*"multiTargetUp"*/);
    byte_4D2F2C0 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22351/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2AE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23158/*"raid"*/);
    byte_4D2F2AE = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23158/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4D2F2C7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D2F2C7 = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2B4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23506/*"sendDamageForSuperBossId"*/);
    byte_4D2F2B4 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23506/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2B0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24079/*"superBoss"*/);
    byte_4D2F2B0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24079/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2F2B3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24081/*"superBossUi"*/);
    byte_4D2F2B3 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24081/*"superBossUi"*/, v2);
}


bool BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  Il2CppObject *Item; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 naturalAligment; // x11
  System_Collections_Generic_Dictionary_string__object__o *v21; // x9
  int32_t v23; // w1
  __int64 v24; // x10

  if ( (byte_4D2F2D9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&StringLiteral_24109/*"svt_change"*/);
    byte_4D2F2D9 = 1;
  }
  v10 = (Il2CppObject *)StringLiteral_24109/*"svt_change"*/;
  *dict = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)dict, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          v10,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
LABEL_20:
    sub_1C942F0(v12, v11);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v12,
           v10,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v21 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v21 = 0;
    }
    else
    {
      v21 = 0;
    }
    *dict = v21;
    v24 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)v24 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v24 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v23 = (int)Item;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
    *dict = 0;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)dict, v23, v14, v15, v16, v17, v18, v19);
  return *dict != 0;
}


// local variable allocation has failed, the output may be wrong!
bool BattleDeckServantData__tryGetSvtChangeInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t *value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *current; // x21
  __int64 v14; // x9
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x0
  int v24; // w1
  __int64 v25; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2F2DA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&StringLiteral_22998/*"priority"*/);
    sub_1C94098(&StringLiteral_24879/*"value"*/);
    byte_4D2F2DA = 1;
  }
  memset(&v28, 0, sizeof(v28));
  dict = 0;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dict,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
LABEL_25:
    sub_1C942F0(v10, v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_10:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v28.fields._current;
    }
    while ( !v28.fields._current );
    v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C9468C(v28.fields._current);
LABEL_27:
      sub_1C942F0(v15, v16);
    }
    v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v28.fields._current,
            (Il2CppObject *)StringLiteral_22998/*"priority"*/,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v15 )
      goto LABEL_27;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C9468C(v15);
LABEL_29:
      sub_1C942F0(v19, v20);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v15, long_TypeInfo, v17, v18) != priority );
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24879/*"value"*/,
          (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 )
    goto LABEL_29;
  if ( v19->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v19, long_TypeInfo, v21, v22);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1C9468C(v19);
    if ( v24 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1D78274();
    }
    v25 = *(_QWORD *)__cxa_begin_catch(v23);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v25 )
      sub_1C942E8(v25);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F30E & 1) == 0 )
  {
    sub_1C94098(&BattleDeckServantData___c_TypeInfo);
    byte_4D2F30E = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleDeckServantData___c___GetScriptStringArrayParam_b__79_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


int32_t BattleDeckServantData___c___TryGetSequenceSelectTypeByGender_b__105_0(
        BattleDeckServantData___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__55_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2F312 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F312 = 1;
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


int32_t BattleDeckServantData___c___getShiftClearBuffIndiv_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2F311 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F311 = 1;
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


int32_t BattleDeckServantData___c___getShiftList_b__52_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2F310 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F310 = 1;
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


int32_t BattleDeckServantData___c___getSummonNpcId_b__51_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D2F30F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F30F = 1;
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


void BattleDeckServantData___c__DisplayClass73_0___ctor(
        BattleDeckServantData___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleDeckServantData___c__DisplayClass73_0___TryGetOverwriteShadowData_b__0(
        BattleDeckServantData___c__DisplayClass73_0_o *this,
        EnemyScriptParam_OverwriteShadowData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}