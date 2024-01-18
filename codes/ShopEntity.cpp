void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D509 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418D509 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v14; // x1
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v16; // x21
  int masterCheckName_high; // w8
  __int64 v18; // x21
  __int64 v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  __int64 v21; // x20
  struct System_String_o *v22; // x21
  __int64 v23; // x21
  struct System_String_o *emptyMessage; // x22
  WarEntity_o *v26; // [xsp+8h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418D502 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, imageId);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418D502 = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  *imageId = this->fields.imageId;
  if ( this->fields.purchaseType != 6 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, entity->fields.priority, 0LL);
  if ( !DataById )
    return (char)DataById;
  v16 = DataById;
  if ( DataById->fields.type != 5 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v26,
          v16->fields.objectId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
LABEL_25:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_40;
  masterCheckName_high = HIDWORD(Instance->fields.masterCheckName);
  if ( masterCheckName_high == 2 )
  {
    if ( !v26 )
      goto LABEL_40;
    emptyMessage = v26->fields.emptyMessage;
    v23 = *(_QWORD *)&v26->fields.startType;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = emptyMessage;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v26 )
      {
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v22 = v26->fields.emptyMessage;
        v21 = *(_QWORD *)&v26->fields.startType;
LABEL_34:
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v20);
        *(_QWORD *)&v30.fields.currentCryptoKey = v22;
        *(_QWORD *)&v30.fields.fakeValue = v21;
        *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
        goto LABEL_39;
      }
LABEL_40:
      sub_B2C434(Instance, v12);
    }
  }
  else if ( masterCheckName_high == 1 )
  {
    if ( !v26 )
      goto LABEL_40;
    v19 = *(_QWORD *)&v26->fields.parentWarId;
    v18 = *(_QWORD *)&v26->fields.flag;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v28.fields.currentCryptoKey = v19;
    *(_QWORD *)&v28.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v26 )
      {
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v22 = *(struct System_String_o **)&v26->fields.parentWarId;
        v21 = *(_QWORD *)&v26->fields.flag;
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
  __int64 v6; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D506 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&StringLiteral_16256/*"addMessage"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418D506 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16256/*"addMessage"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_B2C434(0LL, v6);
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
  System_Xml_Schema_XmlSchemaObject_o *v12; // x19
  ShopEntity___c_c *v13; // x0
  __int64 v14; // x9
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__58_0; // x20
  __int64 v17; // x9
  Il2CppObject *v18; // x21
  struct ShopEntity___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_int__o *v26; // x0
  __int64 v27; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D4E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, method);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B2C35C(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v8);
    sub_B2C35C(&ShopEntity___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16353/*"anotherItemIds"*/, v10);
    byte_418D4E8 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16353/*"anotherItemIds"*/,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v12 = value;
    if ( !value )
      return 0LL;
    v13 = ShopEntity___c_TypeInfo;
    if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
      v13 = ShopEntity___c_TypeInfo;
    }
    v14 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (System_Collections_Generic_List_object__c *)v12->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_14:
      sub_B2C728(v12);
      return 0LL;
    }
    static_fields = v13->static_fields;
    _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__58_0;
    if ( _9__58_0 )
    {
      v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (System_Collections_Generic_List_object__c *)v12->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_14;
      }
    }
    else
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__58_0,
        v18,
        Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
        (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
      v19 = ShopEntity___c_TypeInfo->static_fields;
      v19->__9__58_0 = (struct System_Converter_object__int__o *)_9__58_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v19->__9__58_0,
        (System_Int32_array **)_9__58_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                      (System_Collections_Generic_List_BattleActionData_HealData__o *)v12,
                                                      (System_Converter_T__TOutput__o *)_9__58_0,
                                                      (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( !v26 )
      sub_B2C434(0LL, v27);
    return System_Collections_Generic_List_int___ToArray(
             v26,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  ShopEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&PayType_Type_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16356/*"anotherPayType"*/, v4);
    byte_418D4E9 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16356/*"anotherPayType"*/,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B2C434(0LL, v6);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B2C728(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v7, v8);
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
  __int64 v4; // x8
  CommonConsumeEntity_array *v5; // x19
  __int64 v6; // x22
  int32_t v7; // w20
  CommonConsumeEntity_o *v8; // x21
  int v9; // w9
  __int64 v12; // x0

  if ( this->fields.payType != 14 )
    return 0;
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(this, method);
  if ( !CommonConsumeEntities )
    return 0;
  v4 = *(_QWORD *)&CommonConsumeEntities->max_length;
  v5 = CommonConsumeEntities;
  if ( (int)v4 < 1 )
    return 0;
  v6 = 0LL;
  v7 = 0;
  do
  {
    if ( (unsigned int)v6 >= (unsigned int)v4 )
    {
      v12 = sub_B2C460(CommonConsumeEntities);
      sub_B2C400(v12, 0LL);
    }
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_B2C434(CommonConsumeEntities, v3);
    if ( v8->fields.num < 1 )
    {
      v9 = 0;
    }
    else
    {
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserHasNum(v5->m_Items[v6], 0LL);
      v4 = *(_QWORD *)&v5->max_length;
      v9 = (int)CommonConsumeEntities / v8->fields.num;
    }
    if ( v9 < v7 || (_DWORD)v6++ == 0 )
      v7 = v9;
  }
  while ( (int)v6 < (int)v4 );
  return v7;
}


CommonConsumeEntity_array *__fastcall ShopEntity__GetCommonConsumeEntities(
        ShopEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1
  __int64 ItemID; // x0
  __int64 v7; // x1

  if ( (byte_418D508 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418D508 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v5);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(ItemID, v7);
  return CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_418D4EE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_418D4EE = 1;
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

  if ( (byte_418D4CF & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v4);
    byte_418D4CF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x1
  ShopEntity_o *v7; // x0
  int32_t *v8; // x1
  int32_t *v9; // x2
  const MethodInfo *v10; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&long_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_18890/*"freeShopReleaseDate"*/, v4);
    byte_418D4D0 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18890/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B2C434(0LL, v6);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B2C728(value);
        ShopEntity__SetSvtIdAndCostumeId(v7, v8, v9, v10);
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
  void *Instance; // x0
  __int64 v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v39; // x1
  unsigned int v40; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  const MethodInfo *v42; // x1
  ServantEntity_o *v43; // x21
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t setNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418D4EF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, nameText);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_14712/*"UNIT_INFO"*/, v18);
    sub_B2C35C(&StringLiteral_12055/*"SERVANT_UNIT"*/, v19);
    sub_B2C35C(&StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/, v20);
    sub_B2C35C(&StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418D4EF = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_B2C2F8(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (void *)ShopEntity__get_TargetId(this, v39);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v40 = *((_DWORD *)Instance + 12);
      if ( v40 <= 0xD && ((1 << v40) & 0x2026) != 0 )
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
      v34 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
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
      v31 = &StringLiteral_14712/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (void *)ShopEntity__get_TargetId(this, v42),
                !v41)
            || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v41,
                             (int32_t)Instance,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_47:
            sub_B2C434(Instance, v37);
          }
          v43 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v43, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_12055/*"SERVANT_UNIT"*/;
          }
          else if ( ServantEntity__get_IsServantEquip(v43, 0LL) )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_34:
          v44 = LocalizationManager__Get((System_String_o *)*v31, 0LL);
          setNum = this->fields.setNum;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v46 = System_String__Format(v44, v45, 0LL);
          *countText = v46;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)countText,
            (System_Int32_array **)v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          return;
        }
