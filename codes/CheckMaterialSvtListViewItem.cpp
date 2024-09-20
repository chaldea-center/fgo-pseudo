void __fastcall CheckMaterialSvtListViewItem___ctor(
        CheckMaterialSvtListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  IconLabelInfo_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  System_Int64_array *v21; // x2
  System_Int64_array *v22; // x3
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x2

  if ( (byte_4A5EAC0 & 1) == 0 )
  {
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    byte_4A5EAC0 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v11, v12, v13);
  v14 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo2 = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v14, v15, v16);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  CheckMaterialSvtListViewItem__Init(this, index, v17);
  CheckMaterialSvtListViewItem__SetServantData(this, userServantEntity, v18);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, 0LL, v19);
  CheckMaterialSvtListViewItem__SetData(this, 1, v20);
  CheckMaterialSvtListViewItem__SetServantUses(this, 1, v21, v22, v23);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  CheckMaterialSvtListViewItem__SetSortValues(this, 1, v24);
}


void __fastcall CheckMaterialSvtListViewItem___ctor_45045040(
        CheckMaterialSvtListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isCommandCodeEquipped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  IconLabelInfo_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x3
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x2

  if ( (byte_4A5EAC1 & 1) == 0 )
  {
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    byte_4A5EAC1 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.iconLabelInfo2 = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v12, v13, v14);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  CheckMaterialSvtListViewItem__Init(this, index, v15);
  CheckMaterialSvtListViewItem__SetServantData(this, 0LL, v16);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v17);
  CheckMaterialSvtListViewItem__SetData(this, 2, v18);
  CheckMaterialSvtListViewItem__SetServantUses(this, 2, v19, v20, v21);
  this->fields._IsCommandCodeEquipped_k__BackingField = isCommandCodeEquipped;
  CheckMaterialSvtListViewItem__SetSortValues(this, 2, v22);
  this->fields._IsCommandCode_k__BackingField = 1;
}


void __fastcall CheckMaterialSvtListViewItem__ClearIconLabelInfo(
        CheckMaterialSvtListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4A5EAC8 & 1) == 0 )
  {
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    byte_4A5EAC8 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0LL);
  }
}


int32_t __fastcall CheckMaterialSvtListViewItem__GetAttribute(
        CheckMaterialSvtListViewItem_o *this,
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
  this = (CheckMaterialSvtListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_9:
    sub_1B8880C(this, type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) )
    return 2;
  else
    return 0;
}


int32_t __fastcall CheckMaterialSvtListViewItem__GetClassId(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return -1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1B8880C(this, type);
  return servantEntity->fields.classId;
}


bool __fastcall CheckMaterialSvtListViewItem__GetIsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v9; // x8
  int64_t v10; // x19
  __int64 v11; // x21
  __int64 v12; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5EAC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAC5 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_16;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_18;
      v10 = Instance;
      v12 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v12;
      *(_QWORD *)&v15.fields.fakeValue = v11;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
      if ( !MasterData_object )
        goto LABEL_18;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v10,
             (int)Instance,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_18:
        sub_1B8880C(Instance, v7);
      }
    }
LABEL_16:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


int32_t __fastcall CheckMaterialSvtListViewItem__GetPartyIndex(
        CheckMaterialSvtListViewItem_o *this,
        int64_t userServantId,
        System_Int64_array *ids,
        bool isEquip,
        const MethodInfo *method)
{
  signed int max_length; // w9
  __int64 v7; // x0

  if ( !ids )
    sub_1B8880C(this, userServantId);
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
        sub_1B88814(v7, userServantId);
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
int32_t __fastcall CheckMaterialSvtListViewItem__GetRarity(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  void *UserCommandCodeEntity_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v11; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5EAC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAC4 = 1;
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
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v8 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
        v7 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
        v9 = (ServantLimitMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v13.fields.currentCryptoKey = v8;
        *(_QWORD *)&v13.fields.fakeValue = v7;
        UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v13,
                                                          0LL);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v11 = (int)UserCommandCodeEntity_k__BackingField;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                            UserServantEntity_k__BackingField->fields.limitCount,
                                                            0LL);
          if ( v9 )
          {
            UserCommandCodeEntity_k__BackingField = ServantLimitMaster__GetEntity(
                                                      v9,
                                                      v11,
                                                      (int32_t)UserCommandCodeEntity_k__BackingField,
                                                      0LL);
            if ( UserCommandCodeEntity_k__BackingField )
              return *((_DWORD *)UserCommandCodeEntity_k__BackingField + 6);
          }
        }
      }
