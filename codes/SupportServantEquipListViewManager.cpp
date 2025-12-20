void SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28E66 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_13236/*"SupportServantEquip"*/);
    byte_4D28E66 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_13236/*"SupportServantEquip"*/, 3, 0, 0);
  SupportServantEquipListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SupportServantEquipListViewManager_TypeInfo->static_fields,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1C942F0(0, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  SupportServantEquipListViewManager__ModifyList(this, 1, v14);
  SupportServantEquipListViewManager__SetMode_36372508(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


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
  SupportServantEquipListViewManager_o *v14; // x29
  SupportServantData_o *v15; // x1
  SupportServantData_o **p_supportServantData; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  SupportServantEquipListViewManager_c *v23; // x0
  struct SupportServantEquipListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *sortStatus; // x1
  SupportServantEquipListViewManager_o **p_sort; // x27
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct ListViewSort_o *sort; // x19
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  unsigned int sortKindButton; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v49; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x27
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x27
  int64_t Equip; // x25
  SupportServantEquipServantItem_o *v54; // x28
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x25
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_Int64_array *equipIdList; // x26
  UserServantEntity_array *ServantEquipList; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v65; // x23
  UserServantEntity_o *v66; // x28
  SupportServantEquipListViewManager_o *v67; // x19
  int64_t indicator; // x20
  Il2CppObject *v69; // x21
  SupportServantEquipListViewManager_o *v70; // x29
  SupportServantEquipListViewItem_o *v71; // x24
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v79; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v81; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v84; // x8
  System_String_o *v85; // x21
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  System_Int32_array *v88; // [xsp+10h] [xbp-B0h]
  System_Int32_array *v89; // [xsp+18h] [xbp-A8h]
  const MethodInfo *v90; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4D28E4C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C94098(&SupportServantEquipServantItem_TypeInfo);
    sub_1C94098(&StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/);
    this = (SupportServantEquipListViewManager_o *)sub_1C94098(&StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4D28E4C = 1;
  }
  entity = 0;
  if ( !supportServantData )
    goto LABEL_55;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    goto LABEL_56;
  v15 = supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v14->fields.supportServantData;
  v14->fields.supportServantData = v15;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v14->fields.supportServantData,
    (int32_t)v15,
    nowDeckNum,
    classPos,
    (System_String_o *)eventSetupInfo,
    nowDeckId,
    (int64_t)fixMainDeckIds,
    (System_String_o *)fixEventDeckIds);
  this = (SupportServantEquipListViewManager_o *)v14->fields.supportSelectConfirmMenu;
  v14->fields.classPos = classPos;
  v14->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_55;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0);
  v23 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v23 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  sortStatus = static_fields->sortStatus;
  v14->fields.sort = static_fields->sortStatus;
  p_sort = (SupportServantEquipListViewManager_o **)&v14->fields.sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.sort, (int32_t)sortStatus, v17, v18, v19, v20, v21, v22);
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
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v14->fields.alignedBonusFilterInfos,
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.alignedBonusFilterInfos, 0, v27, v28, v29, v30, v31, v32);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.seed, (int32_t)normalSizeSeed, v41, v42, v43, v44, v45, v46);
LABEL_26:
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, v49);
  if ( !v50 )
    goto LABEL_55;
  DataMasterBase_object__object__long___TryGetEntity(
    v50,
    &entity,
    (int64_t)this,
    (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_55;
  v52 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v51);
  v54 = (SupportServantEquipServantItem_o *)sub_1C942E4(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v54, (UserServantEntity_o *)v52, Equip, 0);
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v14->fields.servantItemInfo;
  v14->fields.servantItemInfo = v54;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.servantItemInfo, (int32_t)v54, v56, v57, v58, v59, v60, v61);
  this = (SupportServantEquipListViewManager_o *)v14->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v14->fields.servantItemInfo,
    0,
    0,
    0);
  this = (SupportServantEquipListViewManager_o *)v14->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, 0);
  UserGameMaster__getSelfUserGame(0);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)v14, 0, 0);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_55;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    v65 = 0;
    while ( v65 < (unsigned int)max_length )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      v66 = ServantEquipList->m_Items[v65];
      v67 = v14;
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       0);
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      indicator = (int64_t)(*p_servantItemInfo)->fields.indicator;
      v69 = entity;
      v70 = this;
      v71 = (SupportServantEquipListViewItem_o *)sub_1C942E4(SupportServantEquipListViewItem_TypeInfo);
      SupportServantEquipListViewItem___ctor(
        v71,
        v65,
        v66,
        (int64_t)v70,
        indicator,
        equipIdList,
        (UserServantEntity_o *)v69,
        eventSetupInfo,
        supportServantData,
        nowDeckId,
        v88,
        v89,
        0,
        0,
        v90);
      this = (SupportServantEquipListViewManager_o *)v67->fields.itemList;
      if ( !this )
        goto LABEL_55;
      m_CachedPtr = this->fields.m_CachedPtr;
      v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_55;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      v14 = v67;
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v71,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v81 + 32) = v71;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v81 + 32), (int32_t)v71, v72, v73, v74, v75, v76, v77);
      }
      LODWORD(max_length) = ServantEquipList->max_length;
      if ( (__int64)++v65 >= (int)max_length )
        goto LABEL_47;
    }
