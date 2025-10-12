void ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C384F5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C384F5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


bool ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  void *v12; // x21
  Il2CppClass *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  void *v15; // x20
  Il2CppClass *v16; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v20; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C384EB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384EB = 1;
  }
  v20 = 0;
  entity = 0;
  *imageId = this->fields.imageId;
  purchaseType = this->fields.purchaseType;
  if ( purchaseType == 2 )
  {
    TargetId = ShopEntity__get_TargetId(this, (const MethodInfo *)imageId);
    goto LABEL_15;
  }
  if ( purchaseType != 6 )
    goto LABEL_27;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v8);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v20,
          (int32_t)Instance,
          (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v20 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v20[3].klass), 0);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_3396884 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
        if ( !Instance )
          goto LABEL_40;
        saveDataMapList_high = HIDWORD(Instance->fields.saveDataMapList);
        if ( saveDataMapList_high == 2 )
        {
          if ( !entity )
            goto LABEL_40;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v16 = entity[5].klass;
              v15 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_1C32E7C(Instance);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v13 = entity[4].klass;
          v12 = entity[4].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = v13;
          *(_QWORD *)&v22.fields.fakeValue = v12;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v22, 0);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v16 = entity[4].klass;
              v15 = entity[4].monitor;
LABEL_34:
              if ( !v14->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v14);
              *(_QWORD *)&v24.fields.currentCryptoKey = v16;
              *(_QWORD *)&v24.fields.fakeValue = v15;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v24, 0);
              goto LABEL_38;
            }
            goto LABEL_40;
          }
        }
        *imageId = this->fields.imageId;
LABEL_38:
        LOBYTE(DataById) = 1;
        return (char)DataById;
      }
      goto LABEL_27;
    }
    goto LABEL_27;
  }
  return (char)DataById;
}


int32_t ShopEntity__CreatePrimaryKey(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *ShopEntity__GetAddMessage(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384F0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_16674/*"addMessage"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C384F0 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_16674/*"addMessage"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_1C32E7C(0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                              value,
                              value->klass->vtable[3].method);
}


System_Int32_array *ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  Il2CppObject *v4; // x19
  ShopEntity___c_c *v5; // x0
  __int64 naturalAligment; // x9
  System_Converter_object__int__o *_9__58_0; // x20
  Il2CppObject *v8; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_int__o *v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C384D1 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__);
    sub_1C32C20(&ShopEntity___c_TypeInfo);
    sub_1C32C20(&StringLiteral_16789/*"anotherItemIds"*/);
    byte_4C384D1 = 1;
  }
  value = 0;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_16789/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( value )
      {
        v5 = ShopEntity___c_TypeInfo;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v5 = ShopEntity___c_TypeInfo;
        }
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (System_Collections_Generic_List_object__c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          _9__58_0 = v5->static_fields->__9__58_0;
          if ( !_9__58_0 )
          {
            if ( !v5->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v5);
              v5 = ShopEntity___c_TypeInfo;
            }
            v8 = (Il2CppObject *)v5->static_fields->__9;
            _9__58_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
            System_Converter_object__int____ctor(_9__58_0, v8, Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, 0);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
            static_fields->__9__58_0 = _9__58_0;
            sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v10, v11);
          }
          v12 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            (System_Collections_Generic_List_object__o *)v4,
                                                            (System_Converter_T__TOutput__o *)_9__58_0,
                                                            (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( v12 )
            return System_Collections_Generic_List_int___ToArray(
                     v12,
                     (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        else
        {
          sub_1C3313C(v4);
        }
        sub_1C32E7C(v12);
      }
    }
    return 0;
  }
  return result;
}


int32_t ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  ShopEntity_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&PayType_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_16792/*"anotherPayType"*/);
    byte_4C384D2 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16792/*"anotherPayType"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1C32E7C(0);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value, PayType_Type_TypeInfo, v4, v5);
      }
      else
      {
        sub_1C3313C(value);
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


int32_t ShopEntity__GetCommonConsumeBuyableCount(ShopEntity_o *this, const MethodInfo *method)
{
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  il2cpp_array_size_t max_length; // x8
  CommonConsumeEntity_array *v4; // x19
  __int64 v5; // x22
  int32_t v6; // w20
  CommonConsumeEntity_o *v7; // x21
  int v8; // w9

  if ( this->fields.payType != 14 )
    return 0;
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(this, method);
  if ( !CommonConsumeEntities )
    return 0;
  max_length = CommonConsumeEntities->max_length;
  v4 = CommonConsumeEntities;
  if ( (int)max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( (unsigned int)v5 >= (unsigned int)max_length )
      sub_1C32E84(CommonConsumeEntities);
    v7 = v4->m_Items[v5];
    if ( !v7 )
      sub_1C32E7C(CommonConsumeEntities);
    if ( v7->fields.num < 1 )
    {
      v8 = 0;
    }
    else
    {
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserHasNum(v4->m_Items[v5], 0);
      max_length = v4->max_length;
      v8 = (int)CommonConsumeEntities / v7->fields.num;
    }
    if ( v8 < v6 || (_DWORD)v5++ == 0 )
      v6 = v8;
  }
  while ( (int)v5 < (int)max_length );
  return v6;
}


CommonConsumeEntity_array *ShopEntity__GetCommonConsumeEntities(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  __int64 ItemID; // x0

  if ( (byte_4C384F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C384F2 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v4);
  if ( !Master_object )
    sub_1C32E7C(ItemID);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0);
}


System_String_o *ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_4C384D7 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C384D7 = 1;
  }
  setNum = this->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(setNum, 0);
}


int32_t ShopEntity__GetExchangeSvtCoinType(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C384F3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19319/*"exchangeSvtCoinType"*/);
    byte_4C384F3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19319/*"exchangeSvtCoinType"*/, 0, 0);
}


