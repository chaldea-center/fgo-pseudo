void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4357A51 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4357A51 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int masterCheckName_high; // w8
  struct System_String_o *emptyMessage; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v15; // x0
  int64_t v16; // x20
  __int64 v17; // x21
  int64_t v18; // x21
  __int64 v19; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  WarEntity_o *v22; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4357A4A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A4A = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  *imageId = this->fields.imageId;
  purchaseType = this->fields.purchaseType;
  if ( purchaseType == 2 )
  {
    TargetId = ShopEntity__get_TargetId(this, (const MethodInfo *)imageId);
    goto LABEL_15;
  }
  if ( purchaseType != 6 )
    goto LABEL_28;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_21C049C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_28:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_43;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, entity->fields.priority, 0LL);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             &v22,
             TargetId,
             (const MethodInfo_21C049C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_43;
        masterCheckName_high = HIDWORD(Instance->fields.masterCheckName);
        if ( masterCheckName_high == 2 )
        {
          if ( !v22 )
            goto LABEL_43;
          v19 = *(_QWORD *)&v22->fields.startType;
          v18 = v22->fields.targetId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v24.fields.currentCryptoKey = v19;
          *(_QWORD *)&v24.fields.fakeValue = v18;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v24, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( v22 )
            {
              v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = *(_QWORD *)&v22->fields.startType;
              v16 = v22->fields.targetId;
LABEL_36:
              if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v15);
              *(_QWORD *)&v25.fields.currentCryptoKey = v17;
              *(_QWORD *)&v25.fields.fakeValue = v16;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v25, 0LL);
              goto LABEL_41;
            }
LABEL_43:
            sub_B7076C(Instance, v7);
          }
        }
        else if ( masterCheckName_high == 1 )
        {
          if ( !v22 )
            goto LABEL_43;
          v14 = *(_QWORD *)&v22->fields.flag;
          emptyMessage = v22->fields.emptyMessage;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v23.fields.currentCryptoKey = v14;
          *(_QWORD *)&v23.fields.fakeValue = emptyMessage;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( v22 )
            {
              v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = *(_QWORD *)&v22->fields.flag;
              v16 = (int64_t)v22->fields.emptyMessage;
              goto LABEL_36;
            }
            goto LABEL_43;
          }
        }
        *imageId = this->fields.imageId;
LABEL_41:
        LOBYTE(DataById) = 1;
        return (char)DataById;
      }
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  return (char)DataById;
}


