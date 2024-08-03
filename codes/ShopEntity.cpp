void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCCDB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FCCDB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  void *v18; // x21
  Il2CppClass *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v20; // x0
  void *v21; // x20
  Il2CppClass *v22; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v26; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FCCD4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EquipMaster___, imageId);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FCCD4 = 1;
  }
  v26 = 0LL;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v26,
          (int32_t)Instance,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v26 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v26[3].klass), 0LL);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
          *(_QWORD *)&v29.fields.currentCryptoKey = klass;
          *(_QWORD *)&v29.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v22 = entity[5].klass;
              v21 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_1B64324(Instance);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v19 = entity[4].klass;
          v18 = entity[4].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = v19;
          *(_QWORD *)&v28.fields.fakeValue = v18;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v22 = entity[4].klass;
              v21 = entity[4].monitor;
LABEL_34:
              if ( !v20->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v20);
              *(_QWORD *)&v30.fields.currentCryptoKey = v22;
              *(_QWORD *)&v30.fields.fakeValue = v21;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_16600/*"addMessage"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FCCD8 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_16600/*"addMessage"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_1B64324(0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                              value,
                              value->klass->vtable[4].methodPtr);
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
  System_Int32_array *result; // x0
  __int64 v11; // x2
  Il2CppObject *v12; // x19
  ShopEntity___c_c *v13; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__58_0; // x20
  Il2CppObject *v17; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_int__o *v21; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCCBA & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1B640C8(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v7);
    sub_1B640C8(&ShopEntity___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_16721/*"anotherItemIds"*/, v9);
    byte_49FCCBA = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_16721/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v12 = value;
      if ( value )
      {
        v13 = ShopEntity___c_TypeInfo;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v13 = ShopEntity___c_TypeInfo;
        }
        v14 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v12->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (System_Collections_Generic_List_object__c *)v12->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          _9__58_0 = v13->static_fields->__9__58_0;
          if ( !_9__58_0 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = ShopEntity___c_TypeInfo;
            }
            v17 = (Il2CppObject *)v13->static_fields->__9;
            _9__58_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v14, v11);
            System_Converter_object__int____ctor(
              _9__58_0,
              v17,
              Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
              0LL);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
            static_fields->__9__58_0 = _9__58_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v19, v20);
          }
          v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            (System_Collections_Generic_List_object__o *)v12,
                                                            (System_Converter_T__TOutput__o *)_9__58_0,
                                                            (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( v21 )
            return System_Collections_Generic_List_int___ToArray(
                     v21,
                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        else
        {
          sub_1B645E4(v12);
        }
        sub_1B64324(v21);
      }
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  ShopEntity_o *v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCBB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&PayType_Type_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_16724/*"anotherPayType"*/, v4);
    byte_49FCCBB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16724/*"anotherPayType"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B64324(0LL);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value, PayType_Type_TypeInfo, v6, v7);
      }
      else
      {
        sub_1B645E4(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v8, v9);
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
      sub_1B6432C(CommonConsumeEntities, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_1B64324(CommonConsumeEntities);
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
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  __int64 ItemID; // x0

  if ( (byte_49FCCDA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FCCDA = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v5);
  if ( !Master_object )
    sub_1B64324(ItemID);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_49FCCC0 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    byte_49FCCC0 = 1;
  }
  setNum = this->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(setNum, 0LL);
}


int32_t __fastcall ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCA1 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v4);
    byte_49FCCA1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  __int64 v6; // x2
  __int64 v7; // x3
  ShopEntity_o *v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&long_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_19549/*"freeShopReleaseDate"*/, v4);
    byte_49FCCA2 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_19549/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1B64324(0LL);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1B645E4(value);
        return ShopEntity__IsAfterTheFreeShopReleaseDate(v8, v9);
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
  System_String_o *name; // x1
  int32_t v21; // w2
  char v22; // w3
  int32_t purchaseType; // w9
  __int64 *v24; // x8
  int32_t v25; // w0
  System_String_o *v26; // x0
  System_String_o *v27; // x1
  System_String_o **v28; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v31; // x1
  unsigned int klass; // w8
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x1
  ServantEntity_o *v35; // x21
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int32_t v39; // w2
  char v40; // w3
  bool IsServantEquip; // w21
  System_String_o *v42; // x0
  int32_t setNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FCCC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, nameText);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_14726/*"UNIT_INFO"*/, v15);
    sub_1B640C8(&StringLiteral_11895/*"SERVANT_UNIT"*/, v16);
    sub_1B640C8(&StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/, v17);
    sub_1B640C8(&StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49FCCC1 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)name, (int32_t)countText, isSend);
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v31);
      if ( !MasterData_object )
        goto LABEL_41;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int32_t)Instance,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_41;
      klass = (unsigned int)Instance[3].klass;
      if ( klass <= 0xD && ((1 << klass) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v28 = countText;
        LODWORD(v27) = 0;
        goto LABEL_17;
      }
      if ( isSend )
      {
        v25 = (_DWORD)this + 64;
        goto LABEL_11;
      }
      v42 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      LODWORD(v27) = (_DWORD)v42;
      *countText = v42;
      goto LABEL_16;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_14726/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v33 = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v34),
                !v33)
            || (Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                             (int32_t)Instance,
                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_41:
            sub_1B64324(Instance);
          }
          v35 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v35, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = &StringLiteral_11895/*"SERVANT_UNIT"*/;
          }
          else
          {
            IsServantEquip = ServantEntity__get_IsServantEquip(v35, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( IsServantEquip )
              v24 = &StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/;
            else
              v24 = &StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_32:
          v36 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
          setNum = this->fields.setNum;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v38 = System_String__Format(v36, v37, 0LL);
          *countText = v38;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)countText, (int32_t)v38, v39, v40);
          return;
        }
