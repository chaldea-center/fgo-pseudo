void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BA4D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5BA4D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v9; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  void *v13; // x21
  Il2CppClass *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v15; // x0
  void *v16; // x20
  Il2CppClass *v17; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v21; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5BA46 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA46 = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  *imageId = this->fields.imageId;
  purchaseType = this->fields.purchaseType;
  if ( purchaseType == 2 )
  {
    TargetId = ShopEntity__get_TargetId(this, (const MethodInfo *)imageId);
    goto LABEL_15;
  }
  if ( purchaseType != 6 )
    goto LABEL_27;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v21,
          (int32_t)Instance,
          (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v21 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v21[3].klass), 0LL);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
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
          *(_QWORD *)&v24.fields.currentCryptoKey = klass;
          *(_QWORD *)&v24.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = entity[5].klass;
              v16 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_1B8880C(Instance, v7);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v14 = entity[4].klass;
          v13 = entity[4].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v23.fields.currentCryptoKey = v14;
          *(_QWORD *)&v23.fields.fakeValue = v13;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = entity[4].klass;
              v16 = entity[4].monitor;
LABEL_34:
              if ( !v15->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v15);
              *(_QWORD *)&v25.fields.currentCryptoKey = v17;
              *(_QWORD *)&v25.fields.fakeValue = v16;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
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


int32_t __fastcall ShopEntity__CreatePrimaryKey(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall ShopEntity__GetAddMessage(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA4A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_16669/*"addMessage"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA4A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_16669/*"addMessage"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_1B8880C(0LL, v4);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                              value,
                              value->klass->vtable[4].methodPtr);
}


System_Int32_array *__fastcall ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  Il2CppObject *v4; // x19
  ShopEntity___c_c *v5; // x0
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__58_0; // x20
  Il2CppObject *v8; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_int__o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BA2C & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__);
    sub_1B885B0(&ShopEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16790/*"anotherItemIds"*/);
    byte_4A5BA2C = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_16790/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v4->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (System_Collections_Generic_List_object__c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
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
            _9__58_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__58_0,
              v8,
              Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
              0LL);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
            static_fields->__9__58_0 = _9__58_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v10, v11);
          }
          v12 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            (System_Collections_Generic_List_object__o *)v4,
                                                            (System_Converter_T__TOutput__o *)_9__58_0,
                                                            (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( v12 )
            return System_Collections_Generic_List_int___ToArray(
                     v12,
                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        else
        {
          sub_1B88ACC(v4);
        }
        sub_1B8880C(v12, v13);
      }
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  ShopEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&PayType_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_16793/*"anotherPayType"*/);
    byte_4A5BA2D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16793/*"anotherPayType"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B8880C(0LL, v4);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value, PayType_Type_TypeInfo, v5, v6);
      }
      else
      {
        sub_1B88ACC(value);
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
      sub_1B88814(CommonConsumeEntities, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_1B8880C(CommonConsumeEntities, v3);
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
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  __int64 ItemID; // x0
  __int64 v6; // x1

  if ( (byte_4A5BA4C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BA4C = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v4);
  if ( !Master_object )
    sub_1B8880C(ItemID, v6);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_4A5BA32 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5BA32 = 1;
  }
  setNum = this->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(setNum, 0LL);
}


int32_t __fastcall ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA13 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    byte_4A5BA13 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  __int64 v5; // x2
  __int64 v6; // x3
  ShopEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA14 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_19628/*"freeShopReleaseDate"*/);
    byte_4A5BA14 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_19628/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B8880C(0LL, v4);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v5, v6);
      }
      else
      {
        sub_1B88ACC(value);
        return ShopEntity__IsAfterTheFreeShopReleaseDate(v7, v8);
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall ShopEntity__GetInfo(
        ShopEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        bool isSend,
        const MethodInfo *method)
{
  System_String_o *name; // x1
  int32_t v10; // w2
  char v11; // w3
  int32_t purchaseType; // w9
  __int64 *v13; // x8
  int32_t v14; // w0
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o **v17; // x0
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v21; // x1
  unsigned int klass; // w8
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x1
  ServantEntity_o *v25; // x21
  System_String_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w2
  char v33; // w3
  bool IsServantEquip; // w21
  System_String_o *v35; // x0
  int32_t setNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BA33 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_11950/*"SERVANT_UNIT"*/);
    sub_1B885B0(&StringLiteral_5745/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1B885B0(&StringLiteral_11602/*"SERVANT_EQUIP_UNIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA33 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)name, (int32_t)countText, isSend);
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v21);
      if ( !MasterData_object )
        goto LABEL_41;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int32_t)Instance,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_41;
      klass = (unsigned int)Instance[3].klass;
      if ( klass <= 0xD && ((1 << klass) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v17 = countText;
        LODWORD(v16) = 0;
        goto LABEL_17;
      }
      if ( isSend )
      {
        v14 = (_DWORD)this + 64;
        goto LABEL_11;
      }
      v35 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      LODWORD(v16) = (_DWORD)v35;
      *countText = v35;
      goto LABEL_16;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_14797/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v23 = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v24),
                !v23)
            || (Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                             (int32_t)Instance,
                             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_41:
            sub_1B8880C(Instance, v19);
          }
          v25 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v25, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v13 = &StringLiteral_11950/*"SERVANT_UNIT"*/;
          }
          else
          {
            IsServantEquip = ServantEntity__get_IsServantEquip(v25, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( IsServantEquip )
              v13 = &StringLiteral_11602/*"SERVANT_EQUIP_UNIT"*/;
            else
              v13 = &StringLiteral_5745/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_32:
          v26 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
          setNum = this->fields.setNum;
          v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum, v27, v28, v29);
          v31 = System_String__Format(v26, v30, 0LL);
          *countText = v31;
          sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)v31, v32, v33);
          return;
        }
