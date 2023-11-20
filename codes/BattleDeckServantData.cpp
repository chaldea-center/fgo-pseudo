void __fastcall BattleDeckServantData___ctor(BattleDeckServantData_o *this, const MethodInfo *method)
{
  DeckServantData___ctor((DeckServantData_o *)this, 0LL);
}


bool __fastcall BattleDeckServantData__ExistKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C71 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C71 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_20052, v2);
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

  if ( (byte_40F8C89 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16233, *(_QWORD *)&defTiming);
    byte_40F8C89 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16233, defTiming, v3);
}


System_Int32_array *__fastcall BattleDeckServantData__GetAssumedEffectId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8CA7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437, method);
    byte_40F8CA7 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_16437,
           0LL);
}


int32_t __fastcall BattleDeckServantData__GetDefShiftPosition(
        BattleDeckServantData_o *this,
        int64_t defVal,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_40F8C92 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long___, defVal);
    sub_B16FFC(&StringLiteral_22007, v5);
    byte_40F8C92 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.enemyScript,
           (System_String_o *)StringLiteral_22007,
           defVal,
           (const MethodInfo_18B7C18 *)Method_BasicHelper_GetValue_long___);
}


int32_t __fastcall BattleDeckServantData__GetDispBreakShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CAD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17960, method);
    byte_40F8CAD = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17960, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetDispLimitCnt(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CAF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17961, method);
    byte_40F8CAF = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_17961, -1, v2);
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

  if ( (byte_40F8CAE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19343, method);
    byte_40F8CAE = 1;
  }
  return BattleDeckServantData__getScriptInt(this, (System_String_o *)StringLiteral_19343, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetKillType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C70 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C70 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_20052, 0, v2);
}


int32_t __fastcall BattleDeckServantData__GetNoSkipDeadFirstId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CA6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9563, method);
    byte_40F8CA6 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_9563, 0, v2);
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
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x11
  System_Collections_Generic_List_object__c *v20; // x10
  System_Collections_Generic_List_string__o *v21; // x20
  BattleDeckServantData___c_c *v22; // x0
  struct BattleDeckServantData___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__74_0; // x19
  Il2CppObject *v25; // x21
  struct BattleDeckServantData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v33; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8CA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__string___ctor__, key);
    sub_B16FFC(&System_Converter_object__string__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__74_0__, v12);
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v13);
    byte_40F8CA8 = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
        {
          v20 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v19 - 1];
          v21 = v20 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_string__o *)value
              : 0LL;
          if ( v20 == System_Collections_Generic_List_object__TypeInfo )
          {
            v22 = BattleDeckServantData___c_TypeInfo;
            if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
              v22 = BattleDeckServantData___c_TypeInfo;
            }
            static_fields = v22->static_fields;
            _9__74_0 = (System_Converter_string__string__o *)static_fields->__9__74_0;
            if ( !_9__74_0 )
            {
              if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v22);
                static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
              }
              v25 = (Il2CppObject *)static_fields->__9;
              _9__74_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                                 System_Converter_object__string__TypeInfo,
                                                                 v15,
                                                                 v16,
                                                                 v17,
                                                                 v18);
              System_Converter_string__string____ctor(
                _9__74_0,
                v25,
                Method_BattleDeckServantData___c__GetScriptStringArrayParam_b__74_0__,
                (const MethodInfo_266B904 *)Method_System_Converter_object__string___ctor__);
              v26 = BattleDeckServantData___c_TypeInfo->static_fields;
              v26->__9__74_0 = (struct System_Converter_object__string__o *)_9__74_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v26->__9__74_0,
                (System_Int32_array **)_9__74_0,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
            }
            if ( !v21
              || (v33 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                                        v21,
                                                                                        (System_Converter_T__TOutput__o *)_9__74_0,
                                                                                        (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___)) == 0LL )
            {
              sub_B170D4();
            }
            return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            v33,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_40F8CA9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22690, defVal);
    byte_40F8CA9 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22690, defVal, v3);
}


System_String_array *__fastcall BattleDeckServantData__GetTDErrorVoiceSeArray(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CAA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22691, method);
    byte_40F8CAA = 1;
  }
  return BattleDeckServantData__GetScriptStringArrayParam(this, (System_String_o *)StringLiteral_22691, 0LL, v2);
}


bool __fastcall BattleDeckServantData__IsChangeDropItemByShift(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C95 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19872, method);
    byte_40F8C95 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19872, v2);
}


bool __fastcall BattleDeckServantData__IsDeadEnergy(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C6F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C6F = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20052, 5, v2);
}