int32_t __fastcall ShopEntity__CreatePrimaryKey(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ShopEntity__GetAddMessage(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A4E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_16496/*"addMessage"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357A4E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16496/*"addMessage"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_B7076C(0LL, v4);
  return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                              value,
                              value->klass->vtable._4_OnAdd.methodPtr);
}


System_Int32_array *__fastcall ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *v4; // x19
  ShopEntity___c_c *v5; // x0
  __int64 v6; // x9
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__58_0; // x20
  __int64 v9; // x9
  Il2CppObject *v10; // x21
  struct ShopEntity___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x0
  __int64 v19; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357A30 & 1) == 0 )
  {
    sub_B70694(&Method_System_Converter_object__int___ctor__);
    sub_B70694(&System_Converter_object__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__);
    sub_B70694(&ShopEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_16595/*"anotherItemIds"*/);
    byte_4357A30 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16595/*"anotherItemIds"*/,
            &value,
            (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v4 = value;
    if ( !value )
      return 0LL;
    v5 = ShopEntity___c_TypeInfo;
    if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
      v5 = ShopEntity___c_TypeInfo;
    }
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)v4->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_14:
      sub_B70A60(v4);
      return 0LL;
    }
    static_fields = v5->static_fields;
    _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__58_0;
    if ( _9__58_0 )
    {
      v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (System_Collections_Generic_List_object__c *)v4->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_14;
      }
    }
    else
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_object__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__58_0,
        v10,
        Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
        (const MethodInfo_21BC5DC *)Method_System_Converter_object__int___ctor__);
      v11 = ShopEntity___c_TypeInfo->static_fields;
      v11->__9__58_0 = (struct System_Converter_object__int__o *)_9__58_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v11->__9__58_0,
        (System_Int32_array **)_9__58_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                      (System_Collections_Generic_List_BattleActionData_HealData__o *)v4,
                                                      (System_Converter_T__TOutput__o *)_9__58_0,
                                                      (const MethodInfo_195743C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( !v18 )
      sub_B7076C(0LL, v19);
    return System_Collections_Generic_List_int___ToArray(
             v18,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A31 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&PayType_Type_TypeInfo);
    sub_B70694(&StringLiteral_16598/*"anotherPayType"*/);
    byte_4357A31 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16598/*"anotherPayType"*/,
           &value,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B7076C(0LL, v4);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B70A60(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v5, v6);
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
      v12 = sub_B70798(CommonConsumeEntities);
      sub_B70738(v12, 0LL);
    }
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_B7076C(CommonConsumeEntities, v3);
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
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v4; // x1
  __int64 ItemID; // x0
  __int64 v6; // x1

  if ( (byte_4357A50 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4357A50 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v4);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(ItemID, v6);
  return CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_4357A36 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_4357A36 = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A17 & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_19180/*"freeShopCondId"*/);
    byte_4357A17 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19180/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v4, 0LL);
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
  int64_t result; // x0
  __int64 v4; // x1
  ShopEntity_o *v5; // x0
  int32_t *v6; // x1
  int32_t *v7; // x2
  const MethodInfo *v8; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A18 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&StringLiteral_19183/*"freeShopReleaseDate"*/);
    byte_4357A18 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19183/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B7076C(0LL, v4);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B70A60(value);
        ShopEntity__SetSvtIdAndCostumeId(v5, v6, v7, v8);
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
  System_String_o *name; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t purchaseType; // w9
  __int64 *v20; // x8
  int32_t v21; // w0
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  System_String_o **v24; // x0
  void *Instance; // x0
  __int64 v26; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v28; // x1
  unsigned int v29; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x21
  const MethodInfo *v31; // x1
  ServantEntity_o *v32; // x21
  System_String_o *v33; // x21
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t setNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4357A37 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_14897/*"UNIT_INFO"*/);
    sub_B70694(&StringLiteral_12223/*"SERVANT_UNIT"*/);
    sub_B70694(&StringLiteral_5841/*"EXCEPT_SERVANT_UNIT"*/);
    sub_B70694(&StringLiteral_11877/*"SERVANT_EQUIP_UNIT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357A37 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_B70630(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (void *)ShopEntity__get_TargetId(this, v28);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v29 = *((_DWORD *)Instance + 12);
      if ( v29 <= 0xD && ((1 << v29) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v24 = countText;
        v23 = 0LL;
        goto LABEL_18;
      }
      if ( isSend )
      {
        v21 = (_DWORD)this + 64;
        goto LABEL_12;
      }
      v23 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      *countText = v23;
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
      v20 = &StringLiteral_14897/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (void *)ShopEntity__get_TargetId(this, v31),
                !v30)
            || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v30,
                             (int32_t)Instance,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_47:
            sub_B7076C(Instance, v26);
          }
          v32 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v32, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = &StringLiteral_12223/*"SERVANT_UNIT"*/;
          }
          else if ( ServantEntity__get_IsServantEquip(v32, 0LL) )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = &StringLiteral_11877/*"SERVANT_EQUIP_UNIT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v20 = &StringLiteral_5841/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_34:
          v33 = LocalizationManager__Get((System_String_o *)*v20, 0LL);
          setNum = this->fields.setNum;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum, v34);
          v36 = System_String__Format(v33, v35, 0LL);
          *countText = v36;
          sub_B70630(
            (BattleServantConfConponent_o *)countText,
            (System_Int32_array **)v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          return;
        }
LABEL_11:
        v21 = (_DWORD)this + 64;
LABEL_12:
        v22 = System_Int32__ToString(v21, 0LL);
        if ( v22 )
          v23 = v22;
        else
          v23 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v23;
      }
      else
      {
LABEL_16:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        v23 = (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_17:
      v24 = countText;
LABEL_18:
      sub_B70630((BattleServantConfConponent_o *)v24, (System_Int32_array **)v23, v13, v14, v15, v16, v17, v18);
      return;
  }
}


bool __fastcall ShopEntity__GetIsAlreadyInPossession(
        ShopEntity_o *this,
        bool isWithoutPresents,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantMaster_o *v8; // x22
  UserServantStorageMaster_o *v9; // x23
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v11; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x24
  Il2CppObject *v14; // x25
  struct ShopEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int64_t v22; // x21
  int64_t v23; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v25; // x8
  bool v26; // w9
  int64_t v27; // x20
  unsigned __int64 v28; // x25
  bool v29; // w11
  int32_t v30; // w28
  int v31; // w8
  unsigned int v32; // w9
  __int64 v33; // x10
  int v34; // w8
  unsigned int v35; // w26
  __int64 v36; // x8
  __int64 v37; // x19
  __int64 v38; // x23
  int v39; // w8
  unsigned int v40; // w26
  __int64 v41; // x8
  __int64 v42; // x19
  __int64 v43; // x23
  __int64 v45; // x0
  bool v46; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4357A27 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_System_Predicate_UserPresentBoxEntity___ctor__);
    sub_B70694(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__);
    sub_B70694(&ShopEntity___c_TypeInfo);
    byte_4357A27 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v8 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v9 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
  v11 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v11 = ShopEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v14,
      Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v15 = ShopEntity___c_TypeInfo->static_fields;
    v15->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  Instance = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                        VaildList,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v8
    || (v22 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList(v8, 0LL), !v9)
    || (v23 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v9, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_54:
    sub_B7076C(Instance, v6);
  }
  v25 = *(_QWORD *)&targetIds->max_length;
  v26 = v22 == 0;
  if ( (int)v25 < 1 )
    return 0;
  v27 = Instance;
  v28 = 0LL;
  v29 = v26 || isWithoutPresents;
  v46 = v26 || isWithoutPresents;
  while ( 1 )
  {
    if ( v28 >= (unsigned int)v25 )
      goto LABEL_55;
    v30 = targetIds->m_Items[v28 + 1];
    if ( !v29 )
    {
      v31 = *(_DWORD *)(v22 + 24);
      if ( v31 >= 1 )
        break;
    }
LABEL_31:
    if ( !v23 )
      goto LABEL_54;
    v34 = *(_DWORD *)(v23 + 24);
    if ( v34 >= 1 )
    {
      v35 = 0;
      while ( v35 < v34 )
      {
        v36 = *(_QWORD *)(v23 + 8LL * (int)v35 + 32);
        if ( !v36 )
          goto LABEL_54;
        v38 = *(_QWORD *)(v36 + 80);
        v37 = *(_QWORD *)(v36 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v47.fields.currentCryptoKey = v38;
        *(_QWORD *)&v47.fields.fakeValue = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v47, 0LL);
        if ( v30 == (_DWORD)Instance )
          return 1;
        v34 = *(_DWORD *)(v23 + 24);
        if ( (int)++v35 >= v34 )
          goto LABEL_41;
      }
LABEL_55:
      v45 = sub_B70798(Instance);
      sub_B70738(v45, 0LL);
    }
LABEL_41:
    if ( !v27 )
      goto LABEL_54;
    v39 = *(_DWORD *)(v27 + 24);
    if ( v39 >= 1 )
    {
      v40 = 0;
      while ( v40 < v39 )
      {
        v41 = *(_QWORD *)(v27 + 8LL * (int)v40 + 32);
        if ( !v41 )
          goto LABEL_54;
        v43 = *(_QWORD *)(v41 + 80);
        v42 = *(_QWORD *)(v41 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v43;
        *(_QWORD *)&v48.fields.fakeValue = v42;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v48, 0LL);
        if ( v30 == (_DWORD)Instance )
          return 1;
        v39 = *(_DWORD *)(v27 + 24);
        if ( (int)++v40 >= v39 )
          goto LABEL_51;
      }
      goto LABEL_55;
    }
LABEL_51:
    LODWORD(v25) = targetIds->max_length;
    v29 = v46;
    if ( (__int64)++v28 >= (int)v25 )
      return 0;
  }
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= v31 )
      goto LABEL_55;
    v33 = *(_QWORD *)(v22 + 8LL * (int)v32 + 32);
    if ( !v33 )
      goto LABEL_54;
    if ( v30 == *(_DWORD *)(v33 + 76) )
      return 1;
    if ( (int)++v32 >= v31 )
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4357A26 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A26 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Instance, v4);
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
    sub_B7076C(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v4; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B7076C(this, method);
  if ( !itemIds->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  return itemIds->m_Items[1];
}


int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v5; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B7076C(this, num);
  if ( itemIds->max_length <= num )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
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
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x22
  const MethodInfo *v17; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v21; // x1
  int32_t recordNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4357A39 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A39 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v21);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v17),
              !v16)
          || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v16,
                                            (int32_t)Instance,
                                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_B7076C(Instance, v15);
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
  if ( (byte_4357A4D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21717/*"overwriteName"*/);
    byte_4357A4D = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21717/*"overwriteName"*/,
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
    sub_B7076C(this, method);
  if ( !prices->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
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
    return dword_330C4B0[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_330C5D0[v2];
}


int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8
  __int64 v5; // x0

  prices = this->fields.prices;
  if ( !prices )
    sub_B7076C(this, num);
  if ( prices->max_length <= num )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4357A35 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A35 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  ServantEntity_o *result; // x0
  __int64 v4; // x1
  int32_t fakeValue; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o *v7; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v9; // x0

  if ( (byte_4357A45 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A45 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)result, this->fields.id, 0LL);
  if ( result )
  {
    fakeValue = result->fields.id.fields.fakeValue;
    if ( fakeValue >= 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= fakeValue )
        {
          v9 = sub_B70798(result);
          sub_B70738(v9, 0LL);
        }
        v7 = (ShopReleaseEntity_o *)*((_QWORD *)&result->fields.baseSvtId.fields.currentCryptoKey + v6);
        if ( !v7 )
          goto LABEL_18;
        if ( v7->fields.condType == 8 )
          break;
        if ( (int)++v6 >= fakeValue )
          return 0LL;
      }
      result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( result )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)result,
                                                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
        result = (ServantEntity_o *)ShopReleaseEntity__get_condValue(v7, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
          return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)result,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
