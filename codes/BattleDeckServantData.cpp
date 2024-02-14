void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4213465 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213465 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, v2);
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

  if ( (byte_421347E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16347/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_421347E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16347/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_421349C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16550/*"assumedEffectId"*/, method);
    byte_421349C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16550/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17333/*"changePersonality"*/, method);
    byte_42134A7 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17333/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17334/*"changePolicy"*/, method);
    byte_42134A6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17334/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4213487 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long___, defVal);
    sub_B0D8A4(&StringLiteral_22172/*"shiftPosition"*/, v5);
    byte_4213487 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_22172/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_1708D88 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18084/*"dispBreakShift"*/, method);
    byte_42134A2 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18084/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18085/*"dispLimitCount"*/, method);
    byte_42134A4 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18085/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetFollowerType(
        BattleDeckServantData_o *this,
        int32_t oldFollowerType,
        const MethodInfo *method)
{
  if ( this->fields.followerType < 0 )
    return oldFollowerType;
  else
    return this->fields.followerType;
}


int32_t __fastcall BattleDeckServantData__GetImageSvtId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19479/*"imageSvtId"*/, method);
    byte_42134A3 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19479/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213464 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213464 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421349B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9617/*"NoSkipDeadFirstId"*/, method);
    byte_421349B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9617/*"NoSkipDeadFirstId"*/, 0, v2);
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
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x11
  System_Collections_Generic_List_object__c *v18; // x10
  System_Collections_Generic_List_string__o *v19; // x20
  void *v20; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__76_0; // x19
  Il2CppObject *v23; // x21
  struct BattleDeckServantData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421349D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__string___ctor__, key);
    sub_B0D8A4(&System_Converter_object__string__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B0D8A4(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__76_0__, v12);
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v13);
    byte_421349D = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
        {
          v18 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v17 - 1];
          v19 = v18 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_string__o *)value
              : 0LL;
          if ( v18 == System_Collections_Generic_List_object__TypeInfo )
          {
            v20 = BattleDeckServantData___c_TypeInfo;
            if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v20 = BattleDeckServantData___c_TypeInfo;
            }
            static_fields = (struct BattleDeckServantData___c_StaticFields *)*((_QWORD *)v20 + 23);
            _9__76_0 = (System_Converter_string__string__o *)static_fields->__9__76_0;
            if ( !_9__76_0 )
            {
              if ( (*((_BYTE *)v20 + 307) & 4) != 0 && !*((_DWORD *)v20 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v20);
                static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              }
              v23 = (Il2CppObject *)static_fields->__9;
              _9__76_0 = (System_Converter_string__string__o *)sub_B0D974(
                                                                 System_Converter_object__string__TypeInfo,
                                                                 v15,
                                                                 v16);
              System_Converter_string__string____ctor(
                _9__76_0,
                v23,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__76_0__,
                (const MethodInfo_2666150 *)Method_System_Converter_object__string___ctor__);
              v24 = BattleDeckServantData___c_TypeInfo->static_fields;
              v24->__9__76_0 = (struct System_Converter_object__string__o *)_9__76_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v24->__9__76_0,
                (System_Int32_array **)_9__76_0,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
            }
            if ( !v19
              || (v20 = System_Collections_Generic_List_string___ConvertAll_string_(
                          v19,
                          (System_Converter_T__TOutput__o *)_9__76_0,
                          (const MethodInfo_189F878 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_B0D97C(v20);
            }
            return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_421349E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22859/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_421349E = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22859/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421349F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22860/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_421349F = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_22860/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421347D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23257/*"voicePatternId"*/, method);
    byte_421347D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23257/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_421348A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20017/*"isSkillShiftInfo"*/, method);
    byte_421348A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20017/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213463 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213463 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 5, v2);
}


bool __fastcall BattleDeckServantData__IsHideAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134AA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19199/*"hideAttri"*/, method);
    byte_42134AA = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19199/*"hideAttri"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42134A1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19200/*"hideClassSkill"*/, method);
    byte_42134A1 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19200/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsHidePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19201/*"hidePersonality"*/, method);
    byte_42134A9 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19201/*"hidePersonality"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsHidePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42134A8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19202/*"hidePolicy"*/, method);
    byte_42134A8 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19202/*"hidePolicy"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42134A0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20000/*"isLateUpdatePopup"*/, method);
    byte_42134A0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20000/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213494 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213494 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal(entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421349A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9610/*"NoAutoSkipDead"*/, method);
    byte_421349A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9610/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213499 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9616/*"NoSkipDead"*/, method);
    byte_4213499 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9616/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213467 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21173/*"noVoice"*/, method);
    byte_4213467 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21173/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42134A5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20016/*"isShadow"*/, method);
    byte_42134A5 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20016/*"isShadow"*/, v2);
}


