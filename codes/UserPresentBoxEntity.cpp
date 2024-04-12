void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEFDF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEFDF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_42AEFDA & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_42AEFDA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_1A4E118 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePrimaryKey(
        UserPresentBoxEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPresentBoxEntity__CreatePK(this->fields.receiveUserId, this->fields.presentId, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPresentBoxEntity__GetCountText(
        UserPresentBoxEntity_o *this,
        int32_t gType,
        ItemEntity_o *itemEnt,
        int32_t num,
        const MethodInfo *method)
{
  bool IsCountableWithPlus; // w0
  __int64 *v8; // x8
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = num;
  if ( (byte_42AEFDE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    this = (UserPresentBoxEntity_o *)sub_B52984(&StringLiteral_23899/*"×"*/);
    byte_42AEFDE = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B52A5C(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v8 = &StringLiteral_701/*"+"*/;
  if ( !IsCountableWithPlus )
    v8 = &StringLiteral_23899/*"×"*/;
  v9 = (System_String_o *)*v8;
  v10 = System_Int32__ToString_39387012((int32_t)&v12, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
  return System_String__Concat_44568316(v9, v10, 0LL);
}


void __fastcall UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_o *Name; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  LocalizationManager_c *v20; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *datalist; // x1
  DataManager_o *v38; // x22
  UserPresentBoxEntity_o *v39; // x0
  const MethodInfo *v40; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v43; // x2
  __int64 *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x22

  if ( (byte_42AEFDB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_6497/*"FRIENDSHIP_NAME"*/);
    sub_B52984(&StringLiteral_14841/*"USER_EXP_NAME"*/);
    sub_B52984(&StringLiteral_8808/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEFDB = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
      goto LABEL_50;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      datalist = (System_String_o *)Instance->fields.datalist;
      v38 = Instance;
      *nameText = datalist;
      sub_B52920(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)datalist,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v43 = (ItemEntity_o *)v38;
      goto LABEL_51;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_6497/*"FRIENDSHIP_NAME"*/;
      goto LABEL_37;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_14841/*"USER_EXP_NAME"*/;
LABEL_37:
      Name = LocalizationManager__Get((System_String_o *)*v44, 0LL);
      goto LABEL_50;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
      goto LABEL_46;
    case 9:
      objectId = this->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_53;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8808/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !Entity )
        goto LABEL_53;
      unknownNameText = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_24;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.objectId,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_53:
        sub_B52A5C(Instance, v12);
      }
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.saveNameList;
LABEL_46:
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(lookup, 0LL);
LABEL_50:
      *nameText = Name;
      sub_B52920((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v14, v15, v16, v17, v18, v19);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v43 = 0LL;
LABEL_51:
      v30 = UserPresentBoxEntity__GetCountText(v39, giftType, v43, num, v40);
      *countText = v30;
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42ADEE6 )
      {
        sub_B52984(&LocalizationManager_TypeInfo);
        byte_42ADEE6 = 1;
      }
      v20 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v20->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_24:
      sub_B52920(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_B52920((BattleServantConfConponent_o *)countText, (System_Int32_array **)v30, v24, v25, v26, v27, v28, v29);
}


bool __fastcall UserPresentBoxEntity__IsEnableFlag(
        UserPresentBoxEntity_o *this,
        int32_t flagIndex,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.flag & (1 << flagIndex)) < 0) ^ v3 | ((this->fields.flag & (1 << flagIndex)) == 0));
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxEntity__IsExpired(
        UserPresentBoxEntity_o *this,
        bool checkItemExpireTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t Time; // x20
  const MethodInfo *v8; // x1
  int64_t v10; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEFDD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEFDD = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_14:
    v10 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    return v10 <= NetworkManager__getTime(0LL);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v8);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_22:
    sub_B52A5C(Instance, v6);
  return *(_QWORD *)&entity->fields.eventId <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  UserPresentBoxMaster_c *v3; // x0
  BalanceConfig_c *v4; // x0
  int64_t createdAt; // x19
  BalanceConfig_c *v7; // x0

  if ( (byte_42AEFDC & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UserPresentBoxMaster_TypeInfo);
    byte_42AEFDC = 1;
  }
  v3 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v3 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v3->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    createdAt = this->fields.createdAt;
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    return createdAt + v7->static_fields->PresentBoxValidTime;
  }
  else
  {
    v4 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    return v4->static_fields->NoneExpireTime;
  }
}