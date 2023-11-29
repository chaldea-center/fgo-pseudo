// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  IconLabelInfo_o *v33; // x25
  IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UserServantEntity_o *v48; // x8
  __int64 v49; // x25
  __int64 v50; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WarQuestSelectionMaster_o *v60; // x0
  struct UserServantEntity_o *v61; // x8
  ServantLimitMaster_o *v62; // x26
  int32_t svtId; // w27
  int32_t v64; // w0
  ServantLimitEntity_o *v65; // x0
  int32_t rarity; // w8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v69; // x8
  __int128 v70; // q1
  UserServantCollectionMaster_o *v71; // x23
  int64_t v72; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantEntity_o *v74; // x8
  __int128 v75; // q0
  int64_t v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  signed int max_length; // w8
  unsigned int v80; // w9
  bool IsLock; // w0
  UserServantEntity_o *v82; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  int64_t pushUserSvtId; // x22
  WebViewManager_o *v87; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v88; // x0
  WarEntity_o *v89; // x0
  int64_t bannerId; // x9
  int64_t v91; // x10
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x22
  __int64 v94; // x23
  int64_t v95; // x8
  struct UserServantEntity_o *v96; // x0
  int32_t adjustHp; // w22
  BalanceConfig_c *v98; // x8
  UserServantEntity_o *v99; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v101; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  UserServantEntity_o *v109; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  IconLabelInfo_o *v118; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_40F8F2F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v17);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40F8F2F = 1;
  }
  v22 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             partyUserSvtList,
                             isFavorite);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo1 = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v29, v30, v31, v32);
  IconLabelInfo___ctor(v33, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = this->fields.userSvtEntity;
  if ( !v48 )
    goto LABEL_57;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v50;
  *(_QWORD *)&v123.fields.fakeValue = v49;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v123, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       Master_WarQuestSelectionMaster,
                                       this->fields.svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v61 = this->fields.userSvtEntity;
  if ( !v61 )
    goto LABEL_57;
  v62 = (ServantLimitMaster_o *)v60;
  svtId = this->fields.svtId;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61->fields.limitCount, 0LL);
  if ( !v62 )
    goto LABEL_57;
  v65 = ServantLimitMaster__GetEntity(v62, svtId, v64, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_57;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v65 )
    goto LABEL_57;
  rarity = v65->fields.rarity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = rarity;
  if ( !userSvtEntity )
    goto LABEL_57;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v69 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v70 = *(_OWORD *)&v69->fields.userId.fields.fakeValue;
  v71 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v69->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v70;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v121 = v122;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v121, 0LL);
  if ( !v71 )
    goto LABEL_57;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v71, v72, this->fields.svtId, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_57;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  v74 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v74 )
    goto LABEL_57;
  v75 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v75;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v120, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_57;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v80 = 0;
    while ( 1 )
    {
      if ( v80 >= max_length )
      {
        sub_B17100(v76, v77, v78);
        sub_B170A0();
      }
      if ( v76 == partyUserSvtList->m_Items[v80] )
        break;
      if ( (int)++v80 >= max_length )
        goto LABEL_32;
    }
    this->fields.partyIndex = v80;
  }
LABEL_32:
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  IsLock = UserServantEntity__IsLock(*p_userSvtEntity, 0LL);
  v82 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v82 )
    goto LABEL_57;
  this->fields.isChoice = UserServantEntity__IsChoice(v82, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_57;
  v84 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v85;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v119 = v122;
  *(_WORD *)&this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                      &v119,
                                                      0LL);
  v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v87 )
    goto LABEL_57;
  v88 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v87,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v88 )
    goto LABEL_57;
  v89 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v88,
          this->fields.classId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v89 )
    goto LABEL_57;
  bannerId = v89->fields.bannerId;
  v91 = this->fields.rarity;
  v92 = this->fields.userSvtEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  this->fields.sortValue2 = v91;
  if ( !v92 )
    goto LABEL_57;
  v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v124.fields.currentCryptoKey = v94;
  *(_QWORD *)&v124.fields.fakeValue = v93;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124, 0LL);
  v96 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v95;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  if ( !v96 )
    goto LABEL_57;
  adjustHp = v96->fields.adjustHp;
  v98 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v98 = BalanceConfig_TypeInfo;
    v96 = *p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v98->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v96 )
    goto LABEL_57;
  this->fields.atkReinforceValue = v98->static_fields->StatusUpAdjustAtk * v96->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v96,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v99 = this->fields.userSvtEntity;
  if ( !v99 )
    goto LABEL_57;
  DispLimitCount = UserServantEntity__getDispLimitCount(v99, 0, 0LL);
  v101 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v101 )
    goto LABEL_57;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v101, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = this->fields.userSvtEntity;
  if ( !v109
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v109, 0, 0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117),
        (v118 = (IconLabelInfo_o *)*(p_tdCategoryIdList - 6)) == 0LL)
    || (IconLabelInfo__Clear(v118, 0LL), !*p_iconLabelInfo2) )
  {
LABEL_57:
    sub_B170D4();
  }
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


