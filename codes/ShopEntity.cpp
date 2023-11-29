void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FF87A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FF87A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v13; // x1
  int32_t TargetId; // w0
  WebViewManager_o *v15; // x0
  GiftMaster_o *v16; // x0
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v18; // x21
  WebViewManager_o *v19; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w8
  __int64 v23; // x21
  __int64 v24; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v25; // x0
  __int64 v26; // x20
  struct System_String_o *v27; // x21
  __int64 v28; // x21
  struct System_String_o *emptyMessage; // x22
  WarEntity_o *v31; // [xsp+8h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_40FF873 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, imageId);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FF873 = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  *imageId = this->fields.imageId;
  if ( this->fields.purchaseType != 6 )
    goto LABEL_25;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  TargetId = ShopEntity__get_TargetId(this, v13);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          TargetId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_25;
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_40;
  v16 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v15,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !v16 )
    goto LABEL_40;
  DataById = GiftMaster__getDataById(v16, entity->fields.priority, 0LL);
  if ( !DataById )
    return (char)DataById;
  v18 = DataById;
  if ( DataById->fields.type != 5 )
    goto LABEL_25;
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_40;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v19,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !v20 )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v20,
          &v31,
          v18->fields.objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
LABEL_25:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    if ( !v31 )
      goto LABEL_40;
    emptyMessage = v31->fields.emptyMessage;
    v28 = *(_QWORD *)&v31->fields.startType;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = emptyMessage;
    *(_QWORD *)&v34.fields.fakeValue = v28;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL) >= 1 )
    {
      if ( v31 )
      {
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v27 = v31->fields.emptyMessage;
        v26 = *(_QWORD *)&v31->fields.startType;
LABEL_34:
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v25);
        *(_QWORD *)&v35.fields.currentCryptoKey = v27;
        *(_QWORD *)&v35.fields.fakeValue = v26;
        *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
        goto LABEL_39;
      }
LABEL_40:
      sub_B170D4();
    }
  }
  else if ( genderType == 1 )
  {
    if ( !v31 )
      goto LABEL_40;
    v24 = *(_QWORD *)&v31->fields.parentWarId;
    v23 = *(_QWORD *)&v31->fields.flag;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v24;
    *(_QWORD *)&v33.fields.fakeValue = v23;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL) >= 1 )
    {
      if ( v31 )
      {
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v27 = *(struct System_String_o **)&v31->fields.parentWarId;
        v26 = *(_QWORD *)&v31->fields.flag;
        goto LABEL_34;
      }
      goto LABEL_40;
    }
  }
  *imageId = this->fields.imageId;
LABEL_39:
  LOBYTE(DataById) = 1;
  return (char)DataById;
}


int32_t __fastcall ShopEntity__CreatePrimaryKey(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ShopEntity__GetAddMessage(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF877 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_16191, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FF877 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16191,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1;
  }
  if ( !value )
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                              value,
                              value->klass->vtable._4_OnAdd.methodPtr);
}


