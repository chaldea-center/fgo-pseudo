void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421A174 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_421A174 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v13; // x1
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v15; // x21
  int masterCheckName_high; // w8
  __int64 v17; // x21
  __int64 v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v19; // x0
  __int64 v20; // x20
  struct System_String_o *v21; // x21
  __int64 v22; // x21
  struct System_String_o *emptyMessage; // x22
  WarEntity_o *v25; // [xsp+8h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_421A16D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, imageId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_421A16D = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  *imageId = this->fields.imageId;
  if ( this->fields.purchaseType != 6 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v13);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, entity->fields.priority, 0LL);
  if ( !DataById )
    return (char)DataById;
  v15 = DataById;
  if ( DataById->fields.type != 5 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v25,
          v15->fields.objectId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
    if ( !v25 )
      goto LABEL_40;
    emptyMessage = v25->fields.emptyMessage;
    v22 = *(_QWORD *)&v25->fields.startType;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v28.fields.currentCryptoKey = emptyMessage;
    *(_QWORD *)&v28.fields.fakeValue = v22;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v25 )
      {
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v21 = v25->fields.emptyMessage;
        v20 = *(_QWORD *)&v25->fields.startType;
LABEL_34:
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v19);
        *(_QWORD *)&v29.fields.currentCryptoKey = v21;
        *(_QWORD *)&v29.fields.fakeValue = v20;
        *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
        goto LABEL_39;
      }
