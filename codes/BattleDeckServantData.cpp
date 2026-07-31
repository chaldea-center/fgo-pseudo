void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B190 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B190 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, v2);
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

  if ( (byte_593B1AA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17387/*"aiResetTiming"*/);
    byte_593B1AA = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17387/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17601/*"assumedEffectId"*/);
    byte_593B1CB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_17601/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18567/*"changePersonality"*/);
    byte_593B1D6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18567/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18568/*"changePolicy"*/);
    byte_593B1D5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18568/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_593B1B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_long___);
    sub_21FFC50(&StringLiteral_24607/*"shiftPosition"*/);
    byte_593B1B3 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24607/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19448/*"dispBreakShift"*/);
    byte_593B1D1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19448/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19451/*"dispLimitCount"*/);
    byte_593B1D3 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19451/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_593B1DD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19449/*"dispChangeSkillIds"*/);
    byte_593B1DD = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19449/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1E5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18816/*"colorType"*/);
    byte_593B1E5 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18816/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19

  if ( (byte_593B1E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19886/*"enemyTargetTouchArea"*/);
    byte_593B1E8 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19886/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v5 = (Il2CppObject *)result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v5,
                                                            (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1EB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19896/*"entryOrder"*/);
    byte_593B1EB = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19896/*"entryOrder"*/,
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

  if ( (byte_593B1DB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20877/*"hidePersonality"*/);
    byte_593B1DB = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20877/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20879/*"hidePolicy"*/);
    byte_593B1DA = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20879/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1DC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20872/*"hideAttri"*/);
    byte_593B1DC = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20872/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21233/*"imageSvtId"*/);
    byte_593B1D2 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_21233/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  __int64 v4; // x1
  BattleMotionSelectType_array *v5; // x19

  if ( (byte_593B1F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_22715/*"motionSelectTypeByGender"*/);
    byte_593B1F3 = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_22715/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v5 = result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v5->obj,
                                             (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9892/*"NoSkipDeadFirstId"*/);
    byte_593B1CA = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9892/*"NoSkipDeadFirstId"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetNotHaveTreasureDeviceMessage(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1F5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23387/*"notHaveTreasureDeviceMessage"*/);
    byte_593B1F5 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23387/*"notHaveTreasureDeviceMessage"*/, 0, v2);
}


int32_t BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  bool HasKey; // w8
  System_Collections_Generic_Dictionary_string__object__o *v6; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_593B1E3 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_13310/*"SetFriendShipRankFromUserServant"*/);
    sub_21FFC50(&StringLiteral_7089/*"ForceSetFriendShipRank"*/);
    byte_593B1E3 = 1;
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_7089/*"ForceSetFriendShipRank"*/,
             0);
  v6 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  if ( HasKey )
    return EntityScriptUtil__GetIntValue(v6, (System_String_o *)StringLiteral_7089/*"ForceSetFriendShipRank"*/, 0, 0);
  v8 = EntityScriptUtil__ScriptHasKey(v6, (System_String_o *)StringLiteral_13310/*"SetFriendShipRankFromUserServant"*/, 0);
  if ( !v8 )
    return 0;
  if ( !entity )
    sub_21FFECC(v8, v9);
  v10 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  __int64 v4; // x1
  EnemyScriptParam_OverwriteShiftIcon_array *v5; // x19

  if ( (byte_593B1E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23688/*"overwriteShiftIcon"*/);
    byte_593B1E4 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_23688/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v5 = result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v5->obj,
                                                          (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1DE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23626/*"overwriteBreakShiftVoice"*/);
    byte_593B1DE = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23626/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23667/*"overwritePersonality"*/);
    byte_593B1D8 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23667/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23669/*"overwritePolicy"*/);
    byte_593B1D7 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23669/*"overwritePolicy"*/, 0, v2);
}


