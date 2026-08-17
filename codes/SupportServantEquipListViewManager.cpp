void SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CD3B & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_13738/*"SupportServantEquip"*/);
    byte_596CD3B = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_13738/*"SupportServantEquip"*/, 3, 0, 0);
  SupportServantEquipListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SupportServantEquipListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportServantEquipListViewManager___ctor(SupportServantEquipListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportServantEquipListViewManager__ChangeIconScale(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 80) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  SupportServantEquipListViewManager__ModifyList(this, 1, v14);
  SupportServantEquipListViewManager__SetMode_42550740(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewManager__CreateList(
        SupportServantEquipListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        const MethodInfo *method)
{
  SupportServantData_array *v13; // x28
  SupportServantEquipListViewManager_o *v14; // x19
  struct SupportServantData_o *v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  SupportServantEquipListViewManager_c *v23; // x0
  struct SupportServantEquipListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *sortStatus; // x1
  SupportServantEquipListViewManager_o **p_sort; // x26
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct ListViewSort_o *sort; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  unsigned int sortKindButton; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v49; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x26
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x26
  int64_t Equip; // x25
  SupportServantEquipServantItem_o *v54; // x27
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct SupportServantData_o *v61; // x8
  System_Int64_array *equipIdList; // x25
  UserServantEntity_array *ServantEquipList; // x26
  __int64 v64; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v66; // x23
  UserServantEntity_o *v67; // x27
  SupportServantData_array *v68; // x22
  struct SupportServantEquipServantItem_o *servantItemInfo; // x8
  int64_t oldEquipTargetId; // x29
  Il2CppObject *v71; // x20
  SupportServantEquipListViewManager_o *v72; // x28
  SupportServantEquipListViewItem_o *v73; // x0
  int64_t v74; // x3
  Il2CppObject *v75; // x24
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v83; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v85; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v88; // x8
  System_String_o *v89; // x21
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  System_Int32_array *v92; // [xsp+10h] [xbp-A0h]
  System_Int32_array *v93; // [xsp+18h] [xbp-98h]
  const MethodInfo *v94; // [xsp+30h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  v13 = supportServantData;
  v14 = this;
  if ( (byte_596CD21 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    sub_2213A60(&SupportServantEquipServantItem_TypeInfo);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    this = (SupportServantEquipListViewManager_o *)sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596CD21 = 1;
  }
  entity = 0;
  if ( !v13 )
    goto LABEL_55;
  if ( LODWORD(v13->max_length) <= nowDeckNum )
    goto LABEL_56;
  v15 = v13->m_Items[nowDeckNum];
  v14->fields.supportServantData = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v14->fields.supportServantData,
    (int32_t)v15,
    *(System_String_o **)&nowDeckNum,
    *(System_String_o **)&classPos,
    (int32_t)eventSetupInfo,
    nowDeckId,
    (bool)fixMainDeckIds,
    (bool)fixEventDeckIds);
  this = (SupportServantEquipListViewManager_o *)v14->fields.supportSelectConfirmMenu;
  v14->fields.classPos = classPos;
  v14->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_55;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0);
  v23 = SupportServantEquipListViewManager_TypeInfo;
  if ( !*(&SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v16, v17);
    v23 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  sortStatus = static_fields->sortStatus;
  v14->fields.sort = static_fields->sortStatus;
  p_sort = (SupportServantEquipListViewManager_o **)&v14->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields.sort, (int32_t)sortStatus, v17, v18, v19, v20, v21, v22);
  this = (SupportServantEquipListViewManager_o *)v14->fields.sort;
  if ( !this )
    goto LABEL_55;
  LODWORD(this->fields.dropList) = 1;
  ListViewSort__Load((ListViewSort_o *)this, 0);
  this = *p_sort;
  if ( eventSetupInfo )
  {
    if ( !this )
      goto LABEL_55;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)this,
                           0,
                           eventSetupInfo->fields.supportEquipFilterEventCampaignIds,
                           eventSetupInfo->fields.supportEquipFilterEventIds,
                           0,
                           0,
                           0,
                           0);
    v14->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v14->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    sort = v14->fields.sort;
    this = (SupportServantEquipListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)v14->fields.alignedBonusFilterInfos,
                                                     0);
    if ( !sort )
      goto LABEL_55;
    sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    BYTE5(this->fields.emptyMessageLabel) = 0;
    v14->fields.alignedBonusFilterInfos = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v14->fields.alignedBonusFilterInfos,
      0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  this = (SupportServantEquipListViewManager_o *)v14->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !*p_sort )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE5((*p_sort)->fields.emptyMessageLabel), 0);
  if ( !*p_sort )
    goto LABEL_55;
  sortKindButton = (unsigned int)(*p_sort)->fields.sortKindButton;
  v14->fields.scaleType = sortKindButton;
  if ( sortKindButton < 2 )
  {
    normalSizeSeed = v14->fields.normalSizeSeed;
  }
  else if ( sortKindButton == 2 )
  {
    normalSizeSeed = v14->fields.smallSizeSeed;
  }
  else
  {
    if ( sortKindButton != 3 )
      goto LABEL_26;
    normalSizeSeed = v14->fields.extremelySmallSizeSeed;
  }
  v14->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v14->fields.seed,
    (int32_t)normalSizeSeed,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
