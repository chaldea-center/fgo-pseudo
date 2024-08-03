void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE887 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE887 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, v2);
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

  if ( (byte_49FE8A0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16651/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_49FE8A0 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16651/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE8BE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16874/*"assumedEffectId"*/, method);
    byte_49FE8BE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16874/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17746/*"changePersonality"*/, method);
    byte_49FE8C9 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17746/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17747/*"changePolicy"*/, method);
    byte_49FE8C8 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17747/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_49FE8A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_long___, defVal);
    sub_1B640C8(&StringLiteral_23161/*"shiftPosition"*/, v5);
    byte_49FE8A9 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_23161/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_2E2771C *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18566/*"dispBreakShift"*/, method);
    byte_49FE8C4 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18566/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18569/*"dispLimitCount"*/, method);
    byte_49FE8C6 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18569/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE8D0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18567/*"dispChangeSkillIds"*/, method);
    byte_49FE8D0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18567/*"dispChangeSkillIds"*/,
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

  if ( (byte_49FE8CE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19839/*"hidePersonality"*/, method);
    byte_49FE8CE = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19839/*"hidePersonality"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8CD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19840/*"hidePolicy"*/, method);
    byte_49FE8CD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19840/*"hidePolicy"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8CF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19837/*"hideAttri"*/, method);
    byte_49FE8CF = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19837/*"hideAttri"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20158/*"imageSvtId"*/, method);
    byte_49FE8C5 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20158/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE886 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE886 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8BD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9456/*"NoSkipDeadFirstId"*/, method);
    byte_49FE8BD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9456/*"NoSkipDeadFirstId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 HasKey; // x0
  __int64 v9; // x20
  __int64 v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_49FE8D7 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, entity);
    sub_1B640C8(&StringLiteral_12637/*"SetFriendShipRankFromUserServant"*/, v5);
    sub_1B640C8(&StringLiteral_6751/*"ForceSetFriendShipRank"*/, v6);
    byte_49FE8D7 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_6751/*"ForceSetFriendShipRank"*/, 0LL) )
    return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_6751/*"ForceSetFriendShipRank"*/, 0, 0LL);
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_12637/*"SetFriendShipRankFromUserServant"*/, 0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1B64324(HasKey);
  v9 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v10 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8D1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22289/*"overwriteBreakShiftVoice"*/, method);
    byte_49FE8D1 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22289/*"overwriteBreakShiftVoice"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8CB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22310/*"overwritePersonality"*/, method);
    byte_49FE8CB = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22310/*"overwritePersonality"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8CA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22311/*"overwritePolicy"*/, method);
    byte_49FE8CA = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22311/*"overwritePolicy"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8CC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22287/*"overwriteAttri"*/, method);
    byte_49FE8CC = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22287/*"overwriteAttri"*/, 0LL, v2);
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
  __int64 v15; // x2
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_object__c *v17; // x10
  System_Collections_Generic_List_object__o *v18; // x20
  void *v19; // x0
  System_Converter_TInput__TOutput__o *v20; // x19
  Il2CppObject *v21; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE8BF & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__string__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B640C8(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__, v11);
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v12);
    byte_49FE8BF = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          v17 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1];
          v18 = v17 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v17 == System_Collections_Generic_List_object__TypeInfo )
          {
            v19 = BattleDeckServantData___c_TypeInfo;
            if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v19 = BattleDeckServantData___c_TypeInfo;
            }
            v20 = *(System_Converter_TInput__TOutput__o **)(*((_QWORD *)v19 + 23) + 40LL);
            if ( !v20 )
            {
              if ( !*((_DWORD *)v19 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v19);
                v19 = BattleDeckServantData___c_TypeInfo;
              }
              v21 = (Il2CppObject *)**((_QWORD **)v19 + 23);
              v20 = (System_Converter_TInput__TOutput__o *)sub_1B64314(
                                                             System_Converter_object__string__TypeInfo,
                                                             v14,
                                                             v15);
              System_Converter_object__object____ctor(
                v20,
                v21,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__75_0 = (struct System_Converter_object__string__o *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)v20, v23, v24);
            }
            if ( !v18
              || (v19 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v18,
                          (System_Converter_T__TOutput__o *)v20,
                          (const MethodInfo_2D6F2A4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1B64324(v19);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v19,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_49FE8C0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23956/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_49FE8C0 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23956/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8C1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23957/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_49FE8C1 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_23957/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24490/*"voicePatternId"*/, method);
    byte_49FE89F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24490/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE8AC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20735/*"isSkillShiftInfo"*/, method);
    byte_49FE8AC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20735/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE885 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE885 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49FE8D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&StringLiteral_7213/*"HideBattlePointGauge"*/, v5);
    byte_49FE8D6 = 1;
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
                         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE8C3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19838/*"hideClassSkill"*/, method);
    byte_49FE8C3 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19838/*"hideClassSkill"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49FE8D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&StringLiteral_7427/*"IgnoreBattlePointUp"*/, v5);
    byte_49FE8D5 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7427/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE8C2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20715/*"isLateUpdatePopup"*/, method);
    byte_49FE8C2 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20715/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE8B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FE8B6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8BC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9447/*"NoAutoSkipDead"*/, method);
    byte_49FE8BC = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9447/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8D2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9452/*"NoMotion"*/, method);
    byte_49FE8D2 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9452/*"NoMotion"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8BB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9455/*"NoSkipDead"*/, method);
    byte_49FE8BB = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9455/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE889 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22011/*"noVoice"*/, method);
    byte_49FE889 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22011/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE8C7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20734/*"isShadow"*/, method);
    byte_49FE8C7 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20734/*"isShadow"*/, v2);
}


