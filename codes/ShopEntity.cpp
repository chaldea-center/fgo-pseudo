void __fastcall ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC84D5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC84D5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v15; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  void *v19; // x21
  Il2CppClass *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v21; // x0
  void *v22; // x20
  Il2CppClass *v23; // x21
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v27; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4BC84CC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EquipMaster___, imageId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC84CC = 1;
  }
  v27 = 0LL;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v15);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v27,
          (int32_t)Instance,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v27 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v27[3].klass), 0LL);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_32486C4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v30, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v23 = entity[5].klass;
              v22 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_1C1AE30(Instance, v13);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v20 = entity[4].klass;
          v19 = entity[4].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = v20;
          *(_QWORD *)&v29.fields.fakeValue = v19;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v29, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v23 = entity[4].klass;
              v22 = entity[4].monitor;
LABEL_34:
              if ( !v21->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v21);
              *(_QWORD *)&v31.fields.currentCryptoKey = v23;
              *(_QWORD *)&v31.fields.fakeValue = v22;
              *imageId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v31, 0LL);
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
  __int64 v6; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84D1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&StringLiteral_16939/*"addMessage"*/, v3);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC84D1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_16939/*"addMessage"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_1C1AE30(0LL, v6);
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
  Il2CppObject *v11; // x19
  ShopEntity___c_c *v12; // x0
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__58_0; // x20
  Il2CppObject *v15; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC84B2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Converter_object__int__TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1C1ABD4(&Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__, v7);
    sub_1C1ABD4(&ShopEntity___c_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_17059/*"anotherItemIds"*/, v9);
    byte_4BC84B2 = 1;
  }
  value = 0LL;
  result = (System_Int32_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_17059/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v11 = value;
      if ( value )
      {
        v12 = ShopEntity___c_TypeInfo;
        if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
          v12 = ShopEntity___c_TypeInfo;
        }
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v11->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          _9__58_0 = v12->static_fields->__9__58_0;
          if ( !_9__58_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = ShopEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__58_0 = (System_Converter_object__int__o *)sub_1C1AE20(System_Converter_object__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__58_0,
              v15,
              Method_ShopEntity___c__GetAnotherPayItemIds_b__58_0__,
              0LL);
            static_fields = ShopEntity___c_TypeInfo->static_fields;
            static_fields->__9__58_0 = _9__58_0;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
              (int64_t)_9__58_0,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
          }
          v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            (System_Collections_Generic_List_object__o *)v11,
                                                            (System_Converter_T__TOutput__o *)_9__58_0,
                                                            (const MethodInfo_2ECF270 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( v23 )
            return System_Collections_Generic_List_int___ToArray(
                     v23,
                     (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        else
        {
          sub_1C1B0F0(v11);
        }
        sub_1C1AE30(v23, v24);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  ShopEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84B3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&PayType_Type_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_17062/*"anotherPayType"*/, v4);
    byte_4BC84B3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_17062/*"anotherPayType"*/,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1C1AE30(0LL, v6);
      if ( value->klass->_1.element_class == PayType_Type_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(value, PayType_Type_TypeInfo, v7, v8);
      }
      else
      {
        sub_1C1B0F0(value);
        LODWORD(script) = ShopEntity__GetRemainDays(v9, v10);
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
      sub_1C1AE38(CommonConsumeEntities, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_1C1AE30(CommonConsumeEntities, v3);
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
  __int64 v7; // x1

  if ( (byte_4BC84D3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC84D3 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v5);
  if ( !Master_object )
    sub_1C1AE30(ItemID, v7);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0LL);
}


System_String_o *__fastcall ShopEntity__GetCountText(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t setNum; // w19

  if ( (byte_4BC84B8 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    byte_4BC84B8 = 1;
  }
  setNum = this->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(setNum, 0LL);
}


int32_t __fastcall ShopEntity__GetExchangeSvtCoinType(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC84D4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19620/*"exchangeSvtCoinType"*/, method);
    byte_4BC84D4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19620/*"exchangeSvtCoinType"*/, 0, 0LL);
}


int32_t __fastcall ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC8499 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Convert_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1C1ABD4(&StringLiteral_19944/*"freeShopCondId"*/, v4);
    byte_4BC8499 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19944/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  ShopEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC849A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&long_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_19947/*"freeShopReleaseDate"*/, v4);
    byte_4BC849A = 1;
  }
  value = 0LL;
  result = (int64_t)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_19947/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_1C1AE30(0LL, v6);
      if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v7, v8);
      }
      else
      {
        sub_1C1B0F0(value);
        return ShopEntity__IsAfterTheFreeShopReleaseDate(v9, v10);
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
  int64_t v24; // x2
  char v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t purchaseType; // w9
  __int64 *v31; // x8
  int32_t v32; // w0
  System_String_o *v33; // x0
  System_String_o *v34; // x1
  System_String_o **v35; // x0
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v39; // x1
  unsigned int klass; // w8
  Il2CppObject *v41; // x21
  const MethodInfo *v42; // x1
  ServantEntity_o *v43; // x21
  System_String_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int64_t v50; // x2
  char v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  bool IsServantEquip; // w21
  int32_t setNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BC84B9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, nameText);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&int_TypeInfo, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C1ABD4(&StringLiteral_15047/*"UNIT_INFO"*/, v18);
    sub_1C1ABD4(&StringLiteral_12159/*"SERVANT_UNIT"*/, v19);
    sub_1C1ABD4(&StringLiteral_5862/*"EXCEPT_SERVANT_UNIT"*/, v20);
    sub_1C1ABD4(&StringLiteral_11810/*"SERVANT_EQUIP_UNIT"*/, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    byte_4BC84B9 = 1;
  }
  name = this->fields.name;
  *nameText = name;
  sub_1C1AB78(
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v39);
      if ( !MasterData_object )
        goto LABEL_41;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int32_t)Instance,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_41;
      klass = (unsigned int)Instance[3].klass;
      if ( klass <= 0xD && ((1 << klass) & 0x2026) != 0 )
      {
        *countText = 0LL;
        v35 = countText;
        v34 = 0LL;
        goto LABEL_17;
      }
      if ( isSend )
      {
        v32 = (_DWORD)this + 64;
        goto LABEL_11;
      }
      v34 = ItemEntity__GetCountText((ItemEntity_o *)Instance, this->fields.setNum, 0LL);
      *countText = v34;
      goto LABEL_16;
    case 2:
    case 3:
    case 5:
      if ( isSend )
        goto LABEL_10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_15047/*"UNIT_INFO"*/;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (v41 = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___),
                Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v42),
                !v41)
            || (Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                             (int32_t)Instance,
                             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
          {
LABEL_41:
            sub_1C1AE30(Instance, v37);
          }
          v43 = (ServantEntity_o *)Instance;
          if ( ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL)
            || ServantEntity__get_IsServantMaterialTd(v43, 0LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v31 = &StringLiteral_12159/*"SERVANT_UNIT"*/;
          }
          else
          {
            IsServantEquip = ServantEntity__get_IsServantEquip(v43, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( IsServantEquip )
              v31 = &StringLiteral_11810/*"SERVANT_EQUIP_UNIT"*/;
            else
              v31 = &StringLiteral_5862/*"EXCEPT_SERVANT_UNIT"*/;
          }
LABEL_32:
          v44 = LocalizationManager__Get((System_String_o *)*v31, 0LL);
          setNum = this->fields.setNum;
          v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &setNum, v45, v46, v47);
          v49 = System_String__Format(v44, v48, 0LL);
          *countText = v49;
          sub_1C1AB78((PartyOrganizationUtility_o *)countText, (int64_t)v49, v50, v51, v52, v53, v54, v55);
          return;
        }
