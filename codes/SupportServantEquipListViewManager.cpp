void __fastcall SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8F0F & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, v1);
    sub_1B640C8(&SupportServantEquipListViewManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_13025/*"SupportServantEquip"*/, v4);
    byte_49F8F0F = 1;
  }
  v5 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v5, (System_String_o *)StringLiteral_13025/*"SupportServantEquip"*/, 3, 0, 0LL);
  SupportServantEquipListViewManager_TypeInfo->static_fields->sortStatus = v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SupportServantEquipListViewManager_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  SupportServantEquipListViewManager__ModifyList(this, 1, v10);
  SupportServantEquipListViewManager__SetMode_33061424(this, 2, v11);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  SupportServantData_o *v27; // x1
  SupportServantData_o **p_supportServantData; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  SupportServantEquipListViewManager_c *v31; // x0
  struct SupportServantEquipListViewManager_StaticFields *static_fields; // x8
  struct ListViewSort_o *sortStatus; // x1
  SupportServantEquipListViewManager_o **p_sort; // x26
  int32_t v35; // w2
  int32_t v36; // w3
  ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct ListViewSort_o *sort; // x19
  int32_t v41; // w2
  int32_t v42; // w3
  unsigned int sortKindButton; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v45; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x26
  const MethodInfo *v47; // x2
  Il2CppObject *v48; // x26
  int64_t Equip; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  SupportServantEquipServantItem_o *v52; // x27
  const MethodInfo *v53; // x3
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  System_Int64_array *equipIdList; // x25
  UserServantEntity_array *ServantEquipList; // x26
  __int64 v61; // x8
  unsigned __int64 v62; // x21
  UserServantEntity_o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  int64_t indicator; // x28
  Il2CppObject *v67; // x19
  SupportServantEquipListViewManager_o *v68; // x27
  SupportServantEquipListViewItem_o *v69; // x22
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v75; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v78; // x8
  System_String_o *v79; // x21
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  SupportServantData_array *v82; // [xsp+0h] [xbp-B0h]
  int32_t v83; // [xsp+8h] [xbp-A8h]
  System_Int32_array *v84; // [xsp+10h] [xbp-A0h]
  System_Int32_array *v85; // [xsp+18h] [xbp-98h]
  const MethodInfo *v86; // [xsp+30h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  v15 = this;
  if ( (byte_49F8EF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v22);
    sub_1B640C8(&SupportServantEquipListViewManager_TypeInfo, v23);
    sub_1B640C8(&SupportServantEquipServantItem_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/, v25);
    this = (SupportServantEquipListViewManager_o *)sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v26);
    byte_49F8EF6 = 1;
  }
  entity = 0LL;
  if ( !supportServantData )
    goto LABEL_55;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_56;
  v27 = supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v15->fields.supportServantData;
  v15->fields.supportServantData = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.supportServantData, (int32_t)v27, nowDeckNum, classPos);
  this = (SupportServantEquipListViewManager_o *)v15->fields.supportSelectConfirmMenu;
  v15->fields.classPos = classPos;
  v15->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_55;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0LL);
  v31 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v31 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = v31->static_fields;
  sortStatus = static_fields->sortStatus;
  v15->fields.sort = static_fields->sortStatus;
  p_sort = (SupportServantEquipListViewManager_o **)&v15->fields.sort;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.sort, (int32_t)sortStatus, v29, v30);
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v15->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v38,
      v39);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.alignedBonusFilterInfos, 0, v35, v36);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.seed, (int32_t)normalSizeSeed, v41, v42);