LABEL_10:
        v14 = (_DWORD)this + 64;
LABEL_11:
        v15 = System_Int32__ToString(v14, 0LL);
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
        LODWORD(v16) = (_DWORD)StringLiteral_1/*""*/;
      }
LABEL_16:
      v17 = countText;
LABEL_17:
      sub_1B88554((ServantStatusBattleListViewItem_o *)v17, (int32_t)v16, v10, v11);
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
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v11; // x8
  System_Object_array *v12; // x21
  System_Predicate_object__o *_9__49_0; // x24
  Il2CppObject *v14; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t v18; // x21
  int64_t v19; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v21; // x8
  int64_t v22; // x20
  unsigned __int64 v23; // x25
  bool v24; // w27
  int32_t v25; // w28
  int v26; // w8
  int v27; // w9
  __int64 v28; // x10
  int v29; // w8
  unsigned int v30; // w29
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x23
  int v34; // w8
  unsigned int v35; // w29
  __int64 v36; // x8
  __int64 v37; // x19
  __int64 v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A5BA23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__);
    sub_1B885B0(&ShopEntity___c_TypeInfo);
    byte_4A5BA23 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, Instance, 0LL);
  v11 = ShopEntity___c_TypeInfo;
  v12 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v11 = ShopEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Predicate_object__o *)v11->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ShopEntity___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__49_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__49_0, v14, Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v16, v17);
  }
  Instance = (int64_t)System_Array__FindAll_object_(
                        v12,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_2F789CC *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v8
    || (v18 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)v8, 0LL), !v9)
    || (v19 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v9, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_49:
    sub_1B8880C(Instance, v6);
  }
  v21 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v21 < 1 )
    return 0;
  v22 = Instance;
  v23 = 0LL;
  v24 = v18 == 0 || isWithoutPresents;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)v21 )
      goto LABEL_50;
    v25 = targetIds->m_Items[v23 + 1];
    if ( !v24 )
    {
      v26 = *(_DWORD *)(v18 + 24);
      if ( v26 >= 1 )
        break;
    }
LABEL_28:
    if ( !v19 )
      goto LABEL_49;
    v29 = *(_DWORD *)(v19 + 24);
    if ( v29 >= 1 )
    {
      v30 = 0;
      while ( v30 < v29 )
      {
        v31 = *(_QWORD *)(v19 + 8LL * (int)v30 + 32);
        if ( !v31 )
          goto LABEL_49;
        v33 = *(_QWORD *)(v31 + 80);
        v32 = *(_QWORD *)(v31 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v33;
        *(_QWORD *)&v40.fields.fakeValue = v32;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
        if ( v25 == (_DWORD)Instance )
          return 1;
        v29 = *(_DWORD *)(v19 + 24);
        if ( (int)++v30 >= v29 )
          goto LABEL_37;
      }
LABEL_50:
      sub_1B88814(Instance, v6);
    }
LABEL_37:
    if ( !v22 )
      goto LABEL_49;
    v34 = *(_DWORD *)(v22 + 24);
    if ( v34 >= 1 )
    {
      v35 = 0;
      while ( v35 < v34 )
      {
        v36 = *(_QWORD *)(v22 + 8LL * (int)v35 + 32);
        if ( !v36 )
          goto LABEL_49;
        v38 = *(_QWORD *)(v36 + 80);
        v37 = *(_QWORD *)(v36 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v38;
        *(_QWORD *)&v41.fields.fakeValue = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
        if ( v25 == (_DWORD)Instance )
          return 1;
        v34 = *(_DWORD *)(v22 + 24);
        if ( (int)++v35 >= v34 )
          goto LABEL_46;
      }
      goto LABEL_50;
    }
LABEL_46:
    LODWORD(v21) = targetIds->max_length;
    if ( (__int64)++v23 >= (int)v21 )
      return 0;
  }
  v27 = 0;
  while ( 1 )
  {
    if ( v26 == v27 )
      goto LABEL_50;
    v28 = *(_QWORD *)(v18 + 8LL * v27 + 32);
    if ( !v28 )
      goto LABEL_49;
    if ( v25 == *(_DWORD *)(v28 + 76) )
      return 1;
    if ( v26 == ++v27 )
      goto LABEL_28;
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5BA22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA22 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
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
    sub_1B8880C(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1B8880C(this, method);
  if ( !itemIds->max_length )
    sub_1B88814(this, method);
  return itemIds->m_Items[1];
}


int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1B8880C(this, num);
  if ( itemIds->max_length <= num )
    sub_1B88814(this, num);
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  const MethodInfo *v17; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x7
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5BA35 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA35 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v21);
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
        v22);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v16 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v17),
              !v16)
          || (Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                           (int32_t)Instance,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_1B8880C(Instance, v15);
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
  if ( (byte_4A5BA49 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22398/*"overwriteName"*/);
    byte_4A5BA49 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22398/*"overwriteName"*/,
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

  prices = this->fields.prices;
  if ( !prices )
    sub_1B8880C(this, method);
  if ( !prices->max_length )
    sub_1B88814(this, method);
  return prices->m_Items[1];
}


int32_t __fastcall ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_BEF02C[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_BEF004[v2];
}


int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1B8880C(this, num);
  if ( prices->max_length <= num )
    sub_1B88814(this, num);
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5BA31 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o *v7; // x19
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5BA41 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA41 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    return 0LL;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(Instance, v4);
    v7 = Instance->m_Items[v6];
    if ( !v7 )
      goto LABEL_17;
    if ( v7->fields.condType == 8 )
      break;
    if ( (int)++v6 >= max_length )
      return 0LL;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (ShopReleaseEntity_array *)ShopReleaseEntity__get_condValue(v7, 0LL),
        !MasterData_object) )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)Instance,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