LABEL_10:
        v32 = (_DWORD)this + 64;
LABEL_11:
        v33 = System_Int32__ToString(v32, 0LL);
        if ( v33 )
          v34 = v33;
        else
          v34 = (System_String_o *)StringLiteral_1/*""*/;
        *countText = v34;
      }
      else
      {
LABEL_15:
        *countText = (System_String_o *)StringLiteral_1/*""*/;
        v34 = (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_16:
      v35 = countText;
LABEL_17:
      sub_1C1AB78((PartyOrganizationUtility_o *)v35, (int64_t)v34, v24, v25, v26, v27, v28, v29);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v20; // x8
  System_Object_array *v21; // x21
  System_Predicate_object__o *_9__49_0; // x24
  Il2CppObject *v23; // x25
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *v31; // x21
  DataManager_o *v32; // x22
  struct System_Int32_array *targetIds; // x24
  __int64 v34; // x8
  DataManager_o *v35; // x20
  unsigned __int64 v36; // x25
  bool v37; // w27
  int32_t v38; // w28
  int m_CancellationTokenSource; // w8
  int v40; // w9
  __int64 v41; // x10
  int v42; // w8
  unsigned int v43; // w29
  __int64 v44; // x8
  __int64 v45; // x19
  __int64 v46; // x23
  int v47; // w8
  unsigned int v48; // w29
  __int64 v49; // x8
  __int64 v50; // x19
  __int64 v51; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4BC84A9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_FindAll_UserPresentBoxEntity___, isWithoutPresents);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C1ABD4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, v12);
    sub_1C1ABD4(&ShopEntity___c_TypeInfo, v13);
    byte_4BC84A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v17 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v18 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
    byte_4BC2585 = 1;
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
                0LL);
  v20 = ShopEntity___c_TypeInfo;
  v21 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v20 = ShopEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Predicate_object__o *)v20->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ShopEntity___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__49_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__49_0, v23, Method_ShopEntity___c__GetIsAlreadyInPossession_b__49_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__49_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  Instance = (DataManager_o *)System_Array__FindAll_object_(
                                v21,
                                (System_Predicate_T__o *)_9__49_0,
                                (const MethodInfo_309A94C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v17
    || (v31 = Instance,
        Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)v17, 0LL),
        !v18)
    || (v32 = Instance,
        Instance = (DataManager_o *)UserServantStorageMaster__getServantEquipList(
                                      (UserServantStorageMaster_o *)v18,
                                      0LL),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_53:
    sub_1C1AE30(Instance, v15);
  }
  v34 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v34 < 1 )
    return 0;
  v35 = Instance;
  v36 = 0LL;
  v37 = v31 == 0LL || isWithoutPresents;
  while ( 1 )
  {
    if ( v36 >= (unsigned int)v34 )
      goto LABEL_54;
    v38 = targetIds->m_Items[v36 + 1];
    if ( !v37 )
    {
      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource >= 1 )
        break;
    }
LABEL_32:
    if ( !v32 )
      goto LABEL_53;
    v42 = (int)v32->fields.m_CancellationTokenSource;
    if ( v42 >= 1 )
    {
      v43 = 0;
      while ( v43 < v42 )
      {
        v44 = *((_QWORD *)&v32->fields._DispLog + (int)v43);
        if ( !v44 )
          goto LABEL_53;
        v46 = *(_QWORD *)(v44 + 80);
        v45 = *(_QWORD *)(v44 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v46;
        *(_QWORD *)&v53.fields.fakeValue = v45;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v53, 0LL);
        if ( v38 == (_DWORD)Instance )
          return 1;
        v42 = (int)v32->fields.m_CancellationTokenSource;
        if ( (int)++v43 >= v42 )
          goto LABEL_41;
      }
LABEL_54:
      sub_1C1AE38(Instance, v15);
    }
LABEL_41:
    if ( !v35 )
      goto LABEL_53;
    v47 = (int)v35->fields.m_CancellationTokenSource;
    if ( v47 >= 1 )
    {
      v48 = 0;
      while ( v48 < v47 )
      {
        v49 = *((_QWORD *)&v35->fields._DispLog + (int)v48);
        if ( !v49 )
          goto LABEL_53;
        v51 = *(_QWORD *)(v49 + 80);
        v50 = *(_QWORD *)(v49 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v51;
        *(_QWORD *)&v54.fields.fakeValue = v50;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v54, 0LL);
        if ( v38 == (_DWORD)Instance )
          return 1;
        v47 = (int)v35->fields.m_CancellationTokenSource;
        if ( (int)++v48 >= v47 )
          goto LABEL_50;
      }
      goto LABEL_54;
    }
LABEL_50:
    LODWORD(v34) = targetIds->max_length;
    if ( (__int64)++v36 >= (int)v34 )
      return 0;
  }
  v40 = 0;
  while ( 1 )
  {
    if ( m_CancellationTokenSource == v40 )
      goto LABEL_54;
    v41 = *((_QWORD *)&v31->fields._DispLog + v40);
    if ( !v41 )
      goto LABEL_53;
    if ( v38 == *(_DWORD *)(v41 + 76) )
      return 1;
    if ( m_CancellationTokenSource == ++v40 )
      goto LABEL_32;
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4BC84A8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84A8 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C1AE30(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0LL);
  return EntityDefinitely && !UserShopEntity__get_IsReceivedShopItem(EntityDefinitely, 0LL);
}


int32_t __fastcall ShopEntity__GetItemCount(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C1AE30(this, method);
  return itemIds->max_length;
}


int32_t __fastcall ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C1AE30(this, method);
  if ( !itemIds->max_length )
    sub_1C1AE38(this, method);
  return itemIds->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8

  itemIds = this->fields.itemIds;
  if ( !itemIds )
    sub_1C1AE30(this, num);
  if ( itemIds->max_length <= num )
    sub_1C1AE38(this, *(_QWORD *)&num);
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
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v24; // x1
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BC84BB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SetItemMaster___, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BC84BB = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SetItemMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v24);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (v19 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___),
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v20),
              !v19)
          || (Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                           (int32_t)Instance,
                           (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
        {
LABEL_19:
          sub_1C1AE30(Instance, v18);
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
  if ( (byte_4BC84CF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22787/*"overwriteName"*/, defaultValue);
    byte_4BC84CF = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22787/*"overwriteName"*/,
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
    sub_1C1AE30(this, method);
  if ( !prices->max_length )
    sub_1C1AE38(this, method);
  return prices->m_Items[1];
}


int32_t __fastcall ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 0xD )
    return 1;
  else
    return dword_C3588C[v2];
}


int32_t __fastcall ShopEntity__GetPriceUnitIcon(ShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = this->fields.payType - 1;
  if ( (unsigned int)v2 > 9 )
    return 1;
  else
    return dword_C35864[v2];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  struct System_Int32_array *prices; // x8

  prices = this->fields.prices;
  if ( !prices )
    sub_1C1AE30(this, num);
  if ( prices->max_length <= num )
    sub_1C1AE38(this, *(_QWORD *)&num);
  return prices->m_Items[num + 1];
}


int32_t __fastcall ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BC84B7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, v6);
}


