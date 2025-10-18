void BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0);
}


bool BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45953 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C45953 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, v2);
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

  if ( (byte_4C4596C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16727/*"aiResetTiming"*/);
    byte_4C4596C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16727/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *BattleDeckServantData__GetAssumedEffectId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C4598C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16922/*"assumedEffectId"*/);
    byte_4C4598C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_16922/*"assumedEffectId"*/,
           0);
}


int32_t BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45997 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17814/*"changePersonality"*/);
    byte_4C45997 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17814/*"changePersonality"*/, -1, v2);
}


int32_t BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45996 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17815/*"changePolicy"*/);
    byte_4C45996 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17815/*"changePolicy"*/, -1, v2);
}


int32_t BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4C45975 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_long___);
    sub_1C37058(&StringLiteral_23429/*"shiftPosition"*/);
    byte_4C45975 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23429/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_30D54E0 *)Method_BasicHelper_GetValue_long___);
}


int32_t BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45992 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18643/*"dispBreakShift"*/);
    byte_4C45992 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18643/*"dispBreakShift"*/, 0, v2);
}


int32_t BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45994 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18646/*"dispLimitCount"*/);
    byte_4C45994 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18646/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C4599E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18644/*"dispChangeSkillIds"*/);
    byte_4C4599E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18644/*"dispChangeSkillIds"*/,
           0);
}


int32_t BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459A6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18058/*"colorType"*/);
    byte_4C459A6 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18058/*"colorType"*/,
           0,
           0);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v4; // x19

  if ( (byte_4C459A9 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_string__object___);
    sub_1C37058(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_19040/*"enemyTargetTouchArea"*/);
    byte_4C459A9 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_19040/*"enemyTargetTouchArea"*/,
                                                            0,
                                                            (const MethodInfo_30D5D78 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v4,
                                                            (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19050/*"entryOrder"*/);
    byte_4C459AC = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19050/*"entryOrder"*/,
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

  if ( (byte_4C4599C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19968/*"hidePersonality"*/);
    byte_4C4599C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19968/*"hidePersonality"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4599B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19969/*"hidePolicy"*/);
    byte_4C4599B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19969/*"hidePolicy"*/, 0, v2);
}


int32_t BattleDeckServantData__GetHideStateSubAttribute(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4599D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19966/*"hideAttri"*/);
    byte_4C4599D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19966/*"hideAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45993 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20291/*"imageSvtId"*/);
    byte_4C45993 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20291/*"imageSvtId"*/, 0, v2);
}


int32_t BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45952 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C45952 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 0, v2);
}


BattleMotionSelectType_array *BattleDeckServantData__GetMotionSelectTypeByGenderArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  BattleMotionSelectType_array *result; // x0
  BattleMotionSelectType_array *v4; // x19

  if ( (byte_4C459B3 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_string__object___);
    sub_1C37058(&Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_21658/*"motionSelectTypeByGender"*/);
    byte_4C459B3 = 1;
  }
  result = (BattleMotionSelectType_array *)BasicHelper__GetValue_object__object_(
                                             *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                             (Il2CppObject *)StringLiteral_21658/*"motionSelectTypeByGender"*/,
                                             0,
                                             (const MethodInfo_30D5D78 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleMotionSelectType_array *)JsonManager__DeserializeArray_object_(
                                             &v4->obj,
                                             (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_BattleMotionSelectType___);
  }
  return result;
}


int32_t BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4598B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9513/*"NoSkipDeadFirstId"*/);
    byte_4C4598B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9513/*"NoSkipDeadFirstId"*/, 0, v2);
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

  if ( (byte_4C459A4 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_12798/*"SetFriendShipRankFromUserServant"*/);
    sub_1C37058(&StringLiteral_6816/*"ForceSetFriendShipRank"*/);
    byte_4C459A4 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6816/*"ForceSetFriendShipRank"*/,
         0) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6816/*"ForceSetFriendShipRank"*/,
             0,
             0);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12798/*"SetFriendShipRankFromUserServant"*/,
             0);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1C372B4(HasKey);
  v7 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
}


