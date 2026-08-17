void ShopEntity___ctor(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59713FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59713FD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


bool ShopEntity__CheckEquipItem(ShopEntity_o *this, int32_t *imageId, const MethodInfo *method)
{
  int32_t v5; // w8
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  GiftEntity_o *DataById; // x0
  int32_t TargetId; // w21
  int saveDataMapList_high; // w8
  Il2CppClass *v14; // x21
  void *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v16; // x0
  Il2CppClass *v17; // x20
  void *v18; // x21
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppObject *v22; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_59713F2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F2 = 1;
  }
  v5 = this->fields.imageId;
  v22 = 0;
  entity = 0;
  *imageId = v5;
  purchaseType = this->fields.purchaseType;
  if ( purchaseType == 2 )
  {
    TargetId = ShopEntity__get_TargetId(this, (const MethodInfo *)imageId);
    goto LABEL_15;
  }
  if ( purchaseType != 6 )
    goto LABEL_27;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v10);
  if ( !MasterData_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v22,
          (int32_t)Instance,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_27:
    LOBYTE(DataById) = 0;
    return (char)DataById;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v22 || !Instance )
    goto LABEL_40;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, HIDWORD(v22[3].klass), 0);
  if ( DataById )
  {
    if ( DataById->fields.type == 5 )
    {
      TargetId = DataById->fields.objectId;
LABEL_15:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             TargetId,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v25.fields.currentCryptoKey = klass;
          *(_QWORD *)&v25.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = entity[5].klass;
              v18 = entity[5].monitor;
              goto LABEL_34;
            }
LABEL_40:
            sub_2213CDC(Instance, v8);
          }
        }
        else if ( saveDataMapList_high == 1 )
        {
          if ( !entity )
            goto LABEL_40;
          v14 = entity[4].klass;
          v15 = entity[4].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v24.fields.currentCryptoKey = v14;
          *(_QWORD *)&v24.fields.fakeValue = v15;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
          if ( (int)Instance >= 1 )
          {
            if ( entity )
            {
              v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
              v17 = entity[4].klass;
              v18 = entity[4].monitor;
LABEL_34:
              if ( !*(&v16->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v16, v8);
              *(_QWORD *)&v26.fields.currentCryptoKey = v17;
              *(_QWORD *)&v26.fields.fakeValue = v18;
              LODWORD(DataById) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
              goto LABEL_38;
            }
            goto LABEL_40;
          }
        }
        LODWORD(DataById) = this->fields.imageId;
LABEL_38:
        *imageId = (int)DataById;
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


int64_t ShopEntity__GetActiveTime(ShopEntity_o *this, const MethodInfo *method)
{
  ShopDailyEntity_o *ShopDailyEntity; // x0
  int64_t *p_closedAt; // x8

  if ( this->fields.shopType == 20 )
  {
    ShopDailyEntity = ShopEntity__get_ShopDailyEntity(this, method);
    p_closedAt = &this->fields.closedAt;
    if ( ShopDailyEntity )
      p_closedAt = &ShopDailyEntity->fields.closedAt;
  }
  else
  {
    p_closedAt = &this->fields.closedAt;
  }
  return *p_closedAt;
}


System_String_o *ShopEntity__GetAddMessage(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_17360/*"addMessage"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59713F7 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17360/*"addMessage"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    sub_2213CDC(0, v4);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                              value,
                              value->klass->vtable[3].method);
}


System_Int32_array *ShopEntity__GetAnotherPayItemIds(ShopEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x19
  ShopEntity___c_c *v7; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  Il2CppClass *klass; // x9
  System_Converter_object__int__o *_9__64_0; // x20
  unsigned int naturalAligment; // w11
  __int64 v12; // x10
  Il2CppObject *v13; // x21
  struct ShopEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59713E1 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_ShopEntity___c__GetAnotherPayItemIds_b__64_0__);
    sub_2213A60(&ShopEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_17502/*"anotherItemIds"*/);
    byte_59713E1 = 1;
  }
  result = (System_Int32_array *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_17502/*"anotherItemIds"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
      && (v6 = value) != 0 )
    {
      v7 = ShopEntity___c_TypeInfo;
      if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v4);
        v7 = ShopEntity___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      klass = v6->klass;
      _9__64_0 = static_fields->__9__64_0;
      naturalAligment = v6->klass->_2.naturalAligment;
      v12 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( _9__64_0 )
      {
        if ( naturalAligment < (unsigned int)v12
          || (System_Collections_Generic_List_object__c *)klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
LABEL_21:
          sub_221405C(v6, System_Collections_Generic_List_object__TypeInfo, v5);
LABEL_22:
          sub_2213CDC(v21, v22);
        }
      }
      else
      {
        if ( naturalAligment < (unsigned int)v12
          || (System_Collections_Generic_List_object__c *)klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          goto LABEL_21;
        }
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, System_Collections_Generic_List_object__TypeInfo);
          static_fields = ShopEntity___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__64_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(_9__64_0, v13, Method_ShopEntity___c__GetAnotherPayItemIds_b__64_0__, 0);
        v14 = ShopEntity___c_TypeInfo->static_fields;
        v14->__9__64_0 = _9__64_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v14->__9__64_0,
          (int32_t)_9__64_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        (System_Collections_Generic_List_object__o *)v6,
                                                        (System_Converter_T__TOutput__o *)_9__64_0,
                                                        (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( !v21 )
        goto LABEL_22;
      return System_Collections_Generic_List_int___ToArray(
               v21,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t ShopEntity__GetCommonConsumeBuyableCount(ShopEntity_o *this, const MethodInfo *method)
{
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  __int64 v3; // x1
  il2cpp_array_size_t max_length; // x8
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
  max_length = CommonConsumeEntities->max_length;
  v5 = CommonConsumeEntities;
  if ( (int)max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( (unsigned int)v6 >= (unsigned int)max_length )
      sub_2213CE4(CommonConsumeEntities);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      sub_2213CDC(CommonConsumeEntities, v3);
    if ( v8->fields.num < 1 )
    {
      v9 = 0;
    }
    else
    {
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserHasNum(v5->m_Items[v6], 0);
      v9 = (int)CommonConsumeEntities / v8->fields.num;
      max_length = v5->max_length;
    }
    if ( v9 < v7 || (_DWORD)v6++ == 0 )
      v7 = v9;
  }
  while ( (int)v6 < (int)max_length );
  return v7;
}


CommonConsumeEntity_array *ShopEntity__GetCommonConsumeEntities(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  __int64 ItemID; // x0
  __int64 v6; // x1

  if ( (byte_59713F9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59713F9 = 1;
  }
  if ( this->fields.payType != 14 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  ItemID = ShopEntity__GetItemID(this, v4);
  if ( !Master_object )
    sub_2213CDC(ItemID, v6);
  return CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)Master_object, ItemID, 0);
}


int64_t ShopEntity__GetCurrencyCount(ShopEntity_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1
  int32_t payType; // w9
  UserGameEntity_o *v6; // x8
  int64_t result; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x21
  __int64 v13; // x8

  if ( (byte_59713FC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713FC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  payType = this->fields.payType;
  v6 = SelfUserGame;
  result = 0;
  if ( payType <= 5 )
  {
    switch ( payType )
    {
      case 1:
        if ( !v6 )
          goto LABEL_38;
        return v6->fields.stone;
      case 2:
        if ( !v6 )
          goto LABEL_38;
        return v6->fields.qp;
      case 4:
        if ( !v6 )
          goto LABEL_38;
        return v6->fields.mana;
    }
  }
  else if ( (unsigned int)payType <= 0xE )
  {
    if ( ((1 << payType) & 0x1B40) != 0 )
    {
      if ( ShopEntity__GetItemCount(this, v4) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v11 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
          v11 = NetworkManager_TypeInfo;
        }
        userIdNumber = v11->static_fields->userIdNumber;
        result = ShopEntity__GetItemID(this, v9);
        if ( Master_object )
        {
          result = (int64_t)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)Master_object,
                              userIdNumber,
                              result,
                              0);
          if ( result )
            return *(int *)(result + 28);
        }
LABEL_38:
        sub_2213CDC(result, v4);
      }
      return 0;
    }
    if ( payType == 10 )
    {
      if ( !v6 )
        goto LABEL_38;
      return v6->fields.rarePri;
    }
    else if ( payType == 14 )
    {
      result = (int64_t)ShopEntity__GetCommonConsumeEntities(this, v4);
      if ( result )
      {
        v13 = *(_QWORD *)(result + 24);
        if ( !v13 )
          return 0;
        if ( !(_DWORD)v13 )
          sub_2213CE4(result);
        result = *(_QWORD *)(result + 32);
        if ( !result )
          goto LABEL_38;
        return CommonConsumeEntity__GetUserHasNum((CommonConsumeEntity_o *)result, 0);
      }
    }
  }
  return result;
}


int32_t ShopEntity__GetExchangeSvtCoinType(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59713FA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20215/*"exchangeSvtCoinType"*/);
    byte_59713FA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20215/*"exchangeSvtCoinType"*/, 0, 0);
}


