void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A262 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A262 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, v2);
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

  if ( (byte_4C3A27B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16725/*"aiResetTiming"*/);
    byte_4C3A27B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16725/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A29B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16920/*"assumedEffectId"*/);
    byte_4C3A29B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_16920/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A6 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17812/*"changePersonality"*/);
    byte_4C3A2A6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17812/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17813/*"changePolicy"*/);
    byte_4C3A2A5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17813/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4C3A284 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_long___);
    sub_1C32C20(&StringLiteral_23425/*"shiftPosition"*/);
    byte_4C3A284 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23425/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_30CAC78 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18640/*"dispBreakShift"*/);
    byte_4C3A2A1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18640/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18643/*"dispLimitCount"*/);
    byte_4C3A2A3 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18643/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3A2AD & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18641/*"dispChangeSkillIds"*/);
    byte_4C3A2AD = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18641/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2B5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18056/*"colorType"*/);
    byte_4C3A2B5 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18056/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4C3A2B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19037/*"enemyTargetTouchArea"*/);
    byte_4C3A2B8 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19037/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v4,
                                                            (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19047/*"entryOrder"*/);
    byte_4C3A2BB = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19047/*"entryOrder"*/,
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

  if ( (byte_4C3A2AB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19965/*"hidePersonality"*/);
    byte_4C3A2AB = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19965/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2AA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19966/*"hidePolicy"*/);
    byte_4C3A2AA = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19966/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2AC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19963/*"hideAttri"*/);
    byte_4C3A2AC = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19963/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A2 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20288/*"imageSvtId"*/);
    byte_4C3A2A2 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20288/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A261 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A261 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  BattleMotionSelectType_array *v4; // x19

  if ( (byte_4C3A2C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_21655/*"motionSelectTypeByGender"*/);
    byte_4C3A2C2 = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_21655/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v4->obj,
                                             (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A29A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9512/*"NoSkipDeadFirstId"*/);
    byte_4C3A29A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9512/*"NoSkipDeadFirstId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 HasKey; // x0
  __int64 v7; // x20
  __int64 v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C3A2B3 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_12797/*"SetFriendShipRankFromUserServant"*/);
    sub_1C32C20(&StringLiteral_6815/*"ForceSetFriendShipRank"*/);
    byte_4C3A2B3 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6815/*"ForceSetFriendShipRank"*/,
         0) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6815/*"ForceSetFriendShipRank"*/,
             0,
             0);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12797/*"SetFriendShipRankFromUserServant"*/,
             0);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1C32E7C(HasKey);
  v7 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4C3A2B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22580/*"overwriteShiftIcon"*/);
    byte_4C3A2B4 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_22580/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2AE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22530/*"overwriteBreakShiftVoice"*/);
    byte_4C3A2AE = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22530/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22565/*"overwritePersonality"*/);
    byte_4C3A2A8 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22565/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22567/*"overwritePolicy"*/);
    byte_4C3A2A7 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22567/*"overwritePolicy"*/, 0, v2);
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

  if ( (byte_4C3A296 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10084/*"OverwriteShadow"*/);
    byte_4C3A296 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10084/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v5 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v5,
                                                           (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v8 )
    {
      sub_1C83390(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v10 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2A9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22528/*"overwriteAttri"*/);
    byte_4C3A2A9 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22528/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2B7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23096/*"revivalTarget"*/);
    byte_4C3A2B7 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23096/*"revivalTarget"*/,
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
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_object__c *v9; // x10
  System_Collections_Generic_List_object__o *v10; // x20
  void *v11; // x0
  System_Converter_TInput__TOutput__o *v12; // x19
  Il2CppObject *v13; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3A29C & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    byte_4C3A29C = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          v9 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1];
          v10 = v9 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v9 == System_Collections_Generic_List_object__TypeInfo )
          {
            v11 = BattleDeckServantData___c_TypeInfo;
            if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v11 = BattleDeckServantData___c_TypeInfo;
            }
            v12 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)v11 + 23) + 40LL);
            if ( !v12 )
            {
              if ( !*((_DWORD *)v11 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v11);
                v11 = BattleDeckServantData___c_TypeInfo;
              }
              v13 = (Il2CppObject *)**((_QWORD **)v11 + 23);
              v12 = (System_Converter_TInput__TOutput__o *)sub_1C32E6C(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v12,
                v13,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__,
                0);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__77_0 = (struct System_Converter_object__string__o *)v12;
              sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)v12, v15, v16);
            }
            if ( !v10
              || (v11 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v10,
                          (System_Converter_T__TOutput__o *)v12,
                          (const MethodInfo_3004A10 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0 )
            {
              sub_1C32E7C(v11);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v11,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22579/*"overwriteShift"*/);
    byte_4C3A2BF = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22579/*"overwriteShift"*/,
           0,
           0);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C3A29D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24188/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4C3A29D = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24188/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A29E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24189/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4C3A29E = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24189/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A27A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24703/*"voicePatternId"*/);
    byte_4C3A27A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24703/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19047/*"entryOrder"*/);
    byte_4C3A2BC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19047/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2B9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22293/*"notActiveEnemyMeshCollider"*/);
    byte_4C3A2B9 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22293/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A287 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20954/*"isSkillShiftInfo"*/);
    byte_4C3A287 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20954/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A260 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A260 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C3A2B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&StringLiteral_7335/*"HideBattlePointGauge"*/);
    byte_4C3A2B2 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7335/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A2A0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19964/*"hideClassSkill"*/);
    byte_4C3A2A0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19964/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BD & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19967/*"hideStatusDuringEntry"*/);
    byte_4C3A2BD = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19967/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C3A2B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&StringLiteral_7548/*"IgnoreBattlePointUp"*/);
    byte_4C3A2B1 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7548/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2C0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20276/*"ignoreShiftWhiteFade"*/);
    byte_4C3A2C0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20276/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A29F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20926/*"isLateUpdatePopup"*/);
    byte_4C3A29F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20926/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3A291 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A291 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2C1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21655/*"motionSelectTypeByGender"*/);
    byte_4C3A2C1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21655/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A299 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9505/*"NoAutoSkipDead"*/);
    byte_4C3A299 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9505/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A2AF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9509/*"NoMotion"*/);
    byte_4C3A2AF = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9509/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A298 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9511/*"NoSkipDead"*/);
    byte_4C3A298 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9511/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A264 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22251/*"noVoice"*/);
    byte_4C3A264 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22251/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A2A4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20952/*"isShadow"*/);
    byte_4C3A2A4 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20952/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20953/*"isShowGrandEffect"*/);
    byte_4C3A2BE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20953/*"isShowGrandEffect"*/,
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

  if ( (byte_4C3A2B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_bool___ctor__);
    sub_1C32C20(&StringLiteral_18988/*"enableBreakShiftVoice"*/);
    byte_4C3A2B0 = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18988/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18988/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A2BA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24715/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_4C3A2BA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24715/*"waitHpGaugeHideUntilDeadMotion"*/,
           0);
}