EnemyScriptParam_OverwriteShadowData_array *BattleDeckServantData__GetOverwriteShadowDataArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x0
  __int64 v4; // x1
  long double v5; // q0
  Il2CppObject *v6; // x19
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_593B1C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10477/*"OverwriteShadow"*/);
    byte_593B1C6 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10477/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v6 = Value_object__object;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v6,
                                                           (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v8 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v9 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v9 )
    {
      sub_2237B54(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8(v5);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v10, v4);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_2237AF8(v5);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v11 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1D9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23624/*"overwriteAttri"*/);
    byte_593B1D9 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23624/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1E7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24260/*"revivalTarget"*/);
    byte_593B1E7 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24260/*"revivalTarget"*/,
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
  Il2CppObject *v9; // x20
  __int64 naturalAligment; // x10
  BattleDeckServantData___c_c *v11; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__79_0; // x19
  Il2CppObject *v14; // x21
  struct BattleDeckServantData___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x0
  __int64 v23; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B1CC & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    byte_593B1CC = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  value = 0;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v9 = value;
      if ( value )
      {
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          v11 = BattleDeckServantData___c_TypeInfo;
          if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v8);
            v11 = BattleDeckServantData___c_TypeInfo;
          }
          static_fields = v11->static_fields;
          _9__79_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__79_0;
          if ( !_9__79_0 )
          {
            if ( !*(&v11->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v11, v8);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
            }
            v14 = (Il2CppObject *)static_fields->__9;
            _9__79_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_object__string__TypeInfo);
            System_Converter_object__object____ctor(
              _9__79_0,
              v14,
              Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__,
              0);
            v15 = BattleDeckServantData___c_TypeInfo->static_fields;
            v15->__9__79_0 = (struct System_Converter_object__string__o *)_9__79_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v15->__9__79_0,
              (int32_t)_9__79_0,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21);
          }
          v22 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                               (System_Collections_Generic_List_object__o *)v9,
                                                               (System_Converter_T__TOutput__o *)_9__79_0,
                                                               (const MethodInfo_36A5860 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
          if ( !v22 )
            sub_21FFECC(0, v23);
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v22,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1F0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23687/*"overwriteShift"*/);
    byte_593B1F0 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23687/*"overwriteShift"*/,
           0,
           0);
}


int32_t BattleDeckServantData__GetStatusUiType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B19B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24899/*"statusUiType"*/);
    byte_593B19B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24899/*"statusUiType"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_593B1CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25453/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_593B1CD = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_25453/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1CE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25454/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_593B1CE = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_25454/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26030/*"voicePatternId"*/);
    byte_593B1A9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_26030/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1ED & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19896/*"entryOrder"*/);
    byte_593B1ED = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19896/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1E9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23378/*"notActiveEnemyMeshCollider"*/);
    byte_593B1E9 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_23378/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsBreakShiftHp0(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B1B6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18136/*"breakShiftHp0"*/);
    byte_593B1B6 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18136/*"breakShiftHp0"*/, v2);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B1B7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21945/*"isSkillShiftInfo"*/);
    byte_593B1B7 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21945/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_593B1E2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&StringLiteral_7631/*"HideBattlePointGauge"*/);
    byte_593B1E2 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7631/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B1D0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20874/*"hideClassSkill"*/);
    byte_593B1D0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20874/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1EE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20880/*"hideStatusDuringEntry"*/);
    byte_593B1EE = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20880/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_593B1E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&StringLiteral_7863/*"IgnoreBattlePointUp"*/);
    byte_593B1E1 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7863/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1F1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21217/*"ignoreShiftWhiteFade"*/);
    byte_593B1F1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21217/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B1CF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21903/*"isLateUpdatePopup"*/);
    byte_593B1CF = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21903/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B1C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593B1C1 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1F2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22715/*"motionSelectTypeByGender"*/);
    byte_593B1F2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22715/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1C9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9884/*"NoAutoSkipDead"*/);
    byte_593B1C9 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9884/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoContinueTransformReset(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1F6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9886/*"NoContinueTransformReset"*/);
    byte_593B1F6 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_9886/*"NoContinueTransformReset"*/, -1, v2) == 1;
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1DF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9889/*"NoMotion"*/);
    byte_593B1DF = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9889/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1C8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9891/*"NoSkipDead"*/);
    byte_593B1C8 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9891/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B192 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23330/*"noVoice"*/);
    byte_593B192 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23330/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsNotAddTotalEntryCondCount(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1EC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21910/*"isNotAddTotalEntryCondCount"*/);
    byte_593B1EC = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21910/*"isNotAddTotalEntryCondCount"*/,
           0,
           0) == 1;
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B1D4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21943/*"isShadow"*/);
    byte_593B1D4 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21943/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1EF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21944/*"isShowGrandEffect"*/);
    byte_593B1EF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21944/*"isShowGrandEffect"*/,
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
  System_Nullable_bool__o v9; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_bool__o v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B1E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&StringLiteral_19822/*"enableBreakShiftVoice"*/);
    byte_593B1E0 = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19822/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19822/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v9;
    v9 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
    return v9;
  }
  if ( Script != 1 )
    return (System_Nullable_bool__o)0;
  v6 = &v10;
  v10 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    1,
    (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
  return v10;
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_593B1EA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26042/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_593B1EA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_26042/*"waitHpGaugeHideUntilDeadMotion"*/,
           0);
}