LABEL_18:
      sub_B7076C(result, v4);
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t flag; // w8
  __int64 *v8; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A32 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_8479/*"LIMITED_SHOP_REMAIN_DAYS"*/);
    sub_B70694(&StringLiteral_8891/*"MONTHLY_SHOP_REMAIN_DAYS"*/);
    sub_B70694(&StringLiteral_22123/*"remainDays"*/);
    byte_4357A32 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22123/*"remainDays"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v8 = &StringLiteral_8479/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v8 = &StringLiteral_8891/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v8, 0LL);
  }
  if ( !value )
    sub_B7076C(0LL, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                            value,
                            value->klass->vtable._4_OnAdd.methodPtr);
  return System_Int32__Parse(v5, 0LL);
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
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  const MethodInfo *v19; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  ShopGroupMaster_o *v22; // x24
  const MethodInfo *v23; // x1
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v25; // x1
  bool v26; // [xsp+0h] [xbp-50h] BYREF
  bool equip; // [xsp+4h] [xbp-4Ch] BYREF
  bool servant; // [xsp+8h] [xbp-48h] BYREF
  bool item; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4357A38 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A38 = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  v26 = 0;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v25);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v22 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v23);
        if ( !v22 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(v22, (int32_t)Instance, &item, &servant, &equip, &v26, 0LL);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( v26 )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v19),
          !v18)
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v18,
                                        (int32_t)Instance,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_B7076C(Instance, v17);
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

  if ( (byte_4357A19 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4357A19 = 1;
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
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4357A1F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A1F = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t AnotherPayItemIds; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x1
  char v9; // w8
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v13; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357A2E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A2E = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_24;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v3);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
  {
    v13 = sub_B70798(AnotherPayItemIds);
    sub_B70738(v13, 0LL);
  }
  v6 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v6 < 1 )
    goto LABEL_24;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B7076C(AnotherPayItemIds, v5);
  UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, AnotherPayItemIds, v6, 0LL);
  v9 = (char)entity;
  if ( !entity )
    return v9 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v8) )
  {
LABEL_24:
    v9 = 0;
    return v9 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)AnotherPayItemIds,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    v9 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v9 = 1;
  return v9 & 1;
}


bool __fastcall ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  int32_t v5; // w19
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A2F & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_23355/*"useAnotherPayCommonReleaseId"*/);
    byte_4357A2F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23355/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v4 = (Il2CppObject *)value;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v5 = System_Convert__ToInt32(v4, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v7);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v5, 0LL, 0, 0LL);
  }
  else
  {
    return 1;
  }
}