bool BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3A293 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19423/*"fieldMotionIds"*/);
    byte_4C3A293 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19423/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_1C32BC4((CGThumbnailListItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C3A294 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17044/*"baseUniqueCameraId"*/);
    byte_4C3A294 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17044/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4C3A292 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19623/*"fov"*/);
    byte_4C3A292 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19623/*"fov"*/,
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
  const MethodInfo *v16; // x3

  if ( (byte_4C3A297 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_1C32C20(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__);
    sub_1C32C20(&BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
    byte_4C3A297 = 1;
  }
  v9 = sub_1C32E6C(BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)shadowData, (int32_t)v14, v15, v16);
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
  System_Func_object__int__o *_9__103_0; // x22
  Il2CppObject *v13; // x23
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x21
  Il2CppObject *Master_object; // x0
  int max_length; // w8
  CommonReleaseMaster_o *v21; // x22
  unsigned int v22; // w23
  int32_t *v23; // x24
  int32_t v24; // w1

  if ( (byte_4C3A2B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C32C20(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_23271/*"sequenceSelectTypeByGender"*/);
    byte_4C3A2B6 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23271/*"sequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v8 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__DeserializeArray_object_(
           v8,
           (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    v10 = BattleDeckServantData___c_TypeInfo;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v10 = BattleDeckServantData___c_TypeInfo;
    }
    _9__103_0 = (System_Func_object__int__o *)v10->static_fields->__9__103_0;
    if ( !_9__103_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleDeckServantData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__103_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__103_0,
        v13,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__103_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__103_0, (int32_t)_9__103_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TKey__o *)_9__103_0,
                                                                 (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v17,
            (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v18 )
LABEL_26:
      sub_1C32E7C(Master_object);
    max_length = v18->max_length;
    if ( max_length < 1 )
    {
LABEL_23:
      LOBYTE(Value_object__object) = 0;
    }
    else
    {
      v21 = (CommonReleaseMaster_o *)Master_object;
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
          sub_1C32E84(Master_object);
        v23 = (int32_t *)v18->m_Items[v22];
        if ( !v23 )
          goto LABEL_26;
        v24 = v23[7];
        if ( v24 < 1 )
          break;
        if ( !v21 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v21, v24, 0, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v18->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_23;
      }
      LOBYTE(Value_object__object) = 1;
      *genderSelectType = v23[5];
      *patternId = v23[6];
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

  if ( (byte_4C3A289 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19046/*"entryIndex"*/);
    byte_4C3A289 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19046/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19046/*"entryIndex"*/, entryIndex + 1, v5);
}