System_Int32_array *__fastcall ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *result; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Xml_Schema_XmlSchemaObject_o *v15; // x19
  ShopEntity___c_c *v16; // x0
  System_Collections_Generic_List_object__c *v17; // x1
  __int64 v18; // x9
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__58_0; // x20
  __int64 v21; // x9
  Il2CppObject *v22; // x21
  struct ShopEntity___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF859 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, method);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B16FFC(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v8);
    sub_B16FFC(&ShopEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16289, v10);
    byte_40FF859 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16289,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v15 = value;
    if ( !value )
      return 0LL;
    v16 = ShopEntity___c_TypeInfo;
    if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
      v16 = ShopEntity___c_TypeInfo;
    }
    v17 = System_Collections_Generic_List_object__TypeInfo;
    v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_14:
      sub_B173C8(v15);
      return 0LL;
    }
    static_fields = v16->static_fields;
    _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__58_0;
    if ( _9__58_0 )
    {
      v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_14;
      }
    }
    else
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                         System_Converter_object__int__TypeInfo,
                                                                         v17,
                                                                         v12,
                                                                         v13,
                                                                         v14);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__58_0,
        v22,
        Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
        (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
      v23 = ShopEntity___c_TypeInfo->static_fields;
      v23->__9__58_0 = (struct System_Converter_object__int__o *)_9__58_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v23->__9__58_0,
        (System_Int32_array **)_9__58_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                      (System_Collections_Generic_List_BattleActionData_HealData__o *)v15,
                                                      (System_Converter_T__TOutput__o *)_9__58_0,
                                                      (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( !v30 )
      sub_B170D4();
    return System_Collections_Generic_List_int___ToArray(
             v30,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  ShopEntity_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF85A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&PayType_Type_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16292, v4);
    byte_40FF85A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16292,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B170D4();
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B173C8(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v6, v7);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall ShopEntity__GetCommonConsumeBuyableCount(ShopEntity_o *this, const MethodInfo *method)
{
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x8
  CommonConsumeEntity_array *v6; // x19
  __int64 v7; // x22
  int32_t v8; // w20
  CommonConsumeEntity_o *v9; // x21
  int v10; // w9

  if ( this->fields.payType != 14 )
    return 0;
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(this, method);
  if ( !CommonConsumeEntities )
    return 0;
  v5 = *(_QWORD *)&CommonConsumeEntities->max_length;
  v6 = CommonConsumeEntities;
  if ( (int)v5 < 1 )
    return 0;
  v7 = 0LL;
  v8 = 0;
  do
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
    {
      sub_B17100(CommonConsumeEntities, v3, v4);
      sub_B170A0();
    }
    v9 = v6->m_Items[v7];
    if ( !v9 )
      sub_B170D4();
    if ( v9->fields.num < 1 )
    {
      v10 = 0;
    }
    else
    {
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserHasNum(v6->m_Items[v7], 0LL);
      v5 = *(_QWORD *)&v6->max_length;
      v10 = (int)CommonConsumeEntities / v9->fields.num;
    }
    if ( v10 < v8 || (_DWORD)v7++ == 0 )
      v8 = v10;
  }
  while ( (int)v7 < (int)v5 );
  return v8;
}


CommonConsumeEntity_array *__fastcall ShopEntity__GetCommonConsumeEntities(
        ShopEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1
  int32_t ItemID; // w0

  if ( (byte_40FF879 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FF879 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v5);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_40FF85F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FF85F = 1;
  }
  setNum = this->fields.setNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetUnitInfo(setNum, 0LL);
}


int32_t __fastcall ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF840 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B16FFC(&StringLiteral_18815, v4);
    byte_40FF840 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18815,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v6, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int64_t __fastcall ShopEntity__GetFreeShopReleaseDate(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t result; // x0
  ShopEntity_o *v6; // x0
  int32_t *v7; // x1
  int32_t *v8; // x2
  const MethodInfo *v9; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF841 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&long_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_18818, v4);
    byte_40FF841 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18818,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B170D4();
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B173C8(value);
        ShopEntity__SetSvtIdAndCostumeId(v6, v7, v8, v9);
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEntity__GetInfo(
        ShopEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        bool isSend,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_o *name; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t purchaseType; // w9
  __int64 *v31; // x8
  int32_t v32; // w0
  System_String_o *v33; // x0
  System_String_o *v34; // x1
  System_String_o **v35; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v38; // x1
  int32_t TargetId; // w0
  ItemEntity_o *Entity; // x0
  unsigned int type; // w8
  WebViewManager_o *v42; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x21
  const MethodInfo *v44; // x1
  int32_t v45; // w0
  ServantEntity_o *v46; // x0
  ServantEntity_o *v47; // x21
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t setNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FF860 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, nameText);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_14652, v18);
    sub_B16FFC(&StringLiteral_12004, v19);
    sub_B16FFC(&StringLiteral_5735, v20);
    sub_B16FFC(&StringLiteral_11678, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FF860 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)nameText,
    (System_Int32_array **)name,
    (System_String_array **)countText,
    (System_String_array **)isSend,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      TargetId = ShopEntity__get_TargetId(this, v38);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 TargetId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_47;
      type = Entity->fields.type;
      if ( type <= 0xD && ((1 << type) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v35 = countText;
        v34 = 0LL;
        goto LABEL_18;
      }
      if ( isSend )
      {
        v32 = (_DWORD)this + 64;
        goto LABEL_12;
      }
      v34 = ItemEntity__GetCountText(Entity, this->fields.setNum, 0LL);
      *countText = v34;
      goto LABEL_17;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_14652;
      goto LABEL_34;
    case 4:
      goto LABEL_10;
    case 6:
      goto LABEL_16;
    default:
      if ( purchaseType == 21 )
      {
LABEL_10:
        if ( !isSend )
        {
          v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v42
            || (v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v42,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
                v45 = ShopEntity__get_TargetId(this, v44),
                !v43)
            || (v46 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v43,
                                           v45,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_47:
            sub_B170D4();
          }
          v47 = v46;
          if ( ServantEntity__get_IsServant(v46, 0LL) || ServantEntity__get_IsServantMaterialTd(v47, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_12004;
          }
          else if ( ServantEntity__get_IsServantEquip(v47, 0LL) )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_11678;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_5735;
          }
LABEL_34:
          v48 = LocalizationManager__Get((System_String_o *)*v31, 0LL);
          setNum = this->fields.setNum;
          v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v50 = System_String__Format(v48, v49, 0LL);
          *countText = v50;
          sub_B16F98(
            (BattleServantConfConponent_o *)countText,
            (System_Int32_array **)v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          return;
        }
LABEL_11:
        v32 = (_DWORD)this + 64;
LABEL_12:
        v33 = System_Int32__ToString(v32, 0LL);
        if ( v33 )
          v34 = v33;
        else
          v34 = (System_String_o *)StringLiteral_1;
        *countText = v34;
      }
      else
      {
LABEL_16:
        *countText = (System_String_o *)StringLiteral_1;
        v34 = (System_String_o *)StringLiteral_1;
      }
LABEL_17:
      v35 = countText;
LABEL_18:
      sub_B16F98((BattleServantConfConponent_o *)v35, (System_Int32_array **)v34, v24, v25, v26, v27, v28, v29);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__GetIsAlreadyInPossession(
        ShopEntity_o *this,
        bool isWithoutPresents,
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
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v17; // x0
  UserServantMaster_o *v18; // x22
  WebViewManager_o *v19; // x0
  UserServantStorageMaster_o *v20; // x23
  int64_t UserId; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v27; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x24
  Il2CppObject *v30; // x25
  struct ShopEntity___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  BattleBuffData_BuffData_array *v39; // x21
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v41; // x22
  UserServantEntity_array *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Int32_array *targetIds; // x24
  __int64 v46; // x8
  bool v47; // w9
  UserServantEntity_array *v48; // x20
  unsigned __int64 v49; // x25
  bool v50; // w11
  int32_t v51; // w28
  int max_length; // w8
  unsigned int v53; // w9
  BattleBuffData_BuffData_o *v54; // x10
  int v55; // w8
  unsigned int v56; // w26
  UserServantEntity_o *v57; // x8
  __int64 v58; // x19
  __int64 v59; // x23
  int v60; // w8
  unsigned int v61; // w26
  UserServantEntity_o *v62; // x8
  __int64 v63; // x19
  __int64 v64; // x23
  bool v66; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_40FF850 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v10);
    sub_B16FFC(&System_Predicate_UserPresentBoxEntity__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v13);
    sub_B16FFC(&ShopEntity___c_TypeInfo, v14);
    byte_40FF850 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_54;
  v18 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v17,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_54;
  v20 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(
                                                 MasterData_WarQuestSelectionMaster,
                                                 UserId,
                                                 0LL);
  v27 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v27 = ShopEntity___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_UserPresentBoxEntity__TypeInfo,
                                                                          v22,
                                                                          v23,
                                                                          v24,
                                                                          v25);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v30,
      Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v31 = ShopEntity___c_TypeInfo->static_fields;
    v31->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                  VaildList,
                                  (System_Predicate_T__o *)_9__49_0,
                                  (const MethodInfo_2044520 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v18
    || (v39 = All_BattleBuffData_BuffData, ServantEquipList = UserServantMaster__getServantEquipList(v18, 0LL), !v20)
    || (v41 = ServantEquipList,
        v42 = UserServantStorageMaster__getServantEquipList(v20, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_54:
    sub_B170D4();
  }
  v46 = *(_QWORD *)&targetIds->max_length;
  v47 = v39 == 0LL;
  if ( (int)v46 < 1 )
    return 0;
  v48 = v42;
  v49 = 0LL;
  v50 = v47 || isWithoutPresents;
  v66 = v47 || isWithoutPresents;
  while ( 1 )
  {
    if ( v49 >= (unsigned int)v46 )
      goto LABEL_55;
    v51 = targetIds->m_Items[v49 + 1];
    if ( !v50 )
    {
      max_length = v39->max_length;
      if ( max_length >= 1 )
        break;
    }
LABEL_31:
    if ( !v41 )
      goto LABEL_54;
    v55 = v41->max_length;
    if ( v55 >= 1 )
    {
      v56 = 0;
      while ( v56 < v55 )
      {
        v57 = v41->m_Items[v56];
        if ( !v57 )
          goto LABEL_54;
        v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v67.fields.currentCryptoKey = v59;
        *(_QWORD *)&v67.fields.fakeValue = v58;
        v42 = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v67, 0LL);
        if ( v51 == (_DWORD)v42 )
          return 1;
        v55 = v41->max_length;
        if ( (int)++v56 >= v55 )
          goto LABEL_41;
      }
LABEL_55:
      sub_B17100(v42, v43, v44);
      sub_B170A0();
    }
LABEL_41:
    if ( !v48 )
      goto LABEL_54;
    v60 = v48->max_length;
    if ( v60 >= 1 )
    {
      v61 = 0;
      while ( v61 < v60 )
      {
        v62 = v48->m_Items[v61];
        if ( !v62 )
          goto LABEL_54;
        v64 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v68.fields.currentCryptoKey = v64;
        *(_QWORD *)&v68.fields.fakeValue = v63;
        v42 = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68, 0LL);
        if ( v51 == (_DWORD)v42 )
          return 1;
        v60 = v48->max_length;
        if ( (int)++v61 >= v60 )
          goto LABEL_51;
      }
      goto LABEL_55;
    }
LABEL_51:
    LODWORD(v46) = targetIds->max_length;
    v50 = v66;
    if ( (__int64)++v49 >= (int)v46 )
      return 0;
  }
  v53 = 0;
  while ( 1 )
  {
    if ( v53 >= max_length )
      goto LABEL_55;
    v54 = v39->m_Items[v53];
    if ( !v54 )
      goto LABEL_54;
    if ( v51 == v54->fields.ratioHpLow )
      return 1;
    if ( (int)++v53 >= max_length )
      goto LABEL_31;
  }
}


bool __fastcall ShopEntity__GetIsAlreadyInPossessionNotHaving(
        ShopEntity_o *this,
        bool isWithoutPresents,
        const MethodInfo *method)
{
  return (this->fields.flag & 0x2000) != 0 && ShopEntity__GetIsAlreadyInPossession(this, isWithoutPresents, method);
}


bool __fastcall ShopEntity__GetIsNotHavingShopItemReceived(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FF84F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF84F = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && !UserShopEntity__get_IsReceivedShopItem(EntityDefinitely, 0LL);
}