LABEL_10:
        v25 = (_DWORD)this + 64;
LABEL_11:
        v26 = System_Int32__ToString(v25, 0LL);
        if ( v26 )
          v27 = v26;
        else
          v27 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v27;
      }
      else
      {
LABEL_15:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        LODWORD(v27) = (_DWORD)StringLiteral_1/*""*/;
      }
LABEL_16:
      v28 = countText;
LABEL_17:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v28, (int32_t)v27, v21, v22);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  ShopEntity___c_c *v21; // x8
  System_Object_array *v22; // x21
  System_Predicate_object__o *_9__49_0; // x24
  Il2CppObject *v24; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t v28; // x21
  int64_t v29; // x22
  __int64 v30; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v32; // x8
  int64_t v33; // x20
  unsigned __int64 v34; // x25
  bool v35; // w27
  int32_t v36; // w28
  int v37; // w8
  int v38; // w9
  __int64 v39; // x10
  int v40; // w8
  unsigned int v41; // w29
  __int64 v42; // x8
  __int64 v43; // x19
  __int64 v44; // x23
  int v45; // w8
  unsigned int v46; // w29
  __int64 v47; // x8
  __int64 v48; // x19
  __int64 v49; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_49FCCB1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&System_Predicate_UserPresentBoxEntity__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v12);
    sub_1B640C8(&ShopEntity___c_TypeInfo, v13);
    byte_49FCCB1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, Instance, 0LL);
  v21 = ShopEntity___c_TypeInfo;
  v22 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v21 = ShopEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Predicate_object__o *)v21->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ShopEntity___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__49_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserPresentBoxEntity__TypeInfo, v19, v20);
    System_Predicate_object____ctor(_9__49_0, v24, Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v26, v27);
  }
  Instance = (int64_t)System_Array__FindAll_object_(
                        v22,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_2F3045C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v16
    || (v28 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)v16, 0LL),
                        !v17)
    || (v29 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v17, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_49:
    sub_1B64324(Instance);
  }
  v32 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v32 < 1 )
    return 0;
  v33 = Instance;
  v34 = 0LL;
  v35 = v28 == 0 || isWithoutPresents;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)v32 )
      goto LABEL_50;
    v36 = targetIds->m_Items[v34 + 1];
    if ( !v35 )
    {
      v37 = *(_DWORD *)(v28 + 24);
      if ( v37 >= 1 )
        break;
    }