bool __fastcall ShopEntity__IsClosed(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8

  if ( (byte_4357A21 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4357A21 = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return closedAt && nowTime > closedAt;
}


bool __fastcall ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v6; // w8
  int32_t limitNum; // w9
  bool v8; // w10
  bool v9; // w8

  if ( (byte_4357A33 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A33 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B7076C(Instance, v4);
  }
  v6 = *(_DWORD *)(Instance + 28);
  limitNum = this->fields.limitNum;
  v8 = v6 > 0;
  v9 = v6 >= limitNum;
  if ( limitNum >= 1 )
    return v9;
  else
    return v8;
}


bool __fastcall ShopEntity__IsCondType_35171424(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t datalist_high; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_4357A34 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A34 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_B7076C(Instance, v6);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w0
  const MethodInfo *v9; // x1
  int32_t svtId[2]; // [xsp+0h] [xbp-20h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A1D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_19180/*"freeShopCondId"*/);
    byte_4357A1D = 1;
  }
  *(_QWORD *)svtId = 0LL;
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19180/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v4)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &svtId[1], svtId, v5);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  v8 = ServantCostumeReleaseMaster__checkItemHaving((ServantCostumeReleaseMaster_o *)Instance, svtId[1], svtId[0], 0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v9) || !v8);
}


bool __fastcall ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v8; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v11; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357A1E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A1E = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
          &v11,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_29;
  v8 = 1;
  if ( !UserEventEntity__getEventFlag(v11, 1, 0LL) )
  {
LABEL_16:
    if ( !nowTime )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      nowTime = NetworkManager__getTime(0LL);
    }
    if ( nowTime < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && nowTime > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_29:
    sub_B7076C(Instance, v6);
  }
  return v8;
}