int32_t __fastcall ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t flag; // w8
  __int64 *v8; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA2E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_8239/*"LIMITED_SHOP_REMAIN_DAYS"*/);
    sub_1B885B0(&StringLiteral_8707/*"MONTHLY_SHOP_REMAIN_DAYS"*/);
    sub_1B885B0(&StringLiteral_22854/*"remainDays"*/);
    byte_4A5BA2E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22854/*"remainDays"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v8 = &StringLiteral_8239/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v8 = &StringLiteral_8707/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v8, 0LL);
  }
  if ( !value )
    sub_1B8880C(0LL, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *v22; // x24
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x6
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x7
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A5BA34 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA34 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v26);
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
          v27);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v23);
        if ( !v22 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v22,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          v24);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v18 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v19),
          !v18)
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       (int32_t)Instance,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_1B8880C(Instance, v17);
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

  if ( (byte_4A5BA15 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BA15 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v4) && ShopEntity__GetFreeShopReleaseDate(this, v5) > 0;
}


bool __fastcall ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t closedAt; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5BA1B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA1B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t AnotherPayItemIds; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v8; // x1
  char v9; // w8
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BA2A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA2A = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_21;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v3);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
    sub_1B88814(AnotherPayItemIds, v5);
  v6 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v6 < 1 )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_24:
    sub_1B8880C(AnotherPayItemIds, v5);
  UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, AnotherPayItemIds, v6, 0LL);
  v9 = (char)entity;
  if ( !entity )
    return v9 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v8) )
  {
LABEL_21:
    v9 = 0;
    return v9 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)AnotherPayItemIds,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA2B & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24354/*"useAnotherPayCommonReleaseId"*/);
    byte_4A5BA2B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24354/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v4 = value;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v5 = System_Convert__ToInt32(v4, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v7);
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

  if ( (byte_4A5BA1D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BA1D = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return closedAt && nowTime > closedAt;
}


bool __fastcall ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t v6; // w8
  int32_t limitNum; // w9
  bool v8; // w10
  bool v9; // w8

  if ( (byte_4A5BA2F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA2F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)MasterData_object,
                              Instance,
                              this->fields.baseShopId,
                              0LL)) == 0 )
  {
LABEL_11:
    sub_1B8880C(Instance, v4);
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


bool __fastcall ShopEntity__IsCondType_39811968(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_4A5BA30 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA30 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v9 = m_CancellationTokenSource_high > 0;
  v10 = m_CancellationTokenSource_high >= limitNum;
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool v8; // w0
  const MethodInfo *v9; // x1
  int32_t costumeId[2]; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4A5BA19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    byte_4A5BA19 = 1;
  }
  value = 0LL;
  *(_QWORD *)costumeId = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v4)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  v8 = ServantCostumeReleaseMaster__checkItemHaving(
         (ServantCostumeReleaseMaster_o *)Instance,
         costumeId[1],
         costumeId[0],
         0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v9) || !v8);
}


bool __fastcall ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  bool v8; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BA1A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA1A = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_27;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_15;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_27;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &v11,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_27;
  v8 = 1;
  if ( !UserEventEntity__getEventFlag(v11, 1, 0LL) )
  {
LABEL_15:
    if ( !nowTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      nowTime = NetworkManager__getTime(0LL);
    }
    if ( nowTime < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && nowTime > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_27:
    sub_1B8880C(Instance, v6);
  }
  return v8;
}


