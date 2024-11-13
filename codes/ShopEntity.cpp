void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16BDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16BDC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v21; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  void *v25; // x21
  Il2CppClass *v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v27; // x0
  void *v28; // x20
  Il2CppClass *v29; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v33; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B16BD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, imageId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16BD3 = 1;
  }
  v33 = 0LL;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v21);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v33,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v33 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v33[3].klass), 0LL);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v36.fields.currentCryptoKey = klass;
          *(_QWORD *)&v36.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v29 = entity[5].klass;
              v28 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_1BCAA3C(Instance, v19);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v26 = entity[4].klass;
          v25 = entity[4].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v35.fields.currentCryptoKey = v26;
          *(_QWORD *)&v35.fields.fakeValue = v25;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v29 = entity[4].klass;
              v28 = entity[4].monitor;
LABEL_34:
              if ( !v27->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v27, v19);
              *(_QWORD *)&v37.fields.currentCryptoKey = v29;
              *(_QWORD *)&v37.fields.fakeValue = v28;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_16838/*"addMessage"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16BD8 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_16838/*"addMessage"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v9);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                              value,
                              value->klass->vtable[4].methodPtr);
}


System_Int32_array *__fastcall ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Int32_array *result; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x19
  ShopEntity___c_c *v23; // x0
  System_Collections_Generic_List_object__c *v24; // x1
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__58_0; // x20
  Il2CppObject *v27; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16BB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v12, v13);
    sub_1BCA7E0(&ShopEntity___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_16958/*"anotherItemIds"*/, v16, v17);
    byte_4B16BB9 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_16958/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v22 = value;
      if ( value )
      {
        v23 = ShopEntity___c_TypeInfo;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v19);
          v23 = ShopEntity___c_TypeInfo;
        }
        v24 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v22->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (System_Collections_Generic_List_object__c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          _9__58_0 = v23->static_fields->__9__58_0;
          if ( !_9__58_0 )
          {
            if ( !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23, System_Collections_Generic_List_object__TypeInfo);
              v23 = ShopEntity___c_TypeInfo;
            }
            v27 = (Il2CppObject *)v23->static_fields->__9;
            _9__58_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                            System_Converter_object__int__TypeInfo,
                                                            v24,
                                                            v20,
                                                            v21);
            System_Converter_object__int____ctor(
              _9__58_0,
              v27,
              Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
              0LL);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
            static_fields->__9__58_0 = _9__58_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
              (int64_t)_9__58_0,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
          }
          v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            (System_Collections_Generic_List_object__o *)v22,
                                                            (System_Converter_T__TOutput__o *)_9__58_0,
                                                            (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( v35 )
            return System_Collections_Generic_List_int___ToArray(
                     v35,
                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        else
        {
          sub_1BCACFC(v22);
        }
        sub_1BCAA3C(v35, v36);
      }
    }
    return 0LL;
  }
  return result;
}


int32_t __fastcall ShopEntity__GetAnotherPayType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ShopEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&PayType_Type_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16961/*"anotherPayType"*/, v6, v7);
    byte_4B16BBA = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_16961/*"anotherPayType"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1BCAA3C(0LL, v9);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value, PayType_Type_TypeInfo, v10, v11);
      }
      else
      {
        sub_1BCACFC(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v12, v13);
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
      sub_1BCAA44(CommonConsumeEntities, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_1BCAA3C(CommonConsumeEntities, v3);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  __int64 ItemID; // x0
  __int64 v9; // x1

  if ( (byte_4B16BDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16BDA = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v7);
  if ( !Master_object )
    sub_1BCAA3C(ItemID, v9);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t setNum; // w19

  if ( (byte_4B16BBF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B16BBF = 1;
  }
  setNum = this->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetUnitInfo(setNum, 0LL);
}


int32_t __fastcall ShopEntity__GetExchangeSvtCoinType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16BDB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19503/*"exchangeSvtCoinType"*/, method, v2);
    byte_4B16BDB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19503/*"exchangeSvtCoinType"*/, 0, 0LL);
}


int32_t __fastcall ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v6, v7);
    byte_4B16BA0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v10 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
      LODWORD(script) = System_Convert__ToInt32(v10, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ShopEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&long_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_19830/*"freeShopReleaseDate"*/, v6, v7);
    byte_4B16BA1 = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_19830/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1BCAA3C(0LL, v9);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
      }
      else
      {
        sub_1BCACFC(value);
        return ShopEntity__IsAfterTheFreeShopReleaseDate(v12, v13);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *name; // x1
  __int64 v35; // x1
  int64_t v36; // x2
  char v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t purchaseType; // w9
  __int64 *v43; // x8
  int32_t v44; // w0
  System_String_o *v45; // x0
  System_String_o *v46; // x1
  System_String_o **v47; // x0
  Il2CppObject *Instance; // x0
  __int64 v49; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v51; // x1
  unsigned int klass; // w8
  Il2CppObject *v53; // x21
  const MethodInfo *v54; // x1
  ServantEntity_o *v55; // x21
  __int64 v56; // x1
  System_String_o *v57; // x21
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  int64_t v60; // x2
  char v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  bool IsServantEquip; // w21
  int32_t setNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16BC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, nameText, countText);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12088/*"SERVANT_UNIT"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B16BC0 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)nameText,
    (int64_t)name,
    (int64_t)countText,
    isSend,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  purchaseType = this->fields.purchaseType;
  switch ( purchaseType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v51);
      if ( !MasterData_object )
        goto LABEL_41;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int32_t)Instance,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_41;
      klass = (unsigned int)Instance[3].klass;
      if ( klass <= 0xD && ((1 << klass) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v47 = countText;
        v46 = 0LL;
        goto LABEL_17;
      }
      if ( isSend )
      {
        v44 = (_DWORD)this + 64;
        goto LABEL_11;
      }
      v46 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      *countText = v46;
      goto LABEL_16;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      v43 = &StringLiteral_14962/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v53 = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v54),
                !v53)
            || (Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                             (int32_t)Instance,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_41:
            sub_1BCAA3C(Instance, v49);
          }
          v55 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v55, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
            v43 = &StringLiteral_12088/*"SERVANT_UNIT"*/;
          }
          else
          {
            IsServantEquip = ServantEntity__get_IsServantEquip(v55, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
            if ( IsServantEquip )
              v43 = &StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/;
            else
              v43 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_32:
          v57 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
          setNum = this->fields.setNum;
          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum);
          v59 = System_String__Format(v57, v58, 0LL);
          *countText = v59;
          sub_1BCA784((PartyOrganizationUtility_o *)countText, (int64_t)v59, v60, v61, v62, v63, v64, v65);
          return;
        }