bool __fastcall BattleDeckServantData__IsHideClassSkillNpcFollower(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8CAC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19068, method);
    byte_40F8CAC = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19068, v2);
}


bool __fastcall BattleDeckServantData__IsLateUpdatePopup(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8CAB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19855, method);
    byte_40F8CAB = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19855, v2);
}


bool __fastcall BattleDeckServantData__IsLeaveEventJoin(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8C9F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8C9F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    this->fields.userSvtId,
    (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return entity && UserServantEntity__IsWithdrawal(entity, 0LL);
}


bool __fastcall BattleDeckServantData__IsNoAutoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CA5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9556, method);
    byte_40F8CA5 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9556, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoSkipDead(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CA4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9562, method);
    byte_40F8CA4 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_9562, 1, v2);
}


bool __fastcall BattleDeckServantData__IsNoVoice(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C73 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21016, method);
    byte_40F8C73 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_21016, 1, v2);
}


bool __fastcall BattleDeckServantData__IsShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8CB0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19871, method);
    byte_40F8CB0 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_19871, v2);
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

  if ( (byte_40F8CA1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18641, fieldMotionIds);
    byte_40F8CA1 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.enemyScript, (System_String_o *)StringLiteral_18641, 0LL, 0LL);
  *fieldMotionIds = IntArray;
  sub_B16F98((BattleServantConfConponent_o *)fieldMotionIds, (System_Int32_array **)IntArray, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntArray, 0LL);
}


bool __fastcall BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
        BattleDeckServantData_o *this,
        int32_t *uniqueCameraId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_40F8CA2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16556, uniqueCameraId);
    byte_40F8CA2 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_16556, 0, 0LL);
  *uniqueCameraId = IntValue;
  return IntValue > 0;
}


bool __fastcall BattleDeckServantData__TryGetOverwriteFov(
        BattleDeckServantData_o *this,
        float *fov,
        const MethodInfo *method)
{
  float FloatValue; // s0

  if ( (byte_40F8CA0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18783, fov);
    byte_40F8CA0 = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(
                 this->fields.enemyScript,
                 (System_String_o *)StringLiteral_18783,
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

  if ( (byte_40F8C97 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18310, *(_QWORD *)&entryIndex);
    byte_40F8C97 = 1;
  }
  return !BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_18310, method)
      || BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_18310, entryIndex + 1, v5);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BattleDeckServantData_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40F8C8A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F8C8A = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.enemyScript;
      if ( !v10
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                     (System_Type_o *)key,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LOBYTE(enemyScript) = *(_DWORD *)j_il2cpp_object_unbox_0(Item) == val;
      }
      else
      {
        v12 = (BattleDeckServantData_o *)sub_B173C8(Item);
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

  if ( (byte_40F8C83 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16650, method);
    byte_40F8C83 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_16650, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getChangeAttri(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C81 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17203, method);
    byte_40F8C81 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17203, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getChangeList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  BattleDeckServantData___c_c *v20; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__53_0; // x20
  System_Collections_Generic_List_object__c *v23; // x1
  __int64 v24; // x11
  __int64 v25; // x9
  Il2CppObject *v27; // x21
  struct BattleDeckServantData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0

  if ( (byte_40F8C94 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, method);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_BattleDeckServantData___c__getChangeList_b__53_0__, v11);
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_17202, v13);
    byte_40F8C94 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17202,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
  v15 = this->fields.enemyScript;
  if ( !v15 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)StringLiteral_17202,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v20 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v20 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__53_0;
  v23 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v23,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__53_0,
      v27,
      Method_BattleDeckServantData___c__getChangeList_b__53_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v28 = BattleDeckServantData___c_TypeInfo->static_fields;
    v28->__9__53_0 = (struct System_Converter_object__int__o *)_9__53_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( Item )
      goto LABEL_22;
LABEL_24:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_24;
  v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B173C8(Item);
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
LABEL_22:
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)Item,
                                                    (System_Converter_T__TOutput__o *)_9__53_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall BattleDeckServantData__getEnableNpInfo(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40F8C9A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21066, method);
    byte_40F8C9A = 1;
  }
  v4 = (System_String_o *)StringLiteral_21066;
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21066, v2)
      && BattleDeckServantData__checkScript(this, v4, 1, v5);
}


int32_t __fastcall BattleDeckServantData__getEnemyNameEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C82 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18299, method);
    byte_40F8C82 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_18299, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getEnemyTreasureDeviceVoiceId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C80 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22695, method);
    byte_40F8C80 = 1;
  }
  return BattleDeckServantData__getScriptStr(this, (System_String_o *)StringLiteral_22695, 0LL, v2);
}


