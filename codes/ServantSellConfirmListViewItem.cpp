// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItem___ctor(
        ServantSellConfirmListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  IconLabelInfo_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  System_Int64_array *v29; // x2
  System_Int64_array *v30; // x3
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2

  if ( (byte_4C1E2A2 & 1) == 0 )
  {
    sub_1C3B764(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4C1E2A2 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  ServantSellConfirmListViewItem__Init(this, index, v25);
  ServantSellConfirmListViewItem__SetServantData(this, userServantEntity, v26);
  ServantSellConfirmListViewItem__SetCommandCodeData(this, 0LL, v27);
  ServantSellConfirmListViewItem__SetData(this, 1, v28);
  ServantSellConfirmListViewItem__SetServantUses(this, 1, v29, v30, v31);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  ServantSellConfirmListViewItem__SetSortValues(this, 1, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItem___ctor_33977268(
        ServantSellConfirmListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isCommandCodeEquipped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  IconLabelInfo_o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Int64_array *v27; // x2
  System_Int64_array *v28; // x3
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2

  if ( (byte_4C1E2A3 & 1) == 0 )
  {
    sub_1C3B764(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4C1E2A3 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  ServantSellConfirmListViewItem__Init(this, index, v23);
  ServantSellConfirmListViewItem__SetServantData(this, 0LL, v24);
  ServantSellConfirmListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v25);
  ServantSellConfirmListViewItem__SetData(this, 2, v26);
  ServantSellConfirmListViewItem__SetServantUses(this, 2, v27, v28, v29);
  this->fields._IsCommandCodeEquipped_k__BackingField = isCommandCodeEquipped;
  ServantSellConfirmListViewItem__SetSortValues(this, 2, v30);
  this->fields._IsCommandCode_k__BackingField = 1;
}


void __fastcall ServantSellConfirmListViewItem__ClearIconLabelInfo(
        ServantSellConfirmListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4C1E2AA & 1) == 0 )
  {
    sub_1C3B764(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_4C1E2AA = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0LL);
  }
}


int32_t __fastcall ServantSellConfirmListViewItem__GetAttribute(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_9;
  if ( servantEntity->fields.type == 2 )
    return 1;
  this = (ServantSellConfirmListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_9:
    sub_1C3B9C0(this, type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) )
    return 2;
  else
    return 0;
}


int32_t __fastcall ServantSellConfirmListViewItem__GetClassId(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return -1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C3B9C0(this, type);
  return servantEntity->fields.classId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmListViewItem__GetIsEquippedCommandCodeServant(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int64_t v15; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C1E2A7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C1E2A7 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v10);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_22;
      v14 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      v15 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v14;
      *(_QWORD *)&v18.fields.fakeValue = v13;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v18, 0LL);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v15,
             (int)Instance,
             0LL) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1C3B9C0(Instance, v10);
      }
    }
LABEL_20:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


int32_t __fastcall ServantSellConfirmListViewItem__GetPartyIndex(
        ServantSellConfirmListViewItem_o *this,
        int64_t userServantId,
        System_Int64_array *ids,
        bool isEquip,
        const MethodInfo *method)
{
  signed int max_length; // w9
  __int64 v7; // x0

  if ( !ids )
    sub_1C3B9C0(this, userServantId);
  max_length = ids->max_length;
  if ( max_length < 1 )
  {
LABEL_7:
    LODWORD(v7) = -1;
  }
  else
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v7 )
        sub_1C3B9C8(v7, userServantId);
      if ( ids->m_Items[(int)v7] == userServantId )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( max_length == (_DWORD)v7 )
        goto LABEL_7;
    }
    this->fields._IsPartyEquip_k__BackingField = isEquip;
    this->fields._IsUse_k__BackingField = isEquip;
    this->fields._IsParty_k__BackingField = !isEquip;
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantSellConfirmListViewItem__GetRarity(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *UserCommandCodeEntity_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C1E2A6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C1E2A6 = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_15;
    return UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v10 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
        v9 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
        v11 = (ServantLimitMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                          v15,
                                                          0LL);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v13 = (int)UserCommandCodeEntity_k__BackingField;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                            UserServantEntity_k__BackingField->fields.limitCount,
                                                            0LL);
          if ( v11 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v11,
                                                      v13,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0LL);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_1C3B9C0(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
    }
    return -1;
  }
}


void __fastcall ServantSellConfirmListViewItem__Init(
        ServantSellConfirmListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  IconLabelInfo_o *iconLabelInfo1; // x8
  ServantSellConfirmListViewItem_o *v5; // x0
  const MethodInfo *v6; // x2

  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.index = index;
  ServantSellConfirmListViewItem__ClearIconLabelInfo(this, iconLabelInfo1, method);
  ServantSellConfirmListViewItem__ClearIconLabelInfo(v5, this->fields.iconLabelInfo2, v6);
  *(_WORD *)&this->fields._IsParty_k__BackingField = 0;
  *(_WORD *)&this->fields._IsSwapLock_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsPartyEquip_k__BackingField = 0;
  *(_WORD *)&this->fields._IsFavorite_k__BackingField = 0;
  this->fields._DragSelectNum_k__BackingField = -1;
  this->fields._IsMaterialTdSvt_k__BackingField = 0;
}


