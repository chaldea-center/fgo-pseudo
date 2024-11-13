// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  IconLabelInfo_o *v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  IconLabelInfo_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *Instance; // x0
  __int64 v40; // x1
  struct UserServantEntity_o *v41; // x8
  ServantLimitMaster_o *v42; // x22
  __int64 v43; // x24
  __int64 v44; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  int32_t v46; // w23
  int32_t v47; // w8
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t v49; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B124AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, materialUserSvtEntity, *(_QWORD *)&idx);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B124AF = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1BCAA2C(
                             IconLabelInfo_TypeInfo,
                             materialUserSvtEntity,
                             *(_QWORD *)&idx,
                             *(_QWORD *)&warningType);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.materialIconLabelInfo = v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialIconLabelInfo,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v25 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v22, v23, v24);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.equipSvtIconLabelInfo = v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSvtIconLabelInfo,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialUserServantEntity,
    (int64_t)materialUserSvtEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v41 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v42 = (ServantLimitMaster_o *)Instance;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
  *(_QWORD *)&v50.fields.currentCryptoKey = v44;
  *(_QWORD *)&v50.fields.fakeValue = v43;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
  v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_13;
  v46 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45[6], 0LL);
  if ( !v42 )
    goto LABEL_13;
  Instance = ServantLimitMaster__GetEntity(v42, v46, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v47 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v47,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v49 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
        !materialIconLabelInfo) )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v40);
  }
  IconLabelInfo__Set_38850420(materialIconLabelInfo, 2, v49, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_33228136(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  IconLabelInfo_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  IconLabelInfo_o *v31; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  Il2CppObject *Entity; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *v48; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x22
  int32_t nowLoadCount; // w24
  UserServantEntity_o *v58; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  v13 = isParty;
  v14 = isSupport;
  if ( (byte_4B124B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isParty, isSupport);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B124B0 = 1;
  }
  v21 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, isParty, isSupport, *(_QWORD *)&partyIndex);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.materialIconLabelInfo = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialIconLabelInfo,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v31 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v28, v29, v30);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.equipSvtIconLabelInfo = v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSvtIconLabelInfo,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isParty = v13;
  this->fields.isSupport = v14;
  this->fields.partyIndex = partyIndex;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = (struct UserServantEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialUserServantEntity,
    (int64_t)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = DataMasterBase_object__object__long___GetEntity(
          v40,
          equipSvtId,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.equipUserServantEntity = (struct UserServantEntity_o *)v48;
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    (int64_t)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (DataManager_o *)this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_38850420(materialIconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v58 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v58->fields.lv;
    Instance = (DataManager_o *)UserServantEntity__getLevelMax(v58, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_38850420(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(Instance, v39);
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