int32_t __fastcall ShopEntity__GetItemCount(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B170D4();
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B170D4();
  if ( !itemIds->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return itemIds->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B170D4();
  if ( itemIds->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  return itemIds->m_Items[num + 1];
}


void __fastcall ShopEntity__GetLastPurchaseSum(
        ShopEntity_o *this,
        int32_t *buyItemNum,
        int32_t *buyServantNum,
        int32_t *buyServantEquipNum,
        int32_t *buyCmdCodeNum,
        int32_t *buyQuestNum,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t purchaseType; // w8
  WebViewManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  const MethodInfo *v19; // x1
  int32_t v20; // w0
  ServantEntity_o *Entity; // x0
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  WebViewManager_o *Instance; // x0
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v26; // x1
  int32_t TargetId; // w0
  int32_t recordNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FF862 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_SetItemMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FF862 = 1;
  }
  recordNum = 0;
  *buyItemNum = 0;
  *buyServantNum = 0;
  *buyServantEquipNum = 0;
  *buyCmdCodeNum = 0;
  *buyQuestNum = 0;
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
    case 2:
      *buyItemNum = this->fields.setNum;
      return;
    case 3:
      return;
    case 4:
      goto LABEL_7;
    case 5:
      recordNum = 0;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SetItemMaster___);
      TargetId = ShopEntity__get_TargetId(this, v26);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      SetItemMaster__GetSum(
        MasterData_WarQuestSelectionMaster,
        buyItemNum,
        buyServantNum,
        buyServantEquipNum,
        buyCmdCodeNum,
        &recordNum,
        TargetId,
        0LL);
      break;
    case 6:
      *buyQuestNum = 1;
      return;
    default:
      if ( purchaseType == 19 )
      {
        *buyCmdCodeNum = this->fields.setNum;
      }
      else if ( purchaseType == 21 )
      {
LABEL_7:
        v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v17
          || (v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)v17,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
              v20 = ShopEntity__get_TargetId(this, v19),
              !v18)
          || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v18,
                                            v20,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_B170D4();
        }
        IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
        setNum = this->fields.setNum;
        if ( IsServantEquip )
          *buyServantEquipNum = setNum;
        else
          *buyServantNum = setNum;
      }
      break;
  }
}


System_String_o *__fastcall ShopEntity__GetOverwriteName(
        ShopEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_40FF876 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21283, defaultValue);
    byte_40FF876 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21283,
           defaultValue,
           0LL);
}


int32_t __fastcall ShopEntity__GetPayType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


int32_t __fastcall ShopEntity__GetPrice(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_B170D4();
  if ( !prices->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return prices->m_Items[1];
}


int32_t __fastcall ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_3157490[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_31575B0[v2];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_B170D4();
  if ( prices->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF85E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF85E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopReleaseMaster__GetPurchaseShop(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t fakeValue; // w8
  __int64 v12; // x9
  ShopReleaseEntity_o *v13; // x19
  WebViewManager_o *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x20
  int32_t condValue; // w0

  if ( (byte_40FF86E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF86E = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  result = (ServantEntity_o *)ShopReleaseMaster__GetEntitiyList(
                                MasterData_WarQuestSelectionMaster,
                                this->fields.id,
                                0LL);
  if ( result )
  {
    fakeValue = result->fields.id.fields.fakeValue;
    if ( fakeValue >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= fakeValue )
        {
          sub_B17100(result, v9, v10);
          sub_B170A0();
        }
        v13 = (ShopReleaseEntity_o *)*((_QWORD *)&result->fields.baseSvtId.fields.currentCryptoKey + v12);
        if ( !v13 )
          goto LABEL_18;
        if ( v13->fields.condType == 8 )
          break;
        if ( (int)++v12 >= fakeValue )
          return 0LL;
      }
      v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v14 )
      {
        v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v14,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        condValue = ShopReleaseEntity__get_condValue(v13, 0LL);
        if ( v15 )
          return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v15,
                                      condValue,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
LABEL_18:
      sub_B170D4();
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v7; // x0
  int32_t flag; // w8
  __int64 *v10; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF85B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_8351, v3);
    sub_B16FFC(&StringLiteral_8757, v4);
    sub_B16FFC(&StringLiteral_21668, v5);
    byte_40FF85B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21668,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v10 = &StringLiteral_8351;
    }
    else
    {
      if ( (flag & 0x1000) == 0 )
      {
        if ( (flag & 0x20000) != 0 )
          return (LODWORD(this->fields.closedAt) - LODWORD(this->fields.openedAt)) / 86400 + 1;
        else
          return 0;
      }
      v10 = &StringLiteral_8757;
    }
    return ConstantMaster__getValue((System_String_o *)*v10, 0LL);
  }
  if ( !value )
    sub_B170D4();
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  return System_Int32__Parse(v7, 0LL);
}


int32_t __fastcall ShopEntity__GetShopType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopType;
}


void __fastcall ShopEntity__GetSum(
        ShopEntity_o *this,
        int32_t *buyItemNum,
        int32_t *buyServantNum,
        int32_t *buyServantEquipNum,
        int32_t *buyCmdCodeNum,
        int32_t *buyQuestNum,
        int32_t *recordNum,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t purchaseType; // w8
  WebViewManager_o *v20; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  const MethodInfo *v22; // x1
  int32_t v23; // w0
  ServantEntity_o *Entity; // x0
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  WebViewManager_o *v27; // x0
  ShopGroupMaster_o *v28; // x24
  const MethodInfo *v29; // x1
  int32_t v30; // w0
  WebViewManager_o *Instance; // x0
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v33; // x1
  int32_t TargetId; // w0
  bool v35; // [xsp+0h] [xbp-50h] BYREF
  bool equip; // [xsp+4h] [xbp-4Ch] BYREF
  bool servant; // [xsp+8h] [xbp-48h] BYREF
  bool item; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FF861 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_SetItemMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FF861 = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  v35 = 0;
  *buyItemNum = 0;
  *buyServantNum = 0;
  *buyServantEquipNum = 0;
  *buyCmdCodeNum = 0;
  *buyQuestNum = 0;
  *recordNum = 0;
  purchaseType = this->fields.purchaseType;
  if ( purchaseType <= 16 )
  {
    switch ( purchaseType )
    {
      case 1:
      case 2:
        *buyItemNum = this->fields.setNum;
        return;
      case 3:
        return;
      case 4:
        goto LABEL_9;
      case 5:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SetItemMaster___);
        TargetId = ShopEntity__get_TargetId(this, v33);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_31;
        SetItemMaster__GetSum(
          MasterData_WarQuestSelectionMaster,
          buyItemNum,
          buyServantNum,
          buyServantEquipNum,
          buyCmdCodeNum,
          recordNum,
          TargetId,
          0LL);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          goto LABEL_31;
        v28 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v27,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        v30 = ShopEntity__get_TargetId(this, v29);
        if ( !v28 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(v28, v30, &item, &servant, &equip, &v35, 0LL);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( v35 )
LABEL_26:
          *buyQuestNum = 1;
        break;
    }
  }
  else if ( purchaseType == 19 )
  {
    *buyCmdCodeNum = this->fields.setNum;
  }
  else if ( purchaseType == 21 )
  {
LABEL_9:
    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v20
      || (v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v20,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
          v23 = ShopEntity__get_TargetId(this, v22),
          !v21)
      || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v21,
                                        v23,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_B170D4();
    }
    IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
    setNum = this->fields.setNum;
    if ( IsServantEquip )
      *buyServantEquipNum = setNum;
    else
      *buyServantNum = setNum;
  }
}


bool __fastcall ShopEntity__IsAfterTheFreeShopReleaseDate(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_40FF842 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FF842 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v4) && ShopEntity__GetFreeShopReleaseDate(this, v5) > 0;
}


bool __fastcall ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  int64_t closedAt; // x8
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF848 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF848 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopReleaseMaster__IsAllCondClear(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Int32_array *AnotherPayItemIds; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  const MethodInfo *v14; // x1
  char v15; // w8
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v18; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF857 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF857 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_24;
  AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds(this, v7);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  if ( !AnotherPayItemIds->max_length )
  {
    sub_B17100(AnotherPayItemIds, v9, v10);
    sub_B170A0();
  }
  v11 = AnotherPayItemIds->m_Items[1];
  if ( v11 < 1 )
    goto LABEL_24;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B170D4();
  UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v11, 0LL);
  v15 = (char)entity;
  if ( !entity )
    return v15 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v14) )
  {
LABEL_24:
    v15 = 0;
    return v15 & 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v18 = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       v18,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
    v15 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v15 = 1;
  return v15 & 1;
}