ServantEntity_o *__fastcall ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int max_length; // w8
  __int64 v10; // x9
  ShopReleaseEntity_o *v11; // x19
  struct System_Int32_array *condValues; // x8
  __int64 v14; // x9

  if ( (byte_4BC84C7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC84C7 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0LL;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v8);
  if ( !Instance )
    return 0LL;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_23;
    v11 = Instance->m_Items[v10];
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.condType == 8 )
      break;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  condValues = v11->fields.condValues;
  if ( condValues && (v14 = *(_QWORD *)&condValues->max_length) != 0 )
  {
    if ( !(_DWORD)v14 )
LABEL_23:
      sub_1C1AE38(Instance, v7);
    v7 = (unsigned int)condValues->m_Items[1];
  }
  else
  {
    v7 = 0LL;
  }
  if ( !Instance )
LABEL_22:
    sub_1C1AE30(Instance, v7);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              v7,
                              (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84B4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&StringLiteral_8408/*"LIMITED_SHOP_REMAIN_DAYS"*/, v3);
    sub_1C1ABD4(&StringLiteral_8883/*"MONTHLY_SHOP_REMAIN_DAYS"*/, v4);
    sub_1C1ABD4(&StringLiteral_23251/*"remainDays"*/, v5);
    byte_4BC84B4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23251/*"remainDays"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v11 = &StringLiteral_8408/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v11 = &StringLiteral_8883/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v11, 0LL);
  }
  if ( !value )
    sub_1C1AE30(0LL, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x22
  const MethodInfo *v23; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *v26; // x24
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x6
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v30; // x1
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BC84BA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, buyItemNum);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SetItemMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopGroupMaster___, v16);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BC84BA = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SetItemMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v30);
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
          0LL);
        return;
      case 6:
        goto LABEL_26;
      default:
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_31;
        v26 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v27);
        if ( !v26 )
          goto LABEL_31;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v26,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          v28);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v22 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___),
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v23),
          !v22)
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                       (int32_t)Instance,
                       (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
LABEL_31:
      sub_1C1AE30(Instance, v21);
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

  if ( (byte_4BC849B & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC849B = 1;
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BC84A1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84A1 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v9);
  }
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Instance, this->fields.id, v10);
}


bool __fastcall ShopEntity__IsAnotherItemBuyable(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  DataManager_o *AnotherPayItemIds; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v12; // x1
  char v13; // w8
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC84B0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC84B0 = 1;
  }
  entity = 0LL;
  if ( !ShopEntity__GetAnotherPayItemIds(this, method) )
    goto LABEL_29;
  AnotherPayItemIds = (DataManager_o *)ShopEntity__GetAnotherPayItemIds(this, v7);
  if ( !AnotherPayItemIds )
    goto LABEL_32;
  if ( !LODWORD(AnotherPayItemIds->fields.m_CancellationTokenSource) )
    sub_1C1AE38(AnotherPayItemIds, v9);
  v10 = *(_DWORD *)&AnotherPayItemIds->fields._DispLog;
  if ( v10 < 1 )
    goto LABEL_29;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
  }
  AnotherPayItemIds = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    AnotherPayItemIds = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_32:
    sub_1C1AE30(AnotherPayItemIds, v9);
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)Master_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&AnotherPayItemIds[1].fields._DispLog + 64LL),
    v10,
    0LL);
  v13 = (char)entity;
  if ( !entity )
    return v13 & 1;
  if ( entity->fields.num < 1 || !ShopEntity__IsAnotherPayCommonReleaseOpen(this, v12) )
  {
LABEL_29:
    v13 = 0;
    return v13 & 1;
  }
  AnotherPayItemIds = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        AnotherPayItemIds,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
  }
  AnotherPayItemIds = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    AnotherPayItemIds = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_32;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&AnotherPayItemIds[1].fields._DispLog + 64LL),
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
  __int64 v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84B1 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Convert_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_24769/*"useAnotherPayCommonReleaseId"*/, v6);
    byte_4BC84B1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24769/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v8 = value;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v9 = System_Convert__ToInt32(v8, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
    {
      sub_1C1AE30(Instance, v11);
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
  if ( (byte_4BC84A3 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, nowTime);
    byte_4BC84A3 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v10; // w10
  bool v11; // w8

  if ( (byte_4BC84B5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84B5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
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
                                      0LL)) == 0LL )
  {
LABEL_15:
    sub_1C1AE30(Instance, v6);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v10 = m_CancellationTokenSource_high > 0;
  v11 = m_CancellationTokenSource_high >= limitNum;
  if ( limitNum >= 1 )
    return v11;
  else
    return v10;
}


bool __fastcall ShopEntity__IsCondType_41117680(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t m_CancellationTokenSource_high; // w8
  int32_t limitNum; // w9
  bool v10; // w10
  bool v11; // w8

  if ( (byte_4BC84B6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, userId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC84B6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                      (UserShopMaster_o *)Instance,
                                      userId,
                                      this->fields.baseShopId,
                                      0LL)) == 0LL )
  {
    sub_1C1AE30(Instance, v7);
  }
  m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
  limitNum = this->fields.limitNum;
  v10 = m_CancellationTokenSource_high > 0;
  v11 = m_CancellationTokenSource_high >= limitNum;
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool v11; // w0
  const MethodInfo *v12; // x1
  int32_t costumeId[2]; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4BC849F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C1ABD4(&StringLiteral_19944/*"freeShopCondId"*/, v5);
    byte_4BC849F = 1;
  }
  value = 0LL;
  *(_QWORD *)costumeId = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19944/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v7)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v10);
  }
  v11 = ServantCostumeReleaseMaster__checkItemHaving(
          (ServantCostumeReleaseMaster_o *)Instance,
          costumeId[1],
          costumeId[0],
          0LL);
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
  Il2CppObject *MasterData_object; // x21
  bool v13; // w21
  int64_t closedAt; // x8
  const MethodInfo *v15; // x2
  UserEventEntity_o *v17; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4BC84A0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC84A0 = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_31;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_19;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
    byte_4BC2585 = 1;
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
          &v17,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          0LL) )
    goto LABEL_19;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_31;
  v13 = 1;
  if ( !UserEventEntity__getEventFlag(v17, 1, 0LL) )
  {
LABEL_19:
    if ( !Time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
    }
    if ( Time < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && Time > closedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, v15);
    }