EnemyScriptParam_OverwriteShiftIcon_array *BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4C459A5 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_string__object___);
    sub_1C37058(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_22583/*"overwriteShiftIcon"*/);
    byte_4C459A5 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_22583/*"overwriteShiftIcon"*/,
                                                          0,
                                                          (const MethodInfo_30D5D78 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4599F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22533/*"overwriteBreakShiftVoice"*/);
    byte_4C4599F = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22533/*"overwriteBreakShiftVoice"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45999 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22568/*"overwritePersonality"*/);
    byte_4C45999 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22568/*"overwritePersonality"*/, 0, v2);
}


System_String_o *BattleDeckServantData__GetOverwritePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45998 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22570/*"overwritePolicy"*/);
    byte_4C45998 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22570/*"overwritePolicy"*/, 0, v2);
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

  if ( (byte_4C45987 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
    sub_1C37058(&Method_BasicHelper_GetValue_string__object___);
    sub_1C37058(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_10085/*"OverwriteShadow"*/);
    byte_4C45987 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10085/*"OverwriteShadow"*/,
                           0,
                           (const MethodInfo_30D5D78 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v5 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v5,
                                                           (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v8 )
    {
      sub_1C877C8(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v10 + 184);
  }
}


System_String_o *BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4599A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22531/*"overwriteAttri"*/);
    byte_4C4599A = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22531/*"overwriteAttri"*/, 0, v2);
}


int32_t BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459A8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23100/*"revivalTarget"*/);
    byte_4C459A8 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23100/*"revivalTarget"*/,
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

  if ( (byte_4C4598D & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__string__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    byte_4C4598D = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v7,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
              v12 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v12,
                v13,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__,
                0);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__77_0 = (struct System_Converter_object__string__o *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)v12, v15, v16);
            }
            if ( !v10
              || (v11 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v10,
                          (System_Converter_T__TOutput__o *)v12,
                          (const MethodInfo_300F278 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0 )
            {
              sub_1C372B4(v11);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v11,
                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t BattleDeckServantData__GetShiftMotionOverwriteNumber(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459B0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22582/*"overwriteShift"*/);
    byte_4C459B0 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22582/*"overwriteShift"*/,
           0,
           0);
}


System_String_o *BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C4598E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24192/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4C4598E = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24192/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4598F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24193/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4C4598F = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24193/*"treasureDeviceErrorStatusVoiceSeList"*/, 0, v2);
}


int32_t BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4596B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24708/*"voicePatternId"*/);
    byte_4C4596B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24708/*"voicePatternId"*/, -1, v2);
}


bool BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19050/*"entryOrder"*/);
    byte_4C459AD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19050/*"entryOrder"*/,
           0);
}


bool BattleDeckServantData__IsActiveEnemyMeshCollider(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22296/*"notActiveEnemyMeshCollider"*/);
    byte_4C459AA = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22296/*"notActiveEnemyMeshCollider"*/,
            0);
}


bool BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45978 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20957/*"isSkillShiftInfo"*/);
    byte_4C45978 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20957/*"isSkillShiftInfo"*/, v2);
}


bool BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45951 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C45951 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 5, v2);
}


bool BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C459A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&StringLiteral_7336/*"HideBattlePointGauge"*/);
    byte_4C459A3 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7336/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsHideClassSkillNpcFollower(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45991 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19967/*"hideClassSkill"*/);
    byte_4C45991 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19967/*"hideClassSkill"*/, v2);
}


bool BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19970/*"hideStatusDuringEntry"*/);
    byte_4C459AE = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19970/*"hideStatusDuringEntry"*/,
           0,
           0) != 0;
}


bool BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C459A2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&StringLiteral_7549/*"IgnoreBattlePointUp"*/);
    byte_4C459A2 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7549/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459B1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20279/*"ignoreShiftWhiteFade"*/);
    byte_4C459B1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20279/*"ignoreShiftWhiteFade"*/,
           0);
}


bool BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45990 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20929/*"isLateUpdatePopup"*/);
    byte_4C45990 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20929/*"isLateUpdatePopup"*/, v2);
}


bool BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45982 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45982 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0);
}


bool BattleDeckServantData__IsMotionSelectTypeByGender(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459B2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21658/*"motionSelectTypeByGender"*/);
    byte_4C459B2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_21658/*"motionSelectTypeByGender"*/,
           0);
}


bool BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4598A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9506/*"NoAutoSkipDead"*/);
    byte_4C4598A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9506/*"NoAutoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C459A0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9510/*"NoMotion"*/);
    byte_4C459A0 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9510/*"NoMotion"*/, 1, v2);
}


