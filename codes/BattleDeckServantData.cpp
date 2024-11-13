void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1870F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, v2);
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

  if ( (byte_4B18728 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16889/*"aiResetTiming"*/, *(_QWORD *)&defTiming, method);
    byte_4B18728 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16889/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18746 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B18746 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18751 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17999/*"changePersonality"*/, method, v2);
    byte_4B18751 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17999/*"changePersonality"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18750 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18000/*"changePolicy"*/, method, v2);
    byte_4B18750 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18000/*"changePolicy"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B18731 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, defVal, method);
    sub_1BCA7E0(&StringLiteral_23503/*"shiftPosition"*/, v5, v6);
    byte_4B18731 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_23503/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1874C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18831/*"dispBreakShift"*/, method, v2);
    byte_4B1874C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18831/*"dispBreakShift"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1874E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18834/*"dispLimitCount"*/, method, v2);
    byte_4B1874E = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18834/*"dispLimitCount"*/, -1, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18758 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18832/*"dispChangeSkillIds"*/, method, v2);
    byte_4B18758 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18832/*"dispChangeSkillIds"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetDisplayColorType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18760 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18240/*"colorType"*/, method, v2);
    byte_4B18760 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_18240/*"colorType"*/, 0, 0LL);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18756 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20126/*"hidePersonality"*/, method, v2);
    byte_4B18756 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20126/*"hidePersonality"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18755 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20127/*"hidePolicy"*/, method, v2);
    byte_4B18755 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20127/*"hidePolicy"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18757 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20124/*"hideAttri"*/, method, v2);
    byte_4B18757 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20124/*"hideAttri"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1874D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20452/*"imageSvtId"*/, method, v2);
    byte_4B1874D = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20452/*"imageSvtId"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1870E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18745 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9631/*"NoSkipDeadFirstId"*/, method, v2);
    byte_4B18745 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9631/*"NoSkipDeadFirstId"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL8 HasKey; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B1875E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity, method);
    sub_1BCA7E0(&StringLiteral_12856/*"SetFriendShipRankFromUserServant"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_6901/*"ForceSetFriendShipRank"*/, v7, v8);
    byte_4B1875E = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_6901/*"ForceSetFriendShipRank"*/, 0LL) )
    return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_6901/*"ForceSetFriendShipRank"*/, 0, 0LL);
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_12856/*"SetFriendShipRankFromUserServant"*/, 0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1BCAA3C(HasKey, v11);
  v12 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v13 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
}


EnemyScriptParam_OverwriteShiftIcon_array *__fastcall BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  __int64 v11; // x1
  EnemyScriptParam_OverwriteShiftIcon_array *v12; // x19

  if ( (byte_4B1875F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string__object___, method, v2);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____, v4, v5);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_22650/*"overwriteShiftIcon"*/, v8, v9);
    byte_4B1875F = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          (System_Collections_Generic_Dictionary_K__V__o *)this->fields.enemyScript,
                                                          (Il2CppObject *)StringLiteral_22650/*"overwriteShiftIcon"*/,
                                                          0LL,
                                                          (const MethodInfo_2F013D8 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v12 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v12->obj,
                                                          (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18759 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22617/*"overwriteBreakShiftVoice"*/, method, v2);
    byte_4B18759 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22617/*"overwriteBreakShiftVoice"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18753 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22640/*"overwritePersonality"*/, method, v2);
    byte_4B18753 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22640/*"overwritePersonality"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18752 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22641/*"overwritePolicy"*/, method, v2);
    byte_4B18752 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22641/*"overwritePolicy"*/, 0LL, v3);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18754 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22615/*"overwriteAttri"*/, method, v2);
    byte_4B18754 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22615/*"overwriteAttri"*/, 0LL, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_String_array *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_object__c *v24; // x10
  System_Collections_Generic_List_object__o *v25; // x20
  void *v26; // x0
  System_Converter_TInput__TOutput__o *v27; // x19
  Il2CppObject *v28; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B18747 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__string__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__, v15, v16);
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v17, v18);
    byte_4B18747 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          v24 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1];
          v25 = v24 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v24 == System_Collections_Generic_List_object__TypeInfo )
          {
            v26 = BattleDeckServantData___c_TypeInfo;
            if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v20);
              v26 = BattleDeckServantData___c_TypeInfo;
            }
            v27 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)v26 + 23) + 40LL);
            if ( !v27 )
            {
              if ( !*((_DWORD *)v26 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v26, v20);
                v26 = BattleDeckServantData___c_TypeInfo;
              }
              v28 = (Il2CppObject *)**((_QWORD **)v26 + 23);
              v27 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                             System_Converter_object__string__TypeInfo,
                                                             v20,
                                                             v21,
                                                             v22);
              System_Converter_object__object____ctor(
                v27,
                v28,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__75_0 = (struct System_Converter_object__string__o *)v27;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
                (int64_t)v27,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
            }
            if ( !v25
              || (v26 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v25,
                          (System_Converter_T__TOutput__o *)v27,
                          (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1BCAA3C(v26, v20);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v26,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
          }
        }
      }
    }
  }
  return v4;
}