LABEL_10:
        v44 = (_DWORD)this + 64;
LABEL_11:
        v45 = System_Int32__ToString(v44, 0LL);
        if ( v45 )
          v46 = v45;
        else
          v46 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v46;
      }
      else
      {
LABEL_15:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        v46 = (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_16:
      v47 = countText;
LABEL_17:
      sub_1BCA784((PartyOrganizationUtility_o *)v47, (int64_t)v46, v36, v37, v38, v39, v40, v41);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v26; // x22
  __int64 v27; // x1
  Il2CppObject *v28; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  ShopEntity___c_c *v33; // x8
  System_Object_array *v34; // x21
  System_Predicate_object__o *_9__49_0; // x24
  Il2CppObject *v36; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x21
  int64_t v45; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v47; // x8
  int64_t v48; // x20
  unsigned __int64 v49; // x25
  bool v50; // w27
  int32_t v51; // w28
  int v52; // w8
  int v53; // w9
  __int64 v54; // x10
  int v55; // w8
  unsigned int v56; // w29
  __int64 v57; // x8
  __int64 v58; // x19
  __int64 v59; // x23
  int v60; // w8
  unsigned int v61; // w29
  __int64 v62; // x8
  __int64 v63; // x19
  __int64 v64; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B16BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_UserPresentBoxEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v19, v20);
    sub_1BCA7E0(&ShopEntity___c_TypeInfo, v21, v22);
    byte_4B16BB0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)MasterData_object, Instance, 0LL);
  v33 = ShopEntity___c_TypeInfo;
  v34 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v30);
    v33 = ShopEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Predicate_object__o *)v33->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = ShopEntity___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__49_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserPresentBoxEntity__TypeInfo, v30, v31, v32);
    System_Predicate_object____ctor(_9__49_0, v36, Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  Instance = (int64_t)System_Array__FindAll_object_(
                        v34,
                        (System_Predicate_T__o *)_9__49_0,
                        (const MethodInfo_300CF94 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v26
    || (v44 = Instance, Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)v26, 0LL),
                        !v28)
    || (v45 = Instance,
        Instance = (int64_t)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v28, 0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_49:
    sub_1BCAA3C(Instance, v24);
  }
  v47 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v47 < 1 )
    return 0;
  v48 = Instance;
  v49 = 0LL;
  v50 = v44 == 0 || isWithoutPresents;
  while ( 1 )
  {
    if ( v49 >= (unsigned int)v47 )
      goto LABEL_50;
    v51 = targetIds->m_Items[v49 + 1];
    if ( !v50 )
    {
      v52 = *(_DWORD *)(v44 + 24);
      if ( v52 >= 1 )
        break;
    }
LABEL_28:
    if ( !v45 )
      goto LABEL_49;
    v55 = *(_DWORD *)(v45 + 24);
    if ( v55 >= 1 )
    {
      v56 = 0;
      while ( v56 < v55 )
      {
        v57 = *(_QWORD *)(v45 + 8LL * (int)v56 + 32);
        if ( !v57 )
          goto LABEL_49;
        v59 = *(_QWORD *)(v57 + 80);
        v58 = *(_QWORD *)(v57 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
        *(_QWORD *)&v66.fields.currentCryptoKey = v59;
        *(_QWORD *)&v66.fields.fakeValue = v58;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
        if ( v51 == (_DWORD)Instance )
          return 1;
        v55 = *(_DWORD *)(v45 + 24);
        if ( (int)++v56 >= v55 )
          goto LABEL_37;
      }
LABEL_50:
      sub_1BCAA44(Instance, v24);
    }
LABEL_37:
    if ( !v48 )
      goto LABEL_49;
    v60 = *(_DWORD *)(v48 + 24);
    if ( v60 >= 1 )
    {
      v61 = 0;
      while ( v61 < v60 )
      {
        v62 = *(_QWORD *)(v48 + 8LL * (int)v61 + 32);
        if ( !v62 )
          goto LABEL_49;
        v64 = *(_QWORD *)(v62 + 80);
        v63 = *(_QWORD *)(v62 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
        *(_QWORD *)&v67.fields.currentCryptoKey = v64;
        *(_QWORD *)&v67.fields.fakeValue = v63;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
        if ( v51 == (_DWORD)Instance )
          return 1;
        v60 = *(_DWORD *)(v48 + 24);
        if ( (int)++v61 >= v60 )
          goto LABEL_46;
      }
      goto LABEL_50;
    }
LABEL_46:
    LODWORD(v47) = targetIds->max_length;
    if ( (__int64)++v49 >= (int)v47 )
      return 0;
  }
  v53 = 0;
  while ( 1 )
  {
    if ( v52 == v53 )
      goto LABEL_50;
    v54 = *(_QWORD *)(v44 + 8LL * v53 + 32);
    if ( !v54 )
      goto LABEL_49;
    if ( v51 == *(_DWORD *)(v54 + 76) )
      return 1;
    if ( v52 == ++v53 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4B16BAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BAF = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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
    sub_1BCAA3C(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1BCAA3C(this, method);
  if ( !itemIds->max_length )
    sub_1BCAA44(this, method);
  return itemIds->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1BCAA3C(this, *(_QWORD *)&num);
  if ( itemIds->max_length <= num )
    sub_1BCAA44(this, num);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x22
  const MethodInfo *v23; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x7
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B16BC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum, buyServantNum);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SetItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16BC2 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v27);
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
        v28);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v22 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v23),
              !v22)
          || (Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                           (int32_t)Instance,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_1BCAA3C(Instance, v21);
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
  if ( (byte_4B16BD6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22639/*"overwriteName"*/, defaultValue, method);
    byte_4B16BD6 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22639/*"overwriteName"*/,
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
    sub_1BCAA3C(this, method);
  if ( !prices->max_length )
    sub_1BCAA44(this, method);
  return prices->m_Items[1];
}


int32_t __fastcall ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_C0D864[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_C0D83C[v2];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1BCAA3C(this, *(_QWORD *)&num);
  if ( prices->max_length <= num )
    sub_1BCAA44(this, num);
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B16BBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  __int64 v13; // x9
  ShopReleaseEntity_o *v14; // x19
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B16BCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16BCE = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    return 0LL;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1BCAA44(Instance, v11);
    v14 = Instance->m_Items[v13];
    if ( !v14 )
      goto LABEL_17;
    if ( v14->fields.condType == 8 )
      break;
    if ( (int)++v13 >= max_length )
      return 0LL;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (ShopReleaseEntity_array *)ShopReleaseEntity__get_condValue(v14, 0LL),
        !MasterData_object) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v11);
  }
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)Instance,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