void __fastcall PhotoCampaignListViewItem__Finalize(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall PhotoCampaignListViewItem__IsMatchFilter(
        PhotoCampaignListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v20; // x2
  ListViewSort_FilterKind_array *v21; // x0
  __int64 v22; // x2
  ListViewSort_FilterKind_array *v23; // x1
  FilterKindList_c *v24; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v26; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v29; // x0
  int32_t v30; // w0
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserServantEntity_o *v39; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v48; // x2
  _BOOL4 v49; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v51; // w0

  if ( (byte_40F8F34 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40F8F34 = 1;
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_63;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_63;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
LABEL_63:
    sub_B170D4();
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
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
        v29 = this->fields.userSvtEntity;
        if ( !v29 )
          goto LABEL_63;
        v30 = UserServantEntity__getDispLimitCount(v29, 0, 0LL);
        v31 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v30;
        if ( !v31 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        v39 = this->fields.userSvtEntity;
        if ( !v39 )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v39, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
    }
    v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v20);
    if ( !v21 )
      goto LABEL_63;
    v23 = v21;
    if ( !v21->max_length )
      goto LABEL_64;
    v21->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL);
    v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v48);
    if ( !v21 )
      goto LABEL_63;
    v23 = v21;
    if ( !v21->max_length )
    {
LABEL_64:
      sub_B17100(v21, v23, v22);
      sub_B170A0();
    }
    v21->m_Items[1] = 51;
    v49 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v51 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v49) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v51 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v51 )
    {
      return 0;
    }
  }
  v21 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v20);
  if ( !v21 )
    goto LABEL_63;
  v23 = v21;
  if ( !v21->max_length )
    goto LABEL_64;
  v21->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v24->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_63;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall PhotoCampaignListViewItem__Modify(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserServantEntity_o *v13; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40F8F32 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
    byte_40F8F32 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B16F98(
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
    || (IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL),
        v13 = this->fields.userSvtEntity,
        this->fields.isLock = IsLock,
        !v13)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v13, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v15 = *p_userSvtEntity) == 0LL )
  {
    sub_B170D4();
  }
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyChoiceItem(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserServantEntity_o *v7; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_40F8F30 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite);
    byte_40F8F30 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL),
        v7 = this->fields.userSvtEntity,
        this->fields.isLock = IsLock,
        !v7)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v7, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v9 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B170D4();
  }
  v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem_23303000(
        PhotoCampaignListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserServantEntity_o *v11; // x8
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_40F8F31 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex);
    byte_40F8F31 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity
    || (IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL),
        v11 = this->fields.userSvtEntity,
        this->fields.isLock = IsLock,
        !v11)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v11, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v13 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B170D4();
  }
  v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v16, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall PhotoCampaignListViewItem__SetSortValue(
        PhotoCampaignListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsMatchFilter; // w8
  bool result; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v11; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  int64_t v14; // x0
  struct UserServantEntity_o *v15; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v17; // x0
  UserServantEntity_o *v18; // x0
  int64_t friendship; // x2
  IconLabelInfo_o *v20; // x0
  int32_t friendshipMax; // w3
  int32_t v22; // w1
  struct UserServantEntity_o *v23; // x8
  IconLabelInfo_o *v24; // x0
  int32_t adjustHp; // w3
  int64_t hpReinforceValue; // x2
  int32_t v27; // w1
  struct UserServantEntity_o *v28; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v30; // x0
  IconLabelInfo_o *v31; // x19
  struct UserServantEntity_o *v32; // x0
  IconLabelInfo_o *v33; // x20
  int32_t lv; // w21
  int32_t LevelMax; // w0
  ServantEntity_o *v36; // x0
  ServantEntity_o *v37; // x0
  IconLabelInfo_o *v38; // x0
  IconLabelInfo_o *v39; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v42; // x10
  struct ServantEntity_o *v43; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v45; // x8
  int32_t v46; // w20
  int32_t v47; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_40F8F33 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
    sub_B16FFC(&PhotoCampaignListViewManager_TypeInfo, v5);
    byte_40F8F33 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
  result = 0;
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
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      IconLabelInfo__Clear(iconLabelInfo2, 0LL);
      if ( sort )
      {
        result = 1;
        switch ( sort->fields.sortKind )
        {
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_69;
            v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v13;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v48 = v49;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v48, 0LL);
            v15 = this->fields.userSvtEntity;
            this->fields.sortValue1 = v14;
            if ( !v15 )
              goto LABEL_69;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            if ( !iconLabelInfo1 )
              goto LABEL_69;
            IconLabelInfo__SetTime(iconLabelInfo1, 49, v15->fields.createdAt, 0, 0, 0, 0LL);
            goto LABEL_62;
          case 2:
            v17 = this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !v17 )
              goto LABEL_69;
            goto LABEL_36;
          case 3:
            v17 = this->fields.userSvtEntity;
            if ( !v17 )
              goto LABEL_69;
            this->fields.sortValue1 = v17->fields.lv;
            goto LABEL_36;
          case 4:
            v18 = this->fields.userSvtEntity;
            if ( !v18 )
              goto LABEL_69;
            UserServantEntity__getTreasureDeviceInfo_21453148(v18, &tdMaxLv[1], tdMaxLv, 0LL);
            LODWORD(friendship) = tdMaxLv[1];
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !v20 )
              goto LABEL_69;
            friendshipMax = tdMaxLv[0];
            v22 = 33;
            goto LABEL_39;
          case 5:
            v23 = this->fields.userSvtEntity;
            if ( !v23 )
              goto LABEL_69;
            v24 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v23->fields.hp;
            if ( !v24 )
              goto LABEL_69;
            adjustHp = v23->fields.adjustHp;
            LODWORD(hpReinforceValue) = v23->fields.hp;
            v27 = 3;
            goto LABEL_61;
          case 6:
            v28 = this->fields.userSvtEntity;
            if ( !v28 )
              goto LABEL_69;
            v24 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v28->fields.atk;
            if ( !v24 )
              goto LABEL_69;
            adjustHp = v28->fields.adjustAtk;
            LODWORD(hpReinforceValue) = v28->fields.atk;
            v27 = 5;
            goto LABEL_61;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_69;
            v30 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = servantEntity->fields.cost;
            if ( !v30 )
              goto LABEL_69;
            IconLabelInfo__Set_28888132(v30, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_40;
          case 8:
            v17 = this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !v17 )
              goto LABEL_69;
            this->fields.sortValue2 = v17->fields.lv;