LABEL_28:
    if ( !v29 )
      goto LABEL_49;
    v40 = *(_DWORD *)(v29 + 24);
    if ( v40 >= 1 )
    {
      v41 = 0;
      while ( v41 < v40 )
      {
        v42 = *(_QWORD *)(v29 + 8LL * (int)v41 + 32);
        if ( !v42 )
          goto LABEL_49;
        v44 = *(_QWORD *)(v42 + 80);
        v43 = *(_QWORD *)(v42 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v44;
        *(_QWORD *)&v51.fields.fakeValue = v43;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
        if ( v36 == (_DWORD)Instance )
          return 1;
        v40 = *(_DWORD *)(v29 + 24);
        if ( (int)++v41 >= v40 )
          goto LABEL_37;
      }
LABEL_50:
      sub_1B6432C(Instance, v30);
    }
LABEL_37:
    if ( !v33 )
      goto LABEL_49;
    v45 = *(_DWORD *)(v33 + 24);
    if ( v45 >= 1 )
    {
      v46 = 0;
      while ( v46 < v45 )
      {
        v47 = *(_QWORD *)(v33 + 8LL * (int)v46 + 32);
        if ( !v47 )
          goto LABEL_49;
        v49 = *(_QWORD *)(v47 + 80);
        v48 = *(_QWORD *)(v47 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v49;
        *(_QWORD *)&v52.fields.fakeValue = v48;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v52, 0LL);
        if ( v36 == (_DWORD)Instance )
          return 1;
        v45 = *(_DWORD *)(v33 + 24);
        if ( (int)++v46 >= v45 )
          goto LABEL_46;
      }
      goto LABEL_50;
    }
LABEL_46:
    LODWORD(v32) = targetIds->max_length;
    if ( (__int64)++v34 >= (int)v32 )
      return 0;
  }
  v38 = 0;
  while ( 1 )
  {
    if ( v37 == v38 )
      goto LABEL_50;
    v39 = *(_QWORD *)(v28 + 8LL * v38 + 32);
    if ( !v39 )
      goto LABEL_49;
    if ( v36 == *(_DWORD *)(v39 + 76) )
      return 1;
    if ( v37 == ++v38 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_49FCCB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCB0 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1B64324(this);
  if ( !itemIds->max_length )
    sub_1B6432C(this, method);
  return itemIds->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1B64324(this);
  if ( itemIds->max_length <= num )
    sub_1B6432C(this, *(_QWORD *)&num);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x7
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FCCC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_1B640C8(&Method_DataManager_GetMasterData_SetItemMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FCCC3 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v23);
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
        v24);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v18 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v19),
              !v18)
          || (Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                           (int32_t)Instance,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_1B64324(Instance);
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
  if ( (byte_49FCCD7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22309/*"overwriteName"*/, defaultValue);
    byte_49FCCD7 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22309/*"overwriteName"*/,
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
    sub_1B64324(this);
  if ( !prices->max_length )
    sub_1B6432C(this, method);
  return prices->m_Items[1];
}


int32_t __fastcall ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_BDD6F0[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_BDD6C8[v2];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1B64324(this);
  if ( prices->max_length <= num )
    sub_1B6432C(this, *(_QWORD *)&num);
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FCCBF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o *v10; // x19
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FCCCF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCCCF = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    return 0LL;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1B6432C(Instance, v7);
    v10 = Instance->m_Items[v9];
    if ( !v10 )
      goto LABEL_17;
    if ( v10->fields.condType == 8 )
      break;
    if ( (int)++v9 >= max_length )
      return 0LL;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (ShopReleaseEntity_array *)ShopReleaseEntity__get_condValue(v10, 0LL),
        !MasterData_object) )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)Instance,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_8201/*"LIMITED_SHOP_REMAIN_DAYS"*/, v3);
    sub_1B640C8(&StringLiteral_8667/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v4);
    sub_1B640C8(&StringLiteral_22760/*"remainDays"*/, v5);
    byte_49FCCBC = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22760/*"remainDays"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v10 = &StringLiteral_8201/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v10 = &StringLiteral_8667/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v10, 0LL);
  }
  if ( !value )
    sub_1B64324(0LL);
  v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *v21; // x22
  const MethodInfo *v22; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *v25; // x24
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x6
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x7
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FCCC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_1B640C8(&Method_DataManager_GetMasterData_SetItemMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopGroupMaster___, v16);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FCCC2 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v29);
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
          v30);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v25 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v26);
        if ( !v25 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v25,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          v27);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v21 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v22),
          !v21)
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                       (int32_t)Instance,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_1B64324(Instance);
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

  if ( (byte_49FCCA3 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FCCA3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v4) && ShopEntity__GetFreeShopReleaseDate(this, v5) > 0;
}


bool __fastcall ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  int64_t closedAt; // x8
  Il2CppObject *Instance; // x0

  if ( (byte_49FCCA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCA9 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *Master_object; // x21
  const MethodInfo *v12; // x1
  char v13; // w8
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCCB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCCB8 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_21;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v7);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
    sub_1B6432C(AnotherPayItemIds, v9);
  v10 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v10 < 1 )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_24:
    sub_1B64324(AnotherPayItemIds);
  UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, AnotherPayItemIds, v10, 0LL);
  v13 = (char)entity;
  if ( !entity )
    return v13 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v12) )
  {
LABEL_21:
    v13 = 0;
    return v13 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)AnotherPayItemIds,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCB9 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_24255/*"useAnotherPayCommonReleaseId"*/, v6);
    byte_49FCCB9 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24255/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v8 = value;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v9 = System_Convert__ToInt32(v8, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
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
  if ( (byte_49FCCAB & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, nowTime);
    byte_49FCCAB = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  Il2CppObject *MasterData_object; // x20
  int32_t v7; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_49FCCBD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCBD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_1B64324(Instance);
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


bool __fastcall ShopEntity__IsCondType_39482012(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v9; // w10
  bool v10; // w8

  if ( (byte_49FCCBE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, userId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCCBE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  bool v10; // w0
  const MethodInfo *v11; // x1
  int32_t costumeId[2]; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_49FCCA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v5);
    byte_49FCCA7 = 1;
  }
  value = 0LL;
  *(_QWORD *)costumeId = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v10 = ServantCostumeReleaseMaster__checkItemHaving(
          (ServantCostumeReleaseMaster_o *)Instance,
          costumeId[1],
          costumeId[0],
          0LL);
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
  Il2CppObject *MasterData_object; // x21
  bool v12; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_49FCCA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCCA8 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
          &v15,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)v15;
  if ( !v15 )
    goto LABEL_27;
  v12 = 1;
  if ( !UserEventEntity__getEventFlag(v15, 1, 0LL) )
  {
LABEL_15:
    if ( !Time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
    }
    if ( Time < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && Time > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_27:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v12; // x20
  const MethodInfo *v13; // x1
  int v14; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v16; // x19
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FCCD9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&WarEntity_TypeInfo, v9);
    byte_49FCCD9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v13),
        !v12)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v12, (int32_t)Instance, 0LL),
        !MasterData_object)
    || (v14 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].klass) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v16 = Enumerator;
  v17 = 0;
  while ( 1 )
  {
    if ( !v16 )
      goto LABEL_36;
    klass = v16->klass;
    v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BB60A8(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v16,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = v16->klass;
    v23 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_21:
      v25 = sub_1BB60A8(v16, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  v16,
                                                                  *(_QWORD *)(v25 + 8));
    if ( !Enumerator )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
    {
      sub_1B645E4(Enumerator);
LABEL_36:
      sub_1B64324(Enumerator);
    }
    if ( LODWORD(Enumerator[6].klass) == v14 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v17 |= (unsigned __int8)Enumerator;
    }
  }
  v27 = v16->klass;
  v28 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_22760/*"remainDays"*/, v3);
    byte_49FCCB7 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22760/*"remainDays"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_1B64324(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1

  if ( (byte_49FCCA4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v5);
    byte_49FCCA4 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v8),
        !MasterData_object) )
  {
LABEL_10:
    sub_1B64324(script);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_49FCCB3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCB3 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B64324(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_49FCCB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCB4 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B64324(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_22760/*"remainDays"*/, v3);
    byte_49FCCB5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22760/*"remainDays"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_1B64324(0LL);
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
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v5; // x0
  int32_t v6; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCCB6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&StringLiteral_22760/*"remainDays"*/, v3);
    byte_49FCCB6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22760/*"remainDays"*/,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_1B64324(0LL);
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
  bool v14; // w19
  int v15; // w20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FCCD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCCD3 = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    v14 = v13;
    if ( !v13 )
      break;
    if ( !v16.fields._current )
      sub_1B64324(v13);
    if ( HIDWORD(v16.fields._current[1].klass) == 37 )
    {
      v15 = 6;
      goto LABEL_18;
    }
  }
  v15 = 2;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return v14 && v15 == 6;
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
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v12; // x21
  bool IsTimeStatusRecord; // w0
  bool v14; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_49FCCAA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCCAA = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_26;
  v12 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_26;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v12 || IsTimeStatusRecord )
      goto LABEL_20;
  }
  else if ( !v12 )
  {
LABEL_20:
    if ( Time < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_26:
    sub_1B64324(Instance);
  }
  v14 = 1;
  if ( !UserEventEntity__getEventFlag(v12, 1, 0LL) )
    goto LABEL_20;
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x21
  UserShopEntity_o *v34; // x21
  int64_t updatedAt; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  int64_t v38; // x27
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  bool v41; // w28
  CommonReleaseEntity_array *List; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x23
  ShopEntity___c_c *v46; // x0
  System_Func_object__bool__o *_9__36_0; // x24
  Il2CppObject *v48; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Object_array *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_object__o *v56; // x23
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  int max_length; // w8
  unsigned int v60; // w25
  Il2CppObject *v61; // x20
  int32_t v62; // w3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  int64_t v66; // x1
  Il2CppClass **v67; // x0
  ShopEntity___c_c *v68; // x0
  System_Func_object__bool__o *_9__36_1; // x22
  Il2CppObject *v70; // x24
  struct ShopEntity___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x2
  ShopEntity___c_c *v75; // x0
  System_Func_object__bool__o *_9__36_2; // x22
  Il2CppObject *v77; // x24
  struct ShopEntity___c_StaticFields *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  ShopEntity___c_c *v84; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x22
  System_Func_T__TResult__o *_9__36_3; // x23
  Il2CppObject *v87; // x24
  struct ShopEntity___c_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  const MethodInfo_35CE514 *v91; // x3
  bool v92; // w20
  int32_t FreeShopCondId; // w0
  char v94; // w8
  bool result; // w0
  ShopEntity_o *v96; // x0
  int32_t *v97; // x1
  int32_t *v98; // x2
  const MethodInfo *v99; // x3
  int64_t v100; // [xsp+10h] [xbp-80h]
  CommonReleaseMaster_o *v101; // [xsp+18h] [xbp-78h]
  __int64 v102; // [xsp+20h] [xbp-70h] BYREF
  int64_t v103; // [xsp+28h] [xbp-68h]
  System_Nullable_long__o v104; // 0:x0.16

  if ( (byte_49FCCA6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_UserQuestEntity___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v10);
    sub_1B640C8(&System_Func_UserQuestEntity__long__TypeInfo, v11);
    sub_1B640C8(&System_Func_UserQuestEntity__bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v13);
    sub_1B640C8(&long_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v17);
    sub_1B640C8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&Method_System_Nullable_long__GetValueOrDefault__, v20);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v21);
    sub_1B640C8(&Method_System_Nullable_long__get_HasValue__, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v24);
    sub_1B640C8(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v25);
    sub_1B640C8(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v26);
    sub_1B640C8(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v27);
    sub_1B640C8(&ShopEntity___c_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_19549/*"freeShopReleaseDate"*/, v29);
    byte_49FCCA6 = 1;
  }
  v102 = 0LL;
  v103 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v33 )
    goto LABEL_66;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely((UserShopMaster_o *)v33, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v34 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_66;
  updatedAt = v34->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                        (Il2CppObject *)StringLiteral_19549/*"freeShopReleaseDate"*/,
                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_66;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v38 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v36, v37);
    v41 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v39) || UserShopEntity__get_IsReturnRarePriShop(v34, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v40);
    if ( !MasterData_object )
      goto LABEL_66;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, Instance, 0LL);
    if ( List )
    {
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v100 = updatedAt;
      v101 = (CommonReleaseMaster_o *)MasterData_object;
      v46 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v46 = ShopEntity___c_TypeInfo;
      }
      _9__36_0 = (System_Func_object__bool__o *)v46->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = ShopEntity___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__36_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_CommonReleaseEntity__bool__TypeInfo, v43, v44);
        System_Func_object__bool____ctor(_9__36_0, v48, Method_ShopEntity___c__IsPaidExchange_b__36_0__, 0LL);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v50, v51);
      }
      v52 = System_Linq_Enumerable__Where_object_(
              v45,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v53 = System_Linq_Enumerable__ToArray_object_(
              v52,
              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v56 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                           v54,
                                                           v55);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v53 )
        goto LABEL_66;
      max_length = v53->max_length;
      if ( max_length >= 1 )
      {
        v60 = 0;
        while ( 1 )
        {
          if ( v60 >= max_length )
            sub_1B6432C(Instance, v57);
          v61 = v53->m_Items[v60];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v61 || !v32 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                (UserQuestMaster_o *)v32,
                                Instance,
                                (int32_t)v61[2].klass,
                                0LL);
          if ( Instance )
          {
            if ( !v56 )
              break;
            items = v56->fields._items;
            v64 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v56->fields._version;
            if ( !items )
              break;
            size = v56->fields._size;
            v66 = Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v56,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = &items->obj.klass + size;
              v56->fields._size = size + 1;
              v67[4] = (Il2CppClass *)v66;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), v66, v58, v62);
            }
          }
          max_length = v53->max_length;
          if ( (int)++v60 >= max_length )
            goto LABEL_39;
        }
