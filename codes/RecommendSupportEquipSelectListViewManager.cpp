void RecommendSupportEquipSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28563 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_11277/*"RecommendSupportServantEquip"*/);
    byte_4D28563 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_11277/*"RecommendSupportServantEquip"*/, 3, 0, 0);
  RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportEquipSelectListViewManager___ctor(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void RecommendSupportEquipSelectListViewManager__Awake(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListViewManager__ChangeIconScale(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  RecommendSupportEquipSelectListViewManager__ModifyList(this, 1, v14);
  RecommendSupportEquipSelectListViewManager__SetMode_35397960(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void RecommendSupportEquipSelectListViewManager__CreateList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t supportSelectConfirmMenu; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  RecommendSupportEquipSelectListViewManager_c *v10; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v12; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct ListViewSort_o *sort; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v38; // x20
  int64_t SelectEquipId; // x21
  SupportServantEquipServantItem_o *v40; // x22
  struct SupportServantEquipServantItem_o **p_servantItemInfo; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UserServantEntity_array *ServantEquipList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v50; // x22
  UserServantEntity_o *v51; // x24
  RecommendSupportEquipSelectListViewManager_o *v52; // x19
  int64_t oldEquipTargetId; // x26
  int64_t v54; // x25
  int64_t v55; // x0
  Il2CppObject *v56; // x27
  int64_t v57; // x28
  RecommendSupportEquipSelectListViewItem_o *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v71; // x8
  System_String_o *v72; // x21
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2854A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SupportServantEquipServantItem_TypeInfo);
    sub_1C94098(&StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C94098(&StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4D2854A = 1;
  }
  entity = 0;
  supportSelectConfirmMenu = (int64_t)this->fields.supportSelectConfirmMenu;
  this->fields.isCanNotLongPush = 0;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectConfirmMenu, 0);
  v10 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v10 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  p_sortStatus = &v10->static_fields->sortStatus;
  v12 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v12, v4, v5, v6, v7, v8, v9);
  supportSelectConfirmMenu = (int64_t)this->fields.sort;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  *(_DWORD *)(supportSelectConfirmMenu + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)supportSelectConfirmMenu, 0);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  v20 = *(_QWORD *)(supportSelectConfirmMenu + 104);
  supportSelectConfirmMenu = (int64_t)*p_sort;
  if ( v20 )
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)supportSelectConfirmMenu,
                           0,
                           *(System_Int32_array **)(v20 + 104),
                           *(System_Int32_array **)(v20 + 64),
                           0,
                           0,
                           0,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    sort = this->fields.sort;
    supportSelectConfirmMenu = BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0);
    if ( !sort )
      goto LABEL_54;
    sort->fields.isBonusKind = (supportSelectConfirmMenu & 1) == 0;
  }
  else
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    *(_BYTE *)(supportSelectConfirmMenu + 61) = 0;
    this->fields.alignedBonusFilterInfos = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos, 0, v14, v15, v16, v17, v18, v19);
  }
  supportSelectConfirmMenu = (int64_t)this->fields.bonusFilterKindButton;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)supportSelectConfirmMenu,
                                        0);
  if ( !*p_sort )
    goto LABEL_54;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)supportSelectConfirmMenu,
    (*p_sort)->fields.isBonusKind,
    0);
  if ( !*p_sort )
    goto LABEL_54;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_24:
    this->fields.seed = normalSizeSeed;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)supportSelectConfirmMenu,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = RecommendSupportSelectControl__get_SelectServantId(
                               (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                               method);
  if ( !MasterData_object )
    goto LABEL_54;
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    supportSelectConfirmMenu,
    (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v38 = entity;
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(
                    (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                    method);
  v40 = (SupportServantEquipServantItem_o *)sub_1C942E4(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v40, (UserServantEntity_o *)v38, SelectEquipId, 0);
  p_servantItemInfo = &this->fields.servantItemInfo;
  this->fields.servantItemInfo = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantItemInfo, (int32_t)v40, v42, v43, v44, v45, v46, v47);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu,
    this->fields.servantItemInfo,
    0,
    0,
    0);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu, 0, 0);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)supportSelectConfirmMenu,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)supportSelectConfirmMenu, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !ServantEquipList )
    goto LABEL_54;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)max_length )
        sub_1C942F8(supportSelectConfirmMenu);
      supportSelectConfirmMenu = (int64_t)*p_servantItemInfo;
      if ( !*p_servantItemInfo )
        break;
      v51 = ServantEquipList->m_Items[v50];
      supportSelectConfirmMenu = SupportServantEquipServantItem__get_EquipUserSvtId(
                                   (SupportServantEquipServantItem_o *)supportSelectConfirmMenu,
                                   0);
      if ( !*p_servantItemInfo )
        break;
      v52 = this;
      oldEquipTargetId = (*p_servantItemInfo)->fields.oldEquipTargetId;
      v54 = supportSelectConfirmMenu;
      supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !supportSelectConfirmMenu )
        break;
      v55 = RecommendSupportSelectControl__get_SelectEquipId(
              (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
              method);
      v56 = entity;
      v57 = v55;
      v58 = (RecommendSupportEquipSelectListViewItem_o *)sub_1C942E4(RecommendSupportEquipSelectListViewItem_TypeInfo);
      RecommendSupportEquipSelectListViewItem___ctor(
        v58,
        v50,
        v51,
        v54,
        oldEquipTargetId,
        v57,
        (UserServantEntity_o *)v56,
        0);
      supportSelectConfirmMenu = (int64_t)v52->fields.itemList;
      if ( !supportSelectConfirmMenu )
        break;
      v65 = *(_QWORD *)(supportSelectConfirmMenu + 16);
      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(supportSelectConfirmMenu + 28);
      if ( !v65 )
        break;
      v67 = *(int *)(supportSelectConfirmMenu + 24);
      this = v52;
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
          (Il2CppObject *)v58,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * v67;
        *(_DWORD *)(supportSelectConfirmMenu + 24) = v67 + 1;
        *(_QWORD *)(v68 + 32) = v58;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 32), (int32_t)v58, v59, v60, v61, v62, v63, v64);
      }
      LODWORD(max_length) = ServantEquipList->max_length;
      if ( (__int64)++v50 >= (int)max_length )
        goto LABEL_46;
    }