int32_t __fastcall ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  int32_t flag; // w8
  __int64 *v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_8365/*"LIMITED_SHOP_REMAIN_DAYS"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_8834/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_23099/*"remainDays"*/, v8, v9);
    byte_4B16BBB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23099/*"remainDays"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v15 = &StringLiteral_8365/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v15 = &StringLiteral_8834/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v15, 0LL);
  }
  if ( !value )
    sub_1BCAA3C(0LL, v11);
  v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                             value,
                             value->klass->vtable[4].methodPtr);
  return System_Int32__Parse(v12, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  const MethodInfo *v27; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *v30; // x24
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x7
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B16BC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum, buyServantNum);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SetItemMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B16BC1 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v33);
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
          v34);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v30 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v31);
        if ( !v30 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v30,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v26 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v27),
          !v26)
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                       (int32_t)Instance,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_1BCAA3C(Instance, v25);
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
  __int64 v2; // x2
  int64_t Time; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B16BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16BA2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v5) && ShopEntity__GetFreeShopReleaseDate(this, v6) > 0;
}


bool __fastcall ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  int64_t closedAt; // x8
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B16BA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BA8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  int64_t AnotherPayItemIds; // x0
  __int64 v14; // x1
  int32_t v15; // w20
  __int64 v16; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v18; // x1
  char v19; // w8
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16BB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16BB7 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_21;
  AnotherPayItemIds = (int64_t)ShopEntity__GetAnotherPayItemIds(this, v12);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  if ( !*(_DWORD *)(AnotherPayItemIds + 24) )
    sub_1BCAA44(AnotherPayItemIds, v14);
  v15 = *(_DWORD *)(AnotherPayItemIds + 32);
  if ( v15 < 1 )
    goto LABEL_21;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_24:
    sub_1BCAA3C(AnotherPayItemIds, v14);
  UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, AnotherPayItemIds, v15, 0LL);
  v19 = (char)entity;
  if ( !entity )
    return v19 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v18) )
  {
LABEL_21:
    v19 = 0;
    return v19 & 1;
  }
  AnotherPayItemIds = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)AnotherPayItemIds,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  AnotherPayItemIds = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       AnotherPayItemIds,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
    v19 = !UserShopEntity__CheckFlagKind(EntityDefinitely, 2, 0LL);
  else
    v19 = 1;
  return v19 & 1;
}


bool __fastcall ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  int32_t v15; // w19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BB8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_24606/*"useAnotherPayCommonReleaseId"*/, v10, v11);
    byte_4B16BB8 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24606/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v14 = value;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
    v15 = System_Convert__ToInt32(v14, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v17);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v15, 0LL, 0, 0LL);
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
  if ( (byte_4B16BAA & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, nowTime, method);
    byte_4B16BAA = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return closedAt && Time > closedAt;
}


bool __fastcall ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t v12; // w8
  int32_t limitNum; // w9
  bool v14; // w10
  bool v15; // w8

  if ( (byte_4B16BBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BBC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                              (UserShopMaster_o *)MasterData_object,
                              Instance,
                              this->fields.baseShopId,
                              0LL)) == 0 )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v9);
  }
  v12 = *(_DWORD *)(Instance + 28);
  limitNum = this->fields.limitNum;
  v14 = v12 > 0;
  v15 = v12 >= limitNum;
  if ( limitNum >= 1 )
    return v15;
  else
    return v14;
}


bool __fastcall ShopEntity__IsCondType_40625800(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v11; // w10
  bool v12; // w8

  if ( (byte_4B16BBD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, userId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16BBD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v11 = m_CancellationTokenSource_high > 0;
  v12 = m_CancellationTokenSource_high >= limitNum;
  if ( limitNum >= 1 )
    return v12;
  else
    return v11;
}


bool __fastcall ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  bool v15; // w0
  const MethodInfo *v16; // x1
  int32_t costumeId[2]; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4B16BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v8, v9);
    byte_4B16BA6 = 1;
  }
  value = 0LL;
  *(_QWORD *)costumeId = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v11)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v14);
  }
  v15 = ServantCostumeReleaseMaster__checkItemHaving(
          (ServantCostumeReleaseMaster_o *)Instance,
          costumeId[1],
          costumeId[0],
          0LL);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v16) || !v15);
}


bool __fastcall ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x21
  bool v18; // w21
  int64_t closedAt; // x8
  UserEventEntity_o *v21; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4B16BA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16BA7 = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_27;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_15;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_27;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &v21,
          (int64_t)Instance,
          this->fields.eventId,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)v21;
  if ( !v21 )
    goto LABEL_27;
  v18 = 1;
  if ( !UserEventEntity__getEventFlag(v21, 1, 0LL) )
  {
LABEL_15:
    if ( !Time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
      Time = NetworkManager__getTime(0LL);
    }
    if ( Time < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && Time > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_27:
    sub_1BCAA3C(Instance, v16);
  }
  return v18;
}


