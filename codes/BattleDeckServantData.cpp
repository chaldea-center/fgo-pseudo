void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186842 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_4186842 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, v2);
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

  if ( (byte_418685A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16298/*"aiResetTiming"*/, *(_QWORD *)&defTiming);
    byte_418685A = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16298/*"aiResetTiming"*/, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186878 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16501/*"assumedEffectId"*/, method);
    byte_4186878 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16501/*"assumedEffectId"*/,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4186863 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_long___, defVal);
    sub_B2C35C(&StringLiteral_22099/*"shiftPosition"*/, v5);
    byte_4186863 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_22099/*"shiftPosition"*/,
           defVal,
           (const MethodInfo_17282FC *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418687E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18028/*"dispBreakShift"*/, method);
    byte_418687E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18028/*"dispBreakShift"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186880 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18029/*"dispLimitCount"*/, method);
    byte_4186880 = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_18029/*"dispLimitCount"*/, -1, v2);
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

  if ( (byte_418687F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19417/*"imageSvtId"*/, method);
    byte_418687F = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19417/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186841 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_4186841 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186877 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9593/*"NoSkipDeadFirstId"*/, method);
    byte_4186877 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9593/*"NoSkipDeadFirstId"*/, 0, v2);
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
  __int64 v16; // x11
  System_Collections_Generic_List_object__c *v17; // x10
  System_Collections_Generic_List_string__o *v18; // x20
  void *v19; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__74_0; // x19
  Il2CppObject *v22; // x21
  struct BattleDeckServantData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186879 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__string___ctor__, key);
    sub_B2C35C(&System_Converter_object__string__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__74_0__, v12);
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v13);
    byte_4186879 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
        {
          v17 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v16 - 1];
          v18 = v17 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_string__o *)value
              : 0LL;
          if ( v17 == System_Collections_Generic_List_object__TypeInfo )
          {
            v19 = BattleDeckServantData___c_TypeInfo;
            if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v19 = BattleDeckServantData___c_TypeInfo;
            }
            static_fields = (struct BattleDeckServantData___c_StaticFields *)*((_QWORD *)v19 + 23);
            _9__74_0 = (System_Converter_string__string__o *)static_fields->__9__74_0;
            if ( !_9__74_0 )
            {
              if ( (*((_BYTE *)v19 + 307) & 4) != 0 && !*((_DWORD *)v19 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v19);
                static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              }
              v22 = (Il2CppObject *)static_fields->__9;
              _9__74_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_object__string__TypeInfo);
              System_Converter_string__string____ctor(
                _9__74_0,
                v22,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__74_0__,
                (const MethodInfo_24E064C *)Method_System_Converter_object__string___ctor__);
              v23 = BattleDeckServantData___c_TypeInfo->static_fields;
              v23->__9__74_0 = (struct System_Converter_object__string__o *)_9__74_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v23->__9__74_0,
                (System_Int32_array **)_9__74_0,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
            }
            if ( !v18
              || (v19 = System_Collections_Generic_List_string___ConvertAll_string_(
                          v18,
                          (System_Converter_T__TOutput__o *)_9__74_0,
                          (const MethodInfo_18F3D34 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_B2C434(v19, v15);
            }
            return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_418687A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22783/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal);
    byte_418687A = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22783/*"treasureDeviceErrorCardSelectVoiceSe"*/, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418687B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22784/*"treasureDeviceErrorStatusVoiceSeList"*/, method);
    byte_418687B = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_22784/*"treasureDeviceErrorStatusVoiceSeList"*/, 0LL, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186866 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19954/*"isSkillShiftInfo"*/, method);
    byte_4186866 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19954/*"isSkillShiftInfo"*/, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186840 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_4186840 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 5, v2);
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418687D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19141/*"hideClassSkill"*/, method);
    byte_418687D = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19141/*"hideClassSkill"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418687C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19937/*"isLateUpdatePopup"*/, method);
    byte_418687C = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19937/*"isLateUpdatePopup"*/, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186870 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186870 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal(entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186876 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9586/*"NoAutoSkipDead"*/, method);
    byte_4186876 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9586/*"NoAutoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186875 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9592/*"NoSkipDead"*/, method);
    byte_4186875 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9592/*"NoSkipDead"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186844 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21104/*"noVoice"*/, method);
    byte_4186844 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21104/*"noVoice"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186881 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19953/*"isShadow"*/, method);
    byte_4186881 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19953/*"isShadow"*/, v2);
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

  if ( (byte_4186872 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18713/*"fieldMotionIds"*/, fieldMotionIds);
    byte_4186872 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_18713/*"fieldMotionIds"*/, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_B2C2F8((BattleServantConfConponent_o *)fieldMotionIds, (System_Int32_array **)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4186873 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16620/*"baseUniqueCameraId"*/, uniqueCameraId);
    byte_4186873 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_16620/*"baseUniqueCameraId"*/, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_4186871 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18855/*"fov"*/, fov);
    byte_4186871 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_18855/*"fov"*/,
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

  if ( (byte_4186868 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18379/*"entryIndex"*/, *(_QWORD *)&entryIndex);
    byte_4186868 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18379/*"entryIndex"*/, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18379/*"entryIndex"*/, entryIndex + 1, v5);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_418685B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418685B = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B2C434(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item) == val;
      }
      else
      {
        v12 = (BattleDeckServantData_o *)sub_B2C728(Item);
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

  if ( (byte_4186854 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16714/*"billBoardGroup"*/, method);
    byte_4186854 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16714/*"billBoardGroup"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186852 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17269/*"changeAttri"*/, method);
    byte_4186852 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17269/*"changeAttri"*/, 0, v2);
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
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__53_0; // x20
  __int64 v20; // x11
  __int64 v21; // x9
  Il2CppObject *v23; // x21
  struct BattleDeckServantData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4186865 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, method);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B2C35C(&Method_BattleDeckServantData___c__getChangeList_b__53_0__, v10);
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_17268/*"change"*/, v12);
    byte_4186865 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17268/*"change"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_17268/*"change"*/,
                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__53_0;
  v14 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__53_0,
      v23,
      Method_BattleDeckServantData___c__getChangeList_b__53_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v24 = BattleDeckServantData___c_TypeInfo->static_fields;
    v24->__9__53_0 = (struct System_Converter_object__int__o *)_9__53_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B2C434(Item, v14);
  }
  if ( !v16 )
    goto LABEL_24;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B2C728(v16);
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__53_0,
                                                                             (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_418686B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21154/*"npInfoEnable"*/, method);
    byte_418686B = 1;
  }
  v4 = (System_String_o *)StringLiteral_21154/*"npInfoEnable"*/;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21154/*"npInfoEnable"*/, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186853 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18368/*"enemyNameEffect"*/, method);
    byte_4186853 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18368/*"enemyNameEffect"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186851 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22788/*"treasureDeviceVoiceId"*/, method);
    byte_4186851 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22788/*"treasureDeviceVoiceId"*/, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186849 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19177/*"hpBarType"*/, method);
    byte_4186849 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19177/*"hpBarType"*/, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_4186867 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&StringLiteral_18804/*"forceDropItem"*/, v3);
    byte_4186867 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)StringLiteral_18804/*"forceDropItem"*/,
                            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186859 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17914/*"deadChangePos"*/, method);
    byte_4186859 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17914/*"deadChangePos"*/, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_418686C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21153/*"npCharge"*/, method);
    byte_418686C = 1;
  }
  v4 = (System_String_o *)StringLiteral_21153/*"npCharge"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21153/*"npCharge"*/, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418684F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22472/*"svtVoiceId"*/, method);
    byte_418684F = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22472/*"svtVoiceId"*/, 0, v2);
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
  __int64 v8; // x1
  ServantChangeEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  ServantChangeEntity_o *v11; // x20
  const MethodInfo *v12; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418686F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_22478/*"svt_voice_id"*/, v6);
    byte_418686F = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  v9 = ServantChangeMaster__TrueNameEntity((ServantChangeMaster_o *)Instance, battleSvtId, 0LL);
  if ( v9
    && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_22478/*"svt_voice_id"*/,
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

  if ( (byte_4186846 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21674/*"raid"*/, method);
    byte_4186846 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21674/*"raid"*/, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418684E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21895/*"scale"*/, method);
    byte_418684E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21895/*"scale"*/, 100, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_418685E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418685E = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v13 = (BattleDeckServantData_o *)sub_B2C728(Item);
  return BattleDeckServantData__ExistKillType(v13, v14);
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
  BattleDeckServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186860 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4186860 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B2C434(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v11 = (BattleDeckServantData_o *)sub_B2C728(value);
  return BattleDeckServantData__getUniqueID(v11, v12);
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
  System_String_o *Item; // x0
  BattleDeckServantData_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_418685F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_418685F = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.enemyScript;
  if ( !v11 )
    sub_B2C434(0LL, v10);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                              (System_Type_o *)key,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v14 = (BattleDeckServantData_o *)sub_B2C728(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v14, v15);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418684C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21963/*"sendDamageForSuperBossId"*/, method);
    byte_418684C = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21963/*"sendDamageForSuperBossId"*/, 0, v2);
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
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__52_0; // x20
  __int64 v20; // x11
  __int64 v21; // x9
  Il2CppObject *v23; // x21
  struct BattleDeckServantData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4186864 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, method);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B2C35C(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__52_0__, v10);
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_22098/*"shiftClear"*/, v12);
    byte_4186864 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22098/*"shiftClear"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22098/*"shiftClear"*/,
                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v14 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
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
    v23 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__52_0,
      v23,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__52_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v24 = BattleDeckServantData___c_TypeInfo->static_fields;
    v24->__9__52_0 = (struct System_Converter_object__int__o *)_9__52_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B2C434(Item, v14);
  }
  if ( !v16 )
    goto LABEL_24;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B2C728(v16);
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__52_0,
                                                                             (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__50_0; // x20
  __int64 v20; // x11
  __int64 v21; // x9
  Il2CppObject *v23; // x21
  struct BattleDeckServantData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4186862 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, method);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B2C35C(&Method_BattleDeckServantData___c__getShiftList_b__50_0__, v10);
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_22096/*"shift"*/, v12);
    byte_4186862 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22096/*"shift"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             (System_Type_o *)StringLiteral_22096/*"shift"*/,
                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__50_0;
  v14 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__50_0,
      v23,
      Method_BattleDeckServantData___c__getShiftList_b__50_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v24 = BattleDeckServantData___c_TypeInfo->static_fields;
    v24->__9__50_0 = (struct System_Converter_object__int__o *)_9__50_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( v16 )
      goto LABEL_22;