bool __fastcall ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v6; // x20
  const MethodInfo *v7; // x1
  int v8; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  WarEntity_c *v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x19
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  if ( (byte_4357A4F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&WarEntity_TypeInfo);
    byte_4357A4F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v6 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v7),
        !v6)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v6, (int32_t)Instance, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (v8 = (int)Instance, (Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v11 = Enumerator;
  v12 = 0;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_36;
    klass = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_B08590(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_13:
      v16 = sub_B08590(v11, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                                                  v11,
                                                                  *(_QWORD *)(v16 + 8));
    if ( !Enumerator )
      sub_B7076C(0LL, v17);
    v10 = WarEntity_TypeInfo;
    v18 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[v18 - 1] != WarEntity_TypeInfo )
    {
      sub_B70A60(Enumerator);
LABEL_36:
      sub_B7076C(Enumerator, v10);
    }
    if ( LODWORD(Enumerator[6].klass) == v8 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v12 |= (unsigned __int8)Enumerator;
    }
  }
  v23 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_32:
    v26 = sub_B08590(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(v11, *(_QWORD *)(v26 + 8));
  return v12 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A2D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_22123/*"remainDays"*/);
    byte_4357A2D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22123/*"remainDays"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_B7076C(0LL, v4);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4357A1A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_19180/*"freeShopCondId"*/);
    byte_4357A1A = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19180/*"freeShopCondId"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)script,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ShopEntity__GetFreeShopCondId(
                                                                                                 this,
                                                                                                 v5),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_10:
    sub_B7076C(script, method);
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4357A29 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A29 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4357A2A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A2A = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.id,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A2B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_22123/*"remainDays"*/);
    byte_4357A2B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22123/*"remainDays"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_B7076C(0LL, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A2C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_22123/*"remainDays"*/);
    byte_4357A2C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22123/*"remainDays"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_B7076C(0LL, v4);
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
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357A49 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A49 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields.current )
      sub_B7076C(v8, v9);
    if ( HIDWORD(v12.fields.current[1].klass) == 37 )
    {
      v10 = 1;
      v11 = 4;
      goto LABEL_19;
    }
  }
  v10 = 0;
  v11 = 2;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return (v11 == 4) & v10;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *v8; // x21
  bool IsTimeStatusRecord; // w0
  bool v10; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357A20 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A20 = 1;
  }
  entity = 0LL;
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v8 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_28;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v8 || IsTimeStatusRecord )
      goto LABEL_22;
  }
  else if ( !v8 )
  {
LABEL_22:
    if ( nowTime < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_28:
    sub_B7076C(Instance, v6);
  }
  v10 = 1;
  if ( !UserEventEntity__getEventFlag(v8, 1, 0LL) )
    goto LABEL_22;
  return v10;
}


bool __fastcall ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestMaster_o *v6; // x22
  UserShopMaster_o *v7; // x21
  UserShopEntity_o *v8; // x21
  int64_t updatedAt; // x27
  int64_t v10; // x25
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  bool v13; // w24
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  ShopEntity___c_c *v16; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x24
  int64_t v19; // x21
  char v20; // w8
  Il2CppObject *v21; // x25
  struct ShopEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int64_t v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v31; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x23
  int max_length; // w8
  unsigned int v34; // w25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v35; // x28
  ShopEntity___c_c *v36; // x0
  UserShopEntity_o *v37; // x21
  struct ShopEntity___c_StaticFields *v38; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_1; // x22
  bool v40; // w26
  Il2CppObject *v41; // x24
  struct ShopEntity___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  ShopEntity___c_c *v49; // x0
  struct ShopEntity___c_StaticFields *v50; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_2; // x22
  bool v52; // w26
  Il2CppObject *v53; // x24
  struct ShopEntity___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x22
  ShopEntity___c_c *v62; // x8
  struct ShopEntity___c_StaticFields *v63; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__36_3; // x23
  bool v65; // w26
  Il2CppObject *v66; // x24
  struct ShopEntity___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo_24389F0 *v74; // x3
  bool v75; // w21
  int32_t FreeShopCondId; // w0
  bool result; // w0
  __int64 v78; // x0
  ShopBuyItemListViewItemDraw_o *v79; // x0
  UISprite_o *v80; // x1
  System_String_o *v81; // x2
  const MethodInfo *v82; // x3
  UserShopEntity_o *v83; // [xsp+8h] [xbp-78h]
  bool v84; // [xsp+14h] [xbp-6Ch]
  int64_t v85; // [xsp+20h] [xbp-60h] BYREF
  __int64 v86; // [xsp+28h] [xbp-58h]
  System_Nullable_long__o v87; // 0:x0.16

  if ( (byte_4357A1C & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_UserQuestEntity___);
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&Method_System_Linq_Enumerable_Min_UserQuestEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_UserQuestEntity___);
    sub_B70694(&Method_System_Func_CommonReleaseEntity__bool___ctor__);
    sub_B70694(&Method_System_Func_UserQuestEntity__long___ctor__);
    sub_B70694(&Method_System_Func_UserQuestEntity__bool___ctor__);
    sub_B70694(&System_Func_UserQuestEntity__long__TypeInfo);
    sub_B70694(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_B70694(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    sub_B70694(&Method_System_Nullable_long__get_HasValue__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ShopEntity___c__IsPaidExchange_b__36_0__);
    sub_B70694(&Method_ShopEntity___c__IsPaidExchange_b__36_1__);
    sub_B70694(&Method_ShopEntity___c__IsPaidExchange_b__36_2__);
    sub_B70694(&Method_ShopEntity___c__IsPaidExchange_b__36_3__);
    sub_B70694(&ShopEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_19183/*"freeShopReleaseDate"*/);
    byte_4357A1C = 1;
  }
  v85 = 0LL;
  v86 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v6 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v7 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v7 )
    goto LABEL_79;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v7, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_79;
  v8 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_79;
  updatedAt = v8->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Instance,
                        (System_Type_o *)StringLiteral_19183/*"freeShopReleaseDate"*/,
                        (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_79;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v10 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance);
    v13 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v11) || UserShopEntity__get_IsReturnRarePriShop(v8, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v12);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_79;
    List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
    if ( List )
    {
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v84 = v13;
      v16 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v16 = ShopEntity___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      v83 = v8;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v19 = v10;
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v19 = v10;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_0,
          v21,
          Method_ShopEntity___c__IsPaidExchange_b__36_0__,
          (const MethodInfo_29AC578 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
        v22 = ShopEntity___c_TypeInfo->static_fields;
        v22->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v22->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        v10 = v19;
      }
      v29 = v10;
      v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v15,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v31 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v30,
              (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v32,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v31 )
        goto LABEL_79;
      max_length = v31->max_length;
      if ( max_length >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= max_length )
          {
            v78 = sub_B70798(Instance);
            sub_B70738(v78, 0LL);
          }
          v35 = v31->m_Items[v34];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v35 || !v6 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v6, Instance, (int32_t)v35[1].klass, 0LL);
          if ( Instance )
          {
            if ( !v32 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
          }
          max_length = v31->max_length;
          if ( (int)++v34 >= max_length )
            goto LABEL_42;
        }
LABEL_79:
        sub_B7076C(Instance, v4);
      }