bool __fastcall ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v21; // x20
  const MethodInfo *v22; // x1
  int v23; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  WarEntity_c *v25; // x1
  System_Collections_Generic_IEnumerator_T__o *v26; // x19
  char v27; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4B16BD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&WarEntity_TypeInfo, v16, v17);
    byte_4B16BD9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v21 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v22),
        !v21)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v21, (int32_t)Instance, 0LL),
        !MasterData_object)
    || (v23 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].klass) == 0LL) )
  {
    sub_1BCAA3C(Instance, v19);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v26 = Enumerator;
  v27 = 0;
  while ( 1 )
  {
    if ( !v26 )
      goto LABEL_36;
    klass = v26->klass;
    v29 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v26,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = v26->klass;
    v33 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_21;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_21:
      v35 = sub_1C1C7C0(v26, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                  v26,
                                                                  *(_QWORD *)(v35 + 8));
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v36);
    v25 = WarEntity_TypeInfo;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (WarEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
    {
      sub_1BCACFC(Enumerator);
LABEL_36:
      sub_1BCAA3C(Enumerator, v25);
    }
    if ( LODWORD(Enumerator[6].klass) == v23 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v27 |= (unsigned __int8)Enumerator;
    }
  }
  v38 = v26->klass;
  v39 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_32;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_32:
    v41 = sub_1C1C7C0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v26, *(_QWORD *)(v41 + 8));
  return v27 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  int32_t v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_23099/*"remainDays"*/, v4, v5);
    byte_4B16BB6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23099/*"remainDays"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v9 = System_Int32__Parse(v8, 0LL);
  if ( v9 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v9;
}


bool __fastcall ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4B16BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v8, v9);
    byte_4B16BA3 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v12),
        !MasterData_object) )
  {
LABEL_10:
    sub_1BCAA3C(script, method);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4B16BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BB2 = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuyingShopId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4B16BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BB3 = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.id,
                       0LL);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool __fastcall ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  int32_t v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_23099/*"remainDays"*/, v4, v5);
    byte_4B16BB4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23099/*"remainDays"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v9 = System_Int32__Parse(v8, 0LL);
  if ( v9 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v9;
}


bool __fastcall ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  int32_t v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B16BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&StringLiteral_23099/*"remainDays"*/, v4, v5);
    byte_4B16BB5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23099/*"remainDays"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
  v9 = System_Int32__Parse(v8, 0LL);
  if ( v9 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v9;
}


bool __fastcall ShopEntity__IsNotClearNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Time; // x0
  int64_t closedAt; // x8
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  bool v23; // w19
  int v24; // w20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16BD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B16BD2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    v23 = v21;
    if ( !v21 )
      break;
    if ( !v25.fields._current )
      sub_1BCAA3C(v21, v22);
    if ( HIDWORD(v25.fields._current[1].klass) == 37 )
    {
      v24 = 6;
      goto LABEL_18;
    }
  }
  v24 = 2;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return v23 && v24 == 6;
}


bool __fastcall ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v19; // x21
  bool IsTimeStatusRecord; // w0
  bool v21; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4B16BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16BA9 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_26;
  v19 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, this->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_26;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v19 || IsTimeStatusRecord )
      goto LABEL_20;
  }
  else if ( !v19 )
  {
LABEL_20:
    if ( Time < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL);
    }
LABEL_26:
    sub_1BCAA3C(Instance, v16);
  }
  v21 = 1;
  if ( !UserEventEntity__getEventFlag(v19, 1, 0LL) )
    goto LABEL_20;
  return v21;
}


bool __fastcall ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  int64_t Instance; // x0
  const MethodInfo *v59; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v61; // x22
  __int64 v62; // x1
  Il2CppObject *v63; // x21
  UserShopEntity_o *v64; // x21
  int64_t updatedAt; // x25
  __int64 v66; // x2
  __int64 v67; // x3
  int64_t v68; // x27
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  bool v71; // w28
  CommonReleaseEntity_array *List; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x23
  ShopEntity___c_c *v77; // x0
  System_Func_object__bool__o *_9__36_0; // x24
  Il2CppObject *v79; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Object_array *v88; // x24
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Collections_Generic_List_object__o *v92; // x23
  int64_t v93; // x2
  __int64 v94; // x3
  int max_length; // w8
  unsigned int v96; // w25
  Il2CppObject *v97; // x20
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  int64_t v105; // x1
  Il2CppClass **v106; // x0
  ShopEntity___c_c *v107; // x0
  System_Func_object__bool__o *_9__36_1; // x22
  Il2CppObject *v109; // x24
  struct ShopEntity___c_StaticFields *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x2
  __int64 v118; // x3
  ShopEntity___c_c *v119; // x0
  System_Func_object__bool__o *_9__36_2; // x22
  Il2CppObject *v121; // x24
  struct ShopEntity___c_StaticFields *v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  ShopEntity___c_c *v133; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x22
  System_Func_T__TResult__o *_9__36_3; // x23
  Il2CppObject *v136; // x24
  struct ShopEntity___c_StaticFields *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  const MethodInfo_36BF22C *v144; // x3
  bool v145; // w20
  int32_t FreeShopCondId; // w0
  char v147; // w8
  bool result; // w0
  ShopEntity_o *v149; // x0
  int32_t *v150; // x1
  int32_t *v151; // x2
  const MethodInfo *v152; // x3
  int64_t v153; // [xsp+10h] [xbp-80h]
  CommonReleaseMaster_o *v154; // [xsp+18h] [xbp-78h]
  __int64 v155; // [xsp+20h] [xbp-70h] BYREF
  int64_t v156; // [xsp+28h] [xbp-68h]
  System_Nullable_long__o v157; // 0:x0.16

  if ( (byte_4B16BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserQuestEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v18, v19);
    sub_1BCA7E0(&System_Func_UserQuestEntity__long__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_UserQuestEntity__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_CommonReleaseEntity__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&long_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_System_Nullable_long__GetValueOrDefault__, v38, v39);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v46, v47);
    sub_1BCA7E0(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v48, v49);
    sub_1BCA7E0(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v50, v51);
    sub_1BCA7E0(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v52, v53);
    sub_1BCA7E0(&ShopEntity___c_TypeInfo, v54, v55);
    sub_1BCA7E0(&StringLiteral_19830/*"freeShopReleaseDate"*/, v56, v57);
    byte_4B16BA5 = 1;
  }
  v155 = 0LL;
  v156 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v61 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v63 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v62);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v63 )
    goto LABEL_66;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely((UserShopMaster_o *)v63, Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v64 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_66;
  updatedAt = v64->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                        (Il2CppObject *)StringLiteral_19830/*"freeShopReleaseDate"*/,
                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_66;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v68 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v66, v67);
    v71 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v69) || UserShopEntity__get_IsReturnRarePriShop(v64, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v70);
    if ( !MasterData_object )
      goto LABEL_66;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, Instance, 0LL);
    if ( List )
    {
      v76 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v153 = updatedAt;
      v154 = (CommonReleaseMaster_o *)MasterData_object;
      v77 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v73);
        v77 = ShopEntity___c_TypeInfo;
      }
      _9__36_0 = (System_Func_object__bool__o *)v77->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77, v73);
          v77 = ShopEntity___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v77->static_fields->__9;
        _9__36_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                    v73,
                                                    v74,
                                                    v75);
        System_Func_object__bool____ctor(_9__36_0, v79, Method_ShopEntity___c__IsPaidExchange_b__36_0__, 0LL);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
          (int64_t)_9__36_0,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
      }
      v87 = System_Linq_Enumerable__Where_object_(
              v76,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v88 = System_Linq_Enumerable__ToArray_object_(
              v87,
              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v92 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                           v89,
                                                           v90,
                                                           v91);
      System_Collections_Generic_List_object____ctor(
        v92,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v88 )
        goto LABEL_66;
      max_length = v88->max_length;
      if ( max_length >= 1 )
      {
        v96 = 0;
        while ( 1 )
        {
          if ( v96 >= max_length )
            sub_1BCAA44(Instance, v59);
          v97 = v88->m_Items[v96];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v97 || !v61 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                (UserQuestMaster_o *)v61,
                                Instance,
                                (int32_t)v97[2].klass,
                                0LL);
          if ( Instance )
          {
            if ( !v92 )
              break;
            items = v92->fields._items;
            v103 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v92->fields._version;
            if ( !items )
              break;
            size = v92->fields._size;
            v105 = Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v92,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
            }
            else
            {
              v106 = &items->obj.klass + size;
              v92->fields._size = size + 1;
              v106[4] = (Il2CppClass *)v105;
              sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), v105, v93, v94, v98, v99, v100, v101);
            }
          }
          max_length = v88->max_length;
          if ( (int)++v96 >= max_length )
            goto LABEL_39;
        }
