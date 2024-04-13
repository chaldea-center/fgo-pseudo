void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE5C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EE5C9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v27; // x1
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v29; // x21
  int masterCheckName_high; // w8
  struct System_String_o *emptyMessage; // x21
  __int64 v32; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v33; // x0
  int64_t v34; // x20
  __int64 v35; // x21
  int64_t targetId; // x21
  __int64 v37; // x22
  WarEntity_o *v39; // [xsp+8h] [xbp-38h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42EE5C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, (_DWORD)imageId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42EE5C2 = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  *imageId = this->fields.imageId;
  if ( this->fields.purchaseType != 6 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v27);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, entity->fields.priority, 0LL);
  if ( !DataById )
    return (char)DataById;
  v29 = DataById;
  if ( DataById->fields.type != 5 )
    goto LABEL_25;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v39,
          v29->fields.objectId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
    if ( !v39 )
      goto LABEL_40;
    v37 = *(_QWORD *)&v39->fields.startType;
    targetId = v39->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v37;
    *(_QWORD *)&v42.fields.fakeValue = targetId;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v39 )
      {
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v35 = *(_QWORD *)&v39->fields.startType;
        v34 = v39->fields.targetId;
LABEL_34:
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v33);
        *(_QWORD *)&v43.fields.currentCryptoKey = v35;
        *(_QWORD *)&v43.fields.fakeValue = v34;
        *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
        goto LABEL_39;
      }
LABEL_40:
      sub_B5D69C(Instance, v25);
    }
  }
  else if ( masterCheckName_high == 1 )
  {
    if ( !v39 )
      goto LABEL_40;
    v32 = *(_QWORD *)&v39->fields.flag;
    emptyMessage = v39->fields.emptyMessage;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v32;
    *(_QWORD *)&v41.fields.fakeValue = emptyMessage;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
    if ( (int)Instance >= 1 )
    {
      if ( v39 )
      {
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v35 = *(_QWORD *)&v39->fields.flag;
        v34 = (int64_t)v39->fields.emptyMessage;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16452/*"addMessage"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EE5C6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16452/*"addMessage"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_B5D69C(0LL, v12);
  return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                              value,
                              value->klass->vtable._4_OnAdd.methodPtr);
}


System_Int32_array *__fastcall ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Int32_array *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *v30; // x19
  ShopEntity___c_c *v31; // x0
  __int64 v32; // x9
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__58_0; // x20
  __int64 v35; // x9
  Il2CppObject *v36; // x21
  struct ShopEntity___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_int__o *v44; // x0
  __int64 v45; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE5A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v20, v21, v22);
    sub_B5D5C4(&ShopEntity___c_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16551/*"anotherItemIds"*/, v26, v27, v28);
    byte_42EE5A8 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16551/*"anotherItemIds"*/,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v30 = value;
    if ( !value )
      return 0LL;
    v31 = ShopEntity___c_TypeInfo;
    if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
      v31 = ShopEntity___c_TypeInfo;
    }
    v32 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (System_Collections_Generic_List_object__c *)v30->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_14:
      sub_B5D990(v30);
      return 0LL;
    }
    static_fields = v31->static_fields;
    _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__58_0;
    if ( _9__58_0 )
    {
      v35 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v35
        || (System_Collections_Generic_List_object__c *)v30->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_14;
      }
    }
    else
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__58_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__58_0,
        v36,
        Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
        (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
      v37 = ShopEntity___c_TypeInfo->static_fields;
      v37->__9__58_0 = (struct System_Converter_object__int__o *)_9__58_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v37->__9__58_0,
        (System_Int32_array **)_9__58_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                      (System_Collections_Generic_List_BattleActionData_HealData__o *)v30,
                                                      (System_Converter_T__TOutput__o *)_9__58_0,
                                                      (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( !v44 )
      sub_B5D69C(0LL, v45);
    return System_Collections_Generic_List_int___ToArray(
             v44,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  ShopEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PayType_Type_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16554/*"anotherPayType"*/, v8, v9, v10);
    byte_42EE5A9 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_16554/*"anotherPayType"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B5D69C(0LL, v12);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B5D990(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v13, v14);
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
      v12 = sub_B5D6C8(CommonConsumeEntities);
      sub_B5D668(v12, 0LL);
    }
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_B5D69C(CommonConsumeEntities, v3);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  __int64 ItemID; // x0
  __int64 v11; // x1

  if ( (byte_42EE5C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonConsumeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EE5C8 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v9);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(ItemID, v11);
  return CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t setNum; // w19

  if ( (byte_42EE5AE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE5AE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v12; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE58F & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v8, v9, v10);
    byte_42EE58F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v12 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t result; // x0
  __int64 v12; // x1
  ShopEntity_o *v13; // x0
  int32_t *v14; // x1
  int32_t *v15; // x2
  const MethodInfo *v16; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE590 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19128/*"freeShopReleaseDate"*/, v8, v9, v10);
    byte_42EE590 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19128/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_B5D69C(0LL, v12);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value);
      }
      else
      {
        sub_B5D990(value);
        ShopEntity__SetSvtIdAndCostumeId(v13, v14, v15, v16);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_o *name; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t purchaseType; // w9
  __int64 *v53; // x8
  int32_t v54; // w0
  System_String_o *v55; // x0
  System_String_o *v56; // x1
  System_String_o **v57; // x0
  void *Instance; // x0
  __int64 v59; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v61; // x1
  unsigned int v62; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x21
  const MethodInfo *v64; // x1
  ServantEntity_o *v65; // x21
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int32_t setNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EE5AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)nameText, (_DWORD)countText, isSend);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12202/*"SERVANT_UNIT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    byte_42EE5AF = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_B5D560(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (void *)ShopEntity__get_TargetId(this, v61);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v62 = *((_DWORD *)Instance + 12);
      if ( v62 <= 0xD && ((1 << v62) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v57 = countText;
        v56 = 0LL;
        goto LABEL_18;
      }
      if ( isSend )
      {
        v54 = (_DWORD)this + 64;
        goto LABEL_12;
      }
      v56 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      *countText = v56;
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
      v53 = &StringLiteral_14869/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (void *)ShopEntity__get_TargetId(this, v64),
                !v63)
            || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v63,
                             (int32_t)Instance,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_47:
            sub_B5D69C(Instance, v59);
          }
          v65 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v65, 0LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v53 = &StringLiteral_12202/*"SERVANT_UNIT"*/;
          }
          else if ( ServantEntity__get_IsServantEquip(v65, 0LL) )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v53 = &StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v53 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_34:
          v66 = LocalizationManager__Get((System_String_o *)*v53, 0LL);
          setNum = this->fields.setNum;
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v68 = System_String__Format(v66, v67, 0LL);
          *countText = v68;
          sub_B5D560(
            (BattleServantConfConponent_o *)countText,
            (System_Int32_array **)v68,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
          return;
        }