LABEL_42:
      v85 = 0LL;
      v86 = 0LL;
      if ( !v32 )
        goto LABEL_79;
      v13 = v84;
      v10 = v29;
      if ( v32->fields._size < 1 )
        goto LABEL_76;
      v36 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v37 = v83;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v36 = ShopEntity___c_TypeInfo;
        }
      }
      else
      {
        v37 = v83;
      }
      v38 = v36->static_fields;
      _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v38->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v40 = v84;
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v38 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v40 = v84;
        }
        v41 = (Il2CppObject *)v38->__9;
        _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_1,
          v41,
          Method_ShopEntity___c__IsPaidExchange_b__36_1__,
          (const MethodInfo_29AC578 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v42 = ShopEntity___c_TypeInfo->static_fields;
        v42->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v42->__9__36_1,
          (System_Int32_array **)_9__36_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        v13 = v40;
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)v32,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_76;
      v49 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v49 = ShopEntity___c_TypeInfo;
      }
      v50 = v49->static_fields;
      _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v50->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v52 = v13;
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v50 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v52 = v13;
        }
        v53 = (Il2CppObject *)v50->__9;
        _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_2,
          v53,
          Method_ShopEntity___c__IsPaidExchange_b__36_2__,
          (const MethodInfo_29AC578 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v54 = ShopEntity___c_TypeInfo->static_fields;
        v54->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_B70630(
          (BattleServantConfConponent_o *)&v54->__9__36_2,
          (System_Int32_array **)_9__36_2,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        v13 = v52;
      }
      v61 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v32,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v62 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v62 = ShopEntity___c_TypeInfo;
      }
      v63 = v62->static_fields;
      _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v63->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v65 = v13;
          if ( !v62->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v62);
            v63 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v65 = v13;
        }
        v66 = (Il2CppObject *)v63->__9;
        _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B70764(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
          _9__36_3,
          v66,
          Method_ShopEntity___c__IsPaidExchange_b__36_3__,
          (const MethodInfo_29AD8E4 *)Method_System_Func_UserQuestEntity__long___ctor__);
        v67 = ShopEntity___c_TypeInfo->static_fields;
        v67->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_B70630(
          (BattleServantConfConponent_o *)&v67->__9__36_3,
          (System_Int32_array **)_9__36_3,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
        v13 = v65;
      }
      *(_QWORD *)&v87.fields.has_value = System_Linq_Enumerable__Min_UserQuestEntity_(
                                           v61,
                                           (System_Func_TSource__long__o *)_9__36_3,
                                           (const MethodInfo_1CBF900 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      v87.fields.value = (int64_t)&v85;
      System_Nullable_long____ctor(v87, Method_System_Nullable_long___ctor__, v74);
      if ( (_BYTE)v86 )
        v75 = v85 > v37->fields.updatedAt;
      else
LABEL_76:
        v75 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v4);
      v20 = v75 | !CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v20 = 1;
    }
    return (v13 || updatedAt < v10) | v20;
  }
  else
  {
    sub_B70A60(Instance);
    ShopBuyItemListViewItemDraw__SetSpriteName(v79, v80, v81, v82);
  }
  return result;
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4357A22 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A22 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v7; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v9; // x8
  UserQuestMaster_o *v10; // x19
  unsigned __int64 v11; // x24
  int32_t v12; // w21
  __int64 v13; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4357A24 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A24 = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      v7 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_24;
      v9 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = (UserQuestMaster_o *)Instance;
        v11 = 0LL;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v9 )
          {
            v13 = sub_B70798(Instance);
            sub_B70738(v13, 0LL);
          }
          v12 = targetIds->m_Items[v11 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v10 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v10, &entity, Instance, v12, 0LL);
          if ( !entity )
            goto LABEL_22;
          LODWORD(v9) = targetIds->max_length;
          if ( (__int64)++v11 >= (int)v9 )
            goto LABEL_21;
        }
LABEL_24:
        sub_B7076C(Instance, v4);
      }
LABEL_21:
      LOBYTE(EntityDefinitely) = v7->fields.num > 0;
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x19
  UserPresentBoxMaster_o *v4; // x21
  int64_t UserId; // x0
  __int64 v6; // x1
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v8; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v11; // x23
  struct ShopEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int32_array *targetIds; // x22
  __int64 v20; // x8
  int64_t v21; // x20
  unsigned __int64 v22; // x23
  int64_t v23; // x25
  int32_t v24; // w21
  int v25; // w8
  __int64 v26; // x9
  __int64 v27; // x10
  __int64 v29; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4357A28 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_B70694(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_UserPresentBoxEntity___ctor__);
    sub_B70694(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_B70694(&Method_ShopEntity___c__IsServantGet_b__50_0__);
    sub_B70694(&ShopEntity___c_TypeInfo);
    byte_4357A28 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v4 = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_39;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(v4, UserId, 0LL);
  v8 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v8 = ShopEntity___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v11,
      Method_ShopEntity___c__IsServantGet_b__50_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v12 = ShopEntity___c_TypeInfo->static_fields;
    v12->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v12->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  UserId = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                      VaildList,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_39:
    sub_B7076C(UserId, v6);
  v20 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v20 < 1 )
    return 0;
  v21 = UserId;
  v22 = 0LL;
  v23 = UserId + 32;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)v20 )
      goto LABEL_38;
    v24 = targetIds->m_Items[v22 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    UserId = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v24, 0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v21 )
    {
      v25 = *(_DWORD *)(v21 + 24);
      if ( v25 >= 1 )
      {
        v26 = 0LL;
        while ( (unsigned int)v26 < v25 )
        {
          v27 = *(_QWORD *)(v23 + 8 * v26);
          if ( !v27 )
            goto LABEL_39;
          if ( v24 == *(_DWORD *)(v27 + 76) )
            return 1;
          if ( (int)++v26 >= v25 )
            goto LABEL_35;
        }
LABEL_38:
        v29 = sub_B70798(UserId);
        sub_B70738(v29, 0LL);
      }
    }
LABEL_35:
    LODWORD(v20) = targetIds->max_length;
    if ( (__int64)++v22 >= (int)v20 )
      return 0;
  }
}