int32_t __fastcall BattleDeckServantData__getHpBarType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C78 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19104, method);
    byte_40F8C78 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_19104, 0, v2);
}


bool __fastcall BattleDeckServantData__getIsForceDropItem(BattleDeckServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_40F8C96 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_18732, v3);
    byte_40F8C96 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)StringLiteral_18732,
                            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


int32_t __fastcall BattleDeckServantData__getMultiTargetBattleDeadChangePos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C88 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17846, method);
    byte_40F8C88 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_17846, -1, v2);
}


int32_t __fastcall BattleDeckServantData__getNpCharge(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40F8C9B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21065, method);
    byte_40F8C9B = 1;
  }
  v4 = (System_String_o *)StringLiteral_21065;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21065, v2) )
    return BattleDeckServantData__getScript(this, v4, -1, v5);
  else
    return -1;
}


int32_t __fastcall BattleDeckServantData__getOverWriteSvtVoiceIdOld(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C7E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22379, method);
    byte_40F8C7E = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22379, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleDeckServantData__getOverwriteSvtVoiceId(
        BattleDeckServantData_o *this,
        int32_t battleSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantChangeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantChangeEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  ServantChangeEntity_o *v11; // x20
  const MethodInfo *v12; // x4
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8C9E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&battleSvtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_22385, v6);
    byte_40F8C9E = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantChangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = ServantChangeMaster__TrueNameEntity(MasterData_WarQuestSelectionMaster, battleSvtId, 0LL);
  if ( v9
    && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL))
    && BattleDeckServantData__tryGetSvtChangeInt(
         this,
         (System_String_o *)StringLiteral_22385,
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

  if ( (byte_40F8C75 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21582, method);
    byte_40F8C75 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21582, 0, v2);
}


int32_t __fastcall BattleDeckServantData__getRoleType(BattleDeckServantData_o *this, const MethodInfo *method)
{
  return this->fields.roleType;
}


int32_t __fastcall BattleDeckServantData__getScale(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C7D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21803, method);
    byte_40F8C7D = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21803, 100, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BattleDeckServantData_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F8C8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F8C8D = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v13 = (BattleDeckServantData_o *)sub_B173C8(Item);
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
  BattleDeckServantData_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8C8F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40F8C8F = 1;
  }
  value = 0LL;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B170D4();
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (BattleDeckServantData_o *)sub_B173C8(value);
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

  if ( (byte_40F8C8E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    byte_40F8C8E = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10 )
    sub_B170D4();
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                              (System_Type_o *)key,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v13 = (BattleDeckServantData_o *)sub_B173C8(Item);
  return (System_String_o *)BattleDeckServantData__getChangeAttri(v13, v14);
}


int32_t __fastcall BattleDeckServantData__getSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C7B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21871, method);
    byte_40F8C7B = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_21871, 0, v2);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftClearBuffIndiv(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  BattleDeckServantData___c_c *v20; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__52_0; // x20
  System_Collections_Generic_List_object__c *v23; // x1
  __int64 v24; // x11
  __int64 v25; // x9
  Il2CppObject *v27; // x21
  struct BattleDeckServantData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0

  if ( (byte_40F8C93 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, method);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__52_0__, v11);
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_22006, v13);
    byte_40F8C93 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22006,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
  v15 = this->fields.enemyScript;
  if ( !v15 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)StringLiteral_22006,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v20 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v20 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__52_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__52_0;
  v23 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v23,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__52_0,
      v27,
      Method_BattleDeckServantData___c__getShiftClearBuffIndiv_b__52_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v28 = BattleDeckServantData___c_TypeInfo->static_fields;
    v28->__9__52_0 = (struct System_Converter_object__int__o *)_9__52_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( Item )
      goto LABEL_22;
LABEL_24:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_24;
  v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B173C8(Item);
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
LABEL_22:
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)Item,
                                                    (System_Converter_T__TOutput__o *)_9__52_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleDeckServantData__getShiftList(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  BattleDeckServantData___c_c *v20; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__50_0; // x20
  System_Collections_Generic_List_object__c *v23; // x1
  __int64 v24; // x11
  __int64 v25; // x9
  Il2CppObject *v27; // x21
  struct BattleDeckServantData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0

  if ( (byte_40F8C91 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, method);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_BattleDeckServantData___c__getShiftList_b__50_0__, v11);
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_22004, v13);
    byte_40F8C91 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22004,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
  v15 = this->fields.enemyScript;
  if ( !v15 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)StringLiteral_22004,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v20 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v20 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__50_0;
  v23 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v23,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__50_0,
      v27,
      Method_BattleDeckServantData___c__getShiftList_b__50_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v28 = BattleDeckServantData___c_TypeInfo->static_fields;
    v28->__9__50_0 = (struct System_Converter_object__int__o *)_9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( Item )
      goto LABEL_22;