int32_t ShopEntity__GetFreeShopCondId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713C7 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    byte_59713C7 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v5 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
      LODWORD(script) = System_Convert__ToInt32(v5, 0);
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
  __int64 v4; // x1
  __int64 v5; // x2
  ShopEntity_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_20594/*"freeShopReleaseDate"*/);
    byte_59713C8 = 1;
  }
  result = (int64_t)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)StringLiteral_20594/*"freeShopReleaseDate"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( !value )
        sub_2213CDC(0, v4);
      if ( value->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        return *(_QWORD *)j_il2cpp_object_unbox_0(value, qword_5984368, v5);
      }
      else
      {
        sub_221405C(value, qword_5984368, v5);
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


bool ShopEntity__GetIsAlreadyInPossession(ShopEntity_o *this, bool isWithoutPresents, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x23
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v11; // x1
  ShopEntity___c_c *v12; // x8
  System_Object_array *v13; // x21
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__55_0; // x24
  Il2CppObject *v16; // x25
  struct ShopEntity___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  DataManager_o *v24; // x28
  DataManager_o *v25; // x22
  struct System_Int32_array *targetIds; // x24
  il2cpp_array_size_t max_length; // x8
  bool v28; // w25
  DataManager_o *v29; // x20
  signed __int64 v30; // x26
  bool v31; // w21
  int32_t v32; // w29
  int m_CancellationTokenSource; // w8
  bool *v34; // x9
  int v35; // w8
  unsigned int v36; // w28
  __int64 v37; // x8
  __int64 v38; // x19
  __int64 v39; // x23
  int v40; // w8
  unsigned int v41; // w28
  __int64 v42; // x8
  __int64 v43; // x19
  __int64 v44; // x23
  bool *p_DispLog; // [xsp+0h] [xbp-70h]
  DataManager_o *v47; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_59713D8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ShopEntity___c__GetIsAlreadyInPossession_b__55_0__);
    sub_2213A60(&ShopEntity___c_TypeInfo);
    byte_59713D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v9 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_51;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)MasterData_object,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                0);
  v12 = ShopEntity___c_TypeInfo;
  v13 = (System_Object_array *)VaildList;
  if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v11);
    v12 = ShopEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__55_0 = (System_Predicate_object__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__55_0, v16, Method_ShopEntity___c__GetIsAlreadyInPossession_b__55_0__, 0);
    v17 = ShopEntity___c_TypeInfo->static_fields;
    v17->__9__55_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__55_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__55_0, (int32_t)_9__55_0, v18, v19, v20, v21, v22, v23);
  }
  Instance = (DataManager_o *)System_Array__FindAll_object_(
                                v13,
                                (System_Predicate_T__o *)_9__55_0,
                                (const MethodInfo_39A9774 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  if ( !v8 )
    goto LABEL_51;
  v24 = Instance;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)v8, 0);
  if ( !v9 )
    goto LABEL_51;
  v25 = Instance;
  Instance = (DataManager_o *)UserServantStorageMaster__getServantEquipList((UserServantStorageMaster_o *)v9, 0);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_51;
  max_length = targetIds->max_length;
  v28 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v29 = Instance;
    v30 = 0;
    v31 = v24 == 0 || isWithoutPresents;
    p_DispLog = &v24->fields._DispLog;
    v47 = v24;
    while ( 1 )
    {
      if ( v30 >= (unsigned __int64)(unsigned int)max_length )
        goto LABEL_52;
      v32 = targetIds->m_Items[v30];
      if ( !v31 )
      {
        m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_31:
      if ( !v25 )
        goto LABEL_51;
      v35 = (int)v25->fields.m_CancellationTokenSource;
      if ( v35 >= 1 )
      {
        v36 = 0;
        while ( v36 < v35 )
        {
          v37 = *((_QWORD *)&v25->fields._DispLog + (int)v36);
          if ( !v37 )
            goto LABEL_51;
          v38 = *(_QWORD *)(v37 + 80);
          v39 = *(_QWORD *)(v37 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
          *(_QWORD *)&v48.fields.currentCryptoKey = v38;
          *(_QWORD *)&v48.fields.fakeValue = v39;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
          if ( v32 == (_DWORD)Instance )
            return v28;
          v35 = (int)v25->fields.m_CancellationTokenSource;
          if ( (int)++v36 >= v35 )
            goto LABEL_40;
        }
LABEL_52:
        sub_2213CE4(Instance);
      }
LABEL_40:
      if ( !v29 )
        goto LABEL_51;
      v40 = (int)v29->fields.m_CancellationTokenSource;
      if ( v40 >= 1 )
      {
        v41 = 0;
        while ( v41 < v40 )
        {
          v42 = *((_QWORD *)&v29->fields._DispLog + (int)v41);
          if ( !v42 )
            goto LABEL_51;
          v43 = *(_QWORD *)(v42 + 80);
          v44 = *(_QWORD *)(v42 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
          *(_QWORD *)&v49.fields.currentCryptoKey = v43;
          *(_QWORD *)&v49.fields.fakeValue = v44;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v49, 0);
          if ( v32 == (_DWORD)Instance )
            return v28;
          v40 = (int)v29->fields.m_CancellationTokenSource;
          if ( (int)++v41 >= v40 )
            goto LABEL_49;
        }
        goto LABEL_52;
      }
LABEL_49:
      LODWORD(max_length) = targetIds->max_length;
      ++v30;
      v24 = v47;
      v28 = v30 < (int)max_length;
      if ( v30 >= (int)max_length )
        return v28;
    }
    v34 = p_DispLog;
    while ( *(_QWORD *)v34 )
    {
      if ( v32 == *(_DWORD *)(*(_QWORD *)v34 + 76LL) )
        return v28;
      --m_CancellationTokenSource;
      v34 += 8;
      if ( !m_CancellationTokenSource )
        goto LABEL_31;
    }
LABEL_51:
    sub_2213CDC(Instance, v6);
  }
  return v28;
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
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_59713D7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D7 = 1;
  }
  if ( (this->fields.flag & 0x2000) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.baseShopId,
                       0);
  return EntityDefinitely && !UserShopEntity__get_IsReceivedShopItem(EntityDefinitely, 0);
}


int32_t ShopEntity__GetItemCount(ShopEntity_o *this, const MethodInfo *method)
{
  ShopEntity_o *v2; // x19
  ShopEntity_o *v3; // x20
  __int64 v4; // x8
  System_Nullable_int__o v5; // x0
  int32_t v6; // w1
  struct System_Int32_array *itemIds; // x8
  unsigned __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_59713C4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ShopEntity_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_59713C4 = 1;
  }
  if ( v2->fields.shopType != 20 )
    goto LABEL_9;
  this = (ShopEntity_o *)ShopEntity__get_ShopDailyEntity(v2, method);
  if ( !this )
    goto LABEL_9;
  v3 = this;
  this = (ShopEntity_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.slot, 0);
  if ( ((unsigned __int8)this & 1) == 0
    && (v4 = *(_QWORD *)&v3->fields.slot) != 0
    && (v5 = (System_Nullable_int__o)&v10,
        v6 = *(_DWORD *)(v4 + 24),
        v10 = 0,
        System_Nullable_int____ctor(v5, v6, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v10) )
  {
    return HIDWORD(v10);
  }
  else
  {
LABEL_9:
    itemIds = v2->fields.itemIds;
    if ( !itemIds )
      sub_2213CDC(this, method);
    return itemIds->max_length;
  }
}


int32_t ShopEntity__GetItemID(ShopEntity_o *this, const MethodInfo *method)
{
  ShopEntity_o *v2; // x19
  ShopEntity_o *v3; // x20
  __int64 v4; // x8
  System_Nullable_int__o v5; // x0
  int32_t v6; // w1
  __int64 v7; // x0
  struct System_Int32_array *itemIds; // x8
  unsigned __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_59713C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ShopEntity_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_59713C5 = 1;
  }
  if ( v2->fields.shopType != 20 )
    goto LABEL_10;
  this = (ShopEntity_o *)ShopEntity__get_ShopDailyEntity(v2, method);
  if ( !this )
    goto LABEL_10;
  v3 = this;
  this = (ShopEntity_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.slot, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v4 = *(_QWORD *)&v3->fields.slot;
  if ( !v4 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_13;
  v5 = (System_Nullable_int__o)&v10;
  v6 = *(_DWORD *)(v4 + 32);
  v10 = 0;
  System_Nullable_int____ctor(v5, v6, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v10 )
  {
LABEL_10:
    itemIds = v2->fields.itemIds;
    if ( !itemIds )
      sub_2213CDC(this, method);
    if ( LODWORD(itemIds->max_length) )
    {
      LODWORD(v7) = itemIds->m_Items[0];
      return v7;
    }
LABEL_13:
    sub_2213CE4(this);
  }
  return HIDWORD(v10);
}


// local variable allocation has failed, the output may be wrong!
int32_t ShopEntity__GetItemIDs(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  ShopEntity_o *v5; // x21
  __int64 v6; // x8
  System_Nullable_int__o v7; // x0
  int32_t v8; // w1
  __int64 v9; // x0
  struct System_Int32_array *itemIds; // x8
  unsigned __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_59713C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ShopEntity_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_59713C6 = 1;
  }
  if ( v4->fields.shopType != 20 )
    goto LABEL_10;
  this = (ShopEntity_o *)ShopEntity__get_ShopDailyEntity(v4, *(const MethodInfo **)&num);
  if ( !this )
    goto LABEL_10;
  v5 = this;
  this = (ShopEntity_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.slot, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v6 = *(_QWORD *)&v5->fields.slot;
  if ( !v6 )
    goto LABEL_10;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)num )
    goto LABEL_14;
  v7 = (System_Nullable_int__o)&v12;
  v8 = *(_DWORD *)(v6 + 4LL * num + 32);
  v12 = 0;
  System_Nullable_int____ctor(v7, v8, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v12 )
  {
LABEL_10:
    itemIds = v4->fields.itemIds;
    if ( !itemIds )
      sub_2213CDC(this, *(_QWORD *)&num);
    if ( LODWORD(itemIds->max_length) > num )
    {
      LODWORD(v9) = itemIds->m_Items[num];
      return v9;
    }
LABEL_14:
    sub_2213CE4(this);
  }
  return HIDWORD(v12);
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
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x7
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  int32_t recordNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59713E9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713E9 = 1;
  }
  *buyItemNum = 0;
  *buyServantNum = 0;
  *buyServantEquipNum = 0;
  *buyCmdCodeNum = 0;
  *buyQuestNum = 0;
  purchaseType = this->fields.purchaseType;
  recordNum = 0;
  if ( purchaseType <= 5 )
  {
    if ( (unsigned int)(purchaseType - 1) < 2 )
    {
      *buyItemNum = this->fields.setNum;
      return;
    }
    if ( purchaseType != 4 )
    {
      if ( purchaseType == 5 )
      {
        recordNum = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SetItemMaster___);
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v17);
          if ( MasterData_object )
          {
            SetItemMaster__GetSum(
              (SetItemMaster_o *)MasterData_object,
              buyItemNum,
              buyServantNum,
              buyServantEquipNum,
              buyCmdCodeNum,
              &recordNum,
              (int32_t)Instance,
              v18);
            return;
          }
        }
LABEL_23:
        sub_2213CDC(Instance, v15);
      }
      return;
    }
LABEL_13:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v19 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v20);
    if ( !v19 )
      goto LABEL_23;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                 (int32_t)Instance,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_23;
    IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
    setNum = this->fields.setNum;
    if ( IsServantEquip )
      *buyServantEquipNum = setNum;
    else
      *buyServantNum = setNum;
    return;
  }
  switch ( purchaseType )
  {
    case 6:
      *buyQuestNum = 1;
      return;
    case 19:
      *buyCmdCodeNum = this->fields.setNum;
      return;
    case 21:
      goto LABEL_13;
  }
}


System_String_o *ShopEntity__GetOverwriteName(
        ShopEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_59713F5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23713/*"overwriteName"*/);
    byte_59713F5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23713/*"overwriteName"*/, defaultValue, 0);
}


