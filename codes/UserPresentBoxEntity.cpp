void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16F72 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  if ( (byte_4B16F6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__long___, presentId, method);
    byte_4B16F6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_2F11040 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool IsCountableWithPlus; // w0
  __int64 *v12; // x8
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = num;
  if ( (byte_4B16F71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, *(_QWORD *)&gType, itemEnt);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v7, v8);
    this = (UserPresentBoxEntity_o *)sub_1BCA7E0(&StringLiteral_25418/*"×"*/, v9, v10);
    byte_4B16F71 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1BCAA3C(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v12 = &StringLiteral_855/*"+"*/;
  if ( !IsCountableWithPlus )
    v12 = &StringLiteral_25418/*"×"*/;
  v13 = (System_String_o *)*v12;
  v14 = System_Int32__ToString_63206828((int32_t)&v16, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  return System_String__Concat_62401220(v13, v14, 0LL);
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  void *Instance; // x0
  __int64 v42; // x1
  System_String_o *Name; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x1
  ItemEntity_o *v57; // x22
  UserPresentBoxEntity_o *v58; // x0
  const MethodInfo *v59; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v62; // x2
  __int64 *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v64; // x22
  LocalizationManager_c *v65; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  __int64 v68; // x1
  ServantCostumeEntity_o *Entity; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x1

  if ( (byte_4B16F6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText, countText);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_6607/*"FRIENDSHIP_NAME"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_14996/*"USER_EXP_NAME"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8806/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    byte_4B16F6E = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
      goto LABEL_44;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v56 = (System_String_o *)*((_QWORD *)Instance + 3);
      v57 = (ItemEntity_o *)Instance;
      *nameText = v56;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v56, v50, v51, v52, v53, v54, v55);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v62 = v57;
      goto LABEL_45;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v63 = &StringLiteral_6607/*"FRIENDSHIP_NAME"*/;
      goto LABEL_18;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v63 = &StringLiteral_14996/*"USER_EXP_NAME"*/;
LABEL_18:
      Name = LocalizationManager__Get((System_String_o *)*v63, 0LL);
      goto LABEL_44;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_47;
      v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      goto LABEL_41;
    case 9:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_47;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !Entity )
        goto LABEL_47;
      unknownNameText = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_36;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         this->fields.objectId,
                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_47:
        sub_1BCAA3C(Instance, v42);
      }
      v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 6);
LABEL_41:
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v42);
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v64, 0LL);
LABEL_44:
      *nameText = Name;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)Name, v44, v45, v46, v47, v48, v49);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v62 = 0LL;
LABEL_45:
      v76 = UserPresentBoxEntity__GetCountText(v58, giftType, v62, num, v59);
      *countText = v76;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      if ( !byte_4B1194D )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, nameText, countText);
        byte_4B1194D = 1;
      }
      v65 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
        v65 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v65->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_36:
      sub_1BCA784(
        (PartyOrganizationUtility_o *)nameText,
        (int64_t)unknownNameText,
        (int64_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v76 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)countText, (int64_t)v76, v70, v71, v72, v73, v74, v75);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int64_t Time; // x20
  const MethodInfo *v14; // x1
  __int64 v16; // x1
  int64_t v17; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16F70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, checkItemExpireTime, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16F70 = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_13;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_13:
    v17 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
    return v17 <= NetworkManager__getTime(0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, checkItemExpireTime);
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v14);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_21:
    sub_1BCAA3C(Instance, v12);
  return (__int64)entity[6].klass <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserPresentBoxMaster_c *v6; // x0
  BalanceConfig_c *v7; // x0
  BalanceConfig_c *v9; // x0
  int64_t createdAt; // x19

  if ( (byte_4B16F6F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v4, v5);
    byte_4B16F6F = 1;
  }
  v6 = UserPresentBoxMaster_TypeInfo;
  if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, method);
    v6 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v6->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    v9 = BalanceConfig_TypeInfo;
    createdAt = this->fields.createdAt;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v9 = BalanceConfig_TypeInfo;
    }
    return createdAt + v9->static_fields->PresentBoxValidTime;
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v7 = BalanceConfig_TypeInfo;
    }
    return v7->static_fields->NoneExpireTime;
  }
}