LABEL_11:
        v54 = (_DWORD)this + 64;
LABEL_12:
        v55 = System_Int32__ToString(v54, 0LL);
        if ( v55 )
          v56 = v55;
        else
          v56 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v56;
      }
      else
      {
LABEL_16:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        v56 = (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_17:
      v57 = countText;
LABEL_18:
      sub_B5D560((BattleServantConfConponent_o *)v57, (System_Int32_array **)v56, v46, v47, v48, v49, v50, v51);
      return;
  }
}


bool __fastcall ShopEntity__GetIsAlreadyInPossession(
        ShopEntity_o *this,
        bool isWithoutPresents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int64_t Instance; // x0
  __int64 v37; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantMaster_o *v39; // x22
  UserServantStorageMaster_o *v40; // x23
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v42; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x24
  Il2CppObject *v45; // x25
  struct ShopEntity___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int64_t v53; // x21
  int64_t v54; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v56; // x8
  bool v57; // w9
  int64_t v58; // x20
  unsigned __int64 v59; // x25
  bool v60; // w11
  int32_t v61; // w28
  int v62; // w8
  unsigned int v63; // w9
  __int64 v64; // x10
  int v65; // w8
  unsigned int v66; // w26
  __int64 v67; // x8
  __int64 v68; // x19
  __int64 v69; // x23
  int v70; // w8
  unsigned int v71; // w26
  __int64 v72; // x8
  __int64 v73; // x19
  __int64 v74; // x23
  __int64 v76; // x0
  bool v77; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_42EE59F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v30, v31, v32);
    sub_B5D5C4(&ShopEntity___c_TypeInfo, v33, v34, v35);
    byte_42EE59F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v39 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v40 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
  v42 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v42 = ShopEntity___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v45,
      Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v46 = ShopEntity___c_TypeInfo->static_fields;
    v46->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  Instance = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                        VaildList,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_1FC072C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v39
    || (v53 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList(v39, 0LL), !v40)
    || (v54 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList(v40, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_54:
    sub_B5D69C(Instance, v37);
  }
  v56 = *(_QWORD *)&targetIds->max_length;
  v57 = v53 == 0;
  if ( (int)v56 < 1 )
    return 0;
  v58 = Instance;
  v59 = 0LL;
  v60 = v57 || isWithoutPresents;
  v77 = v57 || isWithoutPresents;
  while ( 1 )
  {
    if ( v59 >= (unsigned int)v56 )
      goto LABEL_55;
    v61 = targetIds->m_Items[v59 + 1];
    if ( !v60 )
    {
      v62 = *(_DWORD *)(v53 + 24);
      if ( v62 >= 1 )
        break;
    }
LABEL_31:
    if ( !v54 )
      goto LABEL_54;
    v65 = *(_DWORD *)(v54 + 24);
    if ( v65 >= 1 )
    {
      v66 = 0;
      while ( v66 < v65 )
      {
        v67 = *(_QWORD *)(v54 + 8LL * (int)v66 + 32);
        if ( !v67 )
          goto LABEL_54;
        v69 = *(_QWORD *)(v67 + 80);
        v68 = *(_QWORD *)(v67 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v78.fields.currentCryptoKey = v69;
        *(_QWORD *)&v78.fields.fakeValue = v68;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78, 0LL);
        if ( v61 == (_DWORD)Instance )
          return 1;
        v65 = *(_DWORD *)(v54 + 24);
        if ( (int)++v66 >= v65 )
          goto LABEL_41;
      }
LABEL_55:
      v76 = sub_B5D6C8(Instance);
      sub_B5D668(v76, 0LL);
    }
LABEL_41:
    if ( !v58 )
      goto LABEL_54;
    v70 = *(_DWORD *)(v58 + 24);
    if ( v70 >= 1 )
    {
      v71 = 0;
      while ( v71 < v70 )
      {
        v72 = *(_QWORD *)(v58 + 8LL * (int)v71 + 32);
        if ( !v72 )
          goto LABEL_54;
        v74 = *(_QWORD *)(v72 + 80);
        v73 = *(_QWORD *)(v72 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v79.fields.currentCryptoKey = v74;
        *(_QWORD *)&v79.fields.fakeValue = v73;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
        if ( v61 == (_DWORD)Instance )
          return 1;
        v70 = *(_DWORD *)(v58 + 24);
        if ( (int)++v71 >= v70 )
          goto LABEL_51;
      }
      goto LABEL_55;
    }
LABEL_51:
    LODWORD(v56) = targetIds->max_length;
    v60 = v77;
    if ( (__int64)++v59 >= (int)v56 )
      return 0;
  }
  v63 = 0;
  while ( 1 )
  {
    if ( v63 >= v62 )
      goto LABEL_55;
    v64 = *(_QWORD *)(v53 + 8LL * (int)v63 + 32);
    if ( !v64 )
      goto LABEL_54;
    if ( v61 == *(_DWORD *)(v64 + 76) )
      return 1;
    if ( (int)++v63 >= v62 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_42EE59E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE59E = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Instance, v12);
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
    sub_B5D69C(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v4; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B5D69C(this, method);
  if ( !itemIds->max_length )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  return itemIds->m_Items[1];
}


int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  __int64 v5; // x0

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_B5D69C(this, num);
  if ( itemIds->max_length <= num )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x22
  const MethodInfo *v26; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v30; // x1
  int32_t recordNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EE5B1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)buyItemNum,
      (_DWORD)buyServantNum,
      buyServantEquipNum);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SetItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EE5B1 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v30);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v26),
              !v25)
          || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v25,
                                            (int32_t)Instance,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_B5D69C(Instance, v24);
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
  __int64 v3; // x3

  if ( (byte_42EE5C5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21654/*"overwriteName"*/, (_DWORD)defaultValue, (_DWORD)method, v3);
    byte_42EE5C5 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21654/*"overwriteName"*/,
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
    sub_B5D69C(this, method);
  if ( !prices->max_length )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
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
    return dword_32C4590[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_32C46B0[v2];
}


int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8
  __int64 v5; // x0

  prices = this->fields.prices;
  if ( !prices )
    sub_B5D69C(this, num);
  if ( prices->max_length <= num )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EE5AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5AD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ServantEntity_o *result; // x0
  __int64 v15; // x1
  int32_t fakeValue; // w8
  __int64 v17; // x9
  ShopReleaseEntity_o *v18; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v20; // x0

  if ( (byte_42EE5BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE5BD = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !result )
    goto LABEL_18;
  result = (ServantEntity_o *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)result, this->fields.id, 0LL);
  if ( result )
  {
    fakeValue = result->fields.id.fields.fakeValue;
    if ( fakeValue >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= fakeValue )
        {
          v20 = sub_B5D6C8(result);
          sub_B5D668(v20, 0LL);
        }
        v18 = (ShopReleaseEntity_o *)*((_QWORD *)&result->fields.baseSvtId.fields.currentCryptoKey + v17);
        if ( !v18 )
          goto LABEL_18;
        if ( v18->fields.condType == 8 )
          break;
        if ( (int)++v17 >= fakeValue )
          return 0LL;
      }
      result = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( result )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)result,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        result = (ServantEntity_o *)ShopReleaseEntity__get_condValue(v18, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
          return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)result,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