LABEL_31:
    sub_1C1AE30(Instance, v11);
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
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v13; // x20
  const MethodInfo *v14; // x1
  int v15; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *v18; // x19
  char v19; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BC84D2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__, v5);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC84D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v14),
        !v13)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v13, (int32_t)Instance, 0LL),
        !MasterData_object)
    || (v15 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].monitor) == 0LL) )
  {
    sub_1C1AE30(Instance, v11);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v18 = Enumerator;
  v19 = 0;
  while ( 1 )
  {
    if ( !v18 )
      sub_1C1AE30(Enumerator, v17);
    klass = v18->klass;
    v21 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C6CBB4(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v18,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = v18->klass;
    v25 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_21;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_21:
      v27 = sub_1C6CBB4(v18, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  v18,
                                                                  *(_QWORD *)(v27 + 8));
    if ( !Enumerator )
      sub_1C1AE30(0LL, v17);
    if ( LODWORD(Enumerator[6].klass) == v15 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0LL);
      v19 |= (unsigned __int8)Enumerator;
    }
  }
  v28 = v18->klass;
  v29 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C6CBB4(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v18, *(_QWORD *)(v31 + 8));
  return v19 & 1;
}


bool __fastcall ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84AF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&StringLiteral_23251/*"remainDays"*/, v3);
    byte_4BC84AF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23251/*"remainDays"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_1C1AE30(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4BC849C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C1ABD4(&StringLiteral_19944/*"freeShopCondId"*/, v5);
    byte_4BC849C = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_19944/*"freeShopCondId"*/,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v8),
        !MasterData_object) )
  {
LABEL_10:
    sub_1C1AE30(script, method);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0LL, 0, 0LL);
}


bool __fastcall ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4BC84AB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84AB = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C1AE30(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4BC84AC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84AC = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C1AE30(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84AD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&StringLiteral_23251/*"remainDays"*/, v3);
    byte_4BC84AD = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23251/*"remainDays"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_1C1AE30(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BC84AE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C1ABD4(&StringLiteral_23251/*"remainDays"*/, v3);
    byte_4BC84AE = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23251/*"remainDays"*/,
          &value,
          (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_1C1AE30(0LL, v5);
  v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                            value,
                            value->klass->vtable[4].methodPtr);
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
  const MethodInfo *v14; // x2
  _BOOL8 v15; // x0
  __int64 v16; // x1
  bool v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC84CB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC84CB = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = (DataManager_o *)ShopReleaseMaster__GetNotClearShopReleaseEntity(
                                      (ShopReleaseMaster_o *)Instance,
                                      this->fields.id,
                                      v14)) == 0LL )
  {
    sub_1C1AE30(Instance, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ShopReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__MoveNext__);
    v17 = v15;
    if ( !v15 )
      break;
    if ( !v19.fields._current )
      sub_1C1AE30(v15, v16);
    if ( HIDWORD(v19.fields._current[1].klass) == 37 )
    {
      v18 = 6;
      goto LABEL_18;
    }
  }
  v18 = 2;
LABEL_18:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ShopReleaseEntity__Dispose__);
  return v17 && v18 == 6;
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
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v13; // x21
  bool IsTimeStatusRecord; // w0
  bool v15; // w22
  const MethodInfo *v16; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_4BC84A2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, nowTime);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC84A2 = 1;
  }
  entity = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_30;
  v13 = UserEventMaster__GetEntity(
          (UserEventMaster_o *)MasterData_object,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_30;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_30;
    IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
    if ( !v13 || IsTimeStatusRecord )
      goto LABEL_24;
  }
  else if ( !v13 )
  {
LABEL_24:
    if ( Time < this->fields.openedAt )
      return 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
      if ( Instance )
        return ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, v16);
    }
