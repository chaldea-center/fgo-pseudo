void MultipleViewListViewItem___ctor(
        MultipleViewListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserSvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  IconLabelInfo_o *v18; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UserServantEntity_o **p_userSvtEntity; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int64_t Master_object; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x25
  __int64 v38; // x26
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w8
  DataManager_c *v42; // x0
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct UserServantEntity_o *v51; // x8
  ServantLimitMaster_o *v52; // x26
  int32_t svtId; // w27
  const MethodInfo *v54; // x2
  bool IsHeroine; // w0
  const MethodInfo_47A29F8 *v56; // x8
  __int64 v57; // x2
  struct UserServantEntity_o *v58; // x8
  UserServantCollectionMaster_o *v59; // x24
  __int128 v60; // q1
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q1
  int max_length; // w8
  int32_t v64; // w10
  bool IsLock; // w8
  __int64 v66; // x2
  struct UserServantEntity_o *v67; // x9
  __int128 v68; // q0
  __int128 v69; // q1
  __int64 v70; // x22
  int v71; // w9
  int64_t v72; // x0
  const MethodInfo_47A29F8 *v73; // x8
  __int64 v74; // x2
  int64_t v75; // x9
  int64_t rarity; // x10
  struct UserServantEntity_o *v77; // x8
  __int64 v78; // x22
  __int64 v79; // x23
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q1
  __int64 v82; // x1
  __int64 v83; // x2
  BalanceConfig_c *v84; // x0
  int32_t adjustHp; // w23
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v87; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  struct System_Int32_array **p_tdCategoryIdList; // x19
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_596B7B7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B7B7 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  this->fields.iconLabelInfo1 = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v36 = this->fields.userSvtEntity;
  if ( !v36 )
    goto LABEL_50;
  v37 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35);
  *(_QWORD *)&v108.fields.currentCryptoKey = v37;
  *(_QWORD *)&v108.fields.fakeValue = v38;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
  v42 = DataManager_TypeInfo;
  this->fields.svtId = v41;
  if ( !*(&v42->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v42, v39, v40);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v51 = this->fields.userSvtEntity;
  if ( !v51 )
    goto LABEL_50;
  v52 = (ServantLimitMaster_o *)Master_object;
  svtId = this->fields.svtId;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v51->fields.limitCount, 0);
  if ( !v52 )
    goto LABEL_50;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v52, svtId, Master_object, 0);
  if ( !*p_servantEntity )
    goto LABEL_50;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Master_object )
    goto LABEL_50;
  this->fields.rarity = *(_DWORD *)(Master_object + 24);
  MultipleViewListViewItem__SetOverwriteStatus(this, userSvtEntity, v54);
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_50;
  IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
  v56 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isHeroine = IsHeroine;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance(v56);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v59 = (UserServantCollectionMaster_o *)Master_object;
  v60 = *(_OWORD *)&v58->fields.userId.fields.fakeValue;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v58->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v60;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v57);
  v106 = v107;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v106, 0);
  if ( !v59 )
    goto LABEL_50;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v59, Master_object, this->fields.svtId, 0);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = UserServantCollectionEntity__getFriendShipRankInfo(
                    (UserServantCollectionEntity_o *)Master_object,
                    &this->fields.friendship,
                    &this->fields.friendshipMax,
                    0);
  v61 = this->fields.userSvtEntity;
  this->fields.partyIndex = -1;
  if ( !v61 )
    goto LABEL_50;
  v62 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
  *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v105.fields.fakeValue = v62;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v105, 0);
  if ( !partyUserSvtList )
    goto LABEL_50;
  max_length = partyUserSvtList->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    while ( 1 )
    {
      if ( max_length == v64 )
        sub_2213CE4(Master_object);
      if ( Master_object == partyUserSvtList->m_Items[v64] )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v64 )
        goto LABEL_29;
    }
    this->fields.partyIndex = v64;
  }
