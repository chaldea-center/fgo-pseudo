void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECF1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECF1 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, v2);
}


bool __fastcall BattleDeckServantData__ExistsScript(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.npcId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__GetAiResetTiming(
        BattleDeckServantData_o *this,
        int32_t defTiming,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1ED0A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16589/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_4B1ED0A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16589/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1ED2A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16784/*"assumedEffectId"*/, method);
    byte_4B1ED2A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_16784/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED35 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17667/*"changePersonality"*/, method);
    byte_4B1ED35 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17667/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED34 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17668/*"changePolicy"*/, method);
    byte_4B1ED34 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17668/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4B1ED13 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_long___, defVal);
    sub_1BCAFF8(&StringLiteral_23219/*"shiftPosition"*/, v5);
    byte_4B1ED13 = 1;
  }
  return BasicHelper__GetValue_long_(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_23219/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_3008404 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED30 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18483/*"dispBreakShift"*/, method);
    byte_4B1ED30 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18483/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED32 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18486/*"dispLimitCount"*/, method);
    byte_4B1ED32 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18486/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1ED3C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18484/*"dispChangeSkillIds"*/, method);
    byte_4B1ED3C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18484/*"dispChangeSkillIds"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED44 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17906/*"colorType"*/, method);
    byte_4B1ED44 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_17906/*"colorType"*/,
           0,
           0LL);
}


EnemyScriptParam_EnemyTargetTouchAreaData_o *__fastcall BattleDeckServantData__GetEnemyTargetTouchAreaData(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EnemyScriptParam_EnemyTargetTouchAreaData_o *result; // x0
  Il2CppObject *v7; // x19

  if ( (byte_4B1ED47 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___, v3);
    sub_1BCAFF8(&JsonManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_18872/*"enemyTargetTouchArea"*/, v5);
    byte_4B1ED47 = 1;
  }
  result = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)BasicHelper__GetValue_object__object_(
                                                            *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                            (Il2CppObject *)StringLiteral_18872/*"enemyTargetTouchArea"*/,
                                                            0LL,
                                                            (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = (Il2CppObject *)result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_EnemyTargetTouchAreaData_o *)JsonManager__Deserialize_object_(
                                                            v7,
                                                            (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_EnemyScriptParam_EnemyTargetTouchAreaData___);
  }
  return result;
}


int32_t __fastcall BattleDeckServantData__GetEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED4A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18882/*"entryOrder"*/, method);
    byte_4B1ED4A = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18882/*"entryOrder"*/,
           0x7FFFFFFF,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetFollowerType(
        BattleDeckServantData_o *this,
        int32_t oldFollowerType,
        const MethodInfo *method)
{
  if ( this->fields.followerType >= 0 )
    return this->fields.followerType;
  else
    return oldFollowerType;
}


int32_t __fastcall BattleDeckServantData__GetHideStatePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED3A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19788/*"hidePersonality"*/, method);
    byte_4B1ED3A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19788/*"hidePersonality"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED39 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19789/*"hidePolicy"*/, method);
    byte_4B1ED39 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19789/*"hidePolicy"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED3B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19786/*"hideAttri"*/, method);
    byte_4B1ED3B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19786/*"hideAttri"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED31 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20110/*"imageSvtId"*/, method);
    byte_4B1ED31 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20110/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECF0 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED29 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9437/*"NoSkipDeadFirstId"*/, method);
    byte_4B1ED29 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9437/*"NoSkipDeadFirstId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 HasKey; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B1ED42 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity);
    sub_1BCAFF8(&StringLiteral_12684/*"SetFriendShipRankFromUserServant"*/, v5);
    sub_1BCAFF8(&StringLiteral_6763/*"ForceSetFriendShipRank"*/, v6);
    byte_4B1ED42 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(
         *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
         (System_String_o *)StringLiteral_6763/*"ForceSetFriendShipRank"*/,
         0LL) )
  {
    return EntityScriptUtil__GetIntValue(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_6763/*"ForceSetFriendShipRank"*/,
             0,
             0LL);
  }
  HasKey = EntityScriptUtil__ScriptHasKey(
             *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
             (System_String_o *)StringLiteral_12684/*"SetFriendShipRankFromUserServant"*/,
             0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1BCB254(HasKey, v9);
  v10 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v12, 0LL);
}


