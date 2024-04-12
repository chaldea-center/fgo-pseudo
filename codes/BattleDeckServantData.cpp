void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AEC80 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC80 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, v2);
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

  if ( (byte_42AEC99 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16410/*"aiResetTiming"*/);
    byte_42AEC99 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16410/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AECB7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16613/*"assumedEffectId"*/);
    byte_42AECB7 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16613/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetChangePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECC2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17402/*"changePersonality"*/);
    byte_42AECC2 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17402/*"changePersonality"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetChangePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECC1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17403/*"changePolicy"*/);
    byte_42AECC1 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17403/*"changePolicy"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  if ( (byte_42AECA2 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_long___);
    sub_B52984(&StringLiteral_22284/*"shiftPosition"*/);
    byte_42AECA2 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_22284/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_1A438BC *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECBD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18159/*"dispBreakShift"*/);
    byte_42AECBD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18159/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECBF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18162/*"dispLimitCount"*/);
    byte_42AECBF = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18162/*"dispLimitCount"*/, -1, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__GetDisplayChangeSkillIdArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AECC6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18160/*"dispChangeSkillIds"*/);
    byte_42AECC6 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_18160/*"dispChangeSkillIds"*/,
           0LL);
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

  if ( (byte_42AECBE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19564/*"imageSvtId"*/);
    byte_42AECBE = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19564/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECB6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9651/*"NoSkipDeadFirstId"*/);
    byte_42AECB6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9651/*"NoSkipDeadFirstId"*/, 0, v2);
}


System_String_array *__fastcall BattleDeckServantData__GetScriptStringArrayParam(
        BattleDeckServantData_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  __int64 v9; // x11
  System_Collections_Generic_List_object__c *v10; // x10
  System_Collections_Generic_List_string__o *v11; // x20
  void *v12; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__75_0; // x19
  Il2CppObject *v15; // x21
  struct BattleDeckServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AECB8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__string___ctor__);
    sub_B52984(&System_Converter_object__string__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__);
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    byte_42AECB8 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
        {
          v10 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v9 - 1];
          v11 = v10 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_string__o *)value
              : 0LL;
          if ( v10 == System_Collections_Generic_List_object__TypeInfo )
          {
            v12 = BattleDeckServantData___c_TypeInfo;
            if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v12 = BattleDeckServantData___c_TypeInfo;
            }
            static_fields = (struct BattleDeckServantData___c_StaticFields *)*((_QWORD *)v12 + 23);
            _9__75_0 = (System_Converter_string__string__o *)static_fields->__9__75_0;
            if ( !_9__75_0 )
            {
              if ( (*((_BYTE *)v12 + 307) & 4) != 0 && !*((_DWORD *)v12 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v12);
                static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              }
              v15 = (Il2CppObject *)static_fields->__9;
              _9__75_0 = (System_Converter_string__string__o *)sub_B52A54(System_Converter_object__string__TypeInfo);
              System_Converter_string__string____ctor(
                _9__75_0,
                v15,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__75_0__,
                (const MethodInfo_23DE854 *)Method_System_Converter_object__string___ctor__);
              v16 = BattleDeckServantData___c_TypeInfo->static_fields;
              v16->__9__75_0 = (struct System_Converter_object__string__o *)_9__75_0;
              sub_B52920(
                (BattleServantConfConponent_o *)&v16->__9__75_0,
                (System_Int32_array **)_9__75_0,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
            }
            if ( !v11
              || (v12 = System_Collections_Generic_List_string___ConvertAll_string_(
                          v11,
                          (System_Converter_T__TOutput__o *)_9__75_0,
                          (const MethodInfo_1913A48 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_B52A5C(v12, v8);
            }
            return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_42AECB9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22973/*"treasureDeviceErrorCardSelectVoiceSe"*/);
    byte_42AECB9 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22973/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECBA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22974/*"treasureDeviceErrorStatusVoiceSeList"*/);
    byte_42AECBA = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_22974/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__GetVoicePatternId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC98 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23371/*"voicePatternId"*/);
    byte_42AEC98 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_23371/*"voicePatternId"*/, -1, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AECA5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20105/*"isSkillShiftInfo"*/);
    byte_42AECA5 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20105/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 5, v2);
}