LABEL_54:
    sub_1C942F0(supportSelectConfirmMenu, method);
  }
LABEL_46:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_54;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v71 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v72 = *v71;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportSelectConfirmMenu = (int64_t)LocalizationManager__Get(v72, 0);
  if ( !emptyMessageLabel )
    goto LABEL_54;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)supportSelectConfirmMenu, 0);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v73);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v74);
}


void RecommendSupportEquipSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4D28546 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_4D28546 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1C942F0(0, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void RecommendSupportEquipSelectListViewManager__DestroyList(
        RecommendSupportEquipSelectListViewManager_o *this,
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


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewManager__EndConfirmMenu(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  RecommendSupportEquipSelectListViewObject_o *saveObj; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_4D28554 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28554 = 1;
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
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v27.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
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
          BYTE1(current[9].monitor) = 1;
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
          RecommendSupportEquipSelectListViewObject__SetupDisp(saveObj, v20);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  RecommendSupportEquipSelectListViewManager__RefreshEquipped(this, v22);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v23);
}


void RecommendSupportEquipSelectListViewManager__EndSelectFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__60_0; // x20
  Il2CppObject *v11; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D28557 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4D28557 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__60_0 = v8->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__60_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_0,
      v11,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__,
      0);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = _9__60_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__60_0,
      (int32_t)_9__60_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v9 )
    sub_1C942F0(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v9, _9__60_0, 0);
}


void RecommendSupportEquipSelectListViewManager__EndSelectSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__64_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2855B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4D2855B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__64_0 = v7->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__64_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__64_0,
      v10,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__,
      0);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = _9__64_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__64_0,
      (int32_t)_9__64_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v8 )
    sub_1C942F0(Instance, v6);
  CommonUI__CloseServantSortSelectMenu(v8, _9__64_0, 0);
}


int64_t RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2855E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
    sub_1C94098(&Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
    sub_1C94098(&System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo);
    byte_4D2855E = 1;
  }
  v5 = sub_1C942E4(RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                              (const MethodInfo_31AAB80 *)Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__LongCount_object_(
           v8,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_31CA550 *)Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
}