LABEL_56:
    sub_1C942F8(this);
  }
LABEL_47:
  itemList = v14->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  emptyMessageLabel = v14->fields.emptyMessageLabel;
  v84 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v85 = *v84;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v85, 0);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_1C942F0(this, supportServantData);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0);
  SupportServantEquipListViewManager__RefreshListDisp(v14, v86);
  ListViewManager__SortItem((ListViewManager_o *)v14, -1, 0, -1, 0);
  SupportServantEquipListViewManager__SetFilterButtonImage(v14, v87);
}


void SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4D28E48 & 1) == 0 )
  {
    sub_1C94098(&SupportServantEquipListViewManager_TypeInfo);
    byte_4D28E48 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1C942F0(0, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C942F0(0, v3);
  ListViewSort__Save(sort, 0);
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _OWORD *monitor; // x8
  __int128 v11; // q0
  int64_t v12; // x0
  __int64 v13; // x1
  _OWORD *v14; // x8
  __int128 v15; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v17; // x0
  __int64 v18; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v20; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_4D28E57 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E57 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_36269232(supportSelectConfirmMenu, 0, 0);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_1C942F0(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields.currentCryptoKey;
  v27.fields._current = (Il2CppObject *)v26.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantEquipListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        monitor = v27.fields._current[7].monitor;
        if ( !monitor )
          sub_1C942F0(v6, v7);
        v11 = monitor[2];
        *(_OWORD *)&v26.fields.currentCryptoKey = monitor[1];
        *(_OWORD *)&v26.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v25, 0);
        if ( v12 == this->fields.saveId )
        {
          v14 = current[7].monitor;
          BYTE1(current[10].klass) = 1;
          if ( !v14 )
            sub_1C942F0(v12, v13);
          v15 = v14[2];
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v26.fields.currentCryptoKey = v14[1];
          *(_OWORD *)&v26.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v24 = v26;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v24, 0);
          if ( !servantItemInfo )
            sub_1C942F0(v17, v17);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v17, 0);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_1C942F0(0, v18);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, 0, 0, 0);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_1C942F0(0, v20);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v20);
        }
        else
        {
          BYTE1(current[10].klass) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v22);
  SupportServantEquipListViewManager__RefreshListDisp(this, v23);
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

  if ( (byte_4D28E5A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__);
    byte_4D28E5A = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0);
  if ( !Instance )
    sub_1C942F0(v8, v9);
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

  if ( (byte_4D28E5E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__);
    byte_4D28E5E = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C942F0(v7, v8);
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
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  _QWORD *monitor; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D28E61 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E61 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0;
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !v15.fields._current )
      goto LABEL_17;
    naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
    if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SupportServantEquipListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1C9468C(v15.fields._current);