bool BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593B1C3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20293/*"fieldMotionIds"*/);
    byte_593B1C3 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_20293/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_593B1C4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17736/*"baseUniqueCameraId"*/);
    byte_593B1C4 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17736/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_593B1C2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20514/*"fov"*/);
    byte_593B1C2 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_20514/*"fov"*/,
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593B1C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_21FFC50(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__);
    sub_21FFC50(&BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
    byte_593B1C7 = 1;
  }
  v9 = sub_21FFEBC(BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)shadowData, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return *shadowData != 0;
}


bool BattleDeckServantData__TryGetSequenceSelectTypeByGender(
        BattleDeckServantData_o *this,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_K__V__o *v7; // x0
  Il2CppObject *v8; // x1
  const MethodInfo_37E14A0 *v9; // x3
  Il2CppObject *Value_object__object; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  System_Object_array *v13; // x0
  __int64 v14; // x1
  BattleDeckServantData___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__105_0; // x22
  Il2CppObject *v19; // x23
  struct BattleDeckServantData___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  System_Object_array *v29; // x21
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v33; // x22
  __int64 v34; // x23
  Il2CppObject *v35; // x25

  if ( (byte_593B1E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_21FFC50(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24465/*"sequenceSelectTypeByGender"*/);
    byte_593B1E6 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId;
  v8 = (Il2CppObject *)StringLiteral_24465/*"sequenceSelectTypeByGender"*/;
  v9 = (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(v7, v8, 0, v9);
  if ( Value_object__object )
  {
    v12 = Value_object__object;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__DeserializeArray_object_(
            v12,
            (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    v15 = BattleDeckServantData___c_TypeInfo;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
    if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v14);
      v15 = BattleDeckServantData___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__105_0 = (System_Func_object__int__o *)static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v14);
        static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__105_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__105_0,
        v19,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__,
        0);
      v20 = BattleDeckServantData___c_TypeInfo->static_fields;
      v20->__9__105_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__105_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v20->__9__105_0,
        (int32_t)_9__105_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v16,
                                                                 (System_Func_TSource__TKey__o *)_9__105_0,
                                                                 (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v29 = System_Linq_Enumerable__ToArray_object_(
            v27,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v29 )
LABEL_26:
      sub_21FFECC(Master_object, monitor_high);
    max_length = v29->max_length;
    if ( max_length < 1 )
    {
LABEL_23:
      LOBYTE(Value_object__object) = 0;
    }
    else
    {
      v33 = (CommonReleaseMaster_o *)Master_object;
      v34 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v34 >= max_length )
          sub_21FFED4(Master_object);
        v35 = v29->m_Items[v34];
        if ( !v35 )
          goto LABEL_26;
        monitor_high = HIDWORD(v35[1].monitor);
        if ( (int)monitor_high < 1 )
          break;
        if ( !v33 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v33, monitor_high, 0, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v29->max_length;
        if ( (int)++v34 >= max_length )
          goto LABEL_23;
      }
      LOBYTE(Value_object__object) = 1;
      *genderSelectType = HIDWORD(v35[1].klass);
      *patternId = (int32_t)v35[1].monitor;
    }
  }
  return (char)Value_object__object;
}


bool BattleDeckServantData__TryGetTdSeqUnitCondArray(
        BattleDeckServantData_o *this,
        System_Int32_array **commonReleaseIds,
        const MethodInfo *method)
{
  long double v3; // q0
  _QWORD *v6; // x21
  System_Collections_Generic_Dictionary_string__object__o *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array *IntArray; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_593B1F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&StringLiteral_25243/*"tdSeqUnitCond"*/);
    byte_593B1F4 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v8 = v6[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v3);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v9, commonReleaseIds);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v3);
  IntArray = EntityScriptUtil__GetIntArray(
               v7,
               (System_String_o *)StringLiteral_25243/*"tdSeqUnitCond"*/,
               **(System_Int32_array ***)(v10 + 184),
               0);
  *commonReleaseIds = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)commonReleaseIds, (int32_t)IntArray, v12, v13, v14, v15, v16, v17);
  if ( !*commonReleaseIds )
    sub_21FFECC(v18, v19);
  return LODWORD((*commonReleaseIds)->max_length) != 0;
}