LABEL_29:
  Master_object = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Master_object )
    goto LABEL_50;
  this->fields.isChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_50;
  v67 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_50;
  v68 = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
  v69 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
  v70 = *(_QWORD *)(Master_object + 128);
  v71 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v107.fields.currentCryptoKey = v68;
  *(_OWORD *)&v107.fields.fakeValue = v69;
  if ( !v71 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v66);
  v104 = v107;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v104, 0);
  v73 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isPushMode = 0;
  this->fields.isPush = v70 == v72;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance(v73);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_50;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_50;
  v75 = *(int *)(Master_object + 52);
  rarity = this->fields.rarity;
  v77 = this->fields.userSvtEntity;
  this->fields.priority = v75;
  this->fields.sortValue1B = v75;
  this->fields.sortValue2 = rarity;
  if ( !v77 )
    goto LABEL_50;
  v78 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v74);
  *(_QWORD *)&v109.fields.currentCryptoKey = v78;
  *(_QWORD *)&v109.fields.fakeValue = v79;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0);
  v80 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v80 )
    goto LABEL_50;
  v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
  *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v103.fields.fakeValue = v81;
  this->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v103, 0);
  v84 = BalanceConfig_TypeInfo;
  this->fields.amountSortValue = -1;
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isSelectedSvtId = 0;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !*(&v84->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v84, v82, v83);
    v84 = BalanceConfig_TypeInfo;
  }
  static_fields = v84->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_50;
  Master_object = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Master_object, 0, 0);
  v87 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v87 )
    goto LABEL_50;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v87, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Master_object = (int64_t)this->fields.userSvtEntity;
  if ( !Master_object
    || (TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)Master_object,
                                         0,
                                         -1,
                                         0),
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList,
        p_tdCategoryIdList = &this->fields.tdCategoryIdList,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102),
        (Master_object = (int64_t)*(p_tdCategoryIdList - 6)) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_50:
    sub_2213CDC(Master_object, v34);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


void MultipleViewListViewItem__Finalize(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool MultipleViewListViewItem__IsMatchFilter(
        MultipleViewListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v6; // x0
  __int64 ClassGroupFilterKindList; // x0
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  __int64 v17; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *userSvtEntity; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v39; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v41; // w0

  if ( (byte_596B7BB & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B7BB = 1;
  }
  if ( (this->fields.selectNum & 0x80000000) == 0 )
    return 1;
  v6 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v6 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v6->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_63;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v14);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
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
          goto LABEL_63;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v23 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_63;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_63;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
    }
    ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_64;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_63;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_64:
      sub_2213CE4(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v39 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v41 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( IsUnSelectedAllTargetFilters && v39 || !IsUnSelectedAllTargetFilters && !v39 )
    {
      if ( !IsMatchEffectCategory && !v41 )
        return 0;
    }
    else if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v41 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_63:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_64;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v17);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_63;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void MultipleViewListViewItem__ModifyChoiceItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewItem__ModifyItem(MultipleViewListViewItem_o *this, bool isFavorite, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w8
  bool IsChoice; // w0
  UserServantEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x2
  struct UserServantEntity_o *v11; // x9
  __int128 v12; // q1
  __int64 v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  if ( (byte_596B7B8 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B7B8 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isFavorite = isFavorite;
  if ( !userSvtEntity )
    goto LABEL_10;
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity
    || (IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0),
        v8 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v8, v9),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v11 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_2213CDC(userSvtEntity, isFavorite);
  }
  v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v13 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isFavorite, v10);
  v14 = v15;
  this->fields.isPush = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewItem__ModifyItem_40063616(
        MultipleViewListViewItem_o *this,
        int32_t selectIndex,
        bool isSelectedSvtId,
        bool isSelectedMax,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w8
  bool IsChoice; // w0
  UserServantEntity_o *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x2
  struct UserServantEntity_o *v15; // x9
  __int128 v16; // q1
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_596B7B9 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B7B9 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.selectNum = selectIndex;
  this->fields.isSelectedSvtId = isSelectedSvtId;
  this->fields.isSelectedMax = isSelectedMax;
  if ( !userSvtEntity )
    goto LABEL_10;
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity
    || (IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0),
        v12 = this->fields.userSvtEntity,
        this->fields.isChoice = IsChoice,
        *(_WORD *)&this->fields.isSwapLock = 0,
        MultipleViewListViewItem__SetOverwriteStatus(this, v12, v13),
        (userSvtEntity = (UserServantEntity_o *)UserGameMaster__getSelfUserGame(0)) == 0)
    || (v15 = this->fields.userSvtEntity) == 0 )
  {
LABEL_10:
    sub_2213CDC(userSvtEntity, *(_QWORD *)&selectIndex);
  }
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  v17 = *(_QWORD *)&userSvtEntity->fields.dispLimitCount.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&selectIndex, v14);
  v18 = v19;
  this->fields.isPush = v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
}