EnemyScriptParam_OverwriteShiftIcon_array *__fastcall BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v7; // x19

  if ( (byte_4B1ED43 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____, v3);
    sub_1BCAFF8(&JsonManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_22377/*"overwriteShiftIcon"*/, v5);
    byte_4B1ED43 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                                                          (Il2CppObject *)StringLiteral_22377/*"overwriteShiftIcon"*/,
                                                          0LL,
                                                          (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v7->obj,
                                                          (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED3D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22332/*"overwriteBreakShiftVoice"*/, method);
    byte_4B1ED3D = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22332/*"overwriteBreakShiftVoice"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED37 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22363/*"overwritePersonality"*/, method);
    byte_4B1ED37 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22363/*"overwritePersonality"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED36 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22365/*"overwritePolicy"*/, method);
    byte_4B1ED36 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22365/*"overwritePolicy"*/, 0LL, v2);
}


EnemyScriptParam_OverwriteShadowData_array *__fastcall BattleDeckServantData__GetOverwriteShadowDataArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Value_object__object; // x0
  long double inited; // q0
  Il2CppObject *v9; // x19
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_4B1ED25 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___, method);
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, v3);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____, v4);
    sub_1BCAFF8(&JsonManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_10008/*"OverwriteShadow"*/, v6);
    byte_4B1ED25 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_10008/*"OverwriteShadow"*/,
                           0LL,
                           (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v9 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v9,
                                                           (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v11 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v12 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v12 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C1B45C(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v14 + 184);
  }
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED38 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22330/*"overwriteAttri"*/, method);
    byte_4B1ED38 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22330/*"overwriteAttri"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetRevivalTargetId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED46 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22890/*"revivalTarget"*/, method);
    byte_4B1ED46 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22890/*"revivalTarget"*/,
           0,
           0LL);
}


System_String_array *__fastcall BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *v13; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_object__c *v16; // x10
  System_Collections_Generic_List_object__o *v17; // x20
  void *v18; // x0
  System_Converter_TInput__TOutput__o *v19; // x19
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1ED2B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__string__TypeInfo, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__, v11);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v12);
    byte_4B1ED2B = 1;
  }
  value = 0LL;
  v13 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v13 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v13,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          v16 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1];
          v17 = v16 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v16 == System_Collections_Generic_List_object__TypeInfo )
          {
            v18 = BattleDeckServantData___c_TypeInfo;
            if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v18 = BattleDeckServantData___c_TypeInfo;
            }
            v19 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)v18 + 23) + 40LL);
            if ( !v19 )
            {
              if ( !*((_DWORD *)v18 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v18);
                v18 = BattleDeckServantData___c_TypeInfo;
              }
              v20 = (Il2CppObject *)**((_QWORD **)v18 + 23);
              v19 = (System_Converter_TInput__TOutput__o *)sub_1BCB244(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v19,
                v20,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__77_0 = (struct System_Converter_object__string__o *)v19;
              sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)v19, v22, v23);
            }
            if ( !v17
              || (v18 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v17,
                          (System_Converter_T__TOutput__o *)v19,
                          (const MethodInfo_2F4A124 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1BCB254(v18, v14);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v18,
                                            (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


int32_t __fastcall BattleDeckServantData__GetShiftMotionOverwriteNumber(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1ED4E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22376/*"overwriteShift"*/, method);
    byte_4B1ED4E = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_22376/*"overwriteShift"*/,
           0,
           0LL);
}


System_String_o *__fastcall BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1ED2C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23976/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_4B1ED2C = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23976/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED2D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23977/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_4B1ED2D = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_23977/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED09 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24491/*"voicePatternId"*/, method);
    byte_4B1ED09 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24491/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__HasEntryOrder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED4B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18882/*"entryOrder"*/, method);
    byte_4B1ED4B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_18882/*"entryOrder"*/,
           0LL);
}