LABEL_40:
      sub_B0D97C(Instance);
    }
  }
  else if ( masterCheckName_high == 1 )
  {
    if ( !v25 )
      goto LABEL_40;
    v18 = *(_QWORD *)&v25->fields.parentWarId;
    v17 = *(_QWORD *)&v25->fields.flag;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v18;
    *(_QWORD *)&v27.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v25 )
      {
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v21 = *(struct System_String_o **)&v25->fields.parentWarId;
        v20 = *(_QWORD *)&v25->fields.flag;
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

  if ( (byte_421A171 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&StringLiteral_16304/*"addMessage"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421A171 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16304/*"addMessage"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_B0D97C(0LL);
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
  System_Xml_Schema_XmlSchemaObject_o *v13; // x19
  ShopEntity___c_c *v14; // x0
  System_Collections_Generic_List_object__c *v15; // x1
  __int64 v16; // x9
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__58_0; // x20
  __int64 v19; // x9
  Il2CppObject *v20; // x21
  struct ShopEntity___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A153 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, method);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B0D8A4(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v8);
    sub_B0D8A4(&ShopEntity___c_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16402/*"anotherItemIds"*/, v10);
    byte_421A153 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16402/*"anotherItemIds"*/,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v13 = value;
    if ( !value )
      return 0LL;
    v14 = ShopEntity___c_TypeInfo;
    if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
      v14 = ShopEntity___c_TypeInfo;
    }
    v15 = System_Collections_Generic_List_object__TypeInfo;
    v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (System_Collections_Generic_List_object__c *)v13->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_14:
      sub_B0DC70(v13);
      return 0LL;
    }
    static_fields = v14->static_fields;
    _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__58_0;
    if ( _9__58_0 )
    {
      v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (System_Collections_Generic_List_object__c *)v13->klass->_2.typeHierarchy[v19 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_14;
      }
    }
    else
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                         System_Converter_object__int__TypeInfo,
                                                                         v15,
                                                                         v12);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__58_0,
        v20,
        Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
        (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
      v21 = ShopEntity___c_TypeInfo->static_fields;
      v21->__9__58_0 = (struct System_Converter_object__int__o *)_9__58_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v21->__9__58_0,
        (System_Int32_array **)_9__58_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                      (System_Collections_Generic_List_BattleActionData_HealData__o *)v13,
                                                      (System_Converter_T__TOutput__o *)_9__58_0,
                                                      (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( !v28 )
      sub_B0D97C(0LL);
    return System_Collections_Generic_List_int___ToArray(
             v28,
             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_421A154 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&PayType_Type_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_16405/*"anotherPayType"*/, v4);
    byte_421A154 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16405/*"anotherPayType"*/,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B0D97C(0LL);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B0DC70(value);
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
  __int64 v3; // x8
  CommonConsumeEntity_array *v4; // x19
  __int64 v5; // x22
  int32_t v6; // w20
  CommonConsumeEntity_o *v7; // x21
  int v8; // w9
  __int64 v11; // x0

  if ( this->fields.payType != 14 )
    return 0;
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(this, method);
  if ( !CommonConsumeEntities )
    return 0;
  v3 = *(_QWORD *)&CommonConsumeEntities->max_length;
  v4 = CommonConsumeEntities;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0LL;
  v6 = 0;
  do
  {
    if ( (unsigned int)v5 >= (unsigned int)v3 )
    {
      v11 = sub_B0D9A8(CommonConsumeEntities);
      sub_B0D948(v11, 0LL);
    }
    v7 = v4->m_Items[v5];
    if ( !v7 )
      sub_B0D97C(CommonConsumeEntities);
    if ( v7->fields.num < 1 )
    {
      v8 = 0;
    }
    else
    {
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserHasNum(v4->m_Items[v5], 0LL);
      v3 = *(_QWORD *)&v4->max_length;
      v8 = (int)CommonConsumeEntities / v7->fields.num;
    }
    if ( v8 < v6 || (_DWORD)v5++ == 0 )
      v6 = v8;
  }
  while ( (int)v5 < (int)v3 );
  return v6;
}


CommonConsumeEntity_array *__fastcall ShopEntity__GetCommonConsumeEntities(
        ShopEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1
  __int64 ItemID; // x0

  if ( (byte_421A173 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_421A173 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v5);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(ItemID);
  return CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_421A159 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_421A159 = 1;
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

  if ( (byte_421A13A & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B0D8A4(&StringLiteral_18945/*"freeShopCondId"*/, v4);
    byte_421A13A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_421A13B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&long_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_18948/*"freeShopReleaseDate"*/, v4);
    byte_421A13B = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18948/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B0D97C(0LL);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B0DC70(value);
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
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v38; // x1
  unsigned int v39; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x21
  const MethodInfo *v41; // x1
  ServantEntity_o *v42; // x21
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t setNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421A15A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, nameText);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StringLiteral_14757/*"UNIT_INFO"*/, v18);
    sub_B0D8A4(&StringLiteral_12093/*"SERVANT_UNIT"*/, v19);
    sub_B0D8A4(&StringLiteral_5768/*"EXCEPT_SERVANT_UNIT"*/, v20);
    sub_B0D8A4(&StringLiteral_11745/*"SERVANT_EQUIP_UNIT"*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    byte_421A15A = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_B0D840(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (void *)ShopEntity__get_TargetId(this, v38);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v39 = *((_DWORD *)Instance + 12);
      if ( v39 <= 0xD && ((1 << v39) & 0x2026) != 0 )
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
      v31 = &StringLiteral_14757/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (void *)ShopEntity__get_TargetId(this, v41),
                !v40)
            || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v40,
                             (int32_t)Instance,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_47:
            sub_B0D97C(Instance);
          }
          v42 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v42, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_12093/*"SERVANT_UNIT"*/;
          }
          else if ( ServantEntity__get_IsServantEquip(v42, 0LL) )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_11745/*"SERVANT_EQUIP_UNIT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v31 = &StringLiteral_5768/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_34:
          v43 = LocalizationManager__Get((System_String_o *)*v31, 0LL);
          setNum = this->fields.setNum;
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v45 = System_String__Format(v43, v44, 0LL);
          *countText = v45;
          sub_B0D840(
            (BattleServantConfConponent_o *)countText,
            (System_Int32_array **)v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
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
      sub_B0D840((BattleServantConfConponent_o *)v35, (System_Int32_array **)v34, v24, v25, v26, v27, v28, v29);
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
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantMaster_o *v17; // x22
  UserServantStorageMaster_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v22; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x24
  Il2CppObject *v25; // x25
  struct ShopEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t v33; // x21
  int64_t v34; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v36; // x8
  bool v37; // w9
  int64_t v38; // x20
  unsigned __int64 v39; // x25
  bool v40; // w11
  int32_t v41; // w28
  int v42; // w8
  unsigned int v43; // w9
  __int64 v44; // x10
  int v45; // w8
  unsigned int v46; // w26
  __int64 v47; // x8
  __int64 v48; // x19
  __int64 v49; // x23
  int v50; // w8
  unsigned int v51; // w26
  __int64 v52; // x8
  __int64 v53; // x19
  __int64 v54; // x23
  __int64 v56; // x0
  bool v57; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_421A14A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v10);
    sub_B0D8A4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v13);
    sub_B0D8A4(&ShopEntity___c_TypeInfo, v14);
    byte_421A14A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v17 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v18 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
  v22 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v22 = ShopEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_UserPresentBoxEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v25,
      Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v26 = ShopEntity___c_TypeInfo->static_fields;
    v26->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  Instance = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                        VaildList,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v17
    || (v33 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList(v17, 0LL), !v18)
    || (v34 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v18, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_54:
    sub_B0D97C(Instance);
  }
  v36 = *(_QWORD *)&targetIds->max_length;
  v37 = v33 == 0;
  if ( (int)v36 < 1 )
    return 0;
  v38 = Instance;
  v39 = 0LL;
  v40 = v37 || isWithoutPresents;
  v57 = v37 || isWithoutPresents;
  while ( 1 )
  {
    if ( v39 >= (unsigned int)v36 )
      goto LABEL_55;
    v41 = targetIds->m_Items[v39 + 1];
    if ( !v40 )
    {
      v42 = *(_DWORD *)(v33 + 24);
      if ( v42 >= 1 )
        break;
    }
LABEL_31:
    if ( !v34 )
      goto LABEL_54;
    v45 = *(_DWORD *)(v34 + 24);
    if ( v45 >= 1 )
    {
      v46 = 0;
      while ( v46 < v45 )
      {
        v47 = *(_QWORD *)(v34 + 8LL * (int)v46 + 32);
        if ( !v47 )
          goto LABEL_54;
        v49 = *(_QWORD *)(v47 + 80);
        v48 = *(_QWORD *)(v47 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v49;
        *(_QWORD *)&v58.fields.fakeValue = v48;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
        if ( v41 == (_DWORD)Instance )
          return 1;
        v45 = *(_DWORD *)(v34 + 24);
        if ( (int)++v46 >= v45 )
          goto LABEL_41;
      }
LABEL_55:
      v56 = sub_B0D9A8(Instance);
      sub_B0D948(v56, 0LL);
    }
LABEL_41:
    if ( !v38 )
      goto LABEL_54;
    v50 = *(_DWORD *)(v38 + 24);
    if ( v50 >= 1 )
    {
      v51 = 0;
      while ( v51 < v50 )
      {
        v52 = *(_QWORD *)(v38 + 8LL * (int)v51 + 32);
        if ( !v52 )
          goto LABEL_54;
        v54 = *(_QWORD *)(v52 + 80);
        v53 = *(_QWORD *)(v52 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v59.fields.currentCryptoKey = v54;
        *(_QWORD *)&v59.fields.fakeValue = v53;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v59, 0LL);
        if ( v41 == (_DWORD)Instance )
          return 1;
        v50 = *(_DWORD *)(v38 + 24);
        if ( (int)++v51 >= v50 )
          goto LABEL_51;
      }
      goto LABEL_55;
    }
LABEL_51:
    LODWORD(v36) = targetIds->max_length;
    v40 = v57;
    if ( (__int64)++v39 >= (int)v36 )
      return 0;
  }
  v43 = 0;
  while ( 1 )
  {
    if ( v43 >= v42 )
      goto LABEL_55;
    v44 = *(_QWORD *)(v33 + 8LL * (int)v43 + 32);
    if ( !v44 )
      goto LABEL_54;
    if ( v41 == *(_DWORD *)(v44 + 76) )
      return 1;
    if ( (int)++v43 >= v42 )
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_421A149 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A149 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B0D97C(Instance);
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
    sub_B0D97C(this);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v4; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B0D97C(this);
  if ( !itemIds->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  return itemIds->m_Items[1];
}


int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v5; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B0D97C(this);
  if ( itemIds->max_length <= num )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  const MethodInfo *v19; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v23; // x1
  int32_t recordNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421A15C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SetItemMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_421A15C = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v23);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v19),
              !v18)
          || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v18,
                                            (int32_t)Instance,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_B0D97C(Instance);
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
  if ( (byte_421A170 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21442/*"overwriteName"*/, defaultValue);
    byte_421A170 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21442/*"overwriteName"*/,
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
    sub_B0D97C(this);
  if ( !prices->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
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
    return dword_32250B0[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_32251D0[v2];
}


int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8
  __int64 v5; // x0

  prices = this->fields.prices;
  if ( !prices )
    sub_B0D97C(this);
  if ( prices->max_length <= num )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_421A158 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A158 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantEntity_o *result; // x0
  int32_t fakeValue; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o *v9; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v11; // x0

  if ( (byte_421A168 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A168 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)result, this->fields.id, 0LL);
  if ( result )
  {
    fakeValue = result->fields.id.fields.fakeValue;
    if ( fakeValue >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= fakeValue )
        {
          v11 = sub_B0D9A8(result);
          sub_B0D948(v11, 0LL);
        }
        v9 = (ShopReleaseEntity_o *)*((_QWORD *)&result->fields.baseSvtId.fields.currentCryptoKey + v8);
        if ( !v9 )
          goto LABEL_18;
        if ( v9->fields.condType == 8 )
          break;
        if ( (int)++v8 >= fakeValue )
          return 0LL;
      }
      result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( result )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)result,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        result = (ServantEntity_o *)ShopReleaseEntity__get_condValue(v9, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
          return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)result,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
LABEL_18:
      sub_B0D97C(result);
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

  if ( (byte_421A155 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&StringLiteral_8401/*"LIMITED_SHOP_REMAIN_DAYS"*/, v3);
    sub_B0D8A4(&StringLiteral_8808/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v4);
    sub_B0D8A4(&StringLiteral_21831/*"remainDays"*/, v5);
    byte_421A155 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21831/*"remainDays"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v10 = &StringLiteral_8401/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v10 = &StringLiteral_8808/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v10, 0LL);
  }
  if ( !value )
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  const MethodInfo *v22; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  ShopGroupMaster_o *v25; // x24
  const MethodInfo *v26; // x1
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v28; // x1
  bool v29; // [xsp+0h] [xbp-50h] BYREF
  bool equip; // [xsp+4h] [xbp-4Ch] BYREF
  bool servant; // [xsp+8h] [xbp-48h] BYREF
  bool item; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_421A15B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SetItemMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopGroupMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_421A15B = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  v29 = 0;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v28);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v25 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v26);
        if ( !v25 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(v25, (int32_t)Instance, &item, &servant, &equip, &v29, 0LL);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( v29 )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v22),
          !v21)
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v21,
                                        (int32_t)Instance,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_B0D97C(Instance);
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

  if ( (byte_421A13C & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_421A13C = 1;
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

  if ( (byte_421A142 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A142 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  int32_t v9; // w20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  char v12; // w8
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v16; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A151 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421A151 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_24;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v7);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
  {
    v16 = sub_B0D9A8(AnotherPayItemIds);
    sub_B0D948(v16, 0LL);
  }
  v9 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v9 < 1 )
    goto LABEL_24;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B0D97C(AnotherPayItemIds);
  UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, AnotherPayItemIds, v9, 0LL);
  v12 = (char)entity;
  if ( !entity )
    return v12 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v11) )
  {
LABEL_24:
    v12 = 0;
    return v12 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)AnotherPayItemIds,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    v12 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v12 = 1;
  return v12 & 1;
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
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A152 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_23054/*"useAnotherPayCommonReleaseId"*/, v6);
    byte_421A152 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23054/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v8 = (Il2CppObject *)value;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v9 = System_Convert__ToInt32(v8, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
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
  if ( (byte_421A144 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, nowTime);
    byte_421A144 = 1;
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_421A156 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A156 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B0D97C(Instance);
  }
  v7 = *(_DWORD *)(Instance + 28);
  limitNum = this->fields.limitNum;
  v9 = v7 > 0;
  v10 = v7 >= limitNum;
  if ( limitNum >= 1 )
    return v10;
  else
    return v9;
}


bool __fastcall ShopEntity__IsCondType_34179316(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  int32_t datalist_high; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_421A157 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, userId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A157 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  datalist_high = HIDWORD(Instance->fields.datalist);
  limitNum = this->fields.limitNum;
  v9 = datalist_high > 0;
  v10 = datalist_high >= limitNum;
  if ( limitNum >= 1 )
    return v10;
  else
    return v9;
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
  bool v10; // w0
  const MethodInfo *v11; // x1
  int32_t svtId[2]; // [xsp+0h] [xbp-20h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A140 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_18945/*"freeShopCondId"*/, v5);
    byte_421A140 = 1;
  }
  *(_QWORD *)svtId = 0LL;
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &svtId[1], svtId, v8);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v10 = ServantCostumeReleaseMaster__checkItemHaving((ServantCostumeReleaseMaster_o *)Instance, svtId[1], svtId[0], 0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v11) || !v10);
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
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v12; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_421A141 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421A141 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
          &v15,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)v15;
  if ( !v15 )
    goto LABEL_29;
  v12 = 1;
  if ( !UserEventEntity__getEventFlag(v15, 1, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  return v12;
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v12; // x20
  const MethodInfo *v13; // x1
  int v14; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v16; // x19
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_421A172 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&WarEntity_TypeInfo, v9);
    byte_421A172 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v13),
        !v12)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v12, (int32_t)Instance, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (v14 = (int)Instance, (Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v16 = Enumerator;
  v17 = 0;
  while ( 1 )
  {
    if ( !v16 )
      goto LABEL_36;
    klass = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AA67A0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v16,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_13:
      v21 = sub_AA67A0(v16, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                  v16,
                                                                  *(_QWORD *)(v21 + 8));
    if ( !Enumerator )
      sub_B0D97C(0LL);
    v22 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[v22 - 1] != WarEntity_TypeInfo )
    {
      sub_B0DC70(Enumerator);
LABEL_36:
      sub_B0D97C(Enumerator);
    }
    if ( LODWORD(Enumerator[6].klass) == v14 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v17 |= (unsigned __int8)Enumerator;
    }
  }
  v27 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v16, *(_QWORD *)(v30 + 8));
  return v17 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A150 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&StringLiteral_21831/*"remainDays"*/, v3);
    byte_421A150 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21831/*"remainDays"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_B0D97C(0LL);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1

  if ( (byte_421A13D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_18945/*"freeShopCondId"*/, v5);
    byte_421A13D = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"freeShopCondId"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)script,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ShopEntity__GetFreeShopCondId(
                                                                                                 this,
                                                                                                 v8),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_10:
    sub_B0D97C(script);
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_421A14C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A14C = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B0D97C(Instance);
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_421A14D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A14D = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B0D97C(Instance);
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
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A14E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&StringLiteral_21831/*"remainDays"*/, v3);
    byte_421A14E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21831/*"remainDays"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_B0D97C(0LL);
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

  if ( (byte_421A14F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&StringLiteral_21831/*"remainDays"*/, v3);
    byte_421A14F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21831/*"remainDays"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  _BOOL8 v13; // x0
  char v14; // w19
  int v15; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A16C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A16C = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B0D97C(v13);
    if ( HIDWORD(v16.fields.current[1].klass) == 37 )
    {
      v14 = 1;
      v15 = 4;
      goto LABEL_19;
    }
  }
  v14 = 0;
  v15 = 2;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return (v15 == 4) & v14;
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
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *v12; // x21
  bool IsTimeStatusRecord; // w0
  bool v14; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_421A143 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_421A143 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v12 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_28;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v12 || IsTimeStatusRecord )
      goto LABEL_22;
  }
  else if ( !v12 )
  {
LABEL_22:
    if ( Time < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_28:
    sub_B0D97C(Instance);
  }
  v14 = 1;
  if ( !UserEventEntity__getEventFlag(v12, 1, 0LL) )
    goto LABEL_22;
  return v14;
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
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestMaster_o *v35; // x22
  UserShopMaster_o *v36; // x21
  UserShopEntity_o *v37; // x21
  int64_t updatedAt; // x27
  int64_t v39; // x25
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  bool v42; // w24
  CommonReleaseEntity_array *List; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x23
  ShopEntity___c_c *v47; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x24
  int64_t v50; // x21
  char v51; // w8
  Il2CppObject *v52; // x25
  struct ShopEntity___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int64_t v60; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x23
  const MethodInfo *v66; // x1
  __int64 v67; // x2
  int max_length; // w8
  unsigned int v69; // w25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v70; // x28
  ShopEntity___c_c *v71; // x0
  UserShopEntity_o *v72; // x21
  struct ShopEntity___c_StaticFields *v73; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_1; // x22
  bool v75; // w26
  Il2CppObject *v76; // x24
  struct ShopEntity___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x2
  ShopEntity___c_c *v85; // x0
  struct ShopEntity___c_StaticFields *v86; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_2; // x22
  bool v88; // w26
  Il2CppObject *v89; // x24
  struct ShopEntity___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x1
  __int64 v98; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x22
  ShopEntity___c_c *v100; // x8
  struct ShopEntity___c_StaticFields *v101; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__36_3; // x23
  bool v103; // w26
  Il2CppObject *v104; // x24
  struct ShopEntity___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  const MethodInfo_2980204 *v112; // x3
  bool v113; // w21
  int32_t FreeShopCondId; // w0
  bool result; // w0
  __int64 v116; // x0
  ShopBuyItemListViewItemDraw_o *v117; // x0
  UISprite_o *v118; // x1
  System_String_o *v119; // x2
  const MethodInfo *v120; // x3
  UserShopEntity_o *v121; // [xsp+8h] [xbp-78h]
  bool v122; // [xsp+14h] [xbp-6Ch]
  int64_t v123; // [xsp+20h] [xbp-60h] BYREF
  __int64 v124; // [xsp+28h] [xbp-58h]
  System_Nullable_long__o v125; // 0:x0.16

  if ( (byte_421A13F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_UserQuestEntity___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v10);
    sub_B0D8A4(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_UserQuestEntity__long___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_UserQuestEntity__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_UserQuestEntity__long__TypeInfo, v14);
    sub_B0D8A4(&System_Func_CommonReleaseEntity__bool__TypeInfo, v15);
    sub_B0D8A4(&System_Func_UserQuestEntity__bool__TypeInfo, v16);
    sub_B0D8A4(&long_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Nullable_long__GetValueOrDefault__, v23);
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, v24);
    sub_B0D8A4(&Method_System_Nullable_long__get_HasValue__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v27);
    sub_B0D8A4(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v28);
    sub_B0D8A4(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v29);
    sub_B0D8A4(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v30);
    sub_B0D8A4(&ShopEntity___c_TypeInfo, v31);
    sub_B0D8A4(&StringLiteral_18948/*"freeShopReleaseDate"*/, v32);
    byte_421A13F = 1;
  }
  v123 = 0LL;
  v124 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v35 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v36 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v36 )
    goto LABEL_79;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v36, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_79;
  v37 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_79;
  updatedAt = v37->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Instance,
                        (System_Type_o *)StringLiteral_18948/*"freeShopReleaseDate"*/,
                        (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_79;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v39 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance);
    v42 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v40) || UserShopEntity__get_IsReturnRarePriShop(v37, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v41);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_79;
    List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
    if ( List )
    {
      v46 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v122 = v42;
      v47 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v47 = ShopEntity___c_TypeInfo;
      }
      static_fields = v47->static_fields;
      v121 = v37;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v50 = v39;
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v50 = v39;
        }
        v52 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                                                        v44,
                                                                                        v45);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_0,
          v52,
          Method_ShopEntity___c__IsPaidExchange_b__36_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
        v53 = ShopEntity___c_TypeInfo->static_fields;
        v53->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v53->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        v39 = v50;
      }
      v60 = v39;
      v61 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v46,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v62 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v61,
              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_UserQuestEntity__TypeInfo, v63, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v65,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v62 )
        goto LABEL_79;
      max_length = v62->max_length;
      if ( max_length >= 1 )
      {
        v69 = 0;
        while ( 1 )
        {
          if ( v69 >= max_length )
          {
            v116 = sub_B0D9A8(Instance);
            sub_B0D948(v116, 0LL);
          }
          v70 = v62->m_Items[v69];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v70 || !v35 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v35, Instance, (int32_t)v70[1].klass, 0LL);
          if ( Instance )
          {
            if ( !v65 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v65,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
          }
          max_length = v62->max_length;
          if ( (int)++v69 >= max_length )
            goto LABEL_42;
        }
LABEL_79:
        sub_B0D97C(Instance);
      }
