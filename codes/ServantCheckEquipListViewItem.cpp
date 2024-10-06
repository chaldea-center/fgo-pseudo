void __fastcall ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  IconLabelInfo_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  IconLabelInfo_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  void *Instance; // x0
  __int64 v22; // x1
  struct UserServantEntity_o *v23; // x8
  ServantLimitMaster_o *v24; // x22
  __int64 v25; // x24
  __int64 v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  int32_t v28; // w23
  int32_t v29; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v31; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A6C1B2 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, materialUserSvtEntity);
    sub_1B90010(&IconLabelInfo_TypeInfo, v9);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A6C1B2 = 1;
  }
  v12 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.materialIconLabelInfo = v12;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.materialIconLabelInfo, (int32_t)v12, v13, v14);
  v15 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.equipSvtIconLabelInfo = v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIconLabelInfo, (int32_t)v15, v16, v17);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.materialUserServantEntity,
    (int32_t)materialUserSvtEntity,
    v19,
    v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v24 = (ServantLimitMaster_o *)Instance;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v26;
  *(_QWORD *)&v32.fields.fakeValue = v25;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v32, 0LL);
  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v28 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v27[6], 0LL);
  if ( !v24 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v24, v28, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v29 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v29,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v31 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1B9026C(Instance, v22);
  }
  IconLabelInfo__Set_38192256(materialIconLabelInfo, 2, v31, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_32602560(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  IconLabelInfo_o *v21; // x25
  int32_t v22; // w2
  int32_t v23; // w3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x24
  Il2CppObject *Entity; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  IconLabelInfo_o *materialIconLabelInfo; // x22
  int32_t nowLoadCount; // w24
  UserServantEntity_o *v36; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  v13 = isParty;
  v14 = isSupport;
  if ( (byte_4A6C1B3 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, isParty);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B90010(&IconLabelInfo_TypeInfo, v16);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A6C1B3 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.materialIconLabelInfo = v18;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.materialIconLabelInfo, (int32_t)v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.equipSvtIconLabelInfo = v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIconLabelInfo, (int32_t)v21, v22, v23);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isParty = v13;
  this->fields.isSupport = v14;
  this->fields.partyIndex = partyIndex;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_312C754 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = (struct UserServantEntity_o *)Entity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.materialUserServantEntity, (int32_t)Entity, v28, v29);
  v30 = DataMasterBase_object__object__long___GetEntity(
          v26,
          equipSvtId,
          (const MethodInfo_312C754 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.equipUserServantEntity = (struct UserServantEntity_o *)v30;
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, (int32_t)v30, v32, v33);
  Instance = (DataManager_o *)this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_38192256(materialIconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v36 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v36->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(v36, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_38192256(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1B9026C(Instance, v25);
  }
LABEL_10:
  this->fields.warningTextType = warningType;
}


bool __fastcall ServantCheckEquipListViewItem__SetSortValue(
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


IconLabelInfo_o *__fastcall ServantCheckEquipListViewItem__get_EquipSvtIconLabelInfo(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipSvtIconLabelInfo;
}


UserServantEntity_o *__fastcall ServantCheckEquipListViewItem__get_EquipUserServantEntity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserServantEntity;
}


bool __fastcall ServantCheckEquipListViewItem__get_IsParty(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall ServantCheckEquipListViewItem__get_IsSupport(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


IconLabelInfo_o *__fastcall ServantCheckEquipListViewItem__get_MaterialIconLabelInfo(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialIconLabelInfo;
}


int32_t __fastcall ServantCheckEquipListViewItem__get_MaterialServantRarity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *__fastcall ServantCheckEquipListViewItem__get_MaterialUserSvtEntity(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialUserServantEntity;
}


int32_t __fastcall ServantCheckEquipListViewItem__get_PartyIndex(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t __fastcall ServantCheckEquipListViewItem__get_WarningTextType(
        ServantCheckEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.warningTextType;
}