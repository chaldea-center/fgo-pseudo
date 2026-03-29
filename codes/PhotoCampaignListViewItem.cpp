void PhotoCampaignListViewItem___ctor(
        PhotoCampaignListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        bool cannotSelectSvt,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  IconLabelInfo_o *v20; // x26
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int64_t Master_object; // x0
  __int64 v36; // x1
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x26
  __int64 v39; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UserServantEntity_o *v48; // x8
  ServantLimitMaster_o *v49; // x26
  int32_t svtId; // w27
  const MethodInfo *v51; // x2
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q1
  UserServantCollectionMaster_o *v54; // x23
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  int max_length; // w8
  int32_t v58; // w9
  UserServantEntity_o *v59; // x8
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  __int64 v62; // x22
  int64_t v63; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  int64_t v70; // x8
  int v71; // w22
  BalanceConfig_c *v72; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v74; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4D2BE48 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BE48 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = this->fields.userSvtEntity;
  if ( !v37 )
    goto LABEL_52;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v39;
  *(_QWORD *)&v95.fields.fakeValue = v38;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v95, 0);
  this->fields._IsCannotSelectSvt_k__BackingField = cannotSelectSvt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v42, v43, v44, v45, v46, v47);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v48 = this->fields.userSvtEntity;
  if ( !v48 )
    goto LABEL_52;
  v49 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v48->fields.limitCount, 0);
  if ( !v49 )
    goto LABEL_52;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v49, svtId, Master_object, 0);
  if ( !*p_servantEntity )
    goto LABEL_52;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_52;
  this->fields.rarity = *(_DWORD *)(Master_object + 24);
  PhotoCampaignListViewItem__SetOverwriteStatus(this, userSvtEntity, v51);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_52;
  this->fields.isHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v52 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v53 = *(_OWORD *)&v52->fields.userId.fields.fakeValue;
  v54 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v52->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v94.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v93 = v94;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v93, 0);
  if ( !v54 )
    goto LABEL_52;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v54, Master_object, this->fields.svtId, 0);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0);
  v55 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v55 )
    goto LABEL_52;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v92.fields.fakeValue = v56;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v92, 0);
  if ( !partyUserSvtList )
    goto LABEL_52;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      if ( max_length == v58 )
        sub_1C93D34(Master_object);
      if ( Master_object == partyUserSvtList->m_Items[v58] )
        break;
      if ( max_length == ++v58 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v58;
  }