LABEL_15:
      sub_1B8880C(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
    }
    return -1;
  }
}


void __fastcall CheckMaterialSvtListViewItem__Init(
        CheckMaterialSvtListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  IconLabelInfo_o *iconLabelInfo1; // x8
  CheckMaterialSvtListViewItem_o *v5; // x0
  const MethodInfo *v6; // x2

  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.index = index;
  CheckMaterialSvtListViewItem__ClearIconLabelInfo(this, iconLabelInfo1, method);
  CheckMaterialSvtListViewItem__ClearIconLabelInfo(v5, this->fields.iconLabelInfo2, v6);
  *(_WORD *)&this->fields._IsParty_k__BackingField = 0;
  *(_WORD *)&this->fields._IsSwapLock_k__BackingField = 0;
  *(_DWORD *)&this->fields._IsPartyEquip_k__BackingField = 0;
  this->fields._DragSelectNum_k__BackingField = -1;
  *(_WORD *)&this->fields._IsFavorite_k__BackingField = 0;
}


void __fastcall CheckMaterialSvtListViewItem__ModifyItem(
        CheckMaterialSvtListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall CheckMaterialSvtListViewItem__SetCommandCodeData(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5EAC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAC3 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)userCommandCodeEntity;
    sub_1B88554(p_UserCommandCodeEntity_k__BackingField, (int32_t)userCommandCodeEntity, (int32_t)method, v3);
    v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v18,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v12, v13),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1B8880C(Instance, v10);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1B88554(p_UserCommandCodeEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_commandCodeEntity, 0, v16, v17);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


void __fastcall CheckMaterialSvtListViewItem__SetData(
        CheckMaterialSvtListViewItem_o *this,
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
      sub_1B8880C(this, type);
    classId = servantEntity->fields.classId;
  }
  else
  {
    classId = -1;
  }
  this->fields.classId = classId;
  this->fields.rarity = CheckMaterialSvtListViewItem__GetRarity(this, type, method);
  this->fields.attribute = CheckMaterialSvtListViewItem__GetAttribute(this, type, v7);
  this->fields._IsEquippedCommandCodeServant_k__BackingField = CheckMaterialSvtListViewItem__GetIsEquippedCommandCodeServant(
                                                                 this,
                                                                 type,
                                                                 v8);
}