LABEL_26:
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v14->fields.supportServantData )
    goto LABEL_55;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(
                                                   v14->fields.supportServantData,
                                                   classPos,
                                                   v49);
  if ( !v50 )
    goto LABEL_55;
  DataMasterBase_object__object__long___TryGetEntity(
    v50,
    &entity,
    (int64_t)this,
    (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)v14->fields.supportServantData;
  if ( !this )
    goto LABEL_55;
  v52 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v51);
  v54 = (SupportServantEquipServantItem_o *)sub_2213CCC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v54, (UserServantEntity_o *)v52, Equip, 0);
  v14->fields.servantItemInfo = v54;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v14->fields.servantItemInfo,
    (int32_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this = (SupportServantEquipListViewManager_o *)v14->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v14->fields.servantItemInfo,
    0,
    0,
    0,
    0);
  this = (SupportServantEquipListViewManager_o *)v14->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, 0);
  UserGameMaster__getSelfUserGame(0);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v61 = v14->fields.supportServantData;
  if ( !v61 )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  equipIdList = v61->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)v14, 0, 0);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_55;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    v66 = 0;
    while ( v66 < (unsigned int)max_length )
    {
      this = (SupportServantEquipListViewManager_o *)v14->fields.servantItemInfo;
      if ( !this )
        goto LABEL_55;
      v67 = ServantEquipList->m_Items[v66];
      v68 = v13;
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       0);
      servantItemInfo = v14->fields.servantItemInfo;
      if ( !servantItemInfo )
        goto LABEL_55;
      oldEquipTargetId = servantItemInfo->fields.oldEquipTargetId;
      v71 = entity;
      v72 = this;
      v73 = (SupportServantEquipListViewItem_o *)sub_2213CCC(SupportServantEquipListViewItem_TypeInfo);
      v74 = (int64_t)v72;
      v75 = (Il2CppObject *)v73;
      v13 = v68;
      SupportServantEquipListViewItem___ctor(
        v73,
        v66,
        v67,
        v74,
        oldEquipTargetId,
        equipIdList,
        (UserServantEntity_o *)v71,
        eventSetupInfo,
        v68,
        nowDeckId,
        v92,
        v93,
        0,
        0,
        v94);
      this = (SupportServantEquipListViewManager_o *)v14->fields.itemList;
      if ( !this )
        goto LABEL_55;
      m_CachedPtr = this->fields.m_CachedPtr;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_55;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v75,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v85 + 32) = v75;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v85 + 32), (int32_t)v75, v76, v77, v78, v79, v80, v81);
      }
      LODWORD(max_length) = ServantEquipList->max_length;
      if ( (__int64)++v66 >= (int)max_length )
        goto LABEL_47;
    }
LABEL_56:
    sub_2213CE4(this);
  }
LABEL_47:
  itemList = v14->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  emptyMessageLabel = v14->fields.emptyMessageLabel;
  v88 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v89 = *v88;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, supportServantData, v64);
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v89, 0);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_2213CDC(this, supportServantData);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0);
  SupportServantEquipListViewManager__RefreshListDisp(v14, v90);
  ListViewManager__SortItem((ListViewManager_o *)v14, -1, 0, -1, 0);
  SupportServantEquipListViewManager__SetFilterButtonImage(v14, v91);
}


void SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantEquipListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596CD1D & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    byte_596CD1D = 1;
  }
  v3 = SupportServantEquipListViewManager_TypeInfo;
  if ( !*(&SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v1, v2);
    v3 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
}


void SupportServantEquipListViewManager__EndCloseSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void SupportServantEquipListViewManager__EndCloseSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewManager__EndConfirmMenu(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _OWORD *monitor; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  int64_t v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  _OWORD *v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int v22; // w8
  int64_t v23; // x0
  __int64 v24; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v26; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-90h] BYREF
  __int64 v33; // [xsp+60h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o *v34; // [xsp+68h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+70h] [xbp-60h] BYREF

  if ( (byte_596CD2C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD2C = 1;
  }
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  memset(&v35, 0, sizeof(v35));
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_42446932(supportSelectConfirmMenu, 0, 0);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_2213CDC(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v35.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  v33 = 0;
  v34 = &v35;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v35.fields._current;
    if ( v35.fields._current )
    {
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( v35.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantEquipListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        monitor = v35.fields._current[7].monitor;
        if ( !monitor )
          sub_2213CDC(v6, v7);
        v12 = monitor[1];
        v13 = monitor[2];
        v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v32.fields.currentCryptoKey = v12;
        *(_OWORD *)&v32.fields.fakeValue = v13;
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
        v31 = v32;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
        if ( v15 == this->fields.saveId )
        {
          v18 = current[7].monitor;
          BYTE1(current[10].klass) = 1;
          if ( !v18 )
            sub_2213CDC(v15, v16);
          v19 = v18[1];
          v20 = v18[2];
          servantItemInfo = this->fields.servantItemInfo;
          v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v32.fields.currentCryptoKey = v19;
          *(_OWORD *)&v32.fields.fakeValue = v20;
          if ( !v22 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
          v30 = v32;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
          if ( !servantItemInfo )
            sub_2213CDC(v23, v23);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v23, 0);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_2213CDC(0, v24);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, 0, 0, 0, 0);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_2213CDC(0, v26);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v26);
        }
        else
        {
          BYTE1(current[10].klass) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v28);
  SupportServantEquipListViewManager__RefreshListDisp(this, v29);
}


void SupportServantEquipListViewManager__EndSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_596CD2F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__);
    byte_596CD2F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596CD33 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__);
    byte_596CD33 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_2213CDC(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t SupportServantEquipListViewManager__GetAmountSortValue(
        SupportServantEquipListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  __int64 v12; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_596CD36 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD36 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( !itemList )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !v16.fields._current )
      goto LABEL_17;
    naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
    if ( v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantEquipListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_221405C(v16.fields._current, SupportServantEquipListViewItem_TypeInfo, v8, v9);
LABEL_17:
      sub_2213CDC(current, v7);
    }
    v12 = *(__int64 *)((char *)&v16.fields._current->klass + (unsigned __int64)&dword_78);
    if ( !v12 )
      sub_2213CDC(v16.fields._current, SupportServantEquipListViewItem_TypeInfo);
    v13 = *(_QWORD *)(v12 + 80);
    v14 = *(_QWORD *)(v12 + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        SupportServantEquipListViewItem_TypeInfo,
        v8);
    *(_QWORD *)&v17.fields.currentCryptoKey = v13;
    *(_QWORD *)&v17.fields.fakeValue = v14;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


bool SupportServantEquipListViewManager__GetFocusItemIndex(
        SupportServantEquipListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  if ( (byte_596CD3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantEquipListViewManager_o *)sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD3A = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantEquipListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)list,
                                                       v8,
                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SupportServantEquipListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE1(this->fields.clipOffset.fields.x) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


SupportServantEquipListViewItem_o *SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596CD23 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD23 = 1;
  }
  result = (SupportServantEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SupportServantEquipListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *SupportServantEquipListViewManager__GetScaleButtonSpriteName(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t SupportServantEquipListViewManager__GetSelect(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CD29 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD29 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_2213CDC(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_A0 + 1) )
    {
      v7 = *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_14);
      goto LABEL_12;
    }
  }
  v7 = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v7;
}