LABEL_66:
        sub_1BCAA3C(Instance, v59);
      }
LABEL_39:
      v155 = 0LL;
      v156 = 0LL;
      if ( !v92 )
        goto LABEL_66;
      updatedAt = v153;
      if ( v92->fields._size < 1 )
        goto LABEL_62;
      v107 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v59);
        v107 = ShopEntity___c_TypeInfo;
      }
      _9__36_1 = (System_Func_object__bool__o *)v107->static_fields->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( !v107->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v107, v59);
          v107 = ShopEntity___c_TypeInfo;
        }
        v109 = (Il2CppObject *)v107->static_fields->__9;
        _9__36_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_UserQuestEntity__bool__TypeInfo,
                                                    v59,
                                                    v93,
                                                    v94);
        System_Func_object__bool____ctor(_9__36_1, v109, Method_ShopEntity___c__IsPaidExchange_b__36_1__, 0LL);
        v110 = ShopEntity___c_TypeInfo->static_fields;
        v110->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v110->__9__36_1,
          (int64_t)_9__36_1,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v92,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_62;
      v119 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v59);
        v119 = ShopEntity___c_TypeInfo;
      }
      _9__36_2 = (System_Func_object__bool__o *)v119->static_fields->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( !v119->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v119, v59);
          v119 = ShopEntity___c_TypeInfo;
        }
        v121 = (Il2CppObject *)v119->static_fields->__9;
        _9__36_2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_UserQuestEntity__bool__TypeInfo,
                                                    v59,
                                                    v117,
                                                    v118);
        System_Func_object__bool____ctor(_9__36_2, v121, Method_ShopEntity___c__IsPaidExchange_b__36_2__, 0LL);
        v122 = ShopEntity___c_TypeInfo->static_fields;
        v122->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v122->__9__36_2,
          (int64_t)_9__36_2,
          v123,
          v124,
          v125,
          v126,
          v127,
          v128);
      }
      v129 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v92,
               (System_Func_TSource__bool__o *)_9__36_2,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v133 = ShopEntity___c_TypeInfo;
      v134 = v129;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v130);
        v133 = ShopEntity___c_TypeInfo;
      }
      _9__36_3 = (System_Func_T__TResult__o *)v133->static_fields->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( !v133->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v133, v130);
          v133 = ShopEntity___c_TypeInfo;
        }
        v136 = (Il2CppObject *)v133->static_fields->__9;
        _9__36_3 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                  System_Func_UserQuestEntity__long__TypeInfo,
                                                  v130,
                                                  v131,
                                                  v132);
        System_Func_object__long____ctor(_9__36_3, v136, Method_ShopEntity___c__IsPaidExchange_b__36_3__, 0LL);
        v137 = ShopEntity___c_TypeInfo->static_fields;
        v137->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v137->__9__36_3,
          (int64_t)_9__36_3,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
      }
      v157.fields.value = System_Linq_Enumerable__Min_object__49524244(
                            v134,
                            (System_Func_TSource__long__o *)_9__36_3,
                            (const MethodInfo_2F3AE14 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v157.fields.hasValue = &v155;
      System_Nullable_long____ctor(v157, Method_System_Nullable_long___ctor__, v144);
      if ( (_BYTE)v155 )
        v145 = v156 > v64->fields.updatedAt;
      else
LABEL_62:
        v145 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v59);
      v147 = v145 | !CommonReleaseMaster__IsOpen(v154, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v147 = 1;
    }
    return (v71 || updatedAt < v68) | v147;
  }
  else
  {
    sub_1BCACFC(Instance);
    ShopEntity__SetSvtIdAndCostumeId(v149, v150, v151, v152);
  }
  return result;
}