bool __fastcall ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v10; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4357A1B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&StringLiteral_19180/*"freeShopCondId"*/);
    byte_4357A1B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19180/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
      && ShopEntity__IsAfterTheFreeShopReleaseDate(this, v6) )
    {
      if ( ShopEntity__IsFulFilledFreeExchangeCondition(this, v7) )
      {
        LOBYTE(script) = 1;
      }
      else
      {
        LOBYTE(script) = ShopEntity__IsSoldOut(this, v8);
        if ( ((unsigned __int8)script & 1) == 0 && isInPreparation )
          LOBYTE(script) = ShopEntity__isQuestNotClearItemClosed(this, 0, v10);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4357A25 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A25 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_13;
  if ( this->fields.limitNum < 1 )
  {
LABEL_14:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B7076C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v7) )
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
    v10 = sub_B70798(this);
    sub_B70738(v10, 0LL);
  }
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_B7076C(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_44821904((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4357A23 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A23 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0

  if ( (byte_4357A3A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3A = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (WebViewManager_o *)ShopEntity__get_TargetId(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B7076C(Instance, v4);
  }
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v7);
  return !ItemMaster__isFriendPoint(MasterData_WarQuestSelectionMaster, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t *p_lookup; // x8
  int32_t TargetId; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  UserItemMaster_o *v12; // x20
  int64_t UserId; // x21
  const MethodInfo *v14; // x1

  if ( (byte_4357A3B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v6);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !ItemMaster__isMana(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v7);
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
      v11 = ShopEntity__get_TargetId(this, v10);
      if ( ItemMaster__isStone(MasterData_WarQuestSelectionMaster, v11, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
          if ( v12 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(v12, UserId, (int32_t)Instance, 0LL);
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
    sub_B7076C(Instance, v4);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_22;
  p_lookup = (int32_t *)&Instance[1].fields.masterDataBytes;
  return *p_lookup;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  WarEntity_o *v11; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4357A4C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A4C = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v5);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)Instance,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_22:
    sub_B7076C(Instance, v4);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          &v11,
          entity->fields.flag,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_22;
  if ( ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v11, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v10);
  else
    return this->fields.name;
}


int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B7076C(this, id);
  if ( targetIds->max_length <= id )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B7076C(this, method);
  if ( !targetIds->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B7076C(this, method);
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
  int64_t Instance; // x0
  __int64 v4; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  QuestMaster_o *v6; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v8; // x22
  int max_length; // w28
  int32_t v10; // w24
  const MethodInfo *v11; // x2
  int v12; // w8
  int64_t v13; // x25
  unsigned int v14; // w26
  __int64 v15; // x27
  int v16; // w23
  _BOOL4 v17; // w25
  int64_t UserId; // x26
  const MethodInfo *v19; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UserQuestEntity_o *v23; // x26
  QuestEntity_o *Entity; // x0
  const MethodInfo *v25; // x1
  __int64 v27; // x0
  int64_t v28; // [xsp+8h] [xbp-58h]

  if ( (byte_4357A3C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3C = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v6 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_42;
    v8 = (QuestReleaseMaster_o *)Instance;
    max_length = targetIds->max_length;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    v28 = Instance;
    if ( max_length >= 1 )
    {
      if ( v8 )
      {
        v10 = 0;
        while ( 1 )
        {
          Instance = (int64_t)QuestReleaseMaster__getListByType(v8, 13, 0LL);
          if ( !Instance )
            break;
          v12 = *(_DWORD *)(Instance + 24);
          v13 = Instance;
          if ( v12 < 1 )
          {
LABEL_24:
            v17 = 1;
          }
          else
          {
            v14 = 0;
            while ( 1 )
            {
              if ( v14 >= v12 )
              {
                v27 = sub_B70798(Instance);
                sub_B70738(v27, 0LL);
              }
              v15 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
              if ( !v15 )
                goto LABEL_42;
              v16 = *(_DWORD *)(v15 + 16);
              Instance = ShopEntity__getTargetId(this, v10, v11);
              if ( v16 == (_DWORD)Instance )
              {
                if ( !v6 )
                  goto LABEL_42;
                Instance = (int64_t)QuestMaster__getQuestEntity(v6, *(_DWORD *)(v15 + 16), 0LL);
                if ( !Instance )
                  goto LABEL_42;
                Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
                if ( (Instance & 1) == 0 )
                  break;
              }
              v12 = *(_DWORD *)(v13 + 24);
              if ( (int)++v14 >= v12 )
                goto LABEL_24;
            }
            v17 = 0;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = ShopEntity__getTargetId(this, v10, v19);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, Instance, 0LL);
          if ( EntityFromId )
          {
            v23 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v21) )
              goto LABEL_40;
            if ( v23->fields.expireAt < v28 )
              return v17;
          }
          else
          {
            Instance = ShopEntity__getTargetId(this, v10, v22);
            if ( !v6 )
              break;
            Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                                        Instance,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt(Entity, 0LL) < v28
              || (v17 & !ShopEntity__IsEventQuest(this, v25) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v10 >= max_length )
            goto LABEL_39;
        }
      }
LABEL_42:
      sub_B7076C(Instance, v4);
    }
LABEL_39:
    LOBYTE(v17) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v17) = 0;
  }
  return v17;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v12; // x9
  ItemMaster_o *v13; // x23
  __int64 v14; // x25
  __int64 v15; // x26
  unsigned __int64 v16; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v19; // x8
  __int64 mana; // x24
  __int64 v21; // x28
  struct System_Int32_array *v22; // x8
  __int64 rarePri; // x24
  __int64 v24; // x28
  struct System_Int32_array *v25; // x8
  BalanceConfig_c *v26; // x8
  __int64 v27; // x28
  int v28; // w24
  int32_t v29; // w8
  __int64 v30; // x0

  if ( (byte_4357A4B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A4B = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_45:
    sub_B7076C(Instance, v10);
  }
  v12 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v12 < 1 )
    return 0;
  v13 = (ItemMaster_o *)Instance;
  v14 = (int)v12;
  v15 = 8LL;
  while ( 1 )
  {
    v16 = v15 - 8;
    if ( v15 - 8 >= (unsigned __int64)targetIds->max_length )
    {
LABEL_50:
      v30 = sub_B70798(Instance);
      sub_B70738(v30, 0LL);
    }
    if ( !v13 )
      goto LABEL_45;
    Instance = (DataManager_o *)ItemMaster__isQP(v13, *((_DWORD *)&targetIds->obj.klass + v15), 0LL);
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
    v19 = this->fields.targetIds;
    if ( !v19 )
      goto LABEL_45;
    if ( v16 >= v19->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isMana(v13, *((_DWORD *)&v19->obj.klass + v15), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v21 = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v21 * buyCount > SLODWORD(Instance[1].fields.saveNameList->monitor) )
      {
        v29 = 5;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    v22 = this->fields.targetIds;
    if ( !v22 )
      goto LABEL_45;
    if ( v16 >= v22->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v13, *((_DWORD *)&v22->obj.klass + v15), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v24 = this->fields.setNum;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v24 * buyCount > SHIDWORD(Instance[1].fields.saveNameList->monitor) )
    {
      v29 = 22;
      goto LABEL_49;
    }
LABEL_43:
    if ( v15 - 7 >= v14 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v15;
    if ( !targetIds )
      goto LABEL_45;
  }
  v25 = this->fields.targetIds;
  if ( !v25 )
    goto LABEL_45;
  if ( v16 >= v25->max_length )
    goto LABEL_50;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v13, *((_DWORD *)&v25->obj.klass + v15), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_43;
  if ( !SelfUserGame )
    goto LABEL_45;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v26 = BalanceConfig_TypeInfo;
  v27 = this->fields.setNum;
  v28 = (int)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( v27 * buyCount + v28 <= v26->static_fields->FriendPointMax )
    goto LABEL_43;
  v29 = 13;
LABEL_49:
  *check = v29;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v6; // x19
  __int64 v7; // x24
  ShopReleaseEntity_o *v8; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v12; // w23
  __int64 v14; // x0

  if ( (byte_4357A46 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A46 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B7076C(Instance, v4);
  }
  datalist = Instance->fields.datalist;
  v6 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)datalist )
    {
      v14 = sub_B70798(Instance);
      sub_B70738(v14, 0LL);
    }
    v8 = (ShopReleaseEntity_o *)*((_QWORD *)&v6->fields.lookup + v7);
    if ( !v8 )
      goto LABEL_20;
    condType = v8->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_17:
    if ( (int)++v7 >= (int)datalist )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(*((ShopReleaseEntity_o **)&v6->fields.lookup + v7), 0LL);
  condNum = v8->fields.condNum;
  v12 = condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsTotalTdLvCond(condType, v12, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    datalist = v6->fields.datalist;
    goto LABEL_17;
  }
  return ShopReleaseEntity__IsPreparation(v8, 0LL);
}


bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v8; // x8
  UserQuestMaster_o *v9; // x20
  __int64 v10; // x23
  ShopReleaseEntity_o *v11; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v15; // x0

  if ( (byte_4357A41 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A41 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_23:
    sub_B7076C(Instance, v6);
  }
  v8 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (UserQuestMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= (unsigned int)v8 )
    {
      v15 = sub_B70798(Instance);
      sub_B70738(v15, 0LL);
    }
    v11 = EntitiyList->m_Items[v10];
    if ( !v11 )
      goto LABEL_23;
    if ( v11->fields.condType == 1 )
      break;
LABEL_20:
    if ( (int)++v10 >= (int)v8 )
      return 0;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v11, 0LL);
  if ( !v9 )
    goto LABEL_23;
  EntityFromId = UserQuestMaster__getEntityFromId(v9, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v8 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_4357A43 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A43 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v4);
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
      v9 = sub_B70798(Instance);
      sub_B70738(v9, 0LL);
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
  char *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_4357A44 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A44 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v4);
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
      v9 = sub_B70798(Instance);
      sub_B70738(v9, 0LL);
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
  int32_t purchaseType; // w8
  char *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  __int64 v7; // x9
  char *v8; // x10

  if ( (byte_4357A48 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A48 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v5);
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
  char *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_4357A47 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A47 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v4);
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
      v9 = sub_B70798(Instance);
      sub_B70738(v9, 0LL);
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
  char *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  __int64 v6; // x9
  char *v7; // x10
  __int64 v9; // x0

  if ( (byte_4357A42 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A42 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v4);
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
      v9 = sub_B70798(Instance);
      sub_B70738(v9, 0LL);
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


bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v9; // x20
  __int64 v10; // x23
  ShopReleaseEntity_o *v11; // x21
  int64_t UserId; // x22
  __int64 v14; // x0

  if ( (byte_4357A40 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A40 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_B7076C(Instance, v6);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (UserQuestMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
    {
      v14 = sub_B70798(Instance);
      sub_B70738(v14, 0LL);
    }
    v11 = EntitiyList->m_Items[v10];
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.condType == 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v11, 0LL);
      if ( !v9 )
        goto LABEL_22;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v9, UserId, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isQuestNotClear(
        ShopEntity_o *this,
        int32_t *questId,
        bool checkExpired,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4357A3D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3D = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  bool v5; // w0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4357A3F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3F = 1;
  }
  questId = 0;
  v5 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v7);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0LL)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v8);
  }
  return v5;
}


bool __fastcall ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v11; // x20
  int v12; // w23
  bool v13; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x21
  int32_t ClearNum; // w0

  if ( (byte_4357A3E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4357A3E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_19:
    sub_B7076C(Instance, v8);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v11 = (UserQuestMaster_o *)Instance;
    v12 = 0;
    v13 = !checkExpired;
    do
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v11 )
        goto LABEL_19;
      EntityFromId = UserQuestMaster__getEntityFromId(v11, (int64_t)Instance, questId, 0LL);
      v15 = EntityFromId;
      if ( EntityFromId == 0LL || v13 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v15 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v15, 0LL);
        if ( !ClearNum )
          return ClearNum;
      }
      ++v12;
    }
    while ( v12 < max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F879 & 1) == 0 )
  {
    sub_B70694(&ShopEntity___c_TypeInfo);
    byte_434F879 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ShopEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_434F87A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F87A = 1;
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
    sub_B7076C(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B7076C(this, 0LL);
  return v->fields.giftType == 1;
}