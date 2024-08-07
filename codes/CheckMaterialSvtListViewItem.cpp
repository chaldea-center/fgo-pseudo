// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A023FA & 1) == 0 )
  {
    sub_1B64A00(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4A023FA = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v11, v12, v13);
  v14 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo2 = v14;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v14, v15, v16);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
  CheckMaterialSvtListViewItem__Init(this, index, v17);
  CheckMaterialSvtListViewItem__SetServantData(this, userServantEntity, v18);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, 0LL, v19);
  CheckMaterialSvtListViewItem__SetData(this, 1, v20);
  CheckMaterialSvtListViewItem__SetServantUses(this, 1, v21, v22, v23);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  CheckMaterialSvtListViewItem__SetSortValues(this, 1, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewItem___ctor_44679796(
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

  if ( (byte_4A023FB & 1) == 0 )
  {
    sub_1B64A00(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4A023FB = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.iconLabelInfo2 = v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v12, v13, v14);
  ListViewItem___ctor_40376104((ListViewItem_o *)this, index, 0LL);
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

  if ( (byte_4A02402 & 1) == 0 )
  {
    sub_1B64A00(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_4A02402 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
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
    sub_1B64C5C(this, type);
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
    sub_1B64C5C(this, type);
  return servantEntity->fields.classId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CheckMaterialSvtListViewItem__GetIsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantEntity_o *servantEntity; // x0
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A023FF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A023FF = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_16;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_18;
      v13 = Instance;
      v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v15;
      *(_QWORD *)&v18.fields.fakeValue = v14;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v18, 0LL);
      if ( !MasterData_object )
        goto LABEL_18;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v13,
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
        sub_1B64C5C(Instance, v10);
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
    sub_1B64C5C(this, userServantId);
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
        sub_1B64C64(v7, userServantId);
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

  if ( (byte_4A023FE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A023FE = 1;
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
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v10 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
        v9 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
        v11 = (ServantLimitMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                          v15,
                                                          0LL);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v13 = (int)UserCommandCodeEntity_k__BackingField;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
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
      sub_1B64C5C(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusBattleListViewItem_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A023FD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_1B64A00(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A023FD = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)userCommandCodeEntity;
    sub_1B649A4(p_UserCommandCodeEntity_k__BackingField, (int32_t)userCommandCodeEntity, (int32_t)method, v3);
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v11;
    *(_QWORD *)&v21.fields.fakeValue = v10;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                    v21,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_30D6798 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v15, v16),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1B64C5C(Instance, v13);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_1B649A4(p_UserCommandCodeEntity_k__BackingField, 0, (int32_t)method, v3);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_commandCodeEntity, 0, v19, v20);
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
      sub_1B64C5C(this, type);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServantEntity_k__BackingField; // x21
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A023FC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A023FC = 1;
  }
  p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)userServantEntity;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (int32_t)method,
      v3);
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_15;
    this->fields._SvtId_k__BackingField = (*p_UserServantEntity_k__BackingField)[5];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
    v14 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v14;
    *(_QWORD *)&v22.fields.fakeValue = v13;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v22, 0LL);
    if ( !v15
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Instance,
                     (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)Entity,
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v17, v18),
          (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserServantEntity_k__BackingField) )
    {
LABEL_15:
      sub_1B64C5C(Instance, v11);
    }
    this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
      0,
      (int32_t)method,
      v3);
    this->fields.servantEntity = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v20, v21);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v13; // q0
  bool IsKeepServantEquip; // w20
  System_Collections_ObjectModel_Collection_T__o *sortValue0; // x21
  int32_t i; // w22
  __int64 methodPtr_low; // x10
  int64_t v18; // x8
  __int128 v19; // q0
  int64_t v20; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+60h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+80h] [xbp-70h]

  v6 = this;
  if ( (byte_4A02400 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (CheckMaterialSvtListViewItem_o *)sub_1B64A00(&UserServantLeaderEntity_TypeInfo, v11);
    byte_4A02400 = 1;
  }
  if ( type == 1 )
  {
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_27;
    v13 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v13;
    this = (CheckMaterialSvtListViewItem_o *)v6->fields.servantEntity;
    if ( !this
      || (IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL),
          (this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
      || (sortValue0 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0) == 0LL )
    {
LABEL_27:
      sub_1B64C5C(this, *(_QWORD *)&type);
    }
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0,
           (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      for ( i = 0;
            i < System_Collections_ObjectModel_Collection_object___get_Count(
                  sortValue0,
                  (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
            ++i )
      {
        this = (CheckMaterialSvtListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   sortValue0,
                                                   i,
                                                   (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v18 = this->fields.sortValue0;
          if ( v18 )
          {
            v19 = *(_OWORD *)(v18 + 40);
            *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v18 + 24);
            *(_OWORD *)&v25.fields.fakeValue = v19;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v24 = v25;
            v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v24, 0LL);
            v23 = v26;
            if ( v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v23, 0LL) )
            {
              *(_WORD *)&v6->fields._IsUseSupportEquip_k__BackingField = 257;
              return;
            }
          }
        }
        else
        {
          sortStr1 = this->fields.sortStr1;
          v25 = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = v25;
          if ( sortStr1 == (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                                       &v22,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t sortValue1_low; // x8
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
  if ( (byte_4A02401 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&type);
    sub_1B64A00(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (CheckMaterialSvtListViewItem_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A02401 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( this )
      {
        this = (CheckMaterialSvtListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v4->fields.classId,
                                                   (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
              v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
              v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v16.fields.currentCryptoKey = v12;
              *(_QWORD *)&v16.fields.fakeValue = v11;
              v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B64C5C(this, *(_QWORD *)&type);
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
  v4->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v17, 0LL);
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
  if ( (byte_4A02404 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewItem_o *)sub_1B64A00(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                               method);
    byte_4A02404 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1B64C5C(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v6, 0LL);
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

  if ( (byte_4A02403 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A02403 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v6, 0LL);
}


void __fastcall CheckMaterialSvtListViewItem__setUserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1B649A4(
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
  sub_1B649A4(
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
  sub_1B649A4(
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
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}