int32_t ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384B8 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_19659/*"freeShopCondId"*/);
    byte_4C384B8 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19659/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v4, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int64_t ShopEntity__GetFreeShopReleaseDate(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  ShopEntity_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_19662/*"freeShopReleaseDate"*/);
    byte_4C384B9 = 1;
  }
  value = 0;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_19662/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1C32E7C(0);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v4, v5);
      }
      else
      {
        sub_1C3313C(value);
        return ShopEntity__IsAfterTheFreeShopReleaseDate(v6, v7);
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void ShopEntity__GetInfo(
        ShopEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        bool isSend,
        const MethodInfo *method)
{
  System_String_o *name; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t purchaseType; // w9
  __int64 *v13; // x8
  int32_t v14; // w0
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o **v17; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v20; // x1
  unsigned int klass; // w8
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x1
  ServantEntity_o *v24; // x21
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  bool IsServantEquip; // w21
  System_String_o *v37; // x0
  int32_t setNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C384D8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_14812/*"UNIT_INFO"*/);
    sub_1C32C20(&StringLiteral_12007/*"SERVANT_UNIT"*/);
    sub_1C32C20(&StringLiteral_5749/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C32C20(&StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C384D8 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)name, (int32_t)countText, (const MethodInfo *)isSend);
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v20);
      if ( !MasterData_object )
        goto LABEL_41;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int32_t)Instance,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_41;
      klass = (unsigned int)Instance[3].klass;
      if ( klass <= 0xD && ((1 << klass) & 0x2026) != 0 )
      {
        *countText = 0;
        v17 = countText;
        LODWORD(v16) = 0;
        goto LABEL_17;
      }
      if ( isSend )
      {
        v14 = (_DWORD)this + 64;
        goto LABEL_11;
      }
      v37 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0);
      LODWORD(v16) = (_DWORD)v37;
      *countText = v37;
      goto LABEL_16;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_14812/*"UNIT_INFO"*/;
      goto LABEL_32;
    case 4:
      goto LABEL_9;
    case 6:
      goto LABEL_15;
    default:
      if ( purchaseType == 21 )
      {
LABEL_9:
        if ( !isSend )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v22 = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v23),
                !v22)
            || (Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                             (int32_t)Instance,
                             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
          {
LABEL_41:
            sub_1C32E7C(Instance);
          }
          v24 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0)
            || ServantEntity__get_IsServantMaterialTd(v24, 0) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v13 = &StringLiteral_12007/*"SERVANT_UNIT"*/;
          }
          else
          {
            IsServantEquip = ServantEntity__get_IsServantEquip(v24, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( IsServantEquip )
              v13 = &StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/;
            else
              v13 = &StringLiteral_5749/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_32:
          v25 = LocalizationManager__Get((System_String_o *)*v13, 0);
          setNum = this->fields.setNum;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum, v26, v27, v28, v29, v30, v31);
          v33 = System_String__Format(v25, v32, 0);
          *countText = v33;
          sub_1C32BC4((CGThumbnailListItem_o *)countText, (int32_t)v33, v34, v35);
          return;
        }
LABEL_10:
        v14 = (_DWORD)this + 64;
LABEL_11:
        v15 = System_Int32__ToString(v14, 0);
        if ( v15 )
          v16 = v15;
        else
          v16 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v16;
      }
      else
      {
LABEL_15:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v16) = StringLiteral_1/*""*/;
      }
LABEL_16:
      v17 = countText;
LABEL_17:
      sub_1C32BC4((CGThumbnailListItem_o *)v17, (int32_t)v16, v10, v11);
      return;
  }
}


bool ShopEntity__GetIsAlreadyInPossession(ShopEntity_o *this, bool isWithoutPresents, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v10; // x8
  System_Object_array *v11; // x21
  System_Predicate_object__o *_9__49_0; // x24
  Il2CppObject *v13; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  DataManager_o *v17; // x21
  DataManager_o *v18; // x22
  struct System_Int32_array *targetIds; // x24
  il2cpp_array_size_t max_length; // x8
  DataManager_o *v21; // x20
  unsigned __int64 v22; // x25
  bool v23; // w27
  int32_t v24; // w28
  int m_CancellationTokenSource; // w8
  int v26; // w9
  __int64 v27; // x10
  int v28; // w8
  unsigned int v29; // w29
  __int64 v30; // x8
  __int64 v31; // x19
  __int64 v32; // x23
  int v33; // w8
  unsigned int v34; // w29
  __int64 v35; // x8
  __int64 v36; // x19
  __int64 v37; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4C384C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__);
    sub_1C32C20(&ShopEntity___c_TypeInfo);
    byte_4C384C8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_53;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)MasterData_object,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                0);
  v10 = ShopEntity___c_TypeInfo;
  v11 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v10 = ShopEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Predicate_object__o *)v10->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ShopEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__49_0, v13, Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, 0);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v15, v16);
  }
  Instance = (DataManager_o *)System_Array__FindAll_object_(
                                v11,
                                (System_Predicate_T__o *)_9__49_0,
                                (const MethodInfo_31E2A64 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v7
    || (v17 = Instance,
        Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)v7, 0),
        !v8)
    || (v18 = Instance,
        Instance = (DataManager_o *)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v8, 0),
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_53:
    sub_1C32E7C(Instance);
  }
  max_length = targetIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v21 = Instance;
  v22 = 0;
  v23 = v17 == 0 || isWithoutPresents;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)max_length )
      goto LABEL_54;
    v24 = targetIds->m_Items[v22];
    if ( !v23 )
    {
      m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource >= 1 )
        break;
    }
LABEL_32:
    if ( !v18 )
      goto LABEL_53;
    v28 = (int)v18->fields.m_CancellationTokenSource;
    if ( v28 >= 1 )
    {
      v29 = 0;
      while ( v29 < v28 )
      {
        v30 = *((_QWORD *)&v18->fields._DispLog + (int)v29);
        if ( !v30 )
          goto LABEL_53;
        v32 = *(_QWORD *)(v30 + 80);
        v31 = *(_QWORD *)(v30 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v32;
        *(_QWORD *)&v39.fields.fakeValue = v31;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
        if ( v24 == (_DWORD)Instance )
          return 1;
        v28 = (int)v18->fields.m_CancellationTokenSource;
        if ( (int)++v29 >= v28 )
          goto LABEL_41;
      }
LABEL_54:
      sub_1C32E84(Instance);
    }
LABEL_41:
    if ( !v21 )
      goto LABEL_53;
    v33 = (int)v21->fields.m_CancellationTokenSource;
    if ( v33 >= 1 )
    {
      v34 = 0;
      while ( v34 < v33 )
      {
        v35 = *((_QWORD *)&v21->fields._DispLog + (int)v34);
        if ( !v35 )
          goto LABEL_53;
        v37 = *(_QWORD *)(v35 + 80);
        v36 = *(_QWORD *)(v35 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v37;
        *(_QWORD *)&v40.fields.fakeValue = v36;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v40, 0);
        if ( v24 == (_DWORD)Instance )
          return 1;
        v33 = (int)v21->fields.m_CancellationTokenSource;
        if ( (int)++v34 >= v33 )
          goto LABEL_50;
      }
      goto LABEL_54;
    }
LABEL_50:
    LODWORD(max_length) = targetIds->max_length;
    if ( (__int64)++v22 >= (int)max_length )
      return 0;
  }
  v26 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v26 )
      goto LABEL_54;
    v27 = *((_QWORD *)&v17->fields._DispLog + v26);
    if ( !v27 )
      goto LABEL_53;
    if ( v24 == *(_DWORD *)(v27 + 76) )
      return 1;
    if ( m_CancellationTokenSource == ++v26 )
      goto LABEL_32;
  }
}


bool ShopEntity__GetIsAlreadyInPossessionNotHaving(
        ShopEntity_o *this,
        bool isWithoutPresents,
        const MethodInfo *method)
{
  return (this->fields.flag & 0x2000) != 0 && ShopEntity__GetIsAlreadyInPossession(this, isWithoutPresents, method);
}