bool __fastcall ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v8; // x19
  int32_t v9; // w19
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF858 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_22885, v6);
    byte_40FF858 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22885,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v8 = (Il2CppObject *)value;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v9 = System_Convert__ToInt32(v8, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v9, 0LL, 0, 0LL);
  }
  else
  {
    return 1;
  }
}


bool __fastcall ShopEntity__IsClosed(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  int64_t closedAt; // x8

  Time = nowTime;
  if ( (byte_40FF84A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, nowTime);
    byte_40FF84A = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return closedAt && Time > closedAt;
}


bool __fastcall ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  int32_t num; // w8
  int32_t limitNum; // w9
  bool v11; // w10
  bool v12; // w8

  if ( (byte_40FF85C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF85C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             this->fields.baseShopId,
                             0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  num = EntityDefinitely->fields.num;
  limitNum = this->fields.limitNum;
  v11 = num > 0;
  v12 = num >= limitNum;
  if ( limitNum >= 1 )
    return v12;
  else
    return v11;
}


bool __fastcall ShopEntity__IsCondType_34556148(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  int32_t num; // w8
  int32_t limitNum; // w9
  bool v11; // w10
  bool v12; // w8

  if ( (byte_40FF85D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, userId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF85D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             userId,
                             this->fields.baseShopId,
                             0LL)) == 0LL )
  {
    sub_B170D4();
  }
  num = EntityDefinitely->fields.num;
  limitNum = this->fields.limitNum;
  v11 = num > 0;
  v12 = num >= limitNum;
  if ( limitNum >= 1 )
    return v12;
  else
    return v11;
}


bool __fastcall ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  WebViewManager_o *Instance; // x0
  ServantCostumeReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  bool v11; // w0
  const MethodInfo *v12; // x1
  int32_t svtId[2]; // [xsp+0h] [xbp-20h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF846 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_18815, v5);
    byte_40FF846 = 1;
  }
  *(_QWORD *)svtId = 0LL;
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18815,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &svtId[1], svtId, v8);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v11 = ServantCostumeReleaseMaster__checkItemHaving(MasterData_WarQuestSelectionMaster, svtId[1], svtId[0], 0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v12) || !v11);
}


bool __fastcall ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  int64_t UserId; // x0
  bool v15; // w21
  int64_t closedAt; // x8
  WebViewManager_o *v17; // x0
  ShopReleaseMaster_o *v18; // x0
  UserEventEntity_o *v20; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_40FF847 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FF847 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v12 )
    goto LABEL_29;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v12,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v13 )
    goto LABEL_29;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v13,
         &entity,
         this->fields.eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_29;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_16;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v20, UserId, this->fields.eventId, 0LL) )
    goto LABEL_16;
  if ( !v20 )
    goto LABEL_29;
  v15 = 1;
  if ( !UserEventEntity__getEventFlag(v20, 1, 0LL) )
  {
LABEL_16:
    if ( !Time )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
    }
    if ( Time < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && Time > closedAt )
      return 0;
    v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v17 )
    {
      v18 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v17,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( v18 )
        return ShopReleaseMaster__IsOpen(v18, this->fields.id, 0LL);
    }
LABEL_29:
    sub_B170D4();
  }
  return v15;
}


bool __fastcall ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v12; // x0
  QuestGroupMaster_o *v13; // x20
  const MethodInfo *v14; // x1
  int32_t TargetId; // w0
  int32_t EventId; // w0
  int32_t v17; // w20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  WarEntity_o *v25; // x0
  __int64 v26; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_40FF878 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&WarEntity_TypeInfo, v9);
    byte_40FF878 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___),
        (v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v12,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        TargetId = ShopEntity__get_TargetId(this, v14),
        !v13)
    || (EventId = QuestGroupMaster__GetEventId(v13, TargetId, 0LL), !MasterData_WarQuestSelectionMaster)
    || (v17 = EventId,
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v20 = 0;
  while ( 1 )
  {
    if ( !Enumerator )
      goto LABEL_36;
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_13:
      v24 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (WarEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                           Enumerator,
                           *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_B170D4();
    v26 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (WarEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != WarEntity_TypeInfo )
    {
      sub_B173C8(v25);
LABEL_36:
      sub_B170D4();
    }
    if ( v25->fields.eventId == v17 )
      v20 |= WarEntity__IsShop(v25, 0LL);
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v20 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF856 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_21668, v3);
    byte_40FF856 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21668,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_B170D4();
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v6 = System_Int32__Parse(v5, 0LL);
  if ( v6 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v6;
}


bool __fastcall ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  int32_t FreeShopCondId; // w0

  if ( (byte_40FF843 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_18815, v5);
    byte_40FF843 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18815,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v9),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_10:
    sub_B170D4();
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FF852 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF852 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FF853 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF853 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.id,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF854 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_21668, v3);
    byte_40FF854 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21668,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_B170D4();
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v6 = System_Int32__Parse(v5, 0LL);
  if ( v6 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v6;
}


bool __fastcall ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF855 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&StringLiteral_21668, v3);
    byte_40FF855 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21668,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_B170D4();
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v6 = System_Int32__Parse(v5, 0LL);
  if ( v6 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v6;
}


bool __fastcall ShopEntity__IsNotClearNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x0
  int64_t closedAt; // x8
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_ShopReleaseEntity__o *NotClearShopReleaseEntity; // x0
  char v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FF872 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF872 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (NotClearShopReleaseEntity = ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NotClearShopReleaseEntity,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B170D4();
    if ( HIDWORD(v17.fields.current[1].klass) == 37 )
    {
      v15 = 1;
      v16 = 4;
      goto LABEL_19;
    }
  }
  v15 = 0;
  v16 = 2;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return (v16 == 4) & v15;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventEntity_o *v13; // x21
  WebViewManager_o *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x0
  bool IsTimeStatusRecord; // w0
  bool v17; // w22
  WebViewManager_o *v18; // x0
  ShopReleaseMaster_o *v19; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_40FF849 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FF849 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v13 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, UserId, this->fields.eventId, 0LL);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14 )
    goto LABEL_28;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v14,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v15 )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v15,
         &entity,
         this->fields.eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_28;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v13 || IsTimeStatusRecord )
      goto LABEL_22;
  }
  else if ( !v13 )
  {
LABEL_22:
    if ( Time < this->fields.openedAt )
      return 0;
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v18 )
    {
      v19 = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v18,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( v19 )
        return ShopReleaseMaster__IsOpen(v19, this->fields.id, 0LL);
    }
LABEL_28:
    sub_B170D4();
  }
  v17 = 1;
  if ( !UserEventEntity__getEventFlag(v13, 1, 0LL) )
    goto LABEL_22;
  return v17;
}


