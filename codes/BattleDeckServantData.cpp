void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B6914F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, v2);
}


bool __fastcall BattleDeckServantData__ExistsScript(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.enemyScript, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__GetAiResetTiming(
        BattleDeckServantData_o *this,
        int32_t defTiming,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B69168 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16931/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_4B69168 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16931/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B69188 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17156/*"assumedEffectId"*/, method);
    byte_4B69188 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_17156/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69193 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18050/*"changePersonality"*/, method);
    byte_4B69193 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18050/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69192 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18051/*"changePolicy"*/, method);
    byte_4B69192 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18051/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4B69171 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_long___, defVal);
    sub_1BE4ACC(&StringLiteral_23589/*"shiftPosition"*/, v5);
    byte_4B69171 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_23589/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_2F46FC0 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6918E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18886/*"dispBreakShift"*/, method);
    byte_4B6918E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18886/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69190 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18889/*"dispLimitCount"*/, method);
    byte_4B69190 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18889/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B6919A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18887/*"dispChangeSkillIds"*/, method);
    byte_4B6919A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18887/*"dispChangeSkillIds"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  if ( (byte_4B691A2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18292/*"colorType"*/, method);
    byte_4B691A2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_18292/*"colorType"*/, 0, 0LL);
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

  if ( (byte_4B69198 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20194/*"hidePersonality"*/, method);
    byte_4B69198 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20194/*"hidePersonality"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69197 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20195/*"hidePolicy"*/, method);
    byte_4B69197 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20195/*"hidePolicy"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69199 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20192/*"hideAttri"*/, method);
    byte_4B69199 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20192/*"hideAttri"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6918F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20520/*"imageSvtId"*/, method);
    byte_4B6918F = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20520/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6914E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69187 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9653/*"NoSkipDeadFirstId"*/, method);
    byte_4B69187 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9653/*"NoSkipDeadFirstId"*/, 0, v2);
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

  if ( (byte_4B691A0 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity);
    sub_1BE4ACC(&StringLiteral_12893/*"SetFriendShipRankFromUserServant"*/, v5);
    sub_1BE4ACC(&StringLiteral_6919/*"ForceSetFriendShipRank"*/, v6);
    byte_4B691A0 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_6919/*"ForceSetFriendShipRank"*/, 0LL) )
    return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_6919/*"ForceSetFriendShipRank"*/, 0, 0LL);
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_12893/*"SetFriendShipRankFromUserServant"*/, 0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1BE4D28(HasKey, v9);
  v10 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v12, 0LL);
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

  if ( (byte_4B691A1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BE4ACC(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____, v3);
    sub_1BE4ACC(&JsonManager_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_22729/*"overwriteShiftIcon"*/, v5);
    byte_4B691A1 = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          (System_Collections_Generic_Dictionary_K__V__o *)this->fields.enemyScript,
                                                          (Il2CppObject *)StringLiteral_22729/*"overwriteShiftIcon"*/,
                                                          0LL,
                                                          (const MethodInfo_2F47858 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v7->obj,
                                                          (const MethodInfo_2FC07DC *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6919B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22695/*"overwriteBreakShiftVoice"*/, method);
    byte_4B6919B = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22695/*"overwriteBreakShiftVoice"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69195 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22718/*"overwritePersonality"*/, method);
    byte_4B69195 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22718/*"overwritePersonality"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69194 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22720/*"overwritePolicy"*/, method);
    byte_4B69194 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22720/*"overwritePolicy"*/, 0LL, v2);
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

  if ( (byte_4B69183 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___, method);
    sub_1BE4ACC(&Method_BasicHelper_GetValue_string__object___, v3);
    sub_1BE4ACC(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____, v4);
    sub_1BE4ACC(&JsonManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_10267/*"OverwriteShadow"*/, v6);
    byte_4B69183 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.enemyScript,
                           (Il2CppObject *)StringLiteral_10267/*"OverwriteShadow"*/,
                           0LL,
                           (const MethodInfo_2F47858 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v9 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShadowData_array *)JsonManager__Deserialize_object_(
                                                           v9,
                                                           (const MethodInfo_2FC07DC *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShadowData_____);
  }
  else
  {
    v11 = Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___;
    v12 = *((_QWORD *)Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___ + 7);
    if ( !v12 )
    {
      sub_1C36A04(Method_System_Array_Empty_EnemyScriptParam_OverwriteShadowData___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C369A8(inited);
    return **(EnemyScriptParam_OverwriteShadowData_array ***)(v14 + 184);
  }
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69196 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22693/*"overwriteAttri"*/, method);
    byte_4B69196 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22693/*"overwriteAttri"*/, 0LL, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_object__c *v16; // x10
  System_Collections_Generic_List_object__o *v17; // x20
  void *v18; // x0
  System_Converter_TInput__TOutput__o *v19; // x19
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B69189 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__string__TypeInfo, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__, v11);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v12);
    byte_4B69189 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
              v19 = (System_Converter_TInput__TOutput__o *)sub_1BE4D18(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v19,
                v20,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__77_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__77_0 = (struct System_Converter_object__string__o *)v19;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&static_fields->__9__77_0,
                (int64_t)v19,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
            }
            if ( !v17
              || (v18 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v17,
                          (System_Converter_T__TOutput__o *)v19,
                          (const MethodInfo_2E88FF4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1BE4D28(v18, v14);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v18,
                                            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return defVal;
}


System_String_o *__fastcall BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B6918A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24394/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_4B6918A = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24394/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6918B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24395/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_4B6918B = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24395/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69167 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24931/*"voicePatternId"*/, method);
    byte_4B69167 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24931/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69174 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21117/*"isSkillShiftInfo"*/, method);
    byte_4B69174 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21117/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6914D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B6919F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BE4ACC(&StringLiteral_7387/*"HideBattlePointGauge"*/, v5);
    byte_4B6919F = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7387/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B6918D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20193/*"hideClassSkill"*/, method);
    byte_4B6918D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20193/*"hideClassSkill"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B6919E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BE4ACC(&StringLiteral_7602/*"IgnoreBattlePointUp"*/, v5);
    byte_4B6919E = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7602/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B6918C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21094/*"isLateUpdatePopup"*/, method);
    byte_4B6918C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21094/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6917E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B6917E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69186 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9644/*"NoAutoSkipDead"*/, method);
    byte_4B69186 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9644/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6919C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9649/*"NoMotion"*/, method);
    byte_4B6919C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9649/*"NoMotion"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69185 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9652/*"NoSkipDead"*/, method);
    byte_4B69185 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9652/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69151 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22414/*"noVoice"*/, method);
    byte_4B69151 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22414/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69191 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21116/*"isShadow"*/, method);
    byte_4B69191 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21116/*"isShadow"*/, v2);
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

  if ( (byte_4B6919D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Nullable_bool___ctor__, method);
    sub_1BE4ACC(&StringLiteral_19236/*"enableBreakShiftVoice"*/, v4);
    byte_4B6919D = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19236/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19236/*"enableBreakShiftVoice"*/, 1, v5);
  if ( !Script )
  {
    v9 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v9,
      0,
      (const MethodInfo_37056B0 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  if ( Script == 1 )
  {
    v7 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v7,
      1,
      (const MethodInfo_37056B0 *)Method_System_Nullable_bool___ctor__);
    return v12;
  }
  else
  {
    return (System_Nullable_bool__o)0;
  }
}