bool __fastcall ShopEntity__IsPossessionInfoDisp(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16BD7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21035/*"isPossessionInfoDisp"*/, method, v2);
    byte_4B16BD7 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21035/*"isPossessionInfoDisp"*/, 0LL);
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B16BAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message, itemName);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16BAB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, 0LL);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v15; // x20
  struct System_Int32_array *targetIds; // x23
  __int64 v17; // x8
  UserQuestMaster_o *v18; // x19
  unsigned __int64 v19; // x24
  int32_t v20; // w21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16BAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16BAD = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
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
      v15 = EntityDefinitely;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_22;
      v17 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = (UserQuestMaster_o *)Instance;
        v19 = 0LL;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)v17 )
            sub_1BCAA44(Instance, v11);
          v20 = targetIds->m_Items[v19 + 1];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v18 )
            break;
          Instance = UserQuestMaster__TryGetEntity(v18, &entity, Instance, v20, 0LL);
          if ( !entity )
            goto LABEL_20;
          LODWORD(v17) = targetIds->max_length;
          if ( (__int64)++v19 >= (int)v17 )
            goto LABEL_19;
        }
LABEL_22:
        sub_1BCAA3C(Instance, v11);
      }
LABEL_19:
      LOBYTE(EntityDefinitely) = v15->fields.num > 0;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x19
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  int64_t UserId; // x0
  __int64 v22; // x1
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ShopEntity___c_c *v27; // x8
  System_Object_array *v28; // x21
  System_Predicate_object__o *_9__50_0; // x22
  Il2CppObject *v30; // x23
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *targetIds; // x22
  __int64 v39; // x8
  int64_t v40; // x20
  unsigned __int64 v41; // x23
  int64_t v42; // x25
  int32_t v43; // w21
  int v44; // w8
  __int64 v45; // x9
  __int64 v46; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_UserPresentBoxEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Predicate_UserPresentBoxEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ShopEntity___c__IsServantGet_b__50_0__, v14, v15);
    sub_1BCA7E0(&ShopEntity___c_TypeInfo, v16, v17);
    byte_4B16BB1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v20 )
    goto LABEL_34;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)v20, UserId, 0LL);
  v27 = ShopEntity___c_TypeInfo;
  v28 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v24);
    v27 = ShopEntity___c_TypeInfo;
  }
  _9__50_0 = (System_Predicate_object__o *)v27->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v24);
      v27 = ShopEntity___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__50_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserPresentBoxEntity__TypeInfo, v24, v25, v26);
    System_Predicate_object____ctor(_9__50_0, v30, Method_ShopEntity___c__IsServantGet_b__50_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
      (int64_t)_9__50_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  UserId = (int64_t)System_Array__FindAll_object_(
                      v28,
                      (System_Predicate_T__o *)_9__50_0,
                      (const MethodInfo_300CF94 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_34:
    sub_1BCAA3C(UserId, v22);
  v39 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v39 < 1 )
    return 0;
  v40 = UserId;
  v41 = 0LL;
  v42 = UserId + 32;
  while ( 1 )
  {
    if ( v41 >= (unsigned int)v39 )
      goto LABEL_33;
    v43 = targetIds->m_Items[v41 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_34;
    UserId = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)Master_object,
               &entity,
               UserId,
               v43,
               0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v40 )
    {
      v44 = *(_DWORD *)(v40 + 24);
      if ( v44 >= 1 )
      {
        v45 = 0LL;
        while ( (unsigned int)v45 < v44 )
        {
          v46 = *(_QWORD *)(v42 + 8 * v45);
          if ( !v46 )
            goto LABEL_34;
          if ( v43 == *(_DWORD *)(v46 + 76) )
            return 1;
          if ( (int)++v45 >= v44 )
            goto LABEL_30;
        }
LABEL_33:
        sub_1BCAA44(UserId, v22);
      }
    }
LABEL_30:
    LODWORD(v39) = targetIds->max_length;
    if ( (__int64)++v41 >= (int)v39 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v12; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation, method);
    sub_1BCA7E0(&StringLiteral_19827/*"freeShopCondId"*/, v5, v6);
    byte_4B16BA4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19827/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
      && ShopEntity__IsAfterTheFreeShopReleaseDate(this, v8) )
    {
      if ( ShopEntity__IsFulFilledFreeExchangeCondition(this, v9) )
      {
        LOBYTE(script) = 1;
      }
      else
      {
        LOBYTE(script) = ShopEntity__IsSoldOut(this, v10);
        if ( ((unsigned __int8)script & 1) == 0 && isInPreparation )
          LOBYTE(script) = ShopEntity__isQuestNotClearItemClosed(this, 0, v12);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4B16BAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BAE = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_12;
  if ( this->fields.limitNum < 1 )
  {
LABEL_13:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_15:
    sub_1BCAA3C(Instance, v9);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v13) )
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
    sub_1BCAA44(this, svtId);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_62420224((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B16BAC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message, itemName);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16BAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t TargetId; // w0

  if ( (byte_4B16BC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BC3 = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v9),
        !MasterData_object) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  if ( ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v10);
  return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  int32_t *p_m_CancellationTokenSource; // x8
  int32_t TargetId; // w0
  const MethodInfo *v17; // x1
  int32_t v18; // w0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  int64_t UserId; // x21
  const MethodInfo *v22; // x1

  if ( (byte_4B16BC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16BC4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v13);
  if ( !MasterData_object )
    goto LABEL_21;
  if ( !ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v14);
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
      v18 = ShopEntity__get_TargetId(this, v17);
      if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v18, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v20 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v22);
          if ( v20 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v20,
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
    sub_1BCAA3C(Instance, v11);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_21;
  p_m_CancellationTokenSource = (int32_t *)&Instance[1].fields._DispLog;
  return *p_m_CancellationTokenSource;
}


System_String_o *__fastcall ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  ServantEntity_o *v24; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16BD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B16BD5 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v18);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
    }
LABEL_21:
    sub_1BCAA3C(Instance, v17);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v22);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          (Il2CppObject **)&v24,
          (int32_t)entity[4].klass,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v24;
  if ( !v24 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v24, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v23);
  else
    return this->fields.name;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  if ( targetIds->max_length <= id )
    sub_1BCAA44(this, id);
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1BCAA3C(this, method);
  if ( !targetIds->max_length )
    sub_1BCAA44(this, method);
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v17; // x21
  struct System_Int32_array *targetIds; // x8
  QuestReleaseMaster_o *v19; // x22
  int max_length; // w27
  int32_t v21; // w24
  const MethodInfo *v22; // x2
  int v23; // w8
  int64_t v24; // x25
  _BOOL4 v25; // w29
  int i; // w28
  __int64 v27; // x26
  int v28; // w23
  int64_t UserId; // x25
  const MethodInfo *v30; // x2
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  UserQuestEntity_o *v34; // x25
  Il2CppObject *Entity; // x0
  const MethodInfo *v36; // x1
  char v38; // w8
  int64_t v39; // [xsp+8h] [xbp-68h]

  if ( (byte_4B16BC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16BC5 = 1;
  }
  if ( this->fields.purchaseType != 6 )
  {
LABEL_36:
    v38 = 0;
    return v38 & 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_38;
  v19 = (QuestReleaseMaster_o *)Instance;
  max_length = targetIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Instance = NetworkManager__getTime(0LL);
  v39 = Instance;
  if ( max_length < 1 )
  {
LABEL_35:
    v38 = 1;
    return v38 & 1;
  }
  if ( !v19 )
LABEL_38:
    sub_1BCAA3C(Instance, v15);
  v21 = 0;
  while ( 1 )
  {
    Instance = (int64_t)QuestReleaseMaster__getListByType(v19, 13, 0LL);
    if ( !Instance )
      goto LABEL_38;
    v23 = *(_DWORD *)(Instance + 24);
    v24 = Instance;
    v25 = v23 > 0;
    if ( v23 >= 1 )
    {
      for ( i = 0; i < v23; v25 = ++i < v23 )
      {
        if ( i >= (unsigned int)v23 )
          sub_1BCAA44(Instance, v15);
        v27 = *(_QWORD *)(v24 + 8LL * i + 32);
        if ( !v27 )
          goto LABEL_38;
        v28 = *(_DWORD *)(v27 + 16);
        Instance = ShopEntity__getTargetId(this, v21, v22);
        if ( v28 == (_DWORD)Instance )
        {
          if ( !v17 )
            goto LABEL_38;
          Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v17, *(_DWORD *)(v27 + 16), 0LL);
          if ( !Instance )
            goto LABEL_38;
          Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
          if ( (Instance & 1) == 0 )
            break;
        }
        v23 = *(_DWORD *)(v24 + 24);
      }
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    UserId = NetworkManager__get_UserId(0LL);
    Instance = ShopEntity__getTargetId(this, v21, v30);
    if ( !MasterData_object )
      goto LABEL_38;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, UserId, Instance, 0LL);
    if ( EntityFromId )
      break;
    Instance = ShopEntity__getTargetId(this, v21, v33);
    if ( !v17 )
      goto LABEL_38;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
               Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) < v39
      || ((v25 | ShopEntity__IsEventQuest(this, v36)) & 1) != 0 )
    {
      goto LABEL_36;
    }