bool __fastcall ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v35; // x0
  UserQuestMaster_o *v36; // x22
  WebViewManager_o *v37; // x0
  UserShopMaster_o *v38; // x21
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v41; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int64_t updatedAt; // x27
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  int64_t v45; // x25
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  bool v48; // w24
  int32_t FreeShopCondId; // w0
  CommonReleaseEntity_array *List; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x23
  ShopEntity___c_c *v56; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x24
  int64_t v59; // x21
  char v60; // w8
  Il2CppObject *v61; // x25
  struct ShopEntity___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int64_t v69; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x23
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int max_length; // w8
  unsigned int v83; // w25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v84; // x28
  int64_t v85; // x0
  ShopEntity___c_c *v86; // x0
  UserShopEntity_o *v87; // x21
  struct ShopEntity___c_StaticFields *v88; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_1; // x22
  bool v90; // w26
  Il2CppObject *v91; // x24
  struct ShopEntity___c_StaticFields *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  ShopEntity___c_c *v102; // x0
  struct ShopEntity___c_StaticFields *v103; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_2; // x22
  bool v105; // w26
  Il2CppObject *v106; // x24
  struct ShopEntity___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x22
  ShopEntity___c_c *v119; // x8
  struct ShopEntity___c_StaticFields *v120; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__36_3; // x23
  bool v122; // w26
  Il2CppObject *v123; // x24
  struct ShopEntity___c_StaticFields *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  const MethodInfo_2969008 *v131; // x3
  bool v132; // w21
  int32_t v133; // w0
  bool result; // w0
  ShopBuyItemListViewItemDraw_o *v135; // x0
  UISprite_o *v136; // x1
  System_String_o *v137; // x2
  const MethodInfo *v138; // x3
  UserShopEntity_o *v139; // [xsp+8h] [xbp-78h]
  bool v140; // [xsp+14h] [xbp-6Ch]
  int64_t v141; // [xsp+20h] [xbp-60h] BYREF
  __int64 v142; // [xsp+28h] [xbp-58h]
  System_Nullable_long__o v143; // 0:x0.16

  if ( (byte_40FF845 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_UserQuestEntity___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v10);
    sub_B16FFC(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_UserQuestEntity__long___ctor__, v12);
    sub_B16FFC(&Method_System_Func_UserQuestEntity__bool___ctor__, v13);
    sub_B16FFC(&System_Func_UserQuestEntity__long__TypeInfo, v14);
    sub_B16FFC(&System_Func_CommonReleaseEntity__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_UserQuestEntity__bool__TypeInfo, v16);
    sub_B16FFC(&long_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v20);
    sub_B16FFC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&Method_System_Nullable_long__GetValueOrDefault__, v23);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v24);
    sub_B16FFC(&Method_System_Nullable_long__get_HasValue__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v27);
    sub_B16FFC(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v28);
    sub_B16FFC(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v29);
    sub_B16FFC(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v30);
    sub_B16FFC(&ShopEntity___c_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_18818, v32);
    byte_40FF845 = 1;
  }
  v141 = 0LL;
  v142 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v35 )
    goto LABEL_79;
  v36 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v35,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_79;
  v38 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v37,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v38 )
    goto LABEL_79;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(v38, UserId, this->fields.id, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_79;
  v41 = EntityDefinitely;
  script = this->fields.script;
  if ( !script )
    goto LABEL_79;
  updatedAt = v41->fields.updatedAt;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)StringLiteral_18818,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_79;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v45 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    v48 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v46) || UserShopEntity__get_IsReturnRarePriShop(v41, 0LL);
    FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v47);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_79;
    List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL);
    if ( List )
    {
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v140 = v48;
      v56 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v56 = ShopEntity___c_TypeInfo;
      }
      static_fields = v56->static_fields;
      v139 = v41;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v59 = v45;
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v59 = v45;
        }
        v61 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                                                        v51,
                                                                                        v52,
                                                                                        v53,
                                                                                        v54);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_0,
          v61,
          Method_ShopEntity___c__IsPaidExchange_b__36_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
        v62 = ShopEntity___c_TypeInfo->static_fields;
        v62->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v62->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        v45 = v59;
      }
      v69 = v45;
      v70 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v55,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v71 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v70,
              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UserQuestEntity__TypeInfo, v72, v73, v74, v75);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v76,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v71 )
        goto LABEL_79;
      max_length = v71->max_length;
      if ( max_length >= 1 )
      {
        v83 = 0;
        while ( 1 )
        {
          if ( v83 >= max_length )
          {
            sub_B17100(EntityFromId, v78, v79);
            sub_B170A0();
          }
          v84 = v71->m_Items[v83];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v85 = NetworkManager__get_UserId(0LL);
          if ( !v84 || !v36 )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(v36, v85, (int32_t)v84[1].klass, 0LL);
          if ( EntityFromId )
          {
            if ( !v76 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v76,
              (EventMissionProgressRequest_Argument_ProgressData_o *)EntityFromId,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
          }
          max_length = v71->max_length;
          if ( (int)++v83 >= max_length )
            goto LABEL_42;
        }
LABEL_79:
        sub_B170D4();
      }
LABEL_42:
      v141 = 0LL;
      v142 = 0LL;
      if ( !v76 )
        goto LABEL_79;
      v48 = v140;
      v45 = v69;
      if ( v76->fields._size < 1 )
        goto LABEL_76;
      v86 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v87 = v139;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v86 = ShopEntity___c_TypeInfo;
        }
      }
      else
      {
        v87 = v139;
      }
      v88 = v86->static_fields;
      _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v88->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v90 = v140;
          if ( !v86->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v86);
            v88 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v90 = v140;
        }
        v91 = (Il2CppObject *)v88->__9;
        _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_UserQuestEntity__bool__TypeInfo,
                                                                                        v78,
                                                                                        v79,
                                                                                        v80,
                                                                                        v81);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_1,
          v91,
          Method_ShopEntity___c__IsPaidExchange_b__36_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v92 = ShopEntity___c_TypeInfo->static_fields;
        v92->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v92->__9__36_1,
          (System_Int32_array **)_9__36_1,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98);
        v48 = v90;
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)v76,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_76;
      v102 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v102 = ShopEntity___c_TypeInfo;
      }
      v103 = v102->static_fields;
      _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v103->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v105 = v48;
          if ( !v102->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v102);
            v103 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v105 = v48;
        }
        v106 = (Il2CppObject *)v103->__9;
        _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_UserQuestEntity__bool__TypeInfo,
                                                                                        v78,
                                                                                        v99,
                                                                                        v100,
                                                                                        v101);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_2,
          v106,
          Method_ShopEntity___c__IsPaidExchange_b__36_2__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v107 = ShopEntity___c_TypeInfo->static_fields;
        v107->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v107->__9__36_2,
          (System_Int32_array **)_9__36_2,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        v48 = v105;
      }
      v118 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v76,
               (System_Func_TSource__bool__o *)_9__36_2,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v119 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v119 = ShopEntity___c_TypeInfo;
      }
      v120 = v119->static_fields;
      _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v120->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( (BYTE3(v119->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v122 = v48;
          if ( !v119->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v119);
            v120 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v122 = v48;
        }
        v123 = (Il2CppObject *)v120->__9;
        _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                                   System_Func_UserQuestEntity__long__TypeInfo,
                                                                                   v114,
                                                                                   v115,
                                                                                   v116,
                                                                                   v117);
        System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
          _9__36_3,
          v123,
          Method_ShopEntity___c__IsPaidExchange_b__36_3__,
          (const MethodInfo_2B6BEAC *)Method_System_Func_UserQuestEntity__long___ctor__);
        v124 = ShopEntity___c_TypeInfo->static_fields;
        v124->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v124->__9__36_3,
          (System_Int32_array **)_9__36_3,
          v125,
          v126,
          v127,
          v128,
          v129,
          v130);
        v48 = v122;
      }
      *(_QWORD *)&v143.fields.has_value = System_Linq_Enumerable__Min_UserQuestEntity_(
                                            v118,
                                            (System_Func_TSource__long__o *)_9__36_3,
                                            (const MethodInfo_19BD508 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      v143.fields.value = (int64_t)&v141;
      System_Nullable_long____ctor(v143, Method_System_Nullable_long___ctor__, v131);
      if ( (_BYTE)v142 )
        v132 = v141 > v87->fields.updatedAt;
      else
LABEL_76:
        v132 = 1;
      v133 = ShopEntity__GetFreeShopCondId(this, v78);
      v60 = v132 | !CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v133, 0LL, 0, 0LL);
    }
    else
    {
      v60 = 1;
    }
    return (v48 || updatedAt < v45) | v60;
  }
  else
  {
    sub_B173C8(Item);
    ShopBuyItemListViewItemDraw__SetSpriteName(v135, v136, v137, v138);
  }
  return result;
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF84B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF84B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopReleaseMaster__IsPreparation(MasterData_WarQuestSelectionMaster, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v10; // x20
  WebViewManager_o *v11; // x0
  WarQuestSelectionMaster_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *targetIds; // x23
  __int64 v16; // x8
  UserQuestMaster_o *v17; // x19
  unsigned __int64 v18; // x24
  int32_t v19; // w21
  int64_t v20; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FF84D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF84D = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         this->fields.baseShopId,
                         0LL);
    if ( EntityDefinitely )
    {
      v10 = EntityDefinitely;
      v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v11 )
        goto LABEL_24;
      v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v11,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_24;
      v16 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v16 >= 1 )
      {
        v17 = (UserQuestMaster_o *)v12;
        v18 = 0LL;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)v16 )
          {
            sub_B17100(v12, v13, v14);
            sub_B170A0();
          }
          v19 = targetIds->m_Items[v18 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v20 = NetworkManager__get_UserId(0LL);
          if ( !v17 )
            break;
          v12 = (WarQuestSelectionMaster_o *)UserQuestMaster__TryGetEntity(v17, &entity, v20, v19, 0LL);
          if ( !entity )
            goto LABEL_22;
          LODWORD(v16) = targetIds->max_length;
          if ( (__int64)++v18 >= (int)v16 )
            goto LABEL_21;
        }