int32_t ShopEntity__GetPayType(ShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


int32_t ShopEntity__GetPrice(ShopEntity_o *this, const MethodInfo *method)
{
  ShopEntity_o *v2; // x19
  ShopEntity_o *v3; // x20
  __int64 v4; // x8
  System_Nullable_int__o v5; // x0
  int32_t v6; // w1
  __int64 v7; // x0
  struct System_Int32_array *prices; // x8
  unsigned __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_59713E6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ShopEntity_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_59713E6 = 1;
  }
  if ( v2->fields.shopType != 20 )
    goto LABEL_10;
  this = (ShopEntity_o *)ShopEntity__get_ShopDailyEntity(v2, method);
  if ( !this )
    goto LABEL_10;
  v3 = this;
  this = (ShopEntity_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.purchaseType, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v4 = *(_QWORD *)&v3->fields.purchaseType;
  if ( !v4 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_13;
  v5 = (System_Nullable_int__o)&v10;
  v6 = *(_DWORD *)(v4 + 32);
  v10 = 0;
  System_Nullable_int____ctor(v5, v6, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v10 )
  {
LABEL_10:
    prices = v2->fields.prices;
    if ( !prices )
      sub_2213CDC(this, method);
    if ( LODWORD(prices->max_length) )
    {
      LODWORD(v7) = prices->m_Items[0];
      return v7;
    }
LABEL_13:
    sub_2213CE4(this);
  }
  return HIDWORD(v10);
}


int32_t ShopEntity__GetPriceIcon(ShopEntity_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.payType - 1;
  if ( v2 > 0xD )
    return 1;
  else
    return dword_EDA4F8[v2];
}


// local variable allocation has failed, the output may be wrong!
int32_t ShopEntity__GetPrices(ShopEntity_o *this, int32_t num, const MethodInfo *method)
{
  ShopEntity_o *v4; // x20
  ShopEntity_o *v5; // x21
  __int64 v6; // x8
  System_Nullable_int__o v7; // x0
  int32_t v8; // w1
  __int64 v9; // x0
  struct System_Int32_array *prices; // x8
  unsigned __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_59713E7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ShopEntity_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_59713E7 = 1;
  }
  if ( v4->fields.shopType != 20 )
    goto LABEL_10;
  this = (ShopEntity_o *)ShopEntity__get_ShopDailyEntity(v4, *(const MethodInfo **)&num);
  if ( !this )
    goto LABEL_10;
  v5 = this;
  this = (ShopEntity_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&this->fields.purchaseType, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v6 = *(_QWORD *)&v5->fields.purchaseType;
  if ( !v6 )
    goto LABEL_10;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)num )
    goto LABEL_14;
  v7 = (System_Nullable_int__o)&v12;
  v8 = *(_DWORD *)(v6 + 4LL * num + 32);
  v12 = 0;
  System_Nullable_int____ctor(v7, v8, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v12 )
  {
LABEL_10:
    prices = v4->fields.prices;
    if ( !prices )
      sub_2213CDC(this, *(_QWORD *)&num);
    if ( LODWORD(prices->max_length) > num )
    {
      LODWORD(v9) = prices->m_Items[num];
      return v9;
    }
LABEL_14:
    sub_2213CE4(this);
  }
  return HIDWORD(v12);
}


int32_t ShopEntity__GetPurchaseLimitNum(ShopEntity_o *this, const MethodInfo *method)
{
  ShopDailyEntity_o *ShopDailyEntity; // x0
  int32_t *p_limitNum; // x8

  if ( this->fields.shopType == 20 )
  {
    ShopDailyEntity = ShopEntity__get_ShopDailyEntity(this, method);
    p_limitNum = &this->fields.limitNum;
    if ( ShopDailyEntity )
      p_limitNum = &ShopDailyEntity->fields.dailyLimitNum;
  }
  else
  {
    p_limitNum = &this->fields.limitNum;
  }
  return *p_limitNum;
}


int32_t ShopEntity__GetPurchaseShop(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_59713E5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return ShopReleaseMaster__GetPurchaseShop((ShopReleaseMaster_o *)Instance, this->fields.id, v5);
}


ServantEntity_o *ShopEntity__GetRelateServantEntity(ShopEntity_o *this, const MethodInfo *method)
{
  ShopReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int max_length; // w8
  ShopReleaseEntity_o **i; // x9
  ShopReleaseEntity_o *v8; // x19
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t v11; // x9

  if ( (byte_59713F0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F0 = 1;
  }
  if ( this->fields.purchaseType != 4 )
    return 0;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Instance )
    goto LABEL_21;
  Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v5);
  if ( !Instance )
    return 0;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = Instance->m_Items; ; ++i )
  {
    v8 = *i;
    if ( !*i )
      goto LABEL_21;
    if ( v8->fields.condType == 8 )
      break;
    if ( !--max_length )
      return 0;
  }
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  condValues = v8->fields.condValues;
  if ( condValues && (v11 = condValues->max_length) != 0 )
  {
    if ( !(_DWORD)v11 )
      sub_2213CE4(Instance);
    v4 = (unsigned int)condValues->m_Items[0];
  }
  else
  {
    v4 = 0;
  }
  if ( !Instance )
LABEL_21:
    sub_2213CDC(Instance, v4);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              v4,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


int32_t ShopEntity__GetRemainDays(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t flag; // w8
  __int64 *v8; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_8614/*"LIMITED_SHOP_REMAIN_DAYS"*/);
    sub_2213A60(&StringLiteral_9102/*"MONTHLY_SHOP_REMAIN_DAYS"*/);
    sub_2213A60(&StringLiteral_24226/*"remainDays"*/);
    byte_59713E2 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_24226/*"remainDays"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    flag = this->fields.flag;
    if ( (flag & 0x800) != 0 )
    {
      v8 = &StringLiteral_8614/*"LIMITED_SHOP_REMAIN_DAYS"*/;
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
      v8 = &StringLiteral_9102/*"MONTHLY_SHOP_REMAIN_DAYS"*/;
    }
    return ConstantMaster__getValue((System_String_o *)*v8, 0);
  }
  if ( !value )
    sub_2213CDC(0, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  return System_Int32__Parse(v5, 0);
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
  __int64 v17; // x1
  Il2CppObject *v18; // x24
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x6
  Il2CppObject *v21; // x22
  const MethodInfo *v22; // x1
  bool IsServantEquip; // w0
  int32_t setNum; // w8
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x7
  bool quest; // [xsp+8h] [xbp-58h] BYREF
  bool equip; // [xsp+Ch] [xbp-54h] BYREF
  bool servant; // [xsp+18h] [xbp-48h] BYREF
  bool item; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59713E8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SetItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713E8 = 1;
  }
  *buyItemNum = 0;
  *buyServantNum = 0;
  *buyServantEquipNum = 0;
  *buyCmdCodeNum = 0;
  *buyQuestNum = 0;
  *recordNum = 0;
  purchaseType = this->fields.purchaseType;
  item = 0;
  servant = 0;
  equip = 0;
  quest = 0;
  if ( purchaseType <= 16 )
  {
    if ( purchaseType > 4 )
    {
      if ( purchaseType == 5 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SetItemMaster___);
          Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v26);
          if ( MasterData_object )
          {
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
          }
        }
        goto LABEL_35;
      }
      if ( purchaseType != 6 )
      {
        if ( purchaseType != 16 )
          return;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        v18 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v19);
        if ( !v18 )
          goto LABEL_35;
        ShopGroupMaster__CheckIncludeGroupItemType(
          (ShopGroupMaster_o *)v18,
          (int32_t)Instance,
          &item,
          &servant,
          &equip,
          &quest,
          v20);
        if ( item )
          *buyItemNum = 1;
        if ( servant )
          *buyServantNum = 1;
        if ( equip )
          *buyServantEquipNum = 1;
        if ( !quest )
          return;
      }
      *buyQuestNum = 1;
      return;
    }
    if ( (unsigned int)(purchaseType - 1) < 2 )
    {
      *buyItemNum = this->fields.setNum;
      return;
    }
    if ( purchaseType != 4 )
      return;
LABEL_25:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v21 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v22);
      if ( v21 )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
          setNum = this->fields.setNum;
          if ( IsServantEquip )
            *buyServantEquipNum = setNum;
          else
            *buyServantNum = setNum;
          return;
        }
      }
    }