LABEL_30:
    sub_1C1AE30(Instance, v11);
  }
  v15 = 1;
  if ( !UserEventEntity__getEventFlag(v13, 1, 0LL) )
    goto LABEL_24;
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
  int64_t Instance; // x0
  const MethodInfo *v31; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v33; // x22
  Il2CppObject *v34; // x21
  UserShopEntity_o *v35; // x26
  int64_t updatedAt; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  int64_t v39; // x25
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  bool v42; // w27
  CommonReleaseEntity_array *List; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x24
  ShopEntity___c_c *v45; // x0
  System_Func_object__bool__o *_9__36_0; // x25
  char v47; // w8
  Il2CppObject *v48; // x26
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Object_array *v57; // x25
  System_Collections_Generic_List_object__o *v58; // x24
  int max_length; // w8
  unsigned int v60; // w26
  Il2CppObject *v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  int64_t v71; // x1
  Il2CppClass **v72; // x0
  ShopEntity___c_c *v73; // x0
  System_Func_object__bool__o *_9__36_1; // x22
  Il2CppObject *v75; // x23
  struct ShopEntity___c_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  ShopEntity___c_c *v83; // x0
  System_Func_object__bool__o *_9__36_2; // x22
  Il2CppObject *v85; // x23
  struct ShopEntity___c_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  ShopEntity___c_c *v94; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x22
  System_Func_T__TResult__o *_9__36_3; // x23
  Il2CppObject *v97; // x24
  struct ShopEntity___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  const MethodInfo_3759490 *v105; // x3
  bool v106; // w20
  int32_t FreeShopCondId; // w0
  bool result; // w0
  ShopEntity_o *v109; // x0
  int32_t *v110; // x1
  int32_t *v111; // x2
  const MethodInfo *v112; // x3
  UserShopEntity_o *v113; // [xsp+10h] [xbp-90h]
  int64_t v114; // [xsp+18h] [xbp-88h]
  CommonReleaseMaster_o *v115; // [xsp+28h] [xbp-78h]
  __int64 v116; // [xsp+30h] [xbp-70h] BYREF
  int64_t v117; // [xsp+38h] [xbp-68h]
  System_Nullable_long__o v118; // 0:x0.16

  if ( (byte_4BC849E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_UserQuestEntity___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Min_UserQuestEntity___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_UserQuestEntity___, v10);
    sub_1C1ABD4(&System_Func_UserQuestEntity__long__TypeInfo, v11);
    sub_1C1ABD4(&System_Func_UserQuestEntity__bool__TypeInfo, v12);
    sub_1C1ABD4(&System_Func_CommonReleaseEntity__bool__TypeInfo, v13);
    sub_1C1ABD4(&long_TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v18);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_System_Nullable_long__GetValueOrDefault__, v20);
    sub_1C1ABD4(&Method_System_Nullable_long___ctor__, v21);
    sub_1C1ABD4(&Method_System_Nullable_long__get_HasValue__, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C1ABD4(&Method_ShopEntity___c__IsPaidExchange_b__36_0__, v24);
    sub_1C1ABD4(&Method_ShopEntity___c__IsPaidExchange_b__36_1__, v25);
    sub_1C1ABD4(&Method_ShopEntity___c__IsPaidExchange_b__36_2__, v26);
    sub_1C1ABD4(&Method_ShopEntity___c__IsPaidExchange_b__36_3__, v27);
    sub_1C1ABD4(&ShopEntity___c_TypeInfo, v28);
    sub_1C1ABD4(&StringLiteral_19947/*"freeShopReleaseDate"*/, v29);
    byte_4BC849E = 1;
  }
  v116 = 0LL;
  v117 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v34 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v31);
    byte_4BC2585 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_75;
  Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                        (UserShopMaster_o *)v34,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        this->fields.id,
                        0LL);
  if ( !Instance )
    goto LABEL_75;
  v35 = (UserShopEntity_o *)Instance;
  Instance = (int64_t)this->fields.script;
  if ( !Instance )
    goto LABEL_75;
  updatedAt = v35->fields.updatedAt;
  Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                        (Il2CppObject *)StringLiteral_19947/*"freeShopReleaseDate"*/,
                        (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(Il2CppClass **)(*(_QWORD *)Instance + 64LL) == long_TypeInfo->_1.element_class )
  {
    v39 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v37, v38);
    v42 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v40) || UserShopEntity__get_IsReturnRarePriShop(v35, 0LL);
    Instance = ShopEntity__GetFreeShopCondId(this, v41);
    if ( !MasterData_object )
      goto LABEL_75;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, Instance, 0LL);
    if ( List )
    {
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v115 = (CommonReleaseMaster_o *)MasterData_object;
      v113 = v35;
      v114 = v39;
      v45 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v45 = ShopEntity___c_TypeInfo;
      }
      _9__36_0 = (System_Func_object__bool__o *)v45->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = ShopEntity___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__36_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_0, v48, Method_ShopEntity___c__IsPaidExchange_b__36_0__, 0LL);
        static_fields = ShopEntity___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__36_0;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
          (int64_t)_9__36_0,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      v56 = System_Linq_Enumerable__Where_object_(
              v44,
              (System_Func_TSource__bool__o *)_9__36_0,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v57 = System_Linq_Enumerable__ToArray_object_(
              v56,
              (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v58 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v58,
        (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v57 )
        goto LABEL_75;
      max_length = v57->max_length;
      if ( max_length >= 1 )
      {
        v60 = 0;
        while ( 1 )
        {
          if ( v60 >= max_length )
            sub_1C1AE38(Instance, v31);
          v61 = v57->m_Items[v60];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v31);
            byte_4BC2585 = 1;
          }
          Instance = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !v61 || !v33 )
            break;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                (UserQuestMaster_o *)v33,
                                *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                                (int32_t)v61[2].klass,
                                0LL);
          if ( Instance )
          {
            if ( !v58 )
              break;
            items = v58->fields._items;
            v69 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v58->fields._version;
            if ( !items )
              break;
            size = v58->fields._size;
            v71 = Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v58,
                (Il2CppObject *)Instance,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = &items->obj.klass + size;
              v58->fields._size = size + 1;
              v72[4] = (Il2CppClass *)v71;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v72 + 4), v71, v62, v63, v64, v65, v66, v67);
            }
          }
          max_length = v57->max_length;
          if ( (int)++v60 >= max_length )
            goto LABEL_49;
        }
LABEL_75:
        sub_1C1AE30(Instance, v31);
      }
LABEL_49:
      v116 = 0LL;
      v117 = 0LL;
      if ( !v58 )
        goto LABEL_75;
      v39 = v114;
      if ( v58->fields._size < 1 )
        goto LABEL_72;
      v73 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v73 = ShopEntity___c_TypeInfo;
      }
      _9__36_1 = (System_Func_object__bool__o *)v73->static_fields->__9__36_1;
      if ( !_9__36_1 )
      {
        if ( !v73->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v73);
          v73 = ShopEntity___c_TypeInfo;
        }
        v75 = (Il2CppObject *)v73->static_fields->__9;
        _9__36_1 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_1, v75, Method_ShopEntity___c__IsPaidExchange_b__36_1__, 0LL);
        v76 = ShopEntity___c_TypeInfo->static_fields;
        v76->__9__36_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_1;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v76->__9__36_1, (int64_t)_9__36_1, v77, v78, v79, v80, v81, v82);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v58,
              (System_Func_T__bool__o *)_9__36_1,
              (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_72;
      v83 = ShopEntity___c_TypeInfo;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v83 = ShopEntity___c_TypeInfo;
      }
      _9__36_2 = (System_Func_object__bool__o *)v83->static_fields->__9__36_2;
      if ( !_9__36_2 )
      {
        if ( !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          v83 = ShopEntity___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v83->static_fields->__9;
        _9__36_2 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__36_2, v85, Method_ShopEntity___c__IsPaidExchange_b__36_2__, 0LL);
        v86 = ShopEntity___c_TypeInfo->static_fields;
        v86->__9__36_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__36_2;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v86->__9__36_2, (int64_t)_9__36_2, v87, v88, v89, v90, v91, v92);
      }
      v93 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v58,
              (System_Func_TSource__bool__o *)_9__36_2,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v94 = ShopEntity___c_TypeInfo;
      v95 = v93;
      if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
        v94 = ShopEntity___c_TypeInfo;
      }
      _9__36_3 = (System_Func_T__TResult__o *)v94->static_fields->__9__36_3;
      if ( !_9__36_3 )
      {
        if ( !v94->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v94);
          v94 = ShopEntity___c_TypeInfo;
        }
        v97 = (Il2CppObject *)v94->static_fields->__9;
        _9__36_3 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__36_3, v97, Method_ShopEntity___c__IsPaidExchange_b__36_3__, 0LL);
        v98 = ShopEntity___c_TypeInfo->static_fields;
        v98->__9__36_3 = (struct System_Func_UserQuestEntity__long__o *)_9__36_3;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v98->__9__36_3, (int64_t)_9__36_3, v99, v100, v101, v102, v103, v104);
      }
      v118.fields.value = System_Linq_Enumerable__Min_object__50102248(
                            v95,
                            (System_Func_TSource__long__o *)_9__36_3,
                            (const MethodInfo_2FC7FE8 *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v118.fields.hasValue = &v116;
      System_Nullable_long____ctor(v118, Method_System_Nullable_long___ctor__, v105);
      if ( (_BYTE)v116 )
        v106 = v117 > v113->fields.updatedAt;
      else
LABEL_72:
        v106 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v31);
      v47 = v106 | !CommonReleaseMaster__IsOpen(v115, FreeShopCondId, 0LL, 0, 0LL);
    }
    else
    {
      v47 = 1;
    }
    return (v42 || updatedAt < v39) | v47;
  }
  else
  {
    sub_1C1B0F0(Instance);
    ShopEntity__SetSvtIdAndCostumeId(v109, v110, v111, v112);
  }
  return result;
}


bool __fastcall ShopEntity__IsPossessionInfoDisp(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC84D0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21168/*"isPossessionInfoDisp"*/, method);
    byte_4BC84D0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21168/*"isPossessionInfoDisp"*/, 0LL);
}