LABEL_26:
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, v45);
  if ( !v46 )
    goto LABEL_55;
  DataMasterBase_object__object__long___TryGetEntity(
    v46,
    &entity,
    (int64_t)this,
    (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_55;
  v48 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v47);
  v52 = (SupportServantEquipServantItem_o *)sub_1B64314(SupportServantEquipServantItem_TypeInfo, v50, v51);
  SupportServantEquipServantItem___ctor(v52, (UserServantEntity_o *)v48, Equip, v53);
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v15->fields.servantItemInfo;
  v15->fields.servantItemInfo = v52;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.servantItemInfo, (int32_t)v52, v55, v56);
  this = (SupportServantEquipListViewManager_o *)v15->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v15->fields.servantItemInfo,
    v57);
  this = (SupportServantEquipListViewManager_o *)v15->fields.servantItemDraw;
  if ( !this )
    goto LABEL_55;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, v58);
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_55;
  if ( !this )
    goto LABEL_55;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v15, 0, 0LL);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_55;
  v61 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    while ( v62 < (unsigned int)v61 )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      v63 = ServantEquipList->m_Items[v62];
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       (const MethodInfo *)supportServantData);
      if ( !*p_servantItemInfo )
        goto LABEL_55;
      indicator = (int64_t)(*p_servantItemInfo)->fields.indicator;
      v67 = entity;
      v68 = this;
      v69 = (SupportServantEquipListViewItem_o *)sub_1B64314(SupportServantEquipListViewItem_TypeInfo, v64, v65);
      SupportServantEquipListViewItem___ctor(
        v69,
        v62,
        v63,
        (int64_t)v68,
        indicator,
        equipIdList,
        (UserServantEntity_o *)v67,
        eventSetupInfo,
        v82,
        v83,
        v84,
        v85,
        0,
        0,
        v86);
      this = (SupportServantEquipListViewManager_o *)v15->fields.itemList;
      if ( !this )
        goto LABEL_55;
      v72 = *(_QWORD *)&this->fields.m_CachedPtr;
      v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v72 )
        goto LABEL_55;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v72 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v69,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = v72 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v75 + 32) = v69;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v69, v70, v71);
      }
      LODWORD(v61) = ServantEquipList->max_length;
      if ( (__int64)++v62 >= (int)v61 )
        goto LABEL_47;
    }
LABEL_56:
    sub_1B6432C(this, supportServantData);
  }
LABEL_47:
  itemList = v15->fields.itemList;
  if ( !itemList )
    goto LABEL_55;
  emptyMessageLabel = v15->fields.emptyMessageLabel;
  v78 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v79 = *v78;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v79, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_1B64324(this);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  SupportServantEquipListViewManager__RefreshListDisp(v15, v80);
  ListViewManager__SortItem((ListViewManager_o *)v15, -1, 0, -1, 0LL);
  SupportServantEquipListViewManager__SetFilterButtonImage(v15, v81);
}


void __fastcall SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49F8EF2 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_TypeInfo, v1);
    byte_49F8EF2 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B64324(0LL);
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64324(0LL);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v4, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  _BOOL8 v11; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v16; // x0
  Il2CppClass *v17; // x8
  Il2CppType v18; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v20; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v24; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_49F8F01 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, flag);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_49F8F01 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_32961628(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_1B64324(supportSelectConfirmMenu);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
  v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v31.fields._current;
    if ( v31.fields._current )
    {
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantEquipListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        klass = v31.fields._current[7].klass;
        if ( !klass )
          sub_1B64324(v11);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v30;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL);
        if ( v16 == this->fields.saveId )
        {
          v17 = current[7].klass;
          BYTE1(current[9].monitor) = 1;
          if ( !v17 )
            sub_1B64324(v16);
          v18 = v17->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
          *(Il2CppType *)&v30.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v28 = v30;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v28, 0LL);
          if ( !servantItemInfo )
            sub_1B64324(v20);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v20, v21);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_1B64324(0LL);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v22);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_1B64324(0LL);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v24);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v26);
  SupportServantEquipListViewManager__RefreshListDisp(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__EndSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49F8F04 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__, v6);
    byte_49F8F04 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49F8F08 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__, v6);
    byte_49F8F08 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__,
    0LL);
  if ( !Instance )
    sub_1B64324(v11);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantEquipListViewManager__GetAmountSortValue(
        SupportServantEquipListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v11; // x19
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49F8F0B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_49F8F0B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v11 = 0LL;
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !v19.fields._current )
      goto LABEL_17;
    methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SupportServantEquipListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B645E4(v19.fields._current);