bool ShopEntity__GetIsNotHavingShopItemReceived(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4C384C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C7 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0);
  return EntityDefinitely && !UserShopEntity__get_IsReceivedShopItem(EntityDefinitely, 0);
}


int32_t ShopEntity__GetItemCount(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C32E7C(this);
  return itemIds->max_length;
}


int32_t ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C32E7C(this);
  if ( !LODWORD(itemIds->max_length) )
    sub_1C32E84(this);
  return itemIds->m_Items[0];
}


int32_t ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C32E7C(this);
  if ( LODWORD(itemIds->max_length) <= num )
    sub_1C32E84(this);
  return itemIds->m_Items[num];
}


void ShopEntity__GetLastPurchaseSum(
        ShopEntity_o *this,
        int32_t *buyItemNum,
        int32_t *buyServantNum,
        int32_t *buyServantEquipNum,
        int32_t *buyCmdCodeNum,
        int32_t *buyQuestNum,
        const MethodInfo *method)
{
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  Il2CppObject *v15; // x22
  const MethodInfo *v16; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x7
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C384DA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DA = 1;
  }
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v20);
      if ( !MasterData_object )
        goto LABEL_19;
      SetItemMaster__GetSum(
        (SetItemMaster_o *)MasterData_object,
        buyItemNum,
        buyServantNum,
        buyServantEquipNum,
        buyCmdCodeNum,
        &recordNum,
        (int32_t)Instance,
        v21);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v15 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v16),
              !v15)
          || (Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                           (int32_t)Instance,
                           (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
        {
LABEL_19:
          sub_1C32E7C(Instance);
        }
        IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
        setNum = this->fields.setNum;
        if ( IsServantEquip )
          *buyServantEquipNum = setNum;
        else
          *buyServantNum = setNum;
      }
      break;
  }
}


System_String_o *ShopEntity__GetOverwriteName(
        ShopEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C384EE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22564/*"overwriteName"*/);
    byte_4C384EE = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22564/*"overwriteName"*/, defaultValue, 0);
}


int32_t ShopEntity__GetPayType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


int32_t ShopEntity__GetPrice(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1C32E7C(this);
  if ( !LODWORD(prices->max_length) )
    sub_1C32E84(this);
  return prices->m_Items[0];
}


int32_t ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_C46D8C[v2];
}


int32_t ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_C46D64[v2];
}


int32_t ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1C32E7C(this);
  if ( LODWORD(prices->max_length) <= num )
    sub_1C32E84(this);
  return prices->m_Items[num];
}


int32_t ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C384D6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0);
}


ServantEntity_o *ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w8
  __int64 v5; // x9
  ShopReleaseEntity_o *v6; // x19
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C384E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E6 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0);
  if ( !Instance )
    return 0;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(Instance);
    v6 = Instance->m_Items[v5];
    if ( !v6 )
      goto LABEL_17;
    if ( v6->fields.condType == 8 )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (ShopReleaseEntity_array *)ShopReleaseEntity__get_condValue(v6, 0),
        !MasterData_object) )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)Instance,
                              (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


int32_t ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v4; // x0
  int32_t flag; // w8
  __int64 *v7; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_8265/*"LIMITED_SHOP_REMAIN_DAYS"*/);
    sub_1C32C20(&StringLiteral_8738/*"MONTHLY_SHOP_REMAIN_DAYS"*/);
    sub_1C32C20(&StringLiteral_23024/*"remainDays"*/);
    byte_4C384D3 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23024/*"remainDays"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v7 = &StringLiteral_8265/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v7 = &StringLiteral_8738/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v7, 0);
  }
  if ( !value )
    sub_1C32E7C(0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  return System_Int32__Parse(v4, 0);
}


int32_t ShopEntity__GetShopType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopType;
}


void ShopEntity__GetSum(
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
  Il2CppObject *Instance; // x0
  Il2CppObject *v17; // x22
  const MethodInfo *v18; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *v21; // x24
  const MethodInfo *v22; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x7
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C384D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384D9 = 1;
  }
  item = 0;
  servant = 0;
  equip = 0;
  quest = 0;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v24);
        if ( !MasterData_object )
          goto LABEL_31;
        SetItemMaster__GetSum(
          (SetItemMaster_o *)MasterData_object,
          buyItemNum,
          buyServantNum,
          buyServantEquipNum,
          buyCmdCodeNum,
          recordNum,
          (int32_t)Instance,
          v25);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v21 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v22);
        if ( !v21 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v21,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          0);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( quest )
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v17 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v18),
          !v17)
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                       (int32_t)Instance,
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
    {
LABEL_31:
      sub_1C32E7C(Instance);
    }
    IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
    setNum = this->fields.setNum;
    if ( IsServantEquip )
      *buyServantEquipNum = setNum;
    else
      *buyServantNum = setNum;
  }
}


bool ShopEntity__IsAfterTheFreeShopReleaseDate(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C384BA & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C384BA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v4) && ShopEntity__GetFreeShopReleaseDate(this, v5) > 0;
}


bool ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t closedAt; // x8
  Il2CppObject *Instance; // x0

  if ( (byte_4C384C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0);
}


bool ShopEntity__IsAnotherItemBuyable(
        ShopEntity_o *this,
        System_Int32_array **possessionAnotherItemId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  System_Collections_ICollection_o *AnotherPayItemIds; // x22
  System_Collections_Generic_List_int__o *v8; // x23
  UserItemMaster_o *Master_object; // x0
  void *monitor; // x8
  UserItemMaster_o *v11; // x24
  char v12; // w19
  unsigned __int64 v13; // x28
  int32_t v14; // w25
  int32_t itemId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x20
  UserItemEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  UserShopEntity_o *v27; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C384CF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C384CF = 1;
  }
  entity = 0;
  v27 = 0;
  *possessionAnotherItemId = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)possessionAnotherItemId, 0, (int32_t)method, v3);
  AnotherPayItemIds = (System_Collections_ICollection_o *)ShopEntity__GetAnotherPayItemIds(this, v6);
  if ( BasicHelper__IsNullOrEmpty(AnotherPayItemIds, 0) )
    return 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_45;
  monitor = AnotherPayItemIds[1].monitor;
  if ( (int)monitor < 1 )
    return 0;
  v11 = Master_object;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( v13 >= (unsigned int)monitor )
      sub_1C32E84(Master_object);
    v14 = *((_DWORD *)&AnotherPayItemIds[2].klass + v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !v11 )
      goto LABEL_45;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v11,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v14,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_45;
      if ( entity->fields.num >= 1 )
      {
        if ( !v8 )
          goto LABEL_45;
        itemId = entity->fields.itemId;
        items = v8->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            itemId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = itemId;
        }
        v12 = 1;
      }
    }
    LODWORD(monitor) = AnotherPayItemIds[1].monitor;
    ++v13;
  }
  while ( (__int64)v13 < (int)monitor );
  if ( (v12 & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_45;
  v19 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  *possessionAnotherItemId = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)possessionAnotherItemId, (int32_t)v19, v20, v21);
  if ( !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v22) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_45;
  if ( !UserShopMaster__TryGetEntity(
          (UserShopMaster_o *)v23,
          &v27,
          (int64_t)Master_object[2].fields.list[1].monitor,
          this->fields.baseShopId,
          0) )
    return 1;
  Master_object = (UserItemMaster_o *)v27;
  if ( !v27 )
LABEL_45:
    sub_1C32E7C(Master_object);
  return !UserShopEntity__CheckFlagKind(v27, 2, 0);
}


bool ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  int32_t v5; // w19
  Il2CppObject *Instance; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384D0 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_24473/*"useAnotherPayCommonReleaseId"*/);
    byte_4C384D0 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24473/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v4 = value;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v5 = System_Convert__ToInt32(v4, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v5, 0, 0, 0);
  }
  else
  {
    return 1;
  }
}


