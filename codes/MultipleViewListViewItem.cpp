// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem___ctor(
        MultipleViewListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  IconLabelInfo_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  IconLabelInfo_o *v29; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x25
  __int64 v48; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct UserServantEntity_o *v57; // x8
  ServantLimitMaster_o *v58; // x26
  int32_t svtId; // w27
  int32_t v60; // w8
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q1
  UserServantCollectionMaster_o *v63; // x23
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q0
  signed int max_length; // w8
  unsigned int v67; // w9
  UserServantEntity_o *v68; // x8
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  __int64 v71; // x22
  int64_t v72; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v74; // x8
  __int64 v75; // x22
  __int64 v76; // x23
  int64_t v77; // x8
  int v78; // w22
  BalanceConfig_c *v79; // x8
  UserServantEntity_o *v80; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_4185C18 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4185C18 = 1;
  }
  v22 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v46 = this->fields.userSvtEntity;
  if ( !v46 )
    goto LABEL_57;
  v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v101.fields.currentCryptoKey = v48;
  *(_QWORD *)&v101.fields.fakeValue = v47;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v101, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       this->fields.svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v57 = this->fields.userSvtEntity;
  if ( !v57 )
    goto LABEL_57;
  v58 = (ServantLimitMaster_o *)Master_WarQuestSelectionMaster;
  svtId = this->fields.svtId;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                     v57->fields.limitCount,
                                     0LL);
  if ( !v58 )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)ServantLimitMaster__GetEntity(
                                              v58,
                                              svtId,
                                              Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !*p_servantEntity )
    goto LABEL_57;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v60 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v60;
  if ( !userSvtEntity )
    goto LABEL_57;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v61 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v62 = *(_OWORD *)&v61->fields.userId.fields.fakeValue;
  v63 = (UserServantCollectionMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v61->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v62;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v99 = v100;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v99, 0LL);
  if ( !v63 )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                              v63,
                                              Master_WarQuestSelectionMaster,
                                              this->fields.svtId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = UserServantCollectionEntity__getFriendShipRankInfo(
                                     (UserServantCollectionEntity_o *)Master_WarQuestSelectionMaster,
                                     &this->fields.friendship,
                                     &this->fields.friendshipMax,
                                     0LL);
  v64 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v64 )
    goto LABEL_57;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v98.fields.fakeValue = v65;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v98, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_57;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      if ( v67 >= max_length )
      {
        v96 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v96, 0LL);
      }
      if ( Master_WarQuestSelectionMaster == partyUserSvtList->m_Items[v67] )
        break;
      if ( (int)++v67 >= max_length )
        goto LABEL_32;
    }
    this->fields.partyIndex = v67;
  }