bool __fastcall ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x1
  int v8; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  WarEntity_c *v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x19
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5BA4B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5BA4B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v6 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v7),
        !v6)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v6, (int32_t)Instance, 0LL),
        !MasterData_object)
    || (v8 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].klass) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v11 = Enumerator;
  v12 = 0;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_36;
    klass = v11->klass;
    v14 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BDA590(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = v11->klass;
    v18 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_21:
      v20 = sub_1BDA590(v11, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v11,
                                                                  *(_QWORD *)(v20 + 8));
    if ( !Enumerator )
      sub_1B8880C(0LL, v21);
    v10 = WarEntity_TypeInfo;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
    {
      sub_1B88ACC(Enumerator);
LABEL_36:
      sub_1B8880C(Enumerator, v10);
    }
    if ( LODWORD(Enumerator[6].klass) == v8 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v12 |= (unsigned __int8)Enumerator;
    }
  }
  v23 = v11->klass;
  v24 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_32:
    v26 = sub_1BDA590(v11, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA29 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_22854/*"remainDays"*/);
    byte_4A5BA29 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22854/*"remainDays"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_1B8880C(0LL, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v6 = System_Int32__Parse(v5, 0LL);
  if ( v6 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v6;
}


bool __fastcall ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4A5BA16 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    byte_4A5BA16 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v5),
        !MasterData_object) )
  {
LABEL_10:
    sub_1B8880C(script, method);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5BA25 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA25 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5BA26 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA26 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_22854/*"remainDays"*/);
    byte_4A5BA27 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22854/*"remainDays"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_1B8880C(0LL, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5BA28 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_22854/*"remainDays"*/);
    byte_4A5BA28 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22854/*"remainDays"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_1B8880C(0LL, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  bool v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BA45 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA45 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v12.fields._current )
      sub_1B8880C(v8, v9);
    if ( HIDWORD(v12.fields._current[1].klass) == 37 )
    {
      v11 = 6;
      goto LABEL_18;
    }
  }
  v11 = 2;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return v10 && v11 == 6;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v8; // x21
  bool IsTimeStatusRecord; // w0
  bool v10; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BA1C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA1C = 1;
  }
  entity = 0LL;
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_26;
  v8 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_26;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v8 || IsTimeStatusRecord )
      goto LABEL_20;
  }
  else if ( !v8 )
  {
LABEL_20:
    if ( nowTime < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_26:
    sub_1B8880C(Instance, v6);
  }
  v10 = 1;
  if ( !UserEventEntity__getEventFlag(v8, 1, 0LL) )
    goto LABEL_20;
  return v10;
}


bool __fastcall ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x22
  Il2CppObject *v7; // x21
  UserShopEntity_o *v8; // x21
  int64_t updatedAt; // x25
  __int64 v10; // x2
  __int64 v11; // x3
  int64_t v12; // x27
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  bool v15; // w28
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x23
  ShopEntity___c_c *v18; // x0
  System_Func_object__bool__o *_9__36_0; // x24
  Il2CppObject *v20; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x23
  int max_length; // w8
  unsigned int v28; // w25
  Il2CppObject *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  ShopEntity___c_c *v37; // x0
  System_Func_object__bool__o *_9__36_1; // x22
  Il2CppObject *v39; // x24
  struct ShopEntity___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  ShopEntity___c_c *v43; // x0
  System_Func_object__bool__o *_9__36_2; // x22
  Il2CppObject *v45; // x24
  struct ShopEntity___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  ShopEntity___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x22
  System_Func_T__TResult__o *_9__36_3; // x23
  Il2CppObject *v53; // x24
  struct ShopEntity___c_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo_361AA4C *v57; // x3
  bool v58; // w20
  int32_t FreeShopCondId; // w0
  char v60; // w8
  bool result; // w0
  ShopEntity_o *v62; // x0
  int32_t *v63; // x1
  int32_t *v64; // x2
  const MethodInfo *v65; // x3
  int64_t v66; // [xsp+10h] [xbp-80h]
  CommonReleaseMaster_o *v67; // [xsp+18h] [xbp-78h]
  __int64 v68; // [xsp+20h] [xbp-70h] BYREF
  int64_t v69; // [xsp+28h] [xbp-68h]
  System_Nullable_long__o v70; // 0:x0.16

  if ( (byte_4A5BA18 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserQuestEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Min_UserQuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserQuestEntity___);
    sub_1B885B0(&System_Func_UserQuestEntity__long__TypeInfo);
    sub_1B885B0(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ShopEntity___c__IsPaidExchange_b__36_0__);
    sub_1B885B0(&Method_ShopEntity___c__IsPaidExchange_b__36_1__);
    sub_1B885B0(&Method_ShopEntity___c__IsPaidExchange_b__36_2__);
    sub_1B885B0(&Method_ShopEntity___c__IsPaidExchange_b__36_3__);
    sub_1B885B0(&ShopEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19628/*"freeShopReleaseDate"*/);
    byte_4A5BA18 = 1;
  }
  v68 = 0LL;
  v69 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v7 )
    goto LABEL_66;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely((UserShopMaster_o *)v7, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v8 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_66;
  updatedAt = v8->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                        (Il2CppObject *)StringLiteral_19628/*"freeShopReleaseDate"*/,
                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_66;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v10, v11);
    v15 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v13) || UserShopEntity__get_IsReturnRarePriShop(v8, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v14);
    if ( !MasterData_object )
      goto LABEL_66;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, Instance, 0LL);
    if ( List )
    {
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v66 = updatedAt;
      v67 = (CommonReleaseMaster_o *)MasterData_object;
      v18 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v18 = ShopEntity___c_TypeInfo;
      }
      _9__36_0 = (System_Func_object__bool__o *)v18->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = ShopEntity___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__36_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_0, v20, Method_ShopEntity___c__IsPaidExchange_b__36_0__, 0LL);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v22, v23);
      }
      v24 = System_Linq_Enumerable__Where_object_(
              v17,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v25 = System_Linq_Enumerable__ToArray_object_(
              v24,
              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v25 )
        goto LABEL_66;
      max_length = v25->max_length;
      if ( max_length >= 1 )
      {
        v28 = 0;
        while ( 1 )
        {
          if ( v28 >= max_length )
            sub_1B88814(Instance, v4);
          v29 = v25->m_Items[v28];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v29 || !v6 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                (UserQuestMaster_o *)v6,
                                Instance,
                                (int32_t)v29[2].klass,
                                0LL);
          if ( Instance )
          {
            if ( !v26 )
              break;
            items = v26->fields._items;
            v33 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              break;
            size = v26->fields._size;
            v35 = Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), v35, v30, v31);
            }
          }
          max_length = v25->max_length;
          if ( (int)++v28 >= max_length )
            goto LABEL_39;
        }