bool ShopEntity__IsClosed(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8

  if ( (byte_4C384C2 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C384C2 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  closedAt = this->fields.closedAt;
  return closedAt && nowTime > closedAt;
}


bool ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v7; // w10
  bool v8; // w8

  if ( (byte_4C384D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)MasterData_object,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      this->fields.baseShopId,
                                      0)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v7 = m_CancellationTokenSource_high > 0;
  v8 = m_CancellationTokenSource_high >= limitNum;
  if ( limitNum >= 1 )
    return v8;
  else
    return v7;
}


bool ShopEntity__IsCondType_42739028(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v8; // w10
  bool v9; // w8

  if ( (byte_4C384D5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v8 = m_CancellationTokenSource_high > 0;
  v9 = m_CancellationTokenSource_high >= limitNum;
  if ( limitNum >= 1 )
    return v9;
  else
    return v8;
}


bool ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  Il2CppObject *Instance; // x0
  bool v7; // w0
  const MethodInfo *v8; // x1
  int32_t costumeId[2]; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C384BE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_19659/*"freeShopCondId"*/);
    byte_4C384BE = 1;
  }
  value = 0;
  *(_QWORD *)costumeId = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19659/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v4)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v7 = ServantCostumeReleaseMaster__checkItemHaving(
         (ServantCostumeReleaseMaster_o *)Instance,
         costumeId[1],
         costumeId[0],
         0);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v8) || !v7);
}


bool ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  bool v7; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v10; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C384BF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384BF = 1;
  }
  entity = 0;
  v10 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_31;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
      goto LABEL_19;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_31;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &v10,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          0) )
    goto LABEL_19;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_31;
  v7 = 1;
  if ( !UserEventEntity__getEventFlag(v10, 1, 0) )
  {
LABEL_19:
    if ( !nowTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      nowTime = NetworkManager__getTime(0);
    }
    if ( nowTime < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && nowTime > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0);
    }
LABEL_31:
    sub_1C32E7C(Instance);
  }
  return v7;
}


bool ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x1
  int v7; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v9; // x19
  char v10; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C384F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384F1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (v5 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v6),
        !v5)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v5, (int32_t)Instance, 0),
        !MasterData_object)
    || (v7 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].monitor) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v9 = Enumerator;
  v10 = 0;
  while ( 1 )
  {
    if ( !v9 )
      sub_1C32E7C(Enumerator);
    klass = v9->klass;
    v12 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_1C83438(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v9,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = v9->klass;
    v16 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_21:
      v18 = sub_1C83438(v9, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                  v9,
                                                                  *(_QWORD *)(v18 + 8));
    if ( !Enumerator )
      sub_1C32E7C(0);
    if ( LODWORD(Enumerator[6].klass) == v7 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0);
      v10 |= (unsigned __int8)Enumerator;
    }
  }
  v19 = v9->klass;
  v20 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_30;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_30:
    v22 = sub_1C83438(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(v9, *(_QWORD *)(v22 + 8));
  return v10 & 1;
}