bool BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_593B1B9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19895/*"entryIndex"*/);
    byte_593B1B9 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19895/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19895/*"entryIndex"*/, entryIndex + 1, v5);
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
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_593B1AB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_593B1AB = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_21FFECC(Item, v8);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10) == val;
      }
      else
      {
        sub_220024C(Item, qword_594C090, v10);
        LOBYTE(v7) = BattleDeckServantData__isDeadStand(v11, v12);
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

  if ( (byte_593B1A3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17853/*"billBoardGroup"*/);
    byte_593B1A3 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17853/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18554/*"changeAttri"*/);
    byte_593B1A1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18554/*"changeAttri"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getChangeList(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  BattleDeckServantData___c_c *v9; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__55_0; // x20
  __int64 v12; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v15; // x21
  struct BattleDeckServantData___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleDeckServantData_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_593B1B5 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__getChangeList_b__55_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18553/*"change"*/);
    byte_593B1B5 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_18553/*"change"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_22;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_18553/*"change"*/,
                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v8 = (System_Collections_Generic_List_object__o *)Item;
  v9 = BattleDeckServantData___c_TypeInfo;
  if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v6);
    v9 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__55_0 = static_fields->__9__55_0;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__55_0 )
  {
    if ( v8 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v8->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_23;
      }
    }
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, System_Collections_Generic_List_object__TypeInfo);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__55_0, v15, Method_BattleDeckServantData___c__getChangeList_b__55_0__, 0);
    v16 = BattleDeckServantData___c_TypeInfo->static_fields;
    v16->__9__55_0 = _9__55_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__55_0, (int32_t)_9__55_0, v17, v18, v19, v20, v21, v22);
    if ( !v8 )
LABEL_22:
      sub_21FFECC(Item, v4);
