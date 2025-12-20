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
  IconLabelInfo_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  void *Instance; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *v32; // x8
  ServantLimitMaster_o *v33; // x22
  __int64 v34; // x24
  __int64 v35; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  int32_t v37; // w23
  int32_t v38; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v40; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4D28691 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28691 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.materialIconLabelInfo = v9;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialIconLabelInfo,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.equipSvtIconLabelInfo = v16;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIconLabelInfo,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)materialUserSvtEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v32 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v33 = (ServantLimitMaster_o *)Instance;
  v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v35;
  *(_QWORD *)&v41.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v41, 0);
  v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v37 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v36[6], 0);
  if ( !v33 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v33, v37, (int32_t)Instance, 0);
  if ( !Instance
    || (v38 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v38,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v40 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1C942F0(Instance, v31);
  }
  IconLabelInfo__Set_41670428(materialIconLabelInfo, 2, v40, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  this->fields.warningTextType = warningType;
}


void ServantCheckEquipListViewItem___ctor_35522888(
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  IconLabelInfo_o *v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x24
  Il2CppObject *Entity; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t nowLoadCount; // w24
  UserServantEntity_o *v49; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  v13 = isParty;
  v14 = isSupport;
  if ( (byte_4D28692 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28692 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.materialIconLabelInfo = v15;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialIconLabelInfo,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.equipSvtIconLabelInfo = v22;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIconLabelInfo,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isParty = v13;
  this->fields.isSupport = v14;
  this->fields.partyIndex = partyIndex;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = (struct UserServantEntity_o *)Entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)Entity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = DataMasterBase_object__object__long___GetEntity(
          v31,
          equipSvtId,
          (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.equipUserServantEntity = (struct UserServantEntity_o *)v39;
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity,
    (int32_t)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = (DataManager_o *)this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_41670428(materialIconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  v49 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v49->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(v49, 0);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_41670428(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
      goto LABEL_10;
    }
LABEL_11:
    sub_1C942F0(Instance, v30);
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