bool __fastcall BattleDeckServantData__IsUseTdBeforeTactical(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8D4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20742/*"isUseTdBeforeTactical"*/, method);
    byte_49FE8D4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20742/*"isUseTdBeforeTactical"*/, 1, v2);
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

  if ( (byte_49FE8D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_bool___ctor__, method);
    sub_1B640C8(&StringLiteral_18910/*"enableBreakShiftVoice"*/, v4);
    byte_49FE8D3 = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18910/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18910/*"enableBreakShiftVoice"*/, 1, v5);
  if ( !Script )
  {
    v9 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v9,
      0,
      (const MethodInfo_35CA22C *)Method_System_Nullable_bool___ctor__);
    return v11;
  }
  if ( Script == 1 )
  {
    v7 = &v12;
    v12 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v7,
      1,
      (const MethodInfo_35CA22C *)Method_System_Nullable_bool___ctor__);
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

  if ( (byte_49FE8B8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19328/*"fieldMotionIds"*/, fieldMotionIds);
    byte_49FE8B8 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_19328/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_49FE8B9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17013/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_49FE8B9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_17013/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_49FE8B7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19512/*"fov"*/, fov);
    byte_49FE8B7 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19512/*"fov"*/,
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

  if ( (byte_49FE8AE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18962/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_49FE8AE = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18962/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18962/*"entryIndex"*/, entryIndex + 1, v5);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FE8A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FE8A1 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B64324(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) == val;
      }
      else
      {
        sub_1B645E4(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v13, v14);
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

  if ( (byte_49FE899 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17115/*"billBoardGroup"*/, method);
    byte_49FE899 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17115/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE897 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17734/*"changeAttri"*/, method);
    byte_49FE897 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17734/*"changeAttri"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleDeckServantData_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_49FE8AB & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B640C8(&Method_BattleDeckServantData___c__getChangeList_b__54_0__, v9);
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_17733/*"change"*/, v11);
    byte_49FE8AB = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_17733/*"change"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17733/*"change"*/,
                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  _9__54_0 = v17->static_fields->__9__54_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleDeckServantData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v14, v15);
      System_Converter_object__int____ctor(
        _9__54_0,
        v20,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64324(Item);
  }
  sub_1B645E4(v16);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v25, v26);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_49FE8B1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22072/*"npInfoEnable"*/, method);
    byte_49FE8B1 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22072/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22072/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE898 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18952/*"enemyNameEffect"*/, method);
    byte_49FE898 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18952/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE896 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23961/*"treasureDeviceVoiceId"*/, method);
    byte_49FE896 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_23961/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE88E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19890/*"hpBarType"*/, method);
    byte_49FE88E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19890/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_49FE8AD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_19454/*"forceDropItem"*/, v3);
    byte_49FE8AD = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)StringLiteral_19454/*"forceDropItem"*/,
                            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18435/*"deadChangePos"*/, method);
    byte_49FE89E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18435/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_49FE8B2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22071/*"npCharge"*/, method);
    byte_49FE8B2 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22071/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22071/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE894 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23615/*"svtVoiceId"*/, method);
    byte_49FE894 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23615/*"svtVoiceId"*/, 0, v2);
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
  ServantChangeEntity_o *v8; // x0
  const MethodInfo *v9; // x1
  ServantChangeEntity_o *v10; // x20
  const MethodInfo *v11; // x4
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FE8B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_23621/*"svt_voice_id"*/, v6);
    byte_49FE8B5 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v8 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v8
    && (v10 = v8, ServantChangeEntity__IsEnable(v8, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23621/*"svt_voice_id"*/,
         v10->fields.priority,
         &value,
         v11) )
  {
    return value;
  }
  else
  {
    return BattleDeckServantData__getOverWriteSvtVoiceIdOld(this, v9);
  }
}