System_String_o *__fastcall BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
        BattleDeckServantData_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B18748 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24307/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, method);
    byte_4B18748 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24307/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18749 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24308/*"treasureDeviceErrorStatusVoiceSeList"*/, method, v2);
    byte_4B18749 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24308/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v3);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18727 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24843/*"voicePatternId"*/, method, v2);
    byte_4B18727 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24843/*"voicePatternId"*/, -1, v3);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B18734 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21046/*"isSkillShiftInfo"*/, method, v2);
    byte_4B18734 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21046/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1870D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 5, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B1875D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&StringLiteral_7368/*"HideBattlePointGauge"*/, v5, v6);
    byte_4B1875D = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7368/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1874B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20125/*"hideClassSkill"*/, method, v2);
    byte_4B1874B = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20125/*"hideClassSkill"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B1875C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&StringLiteral_7583/*"IgnoreBattlePointUp"*/, v5, v6);
    byte_4B1875C = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7583/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1874A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21023/*"isLateUpdatePopup"*/, method, v2);
    byte_4B1874A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21023/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1873E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1873E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18744 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9622/*"NoAutoSkipDead"*/, method, v2);
    byte_4B18744 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9622/*"NoAutoSkipDead"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1875A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9627/*"NoMotion"*/, method, v2);
    byte_4B1875A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9627/*"NoMotion"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18743 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9630/*"NoSkipDead"*/, method, v2);
    byte_4B18743 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9630/*"NoSkipDead"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18711 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22336/*"noVoice"*/, method, v2);
    byte_4B18711 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22336/*"noVoice"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1874F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21045/*"isShadow"*/, method, v2);
    byte_4B1874F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21045/*"isShadow"*/, v2);
}