LABEL_18:
      sub_B5D69C(result, v15);
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  int32_t flag; // w8
  __int64 *v19; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8464/*"LIMITED_SHOP_REMAIN_DAYS"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8876/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22055/*"remainDays"*/, v11, v12, v13);
    byte_42EE5AA = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22055/*"remainDays"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v19 = &StringLiteral_8464/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v19 = &StringLiteral_8876/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v19, 0LL);
  }
  if ( !value )
    sub_B5D69C(0LL, v15);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                             value,
                             value->klass->vtable._4_OnAdd.methodPtr);
  return System_Int32__Parse(v16, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x22
  const MethodInfo *v31; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  ShopGroupMaster_o *v34; // x24
  const MethodInfo *v35; // x1
  SetItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v37; // x1
  bool v38; // [xsp+0h] [xbp-50h] BYREF
  bool equip; // [xsp+4h] [xbp-4Ch] BYREF
  bool servant; // [xsp+8h] [xbp-48h] BYREF
  bool item; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EE5B0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)buyItemNum,
      (_DWORD)buyServantNum,
      buyServantEquipNum);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SetItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EE5B0 = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  v38 = 0;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_WarQuestSelectionMaster = (SetItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v37);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v34 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v35);
        if ( !v34 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(v34, (int32_t)Instance, &item, &servant, &equip, &v38, 0LL);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( v38 )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v31),
          !v30)
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v30,
                                        (int32_t)Instance,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_B5D69C(Instance, v29);
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
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42EE591 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE591 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v6) && ShopEntity__GetFreeShopReleaseDate(this, v7) > 0;
}


bool __fastcall ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42EE597 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE597 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  int64_t AnotherPayItemIds; // x0
  __int64 v19; // x1
  int32_t v20; // w20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v22; // x1
  char v23; // w8
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v27; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE5A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EE5A6 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_24;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v17);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
  {
    v27 = sub_B5D6C8(AnotherPayItemIds);
    sub_B5D668(v27, 0LL);
  }
  v20 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v20 < 1 )
    goto LABEL_24;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B5D69C(AnotherPayItemIds, v19);
  UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, AnotherPayItemIds, v20, 0LL);
  v23 = (char)entity;
  if ( !entity )
    return v23 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v22) )
  {
LABEL_24:
    v23 = 0;
    return v23 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)AnotherPayItemIds,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    v23 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v23 = 1;
  return v23 & 1;
}


bool __fastcall ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v18; // x19
  int32_t v19; // w19
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5A7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23283/*"useAnotherPayCommonReleaseId"*/, v14, v15, v16);
    byte_42EE5A7 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23283/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v18 = (Il2CppObject *)value;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v19 = System_Convert__ToInt32(v18, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v21);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v19, 0LL, 0, 0LL);
  }
  else
  {
    return 1;
  }
}


bool __fastcall ShopEntity__IsClosed(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int64_t closedAt; // x8

  Time = nowTime;
  if ( (byte_42EE599 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42EE599 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v14; // w8
  int32_t limitNum; // w9
  bool v16; // w10
  bool v17; // w8

  if ( (byte_42EE5AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE5AB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  v14 = *(_DWORD *)(Instance + 28);
  limitNum = this->fields.limitNum;
  v16 = v14 > 0;
  v17 = v14 >= limitNum;
  if ( limitNum >= 1 )
    return v17;
  else
    return v16;
}


bool __fastcall ShopEntity__IsCondType_35101016(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t datalist_high; // w8
  int32_t limitNum; // w9
  bool v13; // w10
  bool v14; // w8

  if ( (byte_42EE5AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, userId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EE5AC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  datalist_high = HIDWORD(Instance->fields.datalist);
  limitNum = this->fields.limitNum;
  v13 = datalist_high > 0;
  v14 = datalist_high >= limitNum;
  if ( limitNum >= 1 )
    return v14;
  else
    return v13;
}


bool __fastcall ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  bool v19; // w0
  const MethodInfo *v20; // x1
  int32_t svtId[2]; // [xsp+0h] [xbp-20h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE595 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v11, v12, v13);
    byte_42EE595 = 1;
  }
  *(_QWORD *)svtId = 0LL;
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v15)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &svtId[1], svtId, v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v18);
  }
  v19 = ServantCostumeReleaseMaster__checkItemHaving((ServantCostumeReleaseMaster_o *)Instance, svtId[1], svtId[0], 0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v20) || !v19);
}


