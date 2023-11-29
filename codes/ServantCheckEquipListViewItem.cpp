// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  IconLabelInfo_o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v39; // x8
  ServantLimitMaster_o *v40; // x22
  __int64 v41; // x24
  __int64 v42; // x25
  int32_t v43; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  int32_t v45; // w23
  int32_t v46; // w0
  ServantLimitEntity_o *Entity; // x0
  int32_t rarity; // w8
  struct UserServantEntity_o *materialUserServantEntity; // x0
  IconLabelInfo_o *materialIconLabelInfo; // x21
  int32_t lv; // w22
  int32_t LevelMax; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40F94DF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, materialUserSvtEntity);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F94DF = 1;
  }
  v12 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             materialUserSvtEntity,
                             *(_QWORD *)&idx,
                             *(_QWORD *)&warningType,
                             method);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.materialIconLabelInfo = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v19, v20, v21, v22);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.equipSvtIconLabelInfo = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)materialUserSvtEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v39 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v40 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v42;
  *(_QWORD *)&v53.fields.fakeValue = v41;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
  v44 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v45 = v43;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v44[6], 0LL);
  if ( !v40 )
    goto LABEL_14;
  Entity = ServantLimitMaster__GetEntity(v40, v45, v46, 0LL);
  if ( !Entity
    || (rarity = Entity->fields.rarity,
        materialUserServantEntity = this->fields.materialUserServantEntity,
        this->fields.rarity = rarity,
        this->fields.partyIndex = idx,
        !materialUserServantEntity)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        lv = materialUserServantEntity->fields.lv,
        LevelMax = UserServantEntity__getLevelMax(materialUserServantEntity, 0LL),
        !materialIconLabelInfo) )
  {
LABEL_14:
    sub_B170D4();
  }
  IconLabelInfo__Set_28888132(materialIconLabelInfo, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_23856696(
        ServantCheckEquipListViewItem_o *this,
        bool isParty,
        bool isSupport,
        int32_t partyIndex,
        int64_t materialUserSvtId,
        int64_t equipSvtId,
        int32_t warningType,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  IconLabelInfo_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  IconLabelInfo_o *v29; // x27
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v38; // x24
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserServantEntity_o *v46; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserServantEntity_o *materialUserServantEntity; // x0
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t lv; // w24
  int32_t LevelMax; // w0
  UserServantEntity_o *v58; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t v60; // w22
  int32_t v61; // w0

  if ( (byte_40F94E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, isParty);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40F94E0 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             isParty,
                             isSupport,
                             *(_QWORD *)&partyIndex,
                             materialUserSvtId);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.materialIconLabelInfo = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v25, v26, v27, v28);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.equipSvtIconLabelInfo = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.partyIndex = partyIndex;
  this->fields.isParty = isParty;
  this->fields.isSupport = isSupport;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  v38 = MasterData_WarQuestSelectionMaster;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             materialUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)Entity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v38,
          equipSvtId,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  materialUserServantEntity = this->fields.materialUserServantEntity;
  if ( !materialUserServantEntity )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  lv = materialUserServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(materialUserServantEntity, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_28888132(materialIconLabelInfo, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  v58 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    v60 = v58->fields.lv;
    v61 = UserServantEntity__getLevelMax(v58, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_28888132(equipSvtIconLabelInfo, 2, v60, v61, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
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