bool ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v4; // x0
  int32_t v5; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384CE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_23024/*"remainDays"*/);
    byte_4C384CE = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23024/*"remainDays"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_1C32E7C(0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v5 = System_Int32__Parse(v4, 0);
  if ( v5 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v5;
}


bool ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C384BB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_19659/*"freeShopCondId"*/);
    byte_4C384BB = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_19659/*"freeShopCondId"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v5),
        !MasterData_object) )
  {
LABEL_10:
    sub_1C32E7C(script);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0, 0, 0);
}


bool ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4C384CA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384CA = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4C384CB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384CB = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.id,
                       0);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool ShopEntity__IsItemMaxButShopAvailable(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *TargetId; // x0
  int32_t v5; // w22
  int32_t limitNum; // w21
  Il2CppObject *v7; // x20
  const MethodInfo *v8; // x1
  UserShopEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C384F4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C384F4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  TargetId = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    TargetId = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_19;
  UserShopMaster__TryGetEntity(
    (UserShopMaster_o *)Master_object,
    &entity,
    TargetId->static_fields->userIdNumber,
    this->fields.id,
    0);
  v5 = entity ? entity->fields.num : 0;
  limitNum = this->fields.limitNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  TargetId = (NetworkManager_c *)ShopEntity__get_TargetId(this, v8);
  if ( !v7 )
LABEL_19:
    sub_1C32E7C(TargetId);
  return (limitNum - v5 > 0) & UserItemMaster__IsItemMaxLeftEqual((UserItemMaster_o *)v7, (int32_t)TargetId, 0, 0);
}


bool ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v4; // x0
  int32_t v5; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384CC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_23024/*"remainDays"*/);
    byte_4C384CC = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23024/*"remainDays"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_1C32E7C(0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v5 = System_Int32__Parse(v4, 0);
  if ( v5 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v5;
}


bool ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v4; // x0
  int32_t v5; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C384CD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_23024/*"remainDays"*/);
    byte_4C384CD = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23024/*"remainDays"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_1C32E7C(0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v5 = System_Int32__Parse(v4, 0);
  if ( v5 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v5;
}


bool ShopEntity__IsNotClearNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  _BOOL8 v7; // x0
  bool v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C384EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384EA = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    v8 = v7;
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C32E7C(v7);
    if ( *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_14) == 37 )
    {
      v9 = 6;
      goto LABEL_18;
    }
  }
  v9 = 2;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return v8 && v9 == 6;
}


bool ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v7; // x21
  bool IsTimeStatusRecord; // w0
  bool v9; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C384C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C1 = 1;
  }
  entity = 0;
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_30;
  v7 = UserEventMaster__GetEntity(
         (UserEventMaster_o *)MasterData_object,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         this->fields.eventId,
         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_30;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_30;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0);
    if ( !v7 || IsTimeStatusRecord )
      goto LABEL_24;
  }
  else if ( !v7 )
  {
LABEL_24:
    if ( nowTime < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0);
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  v9 = 1;
  if ( !UserEventEntity__getEventFlag(v7, 1, 0) )
    goto LABEL_24;
  return v9;
}


bool ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x21
  UserShopEntity_o *v7; // x26
  int64_t updatedAt; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  int64_t v11; // x25
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  bool v14; // w27
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  ShopEntity___c_c *v17; // x0
  System_Func_object__bool__o *_9__36_0; // x25
  char v19; // w8
  Il2CppObject *v20; // x26
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x25
  System_Collections_Generic_List_object__o *v26; // x24
  const MethodInfo *v27; // x1
  int max_length; // w8
  unsigned int v29; // w26
  Il2CppObject *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  DataManager_o *v36; // x1
  Il2CppClass **v37; // x0
  ShopEntity___c_c *v38; // x0
  System_Func_object__bool__o *_9__36_1; // x22
  Il2CppObject *v40; // x23
  struct ShopEntity___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  ShopEntity___c_c *v44; // x0
  System_Func_object__bool__o *_9__36_2; // x22
  Il2CppObject *v46; // x23
  struct ShopEntity___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  ShopEntity___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  System_Func_object__long__o *_9__36_3; // x23
  Il2CppObject *v54; // x24
  struct ShopEntity___c_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo_38BE6C8 *v58; // x3
  bool v59; // w20
  int32_t FreeShopCondId; // w0
  bool result; // w0
  ShopEntity_o *v62; // x0
  int32_t *v63; // x1
  int32_t *v64; // x2
  const MethodInfo *v65; // x3
  UserShopEntity_o *v66; // [xsp+10h] [xbp-90h]
  int64_t v67; // [xsp+18h] [xbp-88h]
  CommonReleaseMaster_o *v68; // [xsp+28h] [xbp-78h]
  __int64 v69; // [xsp+30h] [xbp-70h] BYREF
  int64_t v70; // [xsp+38h] [xbp-68h]
  System_Nullable_long__o v71; // 0:x0.16

  if ( (byte_4C384BD & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_UserQuestEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Min_UserQuestEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_UserQuestEntity___);
    sub_1C32C20(&System_Func_UserQuestEntity__long__TypeInfo);
    sub_1C32C20(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&Method_System_Nullable_long__get_HasValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_ShopEntity___c__IsPaidExchange_b__36_0__);
    sub_1C32C20(&Method_ShopEntity___c__IsPaidExchange_b__36_1__);
    sub_1C32C20(&Method_ShopEntity___c__IsPaidExchange_b__36_2__);
    sub_1C32C20(&Method_ShopEntity___c__IsPaidExchange_b__36_3__);
    sub_1C32C20(&ShopEntity___c_TypeInfo);
    sub_1C32C20(&StringLiteral_19662/*"freeShopReleaseDate"*/);
    byte_4C384BD = 1;
  }
  v69 = 0;
  v70 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v5 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_75;
  Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)v6,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.id,
                                0);
  if ( !Instance )
    goto LABEL_75;
  v7 = (UserShopEntity_o *)Instance;
  Instance = (DataManager_o *)this->fields.script;
  if ( !Instance )
    goto LABEL_75;
  updatedAt = v7->fields.updatedAt;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                (Il2CppObject *)StringLiteral_19662/*"freeShopReleaseDate"*/,
                                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_75;
  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v9, v10);
    v14 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v12) || UserShopEntity__get_IsReturnRarePriShop(v7, 0);
    Instance = (DataManager_o *)ShopEntity__GetFreeShopCondId(this, v13);
    if ( !MasterData_object )
      goto LABEL_75;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, (int32_t)Instance, 0);
    if ( List )
    {
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v68 = (CommonReleaseMaster_o *)MasterData_object;
      v66 = v7;
      v67 = v11;
      v17 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v17 = ShopEntity___c_TypeInfo;
      }
      _9__36_0 = (System_Func_object__bool__o *)v17->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = ShopEntity___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__36_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_0, v20, Method_ShopEntity___c__IsPaidExchange_b__36_0__, 0);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v22, v23);
      }
      v24 = System_Linq_Enumerable__Where_object_(
              v16,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v25 = System_Linq_Enumerable__ToArray_object_(
              v24,
              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v26 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v25 )
        goto LABEL_75;
      max_length = v25->max_length;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= max_length )
            sub_1C32E84(Instance);
          v30 = v25->m_Items[v29];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v30 || !v5 )
            break;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        (UserQuestMaster_o *)v5,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        (int32_t)v30[2].klass,
                                        0);
          if ( Instance )
          {
            if ( !v26 )
              break;
            items = v26->fields._items;
            v34 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              break;
            size = v26->fields._size;
            v36 = Instance;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)Instance,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v36;
              sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
            }
          }
          max_length = v25->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_49;
        }
LABEL_75:
        sub_1C32E7C(Instance);
      }
LABEL_49:
      v69 = 0;
      v70 = 0;
      if ( !v26 )
        goto LABEL_75;
      v11 = v67;
      if ( v26->fields._size < 1 )
        goto LABEL_72;
      v38 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v38 = ShopEntity___c_TypeInfo;
      }
      _9__36_1 = (System_Func_object__bool__o *)v38->static_fields->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = ShopEntity___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v38->static_fields->__9;
        _9__36_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_1, v40, Method_ShopEntity___c__IsPaidExchange_b__36_1__, 0);
        v41 = ShopEntity___c_TypeInfo->static_fields;
        v41->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v41->__9__36_1, (int32_t)_9__36_1, v42, v43);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v26,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_30C6790 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_72;
      v44 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v44 = ShopEntity___c_TypeInfo;
      }
      _9__36_2 = (System_Func_object__bool__o *)v44->static_fields->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = ShopEntity___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__36_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_2, v46, Method_ShopEntity___c__IsPaidExchange_b__36_2__, 0);
        v47 = ShopEntity___c_TypeInfo->static_fields;
        v47->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v47->__9__36_2, (int32_t)_9__36_2, v48, v49);
      }
      v50 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v26,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v51 = ShopEntity___c_TypeInfo;
      v52 = v50;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v51 = ShopEntity___c_TypeInfo;
      }
      _9__36_3 = (System_Func_object__long__o *)v51->static_fields->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          v51 = ShopEntity___c_TypeInfo;
        }
        v54 = (Il2CppObject *)v51->static_fields->__9;
        _9__36_3 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__36_3, v54, Method_ShopEntity___c__IsPaidExchange_b__36_3__, 0);
        v55 = ShopEntity___c_TypeInfo->static_fields;
        v55->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v55->__9__36_3, (int32_t)_9__36_3, v56, v57);
      }
      v71.fields.value = System_Linq_Enumerable__Min_object__51430636(
                           v52,
                           (System_Func_TSource__long__o *)_9__36_3,
                           (const MethodInfo_310C4EC *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v71.fields.hasValue = &v69;
      System_Nullable_long____ctor(v71, Method_System_Nullable_long___ctor__, v58);
      if ( (_BYTE)v69 )
        v59 = v70 > v66->fields.updatedAt;
      else
LABEL_72:
        v59 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v27);
      v19 = v59 | !CommonReleaseMaster__IsOpen(v68, FreeShopCondId, 0, 0, 0);
    }
    else
    {
      v19 = 1;
    }
    return (v14 || updatedAt < v11) | v19;
  }
  else
  {
    sub_1C3313C(Instance);
    ShopEntity__SetSvtIdAndCostumeId(v62, v63, v64, v65);
  }
  return result;
}


