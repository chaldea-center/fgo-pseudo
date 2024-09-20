void __fastcall SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57BE1 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13089/*"SupportServantEquip"*/);
    byte_4A57BE1 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_13089/*"SupportServantEquip"*/, 3, 0, 0LL);
  SupportServantEquipListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SupportServantEquipListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall SupportServantEquipListViewManager___ctor(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantEquipListViewManager__ChangeIconScale(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 80) = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  SupportServantEquipListViewManager__ModifyList(this, 1, v10);
  SupportServantEquipListViewManager__SetMode_33327124(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SupportServantEquipListViewManager__CreateList(
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
  SupportServantEquipListViewManager_o *v15; // x29
  SupportServantData_o *v16; // x1
  SupportServantData_o **p_supportServantData; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  SupportServantEquipListViewManager_c *v20; // x0
  struct SupportServantEquipListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *sortStatus; // x1
  SupportServantEquipListViewManager_o **p_sort; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct ListViewSort_o *sort; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  unsigned int sortKindButton; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v34; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x26
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x26
  int64_t Equip; // x24
  SupportServantEquipServantItem_o *v39; // x27
  const MethodInfo *v40; // x3
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x24
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  System_Int64_array *equipIdList; // x25
  UserServantEntity_array *ServantEquipList; // x26
  __int64 v48; // x8
  unsigned __int64 v49; // x21
  UserServantEntity_o *v50; // x23
  int64_t indicator; // x28
  Il2CppObject *v52; // x19
  SupportServantEquipListViewManager_o *v53; // x27
  SupportServantEquipListViewItem_o *v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v60; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v63; // x8
  System_String_o *v64; // x21
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  SupportServantData_array *v67; // [xsp+0h] [xbp-B0h]
  int32_t v68; // [xsp+8h] [xbp-A8h]
  System_Int32_array *v69; // [xsp+10h] [xbp-A0h]
  System_Int32_array *v70; // [xsp+18h] [xbp-98h]
  const MethodInfo *v71; // [xsp+30h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  v15 = this;
  if ( (byte_4A57BC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1B885B0(&SupportServantEquipServantItem_TypeInfo);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    this = (SupportServantEquipListViewManager_o *)sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A57BC7 = 1;
  }
  entity = 0LL;
  if ( !supportServantData )
    goto LABEL_55;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_56;
  v16 = supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v15->fields.supportServantData;
  v15->fields.supportServantData = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.supportServantData, (int32_t)v16, nowDeckNum, classPos);
  this = (SupportServantEquipListViewManager_o *)v15->fields.supportSelectConfirmMenu;
  v15->fields.classPos = classPos;
  v15->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_55;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0LL);
  v20 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v20 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  sortStatus = static_fields->sortStatus;
  v15->fields.sort = static_fields->sortStatus;
  p_sort = (SupportServantEquipListViewManager_o **)&v15->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.sort, (int32_t)sortStatus, v18, v19);
  this = (SupportServantEquipListViewManager_o *)v15->fields.sort;
  if ( !this )
    goto LABEL_55;
  LODWORD(this->fields.dropList) = 1;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  this = *p_sort;
  if ( eventSetupInfo )
  {
    if ( !this )
      goto LABEL_55;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)this,
                           0LL,
                           eventSetupInfo->fields.supportEquipFilterEventCampaignIds,
                           eventSetupInfo->fields.supportEquipFilterEventIds,
                           0LL,
                           0LL,
                           0,
                           0LL);
    v15->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v15->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v27,
      v28);
    sort = v15->fields.sort;
    this = (SupportServantEquipListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)v15->fields.alignedBonusFilterInfos,
                                                     0LL);
    if ( !sort )
      goto LABEL_55;
    sort->fields.isBonusKind = ((unsigned __int8)this & 1) == 0;
  }
  else
  {
    if ( !this )
      goto LABEL_55;
    BYTE5(this->fields.emptyMessageLabel) = 0;
    v15->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.alignedBonusFilterInfos, 0, v24, v25);
  }
  this = (SupportServantEquipListViewManager_o *)v15->fields.bonusFilterKindButton;
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !*p_sort )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE5((*p_sort)->fields.emptyMessageLabel), 0LL);
  if ( !*p_sort )
    goto LABEL_55;
  sortKindButton = (unsigned int)(*p_sort)->fields.sortKindButton;
  v15->fields.scaleType = sortKindButton;
  if ( sortKindButton < 2 )
  {
    normalSizeSeed = v15->fields.normalSizeSeed;
  }
  else if ( sortKindButton == 2 )
  {
    normalSizeSeed = v15->fields.smallSizeSeed;
  }
  else
  {
    if ( sortKindButton != 3 )
      goto LABEL_26;
    normalSizeSeed = v15->fields.extremelySmallSizeSeed;
  }
  v15->fields.seed = normalSizeSeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.seed, (int32_t)normalSizeSeed, v30, v31);