bool __fastcall BattleDeckServantData__IsActiveEnemyMeshCollider(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1ED48 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22096/*"notActiveEnemyMeshCollider"*/, method);
    byte_4B1ED48 = 1;
  }
  return !EntityScriptUtil__ScriptHasKey(
            *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
            (System_String_o *)StringLiteral_22096/*"notActiveEnemyMeshCollider"*/,
            0LL);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ED16 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20768/*"isSkillShiftInfo"*/, method);
    byte_4B1ED16 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20768/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECEF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECEF = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B1ED41 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BCAFF8(&StringLiteral_7269/*"HideBattlePointGauge"*/, v5);
    byte_4B1ED41 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7269/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ED2F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19787/*"hideClassSkill"*/, method);
    byte_4B1ED2F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19787/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsHideStatusDuringEntry(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED4C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19790/*"hideStatusDuringEntry"*/, method);
    byte_4B1ED4C = 1;
  }
  return EntityScriptUtil__GetIntValue(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_19790/*"hideStatusDuringEntry"*/,
           0,
           0LL) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B1ED40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BCAFF8(&StringLiteral_7480/*"IgnoreBattlePointUp"*/, v5);
    byte_4B1ED40 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                                                                    (System_String_o *)StringLiteral_7480/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsIgnoreShiftWhiteFade(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED4F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20098/*"ignoreShiftWhiteFade"*/, method);
    byte_4B1ED4F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20098/*"ignoreShiftWhiteFade"*/,
           0LL);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ED2E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20741/*"isLateUpdatePopup"*/, method);
    byte_4B1ED2E = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20741/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1ED20 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1ED20 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED28 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9430/*"NoAutoSkipDead"*/, method);
    byte_4B1ED28 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9430/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED3E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9434/*"NoMotion"*/, method);
    byte_4B1ED3E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9434/*"NoMotion"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED27 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9436/*"NoSkipDead"*/, method);
    byte_4B1ED27 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9436/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22054/*"noVoice"*/, method);
    byte_4B1ECF3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22054/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ED33 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20766/*"isShadow"*/, method);
    byte_4B1ED33 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20766/*"isShadow"*/, v2);
}


bool __fastcall BattleDeckServantData__IsShowGrandEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1ED4D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20767/*"isShowGrandEffect"*/, method);
    byte_4B1ED4D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_20767/*"isShowGrandEffect"*/,
           0LL);
}


System_Nullable_bool__o __fastcall BattleDeckServantData__IsVoiceEnabledOnBreakShift(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t Script; // w0
  System_Nullable_bool__o *v7; // x0
  System_Nullable_bool__o *v9; // x0
  System_Nullable_bool__o v11; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_bool__o v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1ED3F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_bool___ctor__, method);
    sub_1BCAFF8(&StringLiteral_18826/*"enableBreakShiftVoice"*/, v4);
    byte_4B1ED3F = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18826/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18826/*"enableBreakShiftVoice"*/, 1, v5);
  if ( !Script )
  {
    v9 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v9,
      0,
      (const MethodInfo_37D56C8 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  if ( Script == 1 )
  {
    v7 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v7,
      1,
      (const MethodInfo_37D56C8 *)Method_System_Nullable_bool___ctor__);
    return v12;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool __fastcall BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1ED49 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24503/*"waitHpGaugeHideUntilDeadMotion"*/, method);
    byte_4B1ED49 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(
           *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
           (System_String_o *)StringLiteral_24503/*"waitHpGaugeHideUntilDeadMotion"*/,
           0LL);
}