bool __fastcall BattleDeckServantData__IsHideAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECC5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19284/*"hideAttri"*/);
    byte_42AECC5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19284/*"hideAttri"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AECBC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19285/*"hideClassSkill"*/);
    byte_42AECBC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19285/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsHidePersonality(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECC4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19286/*"hidePersonality"*/);
    byte_42AECC4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19286/*"hidePersonality"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsHidePolicy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECC3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19287/*"hidePolicy"*/);
    byte_42AECC3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19287/*"hidePolicy"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AECBB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20087/*"isLateUpdatePopup"*/);
    byte_42AECBB = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20087/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AECAF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AECAF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal(entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECB5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9644/*"NoAutoSkipDead"*/);
    byte_42AECB5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9644/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECB4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9650/*"NoSkipDead"*/);
    byte_42AECB4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9650/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC82 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21276/*"noVoice"*/);
    byte_42AEC82 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21276/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AECC0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20104/*"isShadow"*/);
    byte_42AECC0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20104/*"isShadow"*/, v2);
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

  if ( (byte_42AECB1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18853/*"fieldMotionIds"*/);
    byte_42AECB1 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_18853/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_B52920((BattleServantConfConponent_o *)fieldMotionIds, (System_Int32_array **)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_42AECB2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16735/*"baseUniqueCameraId"*/);
    byte_42AECB2 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_16735/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_42AECB0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18996/*"fov"*/);
    byte_42AECB0 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_18996/*"fov"*/,
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

  if ( (byte_42AECA7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18513/*"entryIndex"*/);
    byte_42AECA7 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18513/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18513/*"entryIndex"*/, entryIndex + 1, v5);
}


bool __fastcall BattleDeckServantData__checkScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_42AEC9A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42AEC9A = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item) == val;
      }
      else
      {
        v10 = (BattleDeckServantData_o *)sub_B52D50(Item);
        LOBYTE(enemyScript) = BattleDeckServantData__isDeadStand(v10, v11);
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

  if ( (byte_42AEC92 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16829/*"billBoardGroup"*/);
    byte_42AEC92 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16829/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC90 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17390/*"changeAttri"*/);
    byte_42AEC90 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17390/*"changeAttri"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__54_0; // x20
  __int64 v10; // x11
  __int64 v11; // x9
  Il2CppObject *v13; // x21
  struct BattleDeckServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42AECA4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__int___ctor__);
    sub_B52984(&System_Converter_object__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&Method_BattleDeckServantData___c__getChangeList_b__54_0__);
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    sub_B52984(&StringLiteral_17389/*"change"*/);
    byte_42AECA4 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17389/*"change"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_17389/*"change"*/,
                                                                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__54_0;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  if ( v6 )
  {
    v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__54_0,
      v13,
      Method_BattleDeckServantData___c__getChangeList_b__54_0__,
      (const MethodInfo_23DE474 *)Method_System_Converter_object__int___ctor__);
    v14 = BattleDeckServantData___c_TypeInfo->static_fields;
    v14->__9__54_0 = (struct System_Converter_object__int__o *)_9__54_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( v6 )
      goto LABEL_22;
