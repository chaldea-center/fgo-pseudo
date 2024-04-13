void __fastcall PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  IconLabelInfo_o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  IconLabelInfo_o *v51; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v67; // x1
  struct UserServantEntity_o *v68; // x8
  __int64 v69; // x25
  __int64 v70; // x26
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UserServantEntity_o *v79; // x8
  ServantLimitMaster_o *v80; // x26
  int32_t svtId; // w27
  int32_t v82; // w8
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  UserServantCollectionMaster_o *v85; // x23
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  signed int max_length; // w8
  unsigned int v89; // w9
  UserServantEntity_o *v90; // x8
  struct UserServantEntity_o *v91; // x8
  __int128 v92; // q0
  __int64 v93; // x22
  int64_t v94; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x22
  __int64 v98; // x23
  int64_t v99; // x8
  int v100; // w22
  BalanceConfig_c *v101; // x8
  UserServantEntity_o *v102; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  __int64 v118; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_42E839A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userSvtEntity, partyUserSvtList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42E839A = 1;
  }
  v44 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v44, 0LL);
  this->fields.iconLabelInfo1 = v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v51, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v68 = this->fields.userSvtEntity;
  if ( !v68 )
    goto LABEL_57;
  v70 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v70;
  *(_QWORD *)&v123.fields.fakeValue = v69;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v123, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       this->fields.svtId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v79 = this->fields.userSvtEntity;
  if ( !v79 )
    goto LABEL_57;
  v80 = (ServantLimitMaster_o *)Master_WarQuestSelectionMaster;
  svtId = this->fields.svtId;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                     v79->fields.limitCount,
                                     0LL);
  if ( !v80 )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)ServantLimitMaster__GetEntity(
                                              v80,
                                              svtId,
                                              Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !*p_servantEntity )
    goto LABEL_57;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v82 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v82;
  if ( !userSvtEntity )
    goto LABEL_57;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v83 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v84 = *(_OWORD *)&v83->fields.userId.fields.fakeValue;
  v85 = (UserServantCollectionMaster_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v83->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v84;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v121 = v122;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v121, 0LL);
  if ( !v85 )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                              v85,
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
  v86 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v86 )
    goto LABEL_57;
  v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v87;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v120, 0LL);
  if ( !partyUserSvtList )
    goto LABEL_57;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v89 = 0;
    while ( 1 )
    {
      if ( v89 >= max_length )
      {
        v118 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v118, 0LL);
      }
      if ( Master_WarQuestSelectionMaster == partyUserSvtList->m_Items[v89] )
        break;
      if ( (int)++v89 >= max_length )
        goto LABEL_32;
    }
    this->fields.partyIndex = v89;
  }