bool __fastcall BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1ED22 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19254/*"fieldMotionIds"*/, fieldMotionIds);
    byte_4B1ED22 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_19254/*"fieldMotionIds"*/,
               0LL,
               0LL);
  *fieldMotionIds = IntArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B1ED23 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16908/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_4B1ED23 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(
               *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
               (System_String_o *)StringLiteral_16908/*"baseUniqueCameraId"*/,
               0,
               0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4B1ED21 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19452/*"fov"*/, fov);
    byte_4B1ED21 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 *(System_Collections_Generic_Dictionary_string__object__o **)&this->fields.npcId,
                 (System_String_o *)StringLiteral_19452/*"fov"*/,
                 0.0,
                 0LL);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__TryGetOverwriteShadowData(
        BattleDeckServantData_o *this,
        int32_t battleBgId,
        int32_t battleBgType,
        EnemyScriptParam_OverwriteShadowData_o **shadowData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShadowDataArray; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1ED26 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___,
      *(_QWORD *)&battleBgId);
    sub_1BCAFF8(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo, v9);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__, v10);
    sub_1BCAFF8(&BattleDeckServantData___c__DisplayClass71_0_TypeInfo, v11);
    byte_4B1ED26 = 1;
  }
  v12 = sub_1BCB244(BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCB254(v13, v14);
  *(_DWORD *)(v12 + 16) = battleBgId;
  *(_DWORD *)(v12 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v14);
  v16 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)shadowData, (int32_t)v17, v18, v19);
  return *shadowData != 0LL;
}


bool __fastcall BattleDeckServantData__TryGetSequenceSelectTypeByGender(
        BattleDeckServantData_o *this,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v18; // x21
  System_Object_array *v19; // x0
  BattleDeckServantData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_object__int__o *_9__103_0; // x22
  Il2CppObject *v23; // x23
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x21
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  __int64 v31; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v33; // x22
  unsigned int v34; // w23
  Il2CppObject *v35; // x24

  if ( (byte_4B1ED45 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, genderSelectType);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v10);
    sub_1BCAFF8(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v11);
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1BCAFF8(&JsonManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__, v14);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_23065/*"sequenceSelectTypeByGender"*/, v16);
    byte_4B1ED45 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           *(System_Collections_Generic_Dictionary_K__V__o **)&this->fields.npcId,
                           (Il2CppObject *)StringLiteral_23065/*"sequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v18 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = JsonManager__DeserializeArray_object_(
            v18,
            (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    v20 = BattleDeckServantData___c_TypeInfo;
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v20 = BattleDeckServantData___c_TypeInfo;
    }
    _9__103_0 = (System_Func_object__int__o *)v20->static_fields->__9__103_0;
    if ( !_9__103_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleDeckServantData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__103_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__103_0,
        v23,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__103_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__103_0, (int32_t)_9__103_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v21,
                                                                 (System_Func_TSource__TKey__o *)_9__103_0,
                                                                 (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v28 = System_Linq_Enumerable__ToArray_object_(
            v27,
            (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v28 )
LABEL_26:
      sub_1BCB254(Master_object, monitor_high);
    max_length = v28->max_length;
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
        if ( v34 >= max_length )
          sub_1BCB25C(Master_object, monitor_high, v31);
        v35 = v28->m_Items[v34];
        if ( !v35 )
          goto LABEL_26;
        monitor_high = HIDWORD(v35[1].monitor);
        if ( (int)monitor_high < 1 )
          break;
        if ( !v33 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v33, monitor_high, 0LL, 0, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v28->max_length;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4B1ED18 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18881/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_4B1ED18 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18881/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18881/*"entryIndex"*/, entryIndex + 1, v5);
}


bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1ED0B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1ED0B = 1;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v9 )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           (Il2CppObject *)key,
           (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = *(Il2CppObject **)&this->fields.npcId;
      if ( !Item
        || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     (System_Collections_Generic_Dictionary_object__object__o *)Item,
                     (Il2CppObject *)key,
                     (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCB254(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(v9) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13) == val;
      }
      else
      {
        sub_1BCB514(Item);
        LOBYTE(v9) = BattleDeckServantData__isDeadStand(v14, v15);
      }
    }
    else
    {
      LOBYTE(v9) = 0;
    }
  }
  return (char)v9;
}


