void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D62E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D62E = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, v2);
}


bool __fastcall BattleDeckServantData__ExistsScript(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.enemyScript, 0LL);
}


int32_t __fastcall BattleDeckServantData__GetAiResetTiming(
        BattleDeckServantData_o *this,
        int32_t defTiming,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5D647 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16720/*"aiResetTiming"*/);
    byte_4A5D647 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16720/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D665 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16943/*"assumedEffectId"*/);
    byte_4A5D665 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16943/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D670 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17816/*"changePersonality"*/);
    byte_4A5D670 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17816/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D66F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17817/*"changePolicy"*/);
    byte_4A5D66F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17817/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_4A5D650 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    sub_1B885B0(&StringLiteral_23257/*"shiftPosition"*/);
    byte_4A5D650 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_23257/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D66B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18637/*"dispBreakShift"*/);
    byte_4A5D66B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18637/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D66D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18640/*"dispLimitCount"*/);
    byte_4A5D66D = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18640/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D677 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18638/*"dispChangeSkillIds"*/);
    byte_4A5D677 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18638/*"dispChangeSkillIds"*/,
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

  if ( (byte_4A5D675 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19918/*"hidePersonality"*/);
    byte_4A5D675 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19918/*"hidePersonality"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStatePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D674 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19919/*"hidePolicy"*/);
    byte_4A5D674 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19919/*"hidePolicy"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetHideStateSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D676 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19916/*"hideAttri"*/);
    byte_4A5D676 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19916/*"hideAttri"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D66C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20238/*"imageSvtId"*/);
    byte_4A5D66C = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_20238/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D62D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D62D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D664 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9499/*"NoSkipDeadFirstId"*/);
    byte_4A5D664 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9499/*"NoSkipDeadFirstId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNpcFriendShipRank(
        BattleDeckServantData_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 HasKey; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5D67E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_12698/*"SetFriendShipRankFromUserServant"*/);
    sub_1B885B0(&StringLiteral_6779/*"ForceSetFriendShipRank"*/);
    byte_4A5D67E = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_6779/*"ForceSetFriendShipRank"*/, 0LL) )
    return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_6779/*"ForceSetFriendShipRank"*/, 0, 0LL);
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.enemyScript, (System_String_o *)StringLiteral_12698/*"SetFriendShipRankFromUserServant"*/, 0LL);
  if ( !HasKey )
    return 0;
  if ( !entity )
    sub_1B8880C(HasKey, v7);
  v8 = *(_QWORD *)&entity->fields.friendshipRank.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
}


EnemyScriptParam_OverwriteShiftIcon_array *__fastcall BattleDeckServantData__GetOverwriteBreakShiftIconInfo(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  EnemyScriptParam_OverwriteShiftIcon_array *result; // x0
  EnemyScriptParam_OverwriteShiftIcon_array *v4; // x19

  if ( (byte_4A5D67F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_string__object___);
    sub_1B885B0(&Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22409/*"overwriteShiftIcon"*/);
    byte_4A5D67F = 1;
  }
  result = (EnemyScriptParam_OverwriteShiftIcon_array *)BasicHelper__GetValue_object__object_(
                                                          (System_Collections_Generic_Dictionary_K__V__o *)this->fields.enemyScript,
                                                          (Il2CppObject *)StringLiteral_22409/*"overwriteShiftIcon"*/,
                                                          0LL,
                                                          (const MethodInfo_2E6E2D4 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v4 = result;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (EnemyScriptParam_OverwriteShiftIcon_array *)JsonManager__Deserialize_object_(
                                                          &v4->obj,
                                                          (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_EnemyScriptParam_OverwriteShiftIcon_____);
  }
  return result;
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteBreakShiftVoiceName(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D678 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22377/*"overwriteBreakShiftVoice"*/);
    byte_4A5D678 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22377/*"overwriteBreakShiftVoice"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePersonality(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D672 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22399/*"overwritePersonality"*/);
    byte_4A5D672 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22399/*"overwritePersonality"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwritePolicy(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D671 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22400/*"overwritePolicy"*/);
    byte_4A5D671 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22400/*"overwritePolicy"*/, 0LL, v2);
}


System_String_o *__fastcall BattleDeckServantData__GetOverwriteSubAttribute(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D673 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22375/*"overwriteAttri"*/);
    byte_4A5D673 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22375/*"overwriteAttri"*/, 0LL, v2);
}