bool __fastcall ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BC84A4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC84A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v9);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, v10);
}


bool __fastcall ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v10; // x21
  struct System_Int32_array *targetIds; // x24
  __int64 v12; // x8
  UserQuestMaster_o *v13; // x20
  unsigned __int64 v14; // x25
  int32_t v15; // w22
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC84A6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC84A6 = 1;
  }
  entity = 0LL;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
      byte_4BC2585 = 1;
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
                         0LL);
    if ( EntityDefinitely )
    {
      v10 = EntityDefinitely;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      v12 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = (UserQuestMaster_o *)Instance;
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
            sub_1C1AE38(Instance, v7);
          v15 = targetIds->m_Items[v14 + 1];
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
            byte_4BC2585 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v13 )
            break;
          Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                        v13,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v15,
                                        0LL);
          if ( !entity )
            goto LABEL_28;
          LODWORD(v12) = targetIds->max_length;
          if ( (__int64)++v14 >= (int)v12 )
            goto LABEL_27;
        }
LABEL_30:
        sub_1C1AE30(Instance, v7);
      }
LABEL_27:
      LOBYTE(EntityDefinitely) = v10->fields.num > 0;
    }
  }
  else
  {
LABEL_28:
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
  Il2CppObject *Master_object; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  void *All_object; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  ShopEntity___c_c *v15; // x8
  System_Object_array *v16; // x22
  System_Predicate_object__o *_9__50_0; // x23
  Il2CppObject *v18; // x24
  struct ShopEntity___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Int32_array *targetIds; // x23
  __int64 v27; // x8
  _DWORD *v28; // x21
  unsigned __int64 v29; // x24
  char *v30; // x26
  int32_t v31; // w22
  int v32; // w8
  __int64 v33; // x9
  __int64 v34; // x10
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC84AA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_FindAll_UserPresentBoxEntity___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&System_Predicate_UserPresentBoxEntity__TypeInfo, v7);
    sub_1C1ABD4(&Method_ShopEntity___c__IsServantGet_b__50_0__, v8);
    sub_1C1ABD4(&ShopEntity___c_TypeInfo, v9);
    byte_4BC84AA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
    byte_4BC2585 = 1;
  }
  All_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    All_object = NetworkManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_43;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)v12,
                *(_QWORD *)(*((_QWORD *)All_object + 23) + 64LL),
                0LL);
  v15 = ShopEntity___c_TypeInfo;
  v16 = (System_Object_array *)VaildList;
  if ( !ShopEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo);
    v15 = ShopEntity___c_TypeInfo;
  }
  _9__50_0 = (System_Predicate_object__o *)v15->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ShopEntity___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__50_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__50_0, v18, Method_ShopEntity___c__IsServantGet_b__50_0__, 0LL);
    static_fields = ShopEntity___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__50_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
      (int64_t)_9__50_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  All_object = System_Array__FindAll_object_(
                 v16,
                 (System_Predicate_T__o *)_9__50_0,
                 (const MethodInfo_309A94C *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
LABEL_43:
    sub_1C1AE30(All_object, v11);
  v27 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v27 < 1 )
    return 0;
  v28 = All_object;
  v29 = 0LL;
  v30 = (char *)All_object + 32;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v27 )
      goto LABEL_42;
    v31 = targetIds->m_Items[v29 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
      byte_4BC2585 = 1;
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
                           v31,
                           0LL);
    if ( entity )
    {
      if ( entity->fields.status == 2 )
        return 1;
    }
    if ( v28 )
    {
      v32 = v28[6];
      if ( v32 >= 1 )
      {
        v33 = 0LL;
        while ( (unsigned int)v33 < v32 )
        {
          v34 = *(_QWORD *)&v30[8 * v33];
          if ( !v34 )
            goto LABEL_43;
          if ( v31 == *(_DWORD *)(v34 + 76) )
            return 1;
          if ( (int)++v33 >= v32 )
            goto LABEL_38;
        }
LABEL_42:
        sub_1C1AE38(All_object, v11);
      }
    }
LABEL_38:
    LODWORD(v27) = targetIds->max_length;
    if ( (__int64)++v29 >= (int)v27 )
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

  if ( (byte_4BC849D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, isInPreparation);
    sub_1C1ABD4(&StringLiteral_19944/*"freeShopCondId"*/, v5);
    byte_4BC849D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19944/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4BC84A7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84A7 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_16;
  if ( this->fields.limitNum < 1 )
  {
LABEL_17:
    LOBYTE(EntityDefinitely) = 0;
    return (char)EntityDefinitely;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_19:
    sub_1C1AE30(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.num >= this->fields.limitNum || ShopEntity__isNotShopPurchase(this, v9) )
    {
LABEL_16:
      LOBYTE(EntityDefinitely) = 1;
      return (char)EntityDefinitely;
    }
    goto LABEL_17;
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
    sub_1C1AE38(this, svtId);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
LABEL_5:
    sub_1C1AE30(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_63059372((System_String_o *)this, 0, this->fields.id - 2, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BC84A5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, message);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC84A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v9);
  }
  return ShopReleaseMaster__TryGetClosedMessage(
           (ShopReleaseMaster_o *)Instance,
           message,
           itemName,
           this->fields.id,
           v10);
}


bool __fastcall ShopEntity__checkFlag(ShopEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall ShopEntity__checkHoldDisp(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  int32_t TargetId; // w0

  if ( (byte_4BC84BC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84BC = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v7),
        !MasterData_object) )
  {
    sub_1C1AE30(Instance, v5);
  }
  if ( ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
    return 0;
  TargetId = ShopEntity__get_TargetId(this, v8);
  return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0LL);
}


int32_t __fastcall ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t *p_m_CancellationTokenSource; // x8
  int32_t TargetId; // w0
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  Il2CppObject *v16; // x20
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4BC84BD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC84BD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !MasterData_object )
    goto LABEL_25;
  if ( !ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0LL) )
  {
    TargetId = ShopEntity__get_TargetId(this, v10);
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
      v14 = ShopEntity__get_TargetId(this, v13);
      if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v14, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v16 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
            byte_4BC2585 = 1;
          }
          v17 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v17 = NetworkManager_TypeInfo;
          }
          userIdNumber = v17->static_fields->userIdNumber;
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v15);
          if ( v16 )
          {
            Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)v16,
                                          userIdNumber,
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
LABEL_25:
    sub_1C1AE30(Instance, v7);
  }
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_25;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  ServantEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC84CE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC84CE = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v11);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0LL);
    }
LABEL_21:
    sub_1C1AE30(Instance, v10);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v15);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          (Il2CppObject **)&v17,
          (int32_t)entity[4].klass,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v17, 0LL) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v16);
  else
    return this->fields.name;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C1AE30(this, id);
  if ( targetIds->max_length <= id )
    sub_1C1AE38(this, *(_QWORD *)&id);
  return targetIds->m_Items[id + 1];
}


