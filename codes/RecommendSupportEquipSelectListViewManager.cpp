void RecommendSupportEquipSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C46E & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_11720/*"RecommendSupportServantEquip"*/);
    byte_596C46E = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_11720/*"RecommendSupportServantEquip"*/, 3, 0, 0);
  RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields,
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
  RecommendSupportEquipSelectListViewManager__ModifyList(this, 1, v14);
  RecommendSupportEquipSelectListViewManager__SetMode_41560848(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void RecommendSupportEquipSelectListViewManager__CreateList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t supportSelectConfirmMenu; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  RecommendSupportEquipSelectListViewManager_c *v11; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v13; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ListViewSort_o *sort; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v39; // x20
  int64_t SelectEquipId; // x21
  SupportServantEquipServantItem_o *v41; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UserServantEntity_array *ServantEquipList; // x20
  __int64 v49; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v51; // x21
  UserServantEntity_o *v52; // x23
  struct SupportServantEquipServantItem_o *servantItemInfo; // x8
  int64_t oldEquipTargetId; // x25
  int64_t v55; // x24
  int64_t v56; // x0
  Il2CppObject *v57; // x26
  int64_t v58; // x27
  RecommendSupportEquipSelectListViewItem_o *v59; // x22
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v72; // x8
  System_String_o *v73; // x21
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596C455 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportServantEquipServantItem_TypeInfo);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596C455 = 1;
  }
  supportSelectConfirmMenu = (int64_t)this->fields.supportSelectConfirmMenu;
  entity = 0;
  this->fields.isCanNotLongPush = 0;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectConfirmMenu, 0);
  v11 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !*(&RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo, v4, v5);
    v11 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  p_sortStatus = &v11->static_fields->sortStatus;
  v13 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v13, v5, v6, v7, v8, v9, v10);
  supportSelectConfirmMenu = (int64_t)this->fields.sort;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  *(_DWORD *)(supportSelectConfirmMenu + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)supportSelectConfirmMenu, 0);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  v21 = *(_QWORD *)(supportSelectConfirmMenu + 104);
  supportSelectConfirmMenu = (int64_t)*p_sort;
  if ( v21 )
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)supportSelectConfirmMenu,
                           0,
                           *(System_Int32_array **)(v21 + 104),
                           *(System_Int32_array **)(v21 + 64),
                           0,
                           0,
                           0,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)supportSelectConfirmMenu,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v39 = entity;
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(
                    (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                    method);
  v41 = (SupportServantEquipServantItem_o *)sub_2213CCC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v41, (UserServantEntity_o *)v39, SelectEquipId, 0);
  this->fields.servantItemInfo = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantItemInfo,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu,
    this->fields.servantItemInfo,
    0,
    0,
    this->fields._IsGrandEnable_k__BackingField,
    0);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu, 0, 0);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)supportSelectConfirmMenu,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)supportSelectConfirmMenu, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !ServantEquipList )
    goto LABEL_54;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= (unsigned int)max_length )
        sub_2213CE4(supportSelectConfirmMenu);
      supportSelectConfirmMenu = (int64_t)this->fields.servantItemInfo;
      if ( !supportSelectConfirmMenu )
        break;
      v52 = ServantEquipList->m_Items[v51];
      supportSelectConfirmMenu = SupportServantEquipServantItem__get_EquipUserSvtId(
                                   (SupportServantEquipServantItem_o *)supportSelectConfirmMenu,
                                   0);
      servantItemInfo = this->fields.servantItemInfo;
      if ( !servantItemInfo )
        break;
      oldEquipTargetId = servantItemInfo->fields.oldEquipTargetId;
      v55 = supportSelectConfirmMenu;
      supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !supportSelectConfirmMenu )
        break;
      v56 = RecommendSupportSelectControl__get_SelectEquipId(
              (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
              method);
      v57 = entity;
      v58 = v56;
      v59 = (RecommendSupportEquipSelectListViewItem_o *)sub_2213CCC(RecommendSupportEquipSelectListViewItem_TypeInfo);
      RecommendSupportEquipSelectListViewItem___ctor(
        v59,
        v51,
        v52,
        v55,
        oldEquipTargetId,
        v58,
        (UserServantEntity_o *)v57,
        0);
      supportSelectConfirmMenu = (int64_t)this->fields.itemList;
      if ( !supportSelectConfirmMenu )
        break;
      v66 = *(_QWORD *)(supportSelectConfirmMenu + 16);
      v67 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(supportSelectConfirmMenu + 28);
      if ( !v66 )
        break;
      v68 = *(int *)(supportSelectConfirmMenu + 24);
      if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
          (Il2CppObject *)v59,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = v66 + 8 * v68;
        *(_DWORD *)(supportSelectConfirmMenu + 24) = v68 + 1;
        *(_QWORD *)(v69 + 32) = v59;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 32), (int32_t)v59, v60, v61, v62, v63, v64, v65);
      }
      LODWORD(max_length) = ServantEquipList->max_length;
      if ( (__int64)++v51 >= (int)max_length )
        goto LABEL_46;
    }