LABEL_66:
        sub_1B8880C(Instance, v4);
      }
LABEL_39:
      v68 = 0LL;
      v69 = 0LL;
      if ( !v26 )
        goto LABEL_66;
      updatedAt = v66;
      if ( v26->fields._size < 1 )
        goto LABEL_62;
      v37 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v37 = ShopEntity___c_TypeInfo;
      }
      _9__36_1 = (System_Func_object__bool__o *)v37->static_fields->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = ShopEntity___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__36_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_1, v39, Method_ShopEntity___c__IsPaidExchange_b__36_1__, 0LL);
        v40 = ShopEntity___c_TypeInfo->static_fields;
        v40->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->__9__36_1, (int32_t)_9__36_1, v41, v42);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v26,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_62;
      v43 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v43 = ShopEntity___c_TypeInfo;
      }
      _9__36_2 = (System_Func_object__bool__o *)v43->static_fields->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = ShopEntity___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__36_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_2, v45, Method_ShopEntity___c__IsPaidExchange_b__36_2__, 0LL);
        v46 = ShopEntity___c_TypeInfo->static_fields;
        v46->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->__9__36_2, (int32_t)_9__36_2, v47, v48);
      }
      v49 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v26,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v50 = ShopEntity___c_TypeInfo;
      v51 = v49;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v50 = ShopEntity___c_TypeInfo;
      }
      _9__36_3 = (System_Func_T__TResult__o *)v50->static_fields->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = ShopEntity___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v50->static_fields->__9;
        _9__36_3 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__36_3, v53, Method_ShopEntity___c__IsPaidExchange_b__36_3__, 0LL);
        v54 = ShopEntity___c_TypeInfo->static_fields;
        v54->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->__9__36_3, (int32_t)_9__36_3, v55, v56);
      }
      v70.fields.value = System_Linq_Enumerable__Min_object__48928940(
                           v51,
                           (System_Func_TSource__long__o *)_9__36_3,
                           (const MethodInfo_2EA98AC *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v70.fields.hasValue = &v68;
      System_Nullable_long____ctor(v70, Method_System_Nullable_long___ctor__, v57);
      if ( (_BYTE)v68 )
        v58 = v69 > v8->fields.updatedAt;
      else
LABEL_62:
        v58 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v4);
      v60 = v58 | !CommonReleaseMaster__IsOpen(v67, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v60 = 1;
    }
    return (v15 || updatedAt < v12) | v60;
  }
  else
  {
    sub_1B88ACC(Instance);
    ShopEntity__SetSvtIdAndCostumeId(v62, v63, v64, v65);
  }
  return result;
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5BA1E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v7; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v9; // x8
  UserQuestMaster_o *v10; // x19
  unsigned __int64 v11; // x24
  int32_t v12; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5BA20 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA20 = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_22;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                         (UserShopMaster_o *)MasterData_object,
                         Instance,
                         this->fields.baseShopId,
                         0LL);
    if ( EntityDefinitely )
    {
      v7 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_22;
      v9 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = (UserQuestMaster_o *)Instance;
        v11 = 0LL;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v9 )
            sub_1B88814(Instance, v4);
          v12 = targetIds->m_Items[v11 + 1];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v10 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v10, &entity, Instance, v12, 0LL);
          if ( !entity )
            goto LABEL_20;
          LODWORD(v9) = targetIds->max_length;
          if ( (__int64)++v11 >= (int)v9 )
            goto LABEL_19;
        }
LABEL_22:
        sub_1B8880C(Instance, v4);
      }
LABEL_19:
      LOBYTE(EntityDefinitely) = v7->fields.num > 0;
    }
  }
  else
  {
LABEL_20:
    LOBYTE(EntityDefinitely) = 0;
  }
  return (char)EntityDefinitely;
}