LABEL_24:
    sub_B52A5C(Item, v4);
  }
  if ( !v6 )
    goto LABEL_24;
  v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B52D50(v6);
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v6,
                                                                             (System_Converter_T__TOutput__o *)_9__54_0,
                                                                             (const MethodInfo_191393C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_42AECAA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21324/*"npInfoEnable"*/);
    byte_42AECAA = 1;
  }
  v4 = (System_String_o *)StringLiteral_21324/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21324/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC91 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18502/*"enemyNameEffect"*/);
    byte_42AEC91 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18502/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC8F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22978/*"treasureDeviceVoiceId"*/);
    byte_42AEC8F = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22978/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC87 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19323/*"hpBarType"*/);
    byte_42AEC87 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19323/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_42AECA6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&StringLiteral_18945/*"forceDropItem"*/);
    byte_42AECA6 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"forceDropItem"*/,
                            (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC97 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18039/*"deadChangePos"*/);
    byte_42AEC97 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18039/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_42AECAB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21323/*"npCharge"*/);
    byte_42AECAB = 1;
  }
  v4 = (System_String_o *)StringLiteral_21323/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21323/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC8D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22662/*"svtVoiceId"*/);
    byte_42AEC8D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22662/*"svtVoiceId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantChangeEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  ServantChangeEntity_o *v9; // x20
  const MethodInfo *v10; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AECAE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_22668/*"svt_voice_id"*/);
    byte_42AECAE = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  v7 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v7
    && (v9 = v7, ServantChangeEntity__IsEnable(v7, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_22668/*"svt_voice_id"*/,
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

  if ( (byte_42AEC84 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21854/*"raid"*/);
    byte_42AEC84 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21854/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC8C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22079/*"scale"*/);
    byte_42AEC8C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22079/*"scale"*/, 100, v2);
}


int32_t __fastcall BattleDeckServantData__getScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42AEC9D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42AEC9D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (BattleDeckServantData_o *)sub_B52D50(Item);
  return BattleDeckServantData__ExistKillType(v11, v12);
}


int32_t __fastcall BattleDeckServantData__getScriptInt(
        BattleDeckServantData_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  __int64 v8; // x1
  BattleDeckServantData_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AEC9F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&long_TypeInfo);
    byte_42AEC9F = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B52A5C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (BattleDeckServantData_o *)sub_B52D50(value);
  return BattleDeckServantData__getUniqueID(v10, v11);
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
  System_String_o *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42AEC9E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&string_TypeInfo);
    byte_42AEC9E = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.enemyScript;
  if ( !v9 )
    sub_B52A5C(0LL, v8);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)key,
                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v12 = (BattleDeckServantData_o *)sub_B52D50(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v12, v13);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22148/*"sendDamageForSuperBossId"*/);
    byte_42AEC8A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22148/*"sendDamageForSuperBossId"*/, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__53_0; // x20
  __int64 v10; // x11
  __int64 v11; // x9
  Il2CppObject *v13; // x21
  struct BattleDeckServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42AECA3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__int___ctor__);
    sub_B52984(&System_Converter_object__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__);
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    sub_B52984(&StringLiteral_22283/*"shiftClear"*/);
    byte_42AECA3 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22283/*"shiftClear"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22283/*"shiftClear"*/,
                                                                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__53_0;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  if ( v6 )
  {
    v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__53_0,
      v13,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__53_0__,
      (const MethodInfo_23DE474 *)Method_System_Converter_object__int___ctor__);
    v14 = BattleDeckServantData___c_TypeInfo->static_fields;
    v14->__9__53_0 = (struct System_Converter_object__int__o *)_9__53_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( v6 )
      goto LABEL_22;
LABEL_24:
    sub_B52A5C(Item, v4);
  }
  if ( !v6 )
    goto LABEL_24;
  v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B52D50(v6);
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v6,
                                                                             (System_Converter_T__TOutput__o *)_9__53_0,
                                                                             (const MethodInfo_191393C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v6; // x19
  BattleDeckServantData___c_c *v7; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__51_0; // x20
  __int64 v10; // x11
  __int64 v11; // x9
  Il2CppObject *v13; // x21
  struct BattleDeckServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42AECA1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__int___ctor__);
    sub_B52984(&System_Converter_object__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&Method_BattleDeckServantData___c__getShiftList_b__51_0__);
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    sub_B52984(&StringLiteral_22281/*"shift"*/);
    byte_42AECA1 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22281/*"shift"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22281/*"shift"*/,
                                                                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v7 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v7 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__51_0;
  v4 = System_Collections_Generic_List_object__TypeInfo;
  if ( v6 )
  {
    v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__51_0,
      v13,
      Method_BattleDeckServantData___c__getShiftList_b__51_0__,
      (const MethodInfo_23DE474 *)Method_System_Converter_object__int___ctor__);
    v14 = BattleDeckServantData___c_TypeInfo->static_fields;
    v14->__9__51_0 = (struct System_Converter_object__int__o *)_9__51_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( v6 )
      goto LABEL_22;