bool __fastcall ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v24; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v27; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_42EE596 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EE596 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_29;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
          &v27,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)v27;
  if ( !v27 )
    goto LABEL_29;
  v24 = 1;
  if ( !UserEventEntity__getEventFlag(v27, 1, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_29:
    sub_B5D69C(Instance, v22);
  }
  return v24;
}


bool __fastcall ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v29; // x20
  const MethodInfo *v30; // x1
  int v31; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  WarEntity_c *v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *v35; // x19
  char v36; // w21
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v44; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v47; // x3
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0

  if ( (byte_42EE5C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&WarEntity_TypeInfo, v23, v24, v25);
    byte_42EE5C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v29 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v30),
        !v29)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId(v29, (int32_t)Instance, 0LL),
        !MasterData_WarQuestSelectionMaster)
    || (v31 = (int)Instance, (Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster->fields.list) == 0LL) )
  {
    sub_B5D69C(Instance, v27);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v35 = Enumerator;
  v36 = 0;
  while ( 1 )
  {
    if ( !v35 )
      goto LABEL_36;
    klass = v35->klass;
    if ( *(_WORD *)&v35->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        p_offset += 4;
        if ( v44 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AF54C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v35,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = v35->klass;
    if ( *(_WORD *)&v35->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_13:
      v40 = sub_AF54C0(v35, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v47);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                  v35,
                                                                  *(_QWORD *)(v40 + 8));
    if ( !Enumerator )
      sub_B5D69C(0LL, v41);
    v33 = WarEntity_TypeInfo;
    v42 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[v42 - 1] != WarEntity_TypeInfo )
    {
      sub_B5D990(Enumerator);
LABEL_36:
      sub_B5D69C(Enumerator, v33);
    }
    if ( LODWORD(Enumerator[6].klass) == v31 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v36 |= (unsigned __int8)Enumerator;
    }
  }
  v48 = v35->klass;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_32:
    v51 = sub_AF54C0(v35, System_IDisposable_TypeInfo, 0LL, v47);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(v35, *(_QWORD *)(v51 + 8));
  return v36 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  int32_t v11; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22055/*"remainDays"*/, v5, v6, v7);
    byte_42EE5A5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22055/*"remainDays"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_B5D69C(0LL, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                             value,
                             value->klass->vtable._4_OnAdd.methodPtr);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( v11 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v11;
}


bool __fastcall ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *script; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v16; // x1

  if ( (byte_42EE592 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v11, v12, v13);
    byte_42EE592 = 1;
  }
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)script,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ShopEntity__GetFreeShopCondId(
                                                                                                 this,
                                                                                                 v16),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_10:
    sub_B5D69C(script, method);
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_42EE5A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE5A1 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Instance, v12);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_42EE5A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE5A2 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Instance, v12);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.id,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  int32_t v11; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22055/*"remainDays"*/, v5, v6, v7);
    byte_42EE5A3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22055/*"remainDays"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_B5D69C(0LL, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                             value,
                             value->klass->vtable._4_OnAdd.methodPtr);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( v11 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v11;
}


bool __fastcall ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  int32_t v11; // w0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE5A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22055/*"remainDays"*/, v5, v6, v7);
    byte_42EE5A4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22055/*"remainDays"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_B5D69C(0LL, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                             value,
                             value->klass->vtable._4_OnAdd.methodPtr);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( v11 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v11;
}


bool __fastcall ShopEntity__IsNotClearNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  char v30; // w19
  int v31; // w20
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE5C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EE5C1 = 1;
  }
  memset(&v32, 0, sizeof(v32));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v27);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    if ( !v28 )
      break;
    if ( !v32.fields.current )
      sub_B5D69C(v28, v29);
    if ( HIDWORD(v32.fields.current[1].klass) == 37 )
    {
      v30 = 1;
      v31 = 4;
      goto LABEL_19;
    }
  }
  v30 = 0;
  v31 = 2;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return (v31 == 4) & v30;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *v24; // x21
  bool IsTimeStatusRecord; // w0
  bool v26; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Time = nowTime;
  if ( (byte_42EE598 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EE598 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v24 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_28;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v24 || IsTimeStatusRecord )
      goto LABEL_22;
  }
  else if ( !v24 )
  {
LABEL_22:
    if ( Time < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_28:
    sub_B5D69C(Instance, v22);
  }
  v26 = 1;
  if ( !UserEventEntity__getEventFlag(v24, 1, 0LL) )
    goto LABEL_22;
  return v26;
}


bool __fastcall ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int64_t Instance; // x0
  const MethodInfo *v96; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestMaster_o *v98; // x22
  UserShopMaster_o *v99; // x21
  UserShopEntity_o *v100; // x21
  int64_t updatedAt; // x27
  int64_t v102; // x25
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x1
  bool v105; // w24
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x23
  ShopEntity___c_c *v108; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x24
  int64_t v111; // x21
  char v112; // w8
  Il2CppObject *v113; // x25
  struct ShopEntity___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  int64_t v121; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v123; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x23
  int max_length; // w8
  unsigned int v126; // w25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v127; // x28
  ShopEntity___c_c *v128; // x0
  UserShopEntity_o *v129; // x21
  struct ShopEntity___c_StaticFields *v130; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_1; // x22
  bool v132; // w26
  Il2CppObject *v133; // x24
  struct ShopEntity___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  ShopEntity___c_c *v141; // x0
  struct ShopEntity___c_StaticFields *v142; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_2; // x22
  bool v144; // w26
  Il2CppObject *v145; // x24
  struct ShopEntity___c_StaticFields *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x22
  ShopEntity___c_c *v154; // x8
  struct ShopEntity___c_StaticFields *v155; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__36_3; // x23
  bool v157; // w26
  Il2CppObject *v158; // x24
  struct ShopEntity___c_StaticFields *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  const MethodInfo_234BB7C *v166; // x3
  bool v167; // w21
  int32_t FreeShopCondId; // w0
  bool result; // w0
  __int64 v170; // x0
  ShopBuyItemListViewItemDraw_o *v171; // x0
  UISprite_o *v172; // x1
  System_String_o *v173; // x2
  const MethodInfo *v174; // x3
  UserShopEntity_o *v175; // [xsp+8h] [xbp-78h]
  bool v176; // [xsp+14h] [xbp-6Ch]
  int64_t v177; // [xsp+20h] [xbp-60h] BYREF
  __int64 v178; // [xsp+28h] [xbp-58h]
  System_Nullable_long__o v179; // 0:x0.16

  if ( (byte_42EE594 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserQuestEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_UserQuestEntity__long___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_UserQuestEntity__bool___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Func_UserQuestEntity__long__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Func_CommonReleaseEntity__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Func_UserQuestEntity__bool__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&long_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&NetworkManager_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_System_Nullable_long__GetValueOrDefault__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Nullable_long__get_HasValue__, v71, v72, v73);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v74, v75, v76);
    sub_B5D5C4(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v77, v78, v79);
    sub_B5D5C4(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v80, v81, v82);
    sub_B5D5C4(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v83, v84, v85);
    sub_B5D5C4(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v86, v87, v88);
    sub_B5D5C4(&ShopEntity___c_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_19128/*"freeShopReleaseDate"*/, v92, v93, v94);
    byte_42EE594 = 1;
  }
  v177 = 0LL;
  v178 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v98 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v99 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v99 )
    goto LABEL_79;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v99, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_79;
  v100 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_79;
  updatedAt = v100->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Instance,
                        (System_Type_o *)StringLiteral_19128/*"freeShopReleaseDate"*/,
                        (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_79;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v102 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance);
    v105 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v103)
        || UserShopEntity__get_IsReturnRarePriShop(v100, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v104);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_79;
    List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
    if ( List )
    {
      v107 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v176 = v105;
      v108 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v108 = ShopEntity___c_TypeInfo;
      }
      static_fields = v108->static_fields;
      v175 = v100;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v111 = v102;
          if ( !v108->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v108);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v111 = v102;
        }
        v113 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_0,
          v113,
          Method_ShopEntity___c__IsPaidExchange_b__36_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
        v114 = ShopEntity___c_TypeInfo->static_fields;
        v114->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v114->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
        v102 = v111;
      }
      v121 = v102;
      v122 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v107,
               (System_Func_TSource__bool__o *)_9__36_0,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v123 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v122,
               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v124,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v123 )
        goto LABEL_79;
      max_length = v123->max_length;
      if ( max_length >= 1 )
      {
        v126 = 0;
        while ( 1 )
        {
          if ( v126 >= max_length )
          {
            v170 = sub_B5D6C8(Instance);
            sub_B5D668(v170, 0LL);
          }
          v127 = v123->m_Items[v126];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v127 || !v98 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v98, Instance, (int32_t)v127[1].klass, 0LL);
          if ( Instance )
          {
            if ( !v124 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v124,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
          }
          max_length = v123->max_length;
          if ( (int)++v126 >= max_length )
            goto LABEL_42;
        }
LABEL_79:
        sub_B5D69C(Instance, v96);
      }
