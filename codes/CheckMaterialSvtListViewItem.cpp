void CheckMaterialSvtListViewItem___ctor(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  IconLabelInfo_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  System_Int64_array *v29; // x2
  System_Int64_array *v30; // x3
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2

  if ( (byte_4D30AC6 & 1) == 0 )
  {
    sub_1C94098(&IconLabelInfo_TypeInfo);
    byte_4D30AC6 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  CheckMaterialSvtListViewItem__Init(this, index, v25);
  CheckMaterialSvtListViewItem__SetServantData(this, userServantEntity, v26);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, 0, v27);
  CheckMaterialSvtListViewItem__SetData(this, 1, v28);
  CheckMaterialSvtListViewItem__SetServantUses(this, 1, v29, v30, v31);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  CheckMaterialSvtListViewItem__SetSortValues(this, 1, v32);
}


void CheckMaterialSvtListViewItem___ctor_49599440(
        CheckMaterialSvtListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isCommandCodeEquipped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  IconLabelInfo_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Int64_array *v27; // x2
  System_Int64_array *v28; // x3
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2

  if ( (byte_4D30AC7 & 1) == 0 )
  {
    sub_1C94098(&IconLabelInfo_TypeInfo);
    byte_4D30AC7 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo1 = v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  CheckMaterialSvtListViewItem__Init(this, index, v23);
  CheckMaterialSvtListViewItem__SetServantData(this, 0, v24);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v25);
  CheckMaterialSvtListViewItem__SetData(this, 2, v26);
  CheckMaterialSvtListViewItem__SetServantUses(this, 2, v27, v28, v29);
  this->fields._IsCommandCodeEquipped_k__BackingField = isCommandCodeEquipped;
  CheckMaterialSvtListViewItem__SetSortValues(this, 2, v30);
  this->fields._IsCommandCode_k__BackingField = 1;
}


void CheckMaterialSvtListViewItem__ClearIconLabelInfo(
        CheckMaterialSvtListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4D30ACD & 1) == 0 )
  {
    sub_1C94098(&IconLabelInfo_TypeInfo);
    byte_4D30ACD = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v4, 0);
  }
}


int32_t CheckMaterialSvtListViewItem__GetAttribute(
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
    sub_1C942F0(this, type);
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) )
    return 2;
  else
    return 0;
}


int32_t CheckMaterialSvtListViewItem__GetClassId(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( type != 1 )
    return -1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1C942F0(this, type);
  return servantEntity->fields.classId;
}


bool CheckMaterialSvtListViewItem__GetIsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  struct ServantEntity_o *v9; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D30ACA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30ACA = 1;
  }
  entity = 0;
  if ( type != 1 )
    goto LABEL_20;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v9 = this->fields.servantEntity;
      if ( !v9 )
        goto LABEL_22;
      v11 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
      v12 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0);
      if ( !MasterData_object )
        goto LABEL_22;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             (UserServantCommandCodeMaster_o *)MasterData_object,
             &entity,
             v12,
             (int)Instance,
             0) )
      {
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          LOBYTE(servantEntity) = UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
          return (unsigned __int8)servantEntity & 1;
        }
LABEL_22:
        sub_1C942F0(Instance, v7);
      }
    }
LABEL_20:
    LOBYTE(servantEntity) = 0;
  }
  return (unsigned __int8)servantEntity & 1;
}


int32_t CheckMaterialSvtListViewItem__GetPartyIndex(
        CheckMaterialSvtListViewItem_o *this,
        int64_t userServantId,
        System_Int64_array *ids,
        bool isEquip,
        const MethodInfo *method)
{
  int max_length; // w9
  __int64 v7; // x0

  if ( !ids )
    sub_1C942F0(this, userServantId);
  max_length = ids->max_length;
  if ( max_length < 1 )
  {
LABEL_7:
    LODWORD(v7) = -1;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v7 )
        sub_1C942F8(v7);
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


int32_t CheckMaterialSvtListViewItem__GetRarity(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0

  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_8;
    return UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_k__BackingField, 0);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = (UserCommandCodeEntity_o *)this->fields._UserServantEntity_k__BackingField;
      if ( UserCommandCodeEntity_k__BackingField )
        return UserServantEntity__GetRarity((UserServantEntity_o *)UserCommandCodeEntity_k__BackingField, 1, 0);
LABEL_8:
      sub_1C942F0(UserCommandCodeEntity_k__BackingField, type);
    }
    return -1;
  }
}