bool __fastcall ShopEntity__IsServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  Il2CppObject *v4; // x21
  int64_t UserId; // x0
  __int64 v6; // x1
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v8; // x8
  System_Object_array *v9; // x21
  System_Predicate_object__o *_9__50_0; // x22
  Il2CppObject *v11; // x23
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Int32_array *targetIds; // x22
  __int64 v16; // x8
  int64_t v17; // x20
  unsigned __int64 v18; // x23
  int64_t v19; // x25
  int32_t v20; // w21
  int v21; // w8
  __int64 v22; // x9
  __int64 v23; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5BA24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&Method_ShopEntity___c__IsServantGet_b__50_0__);
    sub_1B885B0(&ShopEntity___c_TypeInfo);
    byte_4A5BA24 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v4 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_34;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)v4, UserId, 0LL);
  v8 = ShopEntity___c_TypeInfo;
  v9 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v8 = ShopEntity___c_TypeInfo;
  }
  _9__50_0 = (System_Predicate_object__o *)v8->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__50_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__50_0, v11, Method_ShopEntity___c__IsServantGet_b__50_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v13, v14);
  }
  UserId = (int64_t)System_Array__FindAll_object_(
                      v9,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_2F789CC *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_34:
    sub_1B8880C(UserId, v6);
  v16 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v16 < 1 )
    return 0;
  v17 = UserId;
  v18 = 0LL;
  v19 = UserId + 32;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v16 )
      goto LABEL_33;
    v20 = targetIds->m_Items[v18 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_34;
    UserId = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)Master_object,
               &entity,
               UserId,
               v20,
               0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v17 )
    {
      v21 = *(_DWORD *)(v17 + 24);
      if ( v21 >= 1 )
      {
        v22 = 0LL;
        while ( (unsigned int)v22 < v21 )
        {
          v23 = *(_QWORD *)(v19 + 8 * v22);
          if ( !v23 )
            goto LABEL_34;
          if ( v20 == *(_DWORD *)(v23 + 76) )
            return 1;
          if ( (int)++v22 >= v21 )
            goto LABEL_30;
        }
LABEL_33:
        sub_1B88814(UserId, v6);
      }
    }
LABEL_30:
    LODWORD(v16) = targetIds->max_length;
    if ( (__int64)++v18 >= (int)v16 )
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BA17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&StringLiteral_19625/*"freeShopCondId"*/);
    byte_4A5BA17 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19625/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5BA21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA21 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_12;
  if ( this->fields.limitNum < 1 )
  {
LABEL_13:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1B8880C(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v7) )
    {
LABEL_12:
      LOBYTE(EntityDefinitely) = 1;
      return (char)EntityDefinitely;
    }
    goto LABEL_13;
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

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_5;
  if ( !targetIds->max_length )
    sub_1B88814(this, svtId);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_1B8880C(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_61726036((System_String_o *)this, 0, this->fields.id - 2, 0LL);
  *svtId = System_Int32__Parse(v8, 0LL);
  v9 = System_String__Substring(v7, v7->fields._stringLength - 2, 0LL);
  *costumeId = System_Int32__Parse(v9, 0LL);
}


bool __fastcall ShopEntity__TryGetClosedMessage(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5BA1F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0

  if ( (byte_4A5BA36 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA36 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v6),
        !MasterData_object) )
  {
    sub_1B8880C(Instance, v4);
  }
  if ( ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v7);
  return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t *p_m_CancellationTokenSource; // x8
  int32_t TargetId; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  Il2CppObject *v12; // x20
  int64_t UserId; // x21
  const MethodInfo *v14; // x1

  if ( (byte_4A5BA37 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA37 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v6);
  if ( !MasterData_object )
    goto LABEL_21;
  if ( !ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v7);
    if ( ItemMaster__isRarePri((ItemMaster_o *)MasterData_object, TargetId, 0LL) )
    {
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( Instance )
      {
        p_m_CancellationTokenSource = (int32_t *)(&Instance[1].fields._DispLog + 4);
        return *p_m_CancellationTokenSource;
      }
    }
    else
    {
      v11 = ShopEntity__get_TargetId(this, v10);
      if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v11, 0LL) )
      {
        Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( Instance )
        {
          p_m_CancellationTokenSource = (int32_t *)&Instance[1].fields.m_CancellationTokenSource;
          return *p_m_CancellationTokenSource;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
          if ( v12 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v12,
                                          UserId,
                                          (int32_t)Instance,
                                          0LL);
            if ( Instance )
            {
              p_m_CancellationTokenSource = (int32_t *)&Instance->fields.m_CancellationTokenSource + 1;
              return *p_m_CancellationTokenSource;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(Instance, v4);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_21;
  p_m_CancellationTokenSource = (int32_t *)&Instance[1].fields._DispLog;
  return *p_m_CancellationTokenSource;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  ServantEntity_o *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BA48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA48 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v5);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_21:
    sub_1B8880C(Instance, v4);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          (Il2CppObject **)&v11,
          (int32_t)entity[4].klass,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v11, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v10);
  else
    return this->fields.name;
}


int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B8880C(this, id);
  if ( targetIds->max_length <= id )
    sub_1B88814(this, id);
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B8880C(this, method);
  if ( !targetIds->max_length )
    sub_1B88814(this, method);
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B8880C(this, method);
  return targetIds->max_length;
}