LABEL_36:
            v31 = this->fields.iconLabelInfo1;
            goto LABEL_64;
          case 0xA:
            friendship = this->fields.friendship;
            v20 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !v20 )
              goto LABEL_69;
            friendshipMax = this->fields.friendshipMax;
            v22 = 32;
LABEL_39:
            IconLabelInfo__Set_28888132(v20, v22, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_40:
            v32 = this->fields.userSvtEntity;
            if ( !v32 )
              goto LABEL_69;
            v33 = this->fields.iconLabelInfo2;
            lv = v32->fields.lv;
            LevelMax = UserServantEntity__getLevelMax(v32, 0LL);
            if ( !v33 )
              goto LABEL_69;
            IconLabelInfo__Set_28888132(v33, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
            v36 = this->fields.servantEntity;
            if ( !v36 )
              goto LABEL_69;
            if ( ServantEntity__get_IsExpUp(v36, 0LL) )
              goto LABEL_46;
            v37 = this->fields.servantEntity;
            if ( !v37 )
              goto LABEL_69;
            if ( !ServantEntity__get_IsStatusUp(v37, 0LL) )
              goto LABEL_67;
LABEL_46:
            v38 = this->fields.iconLabelInfo1;
            if ( !v38 )
              goto LABEL_69;
            IconLabelInfo__Clear(v38, 0LL);
            v39 = this->fields.iconLabelInfo2;
            if ( !v39 )
              goto LABEL_69;
            IconLabelInfo__Clear(v39, 0LL);
LABEL_67:
            result = 1;
            break;
          case 0xE:
            amountSortValue = this->fields.amountSortValue;
            if ( (amountSortValue & 0x8000000000000000LL) == 0 )
              goto LABEL_54;
            manager = sort->fields.manager;
            if ( !manager )
              goto LABEL_69;
            v42 = *(&PhotoCampaignListViewManager_TypeInfo->_2.bitflags2 + 1);
            if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v42
              || (PhotoCampaignListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] != PhotoCampaignListViewManager_TypeInfo )
            {
              goto LABEL_69;
            }
            amountSortValue = PhotoCampaignListViewManager__GetAmountSortValue(
                                (PhotoCampaignListViewManager_o *)manager,
                                this->fields.svtId,
                                v11);
            this->fields.amountSortValue = amountSortValue;
LABEL_54:
            v43 = this->fields.servantEntity;
            if ( !v43 )
              goto LABEL_69;
            collectionNo = v43->fields.collectionNo;
            v45 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (amountSortValue << 48)) | collectionNo;
            if ( !v45 )
              goto LABEL_69;
            v31 = this->fields.iconLabelInfo1;
            v46 = v45->fields.lv;
            v17 = v45;
            goto LABEL_65;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            v24 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !v24 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxHpReinforceValue;
            v27 = 44;
            goto LABEL_61;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            v24 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !v24 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxAtkReinforceValue;
            v27 = 45;