bool BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3A27C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C3A27C = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C32E7C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) == val;
      }
      else
      {
        sub_1C3313C(Item);
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

  if ( (byte_4C3A274 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17153/*"billBoardGroup"*/);
    byte_4C3A274 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17153/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A272 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17800/*"changeAttri"*/);
    byte_4C3A272 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17800/*"changeAttri"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getChangeList(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  BattleDeckServantData___c_c *v6; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v9; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4C3A286 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__getChangeList_b__54_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_17799/*"change"*/);
    byte_4C3A286 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_17799/*"change"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17799/*"change"*/,
                                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = (System_Collections_Generic_List_object__o *)Item;
  v6 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v6 = BattleDeckServantData___c_TypeInfo;
  }
  _9__54_0 = v6->static_fields->__9__54_0;
  if ( !v5
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleDeckServantData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__54_0, v9, Method_BattleDeckServantData___c__getChangeList_b__54_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C32E7C(Item);
  }
  sub_1C3313C(v5);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v14, v15);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3A28C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22317/*"npInfoEnable"*/);
    byte_4C3A28C = 1;
  }
  v4 = (System_String_o *)StringLiteral_22317/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22317/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A273 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19035/*"enemyNameEffect"*/);
    byte_4C3A273 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19035/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A271 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24193/*"treasureDeviceVoiceId"*/);
    byte_4C3A271 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24193/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A269 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20016/*"hpBarType"*/);
    byte_4C3A269 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20016/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_4C3A288 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_19552/*"forceDropItem"*/);
    byte_4C3A288 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_19552/*"forceDropItem"*/,
                   (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A279 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18506/*"deadChangePos"*/);
    byte_4C3A279 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18506/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3A28D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22316/*"npCharge"*/);
    byte_4C3A28D = 1;
  }
  v4 = (System_String_o *)StringLiteral_22316/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22316/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A26F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23870/*"svtVoiceId"*/);
    byte_4C3A26F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23870/*"svtVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ServantChangeEntity_o *v6; // x0
  const MethodInfo *v7; // x1
  ServantChangeEntity_o *v8; // x20
  const MethodInfo *v9; // x4
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3A290 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_23876/*"svt_voice_id"*/);
    byte_4C3A290 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v6 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v6
    && (v8 = v6, ServantChangeEntity__IsEnable(v6, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23876/*"svt_voice_id"*/,
         v8->fields.priority,
         &value,
         v9) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v7);
  }
}


int32_t BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A266 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22929/*"raid"*/);
    byte_4C3A266 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22929/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A26E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23191/*"scale"*/);
    byte_4C3A26E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23191/*"scale"*/, 100, v2);
}