LABEL_24:
    sub_B52A5C(Item, v4);
  }
  if ( !v6 )
    goto LABEL_24;
  v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (System_Collections_Generic_List_object__c *)v6->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B52D50(v6);
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v6,
                                                                             (System_Converter_T__TOutput__o *)_9__51_0,
                                                                             (const MethodInfo_191393C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleDeckServantData__getSummonNpcId(
        BattleDeckServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *Item; // x0
  BattleDeckServantData___c_c *v8; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__50_0; // x21
  __int64 v11; // x11
  __int64 v12; // x9
  Il2CppObject *v14; // x22
  struct BattleDeckServantData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t v22; // w8
  __int64 v23; // x0

  if ( (byte_42AECA0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__int___ctor__);
    sub_B52984(&System_Converter_object__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__);
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    sub_B52984(&StringLiteral_17293/*"call"*/);
    byte_42AECA0 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17293/*"call"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  Item = this->fields.enemyScript;
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
           (System_Type_o *)StringLiteral_17293/*"call"*/,
           (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  this = (BattleDeckServantData_o *)Item;
  v8 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v8 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__50_0;
  v6 = System_Collections_Generic_List_object__TypeInfo;
  if ( this )
  {
    v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_17;
    }
  }
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__50_0,
      v14,
      Method_BattleDeckServantData___c__getSummonNpcId_b__50_0__,
      (const MethodInfo_23DE474 *)Method_System_Converter_object__int___ctor__);
    v15 = BattleDeckServantData___c_TypeInfo->static_fields;
    v15->__9__50_0 = (struct System_Converter_object__int__o *)_9__50_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( this )
      goto LABEL_23;
LABEL_30:
    sub_B52A5C(Item, v6);
  }
  if ( !this )
    goto LABEL_30;
  v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_17:
    sub_B52D50(this);
    return this->fields.npcId;
  }
