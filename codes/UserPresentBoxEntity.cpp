void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9787 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F9787 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_40F9782 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__long___, presentId);
    byte_40F9782 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_18C2368 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  if ( (byte_40F9786 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_690/*"+"*/, *(_QWORD *)&gType);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v7);
    sub_B16FFC(&StringLiteral_23611/*"×"*/, v8);
    byte_40F9786 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B170D4();
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v10 = &StringLiteral_690/*"+"*/;
  if ( !IsCountableWithPlus )
    v10 = &StringLiteral_23611/*"×"*/;
  v11 = (System_String_o *)*v10;
  v12 = System_Int32__ToString_38275808((int32_t)&v14, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  return System_String__Concat_43743732(v11, v12, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  System_String_o *Name; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  LocalizationManager_c *v36; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  WebViewManager_o *v39; // x0
  ServantCostumeMaster_o *v40; // x0
  ServantCostumeEntity_o *v41; // x21
  System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x1
  WebViewManager_o *v50; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x0
  WarEntity_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *age; // x1
  ItemEntity_o *v60; // x22
  UserPresentBoxEntity_o *v61; // x0
  const MethodInfo *v62; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v65; // x2
  __int64 *v66; // x8
  WebViewManager_o *v67; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x0
  WarEntity_o *v69; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v70; // x22
  WebViewManager_o *v71; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // x0
  WarEntity_o *v73; // x0

  if ( (byte_40F9783 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_6430/*"FRIENDSHIP_NAME"*/, v22);
    sub_B16FFC(&StringLiteral_14682/*"USER_EXP_NAME"*/, v23);
    sub_B16FFC(&StringLiteral_8726/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v24);
    sub_B16FFC(&StringLiteral_1/*""*/, v25);
    byte_40F9783 = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_53;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    this->fields.objectId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_53;
      Name = ServantEntity__getName(Entity, 0, -1, 0LL);
      goto LABEL_50;
    case 2:
      v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v50 )
        goto LABEL_53;
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v50,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !v51 )
        goto LABEL_53;
      v52 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v51,
              this->fields.objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v52 )
        goto LABEL_53;
      age = v52->fields.age;
      v60 = (ItemEntity_o *)v52;
      *nameText = age;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)age, v53, v54, v55, v56, v57, v58);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v65 = v60;
      goto LABEL_51;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = &StringLiteral_6430/*"FRIENDSHIP_NAME"*/;
      goto LABEL_37;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = &StringLiteral_14682/*"USER_EXP_NAME"*/;
LABEL_37:
      Name = LocalizationManager__Get((System_String_o *)*v66, 0LL);
      goto LABEL_50;
    case 5:
      v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v71 )
        goto LABEL_53;
      v72 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v71,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !v72 )
        goto LABEL_53;
      v73 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v72,
              this->fields.objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !v73 )
        goto LABEL_53;
      v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v73->fields.name;
      goto LABEL_46;
    case 9:
      objectId = this->fields.objectId;
      v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v39 )
        goto LABEL_53;
      v40 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v39,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v40 )
        goto LABEL_53;
      v41 = ServantCostumeMaster__GetEntity(v40, objectId / 100, objectId % 100, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8726/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !v41 )
        goto LABEL_53;
      unknownNameText = System_String__Format(v42, (Il2CppObject *)v41->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_24;
    case 0xB:
      v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v67
        || (v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v67,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (v69 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v68,
                    this->fields.objectId,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_53:
        sub_B170D4();
      }
      v70 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v69->fields.bannerId;
LABEL_46:
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v70, 0LL);
LABEL_50:
      *nameText = Name;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v30, v31, v32, v33, v34, v35);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v65 = 0LL;
LABEL_51:
      v49 = UserPresentBoxEntity__GetCountText(v61, giftType, v65, num, v62);
      *countText = v49;
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F87E5 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, nameText);
        byte_40F87E5 = 1;
      }
      v36 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v36->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_24:
      sub_B16F98(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v49 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_B16F98((BattleServantConfConponent_o *)countText, (System_Int32_array **)v49, v43, v44, v45, v46, v47, v48);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t Time; // x20
  const MethodInfo *v11; // x1
  int64_t v13; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9785 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, checkItemExpireTime);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9785 = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          this->fields.objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
  if ( UserPresentBoxEntity__expireAt(this, v11) <= Time )
    return 1;
  if ( !entity )
LABEL_22:
    sub_B170D4();
  return *(_QWORD *)&entity->fields.eventId <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxMaster_c *v4; // x0
  BalanceConfig_c *v5; // x0
  int64_t createdAt; // x19
  BalanceConfig_c *v8; // x0

  if ( (byte_40F9784 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v3);
    byte_40F9784 = 1;
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