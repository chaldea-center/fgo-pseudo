void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A12D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A12D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, v2);
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

  if ( (byte_4E7A147 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_16970/*"aiResetTiming"*/);
    byte_4E7A147 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16970/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A168 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17167/*"assumedEffectId"*/);
    byte_4E7A168 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_17167/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A173 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18089/*"changePersonality"*/);
    byte_4E7A173 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18089/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A172 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18090/*"changePolicy"*/);
    byte_4E7A172 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18090/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4E7A150 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_long___);
    sub_1D0F0B4(&StringLiteral_23895/*"shiftPosition"*/);
    byte_4E7A150 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23895/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_323C7D4 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A16E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18943/*"dispBreakShift"*/);
    byte_4E7A16E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18943/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A170 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18946/*"dispLimitCount"*/);
    byte_4E7A170 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18946/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E7A17A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18944/*"dispChangeSkillIds"*/);
    byte_4E7A17A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18944/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A182 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18334/*"colorType"*/);
    byte_4E7A182 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18334/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4E7A185 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19371/*"enemyTargetTouchArea"*/);
    byte_4E7A185 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19371/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v4,
                                                            (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A188 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19381/*"entryOrder"*/);
    byte_4E7A188 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19381/*"entryOrder"*/,
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

  if ( (byte_4E7A178 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20339/*"hidePersonality"*/);
    byte_4E7A178 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20339/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A177 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20340/*"hidePolicy"*/);
    byte_4E7A177 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20340/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A179 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20336/*"hideAttri"*/);
    byte_4E7A179 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20336/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A16F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20677/*"imageSvtId"*/);
    byte_4E7A16F = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20677/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A12C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A12C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  BattleMotionSelectType_array *v4; // x19

  if ( (byte_4E7A190 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22087/*"motionSelectTypeByGender"*/);
    byte_4E7A190 = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_22087/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v4->obj,
                                             (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A167 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9627/*"NoSkipDeadFirstId"*/);
    byte_4E7A167 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9627/*"NoSkipDeadFirstId"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetNotHaveTreasureDeviceMessage(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A192 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22740/*"notHaveTreasureDeviceMessage"*/);
    byte_4E7A192 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22740/*"notHaveTreasureDeviceMessage"*/, 0, v2);
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

  if ( (byte_4E7A180 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12984/*"SetFriendShipRankFromUserServant"*/);
    sub_1D0F0B4(&StringLiteral_6888/*"ForceSetFriendShipRank"*/);
    byte_4E7A180 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6888/*"ForceSetFriendShipRank"*/,
         0) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6888/*"ForceSetFriendShipRank"*/,
             0,
             0);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12984/*"SetFriendShipRankFromUserServant"*/,
             0);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1D0F30C(HasKey, v7);
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4E7A181 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23036/*"overwriteShiftIcon"*/);
    byte_4E7A181 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_23036/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A17B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22974/*"overwriteBreakShiftVoice"*/);
    byte_4E7A17B = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22974/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A175 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23015/*"overwritePersonality"*/);
    byte_4E7A175 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23015/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A174 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23017/*"overwritePolicy"*/);
    byte_4E7A174 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23017/*"overwritePolicy"*/, 0, v2);
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

  if ( (byte_4E7A163 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10203/*"OverwriteShadow"*/);
    byte_4E7A163 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10203/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v5 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v5,
                                                           (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v8 )
    {
      sub_1CE5198(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1CE513C(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v10 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A176 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22972/*"overwriteAttri"*/);
    byte_4E7A176 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22972/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A184 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23572/*"revivalTarget"*/);
    byte_4E7A184 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23572/*"revivalTarget"*/,
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

  if ( (byte_4E7A169 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__string__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    byte_4E7A169 = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
              v13 = (System_Converter_TInput__TOutput__o *)sub_1D0F300(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v13,
                v14,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__79_0__,
                0);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__79_0 = (struct System_Converter_object__string__o *)v13;
              sub_1D0F058(
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
                          (const MethodInfo_316DC80 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0 )
            {
              sub_1D0F30C(v12, v8);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v12,
                                            (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23035/*"overwriteShift"*/);
    byte_4E7A18D = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23035/*"overwriteShift"*/,
           0,
           0);
}


int32_t BattleDeckServantData__GetStatusUiType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A138 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24165/*"statusUiType"*/);
    byte_4E7A138 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24165/*"statusUiType"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E7A16A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24695/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4E7A16A = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24695/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A16B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24696/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4E7A16B = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24696/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A146 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_25227/*"voicePatternId"*/);
    byte_4E7A146 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_25227/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19381/*"entryOrder"*/);
    byte_4E7A18A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19381/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A186 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22731/*"notActiveEnemyMeshCollider"*/);
    byte_4E7A186 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22731/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsBreakShiftHp0(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A153 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17674/*"breakShiftHp0"*/);
    byte_4E7A153 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_17674/*"breakShiftHp0"*/, v2);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A154 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21364/*"isSkillShiftInfo"*/);
    byte_4E7A154 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21364/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A12B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A12B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4E7A17F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&StringLiteral_7426/*"HideBattlePointGauge"*/);
    byte_4E7A17F = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7426/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A16D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20338/*"hideClassSkill"*/);
    byte_4E7A16D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20338/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20341/*"hideStatusDuringEntry"*/);
    byte_4E7A18B = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20341/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4E7A17E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&StringLiteral_7644/*"IgnoreBattlePointUp"*/);
    byte_4E7A17E = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7644/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20662/*"ignoreShiftWhiteFade"*/);
    byte_4E7A18E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20662/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A16C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21328/*"isLateUpdatePopup"*/);
    byte_4E7A16C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21328/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E7A15E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7A15E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v4);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22087/*"motionSelectTypeByGender"*/);
    byte_4E7A18F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22087/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A166 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9619/*"NoAutoSkipDead"*/);
    byte_4E7A166 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9619/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoContinueTransformReset(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A193 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9621/*"NoContinueTransformReset"*/);
    byte_4E7A193 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_9621/*"NoContinueTransformReset"*/, -1, v2) == 1;
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A17C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9624/*"NoMotion"*/);
    byte_4E7A17C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9624/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A165 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9626/*"NoSkipDead"*/);
    byte_4E7A165 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9626/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A12F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22688/*"noVoice"*/);
    byte_4E7A12F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22688/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsNotAddTotalEntryCondCount(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A189 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21334/*"isNotAddTotalEntryCondCount"*/);
    byte_4E7A189 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21334/*"isNotAddTotalEntryCondCount"*/,
           0,
           0) == 1;
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A171 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21362/*"isShadow"*/);
    byte_4E7A171 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21362/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A18C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21363/*"isShowGrandEffect"*/);
    byte_4E7A18C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21363/*"isShowGrandEffect"*/,
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

  if ( (byte_4E7A17D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Nullable_bool___ctor__);
    sub_1D0F0B4(&StringLiteral_19309/*"enableBreakShiftVoice"*/);
    byte_4E7A17D = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19309/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19309/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_3A80B88 *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_3A80B88 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A187 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_25239/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_4E7A187 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_25239/*"waitHpGaugeHideUntilDeadMotion"*/,
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

  if ( (byte_4E7A160 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19774/*"fieldMotionIds"*/);
    byte_4E7A160 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19774/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4E7A161 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17294/*"baseUniqueCameraId"*/);
    byte_4E7A161 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17294/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4E7A15F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19990/*"fov"*/);
    byte_4E7A15F = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19990/*"fov"*/,
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

  if ( (byte_4E7A164 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_1D0F0B4(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__);
    sub_1D0F0B4(&BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
    byte_4E7A164 = 1;
  }
  v9 = sub_1D0F300(BattleDeckServantData___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1D0F30C(v10, v11);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass73_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__52923832(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)shadowData, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4E7A183 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1D0F0B4(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23756/*"sequenceSelectTypeByGender"*/);
    byte_4E7A183 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23756/*"sequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v8 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__DeserializeArray_object_(
           v8,
           (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
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
      _9__105_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__105_0,
        v13,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__105_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__105_0;
      sub_1D0F058(
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
                                                                 (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v22 = System_Linq_Enumerable__ToArray_object_(
            v21,
            (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v22 )
LABEL_26:
      sub_1D0F30C(Master_object, monitor_high);
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
          sub_1D0F314(Master_object);
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


bool BattleDeckServantData__TryGetTdSeqUnitCondArray(
        BattleDeckServantData_o *this,
        System_Int32_array **commonReleaseIds,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v6; // x21
  System_Collections_Generic_Dictionary_string__object__o *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array *IntArray; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4E7A191 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_int___);
    sub_1D0F0B4(&StringLiteral_24505/*"tdSeqUnitCond"*/);
    byte_4E7A191 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1CE5198(Method_System_Array_Empty_int___);
    v8 = v6[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1CE513C(inited);
  IntArray = EntityScriptUtil__GetIntArray(
               v7,
               (System_String_o *)StringLiteral_24505/*"tdSeqUnitCond"*/,
               **(System_Int32_array ***)(v10 + 184),
               0);
  *commonReleaseIds = IntArray;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)commonReleaseIds, (int32_t)IntArray, v12, v13, v14, v15, v16, v17);
  if ( !*commonReleaseIds )
    sub_1D0F30C(v18, v19);
  return LODWORD((*commonReleaseIds)->max_length) != 0;
}


