void MultipleViewListViewItem___ctor(
        MultipleViewListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  IconLabelInfo_o *v18; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int64_t Master_object; // x0
  __int64 v34; // x1
  struct UserServantEntity_o *v35; // x8
  __int64 v36; // x25
  __int64 v37; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct UserServantEntity_o *v46; // x8
  ServantLimitMaster_o *v47; // x26
  int32_t svtId; // w27
  const MethodInfo *v49; // x2
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  UserServantCollectionMaster_o *v52; // x23
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  int max_length; // w8
  int32_t v56; // w9
  UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  __int64 v60; // x22
  int64_t v61; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x22
  __int64 v65; // x23
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  int v68; // w22
  BalanceConfig_c *v69; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v71; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4CC26DC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&IconLabelInfo_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC26DC = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v35 = this->fields.userSvtEntity;
  if ( !v35 )
    goto LABEL_52;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v37;
  *(_QWORD *)&v92.fields.fakeValue = v36;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v92, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v40, v41, v42, v43, v44, v45);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v46 = this->fields.userSvtEntity;
  if ( !v46 )
    goto LABEL_52;
  v47 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v46->fields.limitCount, 0);
  if ( !v47 )
    goto LABEL_52;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v47, svtId, Master_object, 0);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_52;
  this->fields.rarity = *(_DWORD *)(Master_object + 24);
  MultipleViewListViewItem__SetOverwriteStatus(this, userSvtEntity, v49);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_52;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v50 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v51 = *(_OWORD *)&v50->fields.userId.fields.fakeValue;
  v52 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v50->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v90 = v91;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v90, 0);
  if ( !v52 )
    goto LABEL_52;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v52, Master_object, this->fields.svtId, 0);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0);
  v53 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v53 )
    goto LABEL_52;
  v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v54;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v89, 0);
  if ( !partyUserSvtList )
    goto LABEL_52;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( max_length == v56 )
        sub_1C71610(Master_object);
      if ( Master_object == partyUserSvtList->m_Items[v56] )
        break;
      if ( max_length == ++v56 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v56;
  }