LABEL_32:
  Master_WarQuestSelectionMaster = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = UserServantEntity__IsLock((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
  v90 = this->fields.userSvtEntity;
  this->fields.isLock = Master_WarQuestSelectionMaster & 1;
  if ( !v90 )
    goto LABEL_57;
  this->fields.isChoice = UserServantEntity__IsChoice(v90, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v91 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_57;
  v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
  v93 = *(_QWORD *)(Master_WarQuestSelectionMaster + 120);
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v92;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v119 = v122;
  *(_WORD *)&this->fields.isPush = v93 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                            &v119,
                                            0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                              this->fields.classId,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v94 = *(int *)(Master_WarQuestSelectionMaster + 48);
  rarity = this->fields.rarity;
  v96 = this->fields.userSvtEntity;
  this->fields.priority = v94;
  this->fields.sortValue1B = v94;
  this->fields.sortValue2 = rarity;
  if ( !v96 )
    goto LABEL_57;
  v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v124.fields.currentCryptoKey = v98;
  *(_QWORD *)&v124.fields.fakeValue = v97;
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v124, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v99;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v100 = *(_DWORD *)(Master_WarQuestSelectionMaster + 276);
  v101 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
    Master_WarQuestSelectionMaster = (int64_t)*p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v101->static_fields->StatusUpAdjustHp * v100;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  this->fields.atkReinforceValue = v101->static_fields->StatusUpAdjustAtk
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
  v102 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_WarQuestSelectionMaster;
  if ( !v102 )
    goto LABEL_57;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v102, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.userSvtEntity;
  if ( !Master_WarQuestSelectionMaster
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                         0,
                                         0LL),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_B5D560(
          (BattleServantConfConponent_o *)p_tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117),
        (Master_WarQuestSelectionMaster = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_57:
    sub_B5D69C(Master_WarQuestSelectionMaster, v67);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_WarQuestSelectionMaster, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v13; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v25; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v41; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v43; // w0
  __int64 v44; // x0

  if ( (byte_42E839F & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42E839F = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v15->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
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
        v25 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v25 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_64:
      v44 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v44, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v41 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v43 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v41) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v43 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v43 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
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
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v13; // x8
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  if ( (byte_42E839D & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    byte_42E839D = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B5D560(
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
    sub_B5D69C(userSvtEntity, v11);
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
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v17, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyChoiceItem(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v7; // x8
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q1
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_42E839B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite, (_DWORD)method, v3);
    byte_42E839B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v7 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v7)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v7, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v8 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B5D69C(userSvtEntity, isFavorite);
  }
  v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
  v10 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  this->fields.isPush = v10 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewItem__ModifyItem_24614160(
        PhotoCampaignListViewItem_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v7; // x8
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q1
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_42E839C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectIndex, (_DWORD)method, v3);
    byte_42E839C = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
  if ( !userSvtEntity
    || (userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0LL),
        v7 = this->fields.userSvtEntity,
        this->fields.isLock = (unsigned __int8)userSvtEntity & 1,
        !v7)
    || (this->fields.isChoice = UserServantEntity__IsChoice(v7, 0LL),
        *(_WORD *)&this->fields.isSwapLock = 0,
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (v8 = this->fields.userSvtEntity) == 0LL )
  {
    sub_B5D69C(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
  v10 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  this->fields.isPush = v10 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL);
}


void __fastcall PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall PhotoCampaignListViewItem__SetSortValue(
        PhotoCampaignListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  const MethodInfo *v14; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  struct UserServantEntity_o *v17; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v20; // w1
  struct UserServantEntity_o *v21; // x8
  int32_t adjustHp; // w3
  int64_t hpReinforceValue; // x2
  int32_t v24; // w1
  struct UserServantEntity_o *v25; // x8
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  IconLabelInfo_o *v28; // x20
  int32_t v29; // w21
  __int64 v30; // x10
  struct ServantEntity_o *v31; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v33; // x8
  int32_t lv; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-40h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_42E839E & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&PhotoCampaignListViewManager_TypeInfo, v6, v7, v8);
    byte_42E839E = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
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
            v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v37.fields.fakeValue = v16;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v36 = v37;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v36, 0LL);
            v17 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v17 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v17->fields.createdAt, 0, 0, 0, 0LL);
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
            UserServantEntity__getTreasureDeviceInfo_21848072(
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
            v20 = 33;
            goto LABEL_39;
          case 5:
            v21 = this->fields.userSvtEntity;
            if ( !v21 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v21->fields.hp;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = v21->fields.adjustHp;
            LODWORD(hpReinforceValue) = v21->fields.hp;
            v24 = 3;
            goto LABEL_61;
          case 6:
            v25 = this->fields.userSvtEntity;
            if ( !v25 )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v25->fields.atk;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = v25->fields.adjustAtk;
            LODWORD(hpReinforceValue) = v25->fields.atk;
            v24 = 5;
            goto LABEL_61;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_69;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = servantEntity->fields.cost;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            IconLabelInfo__Set_28463004(
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
            v20 = 32;
LABEL_39:
            IconLabelInfo__Set_28463004(
              (IconLabelInfo_o *)iconLabelInfo2,
              v20,
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
            v28 = this->fields.iconLabelInfo2;
            v29 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v28 )
              goto LABEL_69;
            IconLabelInfo__Set_28463004(v28, 2, v29, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v30 = *(&PhotoCampaignListViewManager_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 300LL) < (unsigned int)v30
              || *(PhotoCampaignListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL) + 8 * v30 - 8) != PhotoCampaignListViewManager_TypeInfo )
            {
              goto LABEL_69;
            }
            iconLabelInfo2 = PhotoCampaignListViewManager__GetAmountSortValue(
                               (PhotoCampaignListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v14);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_54:
            v31 = this->fields.servantEntity;
            if ( !v31 )
              goto LABEL_69;
            collectionNo = v31->fields.collectionNo;
            v33 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v33 )
              goto LABEL_69;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v33->fields.lv;
            iconLabelInfo2 = (int64_t)v33;
            goto LABEL_65;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxHpReinforceValue;
            v24 = 44;
            goto LABEL_61;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_69;
            adjustHp = this->fields.nowMaxAtkReinforceValue;
            v24 = 45;
LABEL_61:
            IconLabelInfo__Set_28463004(
              (IconLabelInfo_o *)iconLabelInfo2,
              v24,
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
            IconLabelInfo__Set_28463004(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_67;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_69:
    sub_B5D69C(iconLabelInfo2, v9);
  }
  return iconLabelInfo2;
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E83A1 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E83A1 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E83A0 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E83A0 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29295864(126, 0LL);
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