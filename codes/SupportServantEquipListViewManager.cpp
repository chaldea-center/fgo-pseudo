void __fastcall SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418B2FF & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&SupportServantEquipListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_13170/*"SupportServantEquip"*/, v3);
    byte_418B2FF = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_13170/*"SupportServantEquip"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantEquipListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  SupportServantEquipListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  scaleType = this->fields.scaleType;
  v9 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_7:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v9->fields.scaleType,
        (this = (SupportServantEquipListViewManager_o *)v9->fields.sort) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  SupportServantEquipListViewManager__ModifyList(v9, 1, v13);
  SupportServantEquipListViewManager__SetMode_31647624(v9, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  SupportServantEquipListViewManager_o *v13; // x28
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Int32_array **v25; // x1
  SupportServantData_o **p_supportServantData; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  SupportServantEquipListViewManager_c *v33; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v35; // x1
  SupportServantEquipListViewManager_o **p_sort; // x27
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SupportServantEquipListViewManager_o *v43; // x8
  struct System_Int32_array *supportEquipFilterEventIdList; // x9
  BattleServantConfConponent_o *p_bonusEventIdList; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v55; // x20
  UserServantEntity_o *v56; // x20
  int64_t Equip; // x21
  SupportServantEquipServantItem_o *v58; // x22
  const MethodInfo *v59; // x3
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  UserServantEntity_array *ServantEquipList; // x22
  int32_t v70; // w20
  __int64 v71; // x8
  unsigned __int64 v72; // x28
  bool isFixEventDeck; // w26
  bool isFixMainDeck; // w27
  UserServantEntity_array *v75; // x19
  UserServantEntity_o *v76; // x20
  int64_t emptyMessageBase; // x23
  UserServantEntity_o *v78; // x24
  SupportServantEquipListViewManager_o *v79; // x22
  SupportServantEquipListViewItem_o *v80; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v83; // x8
  System_String_o *v84; // x21
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  __int64 v87; // x0
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-98h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-90h]
  SupportServantData_array *v90; // [xsp+48h] [xbp-88h]
  EventUpValSetupInfo_o *eventSetupInfoa; // [xsp+50h] [xbp-80h]
  SupportServantEquipListViewManager_o *v95; // [xsp+70h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v13 = this;
  if ( (byte_418B2E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v20);
    sub_B2C35C(&SupportServantEquipListViewManager_TypeInfo, v21);
    sub_B2C35C(&SupportServantEquipServantItem_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v23);
    this = (SupportServantEquipListViewManager_o *)sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v24);
    byte_418B2E6 = 1;
  }
  entity = 0LL;
  if ( !supportServantData )
    goto LABEL_57;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_58;
  v25 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v13->fields.supportServantData;
  v13->fields.supportServantData = (struct SupportServantData_o *)v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->fields.supportServantData,
    v25,
    *(System_String_array ***)&nowDeckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds);
  this = (SupportServantEquipListViewManager_o *)v13->fields.supportSelectConfirmMenu;
  v13->fields.classPos = classPos;
  v13->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_57;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0LL);
  v33 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v33 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = (System_Int32_array ***)v33->static_fields;
  v35 = *static_fields;
  v13->fields.sort = (struct ListViewSort_o *)*static_fields;
  p_sort = (SupportServantEquipListViewManager_o **)&v13->fields.sort;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.sort, v35, v27, v28, v29, v30, v31, v32);
  if ( !v13->fields.sort )
    goto LABEL_57;
  v13->fields.sort->fields.listViewKind = 1;
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_57;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v43 = *p_sort;
  if ( eventSetupInfo )
  {
    supportEquipFilterEventIdList = eventSetupInfo->fields.supportEquipFilterEventIdList;
    if ( !supportEquipFilterEventIdList || !v43 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v13->fields.bonusEventIdList;
    BYTE5(v43->fields.sortKindLabel) = supportEquipFilterEventIdList->max_length != 0;
    v46 = (System_Int32_array **)eventSetupInfo->fields.supportEquipFilterEventIdList;
    v13->fields.bonusEventIdList = (struct System_Int32_array *)v46;
  }
  else
  {
    if ( !v43 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v13->fields.bonusEventIdList;
    v46 = 0LL;
    BYTE5(v43->fields.sortKindLabel) = 0;
    v13->fields.bonusEventIdList = 0LL;
  }
  sub_B2C2F8(p_bonusEventIdList, v46, v37, v38, v39, v40, v41, v42);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_57;
  if ( BYTE5(this->fields.sortKindLabel) )
    ListViewSort__AlignBonusKind2((ListViewSort_o *)this, v13->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  this = (SupportServantEquipListViewManager_o *)v13->fields.bonusFilterKindButton;
  if ( !this
    || (this = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL),
        !*p_sort)
    || !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE5((*p_sort)->fields.sortKindLabel), 0LL),
        !*p_sort) )
  {
LABEL_57:
    sub_B2C434(this, supportServantData);
  }
  sortOrderButton = (unsigned int)(*p_sort)->fields.sortOrderButton;
  v13->fields.scaleType = sortOrderButton;
  if ( sortOrderButton < 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.normalSizeSeed;
  }
  else if ( sortOrderButton == 2 )
  {
    normalSizeSeed = (System_Int32_array **)v13->fields.smallSizeSeed;
  }
  else
  {
    if ( sortOrderButton != 3 )
      goto LABEL_31;
    normalSizeSeed = (System_Int32_array **)v13->fields.extremelySmallSizeSeed;
  }
  v13->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.seed, normalSizeSeed, v47, v48, v49, v50, v51, v52);
LABEL_31:
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  v55 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, 0LL);
  if ( !v55 )
    goto LABEL_57;
  v90 = supportServantData;
  eventSetupInfoa = eventSetupInfo;
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    v55,
    &entity,
    (int64_t)this,
    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_57;
  v56 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, 0LL);
  v58 = (SupportServantEquipServantItem_o *)sub_B2C42C(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v58, v56, Equip, v59);
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v13->fields.servantItemInfo;
  v13->fields.servantItemInfo = v58;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->fields.servantItemInfo,
    (System_Int32_array **)v58,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this = (SupportServantEquipListViewManager_o *)v13->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v13->fields.servantItemInfo,
    v67);
  this = (SupportServantEquipListViewManager_o *)v13->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, v68);
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  if ( !this )
    goto LABEL_57;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
  v95 = v13;
  ListViewManager__CreateList((ListViewManager_o *)v13, 0, 0LL);
  v70 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_57;
  v71 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v71 >= 1 )
  {
    m_Items = ServantEquipList->m_Items;
    v72 = 0LL;
    isFixEventDeck = (int)this >= 0;
    isFixMainDeck = v70 >= 0;
    while ( v72 < (unsigned int)v71 )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      v75 = ServantEquipList;
      v76 = m_Items[v72];
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       (const MethodInfo *)supportServantData);
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      emptyMessageBase = (int64_t)(*p_servantItemInfo)->fields.emptyMessageBase;
      v78 = entity;
      v79 = this;
      v80 = (SupportServantEquipListViewItem_o *)sub_B2C42C(SupportServantEquipListViewItem_TypeInfo);
      SupportServantEquipListViewItem___ctor(
        v80,
        v72,
        v76,
        (int64_t)v79,
        emptyMessageBase,
        equipIdList,
        v78,
        eventSetupInfoa,
        v90,
        nowDeckId,
        fixMainDeckIds,
        fixEventDeckIds,
        isFixMainDeck,
        isFixEventDeck,
        0LL);
      this = (SupportServantEquipListViewManager_o *)v95->fields.itemList;
      if ( !this )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v71) = v75->max_length;
      ++v72;
      ServantEquipList = v75;
      if ( (__int64)v72 >= (int)v71 )
        goto LABEL_48;
    }
LABEL_58:
    v87 = sub_B2C460(this);
    sub_B2C400(v87, 0LL);
  }
LABEL_48:
  itemList = v95->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  emptyMessageLabel = v95->fields.emptyMessageLabel;
  v83 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v84 = *v83;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v84, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_57;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  SupportServantEquipListViewManager__RefreshListDisp(v95, v85);
  ListViewManager__SortItem((ListViewManager_o *)v95, -1, 0, -1, 0LL);
  SupportServantEquipListViewManager__SetFilterButtonImage(v95, v86);
}


void __fastcall SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_418B2E2 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_TypeInfo, v1);
    byte_418B2E2 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B2C434(0LL, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *current; // x20
  __int64 v12; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v15; // x0
  __int64 v16; // x1
  Il2CppClass *v17; // x8
  Il2CppType v18; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v20; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v25; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_418B2F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, flag);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_418B2F1 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_28;
  SupportSelectConfirmMenu__Close_31152572(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B2C434(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)supportSelectConfirmMenu,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v34.fields.current = (Il2CppObject *)v33.fields.fakeValue;
  *(_OWORD *)&v34.fields.list = *(_OWORD *)&v33.fields.currentCryptoKey;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v27 )
      break;
    current = v34.fields.current;
    if ( v34.fields.current )
    {
      v12 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (SupportServantEquipListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v12 - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        klass = v34.fields.current[7].klass;
        if ( !klass )
          sub_B2C434(v27, v28);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v33.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v32 = v33;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v32, 0LL);
        if ( v15 == this->fields.saveId )
        {
          v17 = current[7].klass;
          BYTE1(current[9].monitor) = 1;
          if ( !v17 )
            sub_B2C434(v15, v16);
          v18 = v17->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
          *(Il2CppType *)&v33.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v31 = v33;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL);
          if ( !servantItemInfo )
            sub_B2C434(v20, v20);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v20, v21);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_B2C434(0LL, v22);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v23);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_B2C434(0LL, v25);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v25);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v29);
  SupportServantEquipListViewManager__RefreshListDisp(this, v30);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B2F4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__, v6);
    byte_418B2F4 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418B2F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__, v6);
    byte_418B2F8 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__,
    0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantSortSelectMenu(Instance, v8, 0LL);
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
  __int64 v13; // x9
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_418B2FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_418B2FB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v19;
  v11 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v20.fields.current;
    if ( !v20.fields.current )
      goto LABEL_17;
    v13 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (SupportServantEquipListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v13 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B2C728(v20.fields.current);
LABEL_17:
      sub_B2C434(current, v17);
    }
    klass = v20.fields.current[7].klass;
    if ( !klass )
      sub_B2C434(v20.fields.current, SupportServantEquipListViewItem_TypeInfo);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v21.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL) == svtId )
      ++v11;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_418B2E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v5);
    byte_418B2E8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (SupportServantEquipListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == SupportServantEquipListViewItem_TypeInfo )
    return (SupportServantEquipListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall SupportServantEquipListViewManager__GetScaleButtonSpriteName(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
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
  __int64 v9; // x1
  __int64 v10; // x11
  int32_t klass_high; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B2EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_418B2EE = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v14.fields.current
      || (v10 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10)
      || (SupportServantEquipListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v10 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B2C434(v8, v9);
    }
    if ( BYTE1(v14.fields.current[9].monitor) )
    {
      klass_high = HIDWORD(v14.fields.current[1].klass);
      v12 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v12 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
    return klass_high;
  else
    return -1;
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
  __int64 v9; // x1
  Il2CppObject *current; // x19
  __int64 v11; // x10
  char v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418B2EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_418B2EF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current
      || (v11 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (SupportServantEquipListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v11 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B2C434(v8, v9);
    }
    if ( BYTE1(v14.fields.current[9].monitor) )
    {
      v12 = 2;
      goto LABEL_12;
    }
  }
  v12 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v12 + 2) & 3) != 0 )
    return 0LL;
  else
    return (SupportServantEquipListViewItem_o *)current;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapChoiceList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B2FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v13);
    byte_418B2FD = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (SupportServantEquipListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && BYTE1(v27[1].fields.sortValue2) )
      {
        if ( BYTE4(v27[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  Il2CppType v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_418B2FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v13);
    byte_418B2FC = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (SupportServantEquipListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v27[1].klass;
      if ( klass && LOBYTE(v27[1].fields.sortValue2) )
      {
        if ( BYTE3(v27[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = klass->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


void __fastcall SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_418B2E3 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_TypeInfo, v1);
    byte_418B2E3 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B2C434(0LL, v1);
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
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v13; // x21
  signed __int64 size; // x27
  unsigned int v15; // w26
  int64_t v16; // x20
  __int64 v17; // x8
  UserServantEntity_o **v18; // x20
  __int64 v19; // t1
  __int128 v20; // q0
  int64_t v21; // x23
  unsigned __int64 v22; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x22
  SupportServantEquipListViewItem_o *v24; // x22
  __int64 v25; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q0
  UserServantEntity_o *v28; // x23
  int64_t EquipUserSvtId; // x0
  __int64 v30; // x0
  unsigned __int64 v31; // x22
  signed __int64 v32; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x20
  ListViewItem_o *v34; // x20
  __int64 v35; // x10
  UnityEngine_Object_o *viewObject; // x21
  int64_t v38; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-70h]

  if ( (byte_418B2E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v9);
    byte_418B2E7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_51;
  v13 = *(_QWORD *)(Instance + 24);
  if ( (int)v13 >= 1 )
  {
    size = itemList->fields._size;
    v15 = 0;
    v38 = Instance;
    while ( 1 )
    {
      v16 = Instance + 8LL * (int)v15;
      v19 = *(_QWORD *)(v16 + 32);
      v18 = (UserServantEntity_o **)(v16 + 32);
      v17 = v19;
      if ( !v19 )
        goto LABEL_51;
      v20 = *(_OWORD *)(v17 + 32);
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
      *(_OWORD *)&v41.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v40 = v41;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL);
      if ( (int)size >= 1 )
      {
        v21 = Instance;
        v22 = 0LL;
        while ( 1 )
        {
          v23 = this->fields.itemList;
          if ( !v23 )
            goto LABEL_51;
          if ( v22 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = (SupportServantEquipListViewItem_o *)v23->fields._items->m_Items[v22];
          if ( !v24 )
            goto LABEL_51;
          v25 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
            || (SupportServantEquipListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_51;
          }
          userSvtEntity = v24->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v41.fields.fakeValue = v27;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v39 = v41;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
            if ( Instance == v21 )
              break;
          }
          if ( (__int64)++v22 >= size )
            goto LABEL_32;
        }
        if ( v15 >= *(_DWORD *)(v38 + 24) )
        {
LABEL_34:
          v30 = sub_B2C460(Instance);
          sub_B2C400(v30, 0LL);
        }
        Instance = (int64_t)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_51;
        v28 = *v18;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           v11);
        SupportServantEquipListViewItem__ModifyItem(v24, v28, EquipUserSvtId, 0LL);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v24, 0LL);
          SupportServantEquipListViewItem__ModifyChoiceItem(v24, 0LL);
        }
      }
LABEL_32:
      if ( (int)++v15 >= (int)v13 )
        break;
      Instance = v38;
      if ( v15 >= *(_DWORD *)(v38 + 24) )
        goto LABEL_34;
    }
    if ( isIconSizeChange )
    {
      v31 = 0LL;
      v32 = (int)v13;
      while ( 1 )
      {
        v33 = this->fields.itemList;
        if ( !v33 )
          break;
        if ( v31 >= (unsigned int)v33->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v34 = v33->fields._items->m_Items[v31];
        if ( v34 )
        {
          v35 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
            && (SupportServantEquipListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            viewObject = (UnityEngine_Object_o *)v34->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (int64_t)v34->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v34, this->fields.seed, 0LL);
            }
          }
        }
        if ( (__int64)++v31 >= v32 )
          return;
      }
LABEL_51:
      sub_B2C434(Instance, v11);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_418B2F6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B2F6 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(0LL, v3);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickDecide(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickEquipExplanation(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B2F3 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__, v5);
    byte_418B2F3 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu_17978356(v8, 5, sort, (ListViewManager_o *)this, v9, -1, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSelectListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortAscendingOrder(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_418B2F9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B2F9 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B2C434(v3, v4);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B2F7 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_EndSelectSortKind__, v5);
    byte_418B2F7 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 4, sort, 0, v9, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnLongPushListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t Index; // w2

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
        return;
      }
    }
    sub_B2C434(scrollView, obj);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418B2ED & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B2ED = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
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
  Il2CppObject *current; // x26
  __int64 v11; // x10
  UnityEngine_Object_o *monitor; // x20
  void *v13; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B2F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v7);
    sub_B2C35C(&SupportServantEquipListViewObject_TypeInfo, v8);
    byte_418B2F2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v20.fields.current;
    if ( v20.fields.current )
    {
      v11 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (SupportServantEquipListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v11 - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v20.fields.current[9].monitor) )
      {
        monitor = (UnityEngine_Object_o *)v20.fields.current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v13 = current[6].monitor;
          if ( v13
            && (v14 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v13 + 300LL) >= (unsigned int)v14) )
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
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
          if ( v16 )
          {
            if ( !v15 )
              sub_B2C434(v16, v17);
            UnityEngine_Vector3__get_zero(0LL);
            if ( (byte_418B307 & 1) == 0 )
            {
              sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v18);
              byte_418B307 = 1;
            }
            SupportServantEquipListViewObject__SetupDisp((SupportServantEquipListViewObject_o *)v15, v18);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_SupportServantEquipListViewObject__o *ObjectList; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B2E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v5);
    byte_418B2E9 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = SupportServantEquipListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v8);
    ((void (*)(void))v9.fields.current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B2EB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B2EB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject_31647884(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B2EC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B2EC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
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

  if ( (byte_418B2F5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418B2F5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_31647624(this, mode, v10);
}


void __fastcall SupportServantEquipListViewManager__SetMode_31647624(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_15;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v6);
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_15:
    sub_B2C434(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  switch ( mode )
  {
    case 3:
      v9 = 4;
      goto LABEL_13;
    case 2:
      v9 = 3;
      goto LABEL_13;
    case 1:
      v9 = 2;
LABEL_13:
      SupportServantEquipListViewManager__RequestListObject_31647884(this, v9, v8);
      break;
  }
}


void __fastcall SupportServantEquipListViewManager__SetMode_31647828(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_31647624(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__SetObjectItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418B2EA & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_B2C35C(&SupportServantEquipListViewObject_TypeInfo, obj);
    byte_418B2EA = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  SupportServantEquipListViewObject__Init(
    (SupportServantEquipListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20

  if ( (byte_418B2FA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418B2FA = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_43;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_43;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v25 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B2C434(sort, v10);
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

  if ( (byte_418B2DE & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B2DE = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B2E0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B2E0 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  SupportServantEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v15; // x11
  System_Int32_array **v16; // x1
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v19; // q1
  struct System_Int64_array *equipIdList; // x22
  int max_length; // w8
  SupportServantEquipListViewManager_o *v22; // x20
  int32_t v23; // w21
  System_String_o *v24; // x22
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x21
  System_String_o *v27; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v28; // x23
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]

  v9 = this;
  if ( (byte_418B2F0 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, selectItem);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SupportServantEquipListViewManager_EndConfirmMenu__, v11);
    sub_B2C35C(&SupportServantEquipListViewObject_TypeInfo, v12);
    this = (SupportServantEquipListViewManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418B2F0 = 1;
  }
  if ( !selectItem )
    goto LABEL_28;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v15 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
  {
    v16 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[v15 - 1] == SupportServantEquipListViewObject_TypeInfo
        ? (System_Int32_array **)selectItem->fields.viewObject
        : 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v9->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.saveObj,
    v16,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  supportServantData = v9->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_28;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_28;
  v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v30 = v31;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                   &v30,
                                                   0LL);
  if ( !equipIdList )
    goto LABEL_28;
  max_length = equipIdList->max_length;
  if ( max_length < 1 )
    return;
  v22 = this;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)max_length )
    {
      v29 = sub_B2C460(this);
      sub_B2C400(v29, 0LL);
    }
    if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v23] == this )
      break;
    if ( ++v23 >= max_length )
      return;
  }
  this = (SupportServantEquipListViewManager_o *)v9->fields.supportServantData;
  if ( !this )
    goto LABEL_28;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                   (SupportServantData_o *)this,
                                                   v23,
                                                   0LL);
  if ( !v9->fields.supportServantData )
    goto LABEL_28;
  v24 = (System_String_o *)this;
  ClassName = SupportServantData__getClassName(v9->fields.supportServantData, v9->fields.classPos, 0LL);
  v9->fields.saveId = (int64_t)v22;
  v9->fields.savePos = v23;
  supportSelectConfirmMenu = v9->fields.supportSelectConfirmMenu;
  v27 = ClassName;
  v28 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B2C42C(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
  SupportSelectConfirmMenu_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_SupportServantEquipListViewManager_EndConfirmMenu__,
    0LL);
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B2C434(this, selectItem);
  SupportSelectConfirmMenu__Open_31150976(supportSelectConfirmMenu, 5, v28, v24, v27, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  SupportServantEquipListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B2E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B2E5 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (SupportServantEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v11;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B2E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B2E4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v11;
}


void __fastcall SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 4, Index, 0LL);
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

  if ( (byte_418B2DF & 1) == 0 )
  {
    sub_B2C35C(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B2DF = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B2E1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B2E1 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  Il2CppObject *current; // x8
  __int64 v9; // x11
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418B2FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&SupportServantEquipListViewItem_TypeInfo, v6);
    byte_418B2FE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current
      || (v9 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (SupportServantEquipListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v9 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B2C434(v10, v11);
    }
    if ( (SupportServantEquipListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[*(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2
                                                                                          + 1)
                                                                                        - 1] != SupportServantEquipListViewItem_TypeInfo )
      current = 0LL;
    BYTE1(current[9].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_41847DA & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SupportServantEquipListViewManager_ResultKind_TypeInfo, v9);
    byte_41847DA = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager_CallbackFunc__Invoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SupportServantEquipListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  SupportServantEquipListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantEquipListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}