LABEL_29:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  v59 = this->fields.userSvtEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v59 )
    goto LABEL_52;
  this->fields.isChoice = UserServantEntity__IsChoice(v59, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_52;
  v60 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_52;
  v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
  v62 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v94.fields.fakeValue = v61;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v91 = v94;
  *(_WORD *)&this->fields.isPush = v62 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v91, 0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_52;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_52;
  v63 = *(int *)(Master_object + 52);
  rarity = this->fields.rarity;
  v65 = this->fields.userSvtEntity;
  this->fields.priority = v63;
  this->fields.sortValue1B = v63;
  this->fields.sortValue2 = rarity;
  if ( !v65 )
    goto LABEL_52;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v67;
  *(_QWORD *)&v96.fields.fakeValue = v66;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v96, 0);
  v68 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v68 )
    goto LABEL_52;
  v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v69;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v90, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v70;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_52;
  v71 = *(_DWORD *)(Master_object + 276);
  v72 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
    Master_object = (int64_t)*p_userSvtEntity;
  }
  static_fields = v72->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v71;
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
  v74 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v74 )
    goto LABEL_52;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v74, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         -1,
                                         0),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)p_tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89),
        (Master_object = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_52:
    sub_1C93D2C(Master_object, v36);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


void PhotoCampaignListViewItem__Finalize(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool PhotoCampaignListViewItem__IsMatchFilter(
        PhotoCampaignListViewItem_o *this,
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

  if ( (byte_4D2BE4B & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&ListViewSort_FilterKind___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2BE4B = 1;
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
                                        (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1C93A78(
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
        sub_1C93A78(
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
    ClassGroupFilterKindList = sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
      sub_1C93D34(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1C93D2C(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void PhotoCampaignListViewItem__ModifyChoiceItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C93D2C(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewItem__ModifyItem(
        PhotoCampaignListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
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

  if ( (byte_4D2BE49 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2BE49 = 1;
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
        PhotoCampaignListViewItem__SetOverwriteStatus(this, v8, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v10 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_1C93D2C(userSvtEntity, isFavorite);
  }
  v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  v12 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.isPush = v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v13, 0);
}


void PhotoCampaignListViewItem__ModifyLockItem(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C93D2C(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


void PhotoCampaignListViewItem__SetOverwriteStatus(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (PhotoCampaignListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C93D2C(this, userServantEntity);
  }
  v3->fields.cost = this->fields.loopIndex;
  *(_QWORD *)&v3->fields.hp = *(_QWORD *)&this->fields.selectNum;
  v3->fields.rarity = this->fields.sortIndex;
}


bool PhotoCampaignListViewItem__SetSortValue(
        PhotoCampaignListViewItem_o *this,
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

  if ( (byte_4D2BE4A & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewManager_TypeInfo);
    byte_4D2BE4A = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  IsMatchFilter = PhotoCampaignListViewItem__IsMatchFilter(this, sort, method);
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
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v39, 0);
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
            UserServantEntity__getTreasureDeviceInfo_43875668(
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
            IconLabelInfo__Set_41636824(v24, v26, hp, v25, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41636824((IconLabelInfo_o *)iconLabelInfo2, v22, cost, v21, 0, 0, 0, 0, 0, 0);
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
            IconLabelInfo__Set_41636824(v19, 2, v18, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_72;
          case 0xA:
            friendship = this->fields.friendship;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = friendship;
            if ( !iconLabelInfo2 )
              goto LABEL_74;
            IconLabelInfo__Set_41636824(
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
            IconLabelInfo__Set_41636824(v28, 2, v29, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
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
            naturalAligment = PhotoCampaignListViewManager_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)iconLabelInfo2 + 304LL) < (unsigned int)naturalAligment
              || *(PhotoCampaignListViewManager_c **)(*(_QWORD *)(*(_QWORD *)iconLabelInfo2 + 200LL)
                                                    + 8 * naturalAligment
                                                    - 8) != PhotoCampaignListViewManager_TypeInfo )
            {
              goto LABEL_74;
            }
            iconLabelInfo2 = PhotoCampaignListViewManager__GetAmountSortValue(
                               (PhotoCampaignListViewManager_o *)iconLabelInfo2,
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
            IconLabelInfo__Set_41636824(
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
            IconLabelInfo__Set_41636824(iconLabelInfo1, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_72;
          default:
            return iconLabelInfo2;
        }
        return iconLabelInfo2;
      }
    }
LABEL_74:
    sub_1C93D2C(iconLabelInfo2, v5);
  }
  return iconLabelInfo2;
}


void PhotoCampaignListViewItem__SetUserServantEntity(
        PhotoCampaignListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.userSvtEntity = entity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool PhotoCampaignListViewItem__SwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool PhotoCampaignListViewItem__SwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


IconLabelInfo_o *PhotoCampaignListViewItem__get_IconInfo1(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *PhotoCampaignListViewItem__get_IconInfo2(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool PhotoCampaignListViewItem__get_IsCanNotSelect(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BE4D & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2BE4D = 1;
  }
  if ( !this->fields.isHeroine )
    return this->fields._IsCannotSelectSvt_k__BackingField;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41140656(126, 0) || this->fields._IsCannotSelectSvt_k__BackingField;
}


bool PhotoCampaignListViewItem__get_IsCannotSelectSvt(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsCannotSelectSvt_k__BackingField;
}


bool PhotoCampaignListViewItem__get_IsChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool PhotoCampaignListViewItem__get_IsDispChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool PhotoCampaignListViewItem__get_IsDispLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool PhotoCampaignListViewItem__get_IsEventJoin(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool PhotoCampaignListViewItem__get_IsHerioneReave(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BE4C & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2BE4C = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41140656(126, 0);
}


bool PhotoCampaignListViewItem__get_IsLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool PhotoCampaignListViewItem__get_IsParty(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool PhotoCampaignListViewItem__get_IsPush(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool PhotoCampaignListViewItem__get_IsPushMode(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool PhotoCampaignListViewItem__get_IsSwapChoice(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool PhotoCampaignListViewItem__get_IsSwapLock(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


ServantEntity_o *PhotoCampaignListViewItem__get_Servant(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t PhotoCampaignListViewItem__get_SvtId(PhotoCampaignListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *PhotoCampaignListViewItem__get_UserServant(
        PhotoCampaignListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void PhotoCampaignListViewItem__set_IsCannotSelectSvt(
        PhotoCampaignListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCannotSelectSvt_k__BackingField = value;
}


void PhotoCampaignListViewItem__set_IsPushMode(PhotoCampaignListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}