LABEL_24:
    sub_B2C434(Item, v14);
  }
  if ( !v16 )
    goto LABEL_24;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B2C728(v16);
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v16,
                                                                             (System_Converter_T__TOutput__o *)_9__50_0,
                                                                             (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_object__c *v15; // x1
  void *Item; // x0
  BattleDeckServantData___c_c *v17; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__49_0; // x21
  __int64 v20; // x11
  __int64 v21; // x9
  Il2CppObject *v23; // x22
  struct BattleDeckServantData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w8
  __int64 v32; // x0

  if ( (byte_4186861 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, *(_QWORD *)&index);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B2C35C(&Method_BattleDeckServantData___c__getSummonNpcId_b__49_0__, v11);
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_17174/*"call"*/, v13);
    byte_4186861 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17174/*"call"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  Item = this->fields.enemyScript;
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
           (System_Type_o *)StringLiteral_17174/*"call"*/,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  this = (BattleDeckServantData_o *)Item;
  v17 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v17 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__49_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__49_0;
  v15 = System_Collections_Generic_List_object__TypeInfo;
  if ( this )
  {
    v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_17;
    }
  }
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__49_0,
      v23,
      Method_BattleDeckServantData___c__getSummonNpcId_b__49_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v24 = BattleDeckServantData___c_TypeInfo->static_fields;
    v24->__9__49_0 = (struct System_Converter_object__int__o *)_9__49_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( this )
      goto LABEL_23;