bool BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4E7A156 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19380/*"entryIndex"*/);
    byte_4E7A156 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19380/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19380/*"entryIndex"*/, entryIndex + 1, v5);
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

  if ( (byte_4E7A148 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&long_TypeInfo);
    byte_4E7A148 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1D0F30C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) == val;
      }
      else
      {
        sub_1D0F6A8(Item);
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

  if ( (byte_4E7A140 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17411/*"billBoardGroup"*/);
    byte_4E7A140 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17411/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A13E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18076/*"changeAttri"*/);
    byte_4E7A13E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18076/*"changeAttri"*/, 0, v2);
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

  if ( (byte_4E7A152 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__getChangeList_b__55_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18075/*"change"*/);
    byte_4E7A152 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_18075/*"change"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_18075/*"change"*/,
                                                                      (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__55_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__55_0, v10, Method_BattleDeckServantData___c__getChangeList_b__55_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__55_0 = _9__55_0;
      sub_1D0F058(
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
                                                                          (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1D0F30C(Item, v4);
  }
  sub_1D0F6A8(v6);
  return (System_Int32_array *)BattleDeckServantData__IsBreakShiftHp0(v19, v20);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4E7A159 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22756/*"npInfoEnable"*/);
    byte_4E7A159 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22756/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22756/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A13F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19369/*"enemyNameEffect"*/);
    byte_4E7A13F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19369/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A13D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24700/*"treasureDeviceVoiceId"*/);
    byte_4E7A13D = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24700/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A134 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20390/*"hpBarType"*/);
    byte_4E7A134 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20390/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_4E7A155 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&StringLiteral_19918/*"forceDropItem"*/);
    byte_4E7A155 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_19918/*"forceDropItem"*/,
                   (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A145 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18803/*"deadChangePos"*/);
    byte_4E7A145 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18803/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4E7A15A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22755/*"npCharge"*/);
    byte_4E7A15A = 1;
  }
  v4 = (System_String_o *)StringLiteral_22755/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22755/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A13B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24361/*"svtVoiceId"*/);
    byte_4E7A13B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24361/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_4E7A15D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_24367/*"svt_voice_id"*/);
    byte_4E7A15D = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_24367/*"svt_voice_id"*/,
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

  if ( (byte_4E7A131 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23399/*"raid"*/);
    byte_4E7A131 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23399/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A13A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23667/*"scale"*/);
    byte_4E7A13A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23667/*"scale"*/, 100, v2);
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

  if ( (byte_4E7A14B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&long_TypeInfo);
    byte_4E7A14B = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1D0F30C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1D0F6A8(Item);
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

  if ( (byte_4E7A14D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&long_TypeInfo);
    byte_4E7A14D = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1D0F30C(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1D0F6A8(value);
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

  if ( (byte_4E7A14C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&string_TypeInfo);
    byte_4E7A14C = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9 )
    sub_1D0F30C(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v9,
           (Il2CppObject *)key,
           (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1D0F6A8(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v12, v13);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A137 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23750/*"sendDamageForSuperBossId"*/);
    byte_4E7A137 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23750/*"sendDamageForSuperBossId"*/, 0, v2);
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

  if ( (byte_4E7A151 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23893/*"shiftClear"*/);
    byte_4E7A151 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23893/*"shiftClear"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23893/*"shiftClear"*/,
                                                                      (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__54_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v10,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1D0F058(
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
                                                                          (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1D0F30C(Item, v4);
  }
  sub_1D0F6A8(v6);
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

  if ( (byte_4E7A14F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__getShiftList_b__52_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23894/*"shiftPhase"*/);
    sub_1D0F0B4(&StringLiteral_23891/*"shift"*/);
    byte_4E7A14F = 1;
  }
  *resList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)resList, 0, shiftPhaseIdx, (int32_t)method, v4, v5, v6, v7);
  v11 = *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId;
  if ( !v11 )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)EntityScriptUtil__TryGet2DimensionalIntArray(
                                                                      v11,
                                                                      (System_String_o *)StringLiteral_23894/*"shiftPhase"*/,
                                                                      resList,
                                                                      0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           Item,
           (Il2CppObject *)StringLiteral_23891/*"shift"*/,
           (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
      if ( Item )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23891/*"shift"*/,
                                                                            (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
            sub_1D0F6A8(v16);
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
          _9__52_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
          System_Converter_object__int____ctor(
            _9__52_0,
            v20,
            Method_BattleDeckServantData___c__getShiftList_b__52_0__,
            0);
          static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
          static_fields->__9__52_0 = _9__52_0;
          sub_1D0F058(
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
                                                                              (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( Item )
            return System_Collections_Generic_List_int___ToArray(
                     (System_Collections_Generic_List_int__o *)Item,
                     (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
      }
LABEL_24:
      sub_1D0F30C(Item, v13);
    }
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  }
  v14 = *resList;
  if ( !*resList )
    goto LABEL_24;
  if ( LODWORD(v14->max_length) <= shiftPhaseIdx )
    sub_1D0F314(Item);
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

  if ( (byte_4E7A14E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__);
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17965/*"call"*/);
    byte_4E7A14E = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v5,
         (Il2CppObject *)StringLiteral_17965/*"call"*/,
         (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17965/*"call"*/,
             (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        sub_1D0F6A8(v8);
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
      _9__51_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v12, Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1D0F058(
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
                   (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0 )
    {
LABEL_24:
      sub_1D0F30C(Item, v6);
    }
    v20 = *((_DWORD *)Item + 6);
    if ( v20 > index )
    {
      if ( v20 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1D0F314(Item);
    }
  }
  return -1;
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A133 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24329/*"superBoss"*/);
    byte_4E7A133 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24329/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4E7A157 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24698/*"treasureDeviceName"*/);
    byte_4E7A157 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24698/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24698/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4E7A158 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24699/*"treasureDeviceRuby"*/);
    byte_4E7A158 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24699/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24699/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4E7A13C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21299/*"isAddition"*/);
    byte_4E7A13C = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_21299/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A12E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17063/*"appear"*/);
    byte_4E7A12E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_17063/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A129 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A129 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A128 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A128 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A12A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A12A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A127 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21546/*"kill"*/);
    byte_4E7A127 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21546/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A162 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21324/*"isHideShadow"*/);
    byte_4E7A162 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21324/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4E7A14A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4E7A14A = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A139 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21615/*"leader"*/);
    byte_4E7A139 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21615/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A144 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24144/*"startPos"*/);
    byte_4E7A144 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_24144/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A141 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22573/*"multiTargetCore"*/);
    byte_4E7A141 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22573/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A143 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22574/*"multiTargetUnder"*/);
    byte_4E7A143 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22574/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7A142 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22575/*"multiTargetUp"*/);
    byte_4E7A142 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22575/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A130 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23399/*"raid"*/);
    byte_4E7A130 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23399/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4E7A149 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4E7A149 = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A136 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23750/*"sendDamageForSuperBossId"*/);
    byte_4E7A136 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23750/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A132 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24329/*"superBoss"*/);
    byte_4E7A132 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24329/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7A135 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24331/*"superBossUi"*/);
    byte_4E7A135 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24331/*"superBossUi"*/, v2);
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

  if ( (byte_4E7A15B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1D0F0B4(&StringLiteral_24363/*"svt_change"*/);
    byte_4E7A15B = 1;
  }
  v10 = (Il2CppObject *)StringLiteral_24363/*"svt_change"*/;
  *dict = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)dict, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          v10,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12 )