bool ShopEntity__IsPossessionInfoDisp(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C384EF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20941/*"isPossessionInfoDisp"*/);
    byte_4C384EF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20941/*"isPossessionInfoDisp"*/, 0);
}


bool ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C384C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0);
}


bool ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v6; // x21
  struct System_Int32_array *targetIds; // x24
  il2cpp_array_size_t max_length; // x8
  UserQuestMaster_o *v9; // x20
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C384C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C5 = 1;
  }
  entity = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_30;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                         (UserShopMaster_o *)MasterData_object,
                         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                         this->fields.baseShopId,
                         0);
    if ( EntityDefinitely )
    {
      v6 = EntityDefinitely;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      max_length = targetIds->max_length;
      if ( (int)max_length >= 1 )
      {
        v9 = (UserQuestMaster_o *)Instance;
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)max_length )
            sub_1C32E84(Instance);
          v11 = targetIds->m_Items[v10];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v9 )
            break;
          Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                        v9,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v11,
                                        0);
          if ( !entity )
            goto LABEL_28;
          LODWORD(max_length) = targetIds->max_length;
          if ( (__int64)++v10 >= (int)max_length )
            goto LABEL_27;
        }
LABEL_30:
        sub_1C32E7C(Instance);
      }
LABEL_27:
      LOBYTE(EntityDefinitely) = v6->fields.num > 0;
    }
  }
  else
  {
LABEL_28:
    LOBYTE(EntityDefinitely) = 0;
  }
  return (char)EntityDefinitely;
}


bool ShopEntity__IsServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  Il2CppObject *v4; // x22
  void *All_object; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v7; // x8
  System_Object_array *v8; // x22
  System_Predicate_object__o *_9__50_0; // x23
  Il2CppObject *v10; // x24
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int32_array *targetIds; // x23
  il2cpp_array_size_t max_length; // x8
  _DWORD *v16; // x21
  unsigned __int64 v17; // x24
  char *v18; // x26
  int32_t v19; // w22
  int v20; // w8
  __int64 v21; // x9
  __int64 v22; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C384C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_1C32C20(&Method_ShopEntity___c__IsServantGet_b__50_0__);
    sub_1C32C20(&ShopEntity___c_TypeInfo);
    byte_4C384C9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v4 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  All_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    All_object = NetworkManager_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_43;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)v4,
                *(_QWORD *)(*((_QWORD *)All_object + 23) + 64LL),
                0);
  v7 = ShopEntity___c_TypeInfo;
  v8 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v7 = ShopEntity___c_TypeInfo;
  }
  _9__50_0 = (System_Predicate_object__o *)v7->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ShopEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__50_0 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__50_0, v10, Method_ShopEntity___c__IsServantGet_b__50_0__, 0);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v12, v13);
  }
  All_object = System_Array__FindAll_object_(
                 v8,
                 (System_Predicate_T__o *)_9__50_0,
                 (const MethodInfo_31E2A64 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_43:
    sub_1C32E7C(All_object);
  max_length = targetIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v16 = All_object;
  v17 = 0;
  v18 = (char *)All_object + 32;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)max_length )
      goto LABEL_42;
    v19 = targetIds->m_Items[v17];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    All_object = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      All_object = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_43;
    All_object = (void *)UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)Master_object,
                           &entity,
                           *(_QWORD *)(*((_QWORD *)All_object + 23) + 64LL),
                           v19,
                           0);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v16 )
    {
      v20 = v16[6];
      if ( v20 >= 1 )
      {
        v21 = 0;
        while ( (unsigned int)v21 < v20 )
        {
          v22 = *(_QWORD *)&v18[8 * v21];
          if ( !v22 )
            goto LABEL_43;
          if ( v19 == *(_DWORD *)(v22 + 76) )
            return 1;
          if ( (int)++v21 >= v20 )
            goto LABEL_38;
        }
LABEL_42:
        sub_1C32E84(All_object);
      }
    }
LABEL_38:
    LODWORD(max_length) = targetIds->max_length;
    if ( (__int64)++v17 >= (int)max_length )
      return 0;
  }
}


bool ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C384BC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&StringLiteral_19659/*"freeShopCondId"*/);
    byte_4C384BC = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19659/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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


bool ShopEntity__IsSoldOut(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C384C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C6 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_16;
  if ( this->fields.limitNum < 1 )
  {
LABEL_17:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_19:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v6) )
    {
LABEL_16:
      LOBYTE(EntityDefinitely) = 1;
      return (char)EntityDefinitely;
    }
    goto LABEL_17;
  }
  return (char)EntityDefinitely;
}


void ShopEntity__SetSvtIdAndCostumeId(ShopEntity_o *this, int32_t *svtId, int32_t *costumeId, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_5;
  if ( !LODWORD(targetIds->max_length) )
    sub_1C32E84(this);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0);
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_63564468((System_String_o *)this, 0, this->fields.id - 2, 0);
  *svtId = System_Int32__Parse(v8, 0);
  v9 = System_String__Substring(v7, v7->fields._stringLength - 2, 0);
  *costumeId = System_Int32__Parse(v9, 0);
}


bool ShopEntity__TryGetClosedMessage(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C384C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopReleaseMaster__TryGetClosedMessage((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0);
}


bool ShopEntity__checkFlag(ShopEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool ShopEntity__checkHoldDisp(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t TargetId; // w0

  if ( (byte_4C384DB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DB = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v5),
        !MasterData_object) )
  {
    sub_1C32E7C(Instance);
  }
  if ( ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v6);
  return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0);
}


int32_t ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t *p_DispLog; // x8
  int32_t TargetId; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4C384DC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v5);
  if ( !MasterData_object )
    goto LABEL_25;
  if ( !ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0) )
  {
    TargetId = ShopEntity__get_TargetId(this, v6);
    if ( ItemMaster__isRarePri((ItemMaster_o *)MasterData_object, TargetId, 0) )
    {
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( Instance )
      {
        p_DispLog = (int32_t *)&Instance[1].fields.datalist + 1;
        return *p_DispLog;
      }
    }
    else
    {
      v10 = ShopEntity__get_TargetId(this, v9);
      if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v10, 0) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
        if ( Instance )
        {
          p_DispLog = (int32_t *)&Instance[1].fields._DispLog;
          return *p_DispLog;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          v13 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v13 = NetworkManager_TypeInfo;
          }
          userIdNumber = v13->static_fields->userIdNumber;
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v11);
          if ( v12 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v12,
                                          userIdNumber,
                                          (int32_t)Instance,
                                          0);
            if ( Instance )
            {
              p_DispLog = (int32_t *)&Instance->fields.m_CancellationTokenSource + 1;
              return *p_DispLog;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(Instance);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_25;
  p_DispLog = (int32_t *)&Instance[1].fields.datalist;
  return *p_DispLog;
}