LABEL_66:
        sub_1B64324(Instance);
      }
LABEL_39:
      v102 = 0LL;
      v103 = 0LL;
      if ( !v56 )
        goto LABEL_66;
      updatedAt = v100;
      if ( v56->fields._size < 1 )
        goto LABEL_62;
      v68 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v68 = ShopEntity___c_TypeInfo;
      }
      _9__36_1 = (System_Func_object__bool__o *)v68->static_fields->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v68 = ShopEntity___c_TypeInfo;
        }
        v70 = (Il2CppObject *)v68->static_fields->__9;
        _9__36_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserQuestEntity__bool__TypeInfo, v57, v58);
        System_Func_object__bool____ctor(_9__36_1, v70, Method_ShopEntity___c__IsPaidExchange_b__36_1__, 0LL);
        v71 = ShopEntity___c_TypeInfo->static_fields;
        v71->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->__9__36_1, (int32_t)_9__36_1, v72, v73);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v56,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_2E24870 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_62;
      v75 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v75 = ShopEntity___c_TypeInfo;
      }
      _9__36_2 = (System_Func_object__bool__o *)v75->static_fields->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v75 = ShopEntity___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v75->static_fields->__9;
        _9__36_2 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserQuestEntity__bool__TypeInfo, v57, v74);
        System_Func_object__bool____ctor(_9__36_2, v77, Method_ShopEntity___c__IsPaidExchange_b__36_2__, 0LL);
        v78 = ShopEntity___c_TypeInfo->static_fields;
        v78->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v78->__9__36_2, (int32_t)_9__36_2, v79, v80);
      }
      v81 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v56,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v84 = ShopEntity___c_TypeInfo;
      v85 = v81;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v84 = ShopEntity___c_TypeInfo;
      }
      _9__36_3 = (System_Func_T__TResult__o *)v84->static_fields->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          v84 = ShopEntity___c_TypeInfo;
        }
        v87 = (Il2CppObject *)v84->static_fields->__9;
        _9__36_3 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_UserQuestEntity__long__TypeInfo, v82, v83);
        System_Func_object__long____ctor(_9__36_3, v87, Method_ShopEntity___c__IsPaidExchange_b__36_3__, 0LL);
        v88 = ShopEntity___c_TypeInfo->static_fields;
        v88->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v88->__9__36_3, (int32_t)_9__36_3, v89, v90);
      }
      v104.fields.value = System_Linq_Enumerable__Min_object__48638784(
                            v85,
                            (System_Func_TSource__long__o *)_9__36_3,
                            (const MethodInfo_2E62B40 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v104.fields.hasValue = &v102;
      System_Nullable_long____ctor(v104, Method_System_Nullable_long___ctor__, v91);
      if ( (_BYTE)v102 )
        v92 = v103 > v34->fields.updatedAt;
      else
LABEL_62:
        v92 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v57);
      v94 = v92 | !CommonReleaseMaster__IsOpen(v101, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v94 = 1;
    }
    return (v41 || updatedAt < v38) | v94;
  }
  else
  {
    sub_1B645E4(Instance);
    ShopEntity__SetSvtIdAndCostumeId(v96, v97, v98, v99);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FCCAC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCCAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v9; // x20
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x23
  __int64 v12; // x8
  UserQuestMaster_o *v13; // x19
  unsigned __int64 v14; // x24
  int32_t v15; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FCCAE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCCAE = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      v9 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_22;
      v12 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = (UserQuestMaster_o *)Instance;
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
            sub_1B6432C(Instance, v10);
          v15 = targetIds->m_Items[v14 + 1];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v13 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v13, &entity, Instance, v15, 0LL);
          if ( !entity )
            goto LABEL_20;
          LODWORD(v12) = targetIds->max_length;
          if ( (__int64)++v14 >= (int)v12 )
            goto LABEL_19;
        }