LABEL_17:
      sub_1C942F0(current, v7);
    }
    monitor = v15.fields._current[7].monitor;
    if ( !monitor )
      sub_1C942F0(v15.fields._current, SupportServantEquipListViewItem_TypeInfo);
    v12 = monitor[10];
    v11 = monitor[11];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v16, 0) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4D28E65 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantEquipListViewManager_o *)sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E65 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1C942F0(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantEquipListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)list,
                                                       v8,
                                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4D28E4E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E4E = 1;
  }
  result = (SupportServantEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C942F0(0, method);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28E54 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E54 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1C942F0(v4, v5);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D28E55 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E55 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1C942F0(v4, v5);
    }
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_A0 + 1) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (SupportServantEquipListViewItem_o *)current;
}


bool SupportServantEquipListViewManager__GetSwapChoiceList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D28E63 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E63 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 193) )
      {
        if ( *(_BYTE *)(itemList + 164) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_3852E68 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C942F0(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D28E62 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E62 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 192) )
      {
        if ( *(_BYTE *)(itemList + 163) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_3852E68 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C942F0(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4D28E49 & 1) == 0 )
  {
    sub_1C94098(&SupportServantEquipListViewManager_TypeInfo);
    byte_4D28E49 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1C942F0(0, v1);
  ListViewSort__InitLoad(sortStatus, 0);
}


void SupportServantEquipListViewManager__ModifyList(
        SupportServantEquipListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  DataManager_o *v7; // x21
  int size; // w29
  unsigned int v9; // w28
  DataManager_c **v10; // x25
  DataManager_c *v11; // x8
  UserServantEntity_o **v12; // x25
  DataManager_c *v13; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v15; // x23
  int32_t v16; // w24
  SupportServantEquipListViewItem_o *v17; // x22
  __int64 naturalAligment; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v20; // q0
  UserServantEntity_o *v21; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-80h]

  if ( (byte_4D28E4D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E4D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_46;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v7 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    if ( !(_DWORD)m_CancellationTokenSource )
LABEL_31:
      sub_1C942F8(Instance);
    size = itemList->fields._size;
    v9 = 0;
    while ( 1 )
    {
      v10 = &v7->klass + (int)v9;
      v13 = v10[4];
      v12 = (UserServantEntity_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        goto LABEL_46;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v34.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v33, 0);
      if ( size >= 1 )
      {
        v15 = Instance;
        v16 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v16,
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_46;
          v17 = (SupportServantEquipListViewItem_o *)Instance;
          naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
          if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (SupportServantEquipListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_46;
          }
          context = Instance->fields.context;
          if ( context )
          {
            v20 = *(_OWORD *)&context[1].monitor;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
            *(_OWORD *)&v34.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v32 = v34;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v32, 0);
            if ( Instance == v15 )
              break;
          }
          if ( size == ++v16 )
            goto LABEL_29;
        }
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_31;
        Instance = (DataManager_o *)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_46;
        v21 = *v12;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           0);
        SupportServantEquipListViewItem__ModifyItem(v17, v21, EquipUserSvtId, v23);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v17, v5);
          SupportServantEquipListViewItem__ModifyChoiceItem(v17, v24);
        }
      }
LABEL_29:
      if ( ++v9 == (_DWORD)m_CancellationTokenSource )
        break;
      if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
        goto LABEL_31;
    }
    if ( (int)m_CancellationTokenSource >= 1 && isIconSizeChange )
    {
      v25 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v25,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v27 = (ListViewItem_o *)Item;
          v28 = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)v28
            && (SupportServantEquipListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              Instance = (DataManager_o *)v27->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v25 )
          return;
      }