System_String_o *ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  ServantEntity_o *v10; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C384ED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384ED = 1;
  }
  v10 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v4);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0);
    }
LABEL_21:
    sub_1C32E7C(Instance);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v8);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return this->fields.name;
  if ( !entity )
    goto LABEL_21;
  if ( LODWORD(entity[3].klass) != 29 )
    return this->fields.name;
  if ( !MasterData_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          (Il2CppObject **)&v10,
          (int32_t)entity[4].klass,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v10, 0) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v9);
  else
    return this->fields.name;
}


int32_t ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C32E7C(this);
  if ( LODWORD(targetIds->max_length) <= id )
    sub_1C32E84(this);
  return targetIds->m_Items[id];
}


int32_t ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C32E7C(this);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C32E84(this);
  return targetIds->m_Items[0];
}


int32_t ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C32E7C(this);
  return targetIds->max_length;
}


bool ShopEntity__isClosedShopPriorityLowCheck(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+10h] [xbp-20h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  questId = 0;
  itemName = 0;
  message = 0;
  if ( (this->fields.flag & 0x100) != 0 )
  {
    if ( ShopEntity__isQuestNotClear(this, &questId, 0, v2) )
      return ShopEntity__isQuestNotClearItemClosedSub(this, questId, 0, v5);
    if ( ShopEntity__IsPreparation(this, &message, &itemName, v5) || ShopEntity__isExpireItemClosed(this, v6) )
      return 1;
  }
  return 0;
}


bool ShopEntity__isExpireItemClosed(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v5; // x21
  struct System_Int32_array *targetIds; // x8
  int max_length; // w27
  int32_t v8; // w25
  const MethodInfo *v9; // x2
  int v10; // w8
  int64_t v11; // x26
  _BOOL4 v12; // w28
  int i; // w29
  __int64 v14; // x24
  int v15; // w22
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x26
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  UserQuestEntity_o *v21; // x26
  Il2CppObject *Entity; // x0
  const MethodInfo *v23; // x1
  char v25; // w8
  int64_t v26; // [xsp+0h] [xbp-70h]
  QuestReleaseMaster_o *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_4C384DD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DD = 1;
  }
  if ( this->fields.purchaseType != 6 )
  {
LABEL_40:
    v25 = 0;
    return v25 & 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v5 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  targetIds = this->fields.targetIds;
  v27 = (QuestReleaseMaster_o *)Instance;
  if ( !targetIds )
    goto LABEL_42;
  max_length = targetIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  v26 = Instance;
  if ( max_length < 1 )
  {
LABEL_39:
    v25 = 1;
    return v25 & 1;
  }
  if ( !v27 )
LABEL_42:
    sub_1C32E7C(Instance);
  v8 = 0;
  while ( 1 )
  {
    Instance = (int64_t)QuestReleaseMaster__getListByType(v27, 13, 0);
    if ( !Instance )
      goto LABEL_42;
    v10 = *(_DWORD *)(Instance + 24);
    v11 = Instance;
    v12 = v10 > 0;
    if ( v10 >= 1 )
    {
      for ( i = 0; i < v10; v12 = ++i < v10 )
      {
        if ( i >= (unsigned int)v10 )
          sub_1C32E84(Instance);
        v14 = *(_QWORD *)(v11 + 8LL * i + 32);
        if ( !v14 )
          goto LABEL_42;
        v15 = *(_DWORD *)(v14 + 16);
        Instance = ShopEntity__getTargetId(this, v8, v9);
        if ( v15 == (_DWORD)Instance )
        {
          if ( !v5 )
            goto LABEL_42;
          Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v5, *(_DWORD *)(v14 + 16), 0);
          if ( !Instance )
            goto LABEL_42;
          Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0);
          if ( (Instance & 1) == 0 )
            break;
        }
        v10 = *(_DWORD *)(v11 + 24);
      }
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    v16 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v16 = NetworkManager_TypeInfo;
    }
    userIdNumber = v16->static_fields->userIdNumber;
    Instance = ShopEntity__getTargetId(this, v8, v9);
    if ( !MasterData_object )
      goto LABEL_42;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, userIdNumber, Instance, 0);
    if ( EntityFromId )
      break;
    Instance = ShopEntity__getTargetId(this, v8, v20);
    if ( !v5 )
      goto LABEL_42;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
               Instance,
               (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0) < v26
      || ((v12 | ShopEntity__IsEventQuest(this, v23)) & 1) != 0 )
    {
      goto LABEL_40;
    }
LABEL_38:
    if ( ++v8 == max_length )
      goto LABEL_39;
  }
  v21 = EntityFromId;
  if ( ShopEntity__IsEventQuest(this, v19) )
    goto LABEL_40;
  if ( v21->fields.expireAt >= v26 )
    goto LABEL_38;
  v25 = !v12;
  return v25 & 1;
}


bool ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  struct System_Int32_array *targetIds; // x8
  ItemMaster_o *v11; // x23
  __int64 v12; // x25
  __int64 v13; // x26
  unsigned __int64 v14; // x24
  int64_t qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v17; // x8
  __int64 mana; // x24
  __int64 v19; // x28
  struct System_Int32_array *v20; // x8
  __int64 rarePri; // x24
  __int64 v22; // x28
  struct System_Int32_array *v23; // x8
  BalanceConfig_c *v24; // x8
  __int64 v25; // x28
  int v26; // w24
  int32_t v27; // w8

  if ( (byte_4C384EC & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384EC = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_41:
    sub_1C32E7C(Instance);
  }
  if ( (int)targetIds->max_length < 1 )
    return 0;
  v11 = (ItemMaster_o *)Instance;
  v12 = 8;
  v13 = 1LL - (unsigned int)targetIds->max_length;
  while ( 1 )
  {
    v14 = v12 - 8;
    if ( v12 - 8 >= (unsigned __int64)LODWORD(targetIds->max_length) )
LABEL_46:
      sub_1C32E84(Instance);
    if ( !v11 )
      goto LABEL_41;
    Instance = (DataManager_o *)ItemMaster__isQP(v11, *((_DWORD *)&targetIds->obj.klass + v12), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      qp = SelfUserGame->fields.qp;
      setNum = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( qp + setNum * buyCount > *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL) )
      {
        result = 1;
        *check = 1;
        return result;
      }
      goto LABEL_39;
    }
    v17 = this->fields.targetIds;
    if ( !v17 )
      goto LABEL_41;
    if ( v14 >= LODWORD(v17->max_length) )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isMana(v11, *((_DWORD *)&v17->obj.klass + v12), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v19 = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v19 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL) )
      {
        v27 = 5;
        goto LABEL_45;
      }
      goto LABEL_39;
    }
    v20 = this->fields.targetIds;
    if ( !v20 )
      goto LABEL_41;
    if ( v14 >= LODWORD(v20->max_length) )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v11, *((_DWORD *)&v20->obj.klass + v12), 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_41;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v22 = this->fields.setNum;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v22 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL) )
    {
      v27 = 22;
      goto LABEL_45;
    }