int32_t __fastcall BattleDeckServantData__getBillBoardGroup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED03 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17015/*"billBoardGroup"*/, method);
    byte_4B1ED03 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17015/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED01 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17655/*"changeAttri"*/, method);
    byte_4B1ED01 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17655/*"changeAttri"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  BattleDeckServantData_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4B1ED15 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__int__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BCAFF8(&int___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v9);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_17654/*"change"*/, v11);
    byte_4B1ED15 = 1;
  }
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          (Il2CppObject *)StringLiteral_17654/*"change"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17654/*"change"*/,
                                                                      (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v15 = (System_Collections_Generic_List_object__o *)Item;
  v16 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v16 = BattleDeckServantData___c_TypeInfo;
  }
  _9__54_0 = v16->static_fields->__9__54_0;
  if ( !v15
    || (v13 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleDeckServantData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v19,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2F4A020 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCB254(Item, v13);
  }
  sub_1BCB514(v15);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v24, v25);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B1ED1B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22119/*"npInfoEnable"*/, method);
    byte_4B1ED1B = 1;
  }
  v4 = (System_String_o *)StringLiteral_22119/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22119/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED02 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18870/*"enemyNameEffect"*/, method);
    byte_4B1ED02 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18870/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED00 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23981/*"treasureDeviceVoiceId"*/, method);
    byte_4B1ED00 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23981/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19839/*"hpBarType"*/, method);
    byte_4B1ECF8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19839/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x0

  if ( (byte_4B1ED17 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_19382/*"forceDropItem"*/, v3);
    byte_4B1ED17 = 1;
  }
  v4 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v4 )
    LOBYTE(v4) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v4,
                   (Il2CppObject *)StringLiteral_19382/*"forceDropItem"*/,
                   (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v4;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED08 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18353/*"deadChangePos"*/, method);
    byte_4B1ED08 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18353/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B1ED1C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22118/*"npCharge"*/, method);
    byte_4B1ED1C = 1;
  }
  v4 = (System_String_o *)StringLiteral_22118/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22118/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECFE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23659/*"svtVoiceId"*/, method);
    byte_4B1ECFE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23659/*"svtVoiceId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantChangeEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  ServantChangeEntity_o *v11; // x20
  const MethodInfo *v12; // x4
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1ED1F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_23665/*"svt_voice_id"*/, v6);
    byte_4B1ED1F = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  v9 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v9
    && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23665/*"svt_voice_id"*/,
         v11->fields.priority,
         &value,
         v12) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v10);
  }
}


int32_t __fastcall BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22726/*"raid"*/, method);
    byte_4B1ECF5 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22726/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.name;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECFD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22985/*"scale"*/, method);
    byte_4B1ECFD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22985/*"scale"*/, 100, v2);
}


int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B1ED0E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1ED0E = 1;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v9,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = *(Il2CppObject **)&this->fields.npcId;
  if ( !Item
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)key,
                 (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1BCB514(Item);
  return BattleDeckServantData__ExistKillType(v15, v16);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1ED10 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1BCAFF8(&long_TypeInfo, v7);
    byte_4B1ED10 = 1;
  }
  value = 0LL;
  v8 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v8
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v8,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1BCB254(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1BCB514(value);
  return BattleDeckServantData__getUniqueID(v13, v14);
}