LABEL_24:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_24;
  v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B173C8(Item);
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
LABEL_22:
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)Item,
                                                    (System_Converter_T__TOutput__o *)_9__50_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleDeckServantData___c_c *v19; // x8
  struct BattleDeckServantData___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__49_0; // x21
  System_Collections_Generic_List_object__c *v22; // x1
  __int64 v23; // x11
  __int64 v24; // x9
  Il2CppObject *v26; // x22
  struct BattleDeckServantData___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_int__o *v34; // x0
  System_Int32_array *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t max_length; // w8

  if ( (byte_40F8C90 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, *(_QWORD *)&index);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_BattleDeckServantData___c__getSummonNpcId_b__49_0__, v11);
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_17108, v13);
    byte_40F8C90 = 1;
  }
  if ( index == -1 )
    return this->fields.npcId;
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17108,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return -1;
  }
  v15 = this->fields.enemyScript;
  if ( !v15 )
    goto LABEL_30;
  this = (BattleDeckServantData_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
                                      (System_Type_o *)StringLiteral_17108,
                                      (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = BattleDeckServantData___c_TypeInfo;
  if ( (BYTE3(BattleDeckServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDeckServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDeckServantData___c_TypeInfo);
    v19 = BattleDeckServantData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__49_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__49_0;
  v22 = System_Collections_Generic_List_object__TypeInfo;
  if ( this )
  {
    v23 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_17;
    }
  }
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v22,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__49_0,
      v26,
      Method_BattleDeckServantData___c__getSummonNpcId_b__49_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v27 = BattleDeckServantData___c_TypeInfo->static_fields;
    v27->__9__49_0 = (struct System_Converter_object__int__o *)_9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( this )
      goto LABEL_23;
LABEL_30:
    sub_B170D4();
  }
  if ( !this )
    goto LABEL_30;
  v24 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v24
    || (System_Collections_Generic_List_object__c *)this->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_17:
    sub_B173C8(this);
    return this->fields.npcId;
  }
LABEL_23:
  v34 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)this,
                                                    (System_Converter_T__TOutput__o *)_9__49_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v34 )
    goto LABEL_30;
  v35 = System_Collections_Generic_List_int___ToArray(
          v34,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v35 )
    goto LABEL_30;
  max_length = v35->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(v35, v36, v37);
    sub_B170A0();
  }
  return v35->m_Items[index + 1];
}


int32_t __fastcall BattleDeckServantData__getSuperBossId(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C77 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22355, method);
    byte_40F8C77 = 1;
  }
  return BattleDeckServantData__getScript(this, (System_String_o *)StringLiteral_22355, 0, v2);
}


System_String_o *__fastcall BattleDeckServantData__getTDName(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40F8C98 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22693, method);
    byte_40F8C98 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22693;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22693, v2) )
    return BattleDeckServantData__getScriptStr(this, v4, 0LL, v5);
  else
    return 0LL;
}


System_String_o *__fastcall BattleDeckServantData__getTDRuby(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40F8C99 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22694, method);
    byte_40F8C99 = 1;
  }
  v4 = (System_String_o *)StringLiteral_22694;
  if ( BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22694, v2) )
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

  if ( (byte_40F8C7F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19841, method);
    byte_40F8C7F = 1;
  }
  return BattleDeckServantData__isInfoScript(this, (System_String_o *)StringLiteral_19841, v2);
}


bool __fastcall BattleDeckServantData__isAppear(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C72 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16312, method);
    byte_40F8C72 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_16312, 1, v2);
}


bool __fastcall BattleDeckServantData__isDeadEffect(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C6D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C6D = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20052, 3, v2);
}


bool __fastcall BattleDeckServantData__isDeadStand(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C6C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C6C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20052, 2, v2);
}


bool __fastcall BattleDeckServantData__isDeadWait(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C6E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C6E = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20052, 4, v2);
}


bool __fastcall BattleDeckServantData__isEscape(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C6B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20052, method);
    byte_40F8C6B = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20052, 1, v2);
}


bool __fastcall BattleDeckServantData__isHideShadow(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8CA3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19853, method);
    byte_40F8CA3 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_19853, 1, v2);
}