LABEL_11:
        v32 = (_DWORD)this + 64;
LABEL_12:
        v33 = System_Int32__ToString(v32, 0LL);
        if ( v33 )
          v34 = v33;
        else
          v34 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v34;
      }
      else
      {
LABEL_16:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        v34 = (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_17:
      v35 = countText;
LABEL_18:
      sub_B2C2F8((BattleServantConfConponent_o *)v35, (System_Int32_array **)v34, v24, v25, v26, v27, v28, v29);
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
  int64_t Instance; // x0
  __int64 v16; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantMaster_o *v18; // x22
  UserServantStorageMaster_o *v19; // x23
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v21; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x24
  Il2CppObject *v24; // x25
  struct ShopEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int64_t v32; // x21
  int64_t v33; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v35; // x8
  bool v36; // w9
  int64_t v37; // x20
  unsigned __int64 v38; // x25
  bool v39; // w11
  int32_t v40; // w28
  int v41; // w8
  unsigned int v42; // w9
  __int64 v43; // x10
  int v44; // w8
  unsigned int v45; // w26
  __int64 v46; // x8
  __int64 v47; // x19
  __int64 v48; // x23
  int v49; // w8
  unsigned int v50; // w26
  __int64 v51; // x8
  __int64 v52; // x19
  __int64 v53; // x23
  __int64 v55; // x0
  bool v56; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_418D4DF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_UserPresentBoxEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v13);
    sub_B2C35C(&ShopEntity___c_TypeInfo, v14);
    byte_418D4DF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v18 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v19 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(
                                                 MasterData_WarQuestSelectionMaster,
                                                 Instance,
                                                 0LL);
  v21 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v21 = ShopEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v24,
      Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v25 = ShopEntity___c_TypeInfo->static_fields;
    v25->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  Instance = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                        VaildList,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v18
    || (v32 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList(v18, 0LL), !v19)
    || (v33 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v19, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_54:
    sub_B2C434(Instance, v16);
  }
  v35 = *(_QWORD *)&targetIds->max_length;
  v36 = v32 == 0;
  if ( (int)v35 < 1 )
    return 0;
  v37 = Instance;
  v38 = 0LL;
  v39 = v36 || isWithoutPresents;
  v56 = v36 || isWithoutPresents;
  while ( 1 )
  {
    if ( v38 >= (unsigned int)v35 )
      goto LABEL_55;
    v40 = targetIds->m_Items[v38 + 1];
    if ( !v39 )
    {
      v41 = *(_DWORD *)(v32 + 24);
      if ( v41 >= 1 )
        break;
    }
LABEL_31:
    if ( !v33 )
      goto LABEL_54;
    v44 = *(_DWORD *)(v33 + 24);
    if ( v44 >= 1 )
    {
      v45 = 0;
      while ( v45 < v44 )
      {
        v46 = *(_QWORD *)(v33 + 8LL * (int)v45 + 32);
        if ( !v46 )
          goto LABEL_54;
        v48 = *(_QWORD *)(v46 + 80);
        v47 = *(_QWORD *)(v46 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v57.fields.currentCryptoKey = v48;
        *(_QWORD *)&v57.fields.fakeValue = v47;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
        if ( v40 == (_DWORD)Instance )
          return 1;
        v44 = *(_DWORD *)(v33 + 24);
        if ( (int)++v45 >= v44 )
          goto LABEL_41;
      }
LABEL_55:
      v55 = sub_B2C460(Instance);
      sub_B2C400(v55, 0LL);
    }
LABEL_41:
    if ( !v37 )
      goto LABEL_54;
    v49 = *(_DWORD *)(v37 + 24);
    if ( v49 >= 1 )
    {
      v50 = 0;
      while ( v50 < v49 )
      {
        v51 = *(_QWORD *)(v37 + 8LL * (int)v50 + 32);
        if ( !v51 )
          goto LABEL_54;
        v53 = *(_QWORD *)(v51 + 80);
        v52 = *(_QWORD *)(v51 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v53;
        *(_QWORD *)&v58.fields.fakeValue = v52;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL);
        if ( v40 == (_DWORD)Instance )
          return 1;
        v49 = *(_DWORD *)(v37 + 24);
        if ( (int)++v50 >= v49 )
          goto LABEL_51;
      }
      goto LABEL_55;
    }
LABEL_51:
    LODWORD(v35) = targetIds->max_length;
    v39 = v56;
    if ( (__int64)++v38 >= (int)v35 )
      return 0;
  }
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= v41 )
      goto LABEL_55;
    v43 = *(_QWORD *)(v32 + 8LL * (int)v42 + 32);
    if ( !v43 )
      goto LABEL_54;
    if ( v40 == *(_DWORD *)(v43 + 76) )
      return 1;
    if ( (int)++v42 >= v41 )
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_418D4DE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4DE = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && !UserShopEntity__get_IsReceivedShopItem(EntityDefinitely, 0LL);
}


