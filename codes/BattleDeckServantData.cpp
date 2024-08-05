void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A00987 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00987 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, v2);
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

  if ( (byte_4A009A0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16653/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_4A009A0 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16653/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A009BE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16876/*"assumedEffectId"*/, method);
    byte_4A009BE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16876/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17748/*"changePersonality"*/, method);
    byte_4A009C9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17748/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17749/*"changePolicy"*/, method);
    byte_4A009C8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17749/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4A009A9 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_GetValue_long___, defVal);
    sub_1B64870(&StringLiteral_23164/*"shiftPosition"*/, v5);
    byte_4A009A9 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_23164/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_2E299F8 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18568/*"dispBreakShift"*/, method);
    byte_4A009C4 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18568/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18571/*"dispLimitCount"*/, method);
    byte_4A009C6 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18571/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A009D0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18569/*"dispChangeSkillIds"*/, method);
    byte_4A009D0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18569/*"dispChangeSkillIds"*/,
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

  if ( (byte_4A009CE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19842/*"hidePersonality"*/, method);
    byte_4A009CE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19842/*"hidePersonality"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009CD & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19843/*"hidePolicy"*/, method);
    byte_4A009CD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19843/*"hidePolicy"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009CF & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19840/*"hideAttri"*/, method);
    byte_4A009CF = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19840/*"hideAttri"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20161/*"imageSvtId"*/, method);
    byte_4A009C5 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20161/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00986 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00986 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009BD & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9458/*"NoSkipDeadFirstId"*/, method);
    byte_4A009BD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9458/*"NoSkipDeadFirstId"*/, 0, v2);
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

  if ( (byte_4A009D7 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity);
    sub_1B64870(&StringLiteral_12640/*"SetFriendShipRankFromUserServant"*/, v5);
    sub_1B64870(&StringLiteral_6751/*"ForceSetFriendShipRank"*/, v6);
    byte_4A009D7 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_6751/*"ForceSetFriendShipRank"*/, 0LL) )
    return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_6751/*"ForceSetFriendShipRank"*/, 0, 0LL);
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_12640/*"SetFriendShipRankFromUserServant"*/, 0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1B64ACC(HasKey, v9);
  v10 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v12, 0LL);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009D1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22292/*"overwriteBreakShiftVoice"*/, method);
    byte_4A009D1 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22292/*"overwriteBreakShiftVoice"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009CB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22313/*"overwritePersonality"*/, method);
    byte_4A009CB = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22313/*"overwritePersonality"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009CA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22314/*"overwritePolicy"*/, method);
    byte_4A009CA = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22314/*"overwritePolicy"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009CC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22290/*"overwriteAttri"*/, method);
    byte_4A009CC = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22290/*"overwriteAttri"*/, 0LL, v2);
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
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A009BF & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__string__TypeInfo, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B64870(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__, v11);
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v12);
    byte_4A009BF = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
              v19 = (System_Converter_TInput__TOutput__o *)sub_1B64ABC(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v19,
                v20,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__75_0 = (struct System_Converter_object__string__o *)v19;
              sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)v19, v22, v23);
            }
            if ( !v17
              || (v18 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v17,
                          (System_Converter_T__TOutput__o *)v19,
                          (const MethodInfo_2D71580 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1B64ACC(v18, v14);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v18,
                                            (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4A009C0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23960/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_4A009C0 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23960/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009C1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23961/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_4A009C1 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_23961/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_24494/*"voicePatternId"*/, method);
    byte_4A0099F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24494/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A009AC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20738/*"isSkillShiftInfo"*/, method);
    byte_4A009AC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20738/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00985 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00985 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A009D6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B64870(&StringLiteral_7213/*"HideBattlePointGauge"*/, v5);
    byte_4A009D6 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7213/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E54F84 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A009C3 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19841/*"hideClassSkill"*/, method);
    byte_4A009C3 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19841/*"hideClassSkill"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A009D5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B64870(&StringLiteral_7428/*"IgnoreBattlePointUp"*/, v5);
    byte_4A009D5 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7428/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E54F84 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A009C2 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20718/*"isLateUpdatePopup"*/, method);
    byte_4A009C2 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20718/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A009B6 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A009B6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v6);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009BC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9449/*"NoAutoSkipDead"*/, method);
    byte_4A009BC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9449/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009D2 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9454/*"NoMotion"*/, method);
    byte_4A009D2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9454/*"NoMotion"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009BB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9457/*"NoSkipDead"*/, method);
    byte_4A009BB = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9457/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00989 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22014/*"noVoice"*/, method);
    byte_4A00989 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22014/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A009C7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20737/*"isShadow"*/, method);
    byte_4A009C7 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20737/*"isShadow"*/, v2);
}


