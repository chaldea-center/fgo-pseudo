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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  IconLabelInfo_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  System_Int64_array *v29; // x2
  System_Int64_array *v30; // x3
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2

  if ( (byte_4187CCD & 1) == 0 )
  {
    sub_B2C35C(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4187CCD = 1;
  }
  v11 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo1 = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.iconLabelInfo2 = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  CheckMaterialSvtListViewItem__Init(this, index, v25);
  CheckMaterialSvtListViewItem__SetServantData(this, userServantEntity, v26);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, 0LL, v27);
  CheckMaterialSvtListViewItem__SetData(this, 1, v28);
  CheckMaterialSvtListViewItem__SetServantUses(this, 1, v29, v30, v31);
  this->fields._IsFavorite_k__BackingField = isFavorite;
  CheckMaterialSvtListViewItem__SetSortValues(this, 1, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewItem___ctor_25437968(
        CheckMaterialSvtListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isCommandCodeEquipped,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  IconLabelInfo_o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Int64_array *v27; // x2
  System_Int64_array *v28; // x3
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2

  if ( (byte_4187CCE & 1) == 0 )
  {
    sub_B2C35C(&IconLabelInfo_TypeInfo, *(_QWORD *)&index);
    byte_4187CCE = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  CheckMaterialSvtListViewItem__Init(this, index, v23);
  CheckMaterialSvtListViewItem__SetServantData(this, 0LL, v24);
  CheckMaterialSvtListViewItem__SetCommandCodeData(this, userCommandCodeEntity, v25);
  CheckMaterialSvtListViewItem__SetData(this, 2, v26);
  CheckMaterialSvtListViewItem__SetServantUses(this, 2, v27, v28, v29);
  this->fields._IsCommandCodeEquipped_k__BackingField = isCommandCodeEquipped;
  CheckMaterialSvtListViewItem__SetSortValues(this, 2, v30);
  this->fields._IsCommandCode_k__BackingField = 1;
}


void __fastcall CheckMaterialSvtListViewItem__ClearIconLabelInfo(
        CheckMaterialSvtListViewItem_o *this,
        IconLabelInfo_o *iconLabelInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v4; // x0

  if ( (byte_4187CD5 & 1) == 0 )
  {
    sub_B2C35C(&IconLabelInfo_TypeInfo, iconLabelInfo);
    byte_4187CD5 = 1;
  }
  if ( iconLabelInfo )
  {
    IconLabelInfo__Clear(iconLabelInfo, 0LL);
  }
  else
  {
    v4 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
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
    goto LABEL_10;
  if ( servantEntity->fields.type == 2 )
    return 1;
  this = (CheckMaterialSvtListViewItem_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !this )
LABEL_10:
    sub_B2C434(this, type);
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
    sub_B2C434(this, type);
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
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *v12; // x8
  int64_t v13; // x19
  __int64 v14; // x21
  __int64 v15; // x22
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4187CD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&type);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187CD2 = 1;
  }
  entity = 0LL;
  if ( type != 1 )
    goto LABEL_18;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    if ( ServantEntity__get_IsServant(servantEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v12 = this->fields.servantEntity;
      if ( !v12 )
        goto LABEL_20;
      v13 = Instance;
      v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v18.fields.currentCryptoKey = v15;
      *(_QWORD *)&v18.fields.fakeValue = v14;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_20;
      if ( UserServantCommandCodeMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
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
LABEL_20:
        sub_B2C434(Instance, v10);
      }
    }
LABEL_18:
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
  __int64 v8; // x0

  if ( !ids )
    sub_B2C434(this, userServantId);
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
      if ( (unsigned int)v7 >= max_length )
      {
        v8 = sub_B2C460(v7);
        sub_B2C400(v8, 0LL);
      }
      if ( ids->m_Items[(int)v7] == userServantId )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (int)v7 >= max_length )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4187CD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&type);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187CD1 = 1;
  }
  if ( type == 2 )
  {
    UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
      goto LABEL_16;
    return UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      UserCommandCodeEntity_k__BackingField = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( UserCommandCodeEntity_k__BackingField )
      {
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)UserCommandCodeEntity_k__BackingField,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v10 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
        v9 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
        v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v15.fields.currentCryptoKey = v10;
        *(_QWORD *)&v15.fields.fakeValue = v9;
        UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v15,
                                                          0LL);
        UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v13 = (int)UserCommandCodeEntity_k__BackingField;
          UserCommandCodeEntity_k__BackingField = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