int32_t __fastcall ShopEntity__GetItemCount(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B2C434(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v4; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B2C434(this, method);
  if ( !itemIds->max_length )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  return itemIds->m_Items[1];
}


int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v5; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B2C434(this, num);
  if ( itemIds->max_length <= num )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x22
  const MethodInfo *v20; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v24; // x1
  int32_t recordNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418D4F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_SetItemMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418D4F1 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v24);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      SetItemMaster__GetSum(
        MasterData_WarQuestSelectionMaster,
        buyItemNum,
        buyServantNum,
        buyServantEquipNum,
        buyCmdCodeNum,
        &recordNum,
        (int32_t)Instance,
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v20),
              !v19)
          || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v19,
                                            (int32_t)Instance,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_B2C434(Instance, v18);
        }
        IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
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
  if ( (byte_418D505 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21373/*"overwriteName"*/, defaultValue);
    byte_418D505 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21373/*"overwriteName"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ShopEntity__GetPayType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


int32_t __fastcall ShopEntity__GetPrice(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8
  __int64 v4; // x0

  prices = this->fields.prices;
  if ( !prices )
    sub_B2C434(this, method);
  if ( !prices->max_length )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
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
    return dword_31C35D0[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_31C36F0[v2];
}


int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8
  __int64 v5; // x0

  prices = this->fields.prices;
  if ( !prices )
    sub_B2C434(this, num);
  if ( prices->max_length <= num )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418D4ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4ED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantEntity_o *result; // x0
  __int64 v7; // x1
  int32_t fakeValue; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o *v10; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v12; // x0

  if ( (byte_418D4FD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4FD = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)result, this->fields.id, 0LL);
  if ( result )
  {
    fakeValue = result->fields.id.fields.fakeValue;
    if ( fakeValue >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= fakeValue )
        {
          v12 = sub_B2C460(result);
          sub_B2C400(v12, 0LL);
        }
        v10 = (ShopReleaseEntity_o *)*((_QWORD *)&result->fields.baseSvtId.fields.currentCryptoKey + v9);
        if ( !v10 )
          goto LABEL_18;
        if ( v10->fields.condType == 8 )
          break;
        if ( (int)++v9 >= fakeValue )
          return 0LL;
      }
      result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( result )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)result,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        result = (ServantEntity_o *)ShopReleaseEntity__get_condValue(v10, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
          return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)result,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
LABEL_18:
      sub_B2C434(result, v7);
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
  __int64 v7; // x1
  System_String_o *v8; // x0
  int32_t flag; // w8
  __int64 *v11; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&StringLiteral_8380/*"LIMITED_SHOP_REMAIN_DAYS"*/, v3);
    sub_B2C35C(&StringLiteral_8786/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v4);
    sub_B2C35C(&StringLiteral_21760/*"remainDays"*/, v5);
    byte_418D4EA = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21760/*"remainDays"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v11 = &StringLiteral_8380/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v11 = &StringLiteral_8786/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v11, 0LL);
  }
  if ( !value )
    sub_B2C434(0LL, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  return System_Int32__Parse(v8, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x22
  const MethodInfo *v23; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  ShopGroupMaster_o *v26; // x24
  const MethodInfo *v27; // x1
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v29; // x1
  bool v30; // [xsp+0h] [xbp-50h] BYREF
  bool equip; // [xsp+4h] [xbp-4Ch] BYREF
  bool servant; // [xsp+8h] [xbp-48h] BYREF
  bool item; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418D4F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_SetItemMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418D4F0 = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  v30 = 0;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v29);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_31;
        SetItemMaster__GetSum(
          MasterData_WarQuestSelectionMaster,
          buyItemNum,
          buyServantNum,
          buyServantEquipNum,
          buyCmdCodeNum,
          recordNum,
          (int32_t)Instance,
          0LL);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v26 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v27);
        if ( !v26 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(v26, (int32_t)Instance, &item, &servant, &equip, &v30, 0LL);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( v30 )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v23),
          !v22)
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v22,
                                        (int32_t)Instance,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_B2C434(Instance, v21);
    }
    IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
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

  if ( (byte_418D4D1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418D4D1 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_418D4D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4D7 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int64_t AnotherPayItemIds; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v12; // x1
  char v13; // w8
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v17; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D4E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418D4E6 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_24;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v7);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
  {
    v17 = sub_B2C460(AnotherPayItemIds);
    sub_B2C400(v17, 0LL);
  }
  v10 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v10 < 1 )
    goto LABEL_24;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B2C434(AnotherPayItemIds, v9);
  UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, AnotherPayItemIds, v10, 0LL);
  v13 = (char)entity;
  if ( !entity )
    return v13 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v12) )
  {
LABEL_24:
    v13 = 0;
    return v13 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)AnotherPayItemIds,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       AnotherPayItemIds,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
    v13 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v13 = 1;
  return v13 & 1;
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4E7 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_22978/*"useAnotherPayCommonReleaseId"*/, v6);
    byte_418D4E7 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22978/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v8 = (Il2CppObject *)value;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v9 = System_Convert__ToInt32(v8, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v11);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v9, 0LL, 0, 0LL);
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
  if ( (byte_418D4D9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, nowTime);
    byte_418D4D9 = 1;
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
  int64_t Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v8; // w8
  int32_t limitNum; // w9
  bool v10; // w10
  bool v11; // w8

  if ( (byte_418D4EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4EB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              Instance,
                              this->fields.baseShopId,
                              0LL)) == 0 )
  {
LABEL_12:
    sub_B2C434(Instance, v6);
  }
  v8 = *(_DWORD *)(Instance + 28);
  limitNum = this->fields.limitNum;
  v10 = v8 > 0;
  v11 = v8 >= limitNum;
  if ( limitNum >= 1 )
    return v11;
  else
    return v10;
}