LABEL_35:
    sub_2213CDC(Instance, v17);
  }
  if ( purchaseType == 19 )
  {
    *buyCmdCodeNum = this->fields.setNum;
    return;
  }
  if ( purchaseType == 21 )
    goto LABEL_25;
}


bool ShopEntity__IsAfterTheFreeShopReleaseDate(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_59713C9 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713C9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  return Time > ShopEntity__GetFreeShopReleaseDate(this, v4) && ShopEntity__GetFreeShopReleaseDate(this, v5) > 0;
}


bool ShopEntity__IsAllCondClear(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int64_t v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int64_t closedAt; // x8
  const MethodInfo *v11; // x2

  if ( (byte_59713D0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v5 = Time;
  if ( this->fields.shopType == 20 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
    if ( Master_object )
      return ShopDailyMaster__IsAllCondClear((ShopDailyMaster_o *)Master_object, this->fields.id, v5, v8);
LABEL_17:
    sub_2213CDC(Master_object, v7);
  }
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  if ( closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !Master_object )
    goto LABEL_17;
  return ShopReleaseMaster__IsAllCondClear((ShopReleaseMaster_o *)Master_object, this->fields.id, v11);
}


bool ShopEntity__IsAnotherItemBuyable(
        ShopEntity_o *this,
        System_Int32_array **possessionAnotherItemId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  System_Collections_ICollection_o *AnotherPayItemIds; // x22
  System_Collections_Generic_List_int__o *v12; // x23
  __int64 v13; // x1
  UserItemMaster_o *Master_object; // x0
  __int64 itemId; // x1
  void *monitor; // x8
  UserItemMaster_o *v17; // x24
  char v18; // w29
  unsigned __int64 v19; // x28
  int32_t v20; // w25
  struct System_Int32_array *items; // x9
  _QWORD *v22; // x8
  __int64 size; // x10
  System_Int32_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  Il2CppObject *v33; // x20
  ShopEntity_o *v36; // [xsp+8h] [xbp-78h]
  UserItemEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  UserShopEntity_o *v38; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59713DF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713DF = 1;
  }
  entity = 0;
  v38 = 0;
  *possessionAnotherItemId = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)possessionAnotherItemId,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AnotherPayItemIds = (System_Collections_ICollection_o *)ShopEntity__GetAnotherPayItemIds(this, v10);
  if ( BasicHelper__IsNullOrEmpty(AnotherPayItemIds, 0) )
    return 0;
  v12 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_45;
  monitor = AnotherPayItemIds[1].monitor;
  if ( (int)monitor < 1 )
    return 0;
  v36 = this;
  v17 = Master_object;
  v18 = 0;
  v19 = 0;
  do
  {
    if ( v19 >= (unsigned int)monitor )
      sub_2213CE4(Master_object);
    v20 = *((_DWORD *)&AnotherPayItemIds[2].klass + v19);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, itemId);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, itemId);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !v17 )
      goto LABEL_45;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v17,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v20,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_45;
      if ( entity->fields.num >= 1 )
      {
        if ( !v12 )
          goto LABEL_45;
        itemId = (unsigned int)entity->fields.itemId;
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            itemId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size] = itemId;
        }
        v18 = 1;
      }
    }
    LODWORD(monitor) = AnotherPayItemIds[1].monitor;
    ++v19;
  }
  while ( (__int64)v19 < (int)monitor );
  if ( (v18 & 1) == 0 )
    return 0;
  if ( !v12 )
    goto LABEL_45;
  v24 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *possessionAnotherItemId = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)possessionAnotherItemId, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !ShopEntity__IsAnotherPayCommonReleaseOpen(v36, v31) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  v33 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, itemId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, itemId);
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v33 )
    goto LABEL_45;
  if ( !UserShopMaster__TryGetEntity(
          (UserShopMaster_o *)v33,
          &v38,
          (int64_t)Master_object[2].fields.list[1].monitor,
          v36->fields.baseShopId,
          0) )
    return 1;
  Master_object = (UserItemMaster_o *)v38;
  if ( !v38 )
LABEL_45:
    sub_2213CDC(Master_object, itemId);
  return !UserShopEntity__CheckFlagKind(v38, 2, 0);
}


bool ShopEntity__IsAnotherPayCommonReleaseOpen(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713E0 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_25825/*"useAnotherPayCommonReleaseId"*/);
    byte_59713E0 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_25825/*"useAnotherPayCommonReleaseId"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v5 = value;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
    v6 = System_Convert__ToInt32(v5, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v8);
    }
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v6, 0, 0, 0);
  }
  else
  {
    return 1;
  }
}


bool ShopEntity__IsClosed(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int64_t closedAt; // x8
  bool v10; // cc

  Time = nowTime;
  if ( (byte_59713D2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713D2 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  if ( this->fields.shopType == 20 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nowTime);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v6);
    return !ShopDailyMaster__IsValid((ShopDailyMaster_o *)Master_object, this->fields.id, Time, v7);
  }
  else
  {
    closedAt = this->fields.closedAt;
    if ( closedAt )
      v10 = Time <= closedAt;
    else
      v10 = 1;
    return !v10;
  }
}


bool ShopEntity__IsClosedPriorityLowCondEnable(ShopEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t IntValue; // w19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59713CB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_18818/*"closedPriorityLowCondId"*/);
    byte_59713CB = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18818/*"closedPriorityLowCondId"*/, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, IntValue, 0, 0, 0);
}


bool ShopEntity__IsCondType(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t limitNum; // w8

  if ( (byte_59713E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.baseShopId,
                                0);
  limitNum = this->fields.limitNum;
  if ( limitNum >= 1 )
  {
    if ( Instance )
      return SHIDWORD(Instance->fields.m_CancellationTokenSource) >= limitNum;
LABEL_16:
    sub_2213CDC(Instance, v4);
  }
  if ( !Instance )
    goto LABEL_16;
  return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
}


bool ShopEntity__IsCondType_49868772(ShopEntity_o *this, int64_t userId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t limitNum; // w8

  if ( (byte_59713E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713E4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)Instance,
                                userId,
                                this->fields.baseShopId,
                                0);
  limitNum = this->fields.limitNum;
  if ( limitNum >= 1 )
  {
    if ( Instance )
      return SHIDWORD(Instance->fields.m_CancellationTokenSource) >= limitNum;
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
}


bool ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(ShopEntity_o *this, const MethodInfo *method)
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

  if ( (byte_59713CE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    byte_59713CE = 1;
  }
  script = this->fields.script;
  value = 0;
  *(_QWORD *)costumeId = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    || !ShopEntity__IsAfterTheFreeShopReleaseDate(this, v4)
    || this->fields.purchaseType != 14 )
  {
    return 0;
  }
  ShopEntity__SetSvtIdAndCostumeId(this, &costumeId[1], costumeId, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  v8 = ServantCostumeReleaseMaster__checkItemHaving(
         (ServantCostumeReleaseMaster_o *)Instance,
         costumeId[1],
         costumeId[0],
         0);
  return this->fields.shopType == 11 && (ShopEntity__IsSoldOut(this, v9) || !v8);
}


bool ShopEntity__IsEnable(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  char v8; // w21
  const MethodInfo *v9; // x3
  bool IsOpen; // w0
  int64_t closedAt; // x8
  const MethodInfo *v13; // x2
  UserEventEntity_o *v14; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59713CF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713CF = 1;
  }
  v14 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_38;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
      goto LABEL_19;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_38;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &v14,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          0) )
    goto LABEL_19;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_38;
  v8 = 1;
  if ( !UserEventEntity__getEventFlag(v14, 1, 0) )
  {
LABEL_19:
    if ( !nowTime )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      nowTime = NetworkManager__getTime(0);
    }
    if ( this->fields.shopType == 20 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
      if ( Instance )
      {
        IsOpen = ShopDailyMaster__IsOpen((ShopDailyMaster_o *)Instance, this->fields.id, nowTime, v9);
LABEL_28:
        v8 = IsOpen;
        return v8 & 1;
      }
    }
    else
    {
      if ( nowTime < this->fields.openedAt || (closedAt = this->fields.closedAt) != 0 && nowTime > closedAt )
      {
        v8 = 0;
        return v8 & 1;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
      if ( Instance )
      {
        IsOpen = ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, v13);
        goto LABEL_28;
      }
    }
LABEL_38:
    sub_2213CDC(Instance, v6);
  }
  return v8 & 1;
}


bool ShopEntity__IsEventQuest(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x21
  const MethodInfo *v7; // x1
  int v8; // w19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  char v11; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-38h]

  if ( (byte_59713F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (v6 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v7),
        !v6)
    || (Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)v6, (int32_t)Instance, 0),
        !MasterData_object)
    || (v8 = (int)Instance, (Instance = (DataManager_o *)MasterData_object[2].monitor) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v11 = 0;
  v25 = Enumerator;
  while ( 1 )
  {
    if ( !v25 )
      sub_2213CDC(Enumerator, v10);
    klass = v25->klass;
    v13 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_14;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v15 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v25,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = v25->klass;
    v17 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_21;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_21:
      v19 = sub_224BC3C(v25, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  v25,
                                                                  *(_QWORD *)(v19 + 8));
    if ( !Enumerator )
      sub_2213CDC(0, v10);
    if ( LODWORD(Enumerator[6].klass) == v8 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)WarEntity__IsShop((WarEntity_o *)Enumerator, 0);
      v11 |= (unsigned __int8)Enumerator;
    }
  }
  v20 = v25->klass;
  v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_30;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_30:
    v23 = sub_224BC3C(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  return v11 & 1;
}