System_String_o *__fastcall BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1ED0F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&string_TypeInfo, v8);
    byte_4B1ED0F = 1;
  }
  v9 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v9
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v9,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v11 )
    sub_1BCB254(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v11,
           (Il2CppObject *)key,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1BCB514(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v14, v15);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECFB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23058/*"sendDamageForSuperBossId"*/, method);
    byte_4B1ECFB = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23058/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  BattleDeckServantData_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4B1ED14 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__int__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BCAFF8(&int___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v9);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_23218/*"shiftClear"*/, v11);
    byte_4B1ED14 = 1;
  }
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          (Il2CppObject *)StringLiteral_23218/*"shiftClear"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23218/*"shiftClear"*/,
                                                                      (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v15 = (System_Collections_Generic_List_object__o *)Item;
  v16 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v16 = BattleDeckServantData___c_TypeInfo;
  }
  _9__53_0 = v16->static_fields->__9__53_0;
  if ( !v15
    || (v13 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleDeckServantData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v19,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2F4A020 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCB254(Item, v13);
  }
  sub_1BCB514(v15);
  return BattleDeckServantData__getChangeList(v24, v25);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  BattleDeckServantData_o *v24; // x0
  int64_t v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4B1ED12 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__int__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BCAFF8(&int___TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v9);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_23216/*"shift"*/, v11);
    byte_4B1ED12 = 1;
  }
  v12 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v12
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v12,
          (Il2CppObject *)StringLiteral_23216/*"shift"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  }
  Item = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23216/*"shift"*/,
                                                                      (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v15 = (System_Collections_Generic_List_object__o *)Item;
  v16 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v16 = BattleDeckServantData___c_TypeInfo;
  }
  _9__51_0 = v16->static_fields->__9__51_0;
  if ( !v15
    || (v13 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleDeckServantData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v19, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2F4A020 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCB254(Item, v13);
  }
  sub_1BCB514(v15);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getSummonNpcId(
        BattleDeckServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *v13; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x20
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  int32_t v25; // w8

  if ( (byte_4B1ED11 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__int__TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BCAFF8(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v10);
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_17548/*"call"*/, v12);
    byte_4B1ED11 = 1;
  }
  if ( index == -1 )
    return (int32_t)this->fields.dropInfos;
  v13 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v13
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v13,
         (Il2CppObject *)StringLiteral_17548/*"call"*/,
         (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = *(void **)&this->fields.npcId;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17548/*"call"*/,
             (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = (System_Collections_Generic_List_object__o *)Item;
    v17 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v17 = BattleDeckServantData___c_TypeInfo;
    }
    _9__50_0 = v17->static_fields->__9__50_0;
    if ( v16 )
    {
      v14 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1BCB514(v16);
        goto LABEL_26;
      }
    }
    if ( !_9__50_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleDeckServantData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__50_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__50_0,
        v20,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v22, v23);
    }
    if ( !v16
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v16,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2F4A020 *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1BCB254(Item, v14);
    }
    v25 = *((_DWORD *)Item + 6);
    if ( v25 > index )
    {
      if ( v25 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1BCB25C(Item, v14, v24);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23631/*"superBoss"*/, method);
    byte_4B1ECF7 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23631/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B1ED19 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23979/*"treasureDeviceName"*/, method);
    byte_4B1ED19 = 1;
  }
  v4 = (System_String_o *)StringLiteral_23979/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23979/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B1ED1A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23980/*"treasureDeviceRuby"*/, method);
    byte_4B1ED1A = 1;
  }
  v4 = (System_String_o *)StringLiteral_23980/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23980/*"treasureDeviceRuby"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


int32_t __fastcall BattleDeckServantData__getUniqueID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return *(&this->fields.equipTarget2SkillChange + 1);
}


int64_t __fastcall BattleDeckServantData__getUserServantID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool __fastcall BattleDeckServantData__isAddition(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECFF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20716/*"isAddition"*/, method);
    byte_4B1ECFF = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20716/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECF2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16681/*"appear"*/, method);
    byte_4B1ECF2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16681/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECED & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECED = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECEC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECEC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECEE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECEE = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECEB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20934/*"kill"*/, method);
    byte_4B1ECEB = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20934/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED24 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20738/*"isHideShadow"*/, method);
    byte_4B1ED24 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20738/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4B1ED0D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B1ED0D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ECFC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21002/*"leader"*/, method);
    byte_4B1ECFC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21002/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED07 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23456/*"startPos"*/, method);
    byte_4B1ED07 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23456/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED04 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21940/*"multiTargetCore"*/, method);
    byte_4B1ED04 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21940/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED06 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21941/*"multiTargetUnder"*/, method);
    byte_4B1ED06 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21941/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1ED05 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21942/*"multiTargetUp"*/, method);
    byte_4B1ED05 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21942/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECF4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22726/*"raid"*/, method);
    byte_4B1ECF4 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22726/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0

  if ( (byte_4B1ED0C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B1ED0C = 1;
  }
  v5 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( v5 )
    LOBYTE(v5) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v5,
                   (Il2CppObject *)key,
                   (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)v5;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECFA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23058/*"sendDamageForSuperBossId"*/, method);
    byte_4B1ECFA = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23058/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECF6 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23631/*"superBoss"*/, method);
    byte_4B1ECF6 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23631/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1ECF9 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23633/*"superBossUi"*/, method);
    byte_4B1ECF9 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23633/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x0
  Il2CppObject *Item; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v16; // x9
  int32_t v18; // w1
  __int64 v19; // x10

  if ( (byte_4B1ED1D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_23661/*"svt_change"*/, v8);
    byte_4B1ED1D = 1;
  }
  v9 = (Il2CppObject *)StringLiteral_23661/*"svt_change"*/;
  *dict = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)dict, 0, (int32_t)method, v3);
  v11 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v11 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v11,
          v9,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v11 = *(System_Collections_Generic_Dictionary_object__object__o **)&this->fields.npcId;
  if ( !v11 )