void __fastcall CheckMaterialSvtListViewItem__SetServantData(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServantEntity_k__BackingField; // x21
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5EAC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAC2 = 1;
  }
  p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)userServantEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (int32_t)method,
      v3);
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_15;
    this->fields._SvtId_k__BackingField = (*p_UserServantEntity_k__BackingField)[5];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v11 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v11;
    *(_QWORD *)&v19.fields.fakeValue = v10;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
    if ( !v12
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)Entity,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v14, v15),
          (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserServantEntity_k__BackingField) )
    {
LABEL_15:
      sub_1B8880C(Instance, v8);
    }
    this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
      0,
      (int32_t)method,
      v3);
    this->fields.servantEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v17, v18);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewItem__SetServantUses(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItem_o *v6; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v8; // q0
  bool IsKeepServantEquip; // w20
  System_Collections_ObjectModel_Collection_T__o *sortValue0; // x21
  int32_t i; // w22
  __int64 methodPtr_low; // x10
  int64_t v13; // x8
  __int128 v14; // q0
  int64_t v15; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+60h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+80h] [xbp-70h]

  v6 = this;
  if ( (byte_4A5EAC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CheckMaterialSvtListViewItem_o *)sub_1B885B0(&UserServantLeaderEntity_TypeInfo);
    byte_4A5EAC6 = 1;
  }
  if ( type == 1 )
  {
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_27;
    v8 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v8;
    this = (CheckMaterialSvtListViewItem_o *)v6->fields.servantEntity;
    if ( !this
      || (IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL),
          (this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
      || (sortValue0 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0) == 0LL )
    {
LABEL_27:
      sub_1B8880C(this, *(_QWORD *)&type);
    }
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      for ( i = 0;
            i < System_Collections_ObjectModel_Collection_object___get_Count(
                  sortValue0,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
            ++i )
      {
        this = (CheckMaterialSvtListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   sortValue0,
                                                   i,
                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !this )
          goto LABEL_27;
        methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UserServantLeaderEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantLeaderEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( IsKeepServantEquip )
        {
          v13 = this->fields.sortValue0;
          if ( v13 )
          {
            v14 = *(_OWORD *)(v13 + 40);
            *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(v13 + 24);
            *(_OWORD *)&v20.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v19 = v20;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
            v18 = v21;
            if ( v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL) )
            {
              *(_WORD *)&v6->fields._IsUseSupportEquip_k__BackingField = 257;
              return;
            }
          }
        }
        else
        {
          sortStr1 = this->fields.sortStr1;
          v20 = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v17 = v20;
          if ( sortStr1 == (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                       &v17,
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
void __fastcall CheckMaterialSvtListViewItem__SetSortValues(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItem_o *v4; // x19
  int64_t sortValue1_low; // x8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4A5EAC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckMaterialSvtListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAC7 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( this )
      {
        this = (CheckMaterialSvtListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v4->fields.classId,
                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( this )
        {
          sortValue1_low = SLODWORD(this->fields.sortValue1);
          servantEntity = v4->fields.servantEntity;
          v4->fields.priority = sortValue1_low;
          v4->fields.sortValue1B = sortValue1_low;
          if ( servantEntity )
          {
            UserServantEntity_k__BackingField = v4->fields._UserServantEntity_k__BackingField;
            if ( UserServantEntity_k__BackingField )
            {
              v4->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v4->fields.rarity << 48) | UserServantEntity_k__BackingField->fields.lv;
              v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
              v8 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v13.fields.currentCryptoKey = v9;
              *(_QWORD *)&v13.fields.fakeValue = v8;
              v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(this, *(_QWORD *)&type);
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_18;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  v4->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
}


int32_t __fastcall CheckMaterialSvtListViewItem__get_CommandCodeId(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int32_t __fastcall CheckMaterialSvtListViewItem__get_DragSelectNum(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField;
}


IconLabelInfo_o *__fastcall CheckMaterialSvtListViewItem__get_IconLabelInfo1(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall CheckMaterialSvtListViewItem__get_IconLabelInfo2(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsCanNotSelect(
        CheckMaterialSvtListViewItem_o *this,
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


bool __fastcall CheckMaterialSvtListViewItem__get_IsChoice(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsCommandCode(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCode_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsCommandCodeEquipped(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCodeEquipped_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsDispChoice(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsDispLock(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquippedCommandCodeServant_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsEventJoin(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsFavorite(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsHeroine(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL);
  return (char)UserServantEntity_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsLock(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsParty(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsParty_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsPartyEquip(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPartyEquip_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsSellEnableServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsSwapChoice(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsSwapLock(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsUse(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsUseSupportEquip(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportEquip_k__BackingField;
}


bool __fastcall CheckMaterialSvtListViewItem__get_IsUseSupportServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportServant_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall CheckMaterialSvtListViewItem__get_SvtId(
        CheckMaterialSvtListViewItem_o *this,
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


UserCommandCodeEntity_o *__fastcall CheckMaterialSvtListViewItem__get_UserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


int64_t __fastcall CheckMaterialSvtListViewItem__get_UserCommandCodeId(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5EACA & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EACA = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


UserServantEntity_o *__fastcall CheckMaterialSvtListViewItem__get_UserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t __fastcall CheckMaterialSvtListViewItem__get_UserSvtId(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5EAC9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EAC9 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


void __fastcall CheckMaterialSvtListViewItem__setUserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
}


void __fastcall CheckMaterialSvtListViewItem__setUserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
}


void __fastcall CheckMaterialSvtListViewItem__set_CommandCodeId(
        CheckMaterialSvtListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_DragSelectNum(
        CheckMaterialSvtListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DragSelectNum_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsChoice(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsCommandCode(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCode_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsCommandCodeEquipped(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCodeEquipped_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEquippedCommandCodeServant_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsFavorite(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsLock(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsParty(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsParty_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsPartyEquip(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPartyEquip_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsSwapChoice(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsSwapLock(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsUse(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsUseSupportEquip(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportEquip_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_IsUseSupportServant(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportServant_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_SvtId(
        CheckMaterialSvtListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall CheckMaterialSvtListViewItem__set_UserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CheckMaterialSvtListViewItem__set_UserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}