void CheckMaterialSvtListViewItem__Init(CheckMaterialSvtListViewItem_o *this, int32_t index, const MethodInfo *method)
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


void CheckMaterialSvtListViewItem__ModifyItem(
        CheckMaterialSvtListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = isFavorite;
  this->fields._DragSelectNum_k__BackingField = -1;
}


void CheckMaterialSvtListViewItem__SetCommandCodeData(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4D30AC9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AC9 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)userCommandCodeEntity;
    sub_1C9403C(
      p_UserCommandCodeEntity_k__BackingField,
      (int32_t)userCommandCodeEntity,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v12;
    *(_QWORD *)&v30.fields.fakeValue = v11;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                    v30,
                                                    0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields._CommandCodeId_k__BackingField,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity,
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
            (int32_t)Entity,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          (Instance = (DataManager_o *)this->fields._UserCommandCodeEntity_k__BackingField) == 0)
      || (Instance = (DataManager_o *)UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0),
          UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserCommandCodeEntity_k__BackingField) )
    {
LABEL_12:
      sub_1C942F0(Instance, v14);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0);
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0;
    sub_1C9403C(p_UserCommandCodeEntity_k__BackingField, 0, (int32_t)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_commandCodeEntity, 0, v24, v25, v26, v27, v28, v29);
    *((_DWORD *)p_commandCodeEntity + 2) = 0;
  }
}