LABEL_26:
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, v34);
  if ( !v35 )
    goto LABEL_55;
  DataMasterBase_object__object__long___TryGetEntity(
    v35,
    &entity,
    (int64_t)this,
    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_55;
  v37 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v36);
  v39 = (SupportServantEquipServantItem_o *)sub_1B887FC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v39, (UserServantEntity_o *)v37, Equip, v40);
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v15->fields.servantItemInfo;
  v15->fields.servantItemInfo = v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.servantItemInfo, (int32_t)v39, v42, v43);
  this = (SupportServantEquipListViewManager_o *)v15->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v15->fields.servantItemInfo,
    v44);
  this = (SupportServantEquipListViewManager_o *)v15->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, v45);
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v15, 0, 0LL);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_55;
  v48 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v48 >= 1 )
  {
    v49 = 0LL;
    while ( v49 < (unsigned int)v48 )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      v50 = ServantEquipList->m_Items[v49];
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       (const MethodInfo *)supportServantData);
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      indicator = (int64_t)(*p_servantItemInfo)->fields.indicator;
      v52 = entity;
      v53 = this;
      v54 = (SupportServantEquipListViewItem_o *)sub_1B887FC(SupportServantEquipListViewItem_TypeInfo);
      SupportServantEquipListViewItem___ctor(
        v54,
        v49,
        v50,
        (int64_t)v53,
        indicator,
        equipIdList,
        (UserServantEntity_o *)v52,
        eventSetupInfo,
        v67,
        v68,
        v69,
        v70,
        0,
        0,
        v71);
      this = (SupportServantEquipListViewManager_o *)v15->fields.itemList;
      if ( !this )
        goto LABEL_55;
      v57 = *(_QWORD *)&this->fields.m_CachedPtr;
      v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v57 )
        goto LABEL_55;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v54,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v60 + 32) = v54;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v54, v55, v56);
      }
      LODWORD(v48) = ServantEquipList->max_length;
      if ( (__int64)++v49 >= (int)v48 )
        goto LABEL_47;
    }
LABEL_56:
    sub_1B88814(this, supportServantData);
  }
LABEL_47:
  itemList = v15->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  emptyMessageLabel = v15->fields.emptyMessageLabel;
  v63 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v64 = *v63;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v64, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_1B8880C(this, supportServantData);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  SupportServantEquipListViewManager__RefreshListDisp(v15, v65);
  ListViewManager__SortItem((ListViewManager_o *)v15, -1, 0, -1, 0LL);
  SupportServantEquipListViewManager__SetFilterButtonImage(v15, v66);
}


void __fastcall SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A57BC3 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    byte_4A57BC3 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


void __fastcall SupportServantEquipListViewManager__EndCloseSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListViewManager__EndCloseSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__EndConfirmMenu(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v12; // x0
  __int64 v13; // x1
  Il2CppClass *v14; // x8
  Il2CppType v15; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v22; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_4A57BD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BD2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_33227328(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_1B8880C(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields.currentCryptoKey;
  v29.fields._current = (Il2CppObject *)v28.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v29.fields._current;
    if ( v29.fields._current )
    {
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantEquipListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        klass = v29.fields._current[7].klass;
        if ( !klass )
          sub_1B8880C(v6, v7);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v28.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v27, 0LL);
        if ( v12 == this->fields.saveId )
        {
          v14 = current[7].klass;
          BYTE1(current[9].monitor) = 1;
          if ( !v14 )
            sub_1B8880C(v12, v13);
          v15 = v14->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->_1.name;
          *(Il2CppType *)&v28.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v28;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( !servantItemInfo )
            sub_1B8880C(v17, v17);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v17, v18);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_1B8880C(0LL, v19);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v20);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_1B8880C(0LL, v22);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v22);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v24);
  SupportServantEquipListViewManager__RefreshListDisp(this, v25);
}


void __fastcall SupportServantEquipListViewManager__EndSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A57BD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__);
    byte_4A57BD5 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A57BD9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__);
    byte_4A57BD9 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantEquipListViewManager__GetAmountSortValue(
        SupportServantEquipListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  __int64 v7; // x1
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A57BDC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BDC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v6 = 0LL;
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !v15.fields._current )
      goto LABEL_17;
    methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SupportServantEquipListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B88ACC(v15.fields._current);