System_Nullable_bool__o __fastcall BattleDeckServantData__IsVoiceEnabledOnBreakShift(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int32_t Script; // w0
  System_Nullable_bool__o *v8; // x0
  System_Nullable_bool__o *v10; // x0
  System_Nullable_bool__o v12; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_bool__o v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1875B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_19178/*"enableBreakShiftVoice"*/, v4, v5);
    byte_4B1875B = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19178/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19178/*"enableBreakShiftVoice"*/, 1, v6);
  if ( !Script )
  {
    v10 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v10,
      0,
      (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
    return v12;
  }
  if ( Script == 1 )
  {
    v8 = &v13;
    v13 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      1,
      (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
    return v13;
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

  if ( (byte_4B18740 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19607/*"fieldMotionIds"*/, fieldMotionIds, method);
    byte_4B18740 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_19607/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_1BCA784((PartyOrganizationUtility_o *)fieldMotionIds, (int64_t)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B18741 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17253/*"baseUniqueCameraId"*/, uniqueCameraId, method);
    byte_4B18741 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_17253/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4B1873F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19792/*"fov"*/, fov, method);
    byte_4B1873F = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19792/*"fov"*/,
                 0.0,
                 0LL);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4B18736 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19232/*"entryIndex"*/, *(_QWORD *)&entryIndex, method);
    byte_4B18736 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19232/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19232/*"entryIndex"*/, entryIndex + 1, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  BattleDeckServantData_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4B18729 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&val);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B18729 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v12);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15) == val;
      }
      else
      {
        sub_1BCACFC(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v16, v17);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18721 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17356/*"billBoardGroup"*/, method, v2);
    byte_4B18721 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17356/*"billBoardGroup"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1871F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17987/*"changeAttri"*/, method, v2);
    byte_4B1871F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17987/*"changeAttri"*/, 0, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  BattleDeckServantData___c_c *v28; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattleDeckServantData_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_4B18733 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v16, v17);
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_17986/*"change"*/, v20, v21);
    byte_4B18733 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_17986/*"change"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17986/*"change"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_Collections_Generic_List_object__o *)Item;
  v28 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v23);
    v28 = BattleDeckServantData___c_TypeInfo;
  }
  _9__54_0 = v28->static_fields->__9__54_0;
  if ( !v27
    || (v23 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28, v23);
        v28 = BattleDeckServantData___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v23, v25, v26);
      System_Converter_object__int____ctor(
        _9__54_0,
        v31,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__54_0,
        (int64_t)_9__54_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v27 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v27,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCAA3C(Item, v23);
  }
  sub_1BCACFC(v27);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v40, v41);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B18739 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22399/*"npInfoEnable"*/, method, v2);
    byte_4B18739 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22399/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22399/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18720 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19222/*"enemyNameEffect"*/, method, v2);
    byte_4B18720 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19222/*"enemyNameEffect"*/, 0, v3);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1871E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24312/*"treasureDeviceVoiceId"*/, method, v2);
    byte_4B1871E = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24312/*"treasureDeviceVoiceId"*/, 0LL, v3);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18716 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20177/*"hpBarType"*/, method, v2);
    byte_4B18716 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20177/*"hpBarType"*/, 0, v3);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4B18735 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_19734/*"forceDropItem"*/, v4, v5);
    byte_4B18735 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)StringLiteral_19734/*"forceDropItem"*/,
                            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18726 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18692/*"deadChangePos"*/, method, v2);
    byte_4B18726 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18692/*"deadChangePos"*/, -1, v3);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B1873A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22398/*"npCharge"*/, method, v2);
    byte_4B1873A = 1;
  }
  v4 = (System_String_o *)StringLiteral_22398/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22398/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1871C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23960/*"svtVoiceId"*/, method, v2);
    byte_4B1871C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23960/*"svtVoiceId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  const MethodInfo *v14; // x4
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1873D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_23966/*"svt_voice_id"*/, v7, v8);
    byte_4B1873D = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v11 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v11
    && (v13 = v11, ServantChangeEntity__IsEnable(v11, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23966/*"svt_voice_id"*/,
         v13->fields.priority,
         &value,
         v14) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v12);
  }
}


int32_t __fastcall BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18713 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23000/*"raid"*/, method, v2);
    byte_4B18713 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23000/*"raid"*/, 0, v3);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1871B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23258/*"scale"*/, method, v2);
    byte_4B1871B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23258/*"scale"*/, 100, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  BattleDeckServantData_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = defVal;
  if ( (byte_4B1872C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B1872C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
  sub_1BCACFC(Item);
  return BattleDeckServantData__ExistKillType(v17, v18);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B1872E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B1872E = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v10);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v11, v12);
  sub_1BCACFC(value);
  return BattleDeckServantData__getUniqueID(v14, v15);
}


