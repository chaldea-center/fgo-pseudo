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
  IconLabelInfo_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
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

  if ( (byte_4187C4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, materialUserSvtEntity);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4187C4E = 1;
  }
  v12 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.materialIconLabelInfo = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.equipSvtIconLabelInfo = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)materialUserSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v35 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v36 = (ServantLimitMaster_o *)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v38;
  *(_QWORD *)&v44.fields.fakeValue = v37;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
  v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v40 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39[6], 0LL);
  if ( !v36 )
    goto LABEL_14;
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
LABEL_14:
    sub_B2C434(Instance, v34);
  }
  IconLabelInfo__Set_27362128(materialIconLabelInfo, 2, v43, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_25387044(
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
  IconLabelInfo_o *v25; // x27
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  void *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x24
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserServantEntity_o *v42; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t v51; // w24
  UserServantEntity_o *v52; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  if ( (byte_4187C4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isParty);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4187C4F = 1;
  }
  v18 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.materialIconLabelInfo = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.equipSvtIconLabelInfo = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.partyIndex = partyIndex;
  this->fields.isParty = isParty;
  this->fields.isSupport = isSupport;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v34 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)Entity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v34,
          equipSvtId,
          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  v51 = *((_DWORD *)Instance + 64);
  Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_27362128(materialIconLabelInfo, 2, v51, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v52 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v52->fields.lv;
    Instance = (void *)UserServantEntity__getLevelMax(v52, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_27362128(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(Instance, v33);
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