LABEL_61:
            IconLabelInfo__Set_28888132(v24, v27, hpReinforceValue, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_62:
            v17 = this->fields.userSvtEntity;
            if ( !v17 )
              goto LABEL_69;
            v31 = this->fields.iconLabelInfo2;
LABEL_64:
            v46 = v17->fields.lv;
LABEL_65:
            v47 = UserServantEntity__getLevelMax(v17, 0LL);
            if ( !v31 )
              goto LABEL_69;
            IconLabelInfo__Set_28888132(v31, 2, v46, v47, 0, 0, 0, 0, 0LL);
            goto LABEL_67;
          default:
            return result;
        }
        return result;
      }
    }
LABEL_69:
    sub_B170D4();
  }
  return result;
}


void __fastcall PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall PhotoCampaignListViewItem__SwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall PhotoCampaignListViewItem__SwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *__fastcall PhotoCampaignListViewItem__get_IconInfo1(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall PhotoCampaignListViewItem__get_IconInfo2(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall PhotoCampaignListViewItem__get_IsBase(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall PhotoCampaignListViewItem__get_IsCanNotSelect(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8F36 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40F8F36 = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
      return 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 0;
  return this->fields.isSelectedSvtId || this->fields.isSelectedMax;
}


bool __fastcall PhotoCampaignListViewItem__get_IsChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsDispChoice(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsDispLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall PhotoCampaignListViewItem__get_IsEventJoin(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall PhotoCampaignListViewItem__get_IsFavorite(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall PhotoCampaignListViewItem__get_IsHerioneReave(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8F35 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40F8F35 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023340(126, 0LL);
}


bool __fastcall PhotoCampaignListViewItem__get_IsLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall PhotoCampaignListViewItem__get_IsParty(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall PhotoCampaignListViewItem__get_IsPush(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall PhotoCampaignListViewItem__get_IsPushMode(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSelectedMax(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectedMax;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSelectedSvtId(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectedSvtId;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSwapChoice(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall PhotoCampaignListViewItem__get_IsSwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *__fastcall PhotoCampaignListViewItem__get_Servant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall PhotoCampaignListViewItem__get_SvtId(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall PhotoCampaignListViewItem__get_UserServant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall PhotoCampaignListViewItem__set_IsPushMode(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}