System_String_o *__fastcall BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v16; // x0
  const MethodInfo *v17; // x1

  v4 = defVal;
  if ( (byte_4B1872D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    byte_4B1872D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v13 = this->fields.enemyScript;
  if ( !v13 )
    sub_1BCAA3C(0LL, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v13,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  sub_1BCACFC(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v16, v17);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18719 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23343/*"sendDamageForSuperBossId"*/, method, v2);
    byte_4B18719 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23343/*"sendDamageForSuperBossId"*/, 0, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  BattleDeckServantData___c_c *v28; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattleDeckServantData_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_4B18732 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v16, v17);
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_23502/*"shiftClear"*/, v20, v21);
    byte_4B18732 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23502/*"shiftClear"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23502/*"shiftClear"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_Collections_Generic_List_object__o *)Item;
  v28 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v23);
    v28 = BattleDeckServantData___c_TypeInfo;
  }
  _9__53_0 = v28->static_fields->__9__53_0;
  if ( !v27
    || (v23 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28, v23);
        v28 = BattleDeckServantData___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v23, v25, v26);
      System_Converter_object__int____ctor(
        _9__53_0,
        v31,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
        (int64_t)_9__53_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v27 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v27,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCAA3C(Item, v23);
  }
  sub_1BCACFC(v27);
  return BattleDeckServantData__getChangeList(v40, v41);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  BattleDeckServantData___c_c *v28; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattleDeckServantData_o *v40; // x0
  int64_t v41; // x1
  const MethodInfo *v42; // x2

  if ( (byte_4B18730 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v16, v17);
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_23500/*"shift"*/, v20, v21);
    byte_4B18730 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23500/*"shift"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23500/*"shift"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_Collections_Generic_List_object__o *)Item;
  v28 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v23);
    v28 = BattleDeckServantData___c_TypeInfo;
  }
  _9__51_0 = v28->static_fields->__9__51_0;
  if ( !v27
    || (v23 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28, v23);
        v28 = BattleDeckServantData___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v23, v25, v26);
      System_Converter_object__int____ctor(_9__51_0, v31, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
        (int64_t)_9__51_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( v27 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v27,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCAA3C(Item, v23);
  }
  sub_1BCACFC(v27);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v40, v41, v42);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getSummonNpcId(
        BattleDeckServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v22; // x1
  void *Item; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  BattleDeckServantData___c_c *v27; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v30; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t v38; // w8

  if ( (byte_4B1872F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v15, v16);
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17880/*"call"*/, v19, v20);
    byte_4B1872F = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
         (Il2CppObject *)StringLiteral_17880/*"call"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = this->fields.enemyScript;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17880/*"call"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v26 = (System_Collections_Generic_List_object__o *)Item;
    v27 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo, v22);
      v27 = BattleDeckServantData___c_TypeInfo;
    }
    _9__50_0 = v27->static_fields->__9__50_0;
    if ( v26 )
    {
      v22 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1BCACFC(v26);
        goto LABEL_26;
      }
    }
    if ( !_9__50_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v22);
        v27 = BattleDeckServantData___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__50_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v22, v24, v25);
      System_Converter_object__int____ctor(
        _9__50_0,
        v30,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
        (int64_t)_9__50_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( !v26
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v26,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1BCAA3C(Item, v22);
    }
    v38 = *((_DWORD *)Item + 6);
    if ( v38 > index )
    {
      if ( v38 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1BCAA44(Item, v22);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18715 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23933/*"superBoss"*/, method, v2);
    byte_4B18715 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23933/*"superBoss"*/, 0, v3);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B18737 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24310/*"treasureDeviceName"*/, method, v2);
    byte_4B18737 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24310/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24310/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4B18738 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24311/*"treasureDeviceRuby"*/, method, v2);
    byte_4B18738 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24311/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24311/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4B1871D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21005/*"isAddition"*/, method, v2);
    byte_4B1871D = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_21005/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18710 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16986/*"appear"*/, method, v2);
    byte_4B18710 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16986/*"appear"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1870B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 3, v3);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1870A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 2, v3);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1870C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B1870C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 4, v3);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18709 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21221/*"kill"*/, method, v2);
    byte_4B18709 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21221/*"kill"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18742 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21021/*"isHideShadow"*/, method, v2);
    byte_4B18742 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21021/*"isHideShadow"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_4B1872B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B1872B = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)infoScript,
                           (Il2CppObject *)key,
                           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1871A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21289/*"leader"*/, method, v2);
    byte_4B1871A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21289/*"leader"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18725 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23744/*"startPos"*/, method, v2);
    byte_4B18725 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23744/*"startPos"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18722 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22205/*"multiTargetCore"*/, method, v2);
    byte_4B18722 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22205/*"multiTargetCore"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18724 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22206/*"multiTargetUnder"*/, method, v2);
    byte_4B18724 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22206/*"multiTargetUnder"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B18723 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22207/*"multiTargetUp"*/, method, v2);
    byte_4B18723 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22207/*"multiTargetUp"*/, 1, v3);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B18712 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23000/*"raid"*/, method, v2);
    byte_4B18712 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23000/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4B1872A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B1872A = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B18718 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23343/*"sendDamageForSuperBossId"*/, method, v2);
    byte_4B18718 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23343/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B18714 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23933/*"superBoss"*/, method, v2);
    byte_4B18714 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23933/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B18717 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23935/*"superBossUi"*/, method, v2);
    byte_4B18717 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23935/*"superBossUi"*/, v2);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  Il2CppObject *Item; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v27; // x9
  int64_t v29; // x1
  __int64 v30; // x10

  if ( (byte_4B1873B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_23962/*"svt_change"*/, v14, v15);
    byte_4B1873B = 1;
  }
  v16 = (Il2CppObject *)StringLiteral_23962/*"svt_change"*/;
  *dict = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)dict, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          v16,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_1BCAA3C(enemyScript, v17);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           v16,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v27 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    *dict = v27;
    v30 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v30 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v30 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v29 = (int64_t)Item;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
  }
  else
  {
    v29 = 0LL;
    *dict = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)dict, v29, v20, v21, v22, v23, v24, v25);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v32; // x9
  Il2CppObject *current; // x21
  __int64 v34; // x9
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x0
  int v44; // w1
  __int64 v45; // x21
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B1873C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&priority);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v17, v18);
    sub_1BCA7E0(&long_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_22844/*"priority"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24755/*"value"*/, v27, v28);
    byte_4B1873C = 1;
  }
  memset(&v48, 0, sizeof(v48));
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
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_12;
  v32 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
  if ( v32 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v32 != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  if ( !Item )
LABEL_28:
    sub_1BCAA3C(Item, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    Item,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v48 = v47;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v48.fields._current;
    }
    while ( !v48.fields._current );
    v34 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v48.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v34
      || (System_Collections_Generic_Dictionary_string__object__c *)v48.fields._current->klass->_2.typeHierarchy[v34 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BCACFC(v48.fields._current);
LABEL_30:
      sub_1BCAA3C(v35, v36);
    }
    v35 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v48.fields._current,
            (Il2CppObject *)StringLiteral_22844/*"priority"*/,
            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v35 )
      goto LABEL_30;
    if ( v35->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1BCACFC(v35);
LABEL_32:
      sub_1BCAA3C(v39, v40);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v35, long_TypeInfo, v37, v38) != priority );
  v39 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24755/*"value"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v39 )
    goto LABEL_32;
  if ( v39->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v39, long_TypeInfo, v41, v42);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1BCACFC(v39);
    if ( v44 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v48,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1CB5270();
    }
    v45 = *(_QWORD *)__cxa_begin_catch(v43);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v45 )
      sub_1BCAA34(v45);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18761 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDeckServantData___c_TypeInfo, v1, v2);
    byte_4B18761 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleDeckServantData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleDeckServantData___c___GetScriptStringArrayParam_b__75_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B18765 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B18765 = 1;
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

  if ( (byte_4B18764 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B18764 = 1;
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

  if ( (byte_4B18763 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B18763 = 1;
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

  if ( (byte_4B18762 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B18762 = 1;
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