LABEL_17:
      sub_1B64324(current);
    }
    klass = v19.fields._current[7].klass;
    if ( !klass )
      sub_1B64324(v19.fields._current);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v20.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL) == svtId )
      ++v11;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportServantEquipListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F8EF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v5);
    byte_49F8EF8 = 1;
  }
  result = (SupportServantEquipListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SupportServantEquipListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(0LL);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall SupportServantEquipListViewManager__GetSelect(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8EFE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_49F8EFE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B64324(v8);
    }
    if ( BYTE1(v12.fields._current[9].monitor) )
    {
      klass_high = HIDWORD(v12.fields._current[1].klass);
      goto LABEL_12;
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetSelectItem(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F8EFF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_49F8EFF = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v12.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B64324(v8);
    }
    if ( BYTE1(v12.fields._current[9].monitor) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (SupportServantEquipListViewItem_o *)current;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapChoiceList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49F8F0D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v14);
    byte_49F8F0D = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 185) )
      {
        if ( *(_BYTE *)(itemList + 156) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v46 = unchoiceList;
    v45 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unchoiceList = v42;
    v46 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x10
  __int64 v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_long__o *v37; // x0
  int v38; // w21
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  System_Int64_array **v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]

  if ( (byte_49F8F0C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v14);
    byte_49F8F0C = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(SupportServantEquipListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != SupportServantEquipListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 184) )
      {
        if ( *(_BYTE *)(itemList + 155) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v49 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
          if ( !v18 )
            goto LABEL_37;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v18->fields._size;
          v30 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v37,
              v30,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_28;
          }
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
        }
        else
        {
          v32 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v50.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v50;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v33 = v15->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v33 )
            goto LABEL_37;
          v35 = v15->fields._size;
          v30 = itemList;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v36 = v34[4];
            v37 = v15;
            goto LABEL_27;
          }
          v31 = &v33->obj.klass + v35;
          v15->fields._size = v35 + 1;
        }
        v31[4] = (Il2CppClass *)v30;
      }
LABEL_28:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v18 )
LABEL_37:
    sub_1B64324(itemList);
  v38 = v18->fields._size + v15->fields._size;
  if ( v38 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v46 = unlockList;
    v45 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v45 = (int)v42;
    *unlockList = v42;
    v46 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v46, v45, v43, v44);
  return v38 > 0;
}


void __fastcall SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49F8EF3 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_TypeInfo, v1);
    byte_49F8EF3 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B64324(0LL);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__ModifyList(
        SupportServantEquipListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  DataManager_o *v13; // x21
  int size; // w29
  unsigned int v15; // w28
  DataManager_c **v16; // x25
  DataManager_c *v17; // x8
  UserServantEntity_o **v18; // x25
  DataManager_c *v19; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v21; // x23
  int32_t v22; // w24
  SupportServantEquipListViewItem_o *v23; // x22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v26; // q0
  UserServantEntity_o *v27; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  int32_t v31; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v33; // x21
  __int64 v34; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-80h]

  if ( (byte_49F8EF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_49F8EF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  v13 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    if ( !(_DWORD)m_CancellationTokenSource )
LABEL_31:
      sub_1B6432C(Instance, v11);
    size = itemList->fields._size;
    v15 = 0;
    while ( 1 )
    {
      v16 = &v13->klass + (int)v15;
      v19 = v16[4];
      v18 = (UserServantEntity_o **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        goto LABEL_46;
      byval_arg = v17->_1.byval_arg;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
      *(Il2CppType *)&v40.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v40;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
      if ( size >= 1 )
      {
        v21 = Instance;
        v22 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_46;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v22,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !Instance )
            goto LABEL_46;
          v23 = (SupportServantEquipListViewItem_o *)Instance;
          methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (SupportServantEquipListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_46;
          }
          masterLoadThreads = Instance->fields.masterLoadThreads;
          if ( masterLoadThreads )
          {
            v26 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
            *(_OWORD *)&v40.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v38 = v40;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v38, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( size == ++v22 )
            goto LABEL_29;
        }
        if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
          goto LABEL_31;
        Instance = (DataManager_o *)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_46;
        v27 = *v18;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           v11);
        SupportServantEquipListViewItem__ModifyItem(v23, v27, EquipUserSvtId, v29);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v23, v11);
          SupportServantEquipListViewItem__ModifyChoiceItem(v23, v30);
        }
      }