LABEL_34:
    if ( ++v21 == max_length )
      goto LABEL_35;
  }
  v34 = EntityFromId;
  if ( ShopEntity__IsEventQuest(this, v32) )
    goto LABEL_36;
  if ( v34->fields.expireAt >= v39 )
    goto LABEL_34;
  v38 = !v25;
  return v38 & 1;
}


bool __fastcall ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct System_Int32_array *targetIds; // x8
  ItemMaster_o *v16; // x23
  __int64 v17; // x25
  __int64 v18; // x26
  unsigned __int64 v19; // x24
  __int64 qp; // x24
  __int64 setNum; // x28
  struct System_Int32_array *v22; // x8
  __int64 mana; // x24
  __int64 v24; // x28
  struct System_Int32_array *v25; // x8
  __int64 rarePri; // x24
  __int64 v27; // x28
  struct System_Int32_array *v28; // x8
  BalanceConfig_c *v29; // x8
  __int64 v30; // x28
  int v31; // w24
  int32_t v32; // w8

  if ( (byte_4B16BD4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, buyCount, check);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16BD4 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_41:
    sub_1BCAA3C(Instance, v14);
  }
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
    return 0;
  v16 = (ItemMaster_o *)Instance;
  v17 = 8LL;
  v18 = 1LL - (unsigned int)*(_QWORD *)&targetIds->max_length;
  while ( 1 )
  {
    v19 = v17 - 8;
    if ( v17 - 8 >= (unsigned __int64)targetIds->max_length )
LABEL_46:
      sub_1BCAA44(Instance, v14);
    if ( !v16 )
      goto LABEL_41;
    Instance = (DataManager_o *)ItemMaster__isQP(v16, *((_DWORD *)&targetIds->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      qp = SelfUserGame->fields.qp;
      setNum = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
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
    v22 = this->fields.targetIds;
    if ( !v22 )
      goto LABEL_41;
    if ( v19 >= v22->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isMana(v16, *((_DWORD *)&v22->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_41;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v24 = this->fields.setNum;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v24 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL) )
      {
        v32 = 5;
        goto LABEL_45;
      }
      goto LABEL_39;
    }
    v25 = this->fields.targetIds;
    if ( !v25 )
      goto LABEL_41;
    if ( v19 >= v25->max_length )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v16, *((_DWORD *)&v25->obj.klass + v17), 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_41;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v27 = this->fields.setNum;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v27 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 12LL) )
    {
      v32 = 22;
      goto LABEL_45;
    }
LABEL_39:
    if ( v18 + v17 == 8 )
      return 0;
    targetIds = this->fields.targetIds;
    ++v17;
    if ( !targetIds )
      goto LABEL_41;
  }
  v28 = this->fields.targetIds;
  if ( !v28 )
    goto LABEL_41;
  if ( v19 >= v28->max_length )
    goto LABEL_46;
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v16, *((_DWORD *)&v28->obj.klass + v17), 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_39;
  if ( !SelfUserGame )
    goto LABEL_41;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0LL);
  v29 = BalanceConfig_TypeInfo;
  v30 = this->fields.setNum;
  v31 = (int)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    v29 = BalanceConfig_TypeInfo;
  }
  if ( v30 * buyCount + v31 <= v29->static_fields->FriendPointMax )
    goto LABEL_39;
  v32 = 13;