bool BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45989 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9512/*"NoSkipDead"*/);
    byte_4C45989 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9512/*"NoSkipDead"*/, 1, v2);
}


bool BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45955 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22254/*"noVoice"*/);
    byte_4C45955 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22254/*"noVoice"*/, 1, v2);
}


bool BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45995 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20955/*"isShadow"*/);
    byte_4C45995 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20955/*"isShadow"*/, v2);
}


bool BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20956/*"isShowGrandEffect"*/);
    byte_4C459AF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20956/*"isShowGrandEffect"*/,
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

  if ( (byte_4C459A1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_bool___ctor__);
    sub_1C37058(&StringLiteral_18991/*"enableBreakShiftVoice"*/);
    byte_4C459A1 = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18991/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18991/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4C459AB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24720/*"waitHpGaugeHideUntilDeadMotion"*/);
    byte_4C459AB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24720/*"waitHpGaugeHideUntilDeadMotion"*/,
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

  if ( (byte_4C45984 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19426/*"fieldMotionIds"*/);
    byte_4C45984 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19426/*"fieldMotionIds"*/,
               0,
               0);
  *fieldMotionIds = IntArray;
  sub_1C36FFC((CGThumbnailListItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0);
}


bool BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C45985 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17046/*"baseUniqueCameraId"*/);
    byte_4C45985 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_17046/*"baseUniqueCameraId"*/,
               0,
               0);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool BattleDeckServantData__TryGetOverwriteFov(BattleDeckServantData_o *this, float *fov, const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4C45983 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19626/*"fov"*/);
    byte_4C45983 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19626/*"fov"*/,
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

  if ( (byte_4C45988 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
    sub_1C37058(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__);
    sub_1C37058(&BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
    byte_4C45988 = 1;
  }
  v9 = sub_1C372A4(BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_DWORD *)(v9 + 16) = battleBgId;
  *(_DWORD *)(v9 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v11);
  v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v14;
  sub_1C36FFC((CGThumbnailListItem_o *)shadowData, (int32_t)v14, v15, v16);
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

  if ( (byte_4C459A7 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_string__object___);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C37058(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C37058(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    sub_1C37058(&StringLiteral_23275/*"sequenceSelectTypeByGender"*/);
    byte_4C459A7 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23275/*"sequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_30D5D78 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v8 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__DeserializeArray_object_(
           v8,
           (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
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
      _9__103_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__103_0,
        v13,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__103_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__103_0, (int32_t)_9__103_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TKey__o *)_9__103_0,
                                                                 (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v17,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v18 )
LABEL_26:
      sub_1C372B4(Master_object);
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
          sub_1C372BC(Master_object);
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

  if ( (byte_4C4597A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19049/*"entryIndex"*/);
    byte_4C4597A = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19049/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19049/*"entryIndex"*/, entryIndex + 1, v5);
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

  if ( (byte_4C4596D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C4596D = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v7 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v7,
           (Il2CppObject *)key,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C372B4(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v7) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) == val;
      }
      else
      {
        sub_1C37574(Item);
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

  if ( (byte_4C45965 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17155/*"billBoardGroup"*/);
    byte_4C45965 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17155/*"billBoardGroup"*/, -1, v2);
}


int32_t BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45963 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17802/*"changeAttri"*/);
    byte_4C45963 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17802/*"changeAttri"*/, 0, v2);
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

  if ( (byte_4C45977 & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__getChangeList_b__54_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    sub_1C37058(&StringLiteral_17801/*"change"*/);
    byte_4C45977 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_17801/*"change"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17801/*"change"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__54_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__54_0, v9, Method_BattleDeckServantData___c__getChangeList_b__54_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_300F174 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C372B4(Item);
  }
  sub_1C37574(v5);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v14, v15);
}


bool BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C4597D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22320/*"npInfoEnable"*/);
    byte_4C4597D = 1;
  }
  v4 = (System_String_o *)StringLiteral_22320/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22320/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45964 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19038/*"enemyNameEffect"*/);
    byte_4C45964 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19038/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45962 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24197/*"treasureDeviceVoiceId"*/);
    byte_4C45962 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24197/*"treasureDeviceVoiceId"*/, 0, v2);
}