LABEL_29:
      if ( ++v15 == (_DWORD)m_CancellationTokenSource )
        break;
      if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
        goto LABEL_31;
    }
    if ( (int)m_CancellationTokenSource >= 1 && isIconSizeChange )
    {
      v31 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v31,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v33 = (ListViewItem_o *)Item;
          v34 = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v34
            && (SupportServantEquipListViewItem_c *)Item->klass->_2.typeHierarchy[v34 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              Instance = (DataManager_o *)v33->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0LL);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v31 )
          return;
      }
LABEL_46:
      sub_1B64324(Instance);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_49F8F06 & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__, method);
    byte_49F8F06 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49F8F03 & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__, v4);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnClickFilterKind__, v5);
    byte_49F8F03 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SupportServantEquipListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantFilterSelectMenu_30352028(v10, 5, sort, (ListViewManager_o *)this, v13, -1, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v6);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_49F8F09 & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__, method);
    byte_49F8F09 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49F8F07 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_EndSelectSortKind__, v4);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnClickSortKind__, v5);
    byte_49F8F07 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_SupportServantEquipListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_SupportServantEquipListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SupportServantEquipListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v11, v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64324(v14);
    CommonUI__OpenServantSortSelectMenu(v10, 4, sort, 0, v13, 0LL);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v7, v8);
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
    sub_1B64324(scrollView);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F8EFD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8EFD = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x25
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x19
  void *v13; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x19
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F8F02 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v7);
    sub_1B640C8(&SupportServantEquipListViewObject_TypeInfo, v8);
    byte_49F8F02 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v19.fields._current;
    if ( v19.fields._current )
    {
      methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantEquipListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v19.fields._current[9].monitor) )
      {
        monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v13 = current[6].monitor;
          if ( v13
            && (v14 = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                *(unsigned __int8 *)(*(_QWORD *)v13 + 304LL) >= (unsigned int)v14) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * v14 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v15 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v15 = 0LL;
          }
          else
          {
            v15 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
          if ( v16 )
          {
            if ( !v15 )
              sub_1B64324(v16);
            SupportServantEquipListViewObject__Init_33084824((SupportServantEquipListViewObject_o *)v15, 4, v17);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8EF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v5);
    byte_49F8EF9 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    ObjectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1B64324(0LL);
    ((void (*)(void))v7.fields._current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8EFB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F8EFB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      SupportServantEquipListViewObject__Init_33085976(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v19,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject_33084948(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8EFC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F8EFC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      SupportServantEquipListViewObject__Init_33086060((SupportServantEquipListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void __fastcall SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49F8F05 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49F8F05 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SupportServantEquipListViewManager__SetMode_33061424(this, mode, v6);
}


void __fastcall SupportServantEquipListViewManager__SetMode_33061424(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v5);
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
    sub_1B64324(servantItemDraw);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    SupportServantEquipListViewManager__RequestListObject_33084948(this, mode + 1, v7);
}


void __fastcall SupportServantEquipListViewManager__SetMode_33084896(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SupportServantEquipListViewManager__SetMode_33061424(this, mode, v6);
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
  if ( (byte_49F8EFA & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_1B640C8(&SupportServantEquipListViewObject_TypeInfo, obj);
    byte_49F8EFA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SupportServantEquipListViewObject__Init_33084824(
    (SupportServantEquipListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall SupportServantEquipListViewManager__SetSortButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49F8F0A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49F8F0A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_40;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_40;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B64324(sort);
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

  if ( (byte_49F8EEE & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F8EEE = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F8EF0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8EF0 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  SupportServantEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  int32_t v3; // w3
  SupportServantEquipListViewManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewObject_o *viewObject; // x8
  SupportServantEquipListViewObject_c *v11; // x9
  __int64 methodPtr_low; // x10
  struct ListViewObject_o *v13; // x11
  int32_t v14; // w1
  ServantStatusBattleListViewItem_o *p_saveObj; // x0
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v18; // q1
  struct System_Int64_array *equipIdList; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v23; // x20
  int32_t v24; // w21
  const MethodInfo *v25; // x2
  SupportServantEquipListViewManager_o *v26; // x22
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x21
  System_String_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v32; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_49F8F00 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, selectItem);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&Method_SupportServantEquipListViewManager_EndConfirmMenu__, v7);
    sub_1B640C8(&SupportServantEquipListViewObject_TypeInfo, v8);
    this = (SupportServantEquipListViewManager_o *)sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F8F00 = 1;
  }
  if ( !selectItem )
    goto LABEL_34;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject )
  {
    v11 = SupportServantEquipListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(SupportServantEquipListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v13 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantEquipListViewObject_TypeInfo
          ? selectItem->fields.viewObject
          : 0LL;
    else
      v13 = 0LL;
    v5->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v13;
    p_saveObj = (ServantStatusBattleListViewItem_o *)&v5->fields.saveObj;
    if ( LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      v14 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v11
          ? (int)viewObject
          : 0;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
    p_saveObj = (ServantStatusBattleListViewItem_o *)&v5->fields.saveObj;
    v5->fields.saveObj = 0LL;
  }
  sub_1B6406C(p_saveObj, v14, (int32_t)method, v3);
  supportServantData = v5->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_34;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_34;
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v34;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                   &v33,
                                                   0LL);
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
        sub_1B6432C(this, v20);
      if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v24] == this )
        break;
      if ( max_length == ++v24 )
        return;
    }
    if ( v24 != -1 )
    {
      this = (SupportServantEquipListViewManager_o *)v5->fields.supportServantData;
      if ( this )
      {
        this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                         (SupportServantData_o *)this,
                                                         v24,
                                                         v21);
        if ( v5->fields.supportServantData )
        {
          v26 = this;
          ClassName = SupportServantData__getClassName(v5->fields.supportServantData, v5->fields.classPos, v25);
          v5->fields.saveId = (int64_t)v23;
          v5->fields.savePos = v24;
          supportSelectConfirmMenu = v5->fields.supportSelectConfirmMenu;
          v29 = ClassName;
          v32 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                             SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                             v30,
                                                             v31);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v32,
            (Il2CppObject *)v5,
            Method_SupportServantEquipListViewManager_EndConfirmMenu__,
            0LL);
          if ( supportSelectConfirmMenu )
          {
            SupportSelectConfirmMenu__Open_32960220(supportSelectConfirmMenu, 5, v32, (System_String_o *)v26, v29, 0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F8EF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8EF5 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(
                                 (SupportServantEquipListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v12;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F8EF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8EF4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v12;
}


void __fastcall SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v6);
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

  if ( (byte_49F8EEF & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F8EEF = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F8EF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F8EF1 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  SupportServantEquipListViewManager__DeleteContinueData(v10);
}


void __fastcall SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8F0E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B640C8(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_49F8F0E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current
      || (methodPtr_low = LOBYTE(SupportServantEquipListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v10.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (SupportServantEquipListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_1B64324(v8);
    }
    BYTE1(v10.fields._current[9].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A8C60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8C08;
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F8F10 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&SupportServantEquipListViewManager_ResultKind_TypeInfo, v9);
    byte_49F8F10 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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