void ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  void *Instance; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *v25; // x8
  ServantLimitMaster_o *v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  int32_t v30; // w23
  int32_t v31; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v33; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4CEA4F9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA4F9 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.materialIconLabelInfo = v9;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialIconLabelInfo,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)materialUserSvtEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v25 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v26 = (ServantLimitMaster_o *)Instance;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v28;
  *(_QWORD *)&v34.fields.fakeValue = v27;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v34, 0);
  v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v30 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v29[6], 0);
  if ( !v26 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v26, v30, (int32_t)Instance, 0);
  if ( !Instance
    || (v31 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v31,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v33 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1C7BD40(Instance, v24);
  }
  IconLabelInfo__Set_41483756(materialIconLabelInfo, 2, v33, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  this->fields.warningTextType = warningType;
}


bool ServantCheckEquipListViewItem__SetSortValue(
        ServantCheckEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t partyIndex; // w9
  bool result; // w0

  partyIndex = this->fields.partyIndex;
  *(_WORD *)&this->fields.isTermination = 0;
  result = 1;
  this->fields.sortValue0 = -partyIndex;
  return result;
}


IconLabelInfo_o *ServantCheckEquipListViewItem__get_MaterialIconLabelInfo(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialIconLabelInfo;
}


int32_t ServantCheckEquipListViewItem__get_MaterialServantRarity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *ServantCheckEquipListViewItem__get_MaterialUserSvtEntity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialUserServantEntity;
}


int32_t ServantCheckEquipListViewItem__get_WarningTextType(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.warningTextType;
}