LABEL_20:
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                        v8,
                                                                        (System_Converter_T__TOutput__o *)_9__55_0,
                                                                        (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( Item )
      return System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)Item,
               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_22;
  }
  if ( !v8 )
    goto LABEL_22;
  v12 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v8->klass->_2.naturalAligment >= (unsigned int)v12
    && (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
LABEL_23:
  sub_220024C(v8, System_Collections_Generic_List_object__TypeInfo, v7);
  return (System_Int32_array *)BattleDeckServantData__IsBreakShiftHp0(v23, v24);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_593B1BC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23403/*"npInfoEnable"*/);
    byte_593B1BC = 1;
  }
  v4 = (System_String_o *)StringLiteral_23403/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23403/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19884/*"enemyNameEffect"*/);
    byte_593B1A2 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19884/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25458/*"treasureDeviceVoiceId"*/);
    byte_593B1A0 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_25458/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B197 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20937/*"hpBarType"*/);
    byte_593B197 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20937/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_593B1B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&StringLiteral_20441/*"forceDropItem"*/);
    byte_593B1B8 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_20441/*"forceDropItem"*/,
                   (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19302/*"deadChangePos"*/);
    byte_593B1A8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19302/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_593B1BD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23402/*"npCharge"*/);
    byte_593B1BD = 1;
  }
  v4 = (System_String_o *)StringLiteral_23402/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23402/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B19E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25097/*"svtVoiceId"*/);
    byte_593B19E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_25097/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_593B1C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_25103/*"svt_voice_id"*/);
    byte_593B1C0 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_25103/*"svt_voice_id"*/,
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

  if ( (byte_593B194 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24078/*"raid"*/);
    byte_593B194 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24078/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B19D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24355/*"scale"*/);
    byte_593B19D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24355/*"scale"*/, 100, v2);
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
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593B1AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_593B1AE = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10);
  sub_220024C(Item, qword_594C090, v10);
  return BattleDeckServantData__ExistKillType(v12, v13);
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
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B1B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_593B1B0 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  value = 0;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_21FFECC(0, v8);
  if ( value->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, qword_594C090, v9);
  sub_220024C(value, qword_594C090, v9);
  return BattleDeckServantData__getUniqueID(v11, v12);
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
  __int64 v11; // x2
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593B1AF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_593B1AF = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9 )
    sub_21FFECC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v9,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || Item->klass == (Il2CppClass *)qword_594C0B8 )
    return defVal;
  sub_220024C(Item, qword_594C0B8, v11);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v13, v14);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B19A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24459/*"sendDamageForSuperBossId"*/);
    byte_593B19A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24459/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  BattleDeckServantData___c_c *v9; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 v12; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v15; // x21
  struct BattleDeckServantData___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleDeckServantData_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_593B1B4 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24605/*"shiftClear"*/);
    byte_593B1B4 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24605/*"shiftClear"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_22;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_24605/*"shiftClear"*/,
                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v8 = (System_Collections_Generic_List_object__o *)Item;
  v9 = BattleDeckServantData___c_TypeInfo;
  if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v6);
    v9 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__54_0 = static_fields->__9__54_0;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__54_0 )
  {
    if ( v8 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v8->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_23;
      }
    }
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, System_Collections_Generic_List_object__TypeInfo);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__54_0,
      v15,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__,
      0);
    v16 = BattleDeckServantData___c_TypeInfo->static_fields;
    v16->__9__54_0 = _9__54_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__54_0, (int32_t)_9__54_0, v17, v18, v19, v20, v21, v22);
    if ( !v8 )
LABEL_22:
      sub_21FFECC(Item, v4);
LABEL_20:
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                        v8,
                                                                        (System_Converter_T__TOutput__o *)_9__54_0,
                                                                        (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( Item )
      return System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)Item,
               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_22;
  }
  if ( !v8 )
    goto LABEL_22;
  v12 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v8->klass->_2.naturalAligment >= (unsigned int)v12
    && (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
LABEL_23:
  sub_220024C(v8, System_Collections_Generic_List_object__TypeInfo, v7);
  return BattleDeckServantData__getChangeList(v23, v24);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        System_Int32_array_array **resList,
        int32_t shiftPhaseIdx,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Int32_array_array *v14; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  BattleDeckServantData___c_c *v19; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__52_0; // x20
  __int64 naturalAligment; // x9
  __int64 v23; // x11
  Il2CppObject *v24; // x21
  struct BattleDeckServantData___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  BattleDeckServantData_o *v32; // x0
  int64_t v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_593B1B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__getShiftList_b__52_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24606/*"shiftPhase"*/);
    sub_21FFC50(&StringLiteral_24603/*"shift"*/);
    byte_593B1B2 = 1;
  }
  *resList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)resList,
    0,
    *(System_String_o **)&shiftPhaseIdx,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v11 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  if ( !v11 )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)EntityScriptUtil__TryGet2DimensionalIntArray(
                                                                      v11,
                                                                      (System_String_o *)StringLiteral_24606/*"shiftPhase"*/,
                                                                      resList,
                                                                      0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           Item,
           (Il2CppObject *)StringLiteral_24603/*"shift"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
      if ( !Item )
        goto LABEL_27;
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                          Item,
                                                                          (Il2CppObject *)StringLiteral_24603/*"shift"*/,
                                                                          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v18 = (System_Collections_Generic_List_object__o *)Item;
      v19 = BattleDeckServantData___c_TypeInfo;
      if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v16);
        v19 = BattleDeckServantData___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__52_0 = static_fields->__9__52_0;
      v13 = System_Collections_Generic_List_object__TypeInfo;
      if ( _9__52_0 )
      {
        if ( !v18 )
          goto LABEL_27;
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( v18->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_List_object__c *)v18->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
LABEL_29:
          sub_220024C(v18, System_Collections_Generic_List_object__TypeInfo, v17);
          return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v32, v33, v34);
        }
      }
      else
      {
        if ( v18 )
        {
          v23 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
          if ( v18->klass->_2.naturalAligment < (unsigned int)v23
            || (System_Collections_Generic_List_object__c *)v18->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_List_object__TypeInfo )
          {
            goto LABEL_29;
          }
        }
        if ( !*(&v19->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v19, System_Collections_Generic_List_object__TypeInfo);
          static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__52_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(_9__52_0, v24, Method_BattleDeckServantData___c__getShiftList_b__52_0__, 0);
        v25 = BattleDeckServantData___c_TypeInfo->static_fields;
        v25->__9__52_0 = _9__52_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v25->__9__52_0,
          (int32_t)_9__52_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        if ( !v18 )
LABEL_27:
          sub_21FFECC(Item, v13);
      }
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v18,
                                                                          (System_Converter_T__TOutput__o *)_9__52_0,
                                                                          (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  }
  v14 = *resList;
  if ( !*resList )
    goto LABEL_27;
  if ( LODWORD(v14->max_length) <= shiftPhaseIdx )
    sub_21FFED4(Item);
  return v14->m_Items[shiftPhaseIdx];
}