LABEL_22:
        sub_1B64324(Instance);
      }
LABEL_19:
      LOBYTE(EntityDefinitely) = v9->fields.num > 0;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x19
  Il2CppObject *v11; // x21
  int64_t UserId; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  ShopEntity___c_c *v16; // x8
  System_Object_array *v17; // x21
  System_Predicate_object__o *_9__50_0; // x22
  Il2CppObject *v19; // x23
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  struct System_Int32_array *targetIds; // x22
  __int64 v25; // x8
  int64_t v26; // x20
  unsigned __int64 v27; // x23
  int64_t v28; // x25
  int32_t v29; // w21
  int v30; // w8
  __int64 v31; // x9
  __int64 v32; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FCCB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_UserPresentBoxEntity___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&System_Predicate_UserPresentBoxEntity__TypeInfo, v7);
    sub_1B640C8(&Method_ShopEntity___c__IsServantGet_b__50_0__, v8);
    sub_1B640C8(&ShopEntity___c_TypeInfo, v9);
    byte_49FCCB2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_34;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)v11, UserId, 0LL);
  v16 = ShopEntity___c_TypeInfo;
  v17 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v16 = ShopEntity___c_TypeInfo;
  }
  _9__50_0 = (System_Predicate_object__o *)v16->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ShopEntity___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__50_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserPresentBoxEntity__TypeInfo, v14, v15);
    System_Predicate_object____ctor(_9__50_0, v19, Method_ShopEntity___c__IsServantGet_b__50_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v21, v22);
  }
  UserId = (int64_t)System_Array__FindAll_object_(
                      v17,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_2F3045C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_34:
    sub_1B64324(UserId);
  v25 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v25 < 1 )
    return 0;
  v26 = UserId;
  v27 = 0LL;
  v28 = UserId + 32;
  while ( 1 )
  {
    if ( v27 >= (unsigned int)v25 )
      goto LABEL_33;
    v29 = targetIds->m_Items[v27 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_34;
    UserId = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)Master_object,
               &entity,
               UserId,
               v29,
               0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v26 )
    {
      v30 = *(_DWORD *)(v26 + 24);
      if ( v30 >= 1 )
      {
        v31 = 0LL;
        while ( (unsigned int)v31 < v30 )
        {
          v32 = *(_QWORD *)(v28 + 8 * v31);
          if ( !v32 )
            goto LABEL_34;
          if ( v29 == *(_DWORD *)(v32 + 76) )
            return 1;
          if ( (int)++v31 >= v30 )
            goto LABEL_30;
        }
LABEL_33:
        sub_1B6432C(UserId, v23);
      }
    }