void CheckMaterialSvtListViewItem__SetData(
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
      sub_1C942F0(this, type);
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


void CheckMaterialSvtListViewItem__SetServantData(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServantEntity_k__BackingField; // x21
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4D30AC8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30AC8 = 1;
  }
  p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)userServantEntity;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      (int32_t)userServantEntity,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_15;
    this->fields._SvtId_k__BackingField = (*p_UserServantEntity_k__BackingField)[5];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v15;
    *(_QWORD *)&v31.fields.fakeValue = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v31, 0);
    if ( !v16
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)Entity,
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
            (int32_t)Entity,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23),
          (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0)
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0),
          UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserServantEntity_k__BackingField) )
    {
LABEL_15:
      sub_1C942F0(Instance, v12);
    }
    this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
      0,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, 0, v25, v26, v27, v28, v29, v30);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewItem__SetServantUses(
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
  System_Collections_ObjectModel_Collection_T__o *sortValue0B; // x21
  int32_t i; // w22
  int64_t sortValue0; // x8
  __int128 v13; // q0
  int64_t v14; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+60h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+80h] [xbp-70h]

  v6 = this;
  if ( (byte_4D30ACB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckMaterialSvtListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30ACB = 1;
  }
  if ( type == 1 )
  {
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_25;
    v8 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v8;
    this = (CheckMaterialSvtListViewItem_o *)v6->fields.servantEntity;
    if ( !this
      || (IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0),
          (this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0
      || (sortValue0B = (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B) == 0 )
    {
LABEL_25:
      sub_1C942F0(this, *(_QWORD *)&type);
    }
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.sortValue0B,
           (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__) >= 1 )
    {
      for ( i = 0;
            i < System_Collections_ObjectModel_Collection_object___get_Count(
                  sortValue0B,
                  (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
            ++i )
      {
        this = (CheckMaterialSvtListViewItem_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   sortValue0B,
                                                   i,
                                                   (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
        if ( !this )
          goto LABEL_25;
        if ( IsKeepServantEquip )
        {
          sortValue0 = this->fields.sortValue0;
          if ( sortValue0 )
          {
            v13 = *(_OWORD *)(sortValue0 + 40);
            *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(sortValue0 + 24);
            *(_OWORD *)&v19.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v18 = v19;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v18, 0);
            v17 = v20;
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v17, 0) )
            {
              *(_WORD *)&v6->fields._IsUseSupportEquip_k__BackingField = 257;
              return;
            }
          }
        }
        else
        {
          sortStr1 = this->fields.sortStr1;
          v19 = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v19;
          if ( sortStr1 == (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                       &v16,
                                                       0) )
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
void CheckMaterialSvtListViewItem__SetSortValues(
        CheckMaterialSvtListViewItem_o *this,
        int32_t type,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItem_o *v4; // x19
  int64_t sortValue1_high; // x8
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
  if ( (byte_4D30ACC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckMaterialSvtListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30ACC = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( this )
      {
        this = (CheckMaterialSvtListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v4->fields.classId,
                                                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
              v4->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                                    | ((unsigned __int64)(unsigned int)v4->fields.rarity << 48)
                                    | UserServantEntity_k__BackingField->fields.lv;
              v9 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
              v8 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v13.fields.currentCryptoKey = v9;
              *(_QWORD *)&v13.fields.fakeValue = v8;
              v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13, 0);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C942F0(this, *(_QWORD *)&type);
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
  v4->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v14, 0);
}


int32_t CheckMaterialSvtListViewItem__get_CommandCodeId(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int32_t CheckMaterialSvtListViewItem__get_DragSelectNum(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._DragSelectNum_k__BackingField;
}


IconLabelInfo_o *CheckMaterialSvtListViewItem__get_IconLabelInfo1(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *CheckMaterialSvtListViewItem__get_IconLabelInfo2(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool CheckMaterialSvtListViewItem__get_IsCanNotSelect(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField
      || this->fields._IsParty_k__BackingField
      || this->fields.attribute
      || this->fields._IsLock_k__BackingField
      || this->fields._IsChoice_k__BackingField
      || this->fields._IsUseSupportServant_k__BackingField
      || this->fields._IsCommandCodeEquipped_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsChoice(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsCommandCode(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsCommandCode_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsCommandCodeEquipped(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCommandCodeEquipped_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsDispChoice(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsDispLock(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquippedCommandCodeServant_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsEventJoin(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0);
  return (char)UserServantEntity_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsFavorite(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFavorite_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsHeroine(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
    LOBYTE(UserServantEntity_k__BackingField) = UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0);
  return (char)UserServantEntity_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsLock(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsParty(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsParty_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsPartyEquip(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsPartyEquip_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsSellEnableServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool CheckMaterialSvtListViewItem__get_IsSwapChoice(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsSwapLock(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsUse(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsUseSupportEquip(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportEquip_k__BackingField;
}


bool CheckMaterialSvtListViewItem__get_IsUseSupportServant(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseSupportServant_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CheckMaterialSvtListViewItem__get_SvtId(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
  v3 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
  *(_QWORD *)&result.fields.fakeValue = v2;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


UserCommandCodeEntity_o *CheckMaterialSvtListViewItem__get_UserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


int64_t CheckMaterialSvtListViewItem__get_UserCommandCodeId(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4D30ACF & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D30ACF = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C942F0(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


UserServantEntity_o *CheckMaterialSvtListViewItem__get_UserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


int64_t CheckMaterialSvtListViewItem__get_UserSvtId(CheckMaterialSvtListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4D30ACE & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D30ACE = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


void CheckMaterialSvtListViewItem__setUserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CheckMaterialSvtListViewItem__setUserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CheckMaterialSvtListViewItem__set_CommandCodeId(
        CheckMaterialSvtListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_DragSelectNum(
        CheckMaterialSvtListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DragSelectNum_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsChoice(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsCommandCode(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCode_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsCommandCodeEquipped(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCommandCodeEquipped_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsEquippedCommandCodeServant(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEquippedCommandCodeServant_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsFavorite(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFavorite_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsLock(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsParty(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsParty_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsPartyEquip(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPartyEquip_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsSwapChoice(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsSwapLock(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsUse(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsUseSupportEquip(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportEquip_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_IsUseSupportServant(
        CheckMaterialSvtListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseSupportServant_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_SvtId(
        CheckMaterialSvtListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void CheckMaterialSvtListViewItem__set_UserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CheckMaterialSvtListViewItem__set_UserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}