int32_t __fastcall BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE88B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22663/*"raid"*/, method);
    byte_49FE88B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22663/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE893 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22918/*"scale"*/, method);
    byte_49FE893 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22918/*"scale"*/, 100, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_49FE8A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FE8A4 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64324(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  sub_1B645E4(Item);
  return BattleDeckServantData__ExistKillType(v14, v15);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE8A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B640C8(&long_TypeInfo, v7);
    byte_49FE8A6 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B64324(0LL);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B645E4(value);
  return BattleDeckServantData__getUniqueID(v12, v13);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FE8A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&string_TypeInfo, v8);
    byte_49FE8A5 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10 )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v10,
           (Il2CppObject *)key,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B645E4(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v13, v14);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE891 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23002/*"sendDamageForSuperBossId"*/, method);
    byte_49FE891 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23002/*"sendDamageForSuperBossId"*/, 0, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleDeckServantData_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_49FE8AA & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B640C8(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__, v9);
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_23160/*"shiftClear"*/, v11);
    byte_49FE8AA = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23160/*"shiftClear"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23160/*"shiftClear"*/,
                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  _9__53_0 = v17->static_fields->__9__53_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleDeckServantData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v14, v15);
      System_Converter_object__int____ctor(
        _9__53_0,
        v20,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64324(Item);
  }
  sub_1B645E4(v16);
  return BattleDeckServantData__getChangeList(v25, v26);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleDeckServantData_o *v25; // x0
  int64_t v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_49FE8A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B640C8(&Method_BattleDeckServantData___c__getShiftList_b__51_0__, v9);
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_23158/*"shift"*/, v11);
    byte_49FE8A8 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23158/*"shift"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23158/*"shift"*/,
                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  _9__51_0 = v17->static_fields->__9__51_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleDeckServantData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v14, v15);
      System_Converter_object__int____ctor(_9__51_0, v20, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64324(Item);
  }
  sub_1B645E4(v16);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v25, v26, v27);
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
  void *Item; // x0
  System_Collections_Generic_List_object__c *v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  BattleDeckServantData___c_c *v18; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v21; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  int32_t v26; // w8

  if ( (byte_49FE8A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1B640C8(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__, v10);
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_17631/*"call"*/, v12);
    byte_49FE8A7 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
         (Il2CppObject *)StringLiteral_17631/*"call"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = this->fields.enemyScript;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17631/*"call"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v17 = (System_Collections_Generic_List_object__o *)Item;
    v18 = BattleDeckServantData___c_TypeInfo;
    if ( !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
      v18 = BattleDeckServantData___c_TypeInfo;
    }
    _9__50_0 = v18->static_fields->__9__50_0;
    if ( v17 )
    {
      v15 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1B645E4(v17);
        goto LABEL_26;
      }
    }
    if ( !_9__50_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleDeckServantData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__50_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v15, v16);
      System_Converter_object__int____ctor(
        _9__50_0,
        v21,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v23, v24);
    }
    if ( !v17
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v17,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1B64324(Item);
    }
    v26 = *((_DWORD *)Item + 6);
    if ( v26 > index )
    {
      if ( v26 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1B6432C(Item, v25);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE88D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23588/*"superBoss"*/, method);
    byte_49FE88D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23588/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_49FE8AF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23959/*"treasureDeviceName"*/, method);
    byte_49FE8AF = 1;
  }
  v4 = (System_String_o *)StringLiteral_23959/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23959/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_49FE8B0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23960/*"treasureDeviceRuby"*/, method);
    byte_49FE8B0 = 1;
  }
  v4 = (System_String_o *)StringLiteral_23960/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23960/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_49FE895 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20699/*"isAddition"*/, method);
    byte_49FE895 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20699/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE888 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16746/*"appear"*/, method);
    byte_49FE888 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16746/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE883 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE883 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE882 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE882 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE884 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE884 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE881 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20913/*"kill"*/, method);
    byte_49FE881 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20913/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE8BA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20713/*"isHideShadow"*/, method);
    byte_49FE8BA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20713/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_49FE8A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FE8A3 = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)infoScript,
                           (Il2CppObject *)key,
                           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE892 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20981/*"leader"*/, method);
    byte_49FE892 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20981/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23399/*"startPos"*/, method);
    byte_49FE89D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23399/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21881/*"multiTargetCore"*/, method);
    byte_49FE89A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21881/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21882/*"multiTargetUnder"*/, method);
    byte_49FE89C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21882/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE89B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21883/*"multiTargetUp"*/, method);
    byte_49FE89B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21883/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE88A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22663/*"raid"*/, method);
    byte_49FE88A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22663/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_49FE8A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FE8A2 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE890 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23002/*"sendDamageForSuperBossId"*/, method);
    byte_49FE890 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23002/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE88C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23588/*"superBoss"*/, method);
    byte_49FE88C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23588/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE88F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23590/*"superBossUi"*/, method);
    byte_49FE88F = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23590/*"superBossUi"*/, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  Il2CppObject *Item; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v15; // x9
  int32_t v17; // w1
  __int64 v18; // x10

  if ( (byte_49FE8B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_23617/*"svt_change"*/, v8);
    byte_49FE8B3 = 1;
  }
  v9 = (Il2CppObject *)StringLiteral_23617/*"svt_change"*/;
  *dict = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)dict, 0, (int32_t)method, v3);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          v9,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_1B64324(enemyScript);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           v9,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v15 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    *dict = v15;
    v18 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v18 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v17 = (int)Item;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v17 = 0;
    *dict = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)dict, v17, v12, v13);
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
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v21; // x9
  Il2CppObject *current; // x21
  __int64 v23; // x9
  Il2CppObject *v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  void *v30; // x0
  int v31; // w1
  __int64 v32; // x21
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FE8B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_1B640C8(&long_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_1B640C8(&StringLiteral_22508/*"priority"*/, v17);
    sub_1B640C8(&StringLiteral_24402/*"value"*/, v18);
    byte_49FE8B4 = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_12;
  v21 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
  if ( v21 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v21 != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  if ( !Item )
LABEL_28:
    sub_1B64324(Item);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    Item,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v35 = v34;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v35.fields._current;
    }
    while ( !v35.fields._current );
    v23 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v35.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v23
      || (System_Collections_Generic_Dictionary_string__object__c *)v35.fields._current->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B645E4(v35.fields._current);
LABEL_30:
      sub_1B64324(v24);
    }
    v24 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v35.fields._current,
            (Il2CppObject *)StringLiteral_22508/*"priority"*/,
            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v24 )
      goto LABEL_30;
    if ( v24->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B645E4(v24);
LABEL_32:
      sub_1B64324(v27);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v24, long_TypeInfo, v25, v26) != priority );
  v27 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24402/*"value"*/,
          (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v27 )
    goto LABEL_32;
  if ( v27->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v27, long_TypeInfo, v28, v29);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1B645E4(v27);
    if ( v31 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1C4EB58();
    }
    v32 = *(_QWORD *)__cxa_begin_catch(v30);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v32 )
      sub_1B6431C(v32);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE8D8 & 1) == 0 )
  {
    sub_1B640C8(&BattleDeckServantData___c_TypeInfo, v1);
    byte_49FE8D8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleDeckServantData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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

  if ( (byte_49FE8DC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FE8DC = 1;
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

  if ( (byte_49FE8DB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FE8DB = 1;
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

  if ( (byte_49FE8DA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FE8DA = 1;
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

  if ( (byte_49FE8D9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FE8D9 = 1;
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