void __fastcall ServantSellConfirmListViewItem__ModifyItem(
        ServantSellConfirmListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall ServantSellConfirmListViewItem__SetCommandCodeData(
        ServantSellConfirmListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationUtility_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C1E2A5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_1C3B764(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1E2A5 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (PartyOrganizationUtility_c *)userCommandCodeEntity;
    sub_1C3B708(
      p_UserCommandCodeEntity_k__BackingField,
      (int64_t)userCommandCodeEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v15;
    *(_QWORD *)&v33.fields.fakeValue = v14;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                    v33,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
            (int64_t)Entity,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1C3B9C0(Instance, v17);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1C3B708(p_UserCommandCodeEntity_k__BackingField, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1C3B708((PartyOrganizationUtility_o *)p_commandCodeEntity, 0LL, v27, v28, v29, v30, v31, v32);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


void __fastcall ServantSellConfirmListViewItem__SetData(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( type == 1 )
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      sub_1C3B9C0(this, type);
    classId = servantEntity->fields.classId;
  }
  else
  {
    classId = -1;
  }
  this->fields.classId = classId;
  this->fields.rarity = ServantSellConfirmListViewItem__GetRarity(this, type, method);
  this->fields.attribute = ServantSellConfirmListViewItem__GetAttribute(this, type, v7);
  this->fields._IsEquippedCommandCodeServant_k__BackingField = ServantSellConfirmListViewItem__GetIsEquippedCommandCodeServant(
                                                                 this,
                                                                 type,
                                                                 v8);
}


void __fastcall ServantSellConfirmListViewItem__SetServantData(
        ServantSellConfirmListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServantEntity_k__BackingField; // x21
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  Il2CppObject *Entity; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantEntity_o *v28; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C1E2A4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1E2A4 = 1;
  }
  p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)userServantEntity;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
      (int64_t)userServantEntity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_16;
    this->fields._SvtId_k__BackingField = (*p_UserServantEntity_k__BackingField)[5];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v18;
    *(_QWORD *)&v35.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v35, 0LL);
    if ( !v19 )
      goto LABEL_16;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = (struct ServantEntity_o *)Entity;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.servantEntity,
      (int64_t)Entity,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField;
    if ( !Instance
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserServantEntity_k__BackingField)
      || (Instance = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL),
          v28 = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsChoice_k__BackingField = (unsigned __int8)Instance & 1,
          !v28) )
    {
LABEL_16:
      sub_1C3B9C0(Instance, v15);
    }
    this->fields._IsMaterialTdSvt_k__BackingField = UserServantEntity__IsMaterialTd(v28, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
      0LL,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v29, v30, v31, v32, v33, v34);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItem__SetServantUses(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItem_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v13; // q0
  bool IsKeepServantEquip; // w20
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  int32_t i; // w22
  int64_t sortValue0; // x8
  __int128 v18; // q0
  int64_t v19; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+60h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+80h] [xbp-70h]

  v6 = this;
  if ( (byte_4C1E2A8 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__,
      *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    this = (ServantSellConfirmListViewItem_o *)sub_1C3B764(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v11);
    byte_4C1E2A8 = 1;
  }
  if ( type == 1 )
  {
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_25;
    v13 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v13;
    this = (ServantSellConfirmListViewItem_o *)v6->fields.servantEntity;
    if ( !this
      || (IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL),
          (this = (ServantSellConfirmListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (this = (ServantSellConfirmListViewItem_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
      || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0LL )
    {
LABEL_25:
      sub_1C3B9C0(this, *(_QWORD *)&type);
    }
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) >= 1 )
    {
      for ( i = 0;
            i < System_Collections_ObjectModel_Collection_object___get_Count(
                  sortValue0B,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
            ++i )
      {
        this = (ServantSellConfirmListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                     sortValue0B,
                                                     i,
                                                     (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
        if ( !this )
          goto LABEL_25;
        if ( IsKeepServantEquip )
        {
          sortValue0 = this->fields.sortValue0;
          if ( sortValue0 )
          {
            v18 = *(_OWORD *)(sortValue0 + 40);
            *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)(sortValue0 + 24);
            *(_OWORD *)&v24.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v23 = v24;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v23, 0LL);
            v22 = v25;
            if ( v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v22, 0LL) )
            {
              *(_WORD *)&v6->fields._IsUseSupportEquip_k__BackingField = 257;
              return;
            }
          }
        }
        else
        {
          sortStr1 = this->fields.sortStr1;
          v24 = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v21 = v24;
          if ( sortStr1 == (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                       &v21,
                                                       0LL) )
          {
            v6->fields._IsUseSupportServant_k__BackingField = 1;
            return;
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItem__SetSortValues(
        ServantSellConfirmListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t sortValue1_high; // x8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4C1E2A9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&type);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantSellConfirmListViewItem_o *)sub_1C3B764(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v7);
    byte_4C1E2A9 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    this = (ServantSellConfirmListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantSellConfirmListViewItem_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( this )
      {
        this = (ServantSellConfirmListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     v4->fields.classId,
                                                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( this )
        {
          sortValue1_high = SHIDWORD(this->fields.sortValue1);
          servantEntity = v4->fields.servantEntity;
          v4->fields.priority = sortValue1_high;
          v4->fields.sortValue1B = sortValue1_high;
          if ( servantEntity )
          {
            UserServantEntity_k__BackingField = v4->fields._UserServantEntity_k__BackingField;
            if ( UserServantEntity_k__BackingField )
            {
              v4->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 48) | UserServantEntity_k__BackingField->fields.lv;
              v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
              v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v16.fields.currentCryptoKey = v12;
              *(_QWORD *)&v16.fields.fakeValue = v11;
              v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v16, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(this, *(_QWORD *)&type);
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_18;
  v15 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  v4->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v17, 0LL);
}


int32_t __fastcall ServantSellConfirmListViewItem__get_CommandCodeId(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int32_t __fastcall ServantSellConfirmListViewItem__get_DragSelectNum(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField;
}


IconLabelInfo_o *__fastcall ServantSellConfirmListViewItem__get_IconLabelInfo1(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall ServantSellConfirmListViewItem__get_IconLabelInfo2(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsCanNotSelect(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField
      || this->fields._IsParty_k__BackingField
      || this->fields.attribute
      || this->fields._IsLock_k__BackingField
      || this->fields._IsChoice_k__BackingField
      || this->fields._IsUseSupportServant_k__BackingField
      || this->fields._IsCommandCodeEquipped_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsChoice(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsCommandCode(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCode_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsCommandCodeEquipped(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCodeEquipped_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsDispChoice(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsDispLock(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsEquippedCommandCodeServant(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquippedCommandCodeServant_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsEventJoin(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsFavorite(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsHeroine(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsLock(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsMaterialTdSvt(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaterialTdSvt_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsParty(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsParty_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsPartyEquip(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPartyEquip_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsSellEnableServant(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsSwapChoice(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsSwapLock(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsUse(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsUseSupportEquip(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportEquip_k__BackingField;
}


bool __fastcall ServantSellConfirmListViewItem__get_IsUseSupportServant(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportServant_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall ServantSellConfirmListViewItem__get_SvtId(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0 OVERLAPPED
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
  v3 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
  *(_QWORD *)&result.fields.fakeValue = v2;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


UserCommandCodeEntity_o *__fastcall ServantSellConfirmListViewItem__get_UserCommandCodeEntity(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


int64_t __fastcall ServantSellConfirmListViewItem__get_UserCommandCodeId(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C1E2AC & 1) == 0 )
  {
    this = (ServantSellConfirmListViewItem_o *)sub_1C3B764(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4C1E2AC = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C3B9C0(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v6, 0LL);
}


UserServantEntity_o *__fastcall ServantSellConfirmListViewItem__get_UserServantEntity(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t __fastcall ServantSellConfirmListViewItem__get_UserSvtId(
        ServantSellConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4C1E2AB & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4C1E2AB = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0LL;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v6, 0LL);
}


void __fastcall ServantSellConfirmListViewItem__setUserCommandCodeEntity(
        ServantSellConfirmListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantSellConfirmListViewItem__setUserServantEntity(
        ServantSellConfirmListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantSellConfirmListViewItem__set_CommandCodeId(
        ServantSellConfirmListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_DragSelectNum(
        ServantSellConfirmListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DragSelectNum_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsChoice(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsCommandCode(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCode_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsCommandCodeEquipped(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCodeEquipped_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsEquippedCommandCodeServant(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEquippedCommandCodeServant_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsFavorite(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsLock(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsMaterialTdSvt(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaterialTdSvt_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsParty(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsParty_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsPartyEquip(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPartyEquip_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsSwapChoice(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsSwapLock(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsUse(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsUseSupportEquip(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportEquip_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_IsUseSupportServant(
        ServantSellConfirmListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportServant_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_SvtId(
        ServantSellConfirmListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall ServantSellConfirmListViewItem__set_UserCommandCodeEntity(
        ServantSellConfirmListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantSellConfirmListViewItem__set_UserServantEntity(
        ServantSellConfirmListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._UserServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}