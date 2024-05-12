void __fastcall ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
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
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
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

  if ( (byte_438C6D1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6D1 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.materialIconLabelInfo = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.equipSvtIconLabelInfo = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)materialUserSvtEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v32 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v33 = (ServantLimitMaster_o *)Instance;
  v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v35;
  *(_QWORD *)&v41.fields.fakeValue = v34;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v41, 0LL);
  v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v37 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v36[6], 0LL);
  if ( !v33 )
    goto LABEL_14;
  Instance = ServantLimitMaster__GetEntity(v33, v37, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v38 = *((_DWORD *)Instance + 6),
        Instance = this->fields.materialUserServantEntity,
        this->fields.rarity = v38,
        this->fields.partyIndex = idx,
        !Instance)
    || (materialIconLabelInfo = this->fields.materialIconLabelInfo,
        v40 = *((_DWORD *)Instance + 64),
        Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
        !materialIconLabelInfo) )
  {
LABEL_14:
    sub_B7769C(Instance, v31);
  }
  IconLabelInfo__Set_28141596(materialIconLabelInfo, 2, v40, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


void __fastcall ServantCheckEquipListViewItem___ctor_27761928(
        ServantCheckEquipListViewItem_o *this,
        bool isParty,
        bool isSupport,
        int32_t partyIndex,
        int64_t materialUserSvtId,
        int64_t equipSvtId,
        int32_t warningType,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  IconLabelInfo_o *v22; // x27
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  void *Instance; // x0
  __int64 v30; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v31; // x24
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantEntity_o *v39; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t v48; // w24
  UserServantEntity_o *v49; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  if ( (byte_438C6D2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6D2 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.materialIconLabelInfo = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.equipSvtIconLabelInfo = v22;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.partyIndex = partyIndex;
  this->fields.isParty = isParty;
  this->fields.isSupport = isSupport;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v31 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = Entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)Entity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v31,
          equipSvtId,
          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = v39;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  v48 = *((_DWORD *)Instance + 64);
  Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_28141596(materialIconLabelInfo, 2, v48, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v49 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v49->fields.lv;
    Instance = (void *)UserServantEntity__getLevelMax(v49, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_28141596(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B7769C(Instance, v30);
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