LABEL_42:
      v177 = 0LL;
      v178 = 0LL;
      if ( !v124 )
        goto LABEL_79;
      v105 = v176;
      v102 = v121;
      if ( v124->fields._size < 1 )
        goto LABEL_76;
      v128 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v129 = v175;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v128 = ShopEntity___c_TypeInfo;
        }
      }
      else
      {
        v129 = v175;
      }
      v130 = v128->static_fields;
      _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v130->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( (BYTE3(v128->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v132 = v176;
          if ( !v128->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v128);
            v130 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v132 = v176;
        }
        v133 = (Il2CppObject *)v130->__9;
        _9__36_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_1,
          v133,
          Method_ShopEntity___c__IsPaidExchange_b__36_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v134 = ShopEntity___c_TypeInfo->static_fields;
        v134->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v134->__9__36_1,
          (System_Int32_array **)_9__36_1,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140);
        v105 = v132;
      }
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)v124,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_76;
      v141 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v141 = ShopEntity___c_TypeInfo;
      }
      v142 = v141->static_fields;
      _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v142->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( (BYTE3(v141->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v144 = v105;
          if ( !v141->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v141);
            v142 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v144 = v105;
        }
        v145 = (Il2CppObject *)v142->__9;
        _9__36_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__36_2,
          v145,
          Method_ShopEntity___c__IsPaidExchange_b__36_2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v146 = ShopEntity___c_TypeInfo->static_fields;
        v146->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v146->__9__36_2,
          (System_Int32_array **)_9__36_2,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152);
        v105 = v144;
      }
      v153 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v124,
               (System_Func_TSource__bool__o *)_9__36_2,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v154 = ShopEntity___c_TypeInfo;
      if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v154 = ShopEntity___c_TypeInfo;
      }
      v155 = v154->static_fields;
      _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v155->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( (BYTE3(v154->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v157 = v105;
          if ( !v154->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v154);
            v155 = ShopEntity___c_TypeInfo->static_fields;
          }
        }
        else
        {
          v157 = v105;
        }
        v158 = (Il2CppObject *)v155->__9;
        _9__36_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
          _9__36_3,
          v158,
          Method_ShopEntity___c__IsPaidExchange_b__36_3__,
          (const MethodInfo_2C3003C *)Method_System_Func_UserQuestEntity__long___ctor__);
        v159 = ShopEntity___c_TypeInfo->static_fields;
        v159->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v159->__9__36_3,
          (System_Int32_array **)_9__36_3,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        v105 = v157;
      }
      *(_QWORD *)&v179.fields.has_value = System_Linq_Enumerable__Min_UserQuestEntity_(
                                            v153,
                                            (System_Func_TSource__long__o *)_9__36_3,
                                            (const MethodInfo_1CAEFBC *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      v179.fields.value = (int64_t)&v177;
      System_Nullable_long____ctor(v179, Method_System_Nullable_long___ctor__, v166);
      if ( (_BYTE)v178 )
        v167 = v177 > v129->fields.updatedAt;
      else
LABEL_76:
        v167 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v96);
      v112 = v167 | !CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v112 = 1;
    }
    return (v105 || updatedAt < v102) | v112;
  }
  else
  {
    sub_B5D990(Instance);
    ShopBuyItemListViewItemDraw__SetSpriteName(v171, v172, v173, v174);
  }
  return result;
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42EE59A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)message, (_DWORD)itemName, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EE59A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Instance; // x0
  __int64 v15; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v18; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v20; // x8
  UserQuestMaster_o *v21; // x19
  unsigned __int64 v22; // x24
  int32_t v23; // w21
  __int64 v24; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE59C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE59C = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      v18 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_24;
      v20 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = (UserQuestMaster_o *)Instance;
        v22 = 0LL;
        while ( 1 )
        {
          if ( v22 >= (unsigned int)v20 )
          {
            v24 = sub_B5D6C8(Instance);
            sub_B5D668(v24, 0LL);
          }
          v23 = targetIds->m_Items[v22 + 1];
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v21 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v21, &entity, Instance, v23, 0LL);
          if ( !entity )
            goto LABEL_22;
          LODWORD(v20) = targetIds->max_length;
          if ( (__int64)++v22 >= (int)v20 )
            goto LABEL_21;
        }