LABEL_30:
    LODWORD(v25) = targetIds->max_length;
    if ( (__int64)++v27 >= (int)v25 )
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCCA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation);
    sub_1B640C8(&StringLiteral_19546/*"freeShopCondId"*/, v5);
    byte_49FCCA5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19546/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49FCCAF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCAF = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_12;
  if ( this->fields.limitNum < 1 )
  {
LABEL_13:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1B64324(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v8) )
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
    sub_1B6432C(this, svtId);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_61394392((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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
  __int64 v7; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FCCAD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCCAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0

  if ( (byte_49FCCC4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCC4 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v6),
        !MasterData_object) )
  {
    sub_1B64324(Instance);
  }
  if ( ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v7);
  return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  int32_t *p_m_CancellationTokenSource; // x8
  int32_t TargetId; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  Il2CppObject *v14; // x20
  int64_t UserId; // x21
  const MethodInfo *v16; // x1

  if ( (byte_49FCCC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCCC5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v8);
  if ( !MasterData_object )
    goto LABEL_21;
  if ( !ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v9);
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
      v13 = ShopEntity__get_TargetId(this, v12);
      if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v13, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v14 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v16);
          if ( v14 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v14,
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
    sub_1B64324(Instance);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_21;
  p_m_CancellationTokenSource = (int32_t *)&Instance[1].fields._DispLog;
  return *p_m_CancellationTokenSource;
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  ServantEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCCD6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCCD6 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v10);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_21:
    sub_1B64324(Instance);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          (Il2CppObject **)&v16,
          (int32_t)entity[4].klass,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v16;
  if ( !v16 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v16, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v15);
  else
    return this->fields.name;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B64324(this);
  if ( targetIds->max_length <= id )
    sub_1B6432C(this, *(_QWORD *)&id);
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B64324(this);
  if ( !targetIds->max_length )
    sub_1B6432C(this, method);
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v10; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v12; // x22
  int max_length; // w27
  int32_t v14; // w24
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int v17; // w8
  int64_t v18; // x25
  _BOOL4 v19; // w29
  int i; // w28
  __int64 v21; // x26
  int v22; // w23
  int64_t UserId; // x25
  const MethodInfo *v24; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  UserQuestEntity_o *v28; // x25
  Il2CppObject *Entity; // x0
  const MethodInfo *v30; // x1
  char v32; // w8
  int64_t v33; // [xsp+8h] [xbp-68h]

  if ( (byte_49FCCC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCCC6 = 1;
  }
  if ( this->fields.purchaseType != 6 )
  {
LABEL_36:
    v32 = 0;
    return v32 & 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_38;
  v12 = (QuestReleaseMaster_o *)Instance;
  max_length = targetIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  v33 = Instance;
  if ( max_length < 1 )
  {
LABEL_35:
    v32 = 1;
    return v32 & 1;
  }
  if ( !v12 )
LABEL_38:
    sub_1B64324(Instance);
  v14 = 0;
  while ( 1 )
  {
    Instance = (int64_t)QuestReleaseMaster__getListByType(v12, 13, 0LL);
    if ( !Instance )
      goto LABEL_38;
    v17 = *(_DWORD *)(Instance + 24);
    v18 = Instance;
    v19 = v17 > 0;
    if ( v17 >= 1 )
    {
      for ( i = 0; i < v17; v19 = ++i < v17 )
      {
        if ( i >= (unsigned int)v17 )
          sub_1B6432C(Instance, v15);
        v21 = *(_QWORD *)(v18 + 8LL * i + 32);
        if ( !v21 )
          goto LABEL_38;
        v22 = *(_DWORD *)(v21 + 16);
        Instance = ShopEntity__getTargetId(this, v14, v16);
        if ( v22 == (_DWORD)Instance )
        {
          if ( !v10 )
            goto LABEL_38;
          Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v10, *(_DWORD *)(v21 + 16), 0LL);
          if ( !Instance )
            goto LABEL_38;
          Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
          if ( (Instance & 1) == 0 )
            break;
        }
        v17 = *(_DWORD *)(v18 + 24);
      }
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    Instance = ShopEntity__getTargetId(this, v14, v24);
    if ( !MasterData_object )
      goto LABEL_38;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, UserId, Instance, 0LL);
    if ( EntityFromId )
      break;
    Instance = ShopEntity__getTargetId(this, v14, v27);
    if ( !v10 )
      goto LABEL_38;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
               Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) < v33
      || ((v19 | ShopEntity__IsEventQuest(this, v30)) & 1) != 0 )
    {
      goto LABEL_36;
    }
LABEL_34:
    if ( ++v14 == max_length )
      goto LABEL_35;
  }
  v28 = EntityFromId;
  if ( ShopEntity__IsEventQuest(this, v26) )
    goto LABEL_36;
  if ( v28->fields.expireAt >= v33 )
    goto LABEL_34;
  v32 = !v19;
  return v32 & 1;
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

  if ( (byte_49FCCD5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, buyCount);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCCD5 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_41:
    sub_1B64324(Instance);
  }
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
    return 0;
  v14 = (ItemMaster_o *)Instance;
  v15 = 8LL;
  v16 = 1LL - (unsigned int)*(_QWORD *)&targetIds->max_length;
  while ( 1 )
  {
    v17 = v15 - 8;
    if ( v15 - 8 >= (unsigned __int64)targetIds->max_length )
LABEL_46:
      sub_1B6432C(Instance, v12);
    if ( !v14 )
      goto LABEL_41;
    Instance = (DataManager_o *)ItemMaster__isQP(v14, *((_DWORD *)&targetIds->obj.klass + v15), 0LL);
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
    v20 = this->fields.targetIds;
    if ( !v20 )
      goto LABEL_41;
    if ( v17 >= v20->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isMana(v14, *((_DWORD *)&v20->obj.klass + v15), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v22 = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v22 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL) )
      {
        v30 = 5;
        goto LABEL_45;
      }
      goto LABEL_39;
    }
    v23 = this->fields.targetIds;
    if ( !v23 )
      goto LABEL_41;
    if ( v17 >= v23->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v14, *((_DWORD *)&v23->obj.klass + v15), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_41;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v25 = this->fields.setNum;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v25 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 12LL) )
    {
      v30 = 22;
      goto LABEL_45;
    }