bool ShopEntity__IsExchangeServantIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_24226/*"remainDays"*/);
    byte_59713DE = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_24226/*"remainDays"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE2(this->fields.flag) >> 1) & 1;
  }
  if ( !value )
    sub_2213CDC(0, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v6 = System_Int32__Parse(v5, 0);
  if ( v6 )
    return (BYTE2(this->fields.flag) >> 1) & 1;
  return v6;
}


bool ShopEntity__IsFulFilledFreeExchangeCondition(ShopEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x1

  if ( (byte_59713CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    byte_59713CA = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !script
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)script,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        script = (System_Collections_Generic_Dictionary_object__object__o *)ShopEntity__GetFreeShopCondId(this, v5),
        !MasterData_object) )
  {
LABEL_10:
    sub_2213CDC(script, method);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, (int32_t)script, 0, 0, 0);
}


bool ShopEntity__IsHiddenInCaseOfBuying(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_59713DA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713DA = 1;
  }
  if ( (this->fields.flag & 0x200) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v4);
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
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_59713DB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713DB = 1;
  }
  if ( (this->fields.flag & 0x400) == 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v4);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.id,
                       0);
  return EntityDefinitely && EntityDefinitely->fields.num >= this->fields.limitNum;
}


bool ShopEntity__IsItemMaxButShopAvailable(ShopEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *TargetId; // x0
  __int64 v7; // x1
  int32_t v8; // w22
  int32_t limitNum; // w21
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // x1
  UserShopEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59713FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59713FB = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  TargetId = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
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
  v8 = entity ? entity->fields.num : 0;
  limitNum = this->fields.limitNum;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  TargetId = (NetworkManager_c *)ShopEntity__get_TargetId(this, v11);
  if ( !v10 )
LABEL_19:
    sub_2213CDC(TargetId, v4);
  return (limitNum - v8 > 0) & UserItemMaster__IsItemMaxLeftEqual((UserItemMaster_o *)v10, (int32_t)TargetId, 0, 0);
}


bool ShopEntity__IsLimitedIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_24226/*"remainDays"*/);
    byte_59713DC = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_24226/*"remainDays"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 3) & 1;
  }
  if ( !value )
    sub_2213CDC(0, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v6 = System_Int32__Parse(v5, 0);
  if ( v6 )
    return (BYTE1(this->fields.flag) >> 3) & 1;
  return v6;
}


bool ShopEntity__IsMonthlyIconDisplayTarget(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t v6; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59713DD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_24226/*"remainDays"*/);
    byte_59713DD = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_24226/*"remainDays"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (BYTE1(this->fields.flag) >> 4) & 1;
  }
  if ( !value )
    sub_2213CDC(0, v4);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                            value,
                            value->klass->vtable[3].method);
  v6 = System_Int32__Parse(v5, 0);
  if ( v6 )
    return (BYTE1(this->fields.flag) >> 4) & 1;
  return v6;
}


bool ShopEntity__IsOpened(ShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *v8; // x21
  UserEventEntity_o *v9; // x0
  char v10; // w21
  const MethodInfo *v11; // x3
  bool IsOpen; // w0
  const MethodInfo *v13; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  Time = nowTime;
  if ( (byte_59713D1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D1 = 1;
  }
  entity = 0;
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  v8 = UserEventMaster__GetEntity(
         (UserEventMaster_o *)MasterData_object,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         this->fields.eventId,
         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_34;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_34;
    if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
      goto LABEL_22;
  }
  if ( !v8 || (v9 = v8, v10 = 1, !UserEventEntity__getEventFlag(v9, 1, 0)) )
  {
LABEL_22:
    if ( this->fields.shopType == 20 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
      if ( Instance )
      {
        IsOpen = ShopDailyMaster__IsOpen((ShopDailyMaster_o *)Instance, this->fields.id, Time, v11);
LABEL_32:
        v10 = IsOpen;
        return v10 & 1;
      }
      goto LABEL_34;
    }
    if ( Time >= this->fields.openedAt )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( Instance )
        {
          IsOpen = ShopReleaseMaster__IsOpen((ShopReleaseMaster_o *)Instance, this->fields.id, v13);
          goto LABEL_32;
        }
      }
LABEL_34:
      sub_2213CDC(Instance, v6);
    }
    v10 = 0;
  }
  return v10 & 1;
}


bool ShopEntity__IsPaidExchange(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x23
  Il2CppObject *v7; // x21
  UserShopEntity_o *v8; // x26
  int64_t updatedAt; // x21
  __int64 v10; // x2
  int64_t v11; // x22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  bool v14; // w27
  CommonReleaseEntity_array *List; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x25
  ShopEntity___c_c *v18; // x0
  struct ShopEntity___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__42_0; // x26
  Il2CppObject *v21; // x27
  struct ShopEntity___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x26
  System_Collections_Generic_List_object__o *v31; // x25
  int max_length; // w8
  unsigned int v33; // w27
  Il2CppObject *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  DataManager_o *v44; // x1
  Il2CppClass **v45; // x0
  ShopEntity___c_c *v46; // x0
  struct ShopEntity___c_StaticFields *v47; // x8
  System_Func_object__bool__o *_9__42_1; // x23
  Il2CppObject *v49; // x24
  struct ShopEntity___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  ShopEntity___c_c *v57; // x0
  struct ShopEntity___c_StaticFields *v58; // x8
  System_Func_object__bool__o *_9__42_2; // x23
  Il2CppObject *v60; // x24
  struct ShopEntity___c_StaticFields *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  __int64 v69; // x1
  ShopEntity___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x23
  struct ShopEntity___c_StaticFields *v72; // x9
  System_Func_object__long__o *_9__42_3; // x24
  Il2CppObject *v74; // x25
  struct ShopEntity___c_StaticFields *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo_45E4A50 *v82; // x3
  bool v83; // w20
  int32_t FreeShopCondId; // w0
  char v85; // w8
  bool result; // w0
  ShopEntity_o *v87; // x0
  int32_t *v88; // x1
  int32_t *v89; // x2
  const MethodInfo *v90; // x3
  bool v91; // [xsp+Ch] [xbp-94h]
  UserShopEntity_o *v92; // [xsp+10h] [xbp-90h]
  CommonReleaseMaster_o *v93; // [xsp+28h] [xbp-78h]
  __int64 v94; // [xsp+30h] [xbp-70h] BYREF
  int64_t v95; // [xsp+38h] [xbp-68h]
  System_Nullable_long__o v96; // 0:x0.16

  if ( (byte_59713CD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_UserQuestEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Min_UserQuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserQuestEntity___);
    sub_2213A60(&System_Func_UserQuestEntity__long__TypeInfo);
    sub_2213A60(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ShopEntity___c__IsPaidExchange_b__42_0__);
    sub_2213A60(&Method_ShopEntity___c__IsPaidExchange_b__42_1__);
    sub_2213A60(&Method_ShopEntity___c__IsPaidExchange_b__42_2__);
    sub_2213A60(&Method_ShopEntity___c__IsPaidExchange_b__42_3__);
    sub_2213A60(&ShopEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_20594/*"freeShopReleaseDate"*/);
    byte_59713CD = 1;
  }
  v94 = 0;
  v95 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_76;
  Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)v7,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.id,
                                0);
  if ( !Instance )
    goto LABEL_76;
  v8 = (UserShopEntity_o *)Instance;
  Instance = (DataManager_o *)this->fields.script;
  if ( !Instance )
    goto LABEL_76;
  updatedAt = v8->fields.updatedAt;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                (Il2CppObject *)StringLiteral_20594/*"freeShopReleaseDate"*/,
                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Instance )
    goto LABEL_76;
  if ( Instance->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Instance, qword_5984368, v10);
    v14 = !ShopEntity__IsFulFilledFreeExchangeCondition(this, v12) || UserShopEntity__get_IsReturnRarePriShop(v8, 0);
    Instance = (DataManager_o *)ShopEntity__GetFreeShopCondId(this, v13);
    if ( !MasterData_object )
      goto LABEL_76;
    List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)MasterData_object, (int32_t)Instance, 0);
    if ( List )
    {
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
      v93 = (CommonReleaseMaster_o *)MasterData_object;
      v92 = v8;
      v18 = ShopEntity___c_TypeInfo;
      v91 = v14;
      if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v16);
        v18 = ShopEntity___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__42_0 = (System_Func_object__bool__o *)static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !*(&v18->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v18, v16);
          static_fields = ShopEntity___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__42_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonReleaseEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__42_0, v21, Method_ShopEntity___c__IsPaidExchange_b__42_0__, 0);
        v22 = ShopEntity___c_TypeInfo->static_fields;
        v22->__9__42_0 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__42_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v22->__9__42_0,
          (int32_t)_9__42_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = System_Linq_Enumerable__Where_object_(
              v17,
              (System_Func_TSource__bool__o *)_9__42_0,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
      v30 = System_Linq_Enumerable__ToArray_object_(
              v29,
              (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
      v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
      if ( !v30 )
        goto LABEL_76;
      max_length = v30->max_length;
      if ( max_length >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= max_length )
            sub_2213CE4(Instance);
          v34 = v30->m_Items[v33];
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v34 || !v6 )
            break;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        (UserQuestMaster_o *)v6,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        (int32_t)v34[2].klass,
                                        0);
          if ( Instance )
          {
            if ( !v31 )
              break;
            items = v31->fields._items;
            v42 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
            ++v31->fields._version;
            if ( !items )
              break;
            size = v31->fields._size;
            v44 = Instance;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                (Il2CppObject *)Instance,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v31->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v44;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
            }
          }
          max_length = v30->max_length;
          if ( (int)++v33 >= max_length )
            goto LABEL_47;
        }
LABEL_76:
        sub_2213CDC(Instance, v4);
      }