LABEL_42:
      v123 = 0LL;
      v124 = 0LL;
      if ( !v65 )
        goto LABEL_79;
      v42 = v122;
      v39 = v60;
      if ( v65->fields._size < 1 )
        goto LABEL_76;
      v71 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v72 = v121;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v71 = ShopEntity___c_TypeInfo;
        }
      }
      else
      {
        v72 = v121;
      }
      v73 = v71->static_fields;
      _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v73->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v75 = v122;
          if ( !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            v73 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v75 = v122;
        }
        v76 = (Il2CppObject *)v73->__9;
        _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_UserQuestEntity__bool__TypeInfo,
                                                                                        v66,
                                                                                        v67);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_1,
          v76,
          Method_ShopEntity___c__IsPaidExchange_b__36_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v77 = ShopEntity___c_TypeInfo->static_fields;
        v77->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v77->__9__36_1,
          (System_Int32_array **)_9__36_1,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
        v42 = v75;
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)v65,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_1707138 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_76;
      v85 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v85 = ShopEntity___c_TypeInfo;
      }
      v86 = v85->static_fields;
      _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v86->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v88 = v42;
          if ( !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85);
            v86 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v88 = v42;
        }
        v89 = (Il2CppObject *)v86->__9;
        _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_UserQuestEntity__bool__TypeInfo,
                                                                                        v66,
                                                                                        v84);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_2,
          v89,
          Method_ShopEntity___c__IsPaidExchange_b__36_2__,
          (const MethodInfo_26189B8 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v90 = ShopEntity___c_TypeInfo->static_fields;
        v90->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v90->__9__36_2,
          (System_Int32_array **)_9__36_2,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
        v42 = v88;
      }
      v99 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v65,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v100 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v100 = ShopEntity___c_TypeInfo;
      }
      v101 = v100->static_fields;
      _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v101->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v103 = v42;
          if ( !v100->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v100);
            v101 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v103 = v42;
        }
        v104 = (Il2CppObject *)v101->__9;
        _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                                   System_Func_UserQuestEntity__long__TypeInfo,
                                                                                   v97,
                                                                                   v98);
        System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
          _9__36_3,
          v104,
          Method_ShopEntity___c__IsPaidExchange_b__36_3__,
          (const MethodInfo_2619D24 *)Method_System_Func_UserQuestEntity__long___ctor__);
        v105 = ShopEntity___c_TypeInfo->static_fields;
        v105->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v105->__9__36_3,
          (System_Int32_array **)_9__36_3,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
        v42 = v103;
      }
      *(_QWORD *)&v125.fields.has_value = System_Linq_Enumerable__Min_UserQuestEntity_(
                                            v99,
                                            (System_Func_TSource__long__o *)_9__36_3,
                                            (const MethodInfo_1B4E6D8 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      v125.fields.value = (int64_t)&v123;
      System_Nullable_long____ctor(v125, Method_System_Nullable_long___ctor__, v112);
      if ( (_BYTE)v124 )
        v113 = v123 > v72->fields.updatedAt;
      else
LABEL_76:
        v113 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v66);
      v51 = v113 | !CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v51 = 1;
    }
    return (v42 || updatedAt < v39) | v51;
  }
  else
  {
    sub_B0DC70(Instance);
    ShopBuyItemListViewItemDraw__SetSpriteName(v117, v118, v119, v120);
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

  if ( (byte_421A145 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A145 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v9; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v11; // x8
  UserQuestMaster_o *v12; // x19
  unsigned __int64 v13; // x24
  int32_t v14; // w21
  __int64 v15; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421A147 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A147 = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      v9 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_24;
      v11 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = (UserQuestMaster_o *)Instance;
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v11 )
          {
            v15 = sub_B0D9A8(Instance);
            sub_B0D948(v15, 0LL);
          }
          v14 = targetIds->m_Items[v13 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v12 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v12, &entity, Instance, v14, 0LL);
          if ( !entity )
            goto LABEL_22;
          LODWORD(v11) = targetIds->max_length;
          if ( (__int64)++v13 >= (int)v11 )
            goto LABEL_21;
        }
LABEL_24:
        sub_B0D97C(Instance);
      }