int32_t BattleDeckServantData__getSummonNpcId(BattleDeckServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *Item; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  BattleDeckServantData___c_c *v11; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__51_0; // x21
  __int64 v14; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v17; // x22
  struct BattleDeckServantData___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w8

  if ( (byte_593B1B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__);
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18438/*"call"*/);
    byte_593B1B1 = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v5
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v5,
          (Il2CppObject *)StringLiteral_18438/*"call"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  Item = *(void **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_27;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)Item,
           (Il2CppObject *)StringLiteral_18438/*"call"*/,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = (System_Collections_Generic_List_object__o *)Item;
  v11 = BattleDeckServantData___c_TypeInfo;
  if ( !*(&BattleDeckServantData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v8);
    v11 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__51_0 = static_fields->__9__51_0;
  v6 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__51_0 )
  {
    if ( v10 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v10->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_28;
      }
    }
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, System_Collections_Generic_List_object__TypeInfo);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__51_0, v17, Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__, 0);
    v18 = BattleDeckServantData___c_TypeInfo->static_fields;
    v18->__9__51_0 = _9__51_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__51_0, (int32_t)_9__51_0, v19, v20, v21, v22, v23, v24);
    if ( v10 )
      goto LABEL_21;
LABEL_27:
    sub_21FFECC(Item, v6);
  }
  if ( !v10 )
    goto LABEL_27;
  v14 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v10->klass->_2.naturalAligment < (unsigned int)v14
    || (System_Collections_Generic_List_object__c *)v10->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_28:
    sub_220024C(v10, System_Collections_Generic_List_object__TypeInfo, v9);
LABEL_29:
    sub_21FFED4(Item);
  }