void MultipleViewListViewItem__ModifyLockItem(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
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
    sub_2213CDC(this, userServantEntity);
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
  int64_t IsMatchFilter; // x0
  __int64 v6; // x1
  char v7; // w19
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v10; // zf
  _BOOL4 v11; // w8
  int v12; // w10
  __int64 v13; // x2
  int32_t sortKind; // w8
  int64_t v15; // x21
  IconLabelInfo_o *iconLabelInfo1; // x22
  int64_t friendship; // x2
  int64_t hp; // x21
  struct IconLabelInfo_o *v19; // x22
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v21; // w1
  int64_t atkReinforceValue; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v24; // q1
  struct UserServantEntity_o *v25; // x8
  int64_t cost; // x2
  int32_t v27; // w2
  IconLabelInfo_o *v28; // x21
  int32_t v29; // w22
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  unsigned __int64 v32; // x9
  int64_t rarity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  struct IconLabelInfo_o *v35; // x22
  int64_t hpReinforceValue; // x2
  int32_t v37; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_596B7BA & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B7BA = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  IsMatchFilter = MultipleViewListViewItem__IsMatchFilter(this, sort, method);
  v7 = IsMatchFilter;
  if ( (IsMatchFilter & 1) == 0 )
    return v7 & 1;
  isChoice = this->fields.isChoice;
  isSwapChoice = this->fields.isSwapChoice;
  this->fields.sortValue0 = 0;
  v10 = !isChoice;
  v11 = isChoice;
  v12 = v10;
  if ( isSwapChoice )
    v11 = v12;
  if ( v11 )
  {
    if ( !sort )
      goto LABEL_84;
    if ( sort->fields.isChoiceSort )
      this->fields.sortValue0 = 10;
  }
  IsMatchFilter = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsMatchFilter || (IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0), !sort) )
LABEL_84:
    sub_2213CDC(IsMatchFilter, v6);
  sortKind = sort->fields.sortKind;
  if ( sortKind <= 6 )
  {
    if ( sortKind <= 3 )
    {
      if ( sortKind != 1 )
      {
        if ( sortKind != 2 )
        {
          if ( sortKind == 3 )
          {
            IsMatchFilter = (int64_t)this->fields.userSvtEntity;
            if ( !IsMatchFilter )
              goto LABEL_84;
            v15 = *(int *)(IsMatchFilter + 400);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v15;
LABEL_70:
            IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
            if ( iconLabelInfo1 )
            {
              IconLabelInfo__Set_47880948(iconLabelInfo1, 2, v15, IsMatchFilter, 0, 0, 0, 0, 0, 0);
              return v7 & 1;
            }
            goto LABEL_84;
          }
          return v7 & 1;
        }
        rarity = this->fields.rarity;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        goto LABEL_66;
      }
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_84;
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v40.fields.fakeValue = v24;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v13);
      v39 = v40;
      IsMatchFilter = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v39, 0);
      v25 = this->fields.userSvtEntity;
      this->fields.sortValue1 = IsMatchFilter;
      if ( !v25 )
        goto LABEL_84;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsMatchFilter, 49, v25->fields.createdAt, 0, 0, 0, 0);
LABEL_79:
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      if ( !IsMatchFilter )
        goto LABEL_84;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
      goto LABEL_81;
    }
    if ( sortKind != 4 )
    {
      if ( sortKind == 5 )
      {
        hp = this->fields.hp;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !IsMatchFilter )
          goto LABEL_84;
        v35 = this->fields.iconLabelInfo1;
        IsMatchFilter = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsMatchFilter, 0);
        if ( !v35 )
          goto LABEL_84;
        nowMaxHpReinforceValue = IsMatchFilter;
        IsMatchFilter = (int64_t)v35;
        v21 = 3;
      }
      else
      {
        hp = this->fields.atk;
        IsMatchFilter = (int64_t)this->fields.userSvtEntity;
        this->fields.sortValue1 = hp;
        if ( !IsMatchFilter )
          goto LABEL_84;
        v19 = this->fields.iconLabelInfo1;
        IsMatchFilter = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsMatchFilter, 0);
        if ( !v19 )
          goto LABEL_84;
        nowMaxHpReinforceValue = IsMatchFilter;
        IsMatchFilter = (int64_t)v19;
        v21 = 5;
      }
      LODWORD(hpReinforceValue) = hp;