LABEL_39:
    if ( v13 + v12 == 8 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v12;
    if ( !targetIds )
      goto LABEL_41;
  }
  v23 = this->fields.targetIds;
  if ( !v23 )
    goto LABEL_41;
  if ( v14 >= LODWORD(v23->max_length) )
    goto LABEL_46;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v11, *((_DWORD *)&v23->obj.klass + v12), 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_39;
  if ( !SelfUserGame )
    goto LABEL_41;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v24 = BalanceConfig_TypeInfo;
  v25 = this->fields.setNum;
  v26 = (int)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( v25 * buyCount + v26 <= v24->static_fields->FriendPointMax )
    goto LABEL_39;
  v27 = 13;
LABEL_45:
  *check = v27;
  return 1;
}


bool ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  ShopReleaseEntity_array *v5; // x19
  __int64 v6; // x24
  ShopReleaseEntity_o *v7; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v11; // w23

  if ( (byte_4C384E7 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E7 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_19:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  v5 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= (unsigned int)max_length )
      sub_1C32E84(Instance);
    v7 = v5->m_Items[v6];
    if ( !v7 )
      goto LABEL_19;
    condType = v7->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_16:
    if ( (int)++v6 >= (int)max_length )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(v5->m_Items[v6], 0);
  condNum = v7->fields.condNum;
  v11 = condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v11, condNum, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    max_length = v5->max_length;
    goto LABEL_16;
  }
  return ShopReleaseEntity__IsPreparation(v7, 0);
}


bool ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  il2cpp_array_size_t max_length; // x8
  UserQuestMaster_o *v8; // x20
  __int64 v9; // x24
  ShopReleaseEntity_o *v10; // x22
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x23
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4C384E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E2 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_26:
    sub_1C32E7C(Instance);
  }
  max_length = EntitiyList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)max_length )
      sub_1C32E84(Instance);
    v10 = EntitiyList->m_Items[v9];
    if ( !v10 )
      goto LABEL_26;
    if ( v10->fields.condType == 1 )
      break;
LABEL_23:
    if ( (int)++v9 >= (int)max_length )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  Instance = (Il2CppObject *)ShopReleaseEntity__get_condValue(v10, 0);
  if ( !v8 )
    goto LABEL_26;
  EntityFromId = UserQuestMaster__getEntityFromId(v8, userIdNumber, (int32_t)Instance, 0);
  if ( EntityFromId )
  {
    Instance = (Il2CppObject *)UserQuestEntity__getClearNum(EntityFromId, 0);
    if ( (_DWORD)Instance )
    {
      max_length = EntitiyList->max_length;
      goto LABEL_23;
    }
  }
  return 1;
}


bool ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w8
  __int64 v5; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4C384E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E4 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(Instance);
    Instance = (ShopReleaseEntity_array *)m_Items[v5];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0);
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w8
  __int64 v5; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4C384E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E5 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(Instance);
    Instance = (ShopReleaseEntity_array *)m_Items[v5];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0);
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w9
  int v6; // w10
  ShopReleaseEntity_o *v7; // x8

  if ( (byte_4C384E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E9 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = Instance->m_Items[v6];
    if ( !v7 )
      goto LABEL_15;
    if ( v7->fields.condType == 37 )
      return ShopReleaseEntity__IsPreparation(Instance->m_Items[v6], 0);
    if ( max_length == ++v6 )
      return 0;
  }
}


bool ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w8
  __int64 v5; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4C384E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E8 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(Instance);
    Instance = (ShopReleaseEntity_array *)m_Items[v5];
    if ( !Instance )
      goto LABEL_15;
    if ( (HIDWORD(Instance->bounds) & 0xFFFFFFFE) == 0x4E )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0);
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w8
  __int64 v5; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4C384E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E3 = 1;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(Instance);
    Instance = (ShopReleaseEntity_array *)m_Items[v5];
    if ( !Instance )
      goto LABEL_14;
    if ( HIDWORD(Instance->bounds) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0);
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v8; // x20
  __int64 v9; // x24
  ShopReleaseEntity_o *v10; // x22
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C384E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E1 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_25:
    sub_1C32E7C(Instance);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1C32E84(Instance);
    v10 = EntitiyList->m_Items[v9];
    if ( !v10 )
      goto LABEL_25;
    if ( v10->fields.condType == 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v11 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v11 = NetworkManager_TypeInfo;
      }
      userIdNumber = v11->static_fields->userIdNumber;
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v10, 0);
      if ( !v8 )
        goto LABEL_25;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v8, userIdNumber, (int32_t)Instance, 0);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


bool ShopEntity__isQuestNotClear(ShopEntity_o *this, int32_t *questId, bool checkExpired, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C384DE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DE = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0);
}


bool ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  bool v5; // w0
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C384E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384E0 = 1;
  }
  questId = 0;
  v5 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v7);
  }
  return v5;
}


bool ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Int32_array *targetIds; // x8
  int max_length; // w24
  bool v10; // w20
  UserQuestMaster_o *v11; // x21
  bool v12; // w25
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v14; // x23

  if ( (byte_4C384DF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C384DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  max_length = targetIds->max_length;
  v10 = 1;
  if ( max_length >= 1 )
  {
    v11 = (UserQuestMaster_o *)Instance;
    v12 = !checkExpired;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_22;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       v11,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       questId,
                       0);
      v14 = EntityFromId;
      if ( (EntityFromId == 0 || v12 || !UserQuestEntity__IsNotExpired(EntityFromId, 0))
        && (!v14 || !UserQuestEntity__getClearNum(v14, 0)) )
      {
        return 0;
      }
      if ( !--max_length )
        return 1;
    }
  }
  return v10;
}


void ShopEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C384F7 & 1) == 0 )
  {
    sub_1C32C20(&ShopEntity___c_TypeInfo);
    byte_4C384F7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ShopEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ShopEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ShopEntity___c___ctor(ShopEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ShopEntity___c___GetAnotherPayItemIds_b__58_0(
        ShopEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C384F8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C384F8 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}


bool ShopEntity___c___GetIsAlreadyInPossession_b__49_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.giftType == 1;
}


bool ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.condType == 1;
}


bool ShopEntity___c___IsPaidExchange_b__36_1(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.clearNum > 0;
}


bool ShopEntity___c___IsPaidExchange_b__36_2(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.clearNum > 0;
}


int64_t ShopEntity___c___IsPaidExchange_b__36_3(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.updatedAt;
}


bool ShopEntity___c___IsServantGet_b__50_0(ShopEntity___c_o *this, UserPresentBoxEntity_o *v, const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.giftType == 1;
}