LABEL_21:
      LOBYTE(EntityDefinitely) = v9->fields.num > 0;
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
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v17; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v20; // x23
  struct ShopEntity___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *targetIds; // x22
  __int64 v29; // x8
  int64_t v30; // x20
  unsigned __int64 v31; // x23
  int64_t v32; // x25
  int32_t v33; // w21
  int v34; // w8
  __int64 v35; // x9
  __int64 v36; // x10
  __int64 v38; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421A14B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_UserPresentBoxEntity___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v7);
    sub_B0D8A4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_ShopEntity___c__IsServantGet_b__50_0__, v9);
    sub_B0D8A4(&ShopEntity___c_TypeInfo, v10);
    byte_421A14B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v12 = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_39;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(v12, UserId, 0LL);
  v17 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v17 = ShopEntity___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_UserPresentBoxEntity__TypeInfo,
                                                                          v14,
                                                                          v15);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v20,
      Method_ShopEntity___c__IsServantGet_b__50_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v21 = ShopEntity___c_TypeInfo->static_fields;
    v21->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  UserId = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                      VaildList,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_39:
    sub_B0D97C(UserId);
  v29 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v29 < 1 )
    return 0;
  v30 = UserId;
  v31 = 0LL;
  v32 = UserId + 32;
  while ( 1 )
  {
    if ( v31 >= (unsigned int)v29 )
      goto LABEL_38;
    v33 = targetIds->m_Items[v31 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    UserId = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v33, 0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v30 )
    {
      v34 = *(_DWORD *)(v30 + 24);
      if ( v34 >= 1 )
      {
        v35 = 0LL;
        while ( (unsigned int)v35 < v34 )
        {
          v36 = *(_QWORD *)(v32 + 8 * v35);
          if ( !v36 )
            goto LABEL_39;
          if ( v33 == *(_DWORD *)(v36 + 76) )
            return 1;
          if ( (int)++v35 >= v34 )
            goto LABEL_35;
        }
LABEL_38:
        v38 = sub_B0D9A8(UserId);
        sub_B0D948(v38, 0LL);
      }
    }
LABEL_35:
    LODWORD(v29) = targetIds->max_length;
    if ( (__int64)++v31 >= (int)v29 )
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

  if ( (byte_421A13E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation);
    sub_B0D8A4(&StringLiteral_18945/*"freeShopCondId"*/, v5);
    byte_421A13E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_18945/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v8; // x1

  if ( (byte_421A148 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A148 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_13;
  if ( this->fields.limitNum < 1 )
  {
LABEL_14:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B0D97C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v8) )
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
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_43913640((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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

  if ( (byte_421A146 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A146 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0

  if ( (byte_421A15D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A15D = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (WebViewManager_o *)ShopEntity__get_TargetId(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B0D97C(Instance);
  }
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v7);
  return !ItemMaster__isFriendPoint(MasterData_WarQuestSelectionMaster, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  int32_t *p_lookup; // x8
  int32_t TargetId; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  UserItemMaster_o *v14; // x20
  int64_t UserId; // x21
  const MethodInfo *v16; // x1

  if ( (byte_421A15E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A15E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v8);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !ItemMaster__isMana(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v9);
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
      v13 = ShopEntity__get_TargetId(this, v12);
      if ( ItemMaster__isStone(MasterData_WarQuestSelectionMaster, v13, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v14 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v16);
          if ( v14 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(v14, UserId, (int32_t)Instance, 0LL);
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
    sub_B0D97C(Instance);
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
  const MethodInfo *v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  WarEntity_o *v16; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_421A16F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A16F = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v10);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)Instance,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_22:
    sub_B0D97C(Instance);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          &v16,
          entity->fields.flag,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v16;
  if ( !v16 )
    goto LABEL_22;
  if ( ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v16, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v15);
  else
    return this->fields.name;
}


int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B0D97C(this);
  if ( targetIds->max_length <= id )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B0D97C(this);
  if ( !targetIds->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B0D97C(this);
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  QuestMaster_o *v10; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v12; // x22
  int max_length; // w28
  int32_t v14; // w24
  const MethodInfo *v15; // x2
  int v16; // w8
  int64_t v17; // x25
  unsigned int v18; // w26
  __int64 v19; // x27
  int v20; // w23
  _BOOL4 v21; // w25
  int64_t UserId; // x26
  const MethodInfo *v23; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  UserQuestEntity_o *v27; // x26
  QuestEntity_o *Entity; // x0
  const MethodInfo *v29; // x1
  __int64 v31; // x0
  int64_t v32; // [xsp+8h] [xbp-58h]

  if ( (byte_421A15F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A15F = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v10 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_42;
    v12 = (QuestReleaseMaster_o *)Instance;
    max_length = targetIds->max_length;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    v32 = Instance;
    if ( max_length >= 1 )
    {
      if ( v12 )
      {
        v14 = 0;
        while ( 1 )
        {
          Instance = (int64_t)QuestReleaseMaster__getListByType(v12, 13, 0LL);
          if ( !Instance )
            break;
          v16 = *(_DWORD *)(Instance + 24);
          v17 = Instance;
          if ( v16 < 1 )
          {
LABEL_24:
            v21 = 1;
          }
          else
          {
            v18 = 0;
            while ( 1 )
            {
              if ( v18 >= v16 )
              {
                v31 = sub_B0D9A8(Instance);
                sub_B0D948(v31, 0LL);
              }
              v19 = *(_QWORD *)(v17 + 8LL * (int)v18 + 32);
              if ( !v19 )
                goto LABEL_42;
              v20 = *(_DWORD *)(v19 + 16);
              Instance = ShopEntity__getTargetId(this, v14, v15);
              if ( v20 == (_DWORD)Instance )
              {
                if ( !v10 )
                  goto LABEL_42;
                Instance = (int64_t)QuestMaster__getQuestEntity(v10, *(_DWORD *)(v19 + 16), 0LL);
                if ( !Instance )
                  goto LABEL_42;
                Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
                if ( (Instance & 1) == 0 )
                  break;
              }
              v16 = *(_DWORD *)(v17 + 24);
              if ( (int)++v18 >= v16 )
                goto LABEL_24;
            }
            v21 = 0;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = ShopEntity__getTargetId(this, v14, v23);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, Instance, 0LL);
          if ( EntityFromId )
          {
            v27 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v25) )
              goto LABEL_40;
            if ( v27->fields.expireAt < v32 )
              return v21;
          }
          else
          {
            Instance = ShopEntity__getTargetId(this, v14, v26);
            if ( !v10 )
              break;
            Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                                        Instance,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt(Entity, 0LL) < v32
              || (v21 & !ShopEntity__IsEventQuest(this, v29) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v14 >= max_length )
            goto LABEL_39;
        }
      }
LABEL_42:
      sub_B0D97C(Instance);
    }
LABEL_39:
    LOBYTE(v21) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v21) = 0;
  }
  return v21;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  struct System_Int32_array *targetIds; // x8
  __int64 v13; // x9
  ItemMaster_o *v14; // x23
  __int64 v15; // x25
  __int64 v16; // x26
  unsigned __int64 v17; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v20; // x8
  __int64 mana; // x24
  __int64 v22; // x28
  struct System_Int32_array *v23; // x8
  __int64 rarePri; // x24
  __int64 v25; // x28
  struct System_Int32_array *v26; // x8
  BalanceConfig_c *v27; // x8
  __int64 v28; // x28
  int v29; // w24
  int32_t v30; // w8
  __int64 v31; // x0

  if ( (byte_421A16E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, buyCount);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A16E = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_45:
    sub_B0D97C(Instance);
  }
  v13 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (ItemMaster_o *)Instance;
  v15 = (int)v13;
  v16 = 8LL;
  while ( 1 )
  {
    v17 = v16 - 8;
    if ( v16 - 8 >= (unsigned __int64)targetIds->max_length )
    {
LABEL_50:
      v31 = sub_B0D9A8(Instance);
      sub_B0D948(v31, 0LL);
    }
    if ( !v14 )
      goto LABEL_45;
    Instance = (DataManager_o *)ItemMaster__isQP(v14, *((_DWORD *)&targetIds->obj.klass + v16), 0LL);
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
    v20 = this->fields.targetIds;
    if ( !v20 )
      goto LABEL_45;
    if ( v17 >= v20->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isMana(v14, *((_DWORD *)&v20->obj.klass + v16), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v22 = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v22 * buyCount > SLODWORD(Instance[1].fields.saveNameList->monitor) )
      {
        v30 = 5;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    v23 = this->fields.targetIds;
    if ( !v23 )
      goto LABEL_45;
    if ( v17 >= v23->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v14, *((_DWORD *)&v23->obj.klass + v16), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v25 = this->fields.setNum;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v25 * buyCount > SHIDWORD(Instance[1].fields.saveNameList->monitor) )
    {
      v30 = 22;
      goto LABEL_49;
    }
LABEL_43:
    if ( v16 - 7 >= v15 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v16;
    if ( !targetIds )
      goto LABEL_45;
  }
  v26 = this->fields.targetIds;
  if ( !v26 )
    goto LABEL_45;
  if ( v17 >= v26->max_length )
    goto LABEL_50;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v14, *((_DWORD *)&v26->obj.klass + v16), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_43;
  if ( !SelfUserGame )
    goto LABEL_45;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v27 = BalanceConfig_TypeInfo;
  v28 = this->fields.setNum;
  v29 = (int)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v28 * buyCount + v29 <= v27->static_fields->FriendPointMax )
    goto LABEL_43;
  v30 = 13;
LABEL_49:
  *check = v30;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v7; // x19
  __int64 v8; // x24
  ShopReleaseEntity_o *v9; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v13; // w23
  __int64 v15; // x0

  if ( (byte_421A169 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A169 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  datalist = Instance->fields.datalist;
  v7 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= (unsigned int)datalist )
    {
      v15 = sub_B0D9A8(Instance);
      sub_B0D948(v15, 0LL);
    }
    v9 = (ShopReleaseEntity_o *)*((_QWORD *)&v7->fields.lookup + v8);
    if ( !v9 )
      goto LABEL_20;
    condType = v9->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_17:
    if ( (int)++v8 >= (int)datalist )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(*((ShopReleaseEntity_o **)&v7->fields.lookup + v8), 0LL);
  condNum = v9->fields.condNum;
  v13 = condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsTotalTdLvCond(condType, v13, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    datalist = v7->fields.datalist;
    goto LABEL_17;
  }
  return ShopReleaseEntity__IsPreparation(v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v10; // x8
  UserQuestMaster_o *v11; // x20
  __int64 v12; // x23
  ShopReleaseEntity_o *v13; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v17; // x0

  if ( (byte_421A164 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A164 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_23:
    sub_B0D97C(Instance);
  }
  v10 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = (UserQuestMaster_o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      v17 = sub_B0D9A8(Instance);
      sub_B0D948(v17, 0LL);
    }
    v13 = EntitiyList->m_Items[v12];
    if ( !v13 )
      goto LABEL_23;
    if ( v13->fields.condType == 1 )
      break;
LABEL_20:
    if ( (int)++v12 >= (int)v10 )
      return 0;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v13, 0LL);
  if ( !v11 )
    goto LABEL_23;
  EntityFromId = UserQuestMaster__getEntityFromId(v11, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v10 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_421A166 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A166 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  v5 = *((_DWORD *)Instance + 6);
  if ( v5 < 1 )
    return 0;
  v6 = 0LL;
  v7 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v5 )
    {
      v9 = sub_B0D9A8(Instance);
      sub_B0D948(v9, 0LL);
    }
    Instance = *(char **)&v7[8 * v6];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= v5 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_421A167 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A167 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  v5 = *((_DWORD *)Instance + 6);
  if ( v5 < 1 )
    return 0;
  v6 = 0LL;
  v7 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v5 )
    {
      v9 = sub_B0D9A8(Instance);
      sub_B0D948(v9, 0LL);
    }
    Instance = *(char **)&v7[8 * v6];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= v5 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t purchaseType; // w8
  char *Instance; // x0
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10

  if ( (byte_421A16B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A16B = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  v6 = *((_DWORD *)Instance + 6);
  if ( v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = Instance + 32;
  while ( 1 )
  {
    Instance = *(char **)&v8[8 * v7];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 37 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= v6 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_421A16A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A16A = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  v5 = *((_DWORD *)Instance + 6);
  if ( v5 < 1 )
    return 0;
  v6 = 0LL;
  v7 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v5 )
    {
      v9 = sub_B0D9A8(Instance);
      sub_B0D948(v9, 0LL);
    }
    Instance = *(char **)&v7[8 * v6];
    if ( !Instance )
      goto LABEL_15;
    if ( (*((_DWORD *)Instance + 5) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= v5 )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *Instance; // x0
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_421A165 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421A165 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v5 = *((_DWORD *)Instance + 6);
  if ( v5 < 1 )
    return 0;
  v6 = 0LL;
  v7 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v5 )
    {
      v9 = sub_B0D9A8(Instance);
      sub_B0D948(v9, 0LL);
    }
    Instance = *(char **)&v7[8 * v6];
    if ( !Instance )
      goto LABEL_14;
    if ( *((_DWORD *)Instance + 5) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= v5 )
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
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v11; // x20
  __int64 v12; // x23
  ShopReleaseEntity_o *v13; // x21
  int64_t UserId; // x22
  __int64 v16; // x0

  if ( (byte_421A163 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A163 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_B0D97C(Instance);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (UserQuestMaster_o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= max_length )
    {
      v16 = sub_B0D9A8(Instance);
      sub_B0D948(v16, 0LL);
    }
    v13 = EntitiyList->m_Items[v12];
    if ( !v13 )
      goto LABEL_22;
    if ( v13->fields.condType == 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v13, 0LL);
      if ( !v11 )
        goto LABEL_22;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v11, UserId, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v12 >= max_length )
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

  if ( (byte_421A160 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421A160 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x3
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421A162 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A162 = 1;
  }
  questId = 0;
  v6 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0LL)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v8);
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
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v12; // x20
  int v13; // w23
  bool v14; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v16; // x21
  int32_t ClearNum; // w0

  if ( (byte_421A161 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A161 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v12 = (UserQuestMaster_o *)Instance;
    v13 = 0;
    v14 = !checkExpired;
    do
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v12 )
        goto LABEL_19;
      EntityFromId = UserQuestMaster__getEntityFromId(v12, (int64_t)Instance, questId, 0LL);
      v16 = EntityFromId;
      if ( EntityFromId == 0LL || v14 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v16 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v16, 0LL);
        if ( !ClearNum )
          return ClearNum;
      }
      ++v13;
    }
    while ( v13 < max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ShopEntity___c_StaticFields *static_fields; // x0

  if ( (byte_421228D & 1) == 0 )
  {
    sub_B0D8A4(&ShopEntity___c_TypeInfo, v1);
    byte_421228D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ShopEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ShopEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_421228E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_421228E = 1;
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
    sub_B0D97C(this);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B0D97C(this);
  return v->fields.giftType == 1;
}