bool __fastcall ShopEntity__IsCondType_34871112(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t datalist_high; // w8
  int32_t limitNum; // w9
  bool v10; // w10
  bool v11; // w8

  if ( (byte_418D4EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, userId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4EC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  datalist_high = HIDWORD(Instance->fields.datalist);
  limitNum = this->fields.limitNum;
  v10 = datalist_high > 0;
  v11 = datalist_high >= limitNum;
  if ( limitNum >= 1 )
    return v11;
  else
    return v10;
}


bool __fastcall ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  bool v11; // w0
  const MethodInfo *v12; // x1
  int32_t svtId[2]; // [xsp+0h] [xbp-20h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v5);
    byte_418D4D5 = 1;
  }
  *(_QWORD *)svtId = 0LL;
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &svtId[1], svtId, v8);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  v11 = ServantCostumeReleaseMaster__checkItemHaving((ServantCostumeReleaseMaster_o *)Instance, svtId[1], svtId[0], 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v13; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_418D4D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418D4D6 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
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
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserEventMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &v16,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)v16;
  if ( !v16 )
    goto LABEL_29;
  v13 = 1;
  if ( !UserEventEntity__getEventFlag(v16, 1, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_29:
    sub_B2C434(Instance, v11);
  }
  return v13;
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v13; // x20
  const MethodInfo *v14; // x1
  int v15; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  WarEntity_c *v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *v19; // x19
  char v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_418D507 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&WarEntity_TypeInfo, v9);
    byte_418D507 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14),
        !v13)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v13, (int32_t)Instance, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (v15 = (int)Instance, (Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list) == 0LL) )
  {
    sub_B2C434(Instance, v11);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v19 = Enumerator;
  v20 = 0;
  while ( 1 )
  {
    if ( !v19 )
      goto LABEL_36;
    klass = v19->klass;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AC5258(v19, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v19,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = v19->klass;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_13:
      v24 = sub_AC5258(v19, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                  v19,
                                                                  *(_QWORD *)(v24 + 8));
    if ( !Enumerator )
      sub_B2C434(0LL, v25);
    v17 = WarEntity_TypeInfo;
    v26 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[v26 - 1] != WarEntity_TypeInfo )
    {
      sub_B2C728(Enumerator);
LABEL_36:
      sub_B2C434(Enumerator, v17);
    }
    if ( LODWORD(Enumerator[6].klass) == v15 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v20 |= (unsigned __int8)Enumerator;
    }
  }
  v32 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_32:
    v35 = sub_AC5258(v19, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v19, *(_QWORD *)(v35 + 8));
  return v20 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&StringLiteral_21760/*"remainDays"*/, v3);
    byte_418D4E5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21760/*"remainDays"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_B2C434(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v7 = System_Int32__Parse(v6, 0LL);
  if ( v7 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v7;
}


bool __fastcall ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1

  if ( (byte_418D4D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v5);
    byte_418D4D2 = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)script,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ShopEntity__GetFreeShopCondId(
                                                                                                 this,
                                                                                                 v8),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_10:
    sub_B2C434(script, method);
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_418D4E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4E1 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_418D4E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4E2 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.id,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&StringLiteral_21760/*"remainDays"*/, v3);
    byte_418D4E3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21760/*"remainDays"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_B2C434(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v7 = System_Int32__Parse(v6, 0LL);
  if ( v7 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v7;
}


bool __fastcall ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D4E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&StringLiteral_21760/*"remainDays"*/, v3);
    byte_418D4E4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21760/*"remainDays"*/,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_B2C434(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  v7 = System_Int32__Parse(v6, 0LL);
  if ( v7 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v7;
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  char v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D501 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D501 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_B2C434(Instance, v13);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !v18.fields.current )
      sub_B2C434(v14, v15);
    if ( HIDWORD(v18.fields.current[1].klass) == 37 )
    {
      v16 = 1;
      v17 = 4;
      goto LABEL_19;
    }
  }
  v16 = 0;
  v17 = 2;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return (v17 == 4) & v16;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *v13; // x21
  bool IsTimeStatusRecord; // w0
  bool v15; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_418D4D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418D4D8 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v13 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_28:
    sub_B2C434(Instance, v11);
  }
  v15 = 1;
  if ( !UserEventEntity__getEventFlag(v13, 1, 0LL) )
    goto LABEL_22;
  return v15;
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
  int64_t Instance; // x0
  const MethodInfo *v34; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestMaster_o *v36; // x22
  UserShopMaster_o *v37; // x21
  UserShopEntity_o *v38; // x21
  int64_t updatedAt; // x27
  int64_t v40; // x25
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  bool v43; // w24
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x23
  ShopEntity___c_c *v46; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x24
  int64_t v49; // x21
  char v50; // w8
  Il2CppObject *v51; // x25
  struct ShopEntity___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int64_t v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v61; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x23
  int max_length; // w8
  unsigned int v64; // w25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v65; // x28
  ShopEntity___c_c *v66; // x0
  UserShopEntity_o *v67; // x21
  struct ShopEntity___c_StaticFields *v68; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_1; // x22
  bool v70; // w26
  Il2CppObject *v71; // x24
  struct ShopEntity___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  ShopEntity___c_c *v79; // x0
  struct ShopEntity___c_StaticFields *v80; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_2; // x22
  bool v82; // w26
  Il2CppObject *v83; // x24
  struct ShopEntity___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x22
  ShopEntity___c_c *v92; // x8
  struct ShopEntity___c_StaticFields *v93; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__36_3; // x23
  bool v95; // w26
  Il2CppObject *v96; // x24
  struct ShopEntity___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  const MethodInfo_21524A8 *v104; // x3
  bool v105; // w21
  int32_t FreeShopCondId; // w0
  bool result; // w0
  __int64 v108; // x0
  ShopBuyItemListViewItemDraw_o *v109; // x0
  UISprite_o *v110; // x1
  System_String_o *v111; // x2
  const MethodInfo *v112; // x3
  UserShopEntity_o *v113; // [xsp+8h] [xbp-78h]
  bool v114; // [xsp+14h] [xbp-6Ch]
  int64_t v115; // [xsp+20h] [xbp-60h] BYREF
  __int64 v116; // [xsp+28h] [xbp-58h]
  System_Nullable_long__o v117; // 0:x0.16

  if ( (byte_418D4D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_UserQuestEntity___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v10);
    sub_B2C35C(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v11);
    sub_B2C35C(&Method_System_Func_UserQuestEntity__long___ctor__, v12);
    sub_B2C35C(&Method_System_Func_UserQuestEntity__bool___ctor__, v13);
    sub_B2C35C(&System_Func_UserQuestEntity__long__TypeInfo, v14);
    sub_B2C35C(&System_Func_CommonReleaseEntity__bool__TypeInfo, v15);
    sub_B2C35C(&System_Func_UserQuestEntity__bool__TypeInfo, v16);
    sub_B2C35C(&long_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v20);
    sub_B2C35C(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&Method_System_Nullable_long__GetValueOrDefault__, v23);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v24);
    sub_B2C35C(&Method_System_Nullable_long__get_HasValue__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v27);
    sub_B2C35C(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v28);
    sub_B2C35C(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v29);
    sub_B2C35C(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v30);
    sub_B2C35C(&ShopEntity___c_TypeInfo, v31);
    sub_B2C35C(&StringLiteral_18890/*"freeShopReleaseDate"*/, v32);
    byte_418D4D4 = 1;
  }
  v115 = 0LL;
  v116 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v36 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v37 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v37 )
    goto LABEL_79;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v37, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_79;
  v38 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_79;
  updatedAt = v38->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Instance,
                        (System_Type_o *)StringLiteral_18890/*"freeShopReleaseDate"*/,
                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_79;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v40 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance);
    v43 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v41) || UserShopEntity__get_IsReturnRarePriShop(v38, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v42);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_79;
    List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
    if ( List )
    {
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v114 = v43;
      v46 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v46 = ShopEntity___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      v113 = v38;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v49 = v40;
          if ( !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v49 = v40;
        }
        v51 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_0,
          v51,
          Method_ShopEntity___c__IsPaidExchange_b__36_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
        v52 = ShopEntity___c_TypeInfo->static_fields;
        v52->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v52->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        v40 = v49;
      }
      v59 = v40;
      v60 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v45,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v61 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v60,
              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v62,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v61 )
        goto LABEL_79;
      max_length = v61->max_length;
      if ( max_length >= 1 )
      {
        v64 = 0;
        while ( 1 )
        {
          if ( v64 >= max_length )
          {
            v108 = sub_B2C460(Instance);
            sub_B2C400(v108, 0LL);
          }
          v65 = v61->m_Items[v64];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v65 || !v36 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v36, Instance, (int32_t)v65[1].klass, 0LL);
          if ( Instance )
          {
            if ( !v62 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v62,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
          }
          max_length = v61->max_length;
          if ( (int)++v64 >= max_length )
            goto LABEL_42;
        }
LABEL_79:
        sub_B2C434(Instance, v34);
      }