LABEL_20:
    sub_1D0F30C(v12, v11);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v12,
           v10,
           (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)dict, v23, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4E7A15C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1D0F0B4(&long_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&StringLiteral_23239/*"priority"*/);
    sub_1D0F0B4(&StringLiteral_25146/*"value"*/);
    byte_4E7A15C = 1;
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
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
LABEL_25:
    sub_1D0F30C(v10, v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v28.fields._current;
    }
    while ( !v28.fields._current );
    v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1D0F6A8(v28.fields._current);
LABEL_27:
      sub_1D0F30C(v15, v16);
    }
    v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v28.fields._current,
            (Il2CppObject *)StringLiteral_23239/*"priority"*/,
            (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v15 )
      goto LABEL_27;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1D0F6A8(v15);
LABEL_29:
      sub_1D0F30C(v19, v20);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v15, long_TypeInfo, v17, v18) != priority );
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_25146/*"value"*/,
          (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 )
    goto LABEL_29;
  if ( v19->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v19, long_TypeInfo, v21, v22);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1D0F6A8(v19);
    if ( v24 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1DF3290();
    }
    v25 = *(_QWORD *)__cxa_begin_catch(v23);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v25 )
      sub_1D0F304(v25);
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

  if ( (byte_4E7A194 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleDeckServantData___c_TypeInfo);
    byte_4E7A194 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1D0F058(
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
    sub_1D0F30C(this, 0);
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
    sub_1D0F30C(this, 0);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__55_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4E7A198 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7A198 = 1;
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

  if ( (byte_4E7A197 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7A197 = 1;
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

  if ( (byte_4E7A196 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7A196 = 1;
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

  if ( (byte_4E7A195 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7A195 = 1;
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
    sub_1D0F30C(this, 0);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}