LABEL_30:
    sub_B2C434(Item, v15);
  }
  if ( !this )
    goto LABEL_30;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_17:
    sub_B2C728(this);
    return this->fields.npcId;
  }
LABEL_23:
  Item = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
           (System_Collections_Generic_List_BattleActionData_HealData__o *)this,
           (System_Converter_T__TOutput__o *)_9__49_0,
           (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_30;
  Item = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Item )
    goto LABEL_30;
  v31 = *((_DWORD *)Item + 6);
  if ( v31 <= index )
    return -1;
  if ( v31 <= (unsigned int)index )
  {
    v32 = sub_B2C460(Item);
    sub_B2C400(v32, 0LL);
  }
  return *((_DWORD *)Item + index + 8);
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186848 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22447/*"superBoss"*/, method);
    byte_4186848 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22447/*"superBoss"*/, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4186869 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22786/*"treasureDeviceName"*/, method);
    byte_4186869 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22786/*"treasureDeviceName"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22786/*"treasureDeviceName"*/, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_418686A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22787/*"treasureDeviceRuby"*/, method);
    byte_418686A = 1;
  }
  v4 = (System_String_o *)StringLiteral_22787/*"treasureDeviceRuby"*/;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22787/*"treasureDeviceRuby"*/, v2) )
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

  if ( (byte_4186850 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19922/*"isAddition"*/, method);
    byte_4186850 = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_19922/*"isAddition"*/, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186843 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16376/*"appear"*/, method);
    byte_4186843 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16376/*"appear"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418683E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_418683E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418683D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_418683D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418683F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_418683F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418683C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20135/*"kill"*/, method);
    byte_418683C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20135/*"kill"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186874 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19935/*"isHideShadow"*/, method);
    byte_4186874 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19935/*"isHideShadow"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_418685D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_418685D = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)infoScript,
                           (System_Xml_XmlQualifiedName_o *)key,
                           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418684D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20202/*"leader"*/, method);
    byte_418684D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20202/*"leader"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186858 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22282/*"startPos"*/, method);
    byte_4186858 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22282/*"startPos"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186855 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20990/*"multiTargetCore"*/, method);
    byte_4186855 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20990/*"multiTargetCore"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186857 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20991/*"multiTargetUnder"*/, method);
    byte_4186857 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20991/*"multiTargetUnder"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186856 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20992/*"multiTargetUp"*/, method);
    byte_4186856 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20992/*"multiTargetUp"*/, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186845 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21674/*"raid"*/, method);
    byte_4186845 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21674/*"raid"*/, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_418685C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_418685C = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)key,
                            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418684B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21963/*"sendDamageForSuperBossId"*/, method);
    byte_418684B = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21963/*"sendDamageForSuperBossId"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186847 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22447/*"superBoss"*/, method);
    byte_4186847 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22447/*"superBoss"*/, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418684A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22449/*"superBossUi"*/, method);
    byte_418684A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22449/*"superBossUi"*/, v2);
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
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x11
  System_Collections_Generic_Dictionary_string__object__o *v24; // x9
  System_Int32_array **v26; // x1
  __int64 v27; // x10

  if ( (byte_418686D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_22474/*"svt_change"*/, v12);
    byte_418686D = 1;
  }
  v13 = (System_Xml_XmlQualifiedName_o *)StringLiteral_22474/*"svt_change"*/;
  *dict = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)dict, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          v13,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