SupportServantEquipListViewItem_o *SupportServantEquipListViewManager__GetSelectItem(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CD2A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD2A = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_2213CDC(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_A0 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (SupportServantEquipListViewItem_o *)current;
}


bool SupportServantEquipListViewManager__GetSwapChoiceList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596CD38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD38 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 193) )
      {
        if ( *(_BYTE *)(Item + 164) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596CD37 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD37 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 192) )
      {
        if ( *(_BYTE *)(Item + 163) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SupportServantEquipListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596CD1E & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    byte_596CD1E = 1;
  }
  v3 = SupportServantEquipListViewManager_TypeInfo;
  if ( !*(&SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo, v1, v2);
    v3 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(sortStatus, 0);
}


void SupportServantEquipListViewManager__ModifyList(
        SupportServantEquipListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int64_t v8; // x21
  int size; // w29
  unsigned int i; // w20
  int64_t v11; // x25
  __int64 v12; // x8
  UserServantEntity_o **v13; // x25
  __int64 v14; // t1
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x23
  int32_t v19; // w24
  SupportServantEquipListViewItem_o *v20; // x22
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  UserServantEntity_o *v26; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  int32_t v30; // w20
  Il2CppObject *Item; // x0
  __int64 v32; // x2
  ListViewItem_o *v33; // x21
  __int64 v34; // x10
  UnityEngine_Object_o *klass; // x22
  int v37; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-80h]

  if ( (byte_596CD22 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD22 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_44;
  v8 = Instance;
  v37 = *(_DWORD *)(Instance + 24);
  if ( v37 >= 1 )
  {
    size = itemList->fields._size;
    for ( i = 0; i != v37; ++i )
    {
      if ( i >= *(_DWORD *)(v8 + 24) )
LABEL_45:
        sub_2213CE4(Instance);
      v11 = v8 + 8LL * i;
      v14 = *(_QWORD *)(v11 + 32);
      v13 = (UserServantEntity_o **)(v11 + 32);
      v12 = v14;
      if ( !v14 )
        goto LABEL_44;
      v15 = *(_OWORD *)(v12 + 16);
      v16 = *(_OWORD *)(v12 + 32);
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v40.fields.currentCryptoKey = v15;
      *(_OWORD *)&v40.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
      v39 = v40;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v39, 0);
      if ( size >= 1 )
      {
        v18 = Instance;
        v19 = 0;
        while ( 1 )
        {
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_44;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v19,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_44;
          v20 = (SupportServantEquipListViewItem_o *)Instance;
          naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
            || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_44;
          }
          v22 = *(_QWORD *)(Instance + 120);
          if ( v22 )
          {
            v23 = *(_OWORD *)(v22 + 16);
            v24 = *(_OWORD *)(v22 + 32);
            v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v40.fields.currentCryptoKey = v23;
            *(_OWORD *)&v40.fields.fakeValue = v24;
            if ( !v25 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
            v38 = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0);
            if ( Instance == v18 )
              break;
          }
          if ( size == ++v19 )
            goto LABEL_29;
        }
        if ( i >= *(_DWORD *)(v8 + 24) )
          goto LABEL_45;
        Instance = (int64_t)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_44;
        v26 = *v13;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           0);
        SupportServantEquipListViewItem__ModifyItem(v20, v26, EquipUserSvtId, v28);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v20, v5);
          SupportServantEquipListViewItem__ModifyChoiceItem(v20, v29);
        }
      }
LABEL_29:
      ;
    }
    if ( v37 >= 1 && isIconSizeChange )
    {
      v30 = 0;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v30,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v33 = (ListViewItem_o *)Item;
          v34 = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)v34
            && (SupportServantEquipListViewItem_c *)Item->klass->_2.typeHierarchy[v34 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v32);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              Instance = (int64_t)v33->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0);
            }
          }
        }
        if ( v37 == ++v30 )
          return;
      }
LABEL_44:
      sub_2213CDC(Instance, v5);
    }
  }
}


void SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_596CD31 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    byte_596CD31 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantEquipListViewManager__OnClickDecide(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Select,
      callbackFunc->fields.method);
  }
}


void SupportServantEquipListViewManager__OnClickEquipExplanation(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Select,
      callbackFunc->fields.method);
  }
}