LABEL_54:
    sub_2213CDC(supportSelectConfirmMenu, method);
  }
LABEL_46:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_54;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v72 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v73 = *v72;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v49);
  supportSelectConfirmMenu = (int64_t)LocalizationManager__Get(v73, 0);
  if ( !emptyMessageLabel )
    goto LABEL_54;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)supportSelectConfirmMenu, 0);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v74);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v75);
}


void RecommendSupportEquipSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportEquipSelectListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596C451 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_596C451 = 1;
  }
  v3 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !*(&RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo, v1, v2);
    v3 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0);
}


void RecommendSupportEquipSelectListViewManager__DestroyList(
        RecommendSupportEquipSelectListViewManager_o *this,
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


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewManager__EndConfirmMenu(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  RecommendSupportEquipSelectListViewObject_o *saveObj; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-90h] BYREF
  __int64 v33; // [xsp+60h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o *v34; // [xsp+68h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+70h] [xbp-60h] BYREF

  if ( (byte_596C45F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C45F = 1;
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
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v35.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
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
          BYTE4(current[9].klass) = 1;
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
          SupportServantEquipServantItemDraw__SetItem(
            servantItemDraw,
            this->fields.servantItemInfo,
            0,
            0,
            this->fields._IsGrandEnable_k__BackingField,
            0);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_2213CDC(0, v26);
          RecommendSupportEquipSelectListViewObject__SetupDisp(saveObj, v26);
        }
        else
        {
          BYTE4(current[9].klass) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  RecommendSupportEquipSelectListViewManager__RefreshEquipped(this, v28);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v29);
}


void RecommendSupportEquipSelectListViewManager__EndSelectFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportEquipSelectListViewManager___c_c *v9; // x8
  CommonUI_o *v10; // x19
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C462 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__63_0__);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_596C462 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo, v7, v8);
    v9 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__63_0,
      v13,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__63_0__,
      0);
    v14 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v14->__9__63_0 = _9__63_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__63_0, (int32_t)_9__63_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
    sub_2213CDC(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v10, _9__63_0, 0);
}


void RecommendSupportEquipSelectListViewManager__EndSelectSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportEquipSelectListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__67_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596C466 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__67_0__);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_596C466 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo, v6, v7);
    v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__67_0 = static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__67_0,
      v12,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__67_0__,
      0);
    v13 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v13->__9__67_0 = _9__67_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__67_0, (int32_t)_9__67_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v9 )
    sub_2213CDC(Instance, v6);
  CommonUI__CloseServantSortSelectMenu(v9, _9__67_0, 0);
}


int64_t RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_IEnumerable_o *itemList; // x0
  const MethodInfo_3868AB0 *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_596C469 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
    sub_2213A60(&System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0__GetAmountSortValue_b__0__);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_596C469 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
  v9 = (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___;
  *(_DWORD *)(v5 + 16) = svtId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(itemList, v9);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0__GetAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__LongCount_object_(
           v10,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_3886E7C *)Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
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

  if ( (byte_596C46D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportEquipSelectListViewManager_o *)sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C46D = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_2213CDC(this, index);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo
        || BYTE4(Item[9].klass) )
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

  if ( (byte_596C457 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C457 = 1;
  }
  result = (RecommendSupportEquipSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportEquipSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


int32_t RecommendSupportEquipSelectListViewManager__GetSelect(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 naturalAligment; // x11
  int32_t v5; // w19
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C45D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C45D = 1;
  }
  itemList = this->fields.itemList;
  memset(&v7, 0, sizeof(v7));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v7.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v7.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&qword_90 + 4) )
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
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v5;
}