bool __fastcall BattleDeckServantData__isInfoScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *infoScript; // x0

  if ( (byte_40F8C8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40F8C8C = 1;
  }
  infoScript = this->fields.infoScript;
  if ( infoScript )
    LOBYTE(infoScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)infoScript,
                           (System_Xml_XmlQualifiedName_o *)key,
                           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)infoScript;
}


bool __fastcall BattleDeckServantData__isLeader(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C7C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20119, method);
    byte_40F8C7C = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20119, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetBattleStartPos(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C87 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22190, method);
    byte_40F8C87 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_22190, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetCore(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C84 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20902, method);
    byte_40F8C84 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20902, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUnder(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C86 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20903, method);
    byte_40F8C86 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20903, 1, v2);
}


bool __fastcall BattleDeckServantData__isMultiTargetUp(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F8C85 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20904, method);
    byte_40F8C85 = 1;
  }
  return BattleDeckServantData__checkScript(this, (System_String_o *)StringLiteral_20904, 1, v2);
}


bool __fastcall BattleDeckServantData__isRaid(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C74 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21582, method);
    byte_40F8C74 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21582, v2);
}


bool __fastcall BattleDeckServantData__isScript(
        BattleDeckServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0

  if ( (byte_40F8C8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40F8C8B = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( enemyScript )
    LOBYTE(enemyScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
                            (System_Xml_XmlQualifiedName_o *)key,
                            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)enemyScript;
}


bool __fastcall BattleDeckServantData__isSendDamageForSuperBossId(
        BattleDeckServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C7A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21871, method);
    byte_40F8C7A = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_21871, v2);
}


bool __fastcall BattleDeckServantData__isSuperBoss(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C76 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22355, method);
    byte_40F8C76 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22355, v2);
}


bool __fastcall BattleDeckServantData__isSuperBossUi(BattleDeckServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8C79 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22357, method);
    byte_40F8C79 = 1;
  }
  return BattleDeckServantData__isScript(this, (System_String_o *)StringLiteral_22357, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
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

  if ( (byte_40F8C9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, dict);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_22381, v12);
    byte_40F8C9C = 1;
  }
  v13 = (System_Xml_XmlQualifiedName_o *)StringLiteral_22381;
  *dict = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)dict, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          v13,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v15 = this->fields.enemyScript;
  if ( !v15 )
LABEL_20:
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)v13,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_B16F98((BattleServantConfConponent_o *)dict, v26, v17, v18, v19, v20, v21, v22);
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
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
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

  if ( (byte_40F8C9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v13);
    sub_B16FFC(&long_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v15);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B16FFC(&StringLiteral_21438, v17);
    sub_B16FFC(&StringLiteral_23020, v18);
    byte_40F8C9D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  dict = 0LL;
  *value = -1;
  if ( !BattleDeckServantData__tryGetSvtChange(this, &dict, *(const MethodInfo **)&priority) )
    goto LABEL_12;
  if ( !dict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dict,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_12:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  if ( !dict )
    goto LABEL_28;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dict,
           (System_Type_o *)key,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
      goto LABEL_26;
    current = v31.fields.current;
    if ( v31.fields.current )
    {
      v23 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (System_Collections_Generic_Dictionary_string__object__c *)v31.fields.current->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v24 = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B173C8(v31.fields.current);
LABEL_30:
        sub_B173C8(v24);
LABEL_31:
        sub_B170D4();
      }
      v24 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v31.fields.current,
              (System_Type_o *)StringLiteral_21438,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (System_Type_o *)StringLiteral_23020,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v25 )
    sub_B170D4();
  if ( v25->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *value = *(_QWORD *)j_il2cpp_object_unbox_0(v25);
LABEL_26:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    goto LABEL_27;
  }
  v26 = (void *)sub_B173C8(v25);
  if ( v27 != 1 )
    _Unwind_Resume(v26);
  v28 = *(_QWORD *)__cxa_begin_catch(v26);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v28 )
    sub_B170A0();
LABEL_27:
  LOBYTE(Item) = *value != -1;
  return (char)Item;
}


void __fastcall BattleDeckServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleDeckServantData___c_StaticFields *static_fields; // x0

  if ( (byte_40F8500 & 1) == 0 )
  {
    sub_B16FFC(&BattleDeckServantData___c_TypeInfo, v1);
    byte_40F8500 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleDeckServantData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleDeckServantData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleDeckServantData___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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

  if ( (byte_40F8504 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F8504 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getShiftClearBuffIndiv_b__52_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_40F8503 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F8503 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getShiftList_b__50_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_40F8502 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F8502 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}


int32_t __fastcall BattleDeckServantData___c___getSummonNpcId_b__49_0(
        BattleDeckServantData___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_40F8501 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F8501 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}