LABEL_21:
  Item = System_Collections_Generic_List_object___ConvertAll_int_(
           v10,
           (System_Converter_T__TOutput__o *)_9__51_0,
           (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_27;
  Item = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item )
    goto LABEL_27;
  v25 = *((_DWORD *)Item + 6);
  if ( v25 <= index )
    return -1;
  if ( v25 <= (unsigned int)index )
    goto LABEL_29;
  return *((_DWORD *)Item + index + 8);
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B196 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25065/*"superBoss"*/);
    byte_593B196 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_25065/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_593B1BA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25456/*"treasureDeviceName"*/);
    byte_593B1BA = 1;
  }
  v4 = (System_String_o *)StringLiteral_25456/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_25456/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_593B1BB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25457/*"treasureDeviceRuby"*/);
    byte_593B1BB = 1;
  }
  v4 = (System_String_o *)StringLiteral_25457/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_25457/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_593B19F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21868/*"isAddition"*/);
    byte_593B19F = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_21868/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B191 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17493/*"appear"*/);
    byte_593B191 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_17493/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B18A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22145/*"kill"*/);
    byte_593B18A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22145/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1C5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21899/*"isHideShadow"*/);
    byte_593B1C5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21899/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_593B1AD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_593B1AD = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B19C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22216/*"leader"*/);
    byte_593B19C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22216/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24878/*"startPos"*/);
    byte_593B1A7 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_24878/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23210/*"multiTargetCore"*/);
    byte_593B1A4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23210/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23211/*"multiTargetUnder"*/);
    byte_593B1A6 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23211/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593B1A5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23212/*"multiTargetUp"*/);
    byte_593B1A5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23212/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B193 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24078/*"raid"*/);
    byte_593B193 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24078/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_593B1AC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_593B1AC = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B199 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24459/*"sendDamageForSuperBossId"*/);
    byte_593B199 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24459/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B195 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25065/*"superBoss"*/);
    byte_593B195 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_25065/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593B198 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25067/*"superBossUi"*/);
    byte_593B198 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_25067/*"superBossUi"*/, v2);
}


bool BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 naturalAligment; // x11
  System_Collections_Generic_Dictionary_string__object__o *v21; // x9
  int32_t v23; // w1
  __int64 v24; // x10

  if ( (byte_593B1BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_25099/*"svt_change"*/);
    byte_593B1BE = 1;
  }
  v10 = (Il2CppObject *)StringLiteral_25099/*"svt_change"*/;
  *dict = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)dict, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          v10,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
LABEL_20:
    sub_21FFECC(v12, v11);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v12,
           v10,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)dict, v23, v14, v15, v16, v17, v18, v19);
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
  __int64 v13; // x2
  Il2CppObject *current; // x21
  __int64 v15; // x9
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  void *v22; // x0
  int v23; // w1
  struct System_Collections_Generic_List_T__o *v24; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_593B1BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_23913/*"priority"*/);
    sub_21FFC50(&StringLiteral_25940/*"value"*/);
    byte_593B1BF = 1;
  }
  dict = 0;
  memset(&v27, 0, sizeof(v27));
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dict,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
LABEL_25:
    sub_21FFECC(v10, v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v27 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v27.fields._current;
    }
    while ( !v27.fields._current );
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v27.fields._current->klass->_2.naturalAligment < (unsigned int)v15
      || (System_Collections_Generic_Dictionary_string__object__c *)v27.fields._current->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_220024C(v27.fields._current, System_Collections_Generic_Dictionary_string__object__TypeInfo, v13);
LABEL_27:
      sub_21FFECC(v16, v17);
    }
    v16 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v27.fields._current,
            (Il2CppObject *)StringLiteral_23913/*"priority"*/,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v16 )
      goto LABEL_27;
    if ( v16->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    {
      sub_220024C(v16, qword_594C090, v18);
LABEL_29:
      sub_21FFECC(v19, v20);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v16, qword_594C090, v18) != priority );
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_25940/*"value"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 )
    goto LABEL_29;
  if ( v19->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v19, qword_594C090, v21);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_220024C(v19, qword_594C090, v21);
    if ( v23 != 1 )
    {
      sub_1FFA574(&v26);
      sub_22ED31C();
    }
    v24 = *(struct System_Collections_Generic_List_T__o **)__cxa_begin_catch(v22);
    v26.fields._list = v24;
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      *(System_Collections_Generic_List_Enumerator_object__o **)&v26.fields._index,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v24 )
      sub_21FFEC4(v24);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B1F7 & 1) == 0 )
  {
    sub_21FFC50(&BattleDeckServantData___c_TypeInfo);
    byte_593B1F7 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleDeckServantData___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__55_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_593B1FB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B1FB = 1;
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

  if ( (byte_593B1FA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B1FA = 1;
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

  if ( (byte_593B1F9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B1F9 = 1;
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

  if ( (byte_593B1F8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B1F8 = 1;
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
    sub_21FFECC(this, 0);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}