LABEL_42:
      v115 = 0LL;
      v116 = 0LL;
      if ( !v62 )
        goto LABEL_79;
      v43 = v114;
      v40 = v59;
      if ( v62->fields._size < 1 )
        goto LABEL_76;
      v66 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v67 = v113;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v66 = ShopEntity___c_TypeInfo;
        }
      }
      else
      {
        v67 = v113;
      }
      v68 = v66->static_fields;
      _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v68->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v70 = v114;
          if ( !v66->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v66);
            v68 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v70 = v114;
        }
        v71 = (Il2CppObject *)v68->__9;
        _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_1,
          v71,
          Method_ShopEntity___c__IsPaidExchange_b__36_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v72 = ShopEntity___c_TypeInfo->static_fields;
        v72->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v72->__9__36_1,
          (System_Int32_array **)_9__36_1,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        v43 = v70;
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)v62,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_76;
      v79 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v79 = ShopEntity___c_TypeInfo;
      }
      v80 = v79->static_fields;
      _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v80->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v82 = v43;
          if ( !v79->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v79);
            v80 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v82 = v43;
        }
        v83 = (Il2CppObject *)v80->__9;
        _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_2,
          v83,
          Method_ShopEntity___c__IsPaidExchange_b__36_2__,
          (const MethodInfo_2711C04 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v84 = ShopEntity___c_TypeInfo->static_fields;
        v84->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v84->__9__36_2,
          (System_Int32_array **)_9__36_2,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90);
        v43 = v82;
      }
      v91 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v62,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v92 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v92 = ShopEntity___c_TypeInfo;
      }
      v93 = v92->static_fields;
      _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v93->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v95 = v43;
          if ( !v92->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v92);
            v93 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v95 = v43;
        }
        v96 = (Il2CppObject *)v93->__9;
        _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
          _9__36_3,
          v96,
          Method_ShopEntity___c__IsPaidExchange_b__36_3__,
          (const MethodInfo_2712F70 *)Method_System_Func_UserQuestEntity__long___ctor__);
        v97 = ShopEntity___c_TypeInfo->static_fields;
        v97->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v97->__9__36_3,
          (System_Int32_array **)_9__36_3,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103);
        v43 = v95;
      }
      *(_QWORD *)&v117.fields.has_value = System_Linq_Enumerable__Min_UserQuestEntity_(
                                            v91,
                                            (System_Func_TSource__long__o *)_9__36_3,
                                            (const MethodInfo_1A9340C *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      v117.fields.value = (int64_t)&v115;
      System_Nullable_long____ctor(v117, Method_System_Nullable_long___ctor__, v104);
      if ( (_BYTE)v116 )
        v105 = v115 > v67->fields.updatedAt;
      else
LABEL_76:
        v105 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v34);
      v50 = v105 | !CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v50 = 1;
    }
    return (v43 || updatedAt < v40) | v50;
  }
  else
  {
    sub_B2C728(Instance);
    ShopBuyItemListViewItemDraw__SetSpriteName(v109, v110, v111, v112);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_418D4DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D4DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v10; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v12; // x8
  UserQuestMaster_o *v13; // x19
  unsigned __int64 v14; // x24
  int32_t v15; // w21
  __int64 v16; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D4DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4DC = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         Instance,
                         this->fields.baseShopId,
                         0LL);
    if ( EntityDefinitely )
    {
      v10 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_24;
      v12 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = (UserQuestMaster_o *)Instance;
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
          {
            v16 = sub_B2C460(Instance);
            sub_B2C400(v16, 0LL);
          }
          v15 = targetIds->m_Items[v14 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v13 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v13, &entity, Instance, v15, 0LL);
          if ( !entity )
            goto LABEL_22;
          LODWORD(v12) = targetIds->max_length;
          if ( (__int64)++v14 >= (int)v12 )
            goto LABEL_21;
        }