LABEL_24:
        sub_B5D69C(Instance, v15);
      }
LABEL_21:
      LOBYTE(EntityDefinitely) = v18->fields.num > 0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x19
  UserPresentBoxMaster_o *v30; // x21
  int64_t UserId; // x0
  __int64 v32; // x1
  BattleBuffData_BuffData_array *VaildList; // x21
  ShopEntity___c_c *v34; // x8
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v37; // x23
  struct ShopEntity___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int32_array *targetIds; // x22
  __int64 v46; // x8
  int64_t v47; // x20
  unsigned __int64 v48; // x23
  int64_t v49; // x25
  int32_t v50; // w21
  int v51; // w8
  __int64 v52; // x9
  __int64 v53; // x10
  __int64 v55; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE5A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_UserPresentBoxEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_UserPresentBoxEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ShopEntity___c__IsServantGet_b__50_0__, v23, v24, v25);
    sub_B5D5C4(&ShopEntity___c_TypeInfo, v26, v27, v28);
    byte_42EE5A0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v30 = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v30 )
    goto LABEL_39;
  VaildList = (BattleBuffData_BuffData_array *)UserPresentBoxMaster__getVaildList(v30, UserId, 0LL);
  v34 = ShopEntity___c_TypeInfo;
  if ( (BYTE3(ShopEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v34 = ShopEntity___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v37,
      Method_ShopEntity___c__IsServantGet_b__50_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserPresentBoxEntity___ctor__);
    v38 = ShopEntity___c_TypeInfo->static_fields;
    v38->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v38->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  UserId = (int64_t)System_Array__FindAll_BattleBuffData_BuffData_(
                      VaildList,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_1FC072C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_39:
    sub_B5D69C(UserId, v32);
  v46 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v46 < 1 )
    return 0;
  v47 = UserId;
  v48 = 0LL;
  v49 = UserId + 32;
  while ( 1 )
  {
    if ( v48 >= (unsigned int)v46 )
      goto LABEL_38;
    v50 = targetIds->m_Items[v48 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    UserId = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v50, 0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v47 )
    {
      v51 = *(_DWORD *)(v47 + 24);
      if ( v51 >= 1 )
      {
        v52 = 0LL;
        while ( (unsigned int)v52 < v51 )
        {
          v53 = *(_QWORD *)(v49 + 8 * v52);
          if ( !v53 )
            goto LABEL_39;
          if ( v50 == *(_DWORD *)(v53 + 76) )
            return 1;
          if ( (int)++v52 >= v51 )
            goto LABEL_35;
        }
LABEL_38:
        v55 = sub_B5D6C8(UserId);
        sub_B5D668(v55, 0LL);
      }
    }
LABEL_35:
    LODWORD(v46) = targetIds->max_length;
    if ( (__int64)++v48 >= (int)v46 )
      return 0;
  }
}


bool __fastcall ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v14; // x2
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE593 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      isInPreparation,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&StringLiteral_19125/*"freeShopCondId"*/, v6, v7, v8);
    byte_42EE593 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_19125/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
      && ShopEntity__IsAfterTheFreeShopReleaseDate(this, v10) )
    {
      if ( ShopEntity__IsFulFilledFreeExchangeCondition(this, v11) )
      {
        LOBYTE(script) = 1;
      }
      else
      {
        LOBYTE(script) = ShopEntity__IsSoldOut(this, v12);
        if ( ((unsigned __int8)script & 1) == 0 && isInPreparation )
          LOBYTE(script) = ShopEntity__isQuestNotClearItemClosed(this, 0, v14);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v15; // x1

  if ( (byte_42EE59D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE59D = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_13;
  if ( this->fields.limitNum < 1 )
  {
LABEL_14:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B5D69C(Instance, v12);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v15) )
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_B5D69C(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_44641524((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42EE59B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)message, (_DWORD)itemName, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EE59B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t TargetId; // w0

  if ( (byte_42EE5B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5B2 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (WebViewManager_o *)ShopEntity__get_TargetId(this, v11),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B5D69C(Instance, v9);
  }
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v12);
  return !ItemMaster__isFriendPoint(MasterData_WarQuestSelectionMaster, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int32_t *p_lookup; // x8
  int32_t TargetId; // w0
  const MethodInfo *v21; // x1
  int32_t v22; // w0
  UserItemMaster_o *v23; // x20
  int64_t UserId; // x21
  const MethodInfo *v25; // x1

  if ( (byte_42EE5B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE5B3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v17);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !ItemMaster__isMana(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v18);
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
      v22 = ShopEntity__get_TargetId(this, v21);
      if ( ItemMaster__isStone(MasterData_WarQuestSelectionMaster, v22, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v23 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v25);
          if ( v23 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(v23, UserId, (int32_t)Instance, 0LL);
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
    sub_B5D69C(Instance, v15);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_22;
  p_lookup = (int32_t *)&Instance[1].fields.masterDataBytes;
  return *p_lookup;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  WarEntity_o *v31; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42EE5C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EE5C4 = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v25);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_22:
    sub_B5D69C(Instance, v24);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v29);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          &v31,
          entity->fields.flag,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v31;
  if ( !v31 )
    goto LABEL_22;
  if ( ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v31, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v30);
  else
    return this->fields.name;
}


int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B5D69C(this, id);
  if ( targetIds->max_length <= id )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B5D69C(this, method);
  if ( !targetIds->max_length )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int64_t Instance; // x0
  __int64 v21; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  QuestMaster_o *v23; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v25; // x22
  int max_length; // w28
  int32_t v27; // w24
  const MethodInfo *v28; // x2
  int v29; // w8
  int64_t v30; // x25
  unsigned int v31; // w26
  __int64 v32; // x27
  int v33; // w23
  _BOOL4 v34; // w25
  int64_t UserId; // x26
  const MethodInfo *v36; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  UserQuestEntity_o *v40; // x26
  QuestEntity_o *Entity; // x0
  const MethodInfo *v42; // x1
  __int64 v44; // x0
  int64_t v45; // [xsp+8h] [xbp-58h]

  if ( (byte_42EE5B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EE5B4 = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v23 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_42;
    v25 = (QuestReleaseMaster_o *)Instance;
    max_length = targetIds->max_length;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    v45 = Instance;
    if ( max_length >= 1 )
    {
      if ( v25 )
      {
        v27 = 0;
        while ( 1 )
        {
          Instance = (int64_t)QuestReleaseMaster__getListByType(v25, 13, 0LL);
          if ( !Instance )
            break;
          v29 = *(_DWORD *)(Instance + 24);
          v30 = Instance;
          if ( v29 < 1 )
          {
LABEL_24:
            v34 = 1;
          }
          else
          {
            v31 = 0;
            while ( 1 )
            {
              if ( v31 >= v29 )
              {
                v44 = sub_B5D6C8(Instance);
                sub_B5D668(v44, 0LL);
              }
              v32 = *(_QWORD *)(v30 + 8LL * (int)v31 + 32);
              if ( !v32 )
                goto LABEL_42;
              v33 = *(_DWORD *)(v32 + 16);
              Instance = ShopEntity__getTargetId(this, v27, v28);
              if ( v33 == (_DWORD)Instance )
              {
                if ( !v23 )
                  goto LABEL_42;
                Instance = (int64_t)QuestMaster__getQuestEntity(v23, *(_DWORD *)(v32 + 16), 0LL);
                if ( !Instance )
                  goto LABEL_42;
                Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
                if ( (Instance & 1) == 0 )
                  break;
              }
              v29 = *(_DWORD *)(v30 + 24);
              if ( (int)++v31 >= v29 )
                goto LABEL_24;
            }
            v34 = 0;
          }
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = ShopEntity__getTargetId(this, v27, v36);
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, Instance, 0LL);
          if ( EntityFromId )
          {
            v40 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v38) )
              goto LABEL_40;
            if ( v40->fields.expireAt < v45 )
              return v34;
          }
          else
          {
            Instance = ShopEntity__getTargetId(this, v27, v39);
            if ( !v23 )
              break;
            Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v23,
                                        Instance,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt(Entity, 0LL) < v45
              || (v34 & !ShopEntity__IsEventQuest(this, v42) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v27 >= max_length )
            goto LABEL_39;
        }
      }
LABEL_42:
      sub_B5D69C(Instance, v21);
    }
LABEL_39:
    LOBYTE(v34) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v34) = 0;
  }
  return v34;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v18; // x9
  ItemMaster_o *v19; // x23
  __int64 v20; // x25
  __int64 v21; // x26
  unsigned __int64 v22; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v25; // x8
  __int64 mana; // x24
  __int64 v27; // x28
  struct System_Int32_array *v28; // x8
  __int64 rarePri; // x24
  __int64 v30; // x28
  struct System_Int32_array *v31; // x8
  BalanceConfig_c *v32; // x8
  __int64 v33; // x28
  int v34; // w24
  int32_t v35; // w8
  __int64 v36; // x0

  if ( (byte_42EE5C3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, buyCount, (_DWORD)check, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EE5C3 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(Instance, v16);
  }
  v18 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v18 < 1 )
    return 0;
  v19 = (ItemMaster_o *)Instance;
  v20 = (int)v18;
  v21 = 8LL;
  while ( 1 )
  {
    v22 = v21 - 8;
    if ( v21 - 8 >= (unsigned __int64)targetIds->max_length )
    {
LABEL_50:
      v36 = sub_B5D6C8(Instance);
      sub_B5D668(v36, 0LL);
    }
    if ( !v19 )
      goto LABEL_45;
    Instance = (DataManager_o *)ItemMaster__isQP(v19, *((_DWORD *)&targetIds->obj.klass + v21), 0LL);
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
    v25 = this->fields.targetIds;
    if ( !v25 )
      goto LABEL_45;
    if ( v22 >= v25->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isMana(v19, *((_DWORD *)&v25->obj.klass + v21), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v27 = this->fields.setNum;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v27 * buyCount > SLODWORD(Instance[1].fields.saveNameList->monitor) )
      {
        v35 = 5;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    v28 = this->fields.targetIds;
    if ( !v28 )
      goto LABEL_45;
    if ( v22 >= v28->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v19, *((_DWORD *)&v28->obj.klass + v21), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v30 = this->fields.setNum;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v30 * buyCount > SHIDWORD(Instance[1].fields.saveNameList->monitor) )
    {
      v35 = 22;
      goto LABEL_49;
    }
LABEL_43:
    if ( v21 - 7 >= v20 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v21;
    if ( !targetIds )
      goto LABEL_45;
  }
  v31 = this->fields.targetIds;
  if ( !v31 )
    goto LABEL_45;
  if ( v22 >= v31->max_length )
    goto LABEL_50;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v19, *((_DWORD *)&v31->obj.klass + v21), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_43;
  if ( !SelfUserGame )
    goto LABEL_45;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v32 = BalanceConfig_TypeInfo;
  v33 = this->fields.setNum;
  v34 = (int)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  if ( v33 * buyCount + v34 <= v32->static_fields->FriendPointMax )
    goto LABEL_43;
  v35 = 13;
LABEL_49:
  *check = v35;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v14; // x19
  __int64 v15; // x24
  ShopReleaseEntity_o *v16; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v20; // w23
  __int64 v22; // x0

  if ( (byte_42EE5BE & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE5BE = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetEntitiyList(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B5D69C(Instance, v12);
  }
  datalist = Instance->fields.datalist;
  v14 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= (unsigned int)datalist )
    {
      v22 = sub_B5D6C8(Instance);
      sub_B5D668(v22, 0LL);
    }
    v16 = (ShopReleaseEntity_o *)*((_QWORD *)&v14->fields.lookup + v15);
    if ( !v16 )
      goto LABEL_20;
    condType = v16->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_17:
    if ( (int)++v15 >= (int)datalist )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(*((ShopReleaseEntity_o **)&v14->fields.lookup + v15), 0LL);
  condNum = v16->fields.condNum;
  v20 = condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsTotalTdLvCond(condType, v20, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    datalist = v14->fields.datalist;
    goto LABEL_17;
  }
  return ShopReleaseEntity__IsPreparation(v16, 0LL);
}


bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v18; // x8
  UserQuestMaster_o *v19; // x20
  __int64 v20; // x23
  ShopReleaseEntity_o *v21; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v25; // x0

  if ( (byte_42EE5B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EE5B9 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_23:
    sub_B5D69C(Instance, v16);
  }
  v18 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v18 < 1 )
    return 0;
  v19 = (UserQuestMaster_o *)Instance;
  v20 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= (unsigned int)v18 )
    {
      v25 = sub_B5D6C8(Instance);
      sub_B5D668(v25, 0LL);
    }
    v21 = EntitiyList->m_Items[v20];
    if ( !v21 )
      goto LABEL_23;
    if ( v21->fields.condType == 1 )
      break;
LABEL_20:
    if ( (int)++v20 >= (int)v18 )
      return 0;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v21, 0LL);
  if ( !v19 )
    goto LABEL_23;
  EntityFromId = UserQuestMaster__getEntityFromId(v19, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v18 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char *Instance; // x0
  __int64 v9; // x1
  int v10; // w8
  __int64 v11; // x9
  char *v12; // x10
  __int64 v14; // x0

  if ( (byte_42EE5BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5BB = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v9);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0LL;
  v12 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
    {
      v14 = sub_B5D6C8(Instance);
      sub_B5D668(v14, 0LL);
    }
    Instance = *(char **)&v12[8 * v11];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v11 >= v10 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char *Instance; // x0
  __int64 v9; // x1
  int v10; // w8
  __int64 v11; // x9
  char *v12; // x10
  __int64 v14; // x0

  if ( (byte_42EE5BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5BC = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v9);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0LL;
  v12 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
    {
      v14 = sub_B5D6C8(Instance);
      sub_B5D668(v14, 0LL);
    }
    Instance = *(char **)&v12[8 * v11];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v11 >= v10 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t purchaseType; // w8
  char *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  __int64 v12; // x9
  char *v13; // x10

  if ( (byte_42EE5C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5C0 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v10);
  }
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 < 1 )
    return 0;
  v12 = 0LL;
  v13 = Instance + 32;
  while ( 1 )
  {
    Instance = *(char **)&v13[8 * v12];
    if ( !Instance )
      goto LABEL_15;
    if ( *((_DWORD *)Instance + 5) == 37 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v12 >= v11 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char *Instance; // x0
  __int64 v9; // x1
  int v10; // w8
  __int64 v11; // x9
  char *v12; // x10
  __int64 v14; // x0

  if ( (byte_42EE5BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5BF = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v9);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0LL;
  v12 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
    {
      v14 = sub_B5D6C8(Instance);
      sub_B5D668(v14, 0LL);
    }
    Instance = *(char **)&v12[8 * v11];
    if ( !Instance )
      goto LABEL_15;
    if ( (*((_DWORD *)Instance + 5) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v11 >= v10 )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char *Instance; // x0
  __int64 v9; // x1
  int v10; // w8
  __int64 v11; // x9
  char *v12; // x10
  __int64 v14; // x0

  if ( (byte_42EE5BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EE5BA = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (char *)ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v9);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0LL;
  v12 = Instance + 32;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
    {
      v14 = sub_B5D6C8(Instance);
      sub_B5D668(v14, 0LL);
    }
    Instance = *(char **)&v12[8 * v11];
    if ( !Instance )
      goto LABEL_14;
    if ( *((_DWORD *)Instance + 5) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v11 >= v10 )
      return 0;
  }
}


bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v19; // x20
  __int64 v20; // x23
  ShopReleaseEntity_o *v21; // x21
  int64_t UserId; // x22
  __int64 v24; // x0

  if ( (byte_42EE5B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EE5B8 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_B5D69C(Instance, v16);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = (UserQuestMaster_o *)Instance;
  v20 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= max_length )
    {
      v24 = sub_B5D6C8(Instance);
      sub_B5D668(v24, 0LL);
    }
    v21 = EntitiyList->m_Items[v20];
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.condType == 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v21, 0LL);
      if ( !v19 )
        goto LABEL_22;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v19, UserId, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v20 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isQuestNotClear(
        ShopEntity_o *this,
        int32_t *questId,
        bool checkExpired,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EE5B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, (_DWORD)questId, checkExpired, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EE5B5 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  bool v9; // w0
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t questId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EE5B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EE5B7 = 1;
  }
  questId = 0;
  v9 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v11);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0LL)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v12);
  }
  return v9;
}


bool __fastcall ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v17; // x20
  int v18; // w23
  bool v19; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v21; // x21
  int32_t ClearNum; // w0

  if ( (byte_42EE5B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, questId, checkExpired, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EE5B6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v14);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v17 = (UserQuestMaster_o *)Instance;
    v18 = 0;
    v19 = !checkExpired;
    do
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v17 )
        goto LABEL_19;
      EntityFromId = UserQuestMaster__getEntityFromId(v17, (int64_t)Instance, questId, 0LL);
      v21 = EntityFromId;
      if ( EntityFromId == 0LL || v19 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v21 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v21, 0LL);
        if ( !ClearNum )
          return ClearNum;
      }
      ++v18;
    }
    while ( v18 < max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ShopEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DC0 & 1) == 0 )
  {
    sub_B5D5C4(&ShopEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5DC0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ShopEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ShopEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopEntity___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E5DC1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5DC1 = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


bool __fastcall ShopEntity___c___GetIsAlreadyInPossession_b__49_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B5D69C(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B5D69C(this, 0LL);
  return v->fields.giftType == 1;
}