LABEL_47:
      v94 = 0;
      v95 = 0;
      if ( !v31 )
        goto LABEL_76;
      v14 = v91;
      if ( v31->fields._size < 1 )
        goto LABEL_70;
      v46 = ShopEntity___c_TypeInfo;
      if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v4);
        v46 = ShopEntity___c_TypeInfo;
      }
      v47 = v46->static_fields;
      _9__42_1 = (System_Func_object__bool__o *)v47->__9__42_1;
      if ( !_9__42_1 )
      {
        if ( !*(&v46->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v46, v4);
          v47 = ShopEntity___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)v47->__9;
        _9__42_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__42_1, v49, Method_ShopEntity___c__IsPaidExchange_b__42_1__, 0);
        v50 = ShopEntity___c_TypeInfo->static_fields;
        v50->__9__42_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__42_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v50->__9__42_1,
          (int32_t)_9__42_1,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v31,
              (System_Func_T__bool__o *)_9__42_1,
              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_UserQuestEntity___) )
        goto LABEL_70;
      v57 = ShopEntity___c_TypeInfo;
      if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v4);
        v57 = ShopEntity___c_TypeInfo;
      }
      v58 = v57->static_fields;
      _9__42_2 = (System_Func_object__bool__o *)v58->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !*(&v57->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v57, v4);
          v58 = ShopEntity___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)v58->__9;
        _9__42_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__42_2, v60, Method_ShopEntity___c__IsPaidExchange_b__42_2__, 0);
        v61 = ShopEntity___c_TypeInfo->static_fields;
        v61->__9__42_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__42_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v61->__9__42_2,
          (int32_t)_9__42_2,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      v68 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v31,
              (System_Func_TSource__bool__o *)_9__42_2,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserQuestEntity___);
      v70 = ShopEntity___c_TypeInfo;
      v71 = v68;
      if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v69);
        v70 = ShopEntity___c_TypeInfo;
      }
      v72 = v70->static_fields;
      _9__42_3 = (System_Func_object__long__o *)v72->__9__42_3;
      if ( !_9__42_3 )
      {
        if ( !*(&v70->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v70, v69);
          v72 = ShopEntity___c_TypeInfo->static_fields;
        }
        v74 = (Il2CppObject *)v72->__9;
        _9__42_3 = (System_Func_object__long__o *)sub_2213CCC(System_Func_UserQuestEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__42_3, v74, Method_ShopEntity___c__IsPaidExchange_b__42_3__, 0);
        v75 = ShopEntity___c_TypeInfo->static_fields;
        v75->__9__42_3 = (struct System_Func_UserQuestEntity__long__o *)_9__42_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v75->__9__42_3,
          (int32_t)_9__42_3,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
      }
      v96.fields.value = System_Linq_Enumerable__Min_object__59278396(
                           v71,
                           (System_Func_TSource__long__o *)_9__42_3,
                           (const MethodInfo_388843C *)Method_System_Linq_Enumerable_Min_UserQuestEntity___);
      *(_QWORD *)&v96.fields.hasValue = &v94;
      System_Nullable_long____ctor(v96, Method_System_Nullable_long___ctor__, v82);
      if ( (_BYTE)v94 )
        v83 = v95 > v92->fields.updatedAt;
      else
LABEL_70:
        v83 = 1;
      FreeShopCondId = ShopEntity__GetFreeShopCondId(this, v4);
      v85 = !CommonReleaseMaster__IsOpen(v93, FreeShopCondId, 0, 0, 0) || v83;
    }
    else
    {
      v85 = 1;
    }
    return v85 | (updatedAt < v11 || v14);
  }
  else
  {
    sub_221405C(Instance, qword_5984368, v10);
    ShopEntity__SetSvtIdAndCostumeId(v87, v88, v89, v90);
  }
  return result;
}


bool ShopEntity__IsPossessionInfoDisp(ShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59713F6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21971/*"isPossessionInfoDisp"*/);
    byte_59713F6 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21971/*"isPossessionInfoDisp"*/, 0);
}


bool ShopEntity__IsPreparation(
        ShopEntity_o *this,
        System_String_o **message,
        System_String_o **itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_59713D3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  return ShopReleaseMaster__IsPreparation((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, v9);
}


bool ShopEntity__IsQuestHold(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v8; // x21
  struct System_Int32_array *targetIds; // x24
  il2cpp_array_size_t max_length; // x8
  UserQuestMaster_o *v11; // x20
  unsigned __int64 v12; // x25
  int32_t v13; // w22
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59713D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D5 = 1;
  }
  purchaseType = this->fields.purchaseType;
  entity = 0;
  if ( purchaseType == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
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
      v8 = EntityDefinitely;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      targetIds = this->fields.targetIds;
      if ( !targetIds )
        goto LABEL_30;
      max_length = targetIds->max_length;
      if ( (int)max_length >= 1 )
      {
        v11 = (UserQuestMaster_o *)Instance;
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)max_length )
            sub_2213CE4(Instance);
          v13 = targetIds->m_Items[v12];
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v11 )
            break;
          Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                        v11,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v13,
                                        0);
          if ( !entity )
            goto LABEL_28;
          LODWORD(max_length) = targetIds->max_length;
          if ( (__int64)++v12 >= (int)max_length )
            goto LABEL_27;
        }
LABEL_30:
        sub_2213CDC(Instance, v5);
      }
LABEL_27:
      LOBYTE(EntityDefinitely) = v8->fields.num > 0;
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
  int v3; // w8
  Il2CppObject *Master_object; // x20
  __int64 v5; // x1
  Il2CppObject *v6; // x22
  void *All_object; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v9; // x1
  ShopEntity___c_c *v10; // x8
  System_Object_array *v11; // x22
  struct ShopEntity___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__56_0; // x23
  Il2CppObject *v14; // x24
  struct ShopEntity___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Int32_array *targetIds; // x23
  il2cpp_array_size_t max_length; // x8
  bool v24; // w24
  _DWORD *v25; // x21
  unsigned __int64 v26; // x26
  char *v27; // x27
  int32_t v28; // w22
  int v29; // w8
  char *v30; // x9
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59713D9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_UserPresentBoxEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_Predicate_UserPresentBoxEntity__TypeInfo);
    sub_2213A60(&Method_ShopEntity___c__IsServantGet_b__56_0__);
    sub_2213A60(&ShopEntity___c_TypeInfo);
    byte_59713D9 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  All_object = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    All_object = NetworkManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_39;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)v6,
                *(_QWORD *)(*((_QWORD *)All_object + 23) + 64LL),
                0);
  v10 = ShopEntity___c_TypeInfo;
  v11 = (System_Object_array *)VaildList;
  if ( !*(&ShopEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopEntity___c_TypeInfo, v9);
    v10 = ShopEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__56_0 = (System_Predicate_object__o *)static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = ShopEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_UserPresentBoxEntity__TypeInfo);
    System_Predicate_object____ctor(_9__56_0, v14, Method_ShopEntity___c__IsServantGet_b__56_0__, 0);
    v15 = ShopEntity___c_TypeInfo->static_fields;
    v15->__9__56_0 = (struct System_Predicate_UserPresentBoxEntity__o *)_9__56_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__56_0, (int32_t)_9__56_0, v16, v17, v18, v19, v20, v21);
  }
  All_object = System_Array__FindAll_object_(
                 v11,
                 (System_Predicate_T__o *)_9__56_0,
                 (const MethodInfo_39A9774 *)Method_System_Array_FindAll_UserPresentBoxEntity___);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_39;
  max_length = targetIds->max_length;
  v24 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v25 = All_object;
    v26 = 0;
    v27 = (char *)All_object + 32;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)max_length )
        sub_2213CE4(All_object);
      v28 = targetIds->m_Items[v26];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      All_object = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
        All_object = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_39;
      All_object = (void *)UserServantCollectionMaster__TryGetEntity(
                             (UserServantCollectionMaster_o *)Master_object,
                             &entity,
                             *(_QWORD *)(*((_QWORD *)All_object + 23) + 64LL),
                             v28,
                             0);
      if ( entity && entity->fields.status == 2 )
        return v24;
      if ( v25 )
      {
        v29 = v25[6];
        if ( v29 >= 1 )
          break;
      }
LABEL_37:
      LODWORD(max_length) = targetIds->max_length;
      v24 = (__int64)++v26 < (int)max_length;
      if ( (__int64)v26 >= (int)max_length )
        return v24;
    }
    v30 = v27;
    while ( *(_QWORD *)v30 )
    {
      if ( v28 == *(_DWORD *)(*(_QWORD *)v30 + 76LL) )
        return v24;
      --v29;
      v30 += 8;
      if ( !v29 )
        goto LABEL_37;
    }
LABEL_39:
    sub_2213CDC(All_object, v5);
  }
  return v24;
}