LABEL_17:
      sub_1B8880C(current, v7);
    }
    klass = v15.fields._current[7].klass;
    if ( !klass )
      sub_1B8880C(v15.fields._current, SupportServantEquipListViewItem_TypeInfo);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


bool __fastcall SupportServantEquipListViewManager__GetFocusItemIndex(
        SupportServantEquipListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A57BE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SupportServantEquipListViewManager_o *)sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BE0 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      this = (SupportServantEquipListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)list,
                                                       v8,
                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SupportServantEquipListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( BYTE1(this->fields.listDragPrefab) )
        break;
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A57BC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BC9 = 1;
  }
  result = (SupportServantEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (SupportServantEquipListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall SupportServantEquipListViewManager__GetScaleButtonSpriteName(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall SupportServantEquipListViewManager__GetSelect(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57BCF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BCF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v9.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v9.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    if ( BYTE1(v9.fields._current[9].monitor) )
    {
      klass_high = HIDWORD(v9.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetSelectItem(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A57BD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BD0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v9.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    if ( BYTE1(v9.fields._current[9].monitor) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (SupportServantEquipListViewItem_o *)current;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapChoiceList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A57BDE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BDE = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 156) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapLockList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A57BDD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BDD = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 155) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= v23->max_length )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void __fastcall SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A57BC4 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_TypeInfo);
    byte_4A57BC4 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__ModifyList(
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
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v20; // q0
  UserServantEntity_o *v21; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-80h]

  if ( (byte_4A57BC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BC8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
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
      sub_1B88814(Instance, v5);
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
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
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_46;
          v17 = (SupportServantEquipListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (SupportServantEquipListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_46;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v20 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v34.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v32 = v34;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
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
                           v5);
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v27 = (ListViewItem_o *)Item;
          v28 = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v28
            && (SupportServantEquipListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              Instance = (DataManager_o *)v27->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0LL);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v25 )
          return;
      }
LABEL_46:
      sub_1B8880C(Instance, v5);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A57BD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    byte_4A57BD7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickDecide(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickEquipExplanation(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickFilterKind(
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

  if ( (byte_4A57BD4 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    byte_4A57BD4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_30500992(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListViewManager__OnClickSelectDetail(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSelectListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortAscendingOrder(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A57BDA & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    byte_4A57BDA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortKind(
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

  if ( (byte_4A57BD8 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnClickSortKind__);
    byte_4A57BD8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnLongPushListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int Index; // w0

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          2LL,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
    }
    sub_1B8880C(scrollView, obj);
  }
}


void __fastcall SupportServantEquipListViewManager__OnMoveEnd(
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
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A57BCE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57BCE = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__RefreshEquipped(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x19
  void *v7; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57BD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewObject_TypeInfo);
    byte_4A57BD3 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v14.fields._current;
    if ( v14.fields._current )
    {
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantEquipListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v14.fields._current[9].monitor) )
      {
        monitor = (UnityEngine_Object_o *)v14.fields._current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v7 = current[6].monitor;
          if ( v7
            && (v8 = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                *(unsigned __int8 *)(*(_QWORD *)v7 + 304LL) >= (unsigned int)v8) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * v8 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v9 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v9 = 0LL;
          }
          else
          {
            v9 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
          if ( v10 )
          {
            if ( !v9 )
              sub_1B8880C(v10, v11);
            SupportServantEquipListViewObject__Init_33350524((SupportServantEquipListViewObject_o *)v9, 4, v12);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57BCA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    byte_4A57BCA = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1B8880C(0LL, v5);
    ((void (*)(void))v6.fields._current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject(
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

  if ( (byte_4A57BCC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57BCC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      SupportServantEquipListViewObject__Init_33351676(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject_33350648(
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

  if ( (byte_4A57BCD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57BCD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      SupportServantEquipListViewObject__Init_33351760((SupportServantEquipListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void __fastcall SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A57BD6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A57BD6 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SupportServantEquipListViewManager__SetMode_33327124(this, mode, v6);
}


void __fastcall SupportServantEquipListViewManager__SetMode_33327124(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v6);
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    SupportServantEquipListViewManager__RequestListObject_33350648(this, mode + 1, v8);
}


void __fastcall SupportServantEquipListViewManager__SetMode_33350596(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SupportServantEquipListViewManager__SetMode_33327124(this, mode, v6);
}


void __fastcall SupportServantEquipListViewManager__SetObjectItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A57BCB & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_1B885B0(&SupportServantEquipListViewObject_TypeInfo);
    byte_4A57BCB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantEquipListViewObject__Init_33350524(
    (SupportServantEquipListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall SupportServantEquipListViewManager__SetSortButtonImage(
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

  if ( (byte_4A57BDB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A57BDB = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc(
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

  if ( (byte_4A57BBF & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_4A57BBF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SupportServantEquipListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc2(
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

  if ( (byte_4A57BC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57BC1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SupportServantEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  SupportServantEquipListViewManager_o *v5; // x19
  struct ListViewObject_o *viewObject; // x8
  SupportServantEquipListViewObject_c *v7; // x9
  __int64 methodPtr_low; // x10
  struct ListViewObject_o *v9; // x11
  int32_t v10; // w1
  ServantStatusBattleListViewItem_o *p_saveObj; // x0
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v14; // q1
  struct System_Int64_array *equipIdList; // x22
  const MethodInfo *v16; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v18; // x20
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  SupportServantEquipListViewManager_o *v21; // x22
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x21
  System_String_o *v24; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v25; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_4A57BD1 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListViewManager_EndConfirmMenu__);
    sub_1B885B0(&SupportServantEquipListViewObject_TypeInfo);
    this = (SupportServantEquipListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57BD1 = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject )
  {
    v7 = SupportServantEquipListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v9 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewObject_TypeInfo
         ? selectItem->fields.viewObject
         : 0LL;
    else
      v9 = 0LL;
    v5->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v9;
    p_saveObj = (ServantStatusBattleListViewItem_o *)&v5->fields.saveObj;
    if ( LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v10 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v7
          ? (int)viewObject
          : 0;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
    p_saveObj = (ServantStatusBattleListViewItem_o *)&v5->fields.saveObj;
    v5->fields.saveObj = 0LL;
  }
  sub_1B88554(p_saveObj, v10, (int32_t)method, v3);
  supportServantData = v5->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_34;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_34;
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                   &v26,
                                                   0LL);
  if ( !equipIdList )
    goto LABEL_34;
  max_length = equipIdList->max_length;
  if ( max_length >= 1 )
  {
    v18 = this;
    v19 = 0;
    while ( 1 )
    {
      if ( max_length == v19 )
        sub_1B88814(this, selectItem);
      if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v19] == this )
        break;
      if ( max_length == ++v19 )
        return;
    }
    if ( v19 != -1 )
    {
      this = (SupportServantEquipListViewManager_o *)v5->fields.supportServantData;
      if ( this )
      {
        this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                         (SupportServantData_o *)this,
                                                         v19,
                                                         v16);
        if ( v5->fields.supportServantData )
        {
          v21 = this;
          ClassName = SupportServantData__getClassName(v5->fields.supportServantData, v5->fields.classPos, v20);
          v5->fields.saveId = (int64_t)v18;
          v5->fields.savePos = v19;
          supportSelectConfirmMenu = v5->fields.supportSelectConfirmMenu;
          v24 = ClassName;
          v25 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)v5,
            Method_SupportServantEquipListViewManager_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open_33225920(supportSelectConfirmMenu, 5, v25, (System_String_o *)v21, v24, 0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1B8880C(this, selectItem);
    }
  }
}


SupportServantEquipServantItemDraw_o *__fastcall SupportServantEquipListViewManager__getServantItemDraw(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemDraw;
}


SupportServantEquipServantItem_o *__fastcall SupportServantEquipListViewManager__getServantItemInfo(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57BC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57BC6 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(
                                 (SupportServantEquipListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57BC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57BC5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


void __fastcall SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      4LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc(
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

  if ( (byte_4A57BC0 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_4A57BC0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SupportServantEquipListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc2(
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

  if ( (byte_4A57BC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57BC2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SupportServantEquipListViewManager__DeleteContinueData(v10);
}


void __fastcall SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57BDF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&SupportServantEquipListViewItem_TypeInfo);
    byte_4A57BDF = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v7.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    BYTE1(v7.fields._current[9].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__setCanLongPushFlag(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager_CallbackFunc___ctor(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CB454;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB3FC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantEquipListViewManager_CallbackFunc__BeginInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A57BE2 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SupportServantEquipListViewManager_ResultKind_TypeInfo);
    byte_4A57BE2 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             SupportServantEquipListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__Invoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}