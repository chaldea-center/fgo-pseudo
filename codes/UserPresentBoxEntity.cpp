void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418707D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418707D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_4187078 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__long___, presentId);
    byte_4187078 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_1732AD0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  bool IsCountableWithPlus; // w0
  __int64 *v10; // x8
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = num;
  if ( (byte_418707C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_691/*"+"*/, *(_QWORD *)&gType);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v7);
    this = (UserPresentBoxEntity_o *)sub_B2C35C(&StringLiteral_23705/*"×"*/, v8);
    byte_418707C = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B2C434(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v10 = &StringLiteral_691/*"+"*/;
  if ( !IsCountableWithPlus )
    v10 = &StringLiteral_23705/*"×"*/;
  v11 = (System_String_o *)*v10;
  v12 = System_Int32__ToString_38381416((int32_t)&v14, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  return System_String__Concat_44305532(v11, v12, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  System_String_o *Name; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  LocalizationManager_c *v35; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *datalist; // x1
  DataManager_o *v53; // x22
  UserPresentBoxEntity_o *v54; // x0
  const MethodInfo *v55; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v58; // x2
  __int64 *v59; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x22

  if ( (byte_4187079 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_6454/*"FRIENDSHIP_NAME"*/, v22);
    sub_B2C35C(&StringLiteral_14742/*"USER_EXP_NAME"*/, v23);
    sub_B2C35C(&StringLiteral_8755/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_4187079 = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
      goto LABEL_50;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      datalist = (System_String_o *)Instance->fields.datalist;
      v53 = Instance;
      *nameText = datalist;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)datalist,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v58 = (ItemEntity_o *)v53;
      goto LABEL_51;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_6454/*"FRIENDSHIP_NAME"*/;
      goto LABEL_37;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_14742/*"USER_EXP_NAME"*/;
LABEL_37:
      Name = LocalizationManager__Get((System_String_o *)*v59, 0LL);
      goto LABEL_50;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
      goto LABEL_46;
    case 9:
      objectId = this->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_53;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8755/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !Entity )
        goto LABEL_53;
      unknownNameText = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_24;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.objectId,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_53:
        sub_B2C434(Instance, v27);
      }
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.saveNameList;
LABEL_46:
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(lookup, 0LL);
LABEL_50:
      *nameText = Name;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v29, v30, v31, v32, v33, v34);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v58 = 0LL;
LABEL_51:
      v45 = UserPresentBoxEntity__GetCountText(v54, giftType, v58, num, v55);
      *countText = v45;
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4185BC0 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, nameText);
        byte_4185BC0 = 1;
      }
      v35 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v35->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_24:
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v45 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)countText, (System_Int32_array **)v45, v39, v40, v41, v42, v43, v44);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int64_t Time; // x20
  const MethodInfo *v11; // x1
  int64_t v13; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418707B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, checkItemExpireTime);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418707B = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_14:
    v13 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    return v13 <= NetworkManager__getTime(0LL);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v11);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_22:
    sub_B2C434(Instance, v9);
  return *(_QWORD *)&entity->fields.eventId <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxMaster_c *v4; // x0
  BalanceConfig_c *v5; // x0
  int64_t createdAt; // x19
  BalanceConfig_c *v8; // x0

  if ( (byte_418707A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v3);
    byte_418707A = 1;
  }
  v4 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v4 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v4->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    createdAt = this->fields.createdAt;
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    return createdAt + v8->static_fields->PresentBoxValidTime;
  }
  else
  {
    v5 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    return v5->static_fields->NoneExpireTime;
  }
}