LABEL_78:
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)IsMatchFilter,
        v21,
        hpReinforceValue,
        nowMaxHpReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_79;
    }
    IsMatchFilter = (int64_t)this->fields.userSvtEntity;
    if ( !IsMatchFilter )
      goto LABEL_84;
    UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)IsMatchFilter, &tdMaxLv[1], tdMaxLv, 0);
    v27 = tdMaxLv[1];
    IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = tdMaxLv[1];
    if ( !IsMatchFilter )
      goto LABEL_84;
    IconLabelInfo__Set_47880948((IconLabelInfo_o *)IsMatchFilter, 33, v27, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
LABEL_49:
    IsMatchFilter = (int64_t)this->fields.userSvtEntity;
    if ( !IsMatchFilter )
      goto LABEL_84;
    v28 = this->fields.iconLabelInfo2;
    v29 = *(_DWORD *)(IsMatchFilter + 400);
    IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
    if ( !v28 )
      goto LABEL_84;
    IconLabelInfo__Set_47880948(v28, 2, v29, IsMatchFilter, 0, 0, 0, 0, 0, 0);
    IsMatchFilter = (int64_t)this->fields.servantEntity;
    if ( !IsMatchFilter )
      goto LABEL_84;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)IsMatchFilter, 0) )
      goto LABEL_55;
    IsMatchFilter = (int64_t)this->fields.servantEntity;
    if ( !IsMatchFilter )
      goto LABEL_84;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)IsMatchFilter, 0) )
    {
LABEL_55:
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0);
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo2;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__Clear((IconLabelInfo_o *)IsMatchFilter, 0);
    }
    return v7 & 1;
  }
  if ( sortKind > 13 )
  {
    if ( sortKind == 14 )
    {
      IsMatchFilter = this->fields.amountSortValue;
      if ( IsMatchFilter < 0 )
      {
        IsMatchFilter = (int64_t)sort->fields.manager;
        if ( !IsMatchFilter )
          goto LABEL_84;
        naturalAligment = MultipleViewListViewManager_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)IsMatchFilter + 304LL) < (unsigned int)naturalAligment
          || *(MultipleViewListViewManager_c **)(*(_QWORD *)(*(_QWORD *)IsMatchFilter + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewManager_TypeInfo )
        {
          goto LABEL_84;
        }
        IsMatchFilter = MultipleViewListViewManager__GetAmountSortValue(
                          (MultipleViewListViewManager_o *)IsMatchFilter,
                          this->fields.svtId,
                          0);
        this->fields.amountSortValue = IsMatchFilter;
      }
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_84;
      v32 = ((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsMatchFilter << 48);
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      rarity = v32 | servantEntity->fields.collectionNo;
LABEL_66:
      this->fields.sortValue1 = rarity;
      if ( !IsMatchFilter )
        goto LABEL_84;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
LABEL_81:
      v37 = *(_DWORD *)(IsMatchFilter + 400);
      IsMatchFilter = UserServantEntity__getLevelMax((UserServantEntity_o *)IsMatchFilter, 0);
      if ( iconLabelInfo2 )
      {
        IconLabelInfo__Set_47880948(iconLabelInfo2, 2, v37, IsMatchFilter, 0, 0, 0, 0, 0, 0);
        return v7 & 1;
      }
      goto LABEL_84;
    }
    if ( sortKind != 15 )
    {
      if ( sortKind != 16 )
        return v7 & 1;
      atkReinforceValue = this->fields.atkReinforceValue;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = atkReinforceValue;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)IsMatchFilter,
        45,
        atkReinforceValue,
        this->fields.nowMaxAtkReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_79;
    }
    hpReinforceValue = this->fields.hpReinforceValue;
    IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = hpReinforceValue;
    if ( !IsMatchFilter )
      goto LABEL_84;
    nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
    v21 = 44;
    goto LABEL_78;
  }
  switch ( sortKind )
  {
    case 7:
      cost = this->fields.cost;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)IsMatchFilter, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_49;
    case 8:
      IsMatchFilter = (int64_t)this->fields.userSvtEntity;
      this->fields.sortValue1 = -this->fields.priority;
      if ( !IsMatchFilter )
        goto LABEL_84;
      v15 = *(int *)(IsMatchFilter + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2 = v15;
      goto LABEL_70;
    case 10:
      friendship = this->fields.friendship;
      IsMatchFilter = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsMatchFilter )
        goto LABEL_84;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)IsMatchFilter,
        32,
        friendship,
        this->fields.friendshipMax,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_49;
  }
  return v7 & 1;
}


void MultipleViewListViewItem__SetUserServantEntity(
        MultipleViewListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userSvtEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool MultipleViewListViewItem__SwapChoice(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool MultipleViewListViewItem__SwapLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


IconLabelInfo_o *MultipleViewListViewItem__get_IconInfo1(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *MultipleViewListViewItem__get_IconInfo2(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool MultipleViewListViewItem__get_IsCanNotSelect(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B7BD & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596B7BD = 1;
  }
  if ( this->fields.isHeroine )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
    if ( TutorialFlag__Get_47388504(126, 0) )
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


bool MultipleViewListViewItem__get_IsHerioneReave(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B7BC & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596B7BC = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47388504(126, 0);
}


bool MultipleViewListViewItem__get_IsLock(MultipleViewListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
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