LABEL_46:
      sub_1C942F0(Instance, v5);
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

  if ( (byte_4D28E5C & 1) == 0 )
  {
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    byte_4D28E5C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void SupportServantEquipListViewManager__OnClickDecide(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_4D28E59 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    byte_4D28E59 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C942F0(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_31590308(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C942F0(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_4D28E5F & 1) == 0 )
  {
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    byte_4D28E5F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(v5, v6);
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

  if ( (byte_4D28E5D & 1) == 0 )
  {
    sub_1C94098(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_EndSelectSortKind__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnClickSortKind__);
    byte_4D28E5D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantEquipListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C942F0(v9, v10);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  unsigned int Index; // w0

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          2,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_1C942F0(scrollView, obj);
  }
}


void SupportServantEquipListViewManager__OnMoveEnd(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D28E53 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28E53 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C942F0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x25
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x19
  Il2CppClass *v7; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D28E58 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewObject_TypeInfo);
    byte_4D28E58 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v14.fields._current;
    if ( v14.fields._current )
    {
      naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment;
      if ( v14.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantEquipListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v14.fields._current[10].klass) )
      {
        klass = v14.fields._current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
        {
          v7 = current[7].klass;
          if ( v7
            && (v8 = SupportServantEquipListViewObject_TypeInfo->_2.naturalAligment,
                *((unsigned __int8 *)v7->_1.image + 304) >= (unsigned int)v8) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*((_QWORD *)v7->_1.image + 25) + 8 * v8 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v9 = (UnityEngine_Object_o *)current[7].klass;
            else
              v9 = 0;
          }
          else
          {
            v9 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = UnityEngine_Object__op_Inequality(v9, 0, 0);
          if ( v10 )
          {
            if ( !v9 )
              sub_1C942F0(v10, v11);
            SupportServantEquipListViewObject__Init_36394476((SupportServantEquipListViewObject_o *)v9, 4, v12);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28E4F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    byte_4D28E4F = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C942F0(0, v5);
    v6.fields._current->klass->vtable[9].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D28E51 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D28E51 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      SupportServantEquipListViewObject__Init_36395628(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListViewManager__RequestListObject_36394600(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D28E52 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_1C94098(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D28E52 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      SupportServantEquipListViewObject__Init_36395712((SupportServantEquipListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D28E5B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17573/*"btn_filter_on"*/);
    sub_1C94098(&StringLiteral_17572/*"btn_filter"*/);
    byte_4D28E5B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C942F0(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17572/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17573/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_36372508(this, mode, v10);
}


void SupportServantEquipListViewManager__SetMode_36372508(
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
    sub_1C942F0(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    SupportServantEquipListViewManager__RequestListObject_36394600(this, mode + 1, v7);
}


void SupportServantEquipListViewManager__SetMode_36394548(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_36372508(this, mode, v10);
}


void SupportServantEquipListViewManager__SetObjectItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D28E50 & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_1C94098(&SupportServantEquipListViewObject_TypeInfo);
    byte_4D28E50 = 1;
  }
  if ( !obj
    || (naturalAligment = SupportServantEquipListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantEquipListViewObject__Init_36394476(
    (SupportServantEquipListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void SupportServantEquipListViewManager__SetSortButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4D28E60 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17609/*"btn_sort_up"*/);
    sub_1C94098(&StringLiteral_17709/*"btn_txt_up"*/);
    sub_1C94098(&StringLiteral_17660/*"btn_txt_new"*/);
    sub_1C94098(&StringLiteral_17650/*"btn_txt_down"*/);
    sub_1C94098(&StringLiteral_17667/*"btn_txt_old"*/);
    sub_1C94098(&StringLiteral_17606/*"btn_sort_down"*/);
    byte_4D28E60 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_40;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17667/*"btn_txt_old"*/ : &StringLiteral_17660/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17709/*"btn_txt_up"*/ : &StringLiteral_17650/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
    }
LABEL_40:
    sub_1C942F0(sort, v4);
  }
}


void SupportServantEquipListViewManager__add_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28E44 & 1) == 0 )
  {
    sub_1C94098(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_4D28E44 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  SupportServantEquipListViewManager__remove_callbackFunc(v10, v11, v12);
}


void SupportServantEquipListViewManager__add_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28E46 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D28E46 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  SupportServantEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportServantEquipListViewManager_o *v9; // x19
  struct ListViewObject_o *viewObject; // x8
  SupportServantEquipListViewObject_c *v11; // x9
  __int64 naturalAligment; // x10
  struct ListViewObject_o *v13; // x11
  int32_t v14; // w1
  GrandQuestFolderBoardItem_o *p_saveObj; // x0
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v18; // q1
  struct System_Int64_array *equipIdList; // x22
  const MethodInfo *v20; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v22; // x20
  int32_t v23; // w21
  const MethodInfo *v24; // x2
  SupportServantEquipListViewManager_o *v25; // x22
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x21
  System_String_o *v28; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  v9 = this;
  if ( (byte_4D28E56 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SupportServantEquipListViewManager_EndConfirmMenu__);
    sub_1C94098(&SupportServantEquipListViewObject_TypeInfo);
    this = (SupportServantEquipListViewManager_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28E56 = 1;
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
    p_saveObj = (GrandQuestFolderBoardItem_o *)&v9->fields.saveObj;
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
    p_saveObj = (GrandQuestFolderBoardItem_o *)&v9->fields.saveObj;
    v9->fields.saveObj = 0;
  }
  sub_1C9403C(p_saveObj, v14, (int32_t)method, v3, v4, v5, v6, v7);
  supportServantData = v9->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_34;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_34;
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v31;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                   &v30,
                                                   0);
  if ( !equipIdList )
    goto LABEL_34;
  max_length = equipIdList->max_length;
  if ( max_length >= 1 )
  {
    v22 = this;
    v23 = 0;
    while ( 1 )
    {
      if ( max_length == v23 )
        sub_1C942F8(this);
      if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v23] == this )
        break;
      if ( max_length == ++v23 )
        return;
    }
    if ( v23 != -1 )
    {
      this = (SupportServantEquipListViewManager_o *)v9->fields.supportServantData;
      if ( this )
      {
        this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                         (SupportServantData_o *)this,
                                                         v23,
                                                         v20);
        if ( v9->fields.supportServantData )
        {
          v25 = this;
          ClassName = SupportServantData__getClassName(v9->fields.supportServantData, v9->fields.classPos, v24);
          v9->fields.saveId = (int64_t)v22;
          v9->fields.savePos = v23;
          supportSelectConfirmMenu = v9->fields.supportSelectConfirmMenu;
          v28 = ClassName;
          v29 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C942E4(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v29,
            (Il2CppObject *)v9,
            Method_SupportServantEquipListViewManager_EndConfirmMenu__,
            0);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open_36267820(supportSelectConfirmMenu, 5, v29, (System_String_o *)v25, v28, 0);
            return;
          }
        }
      }
LABEL_34:
      sub_1C942F0(this, selectItem);
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
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D28E4B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28E4B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(
                                 (SupportServantEquipListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D28E4A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28E4A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


void SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C942F0(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
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
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28E45 & 1) == 0 )
  {
    sub_1C94098(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_4D28E45 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  SupportServantEquipListViewManager__add_callbackFunc2(v10, v11, v12);
}


void SupportServantEquipListViewManager__remove_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4D28E47 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D28E47 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  SupportServantEquipListViewManager__DeleteContinueData(v10);
}


void SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28E64 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&SupportServantEquipListViewItem_TypeInfo);
    byte_4D28E64 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current
      || (naturalAligment = SupportServantEquipListViewItem_TypeInfo->_2.naturalAligment,
          v7.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (SupportServantEquipListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1C942F0(v4, v5);
    }
    BYTE1(v7.fields._current[10].klass) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC51E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC518C;
}


System_IAsyncResult_o *SupportServantEquipListViewManager_CallbackFunc__BeginInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4D28E67 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&SupportServantEquipListViewManager_ResultKind_TypeInfo);
    byte_4D28E67 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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