System_String_array *__fastcall BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_object__c *v10; // x10
  System_Collections_Generic_List_object__o *v11; // x20
  void *v12; // x0
  System_Converter_TInput__TOutput__o *v13; // x19
  Il2CppObject *v14; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D666 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__);
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    byte_4A5D666 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          v10 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1];
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
              v13 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_object__string__TypeInfo);
              System_Converter_object__object____ctor(
                v13,
                v14,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                0LL);
              static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              static_fields->__9__75_0 = (struct System_Converter_object__string__o *)v13;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)v13, v16, v17);
            }
            if ( !v11
              || (v12 = System_Collections_Generic_List_object___ConvertAll_object_(
                          v11,
                          (System_Converter_T__TOutput__o *)v13,
                          (const MethodInfo_2DB32F8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_1B8880C(v12, v8);
            }
            return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v12,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4A5D667 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24055/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_4A5D667 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24055/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D668 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24056/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_4A5D668 = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_24056/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D646 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24589/*"voicePatternId"*/);
    byte_4A5D646 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_24589/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D653 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20817/*"isSkillShiftInfo"*/);
    byte_4A5D653 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20817/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D62C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D62C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 5, v2);
}


bool __fastcall BattleDeckServantData__IsHideBattlePointGauge(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A5D67D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&StringLiteral_7243/*"HideBattlePointGauge"*/);
    byte_4A5D67D = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7243/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D66A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19917/*"hideClassSkill"*/);
    byte_4A5D66A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19917/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsIgnoreBattlePointUp(
        BattleDeckServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A5D67C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&StringLiteral_7458/*"IgnoreBattlePointUp"*/);
    byte_4A5D67C = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.enemyScript,
                                                                    (System_String_o *)StringLiteral_7458/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D669 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20797/*"isLateUpdatePopup"*/);
    byte_4A5D669 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20797/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D65D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D65D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D663 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9490/*"NoAutoSkipDead"*/);
    byte_4A5D663 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9490/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoMotionOnBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D679 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9495/*"NoMotion"*/);
    byte_4A5D679 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9495/*"NoMotion"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D662 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9498/*"NoSkipDead"*/);
    byte_4A5D662 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9498/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D630 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22098/*"noVoice"*/);
    byte_4A5D630 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22098/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D66E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20816/*"isShadow"*/);
    byte_4A5D66E = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20816/*"isShadow"*/, v2);
}


bool __fastcall BattleDeckServantData__IsUseTdBeforeTactical(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D67B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20824/*"isUseTdBeforeTactical"*/);
    byte_4A5D67B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20824/*"isUseTdBeforeTactical"*/, 1, v2);
}


System_Nullable_bool__o __fastcall BattleDeckServantData__IsVoiceEnabledOnBreakShift(
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

  if ( (byte_4A5D67A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    sub_1B885B0(&StringLiteral_18983/*"enableBreakShiftVoice"*/);
    byte_4A5D67A = 1;
  }
  if ( !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18983/*"enableBreakShiftVoice"*/, v2) )
    return (System_Nullable_bool__o)0;
  Script = BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18983/*"enableBreakShiftVoice"*/, 1, v4);
  if ( !Script )
  {
    v8 = &v10;
    v10 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
    return v10;
  }
  if ( Script == 1 )
  {
    v6 = &v11;
    v11 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      1,
      (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
    return v11;
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

  if ( (byte_4A5D65F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19405/*"fieldMotionIds"*/);
    byte_4A5D65F = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_19405/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)fieldMotionIds, (int32_t)IntArray, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A5D660 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17081/*"baseUniqueCameraId"*/);
    byte_4A5D660 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_17081/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4A5D65E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19590/*"fov"*/);
    byte_4A5D65E = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_19590/*"fov"*/,
                 0.0,
                 0LL);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


bool __fastcall BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4A5D655 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19035/*"entryIndex"*/);
    byte_4A5D655 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19035/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19035/*"entryIndex"*/, entryIndex + 1, v5);
}


bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A5D648 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5D648 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           (Il2CppObject *)key,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B8880C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) == val;
      }
      else
      {
        sub_1B88ACC(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v12, v13);
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

  if ( (byte_4A5D640 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17183/*"billBoardGroup"*/);
    byte_4A5D640 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17183/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D63E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17804/*"changeAttri"*/);
    byte_4A5D63E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17804/*"changeAttri"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__54_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4A5D652 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_BattleDeckServantData___c__getChangeList_b__54_0__);
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    sub_1B885B0(&StringLiteral_17803/*"change"*/);
    byte_4A5D652 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_17803/*"change"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17803/*"change"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v6->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__54_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__54_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__54_0,
        v10,
        Method_BattleDeckServantData___c__getChangeList_b__54_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__54_0 = _9__54_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__54_0,
                                                                          (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B8880C(Item, v4);
  }
  sub_1B88ACC(v6);
  return (System_Int32_array *)BattleDeckServantData__IsChangeDropItemByShift(v15, v16);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A5D658 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22160/*"npInfoEnable"*/);
    byte_4A5D658 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22160/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22160/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D63F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19025/*"enemyNameEffect"*/);
    byte_4A5D63F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19025/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D63D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24060/*"treasureDeviceVoiceId"*/);
    byte_4A5D63D = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_24060/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D635 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19969/*"hpBarType"*/);
    byte_4A5D635 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19969/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4A5D654 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_19532/*"forceDropItem"*/);
    byte_4A5D654 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)StringLiteral_19532/*"forceDropItem"*/,
                            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D645 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18507/*"deadChangePos"*/);
    byte_4A5D645 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18507/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A5D659 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22159/*"npCharge"*/);
    byte_4A5D659 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22159/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22159/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D63B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23712/*"svtVoiceId"*/);
    byte_4A5D63B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23712/*"svtVoiceId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
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

  if ( (byte_4A5D65C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23718/*"svt_voice_id"*/);
    byte_4A5D65C = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_23718/*"svt_voice_id"*/,
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


int32_t __fastcall BattleDeckServantData__getRaidId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D632 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22756/*"raid"*/);
    byte_4A5D632 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22756/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D63A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23013/*"scale"*/);
    byte_4A5D63A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23013/*"scale"*/, 100, v2);
}


int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A5D64B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5D64B = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1B88ACC(Item);
  return BattleDeckServantData__ExistKillType(v13, v14);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D64D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5D64D = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B8880C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B88ACC(value);
  return BattleDeckServantData__getUniqueID(v12, v13);
}