LABEL_24:
        sub_B170D4();
      }
LABEL_21:
      LOBYTE(EntityDefinitely) = v10->fields.num > 0;
    }
  }
  else
  {
LABEL_22:
    LOBYTE(EntityDefinitely) = 0;
  }
  return (char)EntityDefinitely;
}


bool __fastcall ShopEntity__IsServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x19
  UserPresentBoxMaster_o *v12; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v19; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v22; // x23
  struct ShopEntity___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Int32_array *targetIds; // x22
  __int64 v34; // x8
  BattleBuffData_BuffData_array *v35; // x20
  unsigned __int64 v36; // x23
  BattleBuffData_BuffData_o **m_Items; // x25
  int32_t v38; // w21
  int64_t v39; // x0
  int max_length; // w8
  __int64 v41; // x9
  BattleBuffData_BuffData_o *v42; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FF851 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_UserPresentBoxEntity___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_UserPresentBoxEntity__TypeInfo, v8);
    sub_B16FFC(&Method_ShopEntity___c__IsServantGet_b__50_0__, v9);
    sub_B16FFC(&ShopEntity___c_TypeInfo, v10);
    byte_40FF851 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v12 = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_39;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(v12, UserId, 0LL);
  v19 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v19 = ShopEntity___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_UserPresentBoxEntity__TypeInfo,
                                                                          v14,
                                                                          v15,
                                                                          v16,
                                                                          v17);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v22,
      Method_ShopEntity___c__IsServantGet_b__50_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v23 = ShopEntity___c_TypeInfo->static_fields;
    v23->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                  VaildList,
                                  (System_Predicate_T__o *)_9__50_0,
                                  (const MethodInfo_2044520 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_39:
    sub_B170D4();
  v34 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v34 < 1 )
    return 0;
  v35 = All_BattleBuffData_BuffData;
  v36 = 0LL;
  m_Items = All_BattleBuffData_BuffData->m_Items;
  while ( 1 )
  {
    if ( v36 >= (unsigned int)v34 )
      goto LABEL_38;
    v38 = targetIds->m_Items[v36 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v39 = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    All_BattleBuffData_BuffData = (BattleBuffData_BuffData_array *)UserServantCollectionMaster__TryGetEntity(
                                                                     Master_WarQuestSelectionMaster,
                                                                     &entity,
                                                                     v39,
                                                                     v38,
                                                                     0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v35 )
    {
      max_length = v35->max_length;
      if ( max_length >= 1 )
      {
        v41 = 0LL;
        while ( (unsigned int)v41 < max_length )
        {
          v42 = m_Items[v41];
          if ( !v42 )
            goto LABEL_39;
          if ( v38 == v42->fields.ratioHpLow )
            return 1;
          if ( (int)++v41 >= max_length )
            goto LABEL_35;
        }
LABEL_38:
        sub_B17100(All_BattleBuffData_BuffData, v31, v32);
        sub_B170A0();
      }
    }
LABEL_35:
    LODWORD(v34) = targetIds->max_length;
    if ( (__int64)++v36 >= (int)v34 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v11; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF844 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation);
    sub_B16FFC(&StringLiteral_18815, v5);
    byte_40FF844 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18815,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
      && ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7) )
    {
      if ( ShopEntity__IsFulFilledFreeExchangeCondition(this, v8) )
      {
        LOBYTE(script) = 1;
      }
      else
      {
        LOBYTE(script) = ShopEntity__IsSoldOut(this, v9);
        if ( ((unsigned __int8)script & 1) == 0 && isInPreparation )
          LOBYTE(script) = ShopEntity__isQuestNotClearItemClosed(this, 0, v11);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (unsigned __int8)script & 1;
}


bool __fastcall ShopEntity__IsSoldOut(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v9; // x1

  if ( (byte_40FF84E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF84E = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_13;
  if ( this->fields.limitNum < 1 )
  {
LABEL_14:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B170D4();
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v9) )
    {
LABEL_13:
      LOBYTE(EntityDefinitely) = 1;
      return (char)EntityDefinitely;
    }
    goto LABEL_14;
  }
  return (char)EntityDefinitely;
}


void __fastcall ShopEntity__SetSvtIdAndCostumeId(
        ShopEntity_o *this,
        int32_t *svtId,
        int32_t *costumeId,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_5;
  if ( !targetIds->max_length )
  {
    sub_B17100(this, svtId, costumeId);
    sub_B170A0();
  }
  v7 = System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !v7 )
LABEL_5:
    sub_B170D4();
  v8 = v7;
  v9 = System_String__Substring_43807468(v7, 0, v7->fields.m_stringLength - 2, 0LL);
  *svtId = System_Int32__Parse(v9, 0LL);
  v10 = System_String__Substring(v8, v8->fields.m_stringLength - 2, 0LL);
  *costumeId = System_Int32__Parse(v10, 0LL);
}


bool __fastcall ShopEntity__TryGetClosedMessage(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF84C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF84C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopReleaseMaster__TryGetClosedMessage(
           MasterData_WarQuestSelectionMaster,
           message,
           itemName,
           this->fields.id,
           0LL);
}