int32_t BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C3A27F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C3A27F = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C32E7C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  sub_1C3313C(Item);
  return BattleDeckServantData__ExistKillType(v12, v13);
}


int32_t BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3A281 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C3A281 = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C32E7C(0);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v8, v9);
  sub_1C3313C(value);
  return BattleDeckServantData__getUniqueID(v11, v12);
}


System_String_o *BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3A280 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C3A280 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v8 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v8 )
    sub_1C32E7C(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v8,
           (Il2CppObject *)key,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C3313C(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v11, v12);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A26C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23264/*"sendDamageForSuperBossId"*/);
    byte_4C3A26C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23264/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  BattleDeckServantData___c_c *v6; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v9; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4C3A285 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_23424/*"shiftClear"*/);
    byte_4C3A285 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23424/*"shiftClear"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23424/*"shiftClear"*/,
                                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = (System_Collections_Generic_List_object__o *)Item;
  v6 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v6 = BattleDeckServantData___c_TypeInfo;
  }
  _9__53_0 = v6->static_fields->__9__53_0;
  if ( !v5
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleDeckServantData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v9,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C32E7C(Item);
  }
  sub_1C3313C(v5);
  return BattleDeckServantData__getChangeList(v14, v15);
}


System_Int32_array *BattleDeckServantData__getShiftList(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  BattleDeckServantData___c_c *v6; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v9; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleDeckServantData_o *v14; // x0
  int64_t v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4C3A283 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__getShiftList_b__51_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_23422/*"shift"*/);
    byte_4C3A283 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23422/*"shift"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23422/*"shift"*/,
                                                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = (System_Collections_Generic_List_object__o *)Item;
  v6 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v6 = BattleDeckServantData___c_TypeInfo;
  }
  _9__51_0 = v6->static_fields->__9__51_0;
  if ( !v5
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleDeckServantData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v9, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C32E7C(Item);
  }
  sub_1C3313C(v5);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v14, v15, v16);
}


int32_t BattleDeckServantData__getSummonNpcId(BattleDeckServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  void *Item; // x0
  System_Collections_Generic_List_object__o *v7; // x20
  BattleDeckServantData___c_c *v8; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w8

  if ( (byte_4C3A282 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__);
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_17693/*"call"*/);
    byte_4C3A282 = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v5,
         (Il2CppObject *)StringLiteral_17693/*"call"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17693/*"call"*/,
             (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v7 = (System_Collections_Generic_List_object__o *)Item;
    v8 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v8 = BattleDeckServantData___c_TypeInfo;
    }
    _9__50_0 = v8->static_fields->__9__50_0;
    if ( v7 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v7->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1C3313C(v7);
        goto LABEL_26;
      }
    }
    if ( !_9__50_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BattleDeckServantData___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__50_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__50_0, v11, Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v13, v14);
    }
    if ( !v7
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v7,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0 )
    {
LABEL_24:
      sub_1C32E7C(Item);
    }
    v15 = *((_DWORD *)Item + 6);
    if ( v15 > index )
    {
      if ( v15 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1C32E84(Item);
    }
  }
  return -1;
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A268 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23842/*"superBoss"*/);
    byte_4C3A268 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23842/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3A28A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24191/*"treasureDeviceName"*/);
    byte_4C3A28A = 1;
  }
  v4 = (System_String_o *)StringLiteral_24191/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24191/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3A28B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24192/*"treasureDeviceRuby"*/);
    byte_4C3A28B = 1;
  }
  v4 = (System_String_o *)StringLiteral_24192/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24192/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4C3A270 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20901/*"isAddition"*/);
    byte_4C3A270 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20901/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A263 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16817/*"appear"*/);
    byte_4C3A263 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16817/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A25E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A25E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A25D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A25D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A25F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A25F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A25C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21123/*"kill"*/);
    byte_4C3A25C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21123/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A295 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20923/*"isHideShadow"*/);
    byte_4C3A295 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20923/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4C3A27E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C3A27E = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A26D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21191/*"leader"*/);
    byte_4C3A26D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21191/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A278 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23664/*"startPos"*/);
    byte_4C3A278 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23664/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A275 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22137/*"multiTargetCore"*/);
    byte_4C3A275 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22137/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A277 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22138/*"multiTargetUnder"*/);
    byte_4C3A277 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22138/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3A276 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22139/*"multiTargetUp"*/);
    byte_4C3A276 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22139/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A265 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22929/*"raid"*/);
    byte_4C3A265 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22929/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4C3A27D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C3A27D = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A26B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23264/*"sendDamageForSuperBossId"*/);
    byte_4C3A26B = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23264/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A267 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23842/*"superBoss"*/);
    byte_4C3A267 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23842/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3A26A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23844/*"superBossUi"*/);
    byte_4C3A26A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23844/*"superBossUi"*/, v2);
}