int32_t __fastcall ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C1AE30(this, method);
  if ( !targetIds->max_length )
    sub_1C1AE38(this, method);
  return targetIds->m_Items[1];
}


int32_t __fastcall ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_1C1AE30(this, method);
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
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v11; // x21
  struct System_Int32_array *targetIds; // x8
  int max_length; // w27
  int32_t v14; // w25
  const MethodInfo *v15; // x2
  int v16; // w8
  int64_t v17; // x26
  _BOOL4 v18; // w28
  int i; // w29
  __int64 v20; // x24
  int v21; // w22
  NetworkManager_c *v22; // x0
  int64_t userIdNumber; // x26
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  UserQuestEntity_o *v27; // x26
  Il2CppObject *Entity; // x0
  const MethodInfo *v29; // x1
  char v31; // w8
  int64_t v32; // [xsp+0h] [xbp-70h]
  QuestReleaseMaster_o *v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4BC84BE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC84BE = 1;
  }
  if ( this->fields.purchaseType != 6 )
  {
LABEL_40:
    v31 = 0;
    return v31 & 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  targetIds = this->fields.targetIds;
  v33 = (QuestReleaseMaster_o *)Instance;
  if ( !targetIds )
    goto LABEL_42;
  max_length = targetIds->max_length;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  v32 = Instance;
  if ( max_length < 1 )
  {
LABEL_39:
    v31 = 1;
    return v31 & 1;
  }
  if ( !v33 )
LABEL_42:
    sub_1C1AE30(Instance, v9);
  v14 = 0;
  while ( 1 )
  {
    Instance = (int64_t)QuestReleaseMaster__getListByType(v33, 13, 0LL);
    if ( !Instance )
      goto LABEL_42;
    v16 = *(_DWORD *)(Instance + 24);
    v17 = Instance;
    v18 = v16 > 0;
    if ( v16 >= 1 )
    {
      for ( i = 0; i < v16; v18 = ++i < v16 )
      {
        if ( i >= (unsigned int)v16 )
          sub_1C1AE38(Instance, v9);
        v20 = *(_QWORD *)(v17 + 8LL * i + 32);
        if ( !v20 )
          goto LABEL_42;
        v21 = *(_DWORD *)(v20 + 16);
        Instance = ShopEntity__getTargetId(this, v14, v15);
        if ( v21 == (_DWORD)Instance )
        {
          if ( !v11 )
            goto LABEL_42;
          Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v11, *(_DWORD *)(v20 + 16), 0LL);
          if ( !Instance )
            goto LABEL_42;
          Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0LL);
          if ( (Instance & 1) == 0 )
            break;
        }
        v16 = *(_DWORD *)(v17 + 24);
      }
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
      byte_4BC2585 = 1;
    }
    v22 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v22 = NetworkManager_TypeInfo;
    }
    userIdNumber = v22->static_fields->userIdNumber;
    Instance = ShopEntity__getTargetId(this, v14, v15);
    if ( !MasterData_object )
      goto LABEL_42;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, userIdNumber, Instance, 0LL);
    if ( EntityFromId )
      break;
    Instance = ShopEntity__getTargetId(this, v14, v26);
    if ( !v11 )
      goto LABEL_42;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
               Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) < v32
      || ((v18 | ShopEntity__IsEventQuest(this, v29)) & 1) != 0 )
    {
      goto LABEL_40;
    }
LABEL_38:
    if ( ++v14 == max_length )
      goto LABEL_39;
  }
  v27 = EntityFromId;
  if ( ShopEntity__IsEventQuest(this, v25) )
    goto LABEL_40;
  if ( v27->fields.expireAt >= v32 )
    goto LABEL_38;
  v31 = !v18;
  return v31 & 1;
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

  if ( (byte_4BC84CD & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, buyCount);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC84CD = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_41:
    sub_1C1AE30(Instance, v12);
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
      sub_1C1AE38(Instance, v12);
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
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  ShopReleaseEntity_array *v9; // x19
  __int64 v10; // x24
  ShopReleaseEntity_o *v11; // x20
  int32_t condType; // w21
  struct System_Int32_array *condValues; // x8
  __int64 v14; // x9
  int32_t v15; // w22
  int64_t condNum; // x23
  bool isClosedDisp; // w8

  if ( (byte_4BC84C8 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC84C8 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v7)) == 0LL )
  {
LABEL_26:
    sub_1C1AE30(Instance, v6);
  }
  v8 = *(_QWORD *)&Instance->max_length;
  v9 = Instance;
  if ( (int)v8 < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= (unsigned int)v8 )
LABEL_27:
      sub_1C1AE38(Instance, v6);
    v11 = v9->m_Items[v10];
    if ( !v11 )
      goto LABEL_26;
    condType = v11->fields.condType;
    if ( (unsigned int)(condType - 110) > 2 )
      goto LABEL_21;
    condValues = v11->fields.condValues;
    if ( condValues && (v14 = *(_QWORD *)&condValues->max_length) != 0 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_27;
      v15 = condValues->m_Items[1];
    }
    else
    {
      v15 = 0;
    }
    condNum = v11->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (ShopReleaseEntity_array *)CondType__IsTotalTdLvCond(condType, v15, condNum, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    v8 = *(_QWORD *)&v9->max_length;
LABEL_21:
    if ( (int)++v10 >= (int)v8 )
      return 0;
  }
  isClosedDisp = v11->fields.isClosedDisp;
  if ( isClosedDisp )
    return !ShopReleaseEntity__IsCondEnable(v11, v6);
  return isClosedDisp;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isNotQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v12; // x8
  UserQuestMaster_o *v13; // x20
  __int64 v14; // x22
  ShopReleaseEntity_o *v15; // x26
  struct System_Int32_array *condValues; // x8
  __int64 v17; // x9
  int32_t v18; // w2
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4BC84C3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC84C3 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v10),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_31:
    sub_1C1AE30(Instance, v9);
  }
  v12 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v12 < 1 )
    return 0;
  v13 = (UserQuestMaster_o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= (unsigned int)v12 )
LABEL_32:
      sub_1C1AE38(Instance, v9);
    v15 = EntitiyList->m_Items[v14];
    if ( !v15 )
      goto LABEL_31;
    if ( v15->fields.condType != 1 )
      goto LABEL_28;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
      byte_4BC2585 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    condValues = v15->fields.condValues;
    v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
    if ( condValues && (v17 = *(_QWORD *)&condValues->max_length) != 0 )
    {
      if ( !(_DWORD)v17 )
        goto LABEL_32;
      v18 = condValues->m_Items[1];
    }
    else
    {
      v18 = 0;
    }
    if ( !v13 )
      goto LABEL_31;
    EntityFromId = UserQuestMaster__getEntityFromId(v13, v9, v18, 0LL);
    if ( !EntityFromId )
      return 1;
    Instance = (DataManager_o *)UserQuestEntity__getClearNum(EntityFromId, 0LL);
    if ( !(_DWORD)Instance )
      return 1;
    v12 = *(_QWORD *)&EntitiyList->max_length;