LABEL_16:
      sub_B2C434(UserCommandCodeEntity_k__BackingField, *(_QWORD *)&type);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *p_UserCommandCodeEntity_k__BackingField; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  struct CommandCodeEntity_o **p_commandCodeEntity; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4187CD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, userCommandCodeEntity);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187CD0 = 1;
  }
  p_UserCommandCodeEntity_k__BackingField = (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField;
  if ( userCommandCodeEntity )
  {
    p_UserCommandCodeEntity_k__BackingField->klass = (BattleServantConfConponent_c *)userCommandCodeEntity;
    sub_B2C2F8(
      p_UserCommandCodeEntity_k__BackingField,
      (System_Int32_array **)userCommandCodeEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v15;
    *(_QWORD *)&v33.fields.fakeValue = v14;
    this->fields._CommandCodeId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v33,
                                                    0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !Instance
      || (Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                   this->fields._CommandCodeId_k__BackingField,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__),
          this->fields.commandCodeEntity = Entity,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
            (System_Int32_array **)Entity,
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
LABEL_13:
      sub_B2C434(Instance, v17);
    }
    this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserCommandCodeEntity_k__BackingField = 0LL;
    sub_B2C2F8(p_UserCommandCodeEntity_k__BackingField, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.commandCodeEntity = 0LL;
    p_commandCodeEntity = &this->fields.commandCodeEntity;
    sub_B2C2F8((BattleServantConfConponent_o *)p_commandCodeEntity, 0LL, v27, v28, v29, v30, v31, v32);
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
      sub_B2C434(this, type);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServantEntity_k__BackingField; // x21
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  struct ServantEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4187CCF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, userServantEntity);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187CCF = 1;
  }
  p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServantEntity_k__BackingField;
  if ( userServantEntity )
  {
    *p_UserServantEntity_k__BackingField = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)userServantEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
      (System_Int32_array **)userServantEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !*p_UserServantEntity_k__BackingField )
      goto LABEL_17;
    this->fields._SvtId_k__BackingField = (*p_UserServantEntity_k__BackingField)[5];
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields._SvtId_k__BackingField.fields.fakeValue;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v18;
    *(_QWORD *)&v34.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
    if ( !v19
      || (Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v19,
                                               (int32_t)Instance,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = Entity,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.servantEntity,
            (System_Int32_array **)Entity,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26),
          (Instance = (DataManager_o *)this->fields._UserServantEntity_k__BackingField) == 0LL)
      || (Instance = (DataManager_o *)UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL),
          UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField,
          this->fields._IsLock_k__BackingField = (unsigned __int8)Instance & 1,
          !UserServantEntity_k__BackingField) )
    {
LABEL_17:
      sub_B2C434(Instance, v15);
    }
    this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  }
  else
  {
    this->fields._UserServantEntity_k__BackingField = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v28, v29, v30, v31, v32, v33);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *sortValue0; // x21
  int32_t i; // w22
  __int64 v17; // x10
  int64_t v18; // x8
  __int128 v19; // q0
  int64_t v20; // x23
  struct System_String_o *sortStr1; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+60h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+80h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4187CD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (CheckMaterialSvtListViewItem_o *)sub_B2C35C(&UserServantLeaderEntity_TypeInfo, v11);
    byte_4187CD3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( type == 1 )
  {
    UserServantEntity_k__BackingField = v6->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField )
      goto LABEL_29;
    v13 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v13;
    this = (CheckMaterialSvtListViewItem_o *)v6->fields.servantEntity;
    if ( !this
      || (IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL),
          (this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantLeaderMaster___)) == 0LL
      || (sortValue0 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.sortValue0) == 0LL )
    {
LABEL_29:
      sub_B2C434(this, *(_QWORD *)&type);
    }
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.sortValue0,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      for ( i = 0;
            i < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  sortValue0,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
            ++i )
      {
        this = (CheckMaterialSvtListViewItem_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                   sortValue0,
                                                   i,
                                                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !this )
          goto LABEL_29;
        v17 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (UserServantLeaderEntity_c *)this->klass->_2.typeHierarchy[v17 - 1] != UserServantLeaderEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( IsKeepServantEquip )
        {
          v18 = this->fields.sortValue0;
          if ( v18 )
          {
            v19 = *(_OWORD *)(v18 + 40);
            *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v18 + 24);
            *(_OWORD *)&v25.fields.fakeValue = v19;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v24 = v25;
            v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
            v23 = v26;
            if ( v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v23, 0LL) )
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
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v22 = v25;
          if ( sortStr1 == (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
  if ( (byte_4187CD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (CheckMaterialSvtListViewItem_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187CD4 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    this = (CheckMaterialSvtListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (CheckMaterialSvtListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
      if ( this )
      {
        this = (CheckMaterialSvtListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                   v4->fields.classId,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v16.fields.currentCryptoKey = v12;
              *(_QWORD *)&v16.fields.fakeValue = v11;
              v4->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&type);
  }
  commandCodeEntity = v4->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_20;
  v15 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  v4->fields.sortValue1B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4187CD7 & 1) == 0 )
  {
    this = (CheckMaterialSvtListViewItem_o *)sub_B2C35C(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                               method);
    byte_4187CD7 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_4187CD6 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4187CD6 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    return 0LL;
  v4 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
}


void __fastcall CheckMaterialSvtListViewItem__setUserCommandCodeEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserCommandCodeEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CheckMaterialSvtListViewItem__setUserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserServantEntity_k__BackingField = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CheckMaterialSvtListViewItem__set_UserServantEntity(
        CheckMaterialSvtListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._UserServantEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}