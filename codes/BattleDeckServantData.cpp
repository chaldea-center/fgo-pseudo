void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B50 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B50 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, v2);
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

  if ( (byte_4C29B69 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16722/*"aiResetTiming"*/);
    byte_4C29B69 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16722/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29B89 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16917/*"assumedEffectId"*/);
    byte_4C29B89 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_16917/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B94 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17809/*"changePersonality"*/);
    byte_4C29B94 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17809/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B93 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17810/*"changePolicy"*/);
    byte_4C29B93 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17810/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4C29B72 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_long___);
    sub_1C2D490(&StringLiteral_23407/*"shiftPosition"*/);
    byte_4C29B72 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23407/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_30BC1D8 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B8F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18633/*"dispBreakShift"*/);
    byte_4C29B8F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18633/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B91 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18636/*"dispLimitCount"*/);
    byte_4C29B91 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18636/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C29B9B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18634/*"dispChangeSkillIds"*/);
    byte_4C29B9B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18634/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BA3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18052/*"colorType"*/);
    byte_4C29BA3 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18052/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4C29BA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19028/*"enemyTargetTouchArea"*/);
    byte_4C29BA6 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19028/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v4,
                                                            (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BA9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19038/*"entryOrder"*/);
    byte_4C29BA9 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19038/*"entryOrder"*/,
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

  if ( (byte_4C29B99 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19953/*"hidePersonality"*/);
    byte_4C29B99 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19953/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B98 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19954/*"hidePolicy"*/);
    byte_4C29B98 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19954/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B9A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19951/*"hideAttri"*/);
    byte_4C29B9A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19951/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B90 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20276/*"imageSvtId"*/);
    byte_4C29B90 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20276/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  BattleMotionSelectType_array *v4; // x19

  if ( (byte_4C29BB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_21640/*"motionSelectTypeByGender"*/);
    byte_4C29BB0 = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_21640/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v4->obj,
                                             (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B88 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9506/*"NoSkipDeadFirstId"*/);
    byte_4C29B88 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9506/*"NoSkipDeadFirstId"*/, 0, v2);
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

  if ( (byte_4C29BA1 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_12793/*"SetFriendShipRankFromUserServant"*/);
    sub_1C2D490(&StringLiteral_6810/*"ForceSetFriendShipRank"*/);
    byte_4C29BA1 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6810/*"ForceSetFriendShipRank"*/,
         0) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6810/*"ForceSetFriendShipRank"*/,
             0,
             0);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12793/*"SetFriendShipRankFromUserServant"*/,
             0);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1C2D6EC(HasKey, v7);
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4C29BA2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22563/*"overwriteShiftIcon"*/);
    byte_4C29BA2 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_22563/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B9C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22513/*"overwriteBreakShiftVoice"*/);
    byte_4C29B9C = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22513/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B96 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22548/*"overwritePersonality"*/);
    byte_4C29B96 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22548/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B95 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22550/*"overwritePolicy"*/);
    byte_4C29B95 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22550/*"overwritePolicy"*/, 0, v2);
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

  if ( (byte_4C29B84 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10079/*"OverwriteShadow"*/);
    byte_4C29B84 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10079/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v5 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v5,
                                                           (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v8 )
    {
      sub_1C7DC00(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C7DBA4(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v10 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B97 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22511/*"overwriteAttri"*/);
    byte_4C29B97 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22511/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BA5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23078/*"revivalTarget"*/);
    byte_4C29BA5 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23078/*"revivalTarget"*/,
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
  const MethodInfo *v17; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C29B8A & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__string__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    byte_4C29B8A = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
              v13 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v13,
                v14,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__,
                0);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__77_0 = (struct System_Converter_object__string__o *)v13;
              sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)v13, v16, v17);
            }
            if ( !v11
              || (v12 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v11,
                          (System_Converter_T__TOutput__o *)v13,
                          (const MethodInfo_2FF5F70 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0 )
            {
              sub_1C2D6EC(v12, v8);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v12,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22562/*"overwriteShift"*/);
    byte_4C29BAD = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22562/*"overwriteShift"*/,
           0,
           0);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C29B8B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24170/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4C29B8B = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24170/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B8C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24171/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4C29B8C = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24171/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B68 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24685/*"voicePatternId"*/);
    byte_4C29B68 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24685/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19038/*"entryOrder"*/);
    byte_4C29BAA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19038/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BA7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22276/*"notActiveEnemyMeshCollider"*/);
    byte_4C29BA7 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22276/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B75 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20942/*"isSkillShiftInfo"*/);
    byte_4C29B75 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20942/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C29BA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&StringLiteral_7330/*"HideBattlePointGauge"*/);
    byte_4C29BA0 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7330/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B8E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19952/*"hideClassSkill"*/);
    byte_4C29B8E = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19952/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19955/*"hideStatusDuringEntry"*/);
    byte_4C29BAB = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19955/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C29B9F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&StringLiteral_7542/*"IgnoreBattlePointUp"*/);
    byte_4C29B9F = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7542/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20264/*"ignoreShiftWhiteFade"*/);
    byte_4C29BAE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20264/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B8D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20914/*"isLateUpdatePopup"*/);
    byte_4C29B8D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20914/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C29B7F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C29B7F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21640/*"motionSelectTypeByGender"*/);
    byte_4C29BAF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21640/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B87 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9499/*"NoAutoSkipDead"*/);
    byte_4C29B87 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9499/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B9D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9503/*"NoMotion"*/);
    byte_4C29B9D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9503/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B86 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9505/*"NoSkipDead"*/);
    byte_4C29B86 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9505/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B52 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22234/*"noVoice"*/);
    byte_4C29B52 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22234/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B92 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20940/*"isShadow"*/);
    byte_4C29B92 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20940/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BAC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20941/*"isShowGrandEffect"*/);
    byte_4C29BAC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20941/*"isShowGrandEffect"*/,
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

  if ( (byte_4C29B9E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_bool___ctor__);
    sub_1C2D490(&StringLiteral_18979/*"enableBreakShiftVoice"*/);
    byte_4C29B9E = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18979/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18979/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_38ABBA4 *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_38ABBA4 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C29BA8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24697/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_4C29BA8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24697/*"waitHpGaugeHideUntilDeadMotion"*/,
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

  if ( (byte_4C29B81 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19412/*"fieldMotionIds"*/);
    byte_4C29B81 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19412/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_1C2D434((CGThumbnailListItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C29B82 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17041/*"baseUniqueCameraId"*/);
    byte_4C29B82 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17041/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4C29B80 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19611/*"fov"*/);
    byte_4C29B80 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19611/*"fov"*/,
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

  if ( (byte_4C29B85 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_1C2D490(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__);
    sub_1C2D490(&BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
    byte_4C29B85 = 1;
  }
  v9 = sub_1C2D6DC(BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)shadowData, (int32_t)v14, v15, v16);
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
  __int64 monitor_high; // x1
  __int64 v21; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v23; // x22
  unsigned int v24; // w23
  Il2CppObject *v25; // x24

  if ( (byte_4C29BA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    sub_1C2D490(&StringLiteral_23253/*"sequenceSelectTypeByGender"*/);
    byte_4C29BA4 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23253/*"sequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v8 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__DeserializeArray_object_(
           v8,
           (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
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
      _9__103_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__103_0,
        v13,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__103_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__103_0, (int32_t)_9__103_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TKey__o *)_9__103_0,
                                                                 (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v17,
            (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v18 )
LABEL_26:
      sub_1C2D6EC(Master_object, monitor_high);
    max_length = v18->max_length;
    if ( max_length < 1 )
    {
LABEL_23:
      LOBYTE(Value_object__object) = 0;
    }
    else
    {
      v23 = (CommonReleaseMaster_o *)Master_object;
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= max_length )
          sub_1C2D6F4(Master_object, monitor_high, v21);
        v25 = v18->m_Items[v24];
        if ( !v25 )
          goto LABEL_26;
        monitor_high = HIDWORD(v25[1].monitor);
        if ( (int)monitor_high < 1 )
          break;
        if ( !v23 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v23, monitor_high, 0, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v18->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_23;
      }
      LOBYTE(Value_object__object) = 1;
      *genderSelectType = HIDWORD(v25[1].klass);
      *patternId = (int32_t)v25[1].monitor;
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

  if ( (byte_4C29B77 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19037/*"entryIndex"*/);
    byte_4C29B77 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19037/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19037/*"entryIndex"*/, entryIndex + 1, v5);
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

  if ( (byte_4C29B6A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C29B6A = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C2D6EC(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) == val;
      }
      else
      {
        sub_1C2D9AC(Item);
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

  if ( (byte_4C29B62 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17149/*"billBoardGroup"*/);
    byte_4C29B62 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17149/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B60 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17797/*"changeAttri"*/);
    byte_4C29B60 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17797/*"changeAttri"*/, 0, v2);
}


System_Int32_array *BattleDeckServantData__getChangeList(BattleDeckServantData_o *this, const MethodInfo *method)
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
  const MethodInfo *v13; // x3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4C29B74 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__getChangeList_b__54_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    sub_1C2D490(&StringLiteral_17796/*"change"*/);
    byte_4C29B74 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_17796/*"change"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17796/*"change"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__54_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__54_0, v10, Method_BattleDeckServantData___c__getChangeList_b__54_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C2D6EC(Item, v4);
  }
  sub_1C2D9AC(v6);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v15, v16);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C29B7A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22300/*"npInfoEnable"*/);
    byte_4C29B7A = 1;
  }
  v4 = (System_String_o *)StringLiteral_22300/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22300/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B61 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19026/*"enemyNameEffect"*/);
    byte_4C29B61 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19026/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B5F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24175/*"treasureDeviceVoiceId"*/);
    byte_4C29B5F = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24175/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B57 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20004/*"hpBarType"*/);
    byte_4C29B57 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20004/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_4C29B76 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&StringLiteral_19540/*"forceDropItem"*/);
    byte_4C29B76 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_19540/*"forceDropItem"*/,
                   (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B67 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18501/*"deadChangePos"*/);
    byte_4C29B67 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18501/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C29B7B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22299/*"npCharge"*/);
    byte_4C29B7B = 1;
  }
  v4 = (System_String_o *)StringLiteral_22299/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22299/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B5D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23852/*"svtVoiceId"*/);
    byte_4C29B5D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23852/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_4C29B7E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23858/*"svt_voice_id"*/);
    byte_4C29B7E = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23858/*"svt_voice_id"*/,
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

  if ( (byte_4C29B54 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22912/*"raid"*/);
    byte_4C29B54 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22912/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B5C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23173/*"scale"*/);
    byte_4C29B5C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23173/*"scale"*/, 100, v2);
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

  if ( (byte_4C29B6D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C29B6D = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C2D9AC(Item);
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

  if ( (byte_4C29B6F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C29B6F = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C2D6EC(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C2D9AC(value);
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

  if ( (byte_4C29B6E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C29B6E = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9 )
    sub_1C2D6EC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v9,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C2D9AC(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v12, v13);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B5A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23246/*"sendDamageForSuperBossId"*/);
    byte_4C29B5A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23246/*"sendDamageForSuperBossId"*/, 0, v2);
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
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4C29B73 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    sub_1C2D490(&StringLiteral_23406/*"shiftClear"*/);
    byte_4C29B73 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23406/*"shiftClear"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23406/*"shiftClear"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  _9__53_0 = v7->static_fields->__9__53_0;
  if ( !v6
    || (v4 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v10,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C2D6EC(Item, v4);
  }
  sub_1C2D9AC(v6);
  return BattleDeckServantData__getChangeList(v15, v16);
}


System_Int32_array *BattleDeckServantData__getShiftList(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleDeckServantData_o *v15; // x0
  int64_t v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4C29B71 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__getShiftList_b__51_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    sub_1C2D490(&StringLiteral_23404/*"shift"*/);
    byte_4C29B71 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23404/*"shift"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23404/*"shift"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  _9__51_0 = v7->static_fields->__9__51_0;
  if ( !v6
    || (v4 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v10, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C2D6EC(Item, v4);
  }
  sub_1C2D9AC(v6);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v15, v16, v17);
}


int32_t BattleDeckServantData__getSummonNpcId(BattleDeckServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  BattleDeckServantData___c_c *v9; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x2
  int32_t v17; // w8

  if ( (byte_4C29B70 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__);
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    sub_1C2D490(&StringLiteral_17689/*"call"*/);
    byte_4C29B70 = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v5,
         (Il2CppObject *)StringLiteral_17689/*"call"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17689/*"call"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v8 = (System_Collections_Generic_List_object__o *)Item;
    v9 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v9 = BattleDeckServantData___c_TypeInfo;
    }
    _9__50_0 = v9->static_fields->__9__50_0;
    if ( v8 )
    {
      v6 = System_Collections_Generic_List_object__TypeInfo;
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v8->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1C2D9AC(v8);
        goto LABEL_26;
      }
    }
    if ( !_9__50_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleDeckServantData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__50_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__50_0, v12, Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v14, v15);
    }
    if ( !v8
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v8,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0 )
    {
LABEL_24:
      sub_1C2D6EC(Item, v6);
    }
    v17 = *((_DWORD *)Item + 6);
    if ( v17 > index )
    {
      if ( v17 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1C2D6F4(Item, v6, v16);
    }
  }
  return -1;
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B56 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23824/*"superBoss"*/);
    byte_4C29B56 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23824/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C29B78 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24173/*"treasureDeviceName"*/);
    byte_4C29B78 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24173/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24173/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C29B79 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24174/*"treasureDeviceRuby"*/);
    byte_4C29B79 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24174/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24174/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4C29B5E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20889/*"isAddition"*/);
    byte_4C29B5E = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20889/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B51 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16814/*"appear"*/);
    byte_4C29B51 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16814/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B4A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21111/*"kill"*/);
    byte_4C29B4A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21111/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B83 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20911/*"isHideShadow"*/);
    byte_4C29B83 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20911/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4C29B6C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C29B6C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B5B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21179/*"leader"*/);
    byte_4C29B5B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21179/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B66 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23646/*"startPos"*/);
    byte_4C29B66 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23646/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B63 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22120/*"multiTargetCore"*/);
    byte_4C29B63 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22120/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B65 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22121/*"multiTargetUnder"*/);
    byte_4C29B65 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22121/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C29B64 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22122/*"multiTargetUp"*/);
    byte_4C29B64 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22122/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B53 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22912/*"raid"*/);
    byte_4C29B53 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22912/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4C29B6B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C29B6B = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B59 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23246/*"sendDamageForSuperBossId"*/);
    byte_4C29B59 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23246/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B55 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23824/*"superBoss"*/);
    byte_4C29B55 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23824/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C29B58 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23826/*"superBossUi"*/);
    byte_4C29B58 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23826/*"superBossUi"*/, v2);
}