LABEL_45:
  *check = v32;
  return 1;
}


bool __fastcall ShopEntity__isNotClearTotalTDCond(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  ShopReleaseEntity_array *v11; // x19
  __int64 v12; // x24
  ShopReleaseEntity_o *v13; // x20
  int32_t condType; // w21
  int32_t condValue; // w0
  __int64 v16; // x1
  int64_t condNum; // x22
  int32_t v18; // w23

  if ( (byte_4B16BCF & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BCF = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v9);
  }
  v10 = *(_QWORD *)&Instance->max_length;
  v11 = Instance;
  if ( (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
      sub_1BCAA44(Instance, v9);
    v13 = v11->m_Items[v12];
    if ( !v13 )
      goto LABEL_19;
    condType = v13->fields.condType;
    if ( (unsigned int)(condType - 110) <= 2 )
      break;
LABEL_16:
    if ( (int)++v12 >= (int)v10 )
      return 0;
  }
  condValue = ShopReleaseEntity__get_condValue(v11->m_Items[v12], 0LL);
  condNum = v13->fields.condNum;
  v18 = condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v16);
  Instance = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v18, condNum, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v10 = *(_QWORD *)&v11->max_length;
    goto LABEL_16;
  }
  return ShopReleaseEntity__IsPreparation(v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v14; // x8
  UserQuestMaster_o *v15; // x20
  __int64 v16; // x23
  ShopReleaseEntity_o *v17; // x21
  int64_t UserId; // x22
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4B16BCA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16BCA = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v12);
  }
  v14 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v14 < 1 )
    return 0;
  v15 = (UserQuestMaster_o *)Instance;
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= (unsigned int)v14 )
      sub_1BCAA44(Instance, v12);
    v17 = EntitiyList->m_Items[v16];
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields.condType == 1 )
      break;
LABEL_19:
    if ( (int)++v16 >= (int)v14 )
      return 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (Il2CppObject *)ShopReleaseEntity__get_condValue(v17, 0LL);
  if ( !v15 )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(v15, UserId, (int32_t)Instance, 0LL);
  if ( EntityFromId )
  {
    Instance = (Il2CppObject *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( (_DWORD)Instance )
    {
      v14 = *(_QWORD *)&EntitiyList->max_length;
      goto LABEL_19;
    }
  }
  return 1;
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4B16BCC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BCC = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v7);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(Instance, v7);
    Instance = (ShopReleaseEntity_array *)m_Items[v9];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 38 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4B16BCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BCD = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v7);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(Instance, v7);
    Instance = (ShopReleaseEntity_array *)m_Items[v9];
    if ( !Instance )
      goto LABEL_15;
    if ( HIDWORD(Instance->bounds) == 41 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w9
  int v10; // w10
  ShopReleaseEntity_o *v11; // x8

  if ( (byte_4B16BD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BD1 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v8);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = Instance->m_Items[v10];
    if ( !v11 )
      goto LABEL_15;
    if ( v11->fields.condType == 37 )
      return ShopReleaseEntity__IsPreparation(Instance->m_Items[v10], 0LL);
    if ( max_length == ++v10 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4B16BD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BD0 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v7);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(Instance, v7);
    Instance = (ShopReleaseEntity_array *)m_Items[v9];
    if ( !Instance )
      goto LABEL_15;
    if ( (HIDWORD(Instance->bounds) & 0xFFFFFFFE) == 78 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  __int64 v9; // x9
  ShopReleaseEntity_o **m_Items; // x10

  if ( (byte_4B16BCB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16BCB = 1;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v7);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  m_Items = Instance->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(Instance, v7);
    Instance = (ShopReleaseEntity_array *)m_Items[v9];
    if ( !Instance )
      goto LABEL_14;
    if ( HIDWORD(Instance->bounds) == 39 )
      return ShopReleaseEntity__IsPreparation((ShopReleaseEntity_o *)Instance, 0LL);
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v15; // x20
  __int64 v16; // x23
  ShopReleaseEntity_o *v17; // x21
  int64_t UserId; // x22

  if ( (byte_4B16BC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16BC9 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v12);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (UserQuestMaster_o *)Instance;
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= max_length )
      sub_1BCAA44(Instance, v12);
    v17 = EntitiyList->m_Items[v16];
    if ( !v17 )
      goto LABEL_21;
    if ( v17->fields.condType == 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)ShopReleaseEntity__get_condValue(v17, 0LL);
      if ( !v15 )
        goto LABEL_21;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v15, UserId, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v16 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClear(
        ShopEntity_o *this,
        int32_t *questId,
        bool checkExpired,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B16BC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId, checkExpired);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16BC6 = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  bool v7; // w0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16BC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16BC8 = 1;
  }
  questId = 0;
  v7 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, 0LL)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v10);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *targetIds; // x8
  int max_length; // w22
  UserQuestMaster_o *v15; // x20
  bool v16; // w24
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v18; // x21
  int32_t ClearNum; // w0

  if ( (byte_4B16BC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId, checkExpired);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16BC7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v12);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v15 = (UserQuestMaster_o *)Instance;
    v16 = !checkExpired;
    do
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v15 )
        goto LABEL_18;
      EntityFromId = UserQuestMaster__getEntityFromId(v15, (int64_t)Instance, questId, 0LL);
      v18 = EntityFromId;
      if ( EntityFromId == 0LL || v16 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL) )
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16BDE & 1) == 0 )
  {
    sub_1BCA7E0(&ShopEntity___c_TypeInfo, v1, v2);
    byte_4B16BDE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16BDF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16BDF = 1;
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
    sub_1BCAA3C(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BCAA3C(this, 0LL);
  return v->fields.giftType == 1;
}