LABEL_20:
    sub_B2C434(enemyScript, v14);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)enemyScript,
           (System_Type_o *)v13,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v23 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v23 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v24 = (System_Collections_Generic_Dictionary_string__object__o *)Item;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    *dict = v24;
    v27 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27 )
    {
      if ( (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        v26 = (System_Int32_array **)Item;
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
  sub_B2C2F8((BattleServantConfConponent_o *)dict, v26, v17, v18, v19, v20, v21, v22);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *Item; // x0
  __int64 v21; // x10
  System_Collections_Generic_List_object__c *v22; // x9
  Il2CppObject *current; // x21
  __int64 v24; // x9
  UnityEngine_Purchasing_IStoreExtension_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v27; // x0
  __int64 v28; // x1
  void *v29; // x0
  int v30; // w1
  __int64 v31; // x20
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_string__object__o *dict; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_418686E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_B2C35C(&long_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B2C35C(&StringLiteral_21530/*"priority"*/, v17);
    sub_B2C35C(&StringLiteral_23113/*"value"*/, v18);
    byte_418686E = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                                                                                          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21 )
    goto LABEL_12;
  v22 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v21 - 1];
  if ( v22 != System_Collections_Generic_List_object__TypeInfo )
    Item = 0LL;
  if ( v22 != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_12;
  if ( !Item )
LABEL_28:
    sub_B2C434(Item, v19);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    Item,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
      goto LABEL_26;
    current = v34.fields.current;
    if ( v34.fields.current )
    {
      v24 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (System_Collections_Generic_Dictionary_string__object__c *)v34.fields.current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v25 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B2C728(v34.fields.current);
LABEL_30:
        v25 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B2C728(v25);
LABEL_31:
        sub_B2C434(v25, v26);
      }
      v25 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34.fields.current,
              (System_Type_o *)StringLiteral_21530/*"priority"*/,
              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v25 )
        goto LABEL_31;
      if ( v25->klass->_1.element_class != long_TypeInfo->_1.element_class )
        goto LABEL_30;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v25) == priority )
        break;
    }
  }
  v27 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)current,
          (System_Type_o *)StringLiteral_23113/*"value"*/,
          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v27 )
    sub_B2C434(0LL, v28);
  if ( v27->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v27);
LABEL_26:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    goto LABEL_27;
  }
  v29 = (void *)sub_B2C728(v27);
  if ( v30 != 1 )
    _Unwind_Resume(v29);
  v31 = *(_QWORD *)__cxa_begin_catch(v29);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v31 )
    sub_B2C400(v31, 0LL);
LABEL_27:
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A62 & 1) == 0 )
  {
    sub_B2C35C(&BattleDeckServantData___c_TypeInfo, v1);
    byte_4186A62 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleDeckServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDeckServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleDeckServantData___c___ctor(BattleDeckServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleDeckServantData___c___GetScriptStringArrayParam_b__74_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall BattleDeckServantData___c___getChangeList_b__53_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4186A66 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4186A66 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftClearBuffIndiv_b__52_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4186A65 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4186A65 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getShiftList_b__50_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4186A64 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4186A64 = 1;
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


int32_t __fastcall BattleDeckServantData___c___getSummonNpcId_b__49_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4186A63 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4186A63 = 1;
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