bool BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  Il2CppObject *Item; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 naturalAligment; // x11
  System_Collections_Generic_Dictionary_string__object__o *v13; // x9
  int32_t v15; // w1
  __int64 v16; // x10

  if ( (byte_4C29B7C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&StringLiteral_23854/*"svt_change"*/);
    byte_4C29B7C = 1;
  }
  v6 = (Il2CppObject *)StringLiteral_23854/*"svt_change"*/;
  *dict = 0;
  sub_1C2D434((CGThumbnailListItem_o *)dict, 0, (int32_t)method, v3);
  v8 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v8 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v8,
          v6,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v8 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v8 )
LABEL_20:
    sub_1C2D6EC(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v8,
           v6,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v13 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    *dict = v13;
    v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment >= (unsigned int)v16 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v15 = (int)Item;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    v15 = 0;
    *dict = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)dict, v15, v10, v11);
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

  if ( (byte_4C29B7D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&StringLiteral_22755/*"priority"*/);
    sub_1C2D490(&StringLiteral_24611/*"value"*/);
    byte_4C29B7D = 1;
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
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v10 = dict;
  if ( !dict )
LABEL_25:
    sub_1C2D6EC(v10, v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v28.fields._current;
    }
    while ( !v28.fields._current );
    v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C2D9AC(v28.fields._current);
LABEL_27:
      sub_1C2D6EC(v15, v16);
    }
    v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v28.fields._current,
            (Il2CppObject *)StringLiteral_22755/*"priority"*/,
            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v15 )
      goto LABEL_27;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C2D9AC(v15);
LABEL_29:
      sub_1C2D6EC(v19, v20);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v15, long_TypeInfo, v17, v18) != priority );
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24611/*"value"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 )
    goto LABEL_29;
  if ( v19->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v19, long_TypeInfo, v21, v22);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1C2D9AC(v19);
    if ( v24 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1D165C4();
    }
    v25 = *(_QWORD *)__cxa_begin_catch(v23);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v25 )
      sub_1C2D6E4(v25);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C29BB1 & 1) == 0 )
  {
    sub_1C2D490(&BattleDeckServantData___c_TypeInfo);
    byte_4C29BB1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleDeckServantData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C29BB5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29BB5 = 1;
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

  if ( (byte_4C29BB4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29BB4 = 1;
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

  if ( (byte_4C29BB3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29BB3 = 1;
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

  if ( (byte_4C29BB2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29BB2 = 1;
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
    sub_1C2D6EC(this, 0);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}