void SupportServantEquipListViewManager__OnClickFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596CD2E & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    byte_596CD2E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_37380372(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void SupportServantEquipListViewManager__OnClickListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SupportServantEquipListViewManager__OnClickSelectDetail(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Select,
      callbackFunc->fields.method);
  }
}


void SupportServantEquipListViewManager__OnClickSelectListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      3,
      Index,
      callbackFunc->fields.method);
  }
}


void SupportServantEquipListViewManager__OnClickSortAscendingOrder(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596CD34 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    byte_596CD34 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantEquipListViewManager__OnClickSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596CD32 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnClickSortKind__);
    byte_596CD32 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantEquipListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0);
  }
}


void SupportServantEquipListViewManager__OnLongPushListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 Index; // x2

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = (unsigned int)ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          2,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_2213CDC(scrollView, obj);
  }
}


void SupportServantEquipListViewManager__OnMoveEnd(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596CD28 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CD28 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void SupportServantEquipListViewManager__RefreshEquipped(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x25
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppClass *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596CD2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewObject_TypeInfo);
    byte_596CD2D = 1;
  }
  itemList = this->fields.itemList;
  memset(&v18, 0, sizeof(v18));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v18.fields._current;
    if ( v18.fields._current )
    {
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( v18.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantEquipListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v18.fields._current[10].klass) )
      {
        klass = v18.fields._current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
        {
          v11 = current[7].klass;
          if ( v11
            && (v12 = SupportServantEquipListViewObject_TypeInfo->_2.naturalAligment,
                *((unsigned __int8 *)v11->_1.image + 304) >= (unsigned int)v12) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*((_QWORD *)v11->_1.image + 25) + 8 * v12 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v13 = (UnityEngine_Object_o *)current[7].klass;
            else
              v13 = 0;
          }
          else
          {
            v13 = 0;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
          v14 = UnityEngine_Object__op_Inequality(v13, 0, 0);
          if ( v14 )
          {
            if ( !v13 )
              sub_2213CDC(v14, v15);
            SupportServantEquipListViewObject__Init_42572236((SupportServantEquipListViewObject_o *)v13, 4, v16);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CD24 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    byte_596CD24 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_2213CDC(0, v5);
    v6.fields._current->klass->vtable[9].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewManager__RequestListObject(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596CD26 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596CD26 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      SupportServantEquipListViewObject__Init_42573364(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewManager__RequestListObject_42572360(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596CD27 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_2213A60(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596CD27 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      SupportServantEquipListViewObject__Init_42573448((SupportServantEquipListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596CD30 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596CD30 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_42550740(this, mode, v10);
}


void SupportServantEquipListViewManager__SetMode_42550740(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, 0);
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0) )
    goto LABEL_7;
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0),
        (servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView) == 0) )
  {
LABEL_10:
    sub_2213CDC(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    SupportServantEquipListViewManager__RequestListObject_42572360(this, mode + 1, v7);
}


void SupportServantEquipListViewManager__SetMode_42572308(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_42550740(this, mode, v10);
}


void SupportServantEquipListViewManager__SetObjectItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596CD25 & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewObject_TypeInfo);
    byte_596CD25 = 1;
  }
  if ( obj
    && (naturalAligment = SupportServantEquipListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  SupportServantEquipListViewObject__Init_42572236(
    (SupportServantEquipListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void SupportServantEquipListViewManager__SetSortButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_596CD35 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596CD35 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_40;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_40;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_2213CDC(sort, v5);
  }
}


void SupportServantEquipListViewManager__add_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CD19 & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_596CD19 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v6->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportServantEquipListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SupportServantEquipListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SupportServantEquipListViewManager__add_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CD1B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596CD1B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SupportServantEquipListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportServantEquipListViewManager_o *v9; // x19
  struct ListViewObject_o *viewObject; // x8
  SupportServantEquipListViewObject_c *v11; // x9
  __int64 naturalAligment; // x10
  struct ListViewObject_o *v13; // x11
  int32_t v14; // w1
  MissionNaviTransitionBoardItem_o *p_saveObj; // x0
  __int64 v16; // x2
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v19; // q1
  struct System_Int64_array *equipIdList; // x22
  const MethodInfo *v21; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v23; // x20
  int32_t v24; // w21
  const MethodInfo *v25; // x2
  SupportServantEquipListViewManager_o *v26; // x22
  System_String_o *ClassName; // x23
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v29; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  v9 = this;
  if ( (byte_596CD2B & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SupportServantEquipListViewManager_EndConfirmMenu__);
    sub_2213A60(&SupportServantEquipListViewObject_TypeInfo);
    this = (SupportServantEquipListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CD2B = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject )
  {
    v11 = SupportServantEquipListViewObject_TypeInfo;
    naturalAligment = SupportServantEquipListViewObject_TypeInfo->_2.naturalAligment;
    if ( viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v13 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewObject_TypeInfo
          ? selectItem->fields.viewObject
          : 0LL;
    else
      v13 = 0;
    v9->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v13;
    p_saveObj = (MissionNaviTransitionBoardItem_o *)&v9->fields.saveObj;
    if ( viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v14 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == v11
          ? (int)viewObject
          : 0;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
    p_saveObj = (MissionNaviTransitionBoardItem_o *)&v9->fields.saveObj;
    v9->fields.saveObj = 0;
  }
  sub_2213A04(p_saveObj, v14, (System_String_o *)method, v3, v4, v5, v6, v7);
  supportServantData = v9->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_34;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_34;
  v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v19;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectItem, v16);
  v30 = v31;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                   &v30,
                                                   0);
  if ( !equipIdList )
    goto LABEL_34;
  max_length = equipIdList->max_length;
  if ( max_length >= 1 )
  {
    v23 = this;
    v24 = 0;
    while ( 1 )
    {
      if ( max_length == v24 )
        sub_2213CE4(this);
      if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v24] == this )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v24 )
        return;
    }
    if ( v24 != -1 )
    {
      this = (SupportServantEquipListViewManager_o *)v9->fields.supportServantData;
      if ( this )
      {
        this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                         (SupportServantData_o *)this,
                                                         v24,
                                                         v21);
        if ( v9->fields.supportServantData )
        {
          v26 = this;
          ClassName = SupportServantData__getClassName(v9->fields.supportServantData, v9->fields.classPos, v25);
          v9->fields.saveId = (int64_t)v23;
          supportSelectConfirmMenu = v9->fields.supportSelectConfirmMenu;
          v9->fields.savePos = v24;
          v29 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v29,
            (Il2CppObject *)v9,
            Method_SupportServantEquipListViewManager_EndConfirmMenu__,
            0);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open_42445516(
              supportSelectConfirmMenu,
              5,
              v29,
              (System_String_o *)v26,
              ClassName,
              0);
            return;
          }
        }
      }
LABEL_34:
      sub_2213CDC(this, selectItem);
    }
  }
}