bool __fastcall BattleDeckServantData__IsUseTdBeforeTactical(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009D4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20745/*"isUseTdBeforeTactical"*/, method);
    byte_4A009D4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20745/*"isUseTdBeforeTactical"*/, 1, v2);
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

  if ( (byte_4A009D3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_bool___ctor__, method);
    sub_1B64870(&StringLiteral_18912/*"enableBreakShiftVoice"*/, v4);
    byte_4A009D3 = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18912/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18912/*"enableBreakShiftVoice"*/, 1, v5);
  if ( !Script )
  {
    v9 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v9,
      0,
      (const MethodInfo_35CC508 *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  if ( Script == 1 )
  {
    v7 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v7,
      1,
      (const MethodInfo_35CC508 *)Method_System_Nullable_bool___ctor__);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A009B8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19331/*"fieldMotionIds"*/, fieldMotionIds);
    byte_4A009B8 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_19331/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_1B64814((ServantStatusBattleListViewItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A009B9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17015/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_4A009B9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_17015/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4A009B7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19515/*"fov"*/, fov);
    byte_4A009B7 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19515/*"fov"*/,
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

  if ( (byte_4A009AE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18964/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_4A009AE = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18964/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18964/*"entryIndex"*/, entryIndex + 1, v5);
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

  if ( (byte_4A009A1 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64870(&long_TypeInfo, v8);
    byte_4A009A1 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64ACC(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13) == val;
      }
      else
      {
        sub_1B64D8C(Item);
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

  if ( (byte_4A00999 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17117/*"billBoardGroup"*/, method);
    byte_4A00999 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17117/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00997 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17736/*"changeAttri"*/, method);
    byte_4A00997 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17736/*"changeAttri"*/, 0, v2);
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
  int32_t v21; // w2
  int32_t v22; // w3
  BattleDeckServantData_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4A009AB & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B64870(&int___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B64870(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v9);
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_17735/*"change"*/, v11);
    byte_4A009AB = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_17735/*"change"*/,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17735/*"change"*/,
                                                                      (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__54_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v19,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64ACC(Item, v13);
  }
  sub_1B64D8C(v15);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v24, v25);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A009B1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22075/*"npInfoEnable"*/, method);
    byte_4A009B1 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22075/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22075/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00998 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18954/*"enemyNameEffect"*/, method);
    byte_4A00998 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18954/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00996 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23965/*"treasureDeviceVoiceId"*/, method);
    byte_4A00996 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23965/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0098E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19893/*"hpBarType"*/, method);
    byte_4A0098E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19893/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4A009AD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B64870(&StringLiteral_19457/*"forceDropItem"*/, v3);
    byte_4A009AD = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)StringLiteral_19457/*"forceDropItem"*/,
                            (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18437/*"deadChangePos"*/, method);
    byte_4A0099E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18437/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A009B2 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22074/*"npCharge"*/, method);
    byte_4A009B2 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22074/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22074/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00994 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23619/*"svtVoiceId"*/, method);
    byte_4A00994 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23619/*"svtVoiceId"*/, 0, v2);
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

  if ( (byte_4A009B5 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64870(&StringLiteral_23625/*"svt_voice_id"*/, v6);
    byte_4A009B5 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v8);
  }
  v9 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v9
    && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23625/*"svt_voice_id"*/,
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

  if ( (byte_4A0098B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22666/*"raid"*/, method);
    byte_4A0098B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22666/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00993 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22921/*"scale"*/, method);
    byte_4A00993 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22921/*"scale"*/, 100, v2);
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

  if ( (byte_4A009A4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64870(&long_TypeInfo, v8);
    byte_4A009A4 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64ACC(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1B64D8C(Item);
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

  if ( (byte_4A009A6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B64870(&long_TypeInfo, v7);
    byte_4A009A6 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B64ACC(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1B64D8C(value);
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

  if ( (byte_4A009A5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64870(&string_TypeInfo, v8);
    byte_4A009A5 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.enemyScript;
  if ( !v11 )
    sub_1B64ACC(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B64D8C(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v14, v15);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00991 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23005/*"sendDamageForSuperBossId"*/, method);
    byte_4A00991 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23005/*"sendDamageForSuperBossId"*/, 0, v2);
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
  int32_t v21; // w2
  int32_t v22; // w3
  BattleDeckServantData_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4A009AA & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B64870(&int___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B64870(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v9);
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_23163/*"shiftClear"*/, v11);
    byte_4A009AA = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23163/*"shiftClear"*/,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23163/*"shiftClear"*/,
                                                                      (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__53_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v19,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64ACC(Item, v13);
  }
  sub_1B64D8C(v15);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  BattleDeckServantData___c_c *v16; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  BattleDeckServantData_o *v24; // x0
  int64_t v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4A009A8 & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B64870(&int___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B64870(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v9);
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_23161/*"shift"*/, v11);
    byte_4A009A8 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23161/*"shift"*/,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23161/*"shift"*/,
                                                                      (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__51_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v19, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v21, v22);
    }
    if ( v15 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64ACC(Item, v13);
  }
  sub_1B64D8C(v15);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x20
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w8

  if ( (byte_4A009A7 & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1B64870(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v10);
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v11);
    sub_1B64870(&StringLiteral_17633/*"call"*/, v12);
    byte_4A009A7 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
         (Il2CppObject *)StringLiteral_17633/*"call"*/,
         (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = this->fields.enemyScript;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17633/*"call"*/,
             (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        sub_1B64D8C(v16);
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
      _9__50_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__50_0,
        v20,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v22, v23);
    }
    if ( !v16
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v16,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1B64ACC(Item, v14);
    }
    v24 = *((_DWORD *)Item + 6);
    if ( v24 > index )
    {
      if ( v24 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1B64AD4(Item, v14);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0098D & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23592/*"superBoss"*/, method);
    byte_4A0098D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23592/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A009AF & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23963/*"treasureDeviceName"*/, method);
    byte_4A009AF = 1;
  }
  v4 = (System_String_o *)StringLiteral_23963/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23963/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A009B0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23964/*"treasureDeviceRuby"*/, method);
    byte_4A009B0 = 1;
  }
  v4 = (System_String_o *)StringLiteral_23964/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23964/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4A00995 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20702/*"isAddition"*/, method);
    byte_4A00995 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20702/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00988 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16748/*"appear"*/, method);
    byte_4A00988 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16748/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00983 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00983 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00982 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00982 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00984 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00984 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00981 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20916/*"kill"*/, method);
    byte_4A00981 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20916/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A009BA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20716/*"isHideShadow"*/, method);
    byte_4A009BA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20716/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_4A009A3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4A009A3 = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)infoScript,
                           (Il2CppObject *)key,
                           (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A00992 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20984/*"leader"*/, method);
    byte_4A00992 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20984/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099D & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23403/*"startPos"*/, method);
    byte_4A0099D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23403/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099A & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_21884/*"multiTargetCore"*/, method);
    byte_4A0099A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21884/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099C & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_21885/*"multiTargetUnder"*/, method);
    byte_4A0099C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21885/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A0099B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_21886/*"multiTargetUp"*/, method);
    byte_4A0099B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21886/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A0098A & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22666/*"raid"*/, method);
    byte_4A0098A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22666/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4A009A2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4A009A2 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A00990 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23005/*"sendDamageForSuperBossId"*/, method);
    byte_4A00990 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23005/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A0098C & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23592/*"superBoss"*/, method);
    byte_4A0098C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23592/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A0098F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23594/*"superBossUi"*/, method);
    byte_4A0098F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23594/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  Il2CppObject *Item; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v16; // x9
  int32_t v18; // w1
  __int64 v19; // x10

  if ( (byte_4A009B3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B64870(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B64870(&StringLiteral_23621/*"svt_change"*/, v8);
    byte_4A009B3 = 1;
  }
  v9 = (Il2CppObject *)StringLiteral_23621/*"svt_change"*/;
  *dict = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)dict, 0, (int32_t)method, v3);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          v9,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_1B64ACC(enemyScript, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           v9,
           (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)dict, v18, v13, v14);
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

  if ( (byte_4A009B4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1B64870(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_1B64870(&long_TypeInfo, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_1B64870(&StringLiteral_22511/*"priority"*/, v17);
    sub_1B64870(&StringLiteral_24406/*"value"*/, v18);
    byte_4A009B4 = 1;
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
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    sub_1B64ACC(Item, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    Item,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v38 = v37;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v38.fields._current;
    }
    while ( !v38.fields._current );
    v24 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v24
      || (System_Collections_Generic_Dictionary_string__object__c *)v38.fields._current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B64D8C(v38.fields._current);
LABEL_30:
      sub_1B64ACC(v25, v26);
    }
    v25 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v38.fields._current,
            (Il2CppObject *)StringLiteral_22511/*"priority"*/,
            (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v25 )
      goto LABEL_30;
    if ( v25->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B64D8C(v25);
LABEL_32:
      sub_1B64ACC(v29, v30);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v25, long_TypeInfo, v27, v28) != priority );
  v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24406/*"value"*/,
          (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v29 )
    goto LABEL_32;
  if ( v29->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v29, long_TypeInfo, v31, v32);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1B64D8C(v29);
    if ( v34 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1C4F300();
    }
    v35 = *(_QWORD *)__cxa_begin_catch(v33);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v35 )
      sub_1B64AC4(v35);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A009D8 & 1) == 0 )
  {
    sub_1B64870(&BattleDeckServantData___c_TypeInfo, v1);
    byte_4A009D8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, 0LL);
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

  if ( (byte_4A009DC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_4A009DC = 1;
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

  if ( (byte_4A009DB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_4A009DB = 1;
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

  if ( (byte_4A009DA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_4A009DA = 1;
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

  if ( (byte_4A009D9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_4A009D9 = 1;
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