LABEL_32:
  Master_WarQuestSelectionMaster = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = UserServantEntity__IsLock((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
  v68 = this->fields.userSvtEntity;
  this->fields.isLock = Master_WarQuestSelectionMaster & 1;
  if ( !v68 )
    goto LABEL_57;
  this->fields.isChoice = UserServantEntity__IsChoice(v68, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v69 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
  v71 = *(_QWORD *)(Master_WarQuestSelectionMaster + 120);
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v70;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v97 = v100;
  *(_WORD *)&this->fields.isPush = v71 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                            &v97,
                                            0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                              this->fields.classId,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v72 = *(int *)(Master_WarQuestSelectionMaster + 48);
  rarity = this->fields.rarity;
  v74 = this->fields.userSvtEntity;
  this->fields.priority = v72;
  this->fields.sortValue1B = v72;
  this->fields.sortValue2 = rarity;
  if ( !v74 )
    goto LABEL_57;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v102.fields.currentCryptoKey = v76;
  *(_QWORD *)&v102.fields.fakeValue = v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v102, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v77;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v78 = *(_DWORD *)(Master_WarQuestSelectionMaster + 276);
  v79 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v79 = BalanceConfig_TypeInfo;
    Master_WarQuestSelectionMaster = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v79->static_fields->StatusUpAdjustHp * v78;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  this->fields.atkReinforceValue = v79->static_fields->StatusUpAdjustAtk
                                 * *(_DWORD *)(Master_WarQuestSelectionMaster + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_WarQuestSelectionMaster,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.userSvtEntity;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                     0,
                                     0LL);
  v80 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_WarQuestSelectionMaster;
  if ( !v80 )
    goto LABEL_57;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v80, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.userSvtEntity;
  if ( !Master_WarQuestSelectionMaster
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                         0,
                                         0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p_tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95),
        (Master_WarQuestSelectionMaster = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_57:
    sub_B2C434(Master_WarQuestSelectionMaster, v45);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall MultipleViewListViewItem__Finalize(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall MultipleViewListViewItem__GetNpInfo(
        MultipleViewListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4185C20 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4185C20 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool __fastcall MultipleViewListViewItem__IsMatchFilter(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v38; // w0
  __int64 v39; // x0

  if ( (byte_4185C1D & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4185C1D = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_B2C434(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(userSvtEntity, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v20 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_64:
      v39 = sub_B2C460(ClassGroupFilterKindList);
      sub_B2C400(v39, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v36 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v36) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v38 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v38 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_64;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall MultipleViewListViewItem__Modify(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v13; // x8
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  if ( (byte_4185C1B & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_4185C1B = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v13 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v13)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v13, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v14 = *p_userSvtEntity) == 0LL )
  {
    sub_B2C434(userSvtEntity, v11);
  }
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyChoiceItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem__ModifyItem(
        MultipleViewListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4185C19 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_4185C19 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v6 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v6)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v6, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v7 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B2C434(userSvtEntity, isFavorite);
  }
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  v9 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this->fields.isPush = v9 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewItem__ModifyItem_21376468(
        MultipleViewListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v10; // x8
  struct UserServantEntity_o *v11; // x8
  __int128 v12; // q1
  __int64 v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4185C1A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex);
    byte_4185C1A = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v10 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v10)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v10, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v11 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B2C434(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v13 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  this->fields.isPush = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
}


void __fastcall MultipleViewListViewItem__ModifyLockItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall MultipleViewListViewItem__SetSortValue(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  const MethodInfo *v11; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v17; // w1
  struct UserServantEntity_o *v18; // x8
  int32_t adjustHp; // w3
  int64_t hpReinforceValue; // x2
  int32_t v21; // w1
  struct UserServantEntity_o *v22; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  IconLabelInfo_o *v25; // x20
  int32_t v26; // w21
  __int64 v27; // x10
  struct ServantEntity_o *v28; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v30; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_4185C1C & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4185C1C = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  IsMatchFilter = MultipleViewListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0LL;
  if ( IsMatchFilter )
  {
    isSwapChoice = this->fields.isSwapChoice;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice )
    {
      if ( !sort )
        goto LABEL_69;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10LL;
    }
    iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
      if ( sort )
      {
        iconLabelInfo2 = 1LL;
        switch ( sort->fields.sortKind )
        {
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_69;
            v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v34.fields.fakeValue = v13;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v33 = v34;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v33, 0LL);
            v14 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v14 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v14->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_62;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            goto LABEL_36;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            this->fields.sortValue1 = *(int *)(iconLabelInfo2 + 256);
            goto LABEL_36;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            UserServantEntity__getTreasureDeviceInfo_21659764(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0LL);
            LODWORD(friendship) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            friendshipMax = tdMaxLv[0];
            v17 = 33;
            goto LABEL_39;
          case 5:
            v18 = this->fields.userSvtEntity;
            if ( !v18 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v18->fields.hp;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = v18->fields.adjustHp;
            LODWORD(hpReinforceValue) = v18->fields.hp;
            v21 = 3;
            goto LABEL_61;
          case 6:
            v22 = this->fields.userSvtEntity;
            if ( !v22 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v22->fields.atk;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = v22->fields.adjustAtk;
            LODWORD(hpReinforceValue) = v22->fields.atk;
            v21 = 5;
            goto LABEL_61;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = servantEntity->fields.cost;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__Set_27362128(
              (IconLabelInfo_o *)iconLabelInfo2,
              7,
              servantEntity->fields.cost,
              0,
              0,
              0,
              0,
              0,
              0LL);
            goto LABEL_40;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            this->fields.sortValue2 = *(int *)(iconLabelInfo2 + 256);
LABEL_36:
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_64;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            friendshipMax = this->fields.friendshipMax;
            v17 = 32;
LABEL_39:
            IconLabelInfo__Set_27362128(
              (IconLabelInfo_o *)iconLabelInfo2,
              v17,
              friendship,
              friendshipMax,
              0,
              0,
              0,
              0,
              0LL);
LABEL_40:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            v25 = this->fields.iconLabelInfo2;
            v26 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v25 )
              goto LABEL_69;
            IconLabelInfo__Set_27362128(v25, 2, v26, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_46;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_67;
LABEL_46:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
LABEL_67:
            LOBYTE(iconLabelInfo2) = 1;
            break;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_54;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            v27 = *(&MultipleViewListViewManager_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 300LL) < (unsigned int)v27
              || *(MultipleViewListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL) + 8 * v27 - 8) != MultipleViewListViewManager_TypeInfo )
            {
              goto LABEL_69;
            }
            iconLabelInfo2 = MultipleViewListViewManager__GetAmountSortValue(
                               (MultipleViewListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v11);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_54:
            v28 = this->fields.servantEntity;
            if ( !v28 )
              goto LABEL_69;
            collectionNo = v28->fields.collectionNo;
            v30 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v30 )
              goto LABEL_69;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v30->fields.lv;
            iconLabelInfo2 = (int64_t)v30;
            goto LABEL_65;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxHpReinforceValue;
            v21 = 44;
            goto LABEL_61;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxAtkReinforceValue;
            v21 = 45;
LABEL_61:
            IconLabelInfo__Set_27362128(
              (IconLabelInfo_o *)iconLabelInfo2,
              v21,
              hpReinforceValue,
              adjustHp,
              0,
              0,
              0,
              0,
              0LL);
LABEL_62:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_64:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_65:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_69;
            IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_67;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_69:
    sub_B2C434(iconLabelInfo2, v6);
  }
  return iconLabelInfo2;
}


void __fastcall MultipleViewListViewItem__SetUserServantEntity(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall MultipleViewListViewItem__SwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall MultipleViewListViewItem__SwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *__fastcall MultipleViewListViewItem__get_IconInfo1(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall MultipleViewListViewItem__get_IconInfo2(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall MultipleViewListViewItem__get_IsBase(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall MultipleViewListViewItem__get_IsCanNotSelect(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185C1F & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4185C1F = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(126, 0LL) )
      return 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 0;
  return this->fields.isSelectedSvtId || this->fields.isSelectedMax;
}


bool __fastcall MultipleViewListViewItem__get_IsChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsDispChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsDispLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall MultipleViewListViewItem__get_IsEventJoin(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall MultipleViewListViewItem__get_IsFavorite(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall MultipleViewListViewItem__get_IsHerioneReave(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185C1E & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, method);
    byte_4185C1E = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28617756(126, 0LL);
}


bool __fastcall MultipleViewListViewItem__get_IsLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall MultipleViewListViewItem__get_IsNoPeriod(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall MultipleViewListViewItem__get_IsParty(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall MultipleViewListViewItem__get_IsPush(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall MultipleViewListViewItem__get_IsPushMode(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall MultipleViewListViewItem__get_IsSelectedMax(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectedMax;
}


bool __fastcall MultipleViewListViewItem__get_IsSelectedSvtId(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectedSvtId;
}


bool __fastcall MultipleViewListViewItem__get_IsSwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall MultipleViewListViewItem__get_IsSwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *__fastcall MultipleViewListViewItem__get_Servant(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall MultipleViewListViewItem__get_SvtId(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall MultipleViewListViewItem__get_UserServant(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall MultipleViewListViewItem__set_IsPushMode(
        MultipleViewListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}