LABEL_23:
  Item = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
           (System_Collections_Generic_List_BattleActionData_HealData__o *)this,
           (System_Converter_T__TOutput__o *)_9__50_0,
           (const MethodInfo_191393C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item )
    goto LABEL_30;
  v22 = *((_DWORD *)Item + 6);
  if ( v22 <= index )
    return -1;
  if ( v22 <= (unsigned int)index )
  {
    v23 = sub_B52A88(Item);
    sub_B52A28(v23, 0LL);
  }
  return *((_DWORD *)Item + index + 8);
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC86 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22636/*"superBoss"*/);
    byte_42AEC86 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22636/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_42AECA8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22976/*"treasureDeviceName"*/);
    byte_42AECA8 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22976/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22976/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_42AECA9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22977/*"treasureDeviceRuby"*/);
    byte_42AECA9 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22977/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22977/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_42AEC8E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20071/*"isAddition"*/);
    byte_42AEC8E = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_20071/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC81 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16488/*"appear"*/);
    byte_42AEC81 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16488/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC7A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20287/*"kill"*/);
    byte_42AEC7A = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20287/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AECB3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20085/*"isHideShadow"*/);
    byte_42AECB3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20085/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_42AEC9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42AEC9C = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)infoScript,
                           (System_Xml_XmlQualifiedName_o *)key,
                           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC8B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20355/*"leader"*/);
    byte_42AEC8B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20355/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC96 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22470/*"startPos"*/);
    byte_42AEC96 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22470/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC93 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21159/*"multiTargetCore"*/);
    byte_42AEC93 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21159/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC95 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21160/*"multiTargetUnder"*/);
    byte_42AEC95 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21160/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42AEC94 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21161/*"multiTargetUp"*/);
    byte_42AEC94 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21161/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AEC83 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21854/*"raid"*/);
    byte_42AEC83 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21854/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_42AEC9B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_42AEC9B = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)key,
                            (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AEC89 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22148/*"sendDamageForSuperBossId"*/);
    byte_42AEC89 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22148/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AEC85 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22636/*"superBoss"*/);
    byte_42AEC85 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22636/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42AEC88 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22638/*"superBossUi"*/);
    byte_42AEC88 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22638/*"superBossUi"*/, v2);
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
  System_Xml_XmlQualifiedName_o *v10; // x21
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x11
  System_Collections_Generic_Dictionary_string__object__o *v21; // x9
  System_Int32_array **v23; // x1
  __int64 v24; // x10

  if ( (byte_42AECAC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&StringLiteral_22664/*"svt_change"*/);
    byte_42AECAC = 1;
  }
  v10 = (System_Xml_XmlQualifiedName_o *)StringLiteral_22664/*"svt_change"*/;
  *dict = 0LL;
  sub_B52920((BattleServantConfConponent_o *)dict, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          v10,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_B52A5C(enemyScript, v11);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)enemyScript,
           (System_Type_o *)v10,
           (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v20 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v21 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    *dict = v21;
    v24 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v24 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v23 = (System_Int32_array **)Item;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
  }
  else
  {
    v23 = 0LL;
    *dict = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)dict, v23, v14, v15, v16, v17, v18, v19);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Item; // x0
  __int64 v11; // x10
  System_Collections_Generic_List_object__c *v12; // x9
  Il2CppObject *current; // x21
  __int64 v14; // x9
  UnityEngine_Purchasing_IStoreExtension_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v17; // x0
  __int64 v18; // x1
  void *v19; // x0
  int v20; // w1
  __int64 v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42AECAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    sub_B52984(&StringLiteral_21707/*"priority"*/);
    sub_B52984(&StringLiteral_23304/*"value"*/);
    byte_42AECAD = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                                                                                          (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    goto LABEL_12;
  v12 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v11 - 1];
  if ( v12 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v12 != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_12;
  if ( !Item )
LABEL_28:
    sub_B52A5C(Item, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    Item,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
      goto LABEL_26;
    current = v24.fields.current;
    if ( v24.fields.current )
    {
      v14 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (System_Collections_Generic_Dictionary_string__object__c *)v24.fields.current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v15 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B52D50(v24.fields.current);
LABEL_30:
        v15 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B52D50(v15);
LABEL_31:
        sub_B52A5C(v15, v16);
      }
      v15 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v24.fields.current,
              (System_Type_o *)StringLiteral_21707/*"priority"*/,
              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v15 )
        goto LABEL_31;
      if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_30;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v15) == priority )
        break;
    }
  }
  v17 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)current,
          (System_Type_o *)StringLiteral_23304/*"value"*/,
          (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v17 )
    sub_B52A5C(0LL, v18);
  if ( v17->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v17);
LABEL_26:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    goto LABEL_27;
  }
  v19 = (void *)sub_B52D50(v17);
  if ( v20 != 1 )
    _Unwind_Resume(v19);
  v21 = *(_QWORD *)__cxa_begin_catch(v19);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v21 )
    sub_B52A28(v21, 0LL);
LABEL_27:
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF12B & 1) == 0 )
  {
    sub_B52984(&BattleDeckServantData___c_TypeInfo);
    byte_42AF12B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDeckServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AF12F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF12F = 1;
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

  if ( (byte_42AF12E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF12E = 1;
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

  if ( (byte_42AF12D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF12D = 1;
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

  if ( (byte_42AF12C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF12C = 1;
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