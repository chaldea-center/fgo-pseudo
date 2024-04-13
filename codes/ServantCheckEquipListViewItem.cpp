// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor(
        ServantCheckEquipListViewItem_o *this,
        UserServantEntity_o *materialUserSvtEntity,
        int32_t idx,
        int32_t warningType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  IconLabelInfo_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  IconLabelInfo_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserServantEntity_o **p_materialUserServantEntity; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
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

  if ( (byte_42E9C62 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitMaster___,
      (_DWORD)materialUserSvtEntity,
      idx,
      *(_QWORD *)&warningType);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E9C62 = 1;
  }
  v18 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields.materialIconLabelInfo = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.equipSvtIconLabelInfo = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.materialUserServantEntity = materialUserSvtEntity;
  p_materialUserServantEntity = &this->fields.materialUserServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)materialUserSvtEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v41 = *p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v42 = (ServantLimitMaster_o *)Instance;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v44;
  *(_QWORD *)&v50.fields.fakeValue = v43;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
  v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_materialUserServantEntity;
  if ( !*p_materialUserServantEntity )
    goto LABEL_14;
  v46 = (int)Instance;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45[6], 0LL);
  if ( !v42 )
    goto LABEL_14;
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
LABEL_14:
    sub_B5D69C(Instance, v40);
  }
  IconLabelInfo__Set_28463004(materialIconLabelInfo, 2, v49, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  this->fields.warningTextType = warningType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewItem___ctor_27470440(
        ServantCheckEquipListViewItem_o *this,
        bool isParty,
        bool isSupport,
        int32_t partyIndex,
        int64_t materialUserSvtId,
        int64_t equipSvtId,
        int32_t warningType,
        const MethodInfo *method)
{
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  char v18; // w1
  char v19; // w2
  __int64 v20; // x3
  char v21; // w1
  char v22; // w2
  __int64 v23; // x3
  IconLabelInfo_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  IconLabelInfo_o *v31; // x27
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  void *Instance; // x0
  __int64 v39; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v40; // x24
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UserServantEntity_o *v48; // x0
  struct UserServantEntity_o **p_equipUserServantEntity; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  IconLabelInfo_o *materialIconLabelInfo; // x23
  int32_t v57; // w24
  UserServantEntity_o *v58; // x0
  IconLabelInfo_o *equipSvtIconLabelInfo; // x21
  int32_t lv; // w22

  if ( (byte_42E9C63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isParty, isSupport, *(_QWORD *)&partyIndex);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E9C63 = 1;
  }
  v24 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.materialIconLabelInfo = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialIconLabelInfo,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.equipSvtIconLabelInfo = v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIconLabelInfo,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.partyIndex = partyIndex;
  this->fields.isParty = isParty;
  this->fields.isSupport = isSupport;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_11;
  v40 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             materialUserSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.materialUserServantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialUserServantEntity,
    (System_Int32_array **)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v40,
          equipSvtId,
          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = this->fields.materialUserServantEntity;
  if ( !Instance )
    goto LABEL_11;
  materialIconLabelInfo = this->fields.materialIconLabelInfo;
  v57 = *((_DWORD *)Instance + 64);
  Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !materialIconLabelInfo )
    goto LABEL_11;
  IconLabelInfo__Set_28463004(materialIconLabelInfo, 2, v57, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  v58 = *p_equipUserServantEntity;
  if ( *p_equipUserServantEntity )
  {
    equipSvtIconLabelInfo = this->fields.equipSvtIconLabelInfo;
    lv = v58->fields.lv;
    Instance = (void *)UserServantEntity__getLevelMax(v58, 0LL);
    if ( equipSvtIconLabelInfo )
    {
      IconLabelInfo__Set_28463004(equipSvtIconLabelInfo, 2, lv, (int32_t)Instance, 0, 0, 0, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(Instance, v39);
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