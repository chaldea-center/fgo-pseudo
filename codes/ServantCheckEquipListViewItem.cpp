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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  IconLabelInfo_o *v19; // x23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *Instance; // x0
  __int64 v34; // x1
  struct UserServantEntity_o *v35; // x8
  ServantLimitMaster_o *v36; // x22
  __int64 v37; // x24
  __int64 v38; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  int32_t v40; // w23
  int32_t v41; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v43; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4BC3CDC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, materialUserSvtEntity);
    sub_1C1ABD4(&IconLabelInfo_TypeInfo, v9);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC3CDC = 1;
  }
  v12 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.materialIconLabelInfo = v12;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.materialIconLabelInfo,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.equipSvtIconLabelInfo = v19;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.equipSvtIconLabelInfo,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.materialUserServantEntity,
    (int64_t)materialUserSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v35 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v36 = (ServantLimitMaster_o *)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v38;
  *(_QWORD *)&v44.fields.fakeValue = v37;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v44, 0LL);
  v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v40 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v39[6], 0LL);
  if ( !v36 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v36, v40, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v41 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v41,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v43 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1C1AE30(Instance, v34);
  }
  IconLabelInfo__Set_39335328(materialIconLabelInfo, 2, v43, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_33631336(
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  IconLabelInfo_o *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x24
  Il2CppObject *Entity; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x22
  int32_t nowLoadCount; // w24
  UserServantEntity_o *v52; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  v13 = isParty;
  v14 = isSupport;
  if ( (byte_4BC3CDD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, isParty);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1C1ABD4(&IconLabelInfo_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BC3CDD = 1;
  }
  v18 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.materialIconLabelInfo = v18;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.materialIconLabelInfo,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.equipSvtIconLabelInfo = v25;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.equipSvtIconLabelInfo,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isParty = v13;
  this->fields.isSupport = v14;
  this->fields.partyIndex = partyIndex;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = (struct UserServantEntity_o *)Entity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.materialUserServantEntity,
    (int64_t)Entity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = DataMasterBase_object__object__long___GetEntity(
          v34,
          equipSvtId,
          (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.equipUserServantEntity = (struct UserServantEntity_o *)v42;
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    (int64_t)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (DataManager_o *)this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_39335328(materialIconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v52 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v52->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(v52, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_39335328(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1C1AE30(Instance, v33);
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