bool __fastcall ShopEntity__checkFlag(ShopEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall ShopEntity__checkHoldDisp(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  int32_t TargetId; // w0
  const MethodInfo *v8; // x1
  int32_t v10; // w0

  if ( (byte_40FF863 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF863 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        TargetId = ShopEntity__get_TargetId(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B170D4();
  }
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, TargetId, 0LL) )
    return 0;
  v10 = ShopEntity__get_TargetId(this, v8);
  return !ItemMaster__isFriendPoint(MasterData_WarQuestSelectionMaster, v10, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  int32_t TargetId; // w0
  const MethodInfo *v10; // x1
  UserGameEntity_o *v11; // x0
  int32_t *p_rarePri; // x8
  int32_t v13; // w0
  const MethodInfo *v14; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v16; // w0
  UserGameEntity_o *v17; // x0
  WebViewManager_o *v18; // x0
  UserItemMaster_o *v19; // x20
  int64_t UserId; // x21
  const MethodInfo *v21; // x1
  int32_t v22; // w0
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40FF864 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF864 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  TargetId = ShopEntity__get_TargetId(this, v8);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !ItemMaster__isMana(MasterData_WarQuestSelectionMaster, TargetId, 0LL) )
  {
    v13 = ShopEntity__get_TargetId(this, v10);
    if ( ItemMaster__isRarePri(MasterData_WarQuestSelectionMaster, v13, 0LL) )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        p_rarePri = &SelfUserGame->fields.rarePri;
        return *p_rarePri;
      }
    }
    else
    {
      v16 = ShopEntity__get_TargetId(this, v14);
      if ( ItemMaster__isStone(MasterData_WarQuestSelectionMaster, v16, 0LL) )
      {
        v17 = UserGameMaster__getSelfUserGame(0LL);
        if ( v17 )
        {
          p_rarePri = &v17->fields.stone;
          return *p_rarePri;
        }
      }
      else
      {
        v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v18 )
        {
          v19 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v18,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          v22 = ShopEntity__get_TargetId(this, v21);
          if ( v19 )
          {
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v19, UserId, v22, 0LL);
            if ( EntityDefinitely )
            {
              p_rarePri = &EntityDefinitely->fields.num;
              return *p_rarePri;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  v11 = UserGameMaster__getSelfUserGame(0LL);
  if ( !v11 )
    goto LABEL_22;
  p_rarePri = &v11->fields.mana;
  return *p_rarePri;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t TargetId; // w0
  ServantEntity_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  WarEntity_o *v19; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FF875 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF875 = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    TargetId = ShopEntity__get_TargetId(this, v10);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v13 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 TargetId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v13 )
        return ServantEntity__getName(v13, 0, -1, 0LL);
    }
LABEL_22:
    sub_B170D4();
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  v17 = ShopEntity__get_TargetId(this, v16);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v17,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return this->fields.name;
  if ( !entity )
    goto LABEL_22;
  if ( entity->fields.bannerId != 29 )
    return this->fields.name;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &v19,
          entity->fields.flag,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  if ( !v19 )
    goto LABEL_22;
  if ( ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v19, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v18);
  else
    return this->fields.name;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B170D4();
  if ( targetIds->max_length <= id )
  {
    sub_B17100(this, *(_QWORD *)&id, method);
    sub_B170A0();
  }
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B170D4();
  if ( !targetIds->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B170D4();
  return targetIds->max_length;
}


bool __fastcall ShopEntity__isClosedShopPriorityLowCheck(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  System_String_o *v8; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-18h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-4h] BYREF

  questId = 0;
  v8 = 0LL;
  if ( (this->fields.flag & 0x100) != 0 )
  {
    if ( ShopEntity__isQuestNotClear(this, &questId, 0, v2) )
      return ShopEntity__isQuestNotClearItemClosedSub(this, questId, 0, v5);
    if ( ShopEntity__IsPreparation(this, &message, &v8, v5) || ShopEntity__isExpireItemClosed(this, v6) )
      return 1;
  }
  return 0;
}


bool __fastcall ShopEntity__isExpireItemClosed(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v10; // x0
  QuestMaster_o *v11; // x21
  WebViewManager_o *v12; // x0
  WarQuestSelectionMaster_o *v13; // x0
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v15; // x22
  int max_length; // w28
  int32_t v17; // w24
  QuestReleaseEntity_array *ListByType; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int v21; // w8
  QuestReleaseEntity_array *v22; // x25
  unsigned int v23; // w26
  QuestReleaseEntity_o *v24; // x27
  int32_t questId; // w23
  QuestEntity_o *QuestEntity; // x0
  _BOOL4 v27; // w25
  int64_t UserId; // x26
  const MethodInfo *v29; // x2
  int32_t TargetId; // w0
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  UserQuestEntity_o *v34; // x26
  int32_t v35; // w0
  QuestEntity_o *Entity; // x0
  const MethodInfo *v37; // x1
  int64_t Time; // [xsp+8h] [xbp-58h]

  if ( (byte_40FF865 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF865 = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v10 )
      goto LABEL_42;
    v11 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v10,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_42;
    v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v12,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_42;
    v15 = (QuestReleaseMaster_o *)v13;
    max_length = targetIds->max_length;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( max_length >= 1 )
    {
      if ( v15 )
      {
        v17 = 0;
        while ( 1 )
        {
          ListByType = QuestReleaseMaster__getListByType(v15, 13, 0LL);
          if ( !ListByType )
            break;
          v21 = ListByType->max_length;
          v22 = ListByType;
          if ( v21 < 1 )
          {
LABEL_24:
            v27 = 1;
          }
          else
          {
            v23 = 0;
            while ( 1 )
            {
              if ( v23 >= v21 )
              {
                sub_B17100(ListByType, v19, v20);
                sub_B170A0();
              }
              v24 = v22->m_Items[v23];
              if ( !v24 )
                goto LABEL_42;
              questId = v24->fields.questId;
              ListByType = (QuestReleaseEntity_array *)ShopEntity__getTargetId(this, v17, v20);
              if ( questId == (_DWORD)ListByType )
              {
                if ( !v11 )
                  goto LABEL_42;
                QuestEntity = QuestMaster__getQuestEntity(v11, v24->fields.questId, 0LL);
                if ( !QuestEntity )
                  goto LABEL_42;
                ListByType = (QuestReleaseEntity_array *)QuestEntity__IsOpenByTime(QuestEntity, 1, 0LL);
                if ( ((unsigned __int8)ListByType & 1) == 0 )
                  break;
              }
              v21 = v22->max_length;
              if ( (int)++v23 >= v21 )
                goto LABEL_24;
            }
            v27 = 0;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          TargetId = ShopEntity__getTargetId(this, v17, v29);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, TargetId, 0LL);
          if ( EntityFromId )
          {
            v34 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v32) )
              goto LABEL_40;
            if ( v34->fields.expireAt < Time )
              return v27;
          }
          else
          {
            v35 = ShopEntity__getTargetId(this, v17, v33);
            if ( !v11 )
              break;
            Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v11,
                                        v35,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt(Entity, 0LL) < Time
              || (v27 & !ShopEntity__IsEventQuest(this, v37) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v17 >= max_length )
            goto LABEL_39;
        }
      }
LABEL_42:
      sub_B170D4();
    }
LABEL_39:
    LOBYTE(v27) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v27) = 0;
  }
  return v27;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 v16; // x9
  ItemMaster_o *v17; // x23
  __int64 v18; // x25
  __int64 v19; // x26
  unsigned __int64 v20; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v23; // x8
  __int64 mana; // x24
  __int64 v25; // x28
  struct System_Int32_array *v26; // x8
  __int64 rarePri; // x24
  __int64 v28; // x28
  struct System_Int32_array *v29; // x8
  BalanceConfig_c *v30; // x8
  __int64 v31; // x28
  int v32; // w24
  int32_t v33; // w8

  if ( (byte_40FF874 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, buyCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF874 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_45:
    sub_B170D4();
  }
  v16 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v16 < 1 )
    return 0;
  v17 = MasterData_WarQuestSelectionMaster;
  v18 = (int)v16;
  v19 = 8LL;
  while ( 1 )
  {
    v20 = v19 - 8;
    if ( v19 - 8 >= (unsigned __int64)targetIds->max_length )
    {
LABEL_50:
      sub_B17100(MasterData_WarQuestSelectionMaster, v13, v14);
      sub_B170A0();
    }
    if ( !v17 )
      goto LABEL_45;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)ItemMaster__isQP(
                                                           v17,
                                                           *((_DWORD *)&targetIds->obj.klass + v19),
                                                           0LL);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
      qp = SelfUserGame->fields.qp;
      setNum = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
      }
      if ( qp + setNum * buyCount > *(int *)(*(_QWORD *)&MasterData_WarQuestSelectionMaster[1].fields.rarePriId + 4LL) )
      {
        result = 1;
        *check = 1;
        return result;
      }
      goto LABEL_43;
    }
    v23 = this->fields.targetIds;
    if ( !v23 )
      goto LABEL_45;
    if ( v20 >= v23->max_length )
      goto LABEL_50;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)ItemMaster__isMana(
                                                           v17,
                                                           *((_DWORD *)&v23->obj.klass + v19),
                                                           0LL);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v25 = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v25 * buyCount > *(int *)(*(_QWORD *)&MasterData_WarQuestSelectionMaster[1].fields.rarePriId + 8LL) )
      {
        v33 = 5;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    v26 = this->fields.targetIds;
    if ( !v26 )
      goto LABEL_45;
    if ( v20 >= v26->max_length )
      goto LABEL_50;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)ItemMaster__isRarePri(
                                                           v17,
                                                           *((_DWORD *)&v26->obj.klass + v19),
                                                           0LL);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v28 = this->fields.setNum;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      MasterData_WarQuestSelectionMaster = (ItemMaster_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v28 * buyCount > *(int *)(*(_QWORD *)&MasterData_WarQuestSelectionMaster[1].fields.rarePriId + 12LL) )
    {
      v33 = 22;
      goto LABEL_49;
    }