LABEL_28:
    if ( (int)++v14 >= (int)v12 )
      return 0;
  }
}


bool __fastcall ShopEntity__isNotServantGet(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  char v10; // w8

  if ( (byte_4BC84C5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84C5 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    goto LABEL_13;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v6)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    m_Items = Instance->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C1AE38(Instance, v5);
      Instance = (ShopReleaseEntity_array *)m_Items[v8];
      if ( !Instance )
        goto LABEL_17;
      if ( HIDWORD(Instance->bounds) == 38 )
        break;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
    v10 = BYTE4(Instance->m_Items[1]);
    if ( v10 )
      v10 = !ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)Instance, v5);
  }
  else
  {
LABEL_13:
    v10 = 0;
  }
  return v10 & 1;
}


bool __fastcall ShopEntity__isNotServantHaving(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  char v10; // w8

  if ( (byte_4BC84C6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84C6 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    goto LABEL_13;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v6)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    m_Items = Instance->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C1AE38(Instance, v5);
      Instance = (ShopReleaseEntity_array *)m_Items[v8];
      if ( !Instance )
        goto LABEL_17;
      if ( HIDWORD(Instance->bounds) == 41 )
        break;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
    v10 = BYTE4(Instance->m_Items[1]);
    if ( v10 )
      v10 = !ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)Instance, v5);
  }
  else
  {
LABEL_13:
    v10 = 0;
  }
  return v10 & 1;
}


bool __fastcall ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w9
  int v9; // w10
  ShopReleaseEntity_o *v10; // x8

  if ( (byte_4BC84CA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84CA = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v7)) == 0LL )
  {
LABEL_18:
    sub_1C1AE30(Instance, v6);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = Instance->m_Items[v9];
    if ( !v10 )
      goto LABEL_18;
    if ( v10->fields.condType == 37 )
      break;
    if ( max_length == ++v9 )
      return 0;
  }
  return v10->fields.isClosedDisp && !ShopReleaseEntity__IsCondEnable(Instance->m_Items[v9], v6);
}


bool __fastcall ShopEntity__isNotSvtCostumeReleased(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  char v10; // w8

  if ( (byte_4BC84C9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84C9 = 1;
  }
  if ( this->fields.purchaseType != 14 )
    goto LABEL_13;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v6)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    m_Items = Instance->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C1AE38(Instance, v5);
      Instance = (ShopReleaseEntity_array *)m_Items[v8];
      if ( !Instance )
        goto LABEL_17;
      if ( (HIDWORD(Instance->bounds) & 0xFFFFFFFE) == 78 )
        break;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
    v10 = BYTE4(Instance->m_Items[1]);
    if ( v10 )
      v10 = !ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)Instance, v5);
  }
  else
  {
LABEL_13:
    v10 = 0;
  }
  return v10 & 1;
}


bool __fastcall ShopEntity__isPurchasedRarePri(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  char v10; // w8

  if ( (byte_4BC84C4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC84C4 = 1;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v6)) == 0LL )
  {
LABEL_16:
    sub_1C1AE30(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
  {
LABEL_12:
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    m_Items = Instance->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C1AE38(Instance, v5);
      Instance = (ShopReleaseEntity_array *)m_Items[v8];
      if ( !Instance )
        goto LABEL_16;
      if ( HIDWORD(Instance->bounds) == 39 )
        break;
      if ( (int)++v8 >= max_length )
        goto LABEL_12;
    }
    v10 = BYTE4(Instance->m_Items[1]);
    if ( v10 )
      v10 = !ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)Instance, v5);
  }
  return v10 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestClear(ShopEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2
  ShopReleaseEntity_array *EntitiyList; // x19
  int max_length; // w8
  UserQuestMaster_o *v13; // x20
  __int64 v14; // x22
  ShopReleaseEntity_o *v15; // x26
  struct System_Int32_array *condValues; // x8
  __int64 v17; // x9
  int32_t v18; // w2

  if ( (byte_4BC84C2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC84C2 = 1;
  }
  if ( this->fields.purchaseType != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL
    || (EntitiyList = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v10),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !EntitiyList) )
  {
LABEL_30:
    sub_1C1AE30(Instance, v9);
  }
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (UserQuestMaster_o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
LABEL_31:
      sub_1C1AE38(Instance, v9);
    v15 = EntitiyList->m_Items[v14];
    if ( !v15 )
      goto LABEL_30;
    if ( v15->fields.condType == 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
        byte_4BC2585 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      condValues = v15->fields.condValues;
      v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( condValues && (v17 = *(_QWORD *)&condValues->max_length) != 0 )
      {
        if ( !(_DWORD)v17 )
          goto LABEL_31;
        v18 = condValues->m_Items[1];
      }
      else
      {
        v18 = 0;
      }
      if ( !v13 )
        goto LABEL_30;
      Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(v13, v9, v18, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
        if ( !(_DWORD)Instance )
          return 1;
      }
    }
    max_length = EntitiyList->max_length;
    if ( (int)++v14 >= max_length )
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4BC84BF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, questId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC84BF = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v8);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC84C1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, checkExpired);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC84C1 = 1;
  }
  questId = 0;
  v6 = 0;
  if ( this->fields.purchaseType == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0LL )
    {
      sub_1C1AE30(Instance, v8);
    }
    return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, v9)
        && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v10);
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
  int max_length; // w24
  bool v13; // w20
  UserQuestMaster_o *v14; // x21
  bool v15; // w25
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v17; // x23

  if ( (byte_4BC84C0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC84C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_22:
    sub_1C1AE30(Instance, v10);
  }
  max_length = targetIds->max_length;
  v13 = 1;
  if ( max_length >= 1 )
  {
    v14 = (UserQuestMaster_o *)Instance;
    v15 = !checkExpired;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
        byte_4BC2585 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_22;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       v14,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       questId,
                       0LL);
      v17 = EntityFromId;
      if ( (EntityFromId == 0LL || v15 || !UserQuestEntity__IsNotExpired(EntityFromId, 0LL))
        && (!v17 || !UserQuestEntity__getClearNum(v17, 0LL)) )
      {
        return 0;
      }
      if ( !--max_length )
        return 1;
    }
  }
  return v13;
}


void __fastcall ShopEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC84D6 & 1) == 0 )
  {
    sub_1C1ABD4(&ShopEntity___c_TypeInfo, v1);
    byte_4BC84D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ShopEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v2;
  sub_1C1AB78((PartyOrganizationUtility_o *)ShopEntity___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4BC84D7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, x);
    byte_4BC84D7 = 1;
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
    sub_1C1AE30(this, 0LL);
  return v->fields.giftType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.condType == 1;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_1(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.clearNum > 0;
}


bool __fastcall ShopEntity___c___IsPaidExchange_b__36_2(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.clearNum > 0;
}


int64_t __fastcall ShopEntity___c___IsPaidExchange_b__36_3(
        ShopEntity___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.updatedAt;
}


bool __fastcall ShopEntity___c___IsServantGet_b__50_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C1AE30(this, 0LL);
  return v->fields.giftType == 1;
}