LABEL_39:
    if ( v16 + v15 == 8 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v15;
    if ( !targetIds )
      goto LABEL_41;
  }
  v26 = this->fields.targetIds;
  if ( !v26 )
    goto LABEL_41;
  if ( v17 >= v26->max_length )
    goto LABEL_46;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v14, *((_DWORD *)&v26->obj.klass + v15), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_39;
  if ( !SelfUserGame )
    goto LABEL_41;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v27 = BalanceConfig_TypeInfo;
  v28 = this->fields.setNum;
  v29 = (int)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v28 * buyCount + v29 <= v27->static_fields->FriendPointMax )
    goto LABEL_39;
  v30 = 13;
LABEL_45:
  *check = v30;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  ShopReleaseEntity_array *v8; // x19
  __int64 v9; // x24
  ShopReleaseEntity_o *v10; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  int64_t condNum; // x22
  int32_t v14; // w23

  if ( (byte_49FCCD0 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCCD0 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B64324(Instance);
  }
  v7 = *(_QWORD *)&Instance->max_length;
  v8 = Instance;
  if ( (int)v7 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)v7 )
      sub_1B6432C(Instance, v6);
    v10 = v8->m_Items[v9];
    if ( !v10 )
      goto LABEL_19;
    condType = v10->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_16:
    if ( (int)++v9 >= (int)v7 )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(v8->m_Items[v9], 0LL);
  condNum = v10->fields.condNum;
  v14 = condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v14, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v7 = *(_QWORD *)&v8->max_length;
    goto LABEL_16;
  }
  return ShopReleaseEntity__IsPreparation(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v10; // x1
  __int64 v11; // x8
  UserQuestMaster_o *v12; // x20
  __int64 v13; // x23
  ShopReleaseEntity_o *v14; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_49FCCCB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCCCB = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_1B64324(Instance);
  }
  v11 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (UserQuestMaster_o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= (unsigned int)v11 )
      sub_1B6432C(Instance, v10);
    v14 = EntitiyList->m_Items[v13];
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.condType == 1 )
      break;