int32_t BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4595A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20019/*"hpBarType"*/);
    byte_4C4595A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20019/*"hpBarType"*/, 0, v2);
}


bool BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0

  if ( (byte_4C45979 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&StringLiteral_19555/*"forceDropItem"*/);
    byte_4C45979 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v3 )
    LOBYTE(v3) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v3,
                   (Il2CppObject *)StringLiteral_19555/*"forceDropItem"*/,
                   (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v3;
}


int32_t BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4596A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18509/*"deadChangePos"*/);
    byte_4C4596A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18509/*"deadChangePos"*/, -1, v2);
}


int32_t BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C4597E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22319/*"npCharge"*/);
    byte_4C4597E = 1;
  }
  v4 = (System_String_o *)StringLiteral_22319/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22319/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t BattleDeckServantData__getOverWriteSvtVoiceIdOld(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45960 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23874/*"svtVoiceId"*/);
    byte_4C45960 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23874/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_4C45981 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_23880/*"svt_voice_id"*/);
    byte_4C45981 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v6 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0);
  if ( v6
    && (v8 = v6, ServantChangeEntity__IsEnable(v6, 0))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23880/*"svt_voice_id"*/,
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

  if ( (byte_4C45957 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22933/*"raid"*/);
    byte_4C45957 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22933/*"raid"*/, 0, v2);
}


int32_t BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4595F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23195/*"scale"*/);
    byte_4C4595F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23195/*"scale"*/, 100, v2);
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

  if ( (byte_4C45970 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C45970 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  sub_1C37574(Item);
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

  if ( (byte_4C45972 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&long_TypeInfo);
    byte_4C45972 = 1;
  }
  value = 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v7,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C372B4(0);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v8, v9);
  sub_1C37574(value);
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

  if ( (byte_4C45971 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&string_TypeInfo);
    byte_4C45971 = 1;
  }
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v8 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v8 )
    sub_1C372B4(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v8,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C37574(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v11, v12);
}


int32_t BattleDeckServantData__getSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4595D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23268/*"sendDamageForSuperBossId"*/);
    byte_4C4595D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23268/*"sendDamageForSuperBossId"*/, 0, v2);
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

  if ( (byte_4C45976 & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    sub_1C37058(&StringLiteral_23428/*"shiftClear"*/);
    byte_4C45976 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23428/*"shiftClear"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23428/*"shiftClear"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__53_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v9,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_300F174 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C372B4(Item);
  }
  sub_1C37574(v5);
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

  if ( (byte_4C45974 & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__getShiftList_b__51_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    sub_1C37058(&StringLiteral_23426/*"shift"*/);
    byte_4C45974 = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v3
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23426/*"shift"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23426/*"shift"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__51_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v9, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v11, v12);
    }
    if ( v5 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v5,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_300F174 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C372B4(Item);
  }
  sub_1C37574(v5);
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

  if ( (byte_4C45973 & 1) == 0 )
  {
    sub_1C37058(&System_Converter_object__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__);
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    sub_1C37058(&StringLiteral_17695/*"call"*/);
    byte_4C45973 = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v5,
         (Il2CppObject *)StringLiteral_17695/*"call"*/,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17695/*"call"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        sub_1C37574(v7);
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
      _9__50_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__50_0, v11, Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, 0);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v13, v14);
    }
    if ( !v7
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v7,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_300F174 *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0 )
    {
LABEL_24:
      sub_1C372B4(Item);
    }
    v15 = *((_DWORD *)Item + 6);
    if ( v15 > index )
    {
      if ( v15 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1C372BC(Item);
    }
  }
  return -1;
}


int32_t BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45959 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23846/*"superBoss"*/);
    byte_4C45959 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23846/*"superBoss"*/, 0, v2);
}


System_String_o *BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C4597B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24195/*"treasureDeviceName"*/);
    byte_4C4597B = 1;
  }
  v4 = (System_String_o *)StringLiteral_24195/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24195/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0, v5);
  else
    return 0;
}


System_String_o *BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C4597C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24196/*"treasureDeviceRuby"*/);
    byte_4C4597C = 1;
  }
  v4 = (System_String_o *)StringLiteral_24196/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24196/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4C45961 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20904/*"isAddition"*/);
    byte_4C45961 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20904/*"isAddition"*/, v2);
}