bool __fastcall BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B69180 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19666/*"fieldMotionIds"*/, fieldMotionIds);
    byte_4B69180 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_19666/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_1BE4A70((PartyOrganizationUtility_o *)fieldMotionIds, (int64_t)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B69181 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17296/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_4B69181 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_17296/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4B6917F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19851/*"fov"*/, fov);
    byte_4B6917F = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19851/*"fov"*/,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B69184 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___,
      *(_QWORD *)&battleBgId);
    sub_1BE4ACC(&System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo, v9);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__, v10);
    sub_1BE4ACC(&BattleDeckServantData___c__DisplayClass71_0_TypeInfo, v11);
    byte_4B69184 = 1;
  }
  v12 = sub_1BE4D18(BattleDeckServantData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  *(_DWORD *)(v12 + 16) = battleBgId;
  *(_DWORD *)(v12 + 20) = battleBgType;
  OverwriteShadowDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetOverwriteShadowDataArray(
                                                                                    this,
                                                                                    v14);
  v16 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EnemyScriptParam_OverwriteShadowData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_BattleDeckServantData___c__DisplayClass71_0__TryGetOverwriteShadowData_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
          OverwriteShadowDataArray,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShadowData___);
  *shadowData = (EnemyScriptParam_OverwriteShadowData_o *)v17;
  sub_1BE4A70((PartyOrganizationUtility_o *)shadowData, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x21
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v36; // x22
  unsigned int v37; // w23
  Il2CppObject *v38; // x24

  if ( (byte_4B691A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_string__object___, genderSelectType);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v10);
    sub_1BE4ACC(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v11);
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1BE4ACC(&JsonManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__, v14);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_23435/*"sequenceSelectTypeByGender"*/, v16);
    byte_4B691A3 = 1;
  }
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.enemyScript,
                           (Il2CppObject *)StringLiteral_23435/*"sequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_2F47858 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    v18 = Value_object__object;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v19 = JsonManager__DeserializeArray_object_(
            v18,
            (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
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
      _9__103_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__103_0,
        v23,
        Method_BattleDeckServantData___c__TryGetSequenceSelectTypeByGender_b__103_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__103_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__103_0,
        (int64_t)_9__103_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v21,
                                                                 (System_Func_TSource__TKey__o *)_9__103_0,
                                                                 (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    v32 = System_Linq_Enumerable__ToArray_object_(
            v31,
            (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v32 )
LABEL_26:
      sub_1BE4D28(Master_object, monitor_high);
    max_length = v32->max_length;
    if ( max_length < 1 )
    {
LABEL_23:
      LOBYTE(Value_object__object) = 0;
    }
    else
    {
      v36 = (CommonReleaseMaster_o *)Master_object;
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= max_length )
          sub_1BE4D30(Master_object, monitor_high);
        v38 = v32->m_Items[v37];
        if ( !v38 )
          goto LABEL_26;
        monitor_high = HIDWORD(v38[1].monitor);
        if ( (int)monitor_high < 1 )
          break;
        if ( !v36 )
          goto LABEL_26;
        Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v36, monitor_high, 0LL, 0, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        max_length = v32->max_length;
        if ( (int)++v37 >= max_length )
          goto LABEL_23;
      }
      LOBYTE(Value_object__object) = 1;
      *genderSelectType = HIDWORD(v38[1].klass);
      *patternId = (int32_t)v38[1].monitor;
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

  if ( (byte_4B69176 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19290/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_4B69176 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19290/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19290/*"entryIndex"*/, entryIndex + 1, v5);
}


bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B69169 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&long_TypeInfo, v8);
    byte_4B69169 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BE4D28(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13) == val;
      }
      else
      {
        sub_1BE4FE8(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v14, v15);
      }
    }
    else
    {
      LOBYTE(enemyScript) = 0;
    }
  }
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getBillBoardGroup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69161 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17400/*"billBoardGroup"*/, method);
    byte_4B69161 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17400/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6915F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18038/*"changeAttri"*/, method);
    byte_4B6915F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18038/*"changeAttri"*/, 0, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleDeckServantData_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4B69173 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v9);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_18037/*"change"*/, v11);
    byte_4B69173 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_18037/*"change"*/,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_18037/*"change"*/,
                                                                      (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__54_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v19,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__54_0,
        (int64_t)_9__54_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BE4D28(Item, v13);
  }
  sub_1BE4FE8(v15);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v28, v29);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B69179 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22477/*"npInfoEnable"*/, method);
    byte_4B69179 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22477/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22477/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69160 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19280/*"enemyNameEffect"*/, method);
    byte_4B69160 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19280/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6915E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24399/*"treasureDeviceVoiceId"*/, method);
    byte_4B6915E = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24399/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69156 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20245/*"hpBarType"*/, method);
    byte_4B69156 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20245/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4B69175 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BE4ACC(&StringLiteral_19793/*"forceDropItem"*/, v3);
    byte_4B69175 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)StringLiteral_19793/*"forceDropItem"*/,
                            (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69166 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18745/*"deadChangePos"*/, method);
    byte_4B69166 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18745/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B6917A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22476/*"npCharge"*/, method);
    byte_4B6917A = 1;
  }
  v4 = (System_String_o *)StringLiteral_22476/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22476/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6915C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24047/*"svtVoiceId"*/, method);
    byte_4B6915C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24047/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_4B6917D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_24053/*"svt_voice_id"*/, v6);
    byte_4B6917D = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v8);
  }
  v9 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v9
    && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_24053/*"svt_voice_id"*/,
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

  if ( (byte_4B69153 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23078/*"raid"*/, method);
    byte_4B69153 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23078/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6915B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23342/*"scale"*/, method);
    byte_4B6915B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23342/*"scale"*/, 100, v2);
}