bool __fastcall BattleDeckServantData__TryGetAddFieldMotionIds(
        BattleDeckServantData_o *this,
        System_Int32_array **fieldMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213496 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18771/*"fieldMotionIds"*/, fieldMotionIds);
    byte_4213496 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_18771/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_B0D840((BattleServantConfConponent_o *)fieldMotionIds, (System_Int32_array **)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4213497 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16669/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_4213497 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_16669/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4213495 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18913/*"fov"*/, fov);
    byte_4213495 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_18913/*"fov"*/,
                 0.0,
                 0LL);
  *fov = FloatValue;
  return FloatValue > 0.0;
}


bool __fastcall BattleDeckServantData__TryGetVoicePatternId(
        BattleDeckServantData_o *this,
        int32_t *voicePatternId,
        const MethodInfo *method)
{
  int32_t v4; // w0

  v4 = BattleDeckServantData__GetVoicePatternId(this, (const MethodInfo *)voicePatternId);
  *voicePatternId = v4;
  return v4 != -1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDeckServantData__checkEntryIndex(
        BattleDeckServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_421348C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18436/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_421348C = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18436/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18436/*"entryIndex"*/, entryIndex + 1, v5);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_421347F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_421347F = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item) == val;
      }
      else
      {
        v11 = (BattleDeckServantData_o *)sub_B0DC70(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v11, v12);
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

  if ( (byte_4213477 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16763/*"billBoardGroup"*/, method);
    byte_4213477 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16763/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213475 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17321/*"changeAttri"*/, method);
    byte_4213475 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17321/*"changeAttri"*/, 0, v2);
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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v15; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__55_0; // x20
  System_Collections_Generic_List_object__c *v20; // x1
  __int64 v21; // x11
  __int64 v22; // x9
  Il2CppObject *v24; // x21
  struct BattleDeckServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4213489 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, method);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleDeckServantData___c__getChangeList_b__55_0__, v10);
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_17320/*"change"*/, v12);
    byte_4213489 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17320/*"change"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_17320/*"change"*/,
                                                                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__55_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__55_0;
  v20 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__55_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v20,
                                                                       v15);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__55_0,
      v24,
      Method_BattleDeckServantData___c__getChangeList_b__55_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v25 = BattleDeckServantData___c_TypeInfo->static_fields;
    v25->__9__55_0 = (struct System_Converter_object__int__o *)_9__55_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B0D97C(Item);
  }
  if ( !v16 )
    goto LABEL_24;
  v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B0DC70(v16);
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__55_0,
                                                                             (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_421348F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21223/*"npInfoEnable"*/, method);
    byte_421348F = 1;
  }
  v4 = (System_String_o *)StringLiteral_21223/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21223/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213476 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18425/*"enemyNameEffect"*/, method);
    byte_4213476 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18425/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213474 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22864/*"treasureDeviceVoiceId"*/, method);
    byte_4213474 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22864/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421346C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19238/*"hpBarType"*/, method);
    byte_421346C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19238/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_421348B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_18862/*"forceDropItem"*/, v3);
    byte_421348B = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)StringLiteral_18862/*"forceDropItem"*/,
                            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421347C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17970/*"deadChangePos"*/, method);
    byte_421347C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17970/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4213490 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21222/*"npCharge"*/, method);
    byte_4213490 = 1;
  }
  v4 = (System_String_o *)StringLiteral_21222/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21222/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213472 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22548/*"svtVoiceId"*/, method);
    byte_4213472 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22548/*"svtVoiceId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  ServantChangeEntity_o *v8; // x0
  const MethodInfo *v9; // x1
  ServantChangeEntity_o *v10; // x20
  const MethodInfo *v11; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4213493 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_22554/*"svt_voice_id"*/, v6);
    byte_4213493 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v8 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v8
    && (v10 = v8, ServantChangeEntity__IsEnable(v8, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_22554/*"svt_voice_id"*/,
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

  if ( (byte_4213469 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21744/*"raid"*/, method);
    byte_4213469 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21744/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213471 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21968/*"scale"*/, method);
    byte_4213471 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21968/*"scale"*/, 100, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4213482 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_4213482 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B0D97C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v12 = (BattleDeckServantData_o *)sub_B0DC70(Item);
  return BattleDeckServantData__ExistKillType(v12, v13);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  BattleDeckServantData_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213484 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_4213484 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B0D97C(0LL);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (BattleDeckServantData_o *)sub_B0DC70(value);
  return BattleDeckServantData__getUniqueID(v10, v11);
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
  System_String_o *Item; // x0
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4213483 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&string_TypeInfo, v8);
    byte_4213483 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10 )
    sub_B0D97C(0LL);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                              (System_Type_o *)key,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v13 = (BattleDeckServantData_o *)sub_B0DC70(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v13, v14);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421346F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22036/*"sendDamageForSuperBossId"*/, method);
    byte_421346F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22036/*"sendDamageForSuperBossId"*/, 0, v2);
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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v15; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__54_0; // x20
  System_Collections_Generic_List_object__c *v20; // x1
  __int64 v21; // x11
  __int64 v22; // x9
  Il2CppObject *v24; // x21
  struct BattleDeckServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4213488 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, method);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__, v10);
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_22171/*"shiftClear"*/, v12);
    byte_4213488 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22171/*"shiftClear"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22171/*"shiftClear"*/,
                                                                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__54_0;
  v20 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v20,
                                                                       v15);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__54_0,
      v24,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__54_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v25 = BattleDeckServantData___c_TypeInfo->static_fields;
    v25->__9__54_0 = (struct System_Converter_object__int__o *)_9__54_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B0D97C(Item);
  }
  if ( !v16 )
    goto LABEL_24;
  v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B0DC70(v16);
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__54_0,
                                                                             (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v15; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__52_0; // x20
  System_Collections_Generic_List_object__c *v20; // x1
  __int64 v21; // x11
  __int64 v22; // x9
  Il2CppObject *v24; // x21
  struct BattleDeckServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4213486 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, method);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleDeckServantData___c__getShiftList_b__52_0__, v10);
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_22169/*"shift"*/, v12);
    byte_4213486 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22169/*"shift"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22169/*"shift"*/,
                                                                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__52_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__52_0;
  v20 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v20,
                                                                       v15);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__52_0,
      v24,
      Method_BattleDeckServantData___c__getShiftList_b__52_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v25 = BattleDeckServantData___c_TypeInfo->static_fields;
    v25->__9__52_0 = (struct System_Converter_object__int__o *)_9__52_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B0D97C(Item);
  }
  if ( !v16 )
    goto LABEL_24;
  v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B0DC70(v16);
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__52_0,
                                                                             (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  void *Item; // x0
  __int64 v16; // x2
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__51_0; // x21
  System_Collections_Generic_List_object__c *v20; // x1
  __int64 v21; // x11
  __int64 v22; // x9
  Il2CppObject *v24; // x22
  struct BattleDeckServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w8
  __int64 v33; // x0

  if ( (byte_4213485 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, *(_QWORD *)&index);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__, v11);
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_17226/*"call"*/, v13);
    byte_4213485 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17226/*"call"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  Item = this->fields.enemyScript;
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
           (System_Type_o *)StringLiteral_17226/*"call"*/,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  this = (BattleDeckServantData_o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__51_0;
  v20 = System_Collections_Generic_List_object__TypeInfo;
  if ( this )
  {
    v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_17;
    }
  }
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v20,
                                                                       v16);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__51_0,
      v24,
      Method_BattleDeckServantData___c__getSummonNpcId_b__51_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v25 = BattleDeckServantData___c_TypeInfo->static_fields;
    v25->__9__51_0 = (struct System_Converter_object__int__o *)_9__51_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( this )
      goto LABEL_23;