bool BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45954 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16819/*"appear"*/);
    byte_4C45954 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16819/*"appear"*/, 1, v2);
}


bool BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4594F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C4594F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 3, v2);
}


bool BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4594E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C4594E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 2, v2);
}


bool BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45950 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C45950 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 4, v2);
}


bool BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4594D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21126/*"kill"*/);
    byte_4C4594D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21126/*"kill"*/, 1, v2);
}


bool BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45986 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20926/*"isHideShadow"*/);
    byte_4C45986 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20926/*"isHideShadow"*/, 1, v2);
}


bool BattleDeckServantData__isInfoScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4C4596F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C4596F = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C4595E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21194/*"leader"*/);
    byte_4C4595E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21194/*"leader"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetBattleStartPos(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45969 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23668/*"startPos"*/);
    byte_4C45969 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23668/*"startPos"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45966 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22140/*"multiTargetCore"*/);
    byte_4C45966 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22140/*"multiTargetCore"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45968 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22141/*"multiTargetUnder"*/);
    byte_4C45968 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22141/*"multiTargetUnder"*/, 1, v2);
}


bool BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C45967 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22142/*"multiTargetUp"*/);
    byte_4C45967 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22142/*"multiTargetUp"*/, 1, v2);
}


bool BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45956 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22933/*"raid"*/);
    byte_4C45956 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22933/*"raid"*/, v2);
}


bool BattleDeckServantData__isScript(BattleDeckServantData_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4C4596E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C4596E = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool BattleDeckServantData__isSendDamageForSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C4595C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23268/*"sendDamageForSuperBossId"*/);
    byte_4C4595C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23268/*"sendDamageForSuperBossId"*/, v2);
}


bool BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C45958 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23846/*"superBoss"*/);
    byte_4C45958 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23846/*"superBoss"*/, v2);
}


bool BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C4595B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23848/*"superBossUi"*/);
    byte_4C4595B = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23848/*"superBossUi"*/, v2);
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

  if ( (byte_4C4597F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&StringLiteral_23876/*"svt_change"*/);
    byte_4C4597F = 1;
  }
  v6 = (Il2CppObject *)StringLiteral_23876/*"svt_change"*/;
  *dict = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)dict, 0, (int32_t)method, v3);
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          v6,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v7 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v7 )
LABEL_20:
    sub_1C372B4(v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v7,
           v6,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)dict, v14, v9, v10);
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

  if ( (byte_4C45980 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&StringLiteral_22776/*"priority"*/);
    sub_1C37058(&StringLiteral_24634/*"value"*/);
    byte_4C45980 = 1;
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
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  v9 = dict;
  if ( !dict )
LABEL_25:
    sub_1C372B4(v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)dict,
           (Il2CppObject *)key,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v25 = v24;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_23;
      current = v25.fields._current;
    }
    while ( !v25.fields._current );
    v13 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v25.fields._current->klass->_2.naturalAligment < (unsigned int)v13
      || (System_Collections_Generic_Dictionary_string__object__c *)v25.fields._current->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C37574(v25.fields._current);
LABEL_27:
      sub_1C372B4(v14);
    }
    v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v25.fields._current,
            (Il2CppObject *)StringLiteral_22776/*"priority"*/,
            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v14 )
      goto LABEL_27;
    if ( v14->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C37574(v14);
LABEL_29:
      sub_1C372B4(v17);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v14, long_TypeInfo, v15, v16) != priority );
  v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24634/*"value"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v17 )
    goto LABEL_29;
  if ( v17->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v17, long_TypeInfo, v18, v19);
LABEL_23:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1C37574(v17);
    if ( v21 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1D2018C();
    }
    v22 = *(_QWORD *)__cxa_begin_catch(v20);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v22 )
      sub_1C372AC(v22);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C459B4 & 1) == 0 )
  {
    sub_1C37058(&BattleDeckServantData___c_TypeInfo);
    byte_4C459B4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleDeckServantData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return x->fields.priority;
}


int32_t BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C459B8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C459B8 = 1;
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

  if ( (byte_4C459B7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C459B7 = 1;
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

  if ( (byte_4C459B6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C459B6 = 1;
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

  if ( (byte_4C459B5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C459B5 = 1;
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
    sub_1C372B4(this);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0);
}