bool ShopEntity__IsSetStrikethrough(ShopEntity_o *this, bool isInPreparation, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59713CC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_20591/*"freeShopCondId"*/);
    byte_59713CC = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_20591/*"freeShopCondId"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  ShopDailyEntity_o *ShopDailyEntity; // x0
  int32_t *p_dailyLimitNum; // x8
  int v5; // w21
  const MethodInfo *v6; // x1
  Il2CppObject *Master_object; // x20
  DataManager_o *EntityDefinitely; // x0
  int32_t num; // w8
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *v11; // x0

  if ( (byte_59713D6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D6 = 1;
  }
  if ( (this->fields.flag & 0x8000) != 0 )
    goto LABEL_33;
  if ( this->fields.shopType == 20 && (ShopDailyEntity = ShopEntity__get_ShopDailyEntity(this, method)) != 0 )
    p_dailyLimitNum = &ShopDailyEntity->fields.dailyLimitNum;
  else
    p_dailyLimitNum = &this->fields.limitNum;
  v5 = *p_dailyLimitNum;
  if ( *p_dailyLimitNum < 1 )
  {
LABEL_34:
    LOBYTE(v11) = 0;
    return (char)v11;
  }
  if ( this->fields.shopType == 20 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopDailyMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    EntityDefinitely = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      EntityDefinitely = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( Master_object )
    {
      EntityDefinitely = (DataManager_o *)UserShopDailyMaster__GetEntityDefinitely(
                                            (UserShopDailyMaster_o *)Master_object,
                                            *(_QWORD *)(*(_QWORD *)&EntityDefinitely[1].fields._DispLog + 64LL),
                                            this->fields.id,
                                            0);
      if ( EntityDefinitely )
      {
        num = *(_DWORD *)&EntityDefinitely->fields._DispLog;
        goto LABEL_31;
      }
    }
LABEL_36:
    sub_2213CDC(EntityDefinitely, v6);
  }
  EntityDefinitely = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EntityDefinitely )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        EntityDefinitely,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  EntityDefinitely = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    EntityDefinitely = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_36;
  v11 = UserShopMaster__GetEntityDefinitely(
          (UserShopMaster_o *)MasterData_object,
          *(_QWORD *)(*(_QWORD *)&EntityDefinitely[1].fields._DispLog + 64LL),
          this->fields.baseShopId,
          0);
  if ( !v11 )
    return (char)v11;
  num = v11->fields.num;
LABEL_31:
  if ( num < v5 && !ShopEntity__isNotShopPurchase(this, v6) )
    goto LABEL_34;
LABEL_33:
  LOBYTE(v11) = 1;
  return (char)v11;
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
    sub_2213CE4(this);
  this = (ShopEntity_o *)System_Int32__ToString((int)targetIds + 32, 0);
  if ( !this )
LABEL_5:
    sub_2213CDC(this, svtId);
  v7 = (System_String_o *)this;
  v8 = System_String__Substring_75702848((System_String_o *)this, 0, this->fields.id - 2, 0);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_59713D4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  return ShopReleaseMaster__TryGetClosedMessage((ShopReleaseMaster_o *)Instance, message, itemName, this->fields.id, v9);
}


bool ShopEntity__checkFlag(ShopEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool ShopEntity__checkHoldDisp(ShopEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0

  if ( (byte_59713EA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713EA = 1;
  }
  if ( this->fields.purchaseType != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___),
        Instance = (Il2CppObject *)ShopEntity__get_TargetId(this, v6),
        !MasterData_object) )
  {
    sub_2213CDC(Instance, v4);
  }
  if ( !ItemMaster__isQP((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0) )
  {
    TargetId = ShopEntity__get_TargetId(this, v7);
    return !ItemMaster__isFriendPoint((ItemMaster_o *)MasterData_object, TargetId, 0);
  }
  else
  {
    return 0;
  }
}


int64_t ShopEntity__getHoldCount(ShopEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t TargetId; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  int32_t QuestUseItemGroupId; // w1
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x20
  NetworkManager_c *v21; // x0
  int64_t userIdNumber; // x21

  if ( (byte_59713EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713EB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v6);
  if ( !MasterData_object )
    goto LABEL_28;
  if ( ItemMaster__isMana((ItemMaster_o *)MasterData_object, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( Instance )
      return SLODWORD(Instance[1].fields.datalist);
LABEL_28:
    sub_2213CDC(Instance, v4);
  }
  TargetId = ShopEntity__get_TargetId(this, v7);
  if ( ItemMaster__isRarePri((ItemMaster_o *)MasterData_object, TargetId, 0) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !Instance )
      goto LABEL_28;
    return SHIDWORD(Instance[1].fields.datalist);
  }
  else
  {
    v11 = ShopEntity__get_TargetId(this, v10);
    if ( ItemMaster__isStone((ItemMaster_o *)MasterData_object, v11, 0) )
    {
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_28;
      return *(int *)&Instance[1].fields._DispLog;
    }
    else
    {
      v13 = ShopEntity__get_TargetId(this, v12);
      if ( ItemMaster__IsContinueItem((ItemMaster_o *)MasterData_object, v13, 0) )
      {
        return ItemMaster__GetContinueItemTotalNum((ItemMaster_o *)MasterData_object, 0);
      }
      else
      {
        v15 = ShopEntity__get_TargetId(this, v14);
        if ( ItemMaster__IsFriendShipUpItem((ItemMaster_o *)MasterData_object, v15, 0) )
        {
          v17 = ShopEntity__get_TargetId(this, v16);
          QuestUseItemGroupId = ItemMaster__GetQuestUseItemGroupId((ItemMaster_o *)MasterData_object, v17, 0);
          return ItemMaster__GetFriendShipUpItemTotalNum((ItemMaster_o *)MasterData_object, QuestUseItemGroupId, 0);
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_28;
          v20 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v21 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
            v21 = NetworkManager_TypeInfo;
          }
          userIdNumber = v21->static_fields->userIdNumber;
          Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v19);
          if ( !v20 )
            goto LABEL_28;
          Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                        (UserItemMaster_o *)v20,
                                        userIdNumber,
                                        (int32_t)Instance,
                                        0);
          if ( !Instance )
            goto LABEL_28;
          return SHIDWORD(Instance->fields.m_CancellationTokenSource);
        }
      }
    }
  }
}


System_String_o *ShopEntity__getName(ShopEntity_o *this, const MethodInfo *method)
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

  if ( (byte_59713F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F4 = 1;
  }
  v11 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.shopType == 7 )
  {
    Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v5);
    if ( MasterData_object )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (int32_t)Instance,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Instance )
        return ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0, 0);
    }
LABEL_21:
    sub_2213CDC(Instance, v4);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  Instance = (DataManager_o *)ShopEntity__get_TargetId(this, v9);
  if ( !Master_object )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                &entity,
                                (int32_t)Instance,
                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return this->fields.name;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_21;
  if ( ServantEntity__GetEventJoinNameExistSvtId(v11, 0) >= 1 )
    return ShopEntity__GetOverwriteName(this, this->fields.name, v10);
  else
    return this->fields.name;
}


// local variable allocation has failed, the output may be wrong!
int32_t ShopEntity__getTargetId(ShopEntity_o *this, int32_t id, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_2213CDC(this, *(_QWORD *)&id);
  if ( LODWORD(targetIds->max_length) <= id )
    sub_2213CE4(this);
  return targetIds->m_Items[id];
}


ShopDailyEntity_o *ShopEntity__get_ShopDailyEntity(ShopEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  ShopDailyEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59713C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopDailyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59713C3 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDailyMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  if ( ShopDailyMaster__TryGetEnableEntity((ShopDailyMaster_o *)Master_object, &entity, this->fields.id, 0, v6) )
  {
    v13 = (int)entity;
    this->fields.cachedDailyEntity = entity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cachedDailyEntity, v13, v7, v8, v9, v10, v11, v12);
  }
  return this->fields.cachedDailyEntity;
}


int32_t ShopEntity__get_TargetId(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_2213CDC(this, method);
  if ( !LODWORD(targetIds->max_length) )
    sub_2213CE4(this);
  return targetIds->m_Items[0];
}


int32_t ShopEntity__get_TargetMax(ShopEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  targetIds = this->fields.targetIds;
  if ( !targetIds )
    sub_2213CDC(this, method);
  return targetIds->max_length;
}


bool ShopEntity__isClosedShopPriorityLowCheck(ShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  char v3; // w8
  const MethodInfo *v5; // x3
  const MethodInfo *v7; // x1
  System_String_o *itemName; // [xsp+8h] [xbp-28h] BYREF
  System_String_o *message; // [xsp+10h] [xbp-20h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  v3 = BYTE1(this->fields.flag);
  questId = 0;
  itemName = 0;
  message = 0;
  if ( (v3 & 1) == 0 && !ShopEntity__IsClosedPriorityLowCondEnable(this, method) )
    return 0;
  if ( ShopEntity__isQuestNotClear(this, &questId, 0, v2) )
    return ShopEntity__isQuestNotClearItemClosedSub(this, questId, 0, v5);
  return ShopEntity__IsPreparation(this, &message, &itemName, v5) || ShopEntity__isExpireItemClosed(this, v7);
}


bool ShopEntity__isExpireItemClosed(ShopEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x21
  struct System_Int32_array *targetIds; // x8
  int max_length; // w27
  int32_t v9; // w25
  const MethodInfo *v10; // x2
  int v11; // w8
  int64_t v12; // x26
  _BOOL4 v13; // w28
  int v14; // w29
  __int64 v15; // x24
  int v16; // w22
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x26
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  UserQuestEntity_o *v22; // x26
  Il2CppObject *Entity; // x0
  const MethodInfo *v24; // x1
  int64_t v26; // [xsp+0h] [xbp-70h]
  QuestReleaseMaster_o *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_59713EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713EC = 1;
  }
  if ( this->fields.purchaseType == 6 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    v6 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    targetIds = this->fields.targetIds;
    v27 = (QuestReleaseMaster_o *)Instance;
    if ( !targetIds )
      goto LABEL_42;
    max_length = targetIds->max_length;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = NetworkManager__getTime(0);
    v26 = Instance;
    if ( max_length >= 1 )
    {
      if ( v27 )
      {
        v9 = 0;
        while ( 1 )
        {
          Instance = (int64_t)QuestReleaseMaster__getListByType(v27, 13, 0);
          if ( !Instance )
            goto LABEL_42;
          v11 = *(_DWORD *)(Instance + 24);
          v12 = Instance;
          v13 = v11 < 1;
          if ( v11 >= 1 )
            break;
LABEL_23:
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v17 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
            v17 = NetworkManager_TypeInfo;
          }
          userIdNumber = v17->static_fields->userIdNumber;
          Instance = ShopEntity__getTargetId(this, v9, v10);
          if ( !MasterData_object )
            goto LABEL_42;
          EntityFromId = UserQuestMaster__getEntityFromId(
                           (UserQuestMaster_o *)MasterData_object,
                           userIdNumber,
                           Instance,
                           0);
          if ( EntityFromId )
          {
            v22 = EntityFromId;
            if ( ShopEntity__IsEventQuest(this, v20) )
              goto LABEL_40;
            if ( v22->fields.expireAt < v26 )
              return v13;
          }
          else
          {
            Instance = ShopEntity__getTargetId(this, v9, v21);
            if ( !v6 )
              goto LABEL_42;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
                       Instance,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity && QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0) < v26
              || (v13 & ~ShopEntity__IsEventQuest(this, v24) & 1) == 0 )
            {
              goto LABEL_40;
            }
          }
          if ( ++v9 == max_length )
            goto LABEL_39;
        }
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v11 )
            sub_2213CE4(Instance);
          v15 = *(_QWORD *)(v12 + 8LL * v14 + 32);
          if ( !v15 )
            break;
          v16 = *(_DWORD *)(v15 + 16);
          Instance = ShopEntity__getTargetId(this, v9, v10);
          if ( v16 == (_DWORD)Instance )
          {
            if ( !v6 )
              break;
            Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)v6, *(_DWORD *)(v15 + 16), 0);
            if ( !Instance )
              break;
            Instance = QuestEntity__IsOpenByTime((QuestEntity_o *)Instance, 1, 0);
            if ( (Instance & 1) == 0 )
              goto LABEL_23;
          }
          v11 = *(_DWORD *)(v12 + 24);
          v13 = ++v14 >= v11;
          if ( v14 >= v11 )
            goto LABEL_23;
        }
      }
LABEL_42:
      sub_2213CDC(Instance, v4);
    }
LABEL_39:
    LOBYTE(v13) = 1;
  }
  else
  {
LABEL_40:
    LOBYTE(v13) = 0;
  }
  return v13;
}


bool ShopEntity__isMaxOver(ShopEntity_o *this, int64_t buyCount, int32_t *check, const MethodInfo *method)
{
  bool result; // w0
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x8
  il2cpp_array_size_t max_length; // x8
  ItemMaster_o *v13; // x23
  __int64 v14; // x26
  __int64 v15; // x27
  struct System_Int32_array *v16; // x8
  unsigned __int64 v17; // x24
  int64_t qp; // x24
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

  if ( (byte_59713F3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F3 = 1;
  }
  *check = 0;
  result = 0;
  if ( this->fields.purchaseType == 17 )
    return result;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___),
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_45:
    sub_2213CDC(Instance, v10);
  }
  max_length = targetIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v13 = (ItemMaster_o *)Instance;
  v14 = -(__int64)(unsigned int)max_length;
  v15 = 8;
  while ( 1 )
  {
    v16 = this->fields.targetIds;
    if ( !v16 )
      goto LABEL_45;
    v17 = v15 - 8;
    if ( v15 - 8 >= (unsigned __int64)LODWORD(v16->max_length) )
      goto LABEL_46;
    if ( !v13 )
      goto LABEL_45;
    Instance = (DataManager_o *)ItemMaster__isQP(v13, *((_DWORD *)&v16->obj.klass + v15), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      qp = SelfUserGame->fields.qp;
      setNum = this->fields.setNum;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( qp + setNum * buyCount > *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL) )
      {
        v30 = 1;
        goto LABEL_43;
      }
      goto LABEL_40;
    }
    v20 = this->fields.targetIds;
    if ( !v20 )
      goto LABEL_45;
    if ( v17 >= LODWORD(v20->max_length) )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isMana(v13, *((_DWORD *)&v20->obj.klass + v15), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_45;
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      mana = SelfUserGame->fields.mana;
      v22 = this->fields.setNum;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( mana + v22 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL) )
      {
        v30 = 5;
        goto LABEL_43;
      }
      goto LABEL_40;
    }
    v23 = this->fields.targetIds;
    if ( !v23 )
      goto LABEL_45;
    if ( v17 >= LODWORD(v23->max_length) )
      goto LABEL_46;
    Instance = (DataManager_o *)ItemMaster__isRarePri(v13, *((_DWORD *)&v23->obj.klass + v15), 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !SelfUserGame )
      goto LABEL_45;
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    rarePri = SelfUserGame->fields.rarePri;
    v25 = this->fields.setNum;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( rarePri + v25 * buyCount > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL) )
    {
      v30 = 22;
      goto LABEL_43;
    }
LABEL_40:
    ++v15;
    if ( v14 + v15 == 8 )
      return 0;
  }
  v26 = this->fields.targetIds;
  if ( !v26 )
    goto LABEL_45;
  if ( v17 >= LODWORD(v26->max_length) )
LABEL_46:
    sub_2213CE4(Instance);
  Instance = (DataManager_o *)ItemMaster__isFriendPoint(v13, *((_DWORD *)&v26->obj.klass + v15), 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_45;
  Instance = (DataManager_o *)UserGameEntity__GetFriendPoint(SelfUserGame, 0);
  v27 = BalanceConfig_TypeInfo;
  v28 = this->fields.setNum;
  v29 = (int)Instance;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v28 * buyCount + v29 <= v27->static_fields->FriendPointMax )
    goto LABEL_40;
  v30 = 13;
LABEL_43:
  result = 1;
  *check = v30;
  return result;
}


bool ShopEntity__isNotShopPurchase(ShopEntity_o *this, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  ShopReleaseEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  ShopReleaseEntity_array **i; // x9

  if ( (byte_59713F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713F1 = 1;
  }
  purchaseType = this->fields.purchaseType;
  if ( purchaseType != 9 && purchaseType != 4 )
    goto LABEL_14;
  Instance = (ShopReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ShopReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0
    || (Instance = ShopReleaseMaster__GetEntitiyList((ShopReleaseMaster_o *)Instance, this->fields.id, v6)) == 0 )
  {
LABEL_18:
    sub_2213CDC(Instance, v5);
  }
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    for ( i = (ShopReleaseEntity_array **)Instance->m_Items; ; ++i )
    {
      Instance = *i;
      if ( !*i )
        goto LABEL_18;
      if ( HIDWORD(Instance->bounds) == 37 )
        break;
      if ( !--max_length )
        return max_length & 1;
    }
    LOBYTE(max_length) = BYTE4(Instance->m_Items[1]);
    if ( (_BYTE)max_length )
      LOBYTE(max_length) = !ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)Instance, v5);
  }
  else
  {
LABEL_14:
    LOBYTE(max_length) = 0;
  }
  return max_length & 1;
}


bool ShopEntity__isQuestNotClear(ShopEntity_o *this, int32_t *questId, bool checkExpired, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_59713ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713ED = 1;
  }
  *questId = 0;
  if ( this->fields.purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, questId, v8);
}


bool ShopEntity__isQuestNotClearItemClosed(ShopEntity_o *this, bool checkExpired, const MethodInfo *method)
{
  int32_t purchaseType; // w8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  int32_t questId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59713EF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713EF = 1;
  }
  purchaseType = this->fields.purchaseType;
  questId = 0;
  if ( purchaseType != 6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  return ShopReleaseMaster__isQuestNotClearSet((ShopReleaseMaster_o *)Instance, this->fields.id, &questId, v8)
      && ShopEntity__isQuestNotClearItemClosedSub(this, questId, checkExpired, v9);
}


bool ShopEntity__isQuestNotClearItemClosedSub(
        ShopEntity_o *this,
        int32_t questId,
        bool checkExpired,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Int32_array *targetIds; // x8
  int max_length; // w24
  UserQuestMaster_o *v11; // x21
  bool v12; // w26
  int v13; // w27
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x23

  if ( (byte_59713EE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59713EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (targetIds = this->fields.targetIds) == 0) )
  {
LABEL_24:
    sub_2213CDC(Instance, v8);
  }
  max_length = targetIds->max_length;
  if ( max_length >= 1 )
  {
    v11 = (UserQuestMaster_o *)Instance;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_24;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       v11,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       questId,
                       0);
      v15 = EntityFromId;
      if ( !checkExpired || !EntityFromId )
        break;
      if ( !UserQuestEntity__IsNotExpired(EntityFromId, 0) )
        goto LABEL_19;
LABEL_20:
      v12 = ++v13 >= max_length;
      if ( max_length == v13 )
        return v12;
    }
    if ( !EntityFromId )
      return v12;
LABEL_19:
    if ( !UserQuestEntity__getClearNum(v15, 0) )
      return v12;
    goto LABEL_20;
  }
  return 1;
}


void ShopEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59713FE & 1) == 0 )
  {
    sub_2213A60(&ShopEntity___c_TypeInfo);
    byte_59713FE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ShopEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopEntity___c_TypeInfo->static_fields->__9 = (struct ShopEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopEntity___c___ctor(ShopEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ShopEntity___c___GetAnotherPayItemIds_b__64_0(
        ShopEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_59713FF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59713FF = 1;
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


bool ShopEntity___c___GetIsAlreadyInPossession_b__55_0(
        ShopEntity___c_o *this,
        UserPresentBoxEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_2213CDC(this, 0);
  return v->fields.giftType == 1;
}


bool ShopEntity___c___IsPaidExchange_b__42_0(
        ShopEntity___c_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.condType == 1;
}


bool ShopEntity___c___IsPaidExchange_b__42_1(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.clearNum > 0;
}


bool ShopEntity___c___IsPaidExchange_b__42_2(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.clearNum > 0;
}


int64_t ShopEntity___c___IsPaidExchange_b__42_3(ShopEntity___c_o *this, UserQuestEntity_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.updatedAt;
}


bool ShopEntity___c___IsServantGet_b__56_0(ShopEntity___c_o *this, UserPresentBoxEntity_o *v, const MethodInfo *method)
{
  if ( !v )
    sub_2213CDC(this, 0);
  return v->fields.giftType == 1;
}