bool __fastcall ShopEntity__isClosedShopPriorityLowCheck(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+10h] [xbp-20h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  questId = 0;
  itemName = 0LL;
  message = 0LL;
  if ( (this->fields.flag & 0x100) != 0 )
  {
    if ( ShopEntity__isQuestNotClear(this, &questId, 0, v2) )
      return ShopEntity__isQuestNotClearItemClosedSub(this, questId, 0, v5);
    if ( ShopEntity__IsPreparation(this, &message, &itemName, v5) || ShopEntity__isExpireItemClosed(this, v6) )
      return 1;
  }
  return 0;
}


bool __fastcall ShopEntity__isExpireItemClosed(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v8; // x22
  int max_length; // w27
  int32_t v10; // w24
  const MethodInfo *v11; // x2
  int v12; // w8
  int64_t v13; // x25
  _BOOL4 v14; // w29
  int i; // w28
  __int64 v16; // x26
  int v17; // w23
  int64_t UserId; // x25
  const MethodInfo *v19; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UserQuestEntity_o *v23; // x25
  Il2CppObject *Entity; // x0
  const MethodInfo *v25; // x1
  char v27; // w8
  int64_t v28; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5BA38 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA38 = 1;
  }
  if ( this->fields.purchaseType != 6 )
  {
LABEL_36:
    v27 = 0;
    return v27 & 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_38;
  v8 = (QuestReleaseMaster_o *)Instance;
  max_length = targetIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  v28 = Instance;
  if ( max_length < 1 )
  {
LABEL_35:
    v27 = 1;
    return v27 & 1;
  }
  if ( !v8 )
LABEL_38:
    sub_1B8880C(Instance, v4);
  v10 = 0;
  while ( 1 )
  {
    Instance = (int64_t)QuestReleaseMaster__getListByType(v8, 13, 0LL);
    if ( !Instance )
      goto LABEL_38;
    v12 = *(_DWORD *)(Instance + 24);
    v13 = Instance;
    v14 = v12 > 0;
    if ( v12 >= 1 )
    {
      for ( i = 0; i < v12; v14 = ++i < v12 )
      {
        if ( i >= (unsigned int)v12 )
          sub_1B88814(Instance, v4);
        v16 = *(_QWORD *)(v13 + 8LL * i + 32);
        if ( !v16 )
          goto LABEL_38;
        v17 = *(_DWORD *)(v16 + 16);
        Instance = ShopEntity__getTargetId(this, v10, v11);
        if ( v17 == (_DWORD)Instance )
        {
          if ( !v6 )
            goto LABEL_38;
          Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v6, *(_DWORD *)(v16 + 16), 0LL);
          if ( !Instance )
            goto LABEL_38;
          Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
          if ( (Instance & 1) == 0 )
            break;
        }
        v12 = *(_DWORD *)(v13 + 24);
      }
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    Instance = ShopEntity__getTargetId(this, v10, v19);
    if ( !MasterData_object )
      goto LABEL_38;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, UserId, Instance, 0LL);
    if ( EntityFromId )
      break;
    Instance = ShopEntity__getTargetId(this, v10, v22);
    if ( !v6 )
      goto LABEL_38;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
               Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) < v28
      || ((v14 | ShopEntity__IsEventQuest(this, v25)) & 1) != 0 )
    {
      goto LABEL_36;
    }
LABEL_34:
    if ( ++v10 == max_length )
      goto LABEL_35;
  }
  v23 = EntityFromId;
  if ( ShopEntity__IsEventQuest(this, v21) )
    goto LABEL_36;
  if ( v23->fields.expireAt >= v28 )
    goto LABEL_34;
  v27 = !v14;
  return v27 & 1;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x8
  ItemMaster_o *v12; // x23
  __int64 v13; // x25
  __int64 v14; // x26
  unsigned __int64 v15; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v18; // x8
  __int64 mana; // x24
  __int64 v20; // x28
  struct System_Int32_array *v21; // x8
  __int64 rarePri; // x24
  __int64 v23; // x28
  struct System_Int32_array *v24; // x8
  BalanceConfig_c *v25; // x8
  __int64 v26; // x28
  int v27; // w24
  int32_t v28; // w8

  if ( (byte_4A5BA47 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA47 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_41:
    sub_1B8880C(Instance, v10);
  }
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
    return 0;
  v12 = (ItemMaster_o *)Instance;
  v13 = 8LL;
  v14 = 1LL - (unsigned int)*(_QWORD *)&targetIds->max_length;
  while ( 1 )
  {
    v15 = v13 - 8;
    if ( v13 - 8 >= (unsigned __int64)targetIds->max_length )
LABEL_46:
      sub_1B88814(Instance, v10);
    if ( !v12 )
      goto LABEL_41;
    Instance = (DataManager_o *)ItemMaster__isQP(v12, *((_DWORD *)&targetIds->obj.klass + v13), 0LL);
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
      if ( qp + setNum * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL) )
      {
        result = 1;
        *check = 1;
        return result;
      }
      goto LABEL_39;
    }
    v18 = this->fields.targetIds;
    if ( !v18 )
      goto LABEL_41;
    if ( v15 >= v18->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isMana(v12, *((_DWORD *)&v18->obj.klass + v13), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v20 = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v20 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL) )
      {
        v28 = 5;
        goto LABEL_45;
      }
      goto LABEL_39;
    }
    v21 = this->fields.targetIds;
    if ( !v21 )
      goto LABEL_41;
    if ( v15 >= v21->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v12, *((_DWORD *)&v21->obj.klass + v13), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_41;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v23 = this->fields.setNum;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v23 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 12LL) )
    {
      v28 = 22;
      goto LABEL_45;
    }