LABEL_30:
    sub_B0D97C(Item);
  }
  if ( !this )
    goto LABEL_30;
  v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_17:
    sub_B0DC70(this);
    return this->fields.npcId;
  }
LABEL_23:
  Item = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
           (System_Collections_Generic_List_BattleActionData_HealData__o *)this,
           (System_Converter_T__TOutput__o *)_9__51_0,
           (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item )
    goto LABEL_30;
  v32 = *((_DWORD *)Item + 6);
  if ( v32 <= index )
    return -1;
  if ( v32 <= (unsigned int)index )
  {
    v33 = sub_B0D9A8(Item);
    sub_B0D948(v33, 0LL);
  }
  return *((_DWORD *)Item + index + 8);
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421346B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22523/*"superBoss"*/, method);
    byte_421346B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22523/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_421348D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22862/*"treasureDeviceName"*/, method);
    byte_421348D = 1;
  }
  v4 = (System_String_o *)StringLiteral_22862/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22862/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_421348E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22863/*"treasureDeviceRuby"*/, method);
    byte_421348E = 1;
  }
  v4 = (System_String_o *)StringLiteral_22863/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22863/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4213473 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19984/*"isAddition"*/, method);
    byte_4213473 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_19984/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213466 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16425/*"appear"*/, method);
    byte_4213466 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16425/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213461 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213461 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213460 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213460 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213462 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_4213462 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421345F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20198/*"kill"*/, method);
    byte_421345F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20198/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213498 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19998/*"isHideShadow"*/, method);
    byte_4213498 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19998/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_4213481 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4213481 = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)infoScript,
                           (System_Xml_XmlQualifiedName_o *)key,
                           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213470 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20265/*"leader"*/, method);
    byte_4213470 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20265/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421347B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22358/*"startPos"*/, method);
    byte_421347B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22358/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213478 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21057/*"multiTargetCore"*/, method);
    byte_4213478 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21057/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421347A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21058/*"multiTargetUnder"*/, method);
    byte_421347A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21058/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213479 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21059/*"multiTargetUp"*/, method);
    byte_4213479 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21059/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4213468 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21744/*"raid"*/, method);
    byte_4213468 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21744/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4213480 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4213480 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)key,
                            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_421346E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22036/*"sendDamageForSuperBossId"*/, method);
    byte_421346E = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22036/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_421346A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22523/*"superBoss"*/, method);
    byte_421346A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22523/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_421346D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22525/*"superBossUi"*/, method);
    byte_421346D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22525/*"superBossUi"*/, v2);
}