int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B6916C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&long_TypeInfo, v8);
    byte_4B6916C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BE4D28(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1BE4FE8(Item);
  return BattleDeckServantData__ExistKillType(v15, v16);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6916E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1BE4ACC(&long_TypeInfo, v7);
    byte_4B6916E = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1BE4D28(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1BE4FE8(value);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B6916D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&string_TypeInfo, v8);
    byte_4B6916D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.enemyScript;
  if ( !v11 )
    sub_1BE4D28(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1BE4FE8(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v14, v15);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69159 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23428/*"sendDamageForSuperBossId"*/, method);
    byte_4B69159 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23428/*"sendDamageForSuperBossId"*/, 0, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleDeckServantData_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4B69172 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v9);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_23588/*"shiftClear"*/, v11);
    byte_4B69172 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23588/*"shiftClear"*/,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23588/*"shiftClear"*/,
                                                                      (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__53_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v19,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
        (int64_t)_9__53_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BE4D28(Item, v13);
  }
  sub_1BE4FE8(v15);
  return BattleDeckServantData__getChangeList(v28, v29);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleDeckServantData_o *v28; // x0
  int64_t v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_4B69170 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v9);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_23586/*"shift"*/, v11);
    byte_4B69170 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23586/*"shift"*/,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23586/*"shift"*/,
                                                                      (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__51_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v19, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
        (int64_t)_9__51_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BE4D28(Item, v13);
  }
  sub_1BE4FE8(v15);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v28, v29, v30);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x20
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w8

  if ( (byte_4B6916F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BE4ACC(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v10);
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_17930/*"call"*/, v12);
    byte_4B6916F = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
         (Il2CppObject *)StringLiteral_17930/*"call"*/,
         (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = this->fields.enemyScript;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17930/*"call"*/,
             (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        sub_1BE4FE8(v16);
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
      _9__50_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__50_0,
        v20,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
        (int64_t)_9__50_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( !v16
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v16,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1BE4D28(Item, v14);
    }
    v28 = *((_DWORD *)Item + 6);
    if ( v28 > index )
    {
      if ( v28 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1BE4D30(Item, v14);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69155 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24020/*"superBoss"*/, method);
    byte_4B69155 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24020/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B69177 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24397/*"treasureDeviceName"*/, method);
    byte_4B69177 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24397/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24397/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B69178 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24398/*"treasureDeviceRuby"*/, method);
    byte_4B69178 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24398/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24398/*"treasureDeviceRuby"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


int32_t __fastcall BattleDeckServantData__getUniqueID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


int64_t __fastcall BattleDeckServantData__getUserServantID(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.userSvtId;
}


bool __fastcall BattleDeckServantData__isAddition(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B6915D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21075/*"isAddition"*/, method);
    byte_4B6915D = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_21075/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69150 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17028/*"appear"*/, method);
    byte_4B69150 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_17028/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6914B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6914A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6914C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B6914C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69149 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21292/*"kill"*/, method);
    byte_4B69149 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21292/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69182 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21092/*"isHideShadow"*/, method);
    byte_4B69182 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21092/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_4B6916B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B6916B = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)infoScript,
                           (Il2CppObject *)key,
                           (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B6915A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21360/*"leader"*/, method);
    byte_4B6915A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21360/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69165 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23831/*"startPos"*/, method);
    byte_4B69165 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23831/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69162 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22283/*"multiTargetCore"*/, method);
    byte_4B69162 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22283/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69164 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22284/*"multiTargetUnder"*/, method);
    byte_4B69164 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22284/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B69163 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22285/*"multiTargetUp"*/, method);
    byte_4B69163 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22285/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69152 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23078/*"raid"*/, method);
    byte_4B69152 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23078/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4B6916A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B6916A = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69158 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23428/*"sendDamageForSuperBossId"*/, method);
    byte_4B69158 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23428/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69154 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24020/*"superBoss"*/, method);
    byte_4B69154 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24020/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B69157 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24022/*"superBossUi"*/, method);
    byte_4B69157 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24022/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  Il2CppObject *Item; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v24; // x9
  int64_t v26; // x1
  __int64 v27; // x10

  if ( (byte_4B6917B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_24049/*"svt_change"*/, v12);
    byte_4B6917B = 1;
  }
  v13 = (Il2CppObject *)StringLiteral_24049/*"svt_change"*/;
  *dict = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)dict, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          v13,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_1BE4D28(enemyScript, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           v13,
           (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v24 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    *dict = v24;
    v27 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v27 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v26 = (int64_t)Item;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
  }
  else
  {
    v26 = 0LL;
    *dict = 0LL;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)dict, v26, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4B6917C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_1BE4ACC(&long_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_22922/*"priority"*/, v17);
    sub_1BE4ACC(&StringLiteral_24843/*"value"*/, v18);
    byte_4B6917C = 1;
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
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    sub_1BE4D28(Item, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    Item,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v38 = v37;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v38.fields._current;
    }
    while ( !v38.fields._current );
    v24 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v24
      || (System_Collections_Generic_Dictionary_string__object__c *)v38.fields._current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BE4FE8(v38.fields._current);
LABEL_30:
      sub_1BE4D28(v25, v26);
    }
    v25 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v38.fields._current,
            (Il2CppObject *)StringLiteral_22922/*"priority"*/,
            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v25 )
      goto LABEL_30;
    if ( v25->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1BE4FE8(v25);
LABEL_32:
      sub_1BE4D28(v29, v30);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v25, long_TypeInfo, v27, v28) != priority );
  v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24843/*"value"*/,
          (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v29 )
    goto LABEL_32;
  if ( v29->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v29, long_TypeInfo, v31, v32);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1BE4FE8(v29);
    if ( v34 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1CCF55C();
    }
    v35 = *(_QWORD *)__cxa_begin_catch(v33);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v35 )
      sub_1BE4D20(v35);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B691A4 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDeckServantData___c_TypeInfo, v1);
    byte_4B691A4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B691A8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, x);
    byte_4B691A8 = 1;
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

  if ( (byte_4B691A7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, x);
    byte_4B691A7 = 1;
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

  if ( (byte_4B691A6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, x);
    byte_4B691A6 = 1;
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

  if ( (byte_4B691A5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, x);
    byte_4B691A5 = 1;
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
    sub_1BE4D28(this, 0LL);
  return EnemyScriptParam_OverwriteShadowData__IsMatchBg(data, this->fields.battleBgId, this->fields.battleBgType, 0LL);
}