LABEL_24:
        sub_B2C434(Instance, v7);
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
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v16; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v19; // x23
  struct ShopEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *targetIds; // x22
  __int64 v28; // x8
  int64_t v29; // x20
  unsigned __int64 v30; // x23
  int64_t v31; // x25
  int32_t v32; // w21
  int v33; // w8
  __int64 v34; // x9
  __int64 v35; // x10
  __int64 v37; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D4E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_UserPresentBoxEntity___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v7);
    sub_B2C35C(&System_Predicate_UserPresentBoxEntity__TypeInfo, v8);
    sub_B2C35C(&Method_ShopEntity___c__IsServantGet_b__50_0__, v9);
    sub_B2C35C(&ShopEntity___c_TypeInfo, v10);
    byte_418D4E0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v12 = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_39;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(v12, UserId, 0LL);
  v16 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v16 = ShopEntity___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v19,
      Method_ShopEntity___c__IsServantGet_b__50_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v20 = ShopEntity___c_TypeInfo->static_fields;
    v20->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  UserId = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                      VaildList,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_39:
    sub_B2C434(UserId, v14);
  v28 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v28 < 1 )
    return 0;
  v29 = UserId;
  v30 = 0LL;
  v31 = UserId + 32;
  while ( 1 )
  {
    if ( v30 >= (unsigned int)v28 )
      goto LABEL_38;
    v32 = targetIds->m_Items[v30 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    UserId = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v32, 0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v29 )
    {
      v33 = *(_DWORD *)(v29 + 24);
      if ( v33 >= 1 )
      {
        v34 = 0LL;
        while ( (unsigned int)v34 < v33 )
        {
          v35 = *(_QWORD *)(v31 + 8 * v34);
          if ( !v35 )
            goto LABEL_39;
          if ( v32 == *(_DWORD *)(v35 + 76) )
            return 1;
          if ( (int)++v34 >= v33 )
            goto LABEL_35;
        }
LABEL_38:
        v37 = sub_B2C460(UserId);
        sub_B2C400(v37, 0LL);
      }
    }
LABEL_35:
    LODWORD(v28) = targetIds->max_length;
    if ( (__int64)++v30 >= (int)v28 )
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

  if ( (byte_418D4D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation);
    sub_B2C35C(&StringLiteral_18887/*"freeShopCondId"*/, v5);
    byte_418D4D3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18887/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v9; // x1

  if ( (byte_418D4DD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4DD = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_13;
  if ( this->fields.limitNum < 1 )
  {
LABEL_14:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B2C434(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
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
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_5;
  if ( !targetIds->max_length )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_B2C434(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_44369268((System_String_o *)this, 0, this->fields.id - 2, 0LL);
  *svtId = System_Int32__Parse(v8, 0LL);
  v9 = System_String__Substring(v7, v7->fields.m_stringLength - 2, 0LL);
  *costumeId = System_Int32__Parse(v9, 0LL);
}


bool __fastcall ShopEntity__TryGetClosedMessage(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_418D4DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D4DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  return ShopReleaseMaster__TryGetClosedMessage(
           (ShopReleaseMaster_o *)Instance,
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
  __int64 v5; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  int32_t TargetId; // w0

  if ( (byte_418D4F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4F2 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (WebViewManager_o *)ShopEntity__get_TargetId(this, v7),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B2C434(Instance, v5);
  }
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v8);
  return !ItemMaster__isFriendPoint(MasterData_WarQuestSelectionMaster, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t *p_lookup; // x8
  int32_t TargetId; // w0
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  UserItemMaster_o *v15; // x20
  int64_t UserId; // x21
  const MethodInfo *v17; // x1

  if ( (byte_418D4F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4F3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !ItemMaster__isMana(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v10);
    if ( ItemMaster__isRarePri(MasterData_WarQuestSelectionMaster, TargetId, 0LL) )
    {
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( Instance )
      {
        p_lookup = (int32_t *)&Instance[1].fields.masterDataBytes + 1;
        return *p_lookup;
      }
    }
    else
    {
      v14 = ShopEntity__get_TargetId(this, v13);
      if ( ItemMaster__isStone(MasterData_WarQuestSelectionMaster, v14, 0LL) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( Instance )
        {
          p_lookup = (int32_t *)&Instance[1].fields.lookup;
          return *p_lookup;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v15 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v17);
          if ( v15 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(v15, UserId, (int32_t)Instance, 0LL);
            if ( Instance )
            {
              p_lookup = (int32_t *)&Instance->fields.datalist + 1;
              return *p_lookup;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(Instance, v7);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_22;
  p_lookup = (int32_t *)&Instance[1].fields.masterDataBytes;
  return *p_lookup;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  WarEntity_o *v17; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_418D504 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D504 = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v11);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_22:
    sub_B2C434(Instance, v10);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v15);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return this->fields.name;
  if ( !entity )
    goto LABEL_22;
  if ( entity->fields.bannerId != 29 )
    return this->fields.name;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &v17,
          entity->fields.flag,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_22;
  if ( ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v17, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v16);
  else
    return this->fields.name;
}


int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B2C434(this, id);
  if ( targetIds->max_length <= id )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B2C434(this, method);
  if ( !targetIds->max_length )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B2C434(this, method);
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
  int64_t Instance; // x0
  __int64 v9; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  QuestMaster_o *v11; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v13; // x22
  int max_length; // w28
  int32_t v15; // w24
  const MethodInfo *v16; // x2
  int v17; // w8
  int64_t v18; // x25
  unsigned int v19; // w26
  __int64 v20; // x27
  int v21; // w23
  _BOOL4 v22; // w25
  int64_t UserId; // x26
  const MethodInfo *v24; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  UserQuestEntity_o *v28; // x26
  QuestEntity_o *Entity; // x0
  const MethodInfo *v30; // x1
  __int64 v32; // x0
  int64_t v33; // [xsp+8h] [xbp-58h]

  if ( (byte_418D4F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D4F4 = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v11 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_42;
    v13 = (QuestReleaseMaster_o *)Instance;
    max_length = targetIds->max_length;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    v33 = Instance;
    if ( max_length >= 1 )
    {
      if ( v13 )
      {
        v15 = 0;
        while ( 1 )
        {
          Instance = (int64_t)QuestReleaseMaster__getListByType(v13, 13, 0LL);
          if ( !Instance )
            break;
          v17 = *(_DWORD *)(Instance + 24);
          v18 = Instance;
          if ( v17 < 1 )
          {
LABEL_24:
            v22 = 1;
          }
          else
          {
            v19 = 0;
            while ( 1 )
            {
              if ( v19 >= v17 )
              {
                v32 = sub_B2C460(Instance);
                sub_B2C400(v32, 0LL);
              }
              v20 = *(_QWORD *)(v18 + 8LL * (int)v19 + 32);
              if ( !v20 )
                goto LABEL_42;
              v21 = *(_DWORD *)(v20 + 16);
              Instance = ShopEntity__getTargetId(this, v15, v16);
              if ( v21 == (_DWORD)Instance )
              {
                if ( !v11 )
                  goto LABEL_42;
                Instance = (int64_t)QuestMaster__getQuestEntity(v11, *(_DWORD *)(v20 + 16), 0LL);
                if ( !Instance )
                  goto LABEL_42;
                Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
                if ( (Instance & 1) == 0 )
                  break;
              }
              v17 = *(_DWORD *)(v18 + 24);
              if ( (int)++v19 >= v17 )
                goto LABEL_24;
            }
            v22 = 0;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = ShopEntity__getTargetId(this, v15, v24);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, Instance, 0LL);
          if ( EntityFromId )
          {
            v28 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v26) )
              goto LABEL_40;
            if ( v28->fields.expireAt < v33 )
              return v22;
          }
          else
          {
            Instance = ShopEntity__getTargetId(this, v15, v27);
            if ( !v11 )
              break;
            Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v11,
                                        Instance,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt(Entity, 0LL) < v33
              || (v22 & !ShopEntity__IsEventQuest(this, v30) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v15 >= max_length )
            goto LABEL_39;
        }
      }
LABEL_42:
      sub_B2C434(Instance, v9);
    }
LABEL_39:
    LOBYTE(v22) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v22) = 0;
  }
  return v22;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v14; // x9
  ItemMaster_o *v15; // x23
  __int64 v16; // x25
  __int64 v17; // x26
  unsigned __int64 v18; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v21; // x8
  __int64 mana; // x24
  __int64 v23; // x28
  struct System_Int32_array *v24; // x8
  __int64 rarePri; // x24
  __int64 v26; // x28
  struct System_Int32_array *v27; // x8
  BalanceConfig_c *v28; // x8
  __int64 v29; // x28
  int v30; // w24
  int32_t v31; // w8
  __int64 v32; // x0

  if ( (byte_418D503 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, buyCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D503 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_45:
    sub_B2C434(Instance, v12);
  }
  v14 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v14 < 1 )
    return 0;
  v15 = (ItemMaster_o *)Instance;
  v16 = (int)v14;
  v17 = 8LL;
  while ( 1 )
  {
    v18 = v17 - 8;
    if ( v17 - 8 >= (unsigned __int64)targetIds->max_length )
    {
LABEL_50:
      v32 = sub_B2C460(Instance);
      sub_B2C400(v32, 0LL);
    }
    if ( !v15 )
      goto LABEL_45;
    Instance = (DataManager_o *)ItemMaster__isQP(v15, *((_DWORD *)&targetIds->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      qp = SelfUserGame->fields.qp;
      setNum = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( qp + setNum * buyCount > SHIDWORD(Instance[1].fields.saveNameList->klass) )
      {
        result = 1;
        *check = 1;
        return result;
      }
      goto LABEL_43;
    }
    v21 = this->fields.targetIds;
    if ( !v21 )
      goto LABEL_45;
    if ( v18 >= v21->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isMana(v15, *((_DWORD *)&v21->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v23 = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v23 * buyCount > SLODWORD(Instance[1].fields.saveNameList->monitor) )
      {
        v31 = 5;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    v24 = this->fields.targetIds;
    if ( !v24 )
      goto LABEL_45;
    if ( v18 >= v24->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v15, *((_DWORD *)&v24->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v26 = this->fields.setNum;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v26 * buyCount > SHIDWORD(Instance[1].fields.saveNameList->monitor) )
    {
      v31 = 22;
      goto LABEL_49;
    }
LABEL_43:
    if ( v17 - 7 >= v16 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v17;
    if ( !targetIds )
      goto LABEL_45;
  }
  v27 = this->fields.targetIds;
  if ( !v27 )
    goto LABEL_45;
  if ( v18 >= v27->max_length )
    goto LABEL_50;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v15, *((_DWORD *)&v27->obj.klass + v17), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_43;
  if ( !SelfUserGame )
    goto LABEL_45;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v28 = BalanceConfig_TypeInfo;
  v29 = this->fields.setNum;
  v30 = (int)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  if ( v29 * buyCount + v30 <= v28->static_fields->FriendPointMax )
    goto LABEL_43;
  v31 = 13;
LABEL_49:
  *check = v31;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v8; // x19
  __int64 v9; // x24
  ShopReleaseEntity_o *v10; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v14; // w23
  __int64 v16; // x0

  if ( (byte_418D4FE & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418D4FE = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B2C434(Instance, v6);
  }
  datalist = Instance->fields.datalist;
  v8 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)datalist )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v10 = (ShopReleaseEntity_o *)*((_QWORD *)&v8->fields.lookup + v9);
    if ( !v10 )
      goto LABEL_20;
    condType = v10->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_17:
    if ( (int)++v9 >= (int)datalist )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(*((ShopReleaseEntity_o **)&v8->fields.lookup + v9), 0LL);
  condNum = v10->fields.condNum;
  v14 = condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsTotalTdLvCond(condType, v14, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    datalist = v8->fields.datalist;
    goto LABEL_17;
  }
  return ShopReleaseEntity__IsPreparation(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v11; // x8
  UserQuestMaster_o *v12; // x20
  __int64 v13; // x23
  ShopReleaseEntity_o *v14; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v18; // x0

  if ( (byte_418D4F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D4F9 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_23:
    sub_B2C434(Instance, v9);
  }
  v11 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (UserQuestMaster_o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= (unsigned int)v11 )
    {
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
    }
    v14 = EntitiyList->m_Items[v13];
    if ( !v14 )
      goto LABEL_23;
    if ( v14->fields.condType == 1 )
      break;
LABEL_20:
    if ( (int)++v13 >= (int)v11 )
      return 0;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v14, 0LL);
  if ( !v12 )
    goto LABEL_23;
  EntityFromId = UserQuestMaster__getEntityFromId(v12, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v11 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10
  __int64 v10; // x0

  if ( (byte_418D4FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4FB = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v5);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= v6 )
    {
      v10 = sub_B2C460(Instance);
      sub_B2C400(v10, 0LL);
    }
    Instance = *(char **)&v8[8 * v7];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10
  __int64 v10; // x0

  if ( (byte_418D4FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4FC = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v5);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= v6 )
    {
      v10 = sub_B2C460(Instance);
      sub_B2C400(v10, 0LL);
    }
    Instance = *(char **)&v8[8 * v7];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t purchaseType; // w8
  char *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  __int64 v8; // x9
  char *v9; // x10

  if ( (byte_418D500 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D500 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v6);
  }
  v7 = *((_DWORD *)Instance + 6);
  if ( v7 < 1 )
    return 0;
  v8 = 0LL;
  v9 = Instance + 32;
  while ( 1 )
  {
    Instance = *(char **)&v9[8 * v8];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 37 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v8 >= v7 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10
  __int64 v10; // x0

  if ( (byte_418D4FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4FF = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v5);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= v6 )
    {
      v10 = sub_B2C460(Instance);
      sub_B2C400(v10, 0LL);
    }
    Instance = *(char **)&v8[8 * v7];
    if ( !Instance )
      goto LABEL_15;
    if ( (*((_DWORD *)Instance + 5) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10
  __int64 v10; // x0

  if ( (byte_418D4FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418D4FA = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v5);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= v6 )
    {
      v10 = sub_B2C460(Instance);
      sub_B2C400(v10, 0LL);
    }
    Instance = *(char **)&v8[8 * v7];
    if ( !Instance )
      goto LABEL_14;
    if ( *((_DWORD *)Instance + 5) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v12; // x20
  __int64 v13; // x23
  ShopReleaseEntity_o *v14; // x21
  int64_t UserId; // x22
  __int64 v17; // x0

  if ( (byte_418D4F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D4F8 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_B2C434(Instance, v9);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (UserQuestMaster_o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
    {
      v17 = sub_B2C460(Instance);
      sub_B2C400(v17, 0LL);
    }
    v14 = EntitiyList->m_Items[v13];
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.condType == 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v14, 0LL);
      if ( !v12 )
        goto LABEL_22;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v12, UserId, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v13 >= max_length )
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_418D4F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418D4F5 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418D4F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418D4F7 = 1;
  }
  questId = 0;
  v6 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v8);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0LL)
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v13; // x20
  int v14; // w23
  bool v15; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v17; // x21
  int32_t ClearNum; // w0

  if ( (byte_418D4F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D4F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, v10);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v13 = (UserQuestMaster_o *)Instance;
    v14 = 0;
    v15 = !checkExpired;
    do
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v13 )
        goto LABEL_19;
      EntityFromId = UserQuestMaster__getEntityFromId(v13, (int64_t)Instance, questId, 0LL);
      v17 = EntityFromId;
      if ( EntityFromId == 0LL || v15 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v17 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v17, 0LL);
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
  Il2CppObject *v2; // x19
  struct ShopEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4185444 & 1) == 0 )
  {
    sub_B2C35C(&ShopEntity___c_TypeInfo, v1);
    byte_4185444 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ShopEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ShopEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4185445 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4185445 = 1;
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


bool __fastcall ShopEntity___c___GetIsAlreadyInPossession_b__49_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B2C434(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B2C434(this, 0LL);
  return v->fields.giftType == 1;
}