LABEL_19:
    if ( (int)++v13 >= (int)v11 )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)ShopReleaseEntity__get_condValue(v14, 0LL);
  if ( !v12 )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(v12, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (Il2CppObject *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v11 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_19;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_49FCCCD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCCD = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(Instance, v5);
    Instance = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_49FCCCE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCCE = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(Instance, v5);
    Instance = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  int max_length; // w9
  int v7; // w10
  ShopReleaseEntity_o *v8; // x8

  if ( (byte_49FCCD2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCD2 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_49FCCD1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCD1 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(Instance, v5);
    Instance = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !Instance )
      goto LABEL_15;
    if ( (HIDWORD(Instance->bounds) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_49FCCCC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCCCC = 1;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B64324(Instance);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(Instance, v5);
    Instance = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !Instance )
      goto LABEL_14;
    if ( HIDWORD(Instance->bounds) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v7 >= max_length )
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
  __int64 v10; // x1
  int max_length; // w8
  UserQuestMaster_o *v12; // x20
  __int64 v13; // x23
  ShopReleaseEntity_o *v14; // x21
  int64_t UserId; // x22

  if ( (byte_49FCCCA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCCCA = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (UserQuestMaster_o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1B6432C(Instance, v10);
    v14 = EntitiyList->m_Items[v13];
    if ( !v14 )
      goto LABEL_21;
    if ( v14->fields.condType == 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v14, 0LL);
      if ( !v12 )
        goto LABEL_21;
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
  Il2CppObject *Instance; // x0

  if ( (byte_49FCCC7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCCC7 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCCC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCCC9 = 1;
  }
  questId = 0;
  v6 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
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
  bool v13; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x21
  int32_t ClearNum; // w0

  if ( (byte_49FCCC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCCC8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_18:
    sub_1B64324(Instance);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v12 = (UserQuestMaster_o *)Instance;
    v13 = !checkExpired;
    do
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v12 )
        goto LABEL_18;
      EntityFromId = UserQuestMaster__getEntityFromId(v12, (int64_t)Instance, questId, 0LL);
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
      --max_length;
    }
    while ( max_length );
  }
  LOBYTE(ClearNum) = 1;
  return ClearNum;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCCDC & 1) == 0 )
  {
    sub_1B640C8(&ShopEntity___c_TypeInfo, v1);
    byte_49FCCDC = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ShopEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ShopEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FCCDD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FCCDD = 1;
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
    sub_1B64324(this);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64324(this);
  return v->fields.giftType == 1;
}