RecommendSupportEquipSelectListViewItem_o *RecommendSupportEquipSelectListViewManager__GetSelectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x19
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C45E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C45E = 1;
  }
  itemList = this->fields.itemList;
  memset(&v7, 0, sizeof(v7));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v7.fields._current;
    if ( v7.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v7.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&qword_90 + 4) )
      {
        goto LABEL_12;
      }
    }
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_596C46B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C46B = 1;
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
    goto LABEL_37;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_37;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)naturalAligment
          && *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) == RecommendSupportEquipSelectListViewItem_TypeInfo )
        {
          v21 = *(_QWORD *)(Item + 120);
          if ( v21 )
          {
            if ( *(_BYTE *)(Item + 177) )
            {
              if ( *(_BYTE *)(Item + 151) )
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
                  goto LABEL_37;
                items = v8->fields._items;
                v26 = Method_System_Collections_Generic_List_long__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_37;
                v27 = v8->fields._size;
                v10 = Item;
                if ( (unsigned int)v27 >= LODWORD(items->max_length) )
                {
                  v35 = v26[4];
                  v36 = v8;
LABEL_30:
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
                  goto LABEL_37;
                v32 = v7->fields._items;
                v33 = Method_System_Collections_Generic_List_long__Add__;
                ++v7->fields._version;
                if ( !v32 )
                  goto LABEL_37;
                v34 = v7->fields._size;
                v10 = Item;
                if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
                {
                  v35 = v33[4];
                  v36 = v7;
                  goto LABEL_30;
                }
                v28 = &v32->obj.klass + v34;
                v7->fields._size = v34 + 1;
              }
              v28[4] = (Il2CppClass *)v10;
            }
          }
        }
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_37:
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


bool RecommendSupportEquipSelectListViewManager__GetSwapLockList(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_596C46A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C46A = 1;
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
    goto LABEL_37;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_37;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)naturalAligment
          && *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) == RecommendSupportEquipSelectListViewItem_TypeInfo )
        {
          v21 = *(_QWORD *)(Item + 120);
          if ( v21 )
          {
            if ( *(_BYTE *)(Item + 176) )
            {
              if ( *(_BYTE *)(Item + 150) )
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
                  goto LABEL_37;
                items = v8->fields._items;
                v26 = Method_System_Collections_Generic_List_long__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_37;
                v27 = v8->fields._size;
                v10 = Item;
                if ( (unsigned int)v27 >= LODWORD(items->max_length) )
                {
                  v35 = v26[4];
                  v36 = v8;
LABEL_30:
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
                  goto LABEL_37;
                v32 = v7->fields._items;
                v33 = Method_System_Collections_Generic_List_long__Add__;
                ++v7->fields._version;
                if ( !v32 )
                  goto LABEL_37;
                v34 = v7->fields._size;
                v10 = Item;
                if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
                {
                  v35 = v33[4];
                  v36 = v7;
                  goto LABEL_30;
                }
                v28 = &v32->obj.klass + v34;
                v7->fields._size = v34 + 1;
              }
              v28[4] = (Il2CppClass *)v10;
            }
          }
        }
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_37:
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


void RecommendSupportEquipSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RecommendSupportEquipSelectListViewManager_c *v3; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_596C452 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_596C452 = 1;
  }
  v3 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !*(&RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo, v1, v2);
    v3 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v3->static_fields->sortStatus;
  if ( !sortStatus )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(sortStatus, 0);
}


void RecommendSupportEquipSelectListViewManager__ModifyList(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
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
  RecommendSupportEquipSelectListViewItem_o *v20; // x22
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  UserServantEntity_o *v26; // x23
  int64_t EquipUserSvtId; // x0
  int32_t v28; // w20
  Il2CppObject *Item; // x0
  __int64 v30; // x2
  ListViewItem_o *v31; // x21
  __int64 v32; // x10
  UnityEngine_Object_o *klass; // x22
  int v35; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-80h]

  if ( (byte_596C456 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C456 = 1;
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
  v35 = *(_DWORD *)(Instance + 24);
  if ( v35 >= 1 )
  {
    size = itemList->fields._size;
    for ( i = 0; i != v35; ++i )
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
      *(_OWORD *)&v38.fields.currentCryptoKey = v15;
      *(_OWORD *)&v38.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
      v37 = v38;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v37, 0);
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
          if ( Instance )
          {
            v20 = (RecommendSupportEquipSelectListViewItem_o *)Instance;
            naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment
              && *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL)
                                                               + 8 * naturalAligment
                                                               - 8) == RecommendSupportEquipSelectListViewItem_TypeInfo )
            {
              v22 = *(_QWORD *)(Instance + 120);
              if ( v22 )
              {
                v23 = *(_OWORD *)(v22 + 16);
                v24 = *(_OWORD *)(v22 + 32);
                v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v38.fields.currentCryptoKey = v23;
                *(_OWORD *)&v38.fields.fakeValue = v24;
                if ( !v25 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
                v36 = v38;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v36, 0);
                if ( Instance == v18 )
                  break;
              }
            }
          }
          if ( size == ++v19 )
            goto LABEL_24;
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
        RecommendSupportEquipSelectListViewItem__ModifyItem(v20, v26, EquipUserSvtId, 0);
        if ( !isIconSizeChange )
        {
          RecommendSupportEquipSelectListViewItem__ModifyLockItem(v20, 0);
          RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(v20, 0);
        }
      }
