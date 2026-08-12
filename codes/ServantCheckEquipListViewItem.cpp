void ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  void *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct UserServantEntity_o *v26; // x8
  ServantLimitMaster_o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w23
  int32_t v32; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v34; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_596C5B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C5B3 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.materialIconLabelInfo = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.materialIconLabelInfo,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)materialUserSvtEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v26 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v27 = (ServantLimitMaster_o *)Instance;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
  *(_QWORD *)&v35.fields.currentCryptoKey = v28;
  *(_QWORD *)&v35.fields.fakeValue = v29;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v35, 0);
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v31 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30[6], 0);
  if ( !v27 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v27, v31, (int32_t)Instance, 0);
  if ( !Instance
    || (v32 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v32,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v34 = *((_DWORD *)Instance + 100),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_2213CDC(Instance, v24);
  }
  IconLabelInfo__Set_47880948(materialIconLabelInfo, 2, v34, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  this->fields.warningTextType = warningType;
}


void ServantCheckEquipListViewItem__SetMaterialUserServantEntity(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_materialUserServantEntity; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  void *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UserServantEntity_o *v16; // x8
  ServantLimitMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w20
  int32_t v22; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x19
  int32_t v24; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_596C5B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C5B4 = 1;
  }
  this->fields.materialUserServantEntity = userServantEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v16 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v17 = (ServantLimitMaster_o *)Master_object;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
  *(_QWORD *)&v25.fields.currentCryptoKey = v18;
  *(_QWORD *)&v25.fields.fakeValue = v19;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
  v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v21 = (int)Master_object;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20[6], 0);
  if ( !v17
    || (Master_object = ServantLimitMaster__GetEntity(v17, v21, (int32_t)Master_object, 0)) == 0
    || (v22 = *((_DWORD *)Master_object + 6),
        Master_object = this->fields.materialUserServantEntity,
        this->fields.rarity = v22,
        !Master_object)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v24 = *((_DWORD *)Master_object + 100),
        Master_object = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Master_object, 0),
        !materialIconLabelInfo) )
  {
LABEL_14:
    sub_2213CDC(Master_object, v14);
  }
  IconLabelInfo__Set_47880948(materialIconLabelInfo, 2, v24, (int32_t)Master_object, 0, 0, 0, 0, 0, 0);
}


bool ServantCheckEquipListViewItem__SetSortValue(
        ServantCheckEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t partyIndex; // w9

  partyIndex = this->fields.partyIndex;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = -partyIndex;
  return 1;
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