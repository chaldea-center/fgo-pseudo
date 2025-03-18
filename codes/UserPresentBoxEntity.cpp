void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D72 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22D72 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_4C22D6D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__long___, presentId);
    byte_4C22D6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_2FEE518 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = num;
  if ( (byte_4C22D71 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_837/*", applePrice:"*/, *(_QWORD *)&gType);
    sub_1C3B764(&StringLiteral_9395/*"ONE_ACT"*/, v7);
    this = (UserPresentBoxEntity_o *)sub_1C3B764(&StringLiteral_25682, v8);
    byte_4C22D71 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1C3B9C0(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v10 = &StringLiteral_837/*", applePrice:"*/;
  if ( !IsCountableWithPlus )
    v10 = &StringLiteral_25682;
  v11 = (System_String_o *)*v10;
  v12 = System_Int32__ToString_64174220((int32_t)&v14, (System_String_o *)StringLiteral_9395/*"ONE_ACT"*/, 0LL);
  return System_String__Concat_63368612(v11, v12, 0LL);
}


void __fastcall UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  void *Instance; // x0
  __int64 v27; // x1
  System_String_o *Name; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x1
  ItemEntity_o *v42; // x22
  UserPresentBoxEntity_o *v43; // x0
  const MethodInfo *v44; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v47; // x2
  __int64 *v48; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v49; // x22
  LocalizationManager_c *v50; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_o *v60; // x1

  if ( (byte_4C22D6E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C3B764(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v17);
    sub_1C3B764(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18);
    sub_1C3B764(&LocalizationManager_TypeInfo, v19);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C3B764(&StringLiteral_6650/*"Firebase.TestLab.GameLoop, Firebase.TestLab"*/, v22);
    sub_1C3B764(&StringLiteral_15130/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/, v23);
    sub_1C3B764(&StringLiteral_8858/*"Minor"*/, v24);
    sub_1C3B764(&StringLiteral_1/*""*/, v25);
    byte_4C22D6E = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0LL);
      goto LABEL_44;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v41 = (System_String_o *)*((_QWORD *)Instance + 3);
      v42 = (ItemEntity_o *)Instance;
      *nameText = v41;
      sub_1C3B708((PartyOrganizationUtility_o *)nameText, (int64_t)v41, v35, v36, v37, v38, v39, v40);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v47 = v42;
      goto LABEL_45;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_6650/*"Firebase.TestLab.GameLoop, Firebase.TestLab"*/;
      goto LABEL_18;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_15130/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
LABEL_18:
      Name = LocalizationManager__Get((System_String_o *)*v48, 0LL);
      goto LABEL_44;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      goto LABEL_41;
    case 9:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_47;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8858/*"Minor"*/, 0LL);
      if ( !Entity )
        goto LABEL_47;
      unknownNameText = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_36;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         this->fields.objectId,
                         (const MethodInfo_329AE48 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_47:
        sub_1C3B9C0(Instance, v27);
      }
      v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 6);
LABEL_41:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47918404(v49, 0LL);
LABEL_44:
      *nameText = Name;
      sub_1C3B708((PartyOrganizationUtility_o *)nameText, (int64_t)Name, v29, v30, v31, v32, v33, v34);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v47 = 0LL;
LABEL_45:
      v60 = UserPresentBoxEntity__GetCountText(v43, giftType, v47, num, v44);
      *countText = v60;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C1D52E )
      {
        sub_1C3B764(&LocalizationManager_TypeInfo, nameText);
        byte_4C1D52E = 1;
      }
      v50 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v50->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_36:
      sub_1C3B708(
        (PartyOrganizationUtility_o *)nameText,
        (int64_t)unknownNameText,
        (int64_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v60 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)countText, (int64_t)v60, v54, v55, v56, v57, v58, v59);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22D70 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, checkItemExpireTime);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C22D70 = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_13;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_13:
    v13 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    return v13 <= NetworkManager__getTime(0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v11);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_21:
    sub_1C3B9C0(Instance, v9);
  return (__int64)entity[6].klass <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserPresentBoxMaster_c *v4; // x0
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v7; // x0
  int64_t createdAt; // x19

  if ( (byte_4C22D6F & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&UserPresentBoxMaster_TypeInfo, v3);
    byte_4C22D6F = 1;
  }
  v4 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v4 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v4->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    v7 = BalanceConfig_TypeInfo;
    createdAt = this->fields.createdAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    return createdAt + v7->static_fields->PresentBoxValidTime;
  }
  else
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    return v5->static_fields->NoneExpireTime;
  }
}