System_String_o *__fastcall BattleDeckServantData__getScriptStr(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A5D64C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D64C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.enemyScript;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B88ACC(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v12, v13);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D638 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23098/*"sendDamageForSuperBossId"*/);
    byte_4A5D638 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23098/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__53_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  BattleDeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4A5D651 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__);
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23256/*"shiftClear"*/);
    byte_4A5D651 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23256/*"shiftClear"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23256/*"shiftClear"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v6->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__53_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__53_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__53_0,
        v10,
        Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__53_0 = _9__53_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__53_0,
                                                                          (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B8880C(Item, v4);
  }
  sub_1B88ACC(v6);
  return BattleDeckServantData__getChangeList(v15, v16);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  System_Converter_object__int__o *_9__51_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x21
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  BattleDeckServantData_o *v15; // x0
  int64_t v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4A5D64F & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_BattleDeckServantData___c__getShiftList_b__51_0__);
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23254/*"shift"*/);
    byte_4A5D64F = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          (Il2CppObject *)StringLiteral_23254/*"shift"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23254/*"shift"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v6->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__51_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleDeckServantData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__51_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__51_0, v10, Method_BattleDeckServantData___c__getShiftList_b__51_0__, 0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = _9__51_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v12, v13);
    }
    if ( v6 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v6,
                                                                          (System_Converter_T__TOutput__o *)_9__51_0,
                                                                          (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B8880C(Item, v4);
  }
  sub_1B88ACC(v6);
  return (System_Int32_array *)BattleDeckServantData__GetDefShiftPosition(v15, v16, v17);
}


int32_t __fastcall BattleDeckServantData__getSummonNpcId(
        BattleDeckServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  BattleDeckServantData___c_c *v9; // x8
  System_Converter_object__int__o *_9__50_0; // x21
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x22
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w8

  if ( (byte_4A5D64E & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__);
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    sub_1B885B0(&StringLiteral_17701/*"call"*/);
    byte_4A5D64E = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
         (Il2CppObject *)StringLiteral_17701/*"call"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = this->fields.enemyScript;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_17701/*"call"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v8->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1B88ACC(v8);
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
      _9__50_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__50_0,
        v12,
        Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
        0LL);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v14, v15);
    }
    if ( !v8
      || (Item = System_Collections_Generic_List_object___ConvertAll_int_(
                   v8,
                   (System_Converter_T__TOutput__o *)_9__50_0,
                   (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___)) == 0LL
      || (Item = System_Collections_Generic_List_int___ToArray(
                   (System_Collections_Generic_List_int__o *)Item,
                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__)) == 0LL )
    {
LABEL_24:
      sub_1B8880C(Item, v6);
    }
    v16 = *((_DWORD *)Item + 6);
    if ( v16 > index )
    {
      if ( v16 > (unsigned int)index )
        return *((_DWORD *)Item + index + 8);
LABEL_26:
      sub_1B88814(Item, v6);
    }
  }
  return -1;
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D634 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23685/*"superBoss"*/);
    byte_4A5D634 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23685/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A5D656 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24058/*"treasureDeviceName"*/);
    byte_4A5D656 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24058/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24058/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A5D657 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24059/*"treasureDeviceRuby"*/);
    byte_4A5D657 = 1;
  }
  v4 = (System_String_o *)StringLiteral_24059/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_24059/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4A5D63C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20780/*"isAddition"*/);
    byte_4A5D63C = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20780/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D62F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16815/*"appear"*/);
    byte_4A5D62F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16815/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D62A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D62A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D629 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D629 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D62B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D62B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D628 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20995/*"kill"*/);
    byte_4A5D628 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20995/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D661 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20795/*"isHideShadow"*/);
    byte_4A5D661 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20795/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_4A5D64A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5D64A = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)infoScript,
                           (Il2CppObject *)key,
                           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D639 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21063/*"leader"*/);
    byte_4A5D639 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21063/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D644 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23496/*"startPos"*/);
    byte_4A5D644 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_23496/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D641 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21968/*"multiTargetCore"*/);
    byte_4A5D641 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21968/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D643 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21969/*"multiTargetUnder"*/);
    byte_4A5D643 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21969/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5D642 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21970/*"multiTargetUp"*/);
    byte_4A5D642 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21970/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D631 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22756/*"raid"*/);
    byte_4A5D631 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22756/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4A5D649 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5D649 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
                            (Il2CppObject *)key,
                            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D637 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23098/*"sendDamageForSuperBossId"*/);
    byte_4A5D637 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23098/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D633 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23685/*"superBoss"*/);
    byte_4A5D633 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23685/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5D636 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23687/*"superBossUi"*/);
    byte_4A5D636 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_23687/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  Il2CppObject *Item; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_string__object__o *v13; // x9
  int32_t v15; // w1
  __int64 v16; // x10

  if ( (byte_4A5D65A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_23714/*"svt_change"*/);
    byte_4A5D65A = 1;
  }
  v6 = (Il2CppObject *)StringLiteral_23714/*"svt_change"*/;
  *dict = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)dict, 0, (int32_t)method, v3);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
          v6,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_1B8880C(enemyScript, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)enemyScript,
           v6,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v13 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    *dict = v13;
    v16 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v16 )
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
    *dict = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)dict, v15, v10, v11);
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
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v12; // x9
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

  if ( (byte_4A5D65B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_22600/*"priority"*/);
    sub_1B885B0(&StringLiteral_24501/*"value"*/);
    byte_4A5D65B = 1;
  }
  memset(&v28, 0, sizeof(v28));
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
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_object__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)dict,
                                                        (Il2CppObject *)key,
                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_12;
  v12 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
  if ( v12 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v12 != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  if ( !Item )
LABEL_28:
    sub_1B8880C(Item, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    Item,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  do
  {
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        goto LABEL_26;
      current = v28.fields._current;
    }
    while ( !v28.fields._current );
    v14 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B88ACC(v28.fields._current);
LABEL_30:
      sub_1B8880C(v15, v16);
    }
    v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v28.fields._current,
            (Il2CppObject *)StringLiteral_22600/*"priority"*/,
            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !v15 )
      goto LABEL_30;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B88ACC(v15);
LABEL_32:
      sub_1B8880C(v19, v20);
    }
  }
  while ( *(_DWORD *)j_il2cpp_object_unbox_0(v15, long_TypeInfo, v17, v18) != priority );
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)current,
          (Il2CppObject *)StringLiteral_24501/*"value"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 )
    goto LABEL_32;
  if ( v19->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v19, long_TypeInfo, v21, v22);
LABEL_26:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  else
  {
    sub_1B88ACC(v19);
    if ( v24 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      sub_1C73040();
    }
    v25 = *(_QWORD *)__cxa_begin_catch(v23);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( v25 )
      sub_1B88804(v25);
  }
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D680 & 1) == 0 )
  {
    sub_1B885B0(&BattleDeckServantData___c_TypeInfo);
    byte_4A5D680 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleDeckServantData___c_TypeInfo->static_fields->__9 = (struct BattleDeckServantData___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleDeckServantData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5D684 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D684 = 1;
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

  if ( (byte_4A5D683 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D683 = 1;
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

  if ( (byte_4A5D682 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D682 = 1;
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

  if ( (byte_4A5D681 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D681 = 1;
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