LABEL_43:
    if ( v19 - 7 >= v18 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v19;
    if ( !targetIds )
      goto LABEL_45;
  }
  v29 = this->fields.targetIds;
  if ( !v29 )
    goto LABEL_45;
  if ( v20 >= v29->max_length )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)ItemMaster__isFriendPoint(
                                                         v17,
                                                         *((_DWORD *)&v29->obj.klass + v19),
                                                         0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_43;
  if ( !SelfUserGame )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v30 = BalanceConfig_TypeInfo;
  v31 = this->fields.setNum;
  v32 = (int)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  if ( v31 * buyCount + v32 <= v30->static_fields->FriendPointMax )
    goto LABEL_43;
  v33 = 13;
LABEL_49:
  *check = v33;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  ShopReleaseEntity_array *v11; // x19
  __int64 v12; // x24
  ShopReleaseEntity_o *v13; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v17; // w23

  if ( (byte_40FF86F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FF86F = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  v10 = *(_QWORD *)&EntitiyList->max_length;
  v11 = EntitiyList;
  if ( (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      sub_B17100(EntitiyList, v8, v9);
      sub_B170A0();
    }
    v13 = v11->m_Items[v12];
    if ( !v13 )
      goto LABEL_20;
    condType = v13->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_17:
    if ( (int)++v12 >= (int)v10 )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(v11->m_Items[v12], 0LL);
  condNum = v13->fields.condNum;
  v17 = condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  EntitiyList = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v17, condNum, 0LL);
  if ( ((unsigned __int8)EntitiyList & 1) != 0 )
  {
    v10 = *(_QWORD *)&v11->max_length;
    goto LABEL_17;
  }
  return ShopReleaseEntity__IsPreparation(v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  WebViewManager_o *v11; // x0
  WarQuestSelectionMaster_o *ClearNum; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  UserQuestMaster_o *v16; // x20
  __int64 v17; // x23
  ShopReleaseEntity_o *v18; // x21
  int64_t UserId; // x22
  int32_t condValue; // w0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_40FF86A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF86A = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL),
        (v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (ClearNum = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)v11,
                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_23:
    sub_B170D4();
  }
  v15 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v15 < 1 )
    return 0;
  v16 = (UserQuestMaster_o *)ClearNum;
  v17 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= (unsigned int)v15 )
    {
      sub_B17100(ClearNum, v13, v14);
      sub_B170A0();
    }
    v18 = EntitiyList->m_Items[v17];
    if ( !v18 )
      goto LABEL_23;
    if ( v18->fields.condType == 1 )
      break;
LABEL_20:
    if ( (int)++v17 >= (int)v15 )
      return 0;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  condValue = ShopReleaseEntity__get_condValue(v18, 0LL);
  if ( !v16 )
    goto LABEL_23;
  EntityFromId = UserQuestMaster__getEntityFromId(v16, UserId, condValue, 0LL);
  if ( EntityFromId )
  {
    ClearNum = (WarQuestSelectionMaster_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)ClearNum )
    {
      v15 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  __int64 v10; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_40FF86C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF86C = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(EntitiyList, v7, v8);
      sub_B170A0();
    }
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v10];
    if ( !EntitiyList )
      goto LABEL_15;
    if ( HIDWORD(EntitiyList->bounds) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)EntitiyList, 0LL);
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  __int64 v10; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_40FF86D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF86D = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(EntitiyList, v7, v8);
      sub_B170A0();
    }
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v10];
    if ( !EntitiyList )
      goto LABEL_15;
    if ( HIDWORD(EntitiyList->bounds) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)EntitiyList, 0LL);
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t purchaseType; // w8
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o **m_Items; // x10
  ShopReleaseEntity_o *v11; // x0

  if ( (byte_40FF871 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF871 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    v11 = m_Items[v9];
    if ( !v11 )
      goto LABEL_15;
    if ( v11->fields.condType == 37 )
      return ShopReleaseEntity__IsPreparation(v11, 0LL);
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  __int64 v10; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_40FF870 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF870 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(EntitiyList, v7, v8);
      sub_B170A0();
    }
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v10];
    if ( !EntitiyList )
      goto LABEL_15;
    if ( (HIDWORD(EntitiyList->bounds) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)EntitiyList, 0LL);
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  __int64 v10; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_40FF86B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FF86B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(EntitiyList, v7, v8);
      sub_B170A0();
    }
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v10];
    if ( !EntitiyList )
      goto LABEL_14;
    if ( HIDWORD(EntitiyList->bounds) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)EntitiyList, 0LL);
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  WebViewManager_o *v11; // x0
  UserQuestMaster_o *EntityFromId; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  UserQuestMaster_o *v16; // x20
  __int64 v17; // x23
  ShopReleaseEntity_o *v18; // x21
  int64_t UserId; // x22
  int32_t condValue; // w0

  if ( (byte_40FF869 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF869 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList(MasterData_WarQuestSelectionMaster, this->fields.id, 0LL),
        (v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (EntityFromId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v11,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_B170D4();
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = EntityFromId;
  v17 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= max_length )
    {
      sub_B17100(EntityFromId, v13, v14);
      sub_B170A0();
    }
    v18 = EntitiyList->m_Items[v17];
    if ( !v18 )
      goto LABEL_22;
    if ( v18->fields.condType == 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      condValue = ShopReleaseEntity__get_condValue(v18, 0LL);
      if ( !v16 )
        goto LABEL_22;
      EntityFromId = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v16, UserId, condValue, 0LL);
      if ( EntityFromId )
      {
        EntityFromId = (UserQuestMaster_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)EntityFromId, 0LL);
        if ( !(_DWORD)EntityFromId )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v17 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isQuestNotClear(
        ShopEntity_o *this,
        int32_t *questId,
        bool checkExpired,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FF866 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FF866 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopReleaseMaster__isQuestNotClearSet(MasterData_WarQuestSelectionMaster, this->fields.id, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x3
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FF868 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FF868 = 1;
  }
  questId = 0;
  v6 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    return ShopReleaseMaster__isQuestNotClearSet(MasterData_WarQuestSelectionMaster, this->fields.id, &questId, 0LL)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v9);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v13; // x20
  int v14; // w23
  bool v15; // w24
  int64_t UserId; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v18; // x21
  int32_t ClearNum; // w0

  if ( (byte_40FF867 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF867 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v13 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
    v14 = 0;
    v15 = !checkExpired;
    do
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v13 )
        goto LABEL_19;
      EntityFromId = UserQuestMaster__getEntityFromId(v13, UserId, questId, 0LL);
      v18 = EntityFromId;
      if ( EntityFromId == 0LL || v15 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v18 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v18, 0LL);
        if ( !ClearNum )
          return ClearNum;
      }
      ++v14;
    }
    while ( v14 < max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79E3 & 1) == 0 )
  {
    sub_B16FFC(&ShopEntity___c_TypeInfo, v1);
    byte_40F79E3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ShopEntity___c___ctor(ShopEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ShopEntity___c___GetAnotherPayItemIds_b__58_0(
        ShopEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_40F79E4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F79E4 = 1;
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


bool __fastcall ShopEntity___c___GetIsAlreadyInPossession_b__49_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B170D4();
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B170D4();
  return v->fields.giftType == 1;
}