bool RecommendSupportEquipSelectListViewManager__GetFocusItemIndex(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D28562 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportEquipSelectListViewManager_o *)sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28562 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1C942F0(this, index);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo
        || BYTE1(Item[9].monitor) )
      {
        break;
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


RecommendSupportEquipSelectListViewItem_o *RecommendSupportEquipSelectListViewManager__GetItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2854C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D2854C = 1;
  }
  result = (RecommendSupportEquipSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportEquipSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (RecommendSupportEquipSelectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo )
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


System_String_o *RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C942F0(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t RecommendSupportEquipSelectListViewManager__GetSelect(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 naturalAligment; // x11
  int32_t v5; // w19
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28552 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28552 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v7.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v7.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      {
        v5 = *(_DWORD *)((char *)&v7.fields._current->klass + (unsigned __int64)&dword_14);
        goto LABEL_12;
      }
    }
  }
  v5 = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v5;
}


RecommendSupportEquipSelectListViewItem_o *RecommendSupportEquipSelectListViewManager__GetSelectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D28553 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28553 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v7.fields._current;
    if ( v7.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v7.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&qword_98 + 1) )
      {
        goto LABEL_12;
      }
    }
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (RecommendSupportEquipSelectListViewItem_o *)current;
}


SupportServantEquipServantItemDraw_o *RecommendSupportEquipSelectListViewManager__GetServantItemDraw(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemDraw;
}


SupportServantEquipServantItem_o *RecommendSupportEquipSelectListViewManager__GetServantItemInfo(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


bool RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D28560 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28560 = 1;
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
        goto LABEL_9;
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * naturalAligment
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v20 = *(_QWORD *)(itemList + 120);
      if ( !v20 || !*(_BYTE *)(itemList + 185) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 156) )
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
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v31,
            v9,
            *(const MethodInfo_3852E68 **)(*(_QWORD *)(v30 + 192) + 112LL));
          goto LABEL_9;
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
          goto LABEL_30;
        }
        v25 = &v27->obj.klass + v29;
        v7->fields._size = v29 + 1;
      }
      v25[4] = (Il2CppClass *)v9;
LABEL_9:
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


bool RecommendSupportEquipSelectListViewManager__GetSwapLockList(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D2855F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D2855F = 1;
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
        goto LABEL_9;
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * naturalAligment
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v20 = *(_QWORD *)(itemList + 120);
      if ( !v20 || !*(_BYTE *)(itemList + 184) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 155) )
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
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v31,
            v9,
            *(const MethodInfo_3852E68 **)(*(_QWORD *)(v30 + 192) + 112LL));
          goto LABEL_9;
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
          goto LABEL_30;
        }
        v25 = &v27->obj.klass + v29;
        v7->fields._size = v29 + 1;
      }
      v25[4] = (Il2CppClass *)v9;
LABEL_9:
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


void RecommendSupportEquipSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4D28547 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_4D28547 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1C942F0(0, v1);
  ListViewSort__InitLoad(sortStatus, 0);
}


void RecommendSupportEquipSelectListViewManager__ModifyList(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
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
  RecommendSupportEquipSelectListViewItem_o *v17; // x22
  __int64 naturalAligment; // x10
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int128 v20; // q0
  UserServantEntity_o *v21; // x23
  int64_t EquipUserSvtId; // x0
  int32_t v23; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v25; // x21
  __int64 v26; // x10
  UnityEngine_Object_o *klass; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+50h] [xbp-80h]

  if ( (byte_4D2854B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2854B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  v7 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    if ( !(_DWORD)m_CancellationTokenSource )
LABEL_46:
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
        goto LABEL_45;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v31, 0);
      if ( size >= 1 )
      {
        v15 = Instance;
        v16 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_45;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v16,
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v17 = (RecommendSupportEquipSelectListViewItem_o *)Instance;
            naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
            if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (RecommendSupportEquipSelectListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
            {
              context = Instance->fields.context;
              if ( context )
              {
                v20 = *(_OWORD *)&context[1].monitor;
                *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&context->fields._props;
                *(_OWORD *)&v32.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v30 = v32;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                              &v30,
                                              0);
                if ( Instance == v15 )
                  break;
              }
            }
          }
          if ( size == ++v16 )
            goto LABEL_24;
        }
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_46;
        Instance = (DataManager_o *)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_45;
        v21 = *v12;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           0);
        RecommendSupportEquipSelectListViewItem__ModifyItem(v17, v21, EquipUserSvtId, 0);
        if ( !isIconSizeChange )
        {
          RecommendSupportEquipSelectListViewItem__ModifyLockItem(v17, 0);
          RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(v17, 0);
        }
      }