LABEL_39:
    if ( v14 + v13 == 8 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v13;
    if ( !targetIds )
      goto LABEL_41;
  }
  v24 = this->fields.targetIds;
  if ( !v24 )
    goto LABEL_41;
  if ( v15 >= v24->max_length )
    goto LABEL_46;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v12, *((_DWORD *)&v24->obj.klass + v13), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_39;
  if ( !SelfUserGame )
    goto LABEL_41;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v25 = BalanceConfig_TypeInfo;
  v26 = this->fields.setNum;
  v27 = (int)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  if ( v26 * buyCount + v27 <= v25->static_fields->FriendPointMax )
    goto LABEL_39;
  v28 = 13;
LABEL_45:
  *check = v28;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  ShopReleaseEntity_array *v6; // x19
  __int64 v7; // x24
  ShopReleaseEntity_o *v8; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v12; // w23

  if ( (byte_4A5BA42 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA42 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(Instance, v4);
  }
  v5 = *(_QWORD *)&Instance->max_length;
  v6 = Instance;
  if ( (int)v5 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= (unsigned int)v5 )
      sub_1B88814(Instance, v4);
    v8 = v6->m_Items[v7];
    if ( !v8 )
      goto LABEL_19;
    condType = v8->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_16:
    if ( (int)++v7 >= (int)v5 )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(v6->m_Items[v7], 0LL);
  condNum = v8->fields.condNum;
  v12 = condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v12, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v5 = *(_QWORD *)&v6->max_length;
    goto LABEL_16;
  }
  return ShopReleaseEntity__IsPreparation(v8, 0LL);
}


bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v8; // x8
  UserQuestMaster_o *v9; // x20
  __int64 v10; // x23
  ShopReleaseEntity_o *v11; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4A5BA3D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3D = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_1B8880C(Instance, v6);
  }
  v8 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (UserQuestMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= (unsigned int)v8 )
      sub_1B88814(Instance, v6);
    v11 = EntitiyList->m_Items[v10];
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.condType == 1 )
      break;
LABEL_19:
    if ( (int)++v10 >= (int)v8 )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)ShopReleaseEntity__get_condValue(v11, 0LL);
  if ( !v9 )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(v9, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (Il2CppObject *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v8 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_19;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4A5BA3F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3F = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(Instance, v4);
    Instance = (ShopReleaseEntity_array *)m_Items[v6];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4A5BA40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA40 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(Instance, v4);
    Instance = (ShopReleaseEntity_array *)m_Items[v6];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w9
  int v7; // w10
  ShopReleaseEntity_o *v8; // x8

  if ( (byte_4A5BA44 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA44 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = Instance->m_Items[v7];
    if ( !v8 )
      goto LABEL_15;
    if ( v8->fields.condType == 37 )
      return ShopReleaseEntity__IsPreparation(Instance->m_Items[v7], 0LL);
    if ( max_length == ++v7 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4A5BA43 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA43 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(Instance, v4);
    Instance = (ShopReleaseEntity_array *)m_Items[v6];
    if ( !Instance )
      goto LABEL_15;
    if ( (HIDWORD(Instance->bounds) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4A5BA3E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3E = 1;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(Instance, v4);
    Instance = (ShopReleaseEntity_array *)m_Items[v6];
    if ( !Instance )
      goto LABEL_14;
    if ( HIDWORD(Instance->bounds) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v6 >= max_length )
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

  if ( (byte_4A5BA3C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3C = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_21:
    sub_1B8880C(Instance, v6);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (UserQuestMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_1B88814(Instance, v6);
    v11 = EntitiyList->m_Items[v10];
    if ( !v11 )
      goto LABEL_21;
    if ( v11->fields.condType == 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v11, 0LL);
      if ( !v9 )
        goto LABEL_21;
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5BA39 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA39 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  bool v5; // w0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BA3B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3B = 1;
  }
  questId = 0;
  v5 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v7);
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
  bool v12; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v14; // x21
  int32_t ClearNum; // w0

  if ( (byte_4A5BA3A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA3A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(Instance, v8);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v11 = (UserQuestMaster_o *)Instance;
    v12 = !checkExpired;
    do
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v11 )
        goto LABEL_18;
      EntityFromId = UserQuestMaster__getEntityFromId(v11, (int64_t)Instance, questId, 0LL);
      v14 = EntityFromId;
      if ( EntityFromId == 0LL || v12 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
      {
        if ( !v14 )
        {
          LOBYTE(ClearNum) = 0;
          return ClearNum;
        }
        ClearNum = UserQuestEntity__getClearNum(v14, 0LL);
        if ( !ClearNum )
          return ClearNum;
      }
      --max_length;
    }
    while ( max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BA4E & 1) == 0 )
  {
    sub_1B885B0(&ShopEntity___c_TypeInfo);
    byte_4A5BA4E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ShopEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ShopEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5BA4F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA4F = 1;
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
    sub_1B8880C(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B8880C(this, 0LL);
  return v->fields.giftType == 1;
}