LABEL_29:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  v57 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v57 )
    goto LABEL_52;
  this->fields.isChoice = UserServantEntity__IsChoice(v57, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_52;
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
  v60 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v88 = v91;
  *(_WORD *)&this->fields.isPush = v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v88, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_52;
  v61 = *(int *)(Master_object + 52);
  rarity = this->fields.rarity;
  v63 = this->fields.userSvtEntity;
  this->fields.priority = v61;
  this->fields.sortValue1B = v61;
  this->fields.sortValue2 = rarity;
  if ( !v63 )
    goto LABEL_52;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v65;
  *(_QWORD *)&v93.fields.fakeValue = v64;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v93, 0);
  v66 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v66 )
    goto LABEL_52;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v67;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v87, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  if ( !Master_object )
    goto LABEL_52;
  v68 = *(_DWORD *)(Master_object + 276);
  v69 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v69 = BalanceConfig_TypeInfo;
    Master_object = (int64_t)*p_userSvtEntity;
  }
  static_fields = v69->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v68;
  if ( !Master_object )
    goto LABEL_52;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_52;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v71 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v71 )
    goto LABEL_52;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v71, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         -1,
                                         0),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)p_tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86),
        (Master_object = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_52:
    sub_1C71608(Master_object, v34);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


void MultipleViewListViewItem__Finalize(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool MultipleViewListViewItem__GetNpInfo(
        MultipleViewListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC26E4 & 1) == 0 )
  {
    sub_1C713B0(&TreasureDvcInfo_TypeInfo);
    byte_4CC26E4 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C715FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool MultipleViewListViewItem__IsMatchFilter(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  _BOOL4 isChoice; // w8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v19; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v35; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v37; // w0

  if ( (byte_4CC26E1 & 1) == 0 )
  {
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CC26E1 = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v10->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(userSvtEntity, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v19 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v19 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v19, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
    }
    ClassGroupFilterKindList = sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1C71610(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v35 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v37 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v35) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v37 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v37 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1C71608(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void MultipleViewListViewItem__Modify(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  __int64 v11; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v13; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v15; // x1
  const MethodInfo *v16; // x2
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  __int64 v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_4CC26DF & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC26DF = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v13 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v13
    || (IsChoice = UserServantEntity__IsChoice(v13, 0),
        v15 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v15, v16),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v17 = *p_userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C71608(userSvtEntity, v11);
  }
  v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
  v19 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  this->fields.isPush = v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v20, 0);
}


void MultipleViewListViewItem__ModifyChoiceItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C71608(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewItem__ModifyItem(MultipleViewListViewItem_o *this, bool isFavorite, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q1
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4CC26DD & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC26DD = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v6 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v6
    || (IsChoice = UserServantEntity__IsChoice(v6, 0),
        v8 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v8, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v10 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C71608(userSvtEntity, isFavorite);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewItem__ModifyItem_33700876(
        MultipleViewListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v10; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v12; // x1
  const MethodInfo *v13; // x2
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4CC26DE & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC26DE = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity )
    goto LABEL_10;
  userSvtEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userSvtEntity, 0);
  v10 = this->fields.userSvtEntity;
  this->fields.isLock = (unsigned __int8)userSvtEntity & 1;
  if ( !v10
    || (IsChoice = UserServantEntity__IsChoice(v10, 0),
        v12 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v12, v13),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v14 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C71608(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  v16 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  this->fields.isPush = v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v17, 0);
}


void MultipleViewListViewItem__ModifyLockItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C71608(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void MultipleViewListViewItem__SetOverwriteStatus(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  MultipleViewListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (MultipleViewListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C71608(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool MultipleViewListViewItem__SetSortValue(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsMatchFilter; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  const MethodInfo *v13; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v18; // x20
  IconLabelInfo_o *v19; // x21
  int64_t cost; // x2
  int32_t v21; // w3
  int32_t v22; // w1
  int64_t hp; // x20
  IconLabelInfo_o *v24; // x21
  int32_t v25; // w3
  int32_t v26; // w1
  int64_t friendship; // x2
  IconLabelInfo_o *v28; // x20
  int32_t v29; // w21
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v33; // x8
  int32_t lv; // w20
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v37; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4CC26E0 & 1) == 0 )
  {
    sub_1C713B0(&MultipleViewListViewManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC26E0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  IsMatchFilter = MultipleViewListViewItem__IsMatchFilter(this, sort, method);
  iconLabelInfo2 = 0;
  if ( IsMatchFilter )
  {
    isChoice = this->fields.isChoice;
    isSwapChoice = this->fields.isSwapChoice;
    this->fields.sortValue0 = 0;
    v10 = !isChoice;
    v11 = !isChoice;
    v12 = !v10;
    if ( !isSwapChoice )
      v11 = v12;
    if ( v11 )
    {
      if ( !sort )
        goto LABEL_74;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10;
    }
    iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      if ( sort )
      {
        iconLabelInfo2 = 1;
        switch ( sort->fields.sortKind )
        {
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_74;
            v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v40.fields.fakeValue = v15;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v40;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v39, 0);
            v16 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v16 )
              goto LABEL_74;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v16->fields.createdAt, 0, 0, 0, 0);
            goto LABEL_67;
          case 2:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = this->fields.rarity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            goto LABEL_69;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v18 = *(int *)(iconLabelInfo2 + 256);
            v19 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v18;
            goto LABEL_41;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            UserServantEntity__getTreasureDeviceInfo_43466304(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0);
            LODWORD(cost) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v21 = tdMaxLv[0];
            v22 = 33;
            goto LABEL_38;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v24 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v24 )
              goto LABEL_74;
            v25 = iconLabelInfo2;
            v26 = 3;
            goto LABEL_35;
          case 6:
            hp = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v24 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v24 )
              goto LABEL_74;
            v25 = iconLabelInfo2;
            v26 = 5;
LABEL_35:
            IconLabelInfo__Set_41192248(v24, v26, hp, v25, 0, 0, 0, 0, 0, 0);
            goto LABEL_67;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v22 = 7;
            v21 = 0;
LABEL_38:
            IconLabelInfo__Set_41192248((IconLabelInfo_o *)iconLabelInfo2, v22, cost, v21, 0, 0, 0, 0, 0, 0);
            goto LABEL_45;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = -this->fields.priority;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v18 = *(int *)(iconLabelInfo2 + 256);
            v19 = this->fields.iconLabelInfo1;
            this->fields.sortValue2 = v18;
LABEL_41:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v19 )
              goto LABEL_74;
            IconLabelInfo__Set_41192248(v19, 2, v18, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_72;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Set_41192248(
              (IconLabelInfo_o *)iconLabelInfo2,
              32,
              friendship,
              this->fields.friendshipMax,
              0,
              0,
              0,
              0,
              0,
              0);
LABEL_45:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            v28 = this->fields.iconLabelInfo2;
            v29 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v28 )
              goto LABEL_74;
            IconLabelInfo__Set_41192248(v28, 2, v29, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_51;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            if ( !ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_72;
LABEL_51:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
LABEL_72:
            LOBYTE(iconLabelInfo2) = 1;
            break;
          case 0xE:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_59;
            iconLabelInfo2 = (int64_t)sort->fields.manager;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            naturalAligment = MultipleViewListViewManager_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)naturalAligment
              || *(MultipleViewListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                   + 8 * naturalAligment
                                                   - 8) != MultipleViewListViewManager_TypeInfo )
            {
              goto LABEL_74;
            }
            iconLabelInfo2 = MultipleViewListViewManager__GetAmountSortValue(
                               (MultipleViewListViewManager_o *)iconLabelInfo2,
                               this->fields.svtId,
                               v13);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_59:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_74;
            collectionNo = servantEntity->fields.collectionNo;
            v33 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48))
                                    | collectionNo;
            if ( !v33 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            lv = v33->fields.lv;
            iconLabelInfo2 = (int64_t)v33;
            goto LABEL_70;
          case 0xF:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v37 = 44;
            goto LABEL_66;
          case 0x10:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v37 = 45;
LABEL_66:
            IconLabelInfo__Set_41192248(
              (IconLabelInfo_o *)iconLabelInfo2,
              v37,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
LABEL_67:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_69:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
LABEL_70:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              goto LABEL_74;
            IconLabelInfo__Set_41192248(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_72;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_74:
    sub_1C71608(iconLabelInfo2, v5);
  }
  return iconLabelInfo2;
}


void MultipleViewListViewItem__SetUserServantEntity(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool MultipleViewListViewItem__SwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool MultipleViewListViewItem__SwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *MultipleViewListViewItem__get_IconInfo1(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *MultipleViewListViewItem__get_IconInfo2(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool MultipleViewListViewItem__get_IsBase(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool MultipleViewListViewItem__get_IsCanNotSelect(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4CC26E3 & 1) == 0 )
  {
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CC26E3 = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40699620(126, 0) )
      return 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 0;
  return this->fields.isSelectedSvtId || this->fields.isSelectedMax;
}


bool MultipleViewListViewItem__get_IsChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool MultipleViewListViewItem__get_IsDispChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool MultipleViewListViewItem__get_IsDispLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool MultipleViewListViewItem__get_IsEventJoin(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool MultipleViewListViewItem__get_IsFavorite(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool MultipleViewListViewItem__get_IsHerioneReave(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4CC26E2 & 1) == 0 )
  {
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CC26E2 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40699620(126, 0);
}


bool MultipleViewListViewItem__get_IsLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool MultipleViewListViewItem__get_IsNoPeriod(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool MultipleViewListViewItem__get_IsParty(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool MultipleViewListViewItem__get_IsPush(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool MultipleViewListViewItem__get_IsPushMode(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool MultipleViewListViewItem__get_IsSelectedMax(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectedMax;
}


bool MultipleViewListViewItem__get_IsSelectedSvtId(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectedSvtId;
}


bool MultipleViewListViewItem__get_IsSwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool MultipleViewListViewItem__get_IsSwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *MultipleViewListViewItem__get_Servant(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t MultipleViewListViewItem__get_SvtId(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *MultipleViewListViewItem__get_UserServant(
        MultipleViewListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void MultipleViewListViewItem__set_IsPushMode(MultipleViewListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}