bool BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v6; // x21
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  Il2CppObject *Item; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 naturalAligment; // x11
  System_Collections_Generic_Dictionary_string__object__o *v12; // x9
  int32_t v14; // w1
  __int64 v15; // x10

  if ( (byte_4C3A28E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&StringLiteral_23872/*"svt_change"*/);
    byte_4C3A28E = 1;
  }
  v6 = (Il2CppObject *)StringLiteral_23872/*"svt_change"*/;
  *dict = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)dict, 0, (int32_t)method, v3);
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          v6,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7 )
LABEL_20:
    sub_1C32E7C(v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v7,
           v6,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v12 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    *dict = v12;
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)v15 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v14 = (int)Item;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
  }
  else
  {
    v14 = 0;
    *dict = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)dict, v14, v9, v10);
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
  System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *current; // x21
  __int64 v13; // x9
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x0
  int v21; // w1
  __int64 v22; // x21
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C3A28F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_22772/*"priority"*/);
    sub_1C32C20(&StringLiteral_24629/*"value"*/);
    byte_4C3A28F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  dict = 0;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_10;
  v9 = dict;
  if ( !dict )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dict,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v9 = dict;
  if ( !dict )
LABEL_25:
    sub_1C32E7C(v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v25 = v24;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v25.fields._current;
    }
    while ( !v25.fields._current );
    v13 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v25.fields._current->klass->_2.naturalAligment < (unsigned int)v13
      || (System_Collections_Generic_Dictionary_string__object__c *)v25.fields._current->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C3313C(v25.fields._current);
LABEL_27:
      sub_1C32E7C(v14);
    }
    v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v25.fields._current,
            (Il2CppObject *)StringLiteral_22772/*"priority"*/,
            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v14 )
      goto LABEL_27;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C3313C(v14);
LABEL_29:
      sub_1C32E7C(v17);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v14, long_TypeInfo, v15, v16) != priority );
  v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24629/*"value"*/,
          (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v17 )
    goto LABEL_29;
  if ( v17->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v17, long_TypeInfo, v18, v19);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1C3313C(v17);
    if ( v21 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1D1BD54();
    }
    v22 = *(_QWORD *)__cxa_begin_catch(v20);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v22 )
      sub_1C32E74(v22);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A2C3 & 1) == 0 )
  {
    sub_1C32C20(&BattleDeckServantData___c_TypeInfo);
    byte_4C3A2C3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleDeckServantData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleDeckServantData___c___GetScriptStringArrayParam_b__77_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


int32_t BattleDeckServantData___c___TryGetSequenceSelectTypeByGender_b__103_0(
        BattleDeckServantData___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3A2C7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A2C7 = 1;
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


int32_t BattleDeckServantData___c___getShiftClearBuffIndiv_b__53_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3A2C6 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A2C6 = 1;
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


int32_t BattleDeckServantData___c___getShiftList_b__51_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3A2C5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A2C5 = 1;
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


int32_t BattleDeckServantData___c___getSummonNpcId_b__50_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3A2C4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A2C4 = 1;
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


void BattleDeckServantData___c__DisplayClass71_0___ctor(
        BattleDeckServantData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleDeckServantData___c__DisplayClass71_0___TryGetOverwriteShadowData_b__0(
        BattleDeckServantData___c__DisplayClass71_0_o *this,
        EnemyScriptParam_OverwriteShadowData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}