SupportServantEquipServantItemDraw_o *SupportServantEquipListViewManager__getServantItemDraw(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemDraw;
}


SupportServantEquipServantItem_o *SupportServantEquipListViewManager__getServantItemInfo(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *SupportServantEquipListViewManager__get_ClippingObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596CD20 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CD20 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(
                                 (SupportServantEquipListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596CD1F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CD1F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


void SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      4,
      Index,
      callbackFunc->fields.method);
  }
}


void SupportServantEquipListViewManager__remove_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CD1A & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_596CD1A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v6->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportServantEquipListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SupportServantEquipListViewManager__add_callbackFunc2(v11, v12, v13);
}


void SupportServantEquipListViewManager__remove_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596CD1C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596CD1C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SupportServantEquipListViewManager__DeleteContinueData(v11);
}


void SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CD39 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&SupportServantEquipListViewItem_TypeInfo);
    byte_596CD39 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v7, 0, sizeof(v7));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v7.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_2213CDC(v4, v5);
    }
    *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&qword_A0 + 1) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SupportServantEquipListViewManager__setCanLongPushFlag(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void SupportServantEquipListViewManager_CallbackFunc___ctor(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20074FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20074A4;
}


System_IAsyncResult_o *SupportServantEquipListViewManager_CallbackFunc__BeginInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596CD3C & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListViewManager_ResultKind_TypeInfo);
    byte_596CD3C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void SupportServantEquipListViewManager_CallbackFunc__Invoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}