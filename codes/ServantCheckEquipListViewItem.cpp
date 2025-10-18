void ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  IconLabelInfo_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  void *Instance; // x0
  struct UserServantEntity_o *v19; // x8
  ServantLimitMaster_o *v20; // x22
  __int64 v21; // x24
  __int64 v22; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  int32_t v24; // w23
  int32_t v25; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v27; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C3EF90 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3EF90 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.materialIconLabelInfo = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.materialIconLabelInfo, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.equipSvtIconLabelInfo = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSvtIconLabelInfo, (int32_t)v12, v13, v14);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)materialUserSvtEntity,
    v16,
    v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v19 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v20 = (ServantLimitMaster_o *)Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  *(_QWORD *)&v28.fields.fakeValue = v21;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0);
  v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v24 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v23[6], 0);
  if ( !v20 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v20, v24, (int32_t)Instance, 0);
  if ( !Instance
    || (v25 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v25,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v27 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1C372B4(Instance);
  }
  IconLabelInfo__Set_40917868(materialIconLabelInfo, 2, v27, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  this->fields.warningTextType = warningType;
}


void ServantCheckEquipListViewItem___ctor_34942376(
        ServantCheckEquipListViewItem_o *this,
        bool isParty,
        bool isSupport,
        int32_t partyIndex,
        int64_t materialUserSvtId,
        int64_t equipSvtId,
        int32_t warningType,
        const MethodInfo *method)
{
  bool v13; // w28
  bool v14; // w27
  IconLabelInfo_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  IconLabelInfo_o *v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  DataManager_o *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x24
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t nowLoadCount; // w24
  UserServantEntity_o *v32; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  v13 = isParty;
  v14 = isSupport;
  if ( (byte_4C3EF91 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3EF91 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.materialIconLabelInfo = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.materialIconLabelInfo, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.equipSvtIconLabelInfo = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSvtIconLabelInfo, (int32_t)v18, v19, v20);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isParty = v13;
  this->fields.isSupport = v14;
  this->fields.partyIndex = partyIndex;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = (struct UserServantEntity_o *)Entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.materialUserServantEntity, (int32_t)Entity, v24, v25);
  v26 = DataMasterBase_object__object__long___GetEntity(
          v22,
          equipSvtId,
          (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.equipUserServantEntity = (struct UserServantEntity_o *)v26;
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, (int32_t)v26, v28, v29);
  Instance = (DataManager_o *)this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_40917868(materialIconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  v32 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v32->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(v32, 0);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_40917868(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(Instance);
  }
LABEL_10:
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


IconLabelInfo_o *ServantCheckEquipListViewItem__get_EquipSvtIconLabelInfo(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipSvtIconLabelInfo;
}


UserServantEntity_o *ServantCheckEquipListViewItem__get_EquipUserServantEntity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserServantEntity;
}


bool ServantCheckEquipListViewItem__get_IsParty(ServantCheckEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool ServantCheckEquipListViewItem__get_IsSupport(ServantCheckEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSupport;
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


int32_t ServantCheckEquipListViewItem__get_PartyIndex(ServantCheckEquipListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t ServantCheckEquipListViewItem__get_WarningTextType(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.warningTextType;
}