LABEL_24:
      if ( ++v9 == (_DWORD)m_CancellationTokenSource )
        break;
      if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
        goto LABEL_46;
    }
    if ( (int)m_CancellationTokenSource >= 1 && isIconSizeChange )
    {
      v23 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v23,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v25 = (ListViewItem_o *)Item;
          v26 = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)v26
            && (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v26 - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
          {
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              Instance = (DataManager_o *)v25->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v25, this->fields.seed, 0);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v23 )
          return;
      }
LABEL_45:
      sub_1C942F0(Instance, v5);
    }
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4D28559 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    byte_4D28559 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickDecide(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = RecommendSupportEquipSelectListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Select,
      callbackFunc->fields.method);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickEquipExplanation(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = RecommendSupportEquipSelectListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Select,
      callbackFunc->fields.method);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D28556 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28556 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C942F0(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_31590308(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListViewManager__OnClickSelectListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
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


void RecommendSupportEquipSelectListViewManager__OnClickSortAscendingOrder(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D2855C & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    byte_4D2855C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D2855A & 1) == 0 )
  {
    sub_1C94098(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2855A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C942F0(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0);
  }
}


void RecommendSupportEquipSelectListViewManager__OnLongPushListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x21
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


void RecommendSupportEquipSelectListViewManager__OnMoveEnd(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D28551 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28551 = 1;
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


void RecommendSupportEquipSelectListViewManager__RefreshEquipped(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x27
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x20
  Il2CppClass *v7; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D28555 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_4D28555 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v13.fields._current;
    if ( v13.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v13.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        klass = v13.fields._current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
        {
          v7 = current[7].klass;
          if ( v7
            && (v8 = RecommendSupportEquipSelectListViewObject_TypeInfo->_2.naturalAligment,
                *((unsigned __int8 *)v7->_1.image + 304) >= (unsigned int)v8) )
          {
            if ( *(RecommendSupportEquipSelectListViewObject_c **)(*((_QWORD *)v7->_1.image + 25) + 8 * v8 - 8) == RecommendSupportEquipSelectListViewObject_TypeInfo )
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
            if ( (byte_4D28570 & 1) == 0 )
            {
              sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
              byte_4D28570 = 1;
            }
            RecommendSupportEquipSelectListViewObject__SetupDisp((RecommendSupportEquipSelectListViewObject_o *)v9, v11);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void RecommendSupportEquipSelectListViewManager__RefreshListDisp(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2854D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    byte_4D2854D = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C942F0(0, v5);
    v6.fields._current->klass->vtable[9].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewManager__RequestListObject(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D2854F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2854F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v11,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewManager__RequestListObject_35398188(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D28550 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D28550 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


void RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D28561 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4D28561 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v5.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v5.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v5.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        *((_BYTE *)&v5.fields._current->klass + (unsigned __int64)&qword_98 + 1) = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void RecommendSupportEquipSelectListViewManager__SetCanLongPushFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D28558 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17573/*"btn_filter_on"*/);
    sub_1C94098(&StringLiteral_17572/*"btn_filter"*/);
    byte_4D28558 = 1;
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


void RecommendSupportEquipSelectListViewManager__SetMode(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callback,
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
  RecommendSupportEquipSelectListViewManager__SetMode_35397960(this, mode, v10);
}


void RecommendSupportEquipSelectListViewManager__SetMode_35397960(
        RecommendSupportEquipSelectListViewManager_o *this,
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
    RecommendSupportEquipSelectListViewManager__RequestListObject_35398188(this, mode + 1, v7);
}


void RecommendSupportEquipSelectListViewManager__SetMode_35398136(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  RecommendSupportEquipSelectListViewManager__SetMode_35397960(this, mode, v10);
}


void RecommendSupportEquipSelectListViewManager__SetObjectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  int32_t initMode; // w20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  if ( (byte_4D2854E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_4D2854E = 1;
  }
  if ( obj )
  {
    naturalAligment = RecommendSupportEquipSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportEquipSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  initMode = this->fields.initMode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( initMode == 2 )
  {
    if ( v8 )
    {
      if ( obj )
      {
        v11 = 3;
LABEL_17:
        RecommendSupportEquipSelectListViewObject__Init((RecommendSupportEquipSelectListViewObject_o *)obj, v11, 0, v10);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v8 )
  {
    if ( obj )
    {
      v11 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1C942F0(v8, v9);
  }
}


void RecommendSupportEquipSelectListViewManager__SetSortButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D2855D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17609/*"btn_sort_up"*/);
    sub_1C94098(&StringLiteral_17709/*"btn_txt_up"*/);
    sub_1C94098(&StringLiteral_17660/*"btn_txt_new"*/);
    sub_1C94098(&StringLiteral_17650/*"btn_txt_down"*/);
    sub_1C94098(&StringLiteral_17667/*"btn_txt_old"*/);
    sub_1C94098(&StringLiteral_17606/*"btn_sort_down"*/);
    byte_4D2855D = 1;
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


void RecommendSupportEquipSelectListViewManager__add_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28542 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4D28542 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1C9468C(v7);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void RecommendSupportEquipSelectListViewManager__add_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28544 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D28544 = 1;
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
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1C9468C(v7);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *RecommendSupportEquipSelectListViewManager__get_ClippingObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_4D28549 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28549 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
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
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)RecommendSupportEquipSelectListViewObject__GetItem(
                                 (RecommendSupportEquipSelectListViewObject_o *)Component_object,
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
          v23 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
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
        v23 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
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
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *RecommendSupportEquipSelectListViewManager__get_ObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__32_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  RecommendSupportEquipSelectListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__object__o *_9__32_1; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4D28548 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C94098(&System_Func_GameObject__bool__TypeInfo);
    sub_1C94098(&System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4D28548 = 1;
  }
  v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__bool__o *)v3->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__32_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__32_0,
      v6,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__,
      0);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_GameObject__bool__o *)_9__32_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__32_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v15 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v16 = v14;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v15 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__object__o *)v15->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__32_1 = (System_Func_object__object__o *)sub_1C942E4(System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__32_1,
      v18,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__,
      0);
    v19 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v19->__9__32_1 = (struct System_Func_GameObject__RecommendSupportEquipSelectListViewObject__o *)_9__32_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->__9__32_1, (int32_t)_9__32_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__32_1,
                                                               (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                           v26,
                                                                                           (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
}


void RecommendSupportEquipSelectListViewManager__remove_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D28543 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4D28543 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1C9468C(v7);
  RecommendSupportEquipSelectListViewManager__add_callbackFunc2(v10, v11, v12);
}


void RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D28545 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D28545 = 1;
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
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1C9468C(v7);
  RecommendSupportEquipSelectListViewManager__Awake(v10, v11);
}


void RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3584;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC352C;
}


System_IAsyncResult_o *RecommendSupportEquipSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4D28564 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo);
    byte_4D28564 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void RecommendSupportEquipSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void RecommendSupportEquipSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
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


void RecommendSupportEquipSelectListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28565 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4D28565 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportEquipSelectListViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportEquipSelectListViewManager___c___ctor(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportEquipSelectListViewManager___c___EndSelectFilterKind_b__60_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListViewManager___c___EndSelectSortKind_b__64_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__32_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4D28566 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28566 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


RecommendSupportEquipSelectListViewObject_o *RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__32_1(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4D28567 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c_o *)sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    byte_4D28567 = 1;
  }
  if ( !go )
    sub_1C942F0(this, go);
  return (RecommendSupportEquipSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          go,
                                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
}


void RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0___ctor(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0___GetAmountSortValue_b__0(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4D28568 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28568 = 1;
  }
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0 )
    sub_1C942F0(this, item);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v9, 0) == v4->fields.svtId;
}