LABEL_20:
    sub_1BCB254(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v11,
           v9,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v16 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    *dict = v16;
    v19 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v19 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v19 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v18 = (int)Item;
      else
        v18 = 0;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
    *dict = 0LL;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)dict, v18, v13, v14);
  return *dict != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__tryGetSvtChangeInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t *value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v22; // x9
  Il2CppObject *current; // x21
  __int64 v24; // x9
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  void *v33; // x0
  int v34; // w1
  __int64 v35; // x21
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B1ED1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_1BCAFF8(&long_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_22568/*"priority"*/, v17);
    sub_1BCAFF8(&StringLiteral_24417/*"value"*/, v18);
    byte_4B1ED1E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  dict = 0LL;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)dict,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_12;
  v22 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
  if ( v22 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v22 != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  if ( !Item )
LABEL_28:
    sub_1BCB254(Item, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    Item,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v38 = v37;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v38.fields._current;
    }
    while ( !v38.fields._current );
    v24 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v24
      || (System_Collections_Generic_Dictionary_string__object__c *)v38.fields._current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BCB514(v38.fields._current);
LABEL_30:
      sub_1BCB254(v25, v26);
    }
    v25 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v38.fields._current,
            (Il2CppObject *)StringLiteral_22568/*"priority"*/,
            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v25 )
      goto LABEL_30;
    if ( v25->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1BCB514(v25);
LABEL_32:
      sub_1BCB254(v29, v30);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v25, long_TypeInfo, v27, v28) != priority );
  v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24417/*"value"*/,
          (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v29 )
    goto LABEL_32;
  if ( v29->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v29, long_TypeInfo, v31, v32);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1BCB514(v29);
    if ( v34 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1CB3D40();
    }
    v35 = *(_QWORD *)__cxa_begin_catch(v33);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v35 )
      sub_1BCB24C(v35);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1ED50 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDeckServantData___c_TypeInfo, v1);
    byte_4B1ED50 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleDeckServantData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleDeckServantData___c___GetScriptStringArrayParam_b__77_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall BattleDeckServantData___c___TryGetSequenceSelectTypeByGender_b__103_0(
        BattleDeckServantData___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B1ED54 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, x);
    byte_4B1ED54 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftClearBuffIndiv_b__53_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B1ED53 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, x);
    byte_4B1ED53 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftList_b__51_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B1ED52 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, x);
    byte_4B1ED52 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getSummonNpcId_b__50_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B1ED51 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, x);
    byte_4B1ED51 = 1;
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


void __fastcall BattleDeckServantData___c__DisplayClass71_0___ctor(
        BattleDeckServantData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleDeckServantData___c__DisplayClass71_0___TryGetOverwriteShadowData_b__0(
        BattleDeckServantData___c__DisplayClass71_0_o *this,
        EnemyScriptParam_OverwriteShadowData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCB254(this, 0LL);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0LL);
}