LABEL_24:
      ;
    }
    if ( v35 >= 1 && isIconSizeChange )
    {
      v28 = 0;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v28,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v31 = (ListViewItem_o *)Item;
          v32 = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)v32
            && (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v32 - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
          {
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v30);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              Instance = (int64_t)v31->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v31, this->fields.seed, 0);
            }
          }
        }
        if ( v35 == ++v28 )
          return;
      }
LABEL_44:
      sub_2213CDC(Instance, v5);
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

  if ( (byte_596C464 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    byte_596C464 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void RecommendSupportEquipSelectListViewManager__OnClickDecide(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)RecommendSupportEquipSelectListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v10; // x1
  __int64 Select; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = (unsigned int)RecommendSupportEquipSelectListViewManager__GetSelect(this, v10);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596C461 & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C461 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_37380372(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
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


void RecommendSupportEquipSelectListViewManager__OnClickSortAscendingOrder(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_596C467 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    byte_596C467 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596C465 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C465 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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


void RecommendSupportEquipSelectListViewManager__OnMoveEnd(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_596C45C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C45C = 1;
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


void RecommendSupportEquipSelectListViewManager__RefreshEquipped(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x27
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppClass *v11; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x20
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C460 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_596C460 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v17, 0, sizeof(v17));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v17.fields._current;
    if ( v17.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v17.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        klass = v17.fields._current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
        {
          v11 = current[7].klass;
          if ( v11
            && (v12 = RecommendSupportEquipSelectListViewObject_TypeInfo->_2.naturalAligment,
                *((unsigned __int8 *)v11->_1.image + 304) >= (unsigned int)v12) )
          {
            if ( *(RecommendSupportEquipSelectListViewObject_c **)(*((_QWORD *)v11->_1.image + 25) + 8 * v12 - 8) == RecommendSupportEquipSelectListViewObject_TypeInfo )
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
            if ( (byte_596C47B & 1) == 0 )
            {
              sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
              byte_596C47B = 1;
            }
            RecommendSupportEquipSelectListViewObject__SetupDisp(
              (RecommendSupportEquipSelectListViewObject_o *)v13,
              v15);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void RecommendSupportEquipSelectListViewManager__RefreshListDisp(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C458 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    byte_596C458 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_2213CDC(0, v5);
    v6.fields._current->klass->vtable[9].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C45A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C45A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v12,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewManager__RequestListObject_41561076(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_596C45B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C45B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


void RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C46C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_596C46C = 1;
  }
  itemList = this->fields.itemList;
  memset(&v5, 0, sizeof(v5));
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v5.fields._current )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( v5.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (RecommendSupportEquipSelectListViewItem_c *)v5.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        *((_BYTE *)&v5.fields._current->klass + (unsigned __int64)&qword_90 + 4) = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_596C463 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596C463 = 1;
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


void RecommendSupportEquipSelectListViewManager__SetMode(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callback,
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
  RecommendSupportEquipSelectListViewManager__SetMode_41560848(this, mode, v10);
}


void RecommendSupportEquipSelectListViewManager__SetMode_41560848(
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
    sub_2213CDC(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    RecommendSupportEquipSelectListViewManager__RequestListObject_41561076(this, mode + 1, v7);
}


void RecommendSupportEquipSelectListViewManager__SetMode_41561024(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  RecommendSupportEquipSelectListViewManager__SetMode_41560848(this, mode, v10);
}


void RecommendSupportEquipSelectListViewManager__SetObjectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x19
  __int64 naturalAligment; // x11
  int v7; // w8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_596C459 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_596C459 = 1;
  }
  if ( v4 )
  {
    naturalAligment = RecommendSupportEquipSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportEquipSelectListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  v7 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.initMode == 2 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
    v8 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( v8 )
    {
      if ( v4 )
      {
        v11 = 3;
LABEL_19:
        RecommendSupportEquipSelectListViewObject__Init((RecommendSupportEquipSelectListViewObject_o *)v4, v11, 0, v10);
        return;
      }
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
    v8 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    if ( v8 )
    {
      if ( v4 )
      {
        v11 = 2;
        goto LABEL_19;
      }
LABEL_21:
      sub_2213CDC(v8, v9);
    }
  }
}


void RecommendSupportEquipSelectListViewManager__SetSortButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_596C468 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596C468 = 1;
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


void RecommendSupportEquipSelectListViewManager__add_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewManager_o *v11; // x0
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C44D & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_596C44D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewManager_o *)sub_221405C(
                                                          v6,
                                                          RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc(v11, v12, v13);
}


void RecommendSupportEquipSelectListViewManager__add_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C44F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C44F = 1;
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
  v11 = (RecommendSupportEquipSelectListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *RecommendSupportEquipSelectListViewManager__get_ClippingObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
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

  if ( (byte_596C454 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C454 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
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
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)RecommendSupportEquipSelectListViewObject__GetItem(
                                 (RecommendSupportEquipSelectListViewObject_o *)Component_object,
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
                v24 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__,
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
              v24 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__,
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
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)v3;
}


bool RecommendSupportEquipSelectListViewManager__get_IsGrandEnable(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandEnable_k__BackingField;
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *RecommendSupportEquipSelectListViewManager__get_ObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportEquipSelectListViewManager___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__35_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  RecommendSupportEquipSelectListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v21; // x9
  System_Func_object__object__o *_9__35_1; // x20
  Il2CppObject *v23; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_596C453 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_2213A60(&System_Func_GameObject__bool__TypeInfo);
    sub_2213A60(&System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__35_0__);
    sub_2213A60(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__35_1__);
    sub_2213A60(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_596C453 = 1;
  }
  v4 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo, method, v2);
    v4 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__35_0 = (System_Func_object__bool__o *)static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__35_0,
      v8,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__35_0__,
      0);
    v9 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v9->__9__35_0 = (struct System_Func_GameObject__bool__o *)_9__35_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__35_0, (int32_t)_9__35_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__35_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v19 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v20 = v16;
  if ( !*(&RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo, v17, v18);
    v19 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__35_1 = (System_Func_object__object__o *)v21->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__35_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__35_1,
      v23,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__35_1__,
      0);
    v24 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v24->__9__35_1 = (struct System_Func_GameObject__RecommendSupportEquipSelectListViewObject__o *)_9__35_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__35_1, (int32_t)_9__35_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__35_1,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                           v31,
                                                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
}


void RecommendSupportEquipSelectListViewManager__remove_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C44E & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_596C44E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewManager_o *)sub_221405C(
                                                          v6,
                                                          RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
  RecommendSupportEquipSelectListViewManager__add_callbackFunc2(v11, v12, v13);
}


void RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C450 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C450 = 1;
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
  v11 = (RecommendSupportEquipSelectListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportEquipSelectListViewManager__Awake(v11, v12);
}


void RecommendSupportEquipSelectListViewManager__set_IsGrandEnable(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandEnable_k__BackingField = value;
}


void RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2005580;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2005528;
}


System_IAsyncResult_o *RecommendSupportEquipSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
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
  if ( (byte_596C46F & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo);
    byte_596C46F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void RecommendSupportEquipSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C470 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_596C470 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportEquipSelectListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields,
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


void RecommendSupportEquipSelectListViewManager___c___EndSelectFilterKind_b__63_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListViewManager___c___EndSelectSortKind_b__67_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__35_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_596C471 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C471 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go, method);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


RecommendSupportEquipSelectListViewObject_o *RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__35_1(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_596C472 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    byte_596C472 = 1;
  }
  if ( !go )
    sub_2213CDC(this, go);
  return (RecommendSupportEquipSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          go,
                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
}


void RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0___ctor(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0___GetAmountSortValue_b__0(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_596C473 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c__DisplayClass70_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C473 = 1;
  }
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0 )
    sub_2213CDC(this, item);
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0) == v4->fields.svtId;
}