bool __fastcall BattleDeckServantData__tryGetSvtChange(
        BattleDeckServantData_o *this,
        System_Collections_Generic_Dictionary_string__object__o **dict,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Xml_XmlQualifiedName_o *v13; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x11
  System_Collections_Generic_Dictionary_string__object__o *v23; // x9
  System_Int32_array **v25; // x1
  __int64 v26; // x10

  if ( (byte_4213491 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_22550/*"svt_change"*/, v12);
    byte_4213491 = 1;
  }
  v13 = (System_Xml_XmlQualifiedName_o *)StringLiteral_22550/*"svt_change"*/;
  *dict = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)dict, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          v13,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_B0D97C(enemyScript);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)enemyScript,
           (System_Type_o *)v13,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v22 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v22 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v23 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    *dict = v23;
    v26 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v26 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v25 = (System_Int32_array **)Item;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
  }
  else
  {
    v25 = 0LL;
    *dict = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)dict, v25, v16, v17, v18, v19, v20, v21);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Item; // x0
  __int64 v20; // x10
  System_Collections_Generic_List_object__c *v21; // x9
  Il2CppObject *current; // x21
  __int64 v23; // x9
  UnityEngine_Purchasing_IStoreExtension_o *v24; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v25; // x0
  void *v26; // x0
  int v27; // w1
  __int64 v28; // x20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4213492 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_B0D8A4(&long_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_21600/*"priority"*/, v17);
    sub_B0D8A4(&StringLiteral_23190/*"value"*/, v18);
    byte_4213492 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  dict = 0LL;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_12;
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dict;
  if ( !dict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dict,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dict;
  if ( !dict )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dict,
                                                                                          (System_Type_o *)key,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
    goto LABEL_12;
  v21 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v20 - 1];
  if ( v21 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v21 != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_12;
  if ( !Item )
LABEL_28:
    sub_B0D97C(Item);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    Item,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
      goto LABEL_26;
    current = v31.fields.current;
    if ( v31.fields.current )
    {
      v23 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (System_Collections_Generic_Dictionary_string__object__c *)v31.fields.current->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v24 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B0DC70(v31.fields.current);
LABEL_30:
        v24 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B0DC70(v24);
LABEL_31:
        sub_B0D97C(v24);
      }
      v24 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v31.fields.current,
              (System_Type_o *)StringLiteral_21600/*"priority"*/,
              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v24 )
        goto LABEL_31;
      if ( v24->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_30;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v24) == priority )
        break;
    }
  }
  v25 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)current,
          (System_Type_o *)StringLiteral_23190/*"value"*/,
          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v25 )
    sub_B0D97C(0LL);
  if ( v25->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v25);
LABEL_26:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    goto LABEL_27;
  }
  v26 = (void *)sub_B0DC70(v25);
  if ( v27 != 1 )
    _Unwind_Resume(v26);
  v28 = *(_QWORD *)__cxa_begin_catch(v26);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v28 )
    sub_B0D948(v28, 0LL);
LABEL_27:
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138EF & 1) == 0 )
  {
    sub_B0D8A4(&BattleDeckServantData___c_TypeInfo, v1);
    byte_42138EF = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleDeckServantData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDeckServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleDeckServantData___c___GetScriptStringArrayParam_b__76_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__55_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_42138F3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42138F3 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftClearBuffIndiv_b__54_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_42138F2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42138F2 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftList_b__52_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_42138F1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42138F1 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getSummonNpcId_b__51_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_42138F0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42138F0 = 1;
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