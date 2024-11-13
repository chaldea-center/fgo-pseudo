void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  int64_t v15; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ListViewSort_o *v22; // x20
  struct ServantOperationListViewManager_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *v30; // x19
  System_String_o *v31; // x0
  System_String_o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ListViewSort_o *v36; // x20
  struct ServantOperationListViewManager_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ListViewSort_o *v48; // x20
  struct ServantOperationListViewManager_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int v56; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B125DB & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1489/*"4"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12798/*"ServantOperation"*/, v12, v13);
    byte_4B125DB = 1;
  }
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  v15 = StringLiteral_12798/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12798/*"ServantOperation"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SORT_SAVE_KEY, v15, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 1;
  v17 = System_Int32__ToString((int32_t)&v56, 0LL);
  v18 = System_String__Concat_62401220(SORT_SAVE_KEY, v17, 0LL);
  v22 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v19, v20, v21);
  ListViewSort___ctor_41480716(v22, v18, 3, 0, 0LL);
  v23 = ServantOperationListViewManager_TypeInfo->static_fields;
  v23->servantSortInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->servantSortInfo, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 2;
  v31 = System_Int32__ToString((int32_t)&v56, 0LL);
  v32 = System_String__Concat_62401220(v30, v31, 0LL);
  v36 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v33, v34, v35);
  ListViewSort___ctor_41480716(v36, v32, 3, 0, 0LL);
  v37 = ServantOperationListViewManager_TypeInfo->static_fields;
  v37->servantEquipSortInfo = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->servantEquipSortInfo, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_62401220(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1489/*"4"*/,
          0LL);
  v48 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v45, v46, v47);
  ListViewSort___ctor_41480716(v48, v44, 2, 0, 0LL);
  v49 = ServantOperationListViewManager_TypeInfo->static_fields;
  v49->commandCodeSortInfo = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->commandCodeSortInfo, (int64_t)v48, v50, v51, v52, v53, v54, v55);
}


void __fastcall ServantOperationListViewManager___ctor(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantOperationListViewManager__CallOnSelectServant(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_ServantOperationListViewItem__o *onSelectServant; // x20
  PartyOrganizationUtility_o *p_onSelectServant; // x0

  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    p_onSelectServant = (PartyOrganizationUtility_o *)&this->fields.onSelectServant;
    p_onSelectServant->klass = 0LL;
    sub_1BCA784(p_onSelectServant, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ServantOperationListViewItem_o *, _QWORD))onSelectServant->fields.m_target)(
      onSelectServant->fields.original_method_info,
      item,
      *(_QWORD *)&onSelectServant->fields.extra_arg);
  }
}


void __fastcall ServantOperationListViewManager__CallRequestEnd(
        ServantOperationListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_bool__o *onRequestEnd; // x20
  PartyOrganizationUtility_o *p_onRequestEnd; // x0

  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    p_onRequestEnd = (PartyOrganizationUtility_o *)&this->fields.onRequestEnd;
    p_onRequestEnd->klass = 0LL;
    sub_1BCA784(p_onRequestEnd, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))onRequestEnd->fields.m_target)(
      onRequestEnd->fields.original_method_info,
      result,
      *(_QWORD *)&onRequestEnd->fields.extra_arg);
  }
}


void __fastcall ServantOperationListViewManager__CancelDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v6; // w20
  int32_t v7; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v6 = this->fields.dragStartIndex;
    else
      v6 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v7 = this->fields.dragEndIndex;
    else
      v7 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__CancelDragSelect(this, v6++, v2);
    while ( v6 <= v7 );
  }
  ServantOperationListViewManager__RefrashListDisp(this, method);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B125DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v5, v6);
    byte_4B125DA = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
  HIDWORD(itemSortList[6].monitor) = -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ChangeSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        bool isPlus,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8
  ServantEntity_o *servantEntity; // x0
  int v9; // w9

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  if ( sort->fields.listViewKind )
    return;
  if ( !item )
LABEL_12:
    sub_1BCAA3C(this, isPlus);
  servantEntity = item->fields.servantEntity;
  if ( (!servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0LL)) && !item->fields.attribute )
  {
    if ( isPlus )
      v9 = 1;
    else
      v9 = -1;
    this->fields.sellEnableRestCnt += v9;
  }
}


void __fastcall ServantOperationListViewManager__ChangeSortKindDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
    this,
    this->klass->vtable._6_GetFocusItemIndex.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CreateList(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int32_t modeKind,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  const MethodInfo *v8; // x2
  System_String_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct ListViewSort_o *sort; // x8
  ServantOperationListViewManager_o *v13; // x0
  const MethodInfo *v14; // x2
  ServantOperationListViewManager_o *UserServantEntities; // x22
  const MethodInfo *v16; // x2
  UserCommandCodeEntity_array *UserCommandCodeEntities; // x23
  const MethodInfo *v18; // x3
  UserGameEntity_o *v19; // x2
  const MethodInfo *v20; // x3
  ServantOperationListViewManager_o *v21; // x0
  UILabel_o *emptyMessageLabel; // x21
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  System_String_o *EmptyMessageCode; // x20
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1

  if ( (byte_4B1259D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&modeKind);
    byte_4B1259D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ServantOperationListViewManager__SetListViewSort(this, kind, v8);
  sort = this->fields.sort;
  this->fields.kind = kind;
  this->fields.modeKind = modeKind;
  if ( !sort )
    goto LABEL_8;
  this->fields.scaleType = sort->fields.iconScaleKind;
  ServantOperationListViewManager__SetScaleKind(this, v10, v11);
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  *(_QWORD *)&this->fields.dragSelectSum = 0LL;
  *(_QWORD *)&this->fields.dragStartIndex = -1LL;
  this->fields.isDragSelect = 1;
  UserServantEntities = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetUserServantEntities(
                                                               v13,
                                                               kind,
                                                               v14);
  UserCommandCodeEntities = ServantOperationListViewManager__GetUserCommandCodeEntities(UserServantEntities, kind, v16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  LODWORD(UserServantEntities) = ServantOperationListViewManager__SetSellEnableRestCount(
                                   this,
                                   (UserServantEntity_array *)UserServantEntities,
                                   SelfUserGame,
                                   v18);
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_33324132(
                                               this,
                                               UserCommandCodeEntities,
                                               v19,
                                               v20);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  EmptyMessageCode = ServantOperationListViewManager__GetEmptyMessageCode(
                       v21,
                       kind,
                       (int)v21 + (int)UserServantEntities > 0,
                       v23);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v9 = LocalizationManager__Get(EmptyMessageCode, 0LL);
  if ( !emptyMessageLabel )
LABEL_8:
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(emptyMessageLabel, v9, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, this->fields.modeKind, v26);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantOperationListViewManager__SetFilterButtonImage(this, v27);
  this->fields.isInConfirm = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__DecideDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x20
  __int64 methodPtr_low; // x9
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B125D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v5, v6);
    byte_4B125D9 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v10 = Item;
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, v9);
    sub_1BCAA3C(v12, v13);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_1BCACFC(Item);
    goto LABEL_9;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, (ServantOperationListViewItem_o *)Item, v9);
  HIDWORD(v10[15].monitor) = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantOperationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B12599 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v1, v2);
    byte_4B12599 = 1;
  }
  v3 = ServantOperationListViewManager_TypeInfo;
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v1);
    v3 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall ServantOperationListViewManager__DestroyList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall ServantOperationListViewManager__EndCardFavoriteRequest(
        ServantOperationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  ServantOperationListViewManager__ModifyPushedServant(this, (const MethodInfo *)result);
  ServantOperationListViewManager__ModifyList(this, 0, v4);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndClickTabChoice(
        ServantOperationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  parentManager = this->fields.parentManager;
  if ( !parentManager )
    sub_1BCAA3C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndClickTabLock(
        ServantOperationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  parentManager = this->fields.parentManager;
  if ( !parentManager )
    sub_1BCAA3C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndClickTabPush(
        ServantOperationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  parentManager = this->fields.parentManager;
  if ( !parentManager )
    sub_1BCAA3C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v7);
}


void __fastcall ServantOperationListViewManager__EndClickTabStatus(
        ServantOperationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  ServantOperationListViewManager__SetStatusKind(this, 0, method);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    sub_1BCAA3C(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ServantOperationListViewManager___c_c *v16; // x8
  CommonUI_o *v17; // x19
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v19; // x21
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B125C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v7, v8);
    sub_1BCA7E0(&ServantOperationListViewManager___c_TypeInfo, v9, v10);
    byte_4B125C7 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = ServantOperationListViewManager___c_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo, v13);
    v16 = ServantOperationListViewManager___c_TypeInfo;
  }
  _9__106_0 = v16->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = ServantOperationListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      _9__106_0,
      v19,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = _9__106_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v17 )
    sub_1BCAA3C(Instance, v13);
  CommonUI__CloseServantFilterSelectMenu(v17, _9__106_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B125C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B125C4 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall ServantOperationListViewManager__EndStatusSync(
        ServantOperationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantOperationListViewManager__CallRequestEnd(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v10; // x21
  int32_t v11; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v14; // x8

  if ( (byte_4B125CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v7, v8);
    byte_4B125CA = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
  v10 = 0LL;
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v11;
        v14 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v14[3].monitor) == svtId )
          ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v10; // x21
  int32_t v11; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v14; // x8

  if ( (byte_4B125CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v7, v8);
    byte_4B125CB = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&commandCodeId);
  v10 = 0LL;
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v11;
        v14 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v14[3].fields._syncRoot) == commandCodeId )
          ++v10;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v10;
}


int32_t __fastcall ServantOperationListViewManager__GetDragEndIndex(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  if ( (start & 0x80000000) != 0 )
    return -1;
  if ( start <= end )
    return end;
  return start;
}


bool __fastcall ServantOperationListViewManager__GetDragSelect(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int32_t __fastcall ServantOperationListViewManager__GetDragStartIndex(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  if ( (start & 0x80000000) != 0 )
    return -1;
  if ( start <= end )
    return start;
  return end;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewManager__GetEmptyMessageCode(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isNotEmpty,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 *v14; // x8

  if ( (byte_4B125A1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, *(_QWORD *)&kind, isNotEmpty);
    sub_1BCA7E0(&StringLiteral_3751/*"COMMAND_CODE_EMPTY"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11673/*"SERVANT_ALL_EMPTY"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B125A1 = 1;
  }
  if ( isNotEmpty )
  {
    v14 = &StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v14 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v14 = off_455AC68[kind];
  }
  return (System_String_o *)*v14;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  int64_t itemList; // x0
  int32_t v18; // w21
  int64_t v19; // x22
  __int64 methodPtr_low; // x10
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B125BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v13, v14);
    byte_4B125BA = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1BCAA3C(itemList, v16);
  v18 = 0;
  while ( v18 < *(_DWORD *)(itemList + 24) )
  {
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v18,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v19 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    itemList = ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( (itemList & 1) != 0 && (*(_BYTE *)(v19 + 188) || *(_BYTE *)(v19 + 190) || *(_BYTE *)(v19 + 203)) )
    {
      if ( !v15 )
        goto LABEL_19;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v19,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v19, v21, v22, v23, v24, v25, v26);
      }
    }
    itemList = (int64_t)this->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v15;
}


bool __fastcall ServantOperationListViewManager__GetIsSelected(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int32_t modeKind,
        const MethodInfo *method)
{
  if ( modeKind == 2 )
  {
    if ( item )
      return item->fields._IsChoice_k__BackingField;
LABEL_9:
    sub_1BCAA3C(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsLock_k__BackingField;
    goto LABEL_9;
  }
  return 0;
}


bool __fastcall ServantOperationListViewManager__GetIsSwap(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int32_t modeKind,
        const MethodInfo *method)
{
  if ( modeKind == 2 )
  {
    if ( item )
      return item->fields._IsSwapChoice_k__BackingField;
LABEL_9:
    sub_1BCAA3C(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsSwapLock_k__BackingField;
    goto LABEL_9;
  }
  return 0;
}


int32_t __fastcall ServantOperationListViewManager__GetKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.kind;
}


ListViewManager_o *__fastcall ServantOperationListViewManager__GetListViewManagerForServantFilterSelectMenu(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (unsigned int)(kind - 1) >= 2 )
    return 0LL;
  return (ListViewManager_o *)this;
}


int32_t __fastcall ServantOperationListViewManager__GetMenuKind(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w8
  int32_t v4; // w9

  v3 = this->fields.kind;
  if ( v3 == 1 )
    v4 = 2;
  else
    v4 = 1;
  if ( v3 == 2 )
    return 6;
  else
    return v4;
}


int32_t __fastcall ServantOperationListViewManager__GetModeKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  int64_t itemList; // x0
  int32_t v18; // w21
  int64_t v19; // x22
  __int64 methodPtr_low; // x10
  ServantEntity_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B125BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v13, v14);
    byte_4B125BB = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1BCAA3C(itemList, v16);
  v18 = 0;
  while ( v18 < *(_DWORD *)(itemList + 24) )
  {
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v18,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v19 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      v21 = *(ServantEntity_o **)(v19 + 120);
      if ( v21 )
      {
        itemList = ServantEntity__get_IsServant(v21, 0LL);
        if ( (itemList & 1) != 0 && (*(_BYTE *)(v19 + 195) || *(_BYTE *)(v19 + 196)) )
        {
          if ( !v15 )
            goto LABEL_20;
          items = v15->fields._items;
          v29 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v19,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v19, v22, v23, v24, v25, v26, v27);
          }
        }
      }
    }
    itemList = (int64_t)this->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v15;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_long__o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v18; // w21
  ServantOperationListViewItem_o *v19; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_4B125B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v13, v14);
    byte_4B125B7 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BCAA3C(itemList, v16);
  v18 = 0;
  while ( v18 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v18,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v19 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                                v19,
                                                                v16);
      if ( !v15 )
        goto LABEL_16;
      items = v15->fields._items;
      v22 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v15->fields._size;
      v16 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v15,
          (int64_t)itemList,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_16;
  }
  return v15;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w21
  ServantOperationListViewItem_o *v11; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4B125B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v7, v8);
    byte_4B125B9 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BCAA3C(itemList, userCommandCodeId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v11 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserCommandCodeId(v11, (const MethodInfo *)userCommandCodeId) == userCommandCodeId )
    {
      return v11->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_12;
  }
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w21
  ServantOperationListViewItem_o *v11; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4B125B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v7, v8);
    byte_4B125B8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BCAA3C(itemList, userServantId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v11 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserSvtId(v11, (const MethodInfo *)userServantId) == userServantId )
    {
      return v11->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_long__o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v18; // w21
  ServantOperationListViewItem_o *v19; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_4B125B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v13, v14);
    byte_4B125B6 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BCAA3C(itemList, v16);
  v18 = 0;
  while ( v18 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v18,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v19 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserSvtId(v19, v16);
      if ( !v15 )
        goto LABEL_16;
      items = v15->fields._items;
      v22 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v15->fields._size;
      v16 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v15,
          (int64_t)itemList,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_16;
  }
  return v15;
}


int32_t __fastcall ServantOperationListViewManager__GetServantFilterSelectMenuKind(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( kind == 1 )
    v3 = 5;
  else
    v3 = 7;
  if ( kind == 2 )
    return 6;
  else
    return v3;
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_o *__fastcall ServantOperationListViewManager__GetSortInfo(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationListViewManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4B1259E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B1259E = 1;
  }
  switch ( kind )
  {
    case 2:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      v5 = 32LL;
      return *(ListViewSort_o **)((char *)&v4->static_fields->FILTER2_MAX_KIND_NUM + v5);
    case 1:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      v5 = 24LL;
      return *(ListViewSort_o **)((char *)&v4->static_fields->FILTER2_MAX_KIND_NUM + v5);
    case 0:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      v5 = 16LL;
      return *(ListViewSort_o **)((char *)&v4->static_fields->FILTER2_MAX_KIND_NUM + v5);
  }
  return 0LL;
}


int32_t __fastcall ServantOperationListViewManager__GetSortKind(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( kind == 2 )
    return 3;
  else
    return kind == 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewManager__GetStatusText(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 *v12; // x8

  if ( (byte_4B125A6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B125A6 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v12 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v12 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v12 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantOperationListViewManager__GetSwapList(
        ServantOperationListViewManager_o *this,
        int32_t modekind,
        System_Int64_array **changeIds,
        System_Int64_array **revokeIds,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_long__o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_long__o *v26; // x22
  int64_t v27; // x1
  int64_t v28; // x2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v35; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x3
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v39; // x25
  _BOOL8 IsSwap; // x0
  _BOOL8 ItemCollectId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B125D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind, changeIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v20, v21);
    byte_4B125D4 = 1;
  }
  id = 0LL;
  v22 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&modekind,
                                                     changeIds,
                                                     revokeIds);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v26 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v35 = 0;
  while ( v35 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v35,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
        v39 = (ServantOperationListViewItem_o *)Item;
      else
        v39 = 0LL;
    }
    else
    {
      v39 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)Item,
               v39,
               this->fields.modeKind,
               v37);
    if ( !IsSwap )
      goto LABEL_27;
    ItemCollectId = ServantOperationListViewManager__TryGetItemCollectId(
                      (ServantOperationListViewManager_o *)IsSwap,
                      v39,
                      &id,
                      v29);
    if ( !ItemCollectId )
      goto LABEL_27;
    itemList = (struct System_Collections_Generic_List_ListViewItem__o *)ServantOperationListViewManager__GetIsSelected(
                                                                           (ServantOperationListViewManager_o *)ItemCollectId,
                                                                           v39,
                                                                           this->fields.modeKind,
                                                                           v29);
    v27 = id;
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_28;
      items = v26->fields._items;
      v43 = Method_System_Collections_Generic_List_long__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v49 = v43[4];
        v50 = v26;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v50,
          v27,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
        goto LABEL_27;
      }
      v45 = &items->obj.klass + size;
      v26->fields._size = size + 1;
    }
    else
    {
      if ( !v22 )
        goto LABEL_28;
      v46 = v22->fields._items;
      v47 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !v46 )
        goto LABEL_28;
      v48 = v22->fields._size;
      if ( (unsigned int)v48 >= v46->max_length )
      {
        v49 = v47[4];
        v50 = v22;
        goto LABEL_26;
      }
      v45 = &v46->obj.klass + v48;
      v22->fields._size = v48 + 1;
    }
    v45[4] = (Il2CppClass *)v27;
LABEL_27:
    itemList = this->fields.itemList;
    ++v35;
    if ( !itemList )
      goto LABEL_28;
  }
  if ( !v22 || !v26 )
LABEL_28:
    sub_1BCAA3C(itemList, v27);
  v51 = v26->fields._size + v22->fields._size;
  if ( v51 < 1 )
  {
    *changeIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)changeIds, 0LL, v28, (int32_t)v29, v30, v31, v32, v33);
    v66 = revokeIds;
    v59 = 0LL;
    *revokeIds = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v22,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)changeIds, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v59;
    v66 = revokeIds;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 *v22; // x8
  __int64 *v23; // x9

  if ( (byte_4B125A5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, *(_QWORD *)&kind, isSelected);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v20, v21);
    byte_4B125A5 = 1;
  }
  switch ( kind )
  {
    case 0:
      v22 = &StringLiteral_17842/*"button_select_unreg"*/;
      v23 = &StringLiteral_17841/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v22 = &StringLiteral_17828/*"button_alllock_unreg"*/;
      v23 = &StringLiteral_17827/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v22 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
      v23 = &StringLiteral_17825/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v22 = &StringLiteral_17840/*"button_push_unreg"*/;
      v23 = &StringLiteral_17839/*"button_push_reg"*/;
LABEL_9:
      if ( isSelected )
        v22 = v23;
      break;
    default:
      v22 = (__int64 *)&StringLiteral_1/*""*/;
      break;
  }
  return (System_String_o *)*v22;
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_array *__fastcall ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B125A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B125A0 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1259F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1259F = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_1BCAA3C(Instance, v7);
    }
    return 0LL;
  }
}


void __fastcall ServantOperationListViewManager__InitBack(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  ServantOperationListViewManager__StatusRequest(this, 0LL, v2);
  ServantOperationListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall ServantOperationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantOperationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B1259A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v1, v2);
    byte_4B1259A = 1;
  }
  v3 = ServantOperationListViewManager_TypeInfo;
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v1);
    v3 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


bool __fastcall ServantOperationListViewManager__IsDragEnable(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0
  const MethodInfo *v6; // x4
  bool IsSelectEnable; // w8

  if ( this->fields.isInConfirm )
    return 0;
  result = 0;
  if ( item && !this->fields.modeKind )
  {
    if ( ServantOperationListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
      return 0;
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
      return 1;
    IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(this, item, 0, 0, v6);
    result = 0;
    if ( IsSelectEnable )
      return 1;
  }
  return result;
}


bool __fastcall ServantOperationListViewManager__IsDragStart(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


bool __fastcall ServantOperationListViewManager__IsSelectEnable(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        const MethodInfo *method)
{
  struct ServantOperationManager_o *parentManager; // x8
  struct ListViewSort_o *sort; // x8
  ServantEntity_o *servantEntity; // x0

  if ( this->fields.isInConfirm )
    return 1;
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_13;
  if ( parentManager->fields._TotalSum_k__BackingField + addSum >= parentManager->fields._SelectMax_k__BackingField )
    return 0;
  sort = this->fields.sort;
  if ( !sort )
LABEL_13:
    sub_1BCAA3C(this, item);
  if ( !item )
    return 1;
  if ( sort->fields.listViewKind )
    return 1;
  servantEntity = item->fields.servantEntity;
  if ( servantEntity )
  {
    if ( !ServantEntity__get_IsOrganization(servantEntity, 0LL) )
      return 1;
  }
  return item->fields.attribute || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyCommandCodes(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Instance; // x0
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  const MethodInfo *v24; // x2
  __int64 methodPtr_low; // x10
  int64_t v26; // x21
  Il2CppObject v27; // q0
  int64_t v28; // x22
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *v36; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B125A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind, selectedId);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B125A9 = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_1BCAA3C(Instance, v22);
    v23 = 0;
    while ( v23 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v23,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v26 = Instance;
        else
          v26 = 0LL;
      }
      else
      {
        v26 = 0LL;
      }
      if ( entity )
      {
        if ( !v26 )
          goto LABEL_30;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v26, v22);
        if ( !entity )
          goto LABEL_30;
        v27 = entity[2];
        v28 = Instance;
        *(Il2CppObject *)&v38.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v38.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
        v37 = v38;
        if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v37, 0LL) )
        {
          v34 = entity;
          *(_QWORD *)(v26 + 136) = entity;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 136), (int64_t)v34, (int64_t)v24, v29, v30, v31, v32, v33);
        }
      }
      else if ( !v26 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v26, 0, v24);
      v36 = *(UnityEngine_Object_o **)(v26 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
      if ( !UnityEngine_Object__op_Equality(v36, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v26 + 104);
        if ( !Instance )
          goto LABEL_30;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v26,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v23;
      if ( !Instance )
        goto LABEL_30;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyItem(
        ServantOperationListViewManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3

  if ( this->fields.itemList )
  {
    ServantOperationListViewManager__ModifyCommandCodes(this, this->fields.kind, selectedId, v3);
    ServantOperationListViewManager__ModifyServants(this, this->fields.kind, selectedId, v6);
  }
}


void __fastcall ServantOperationListViewManager__ModifyList(
        ServantOperationListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  UserServantEntity_array *UserServantEntities; // x0
  const MethodInfo *v6; // x3
  ServantOperationListViewManager_o *v7; // x0
  const MethodInfo *v8; // x2
  UserCommandCodeEntity_array *UserCommandCodeEntities; // x1
  const MethodInfo *v10; // x3

  UserServantEntities = ServantOperationListViewManager__GetUserServantEntities(this, this->fields.kind, method);
  isIconSizeChange = isIconSizeChange;
  ServantOperationListViewManager__ModifyLockedServants(this, UserServantEntities, isIconSizeChange, v6);
  UserCommandCodeEntities = ServantOperationListViewManager__GetUserCommandCodeEntities(v7, this->fields.kind, v8);
  ServantOperationListViewManager__ModifyLockedCommandCodes(this, UserCommandCodeEntities, isIconSizeChange, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyLockItem(
        ServantOperationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x21
  int32_t v27; // w22
  bool v28; // w26
  __int64 methodPtr_low; // x10
  __int64 v30; // x23
  int64_t UserSvtId; // x0
  __int64 v32; // x1
  __int128 v33; // q0
  int64_t v34; // x24
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  UnityEngine_Object_o *v43; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-80h]

  if ( (byte_4B125AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B125AB = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v26 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1BCAA3C(Instance, v25);
      }
      v26 = Instance;
    }
    v27 = 0;
    v28 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v27 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v27,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v30 = Instance;
        else
          v30 = 0LL;
        if ( !v26 )
          goto LABEL_25;
      }
      else
      {
        v30 = 0LL;
        if ( !v26 )
          goto LABEL_25;
      }
      if ( !v30 )
        goto LABEL_37;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v30, v25);
      v33 = *(_OWORD *)(v26 + 32);
      v34 = UserSvtId;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
      v44 = v45;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v44, 0LL);
      if ( v34 == Instance )
      {
        *(_QWORD *)(v30 + 112) = v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 112), v26, v35, v36, v37, v38, v39, v40);
      }
LABEL_25:
      if ( v28 )
      {
        if ( !v30 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v30, v25);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v30, v41);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v30, v42);
      }
      else if ( !v30 )
      {
        goto LABEL_37;
      }
      v43 = *(UnityEngine_Object_o **)(v30 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      Instance = UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v30 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v30,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v30 + 104);
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v30, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v27;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyLockItemComandCode(
        ServantOperationListViewManager_o *this,
        int64_t usrCmdId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x21
  int32_t v27; // w22
  bool v28; // w26
  __int64 methodPtr_low; // x10
  __int64 v30; // x23
  int64_t UserCommandCodeId; // x0
  __int64 v32; // x1
  __int128 v33; // q0
  int64_t v34; // x24
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  UnityEngine_Object_o *v42; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-80h]

  if ( (byte_4B125AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId, isInit);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B125AD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v26 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1BCAA3C(Instance, v25);
      }
      v26 = Instance;
    }
    v27 = 0;
    v28 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v27 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v27,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v30 = Instance;
        else
          v30 = 0LL;
        if ( !v26 )
          goto LABEL_25;
      }
      else
      {
        v30 = 0LL;
        if ( !v26 )
          goto LABEL_25;
      }
      if ( !v30 )
        goto LABEL_37;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v30,
                            v25);
      v33 = *(_OWORD *)(v26 + 32);
      v34 = UserCommandCodeId;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
      *(_OWORD *)&v44.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
      v43 = v44;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL);
      if ( v34 == Instance )
      {
        *(_QWORD *)(v30 + 136) = v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 136), v26, v35, v36, v37, v38, v39, v40);
      }
LABEL_25:
      if ( v28 )
      {
        if ( !v30 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v30, v25);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v30, v41);
      }
      else if ( !v30 )
      {
        goto LABEL_37;
      }
      v42 = *(UnityEngine_Object_o **)(v30 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      Instance = UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v30 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v30,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v30 + 104);
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v30, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v27;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_33329072(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ServantOperationListViewManager_o *v19; // x23
  int64_t UserSvtId; // x0
  __int64 v21; // x1
  __int128 v22; // q1
  ServantOperationListViewManager_o *v23; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_4B125AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, item, usrSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v17,
                                                  v18);
    byte_4B125AC = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v19 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v22 = *(_OWORD *)&v19->fields.dropObjectList;
      v23 = (ServantOperationListViewManager_o *)UserSvtId;
      *(UnityEngine_MonoBehaviour_Fields *)&v34.fields.currentCryptoKey = v19->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v34.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
      v33 = v34;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                    &v33,
                                                    0LL);
      if ( v23 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v19;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&item->fields._UserServantEntity_k__BackingField,
          (int64_t)v19,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !item )
      goto LABEL_25;
  }
  else
  {
    if ( !item )
      goto LABEL_25;
    ServantOperationListViewItem__ModifyLockItem(item, (const MethodInfo *)item);
    ServantOperationListViewItem__ModifyChoiceItem(item, v30);
    ServantOperationListViewItem__ModifyPushItem(item, v31);
  }
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)item->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(ServantOperationListViewManager_o *, ServantOperationListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        item,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (ServantOperationListViewManager_o *)item->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)item, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_25:
    sub_1BCAA3C(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x25
  bool v14; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v16; // w22
  UserCommandCodeEntity_o **v17; // x29
  System_Collections_Generic_List_object__o *v18; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  __int128 v21; // q0
  UserCommandCodeEntity_o *v22; // x8
  __int128 v23; // q0
  System_Collections_Generic_List_object__o *v24; // x24
  struct System_Object_array *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-80h]

  if ( (byte_4B125AF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
      userCommandCodeEntities,
      isIconSizeChange);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v11, v12);
    byte_4B125AF = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v13 = 0LL;
    v14 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v16 = 0;
      v17 = &userCommandCodeEntities->m_Items[v13];
      while ( 1 )
      {
        if ( v16 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v16,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v18 = itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        items = itemList[3].fields._items;
        if ( items )
        {
          v21 = *(_OWORD *)items->m_Items;
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&items->bounds;
          *(_OWORD *)&v32.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              userCommandCodeEntities);
          v31 = v32;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                    &v31,
                                                                    0LL);
          if ( v13 >= userCommandCodeEntities->max_length )
            sub_1BCAA44(itemList, userCommandCodeEntities);
          v22 = *v17;
          if ( !*v17 )
            goto LABEL_26;
          v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
          v24 = itemList;
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v30.fields.fakeValue = v23;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                    &v30,
                                                                    0LL);
          if ( v24 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v16;
        if ( !itemList )
          goto LABEL_26;
      }
      v25 = v18[3].fields._items;
      if ( !v25 )
LABEL_26:
        sub_1BCAA3C(itemList, userCommandCodeEntities);
      v26 = *(_OWORD *)v25->m_Items;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v25->bounds;
      *(_OWORD *)&v32.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCodeEntities);
      v29 = v32;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(this, v27, 1, v14, v28);
LABEL_24:
      ++v13;
    }
    while ( (__int64)v13 < (int)userCommandCodeEntities->max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyLockedServants(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x25
  bool v14; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v16; // w23
  UserServantEntity_o **v17; // x29
  ServantOperationListViewItem_o *v18; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  Il2CppObject v21; // q0
  UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  System_Collections_Generic_List_object__o *v24; // x24
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-80h]

  if ( (byte_4B125AE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
      userServantEntities,
      isIconSizeChange);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v11, v12);
    byte_4B125AE = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v13 = 0LL;
    v14 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v16 = 0;
      v17 = &userServantEntities->m_Items[v13];
      while ( 1 )
      {
        if ( v16 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v16,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v18 = (ServantOperationListViewItem_o *)itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        syncRoot = itemList[2].fields._syncRoot;
        if ( syncRoot )
        {
          v21 = syncRoot[2];
          *(Il2CppObject *)&v32.fields.currentCryptoKey = syncRoot[1];
          *(Il2CppObject *)&v32.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntities);
          v31 = v32;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                    &v31,
                                                                    0LL);
          if ( v13 >= userServantEntities->max_length )
            sub_1BCAA44(itemList, userServantEntities);
          v22 = *v17;
          if ( !*v17 )
            goto LABEL_26;
          v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
          v24 = itemList;
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v30.fields.fakeValue = v23;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                    &v30,
                                                                    0LL);
          if ( v24 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v16;
        if ( !itemList )
          goto LABEL_26;
      }
      UserServantEntity_k__BackingField = v18->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
LABEL_26:
        sub_1BCAA3C(itemList, userServantEntities);
      v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntities);
      v29 = v32;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
      ServantOperationListViewManager__ModifyLockItem_33329072(this, v18, v27, 1, v14, v28);
LABEL_24:
      ++v13;
    }
    while ( (__int64)v13 < (int)userServantEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyPushedServant(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  _QWORD *v13; // x20
  int32_t v14; // w21
  _QWORD *v15; // x22
  __int64 methodPtr_low; // x10
  __int64 v17; // x8
  __int128 v18; // q0
  _QWORD *v19; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h]

  v3 = this;
  if ( (byte_4B125B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v8, v9);
    byte_4B125B0 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_1BCAA3C(SelfUserGame, v11);
    v13 = SelfUserGame;
    v14 = 0;
    while ( v14 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v14,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( SelfUserGame )
      {
        v15 = SelfUserGame;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*SelfUserGame + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantOperationListViewItem_c **)(*(_QWORD *)(*SelfUserGame + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
        {
          v17 = SelfUserGame[14];
          if ( v17 )
          {
            if ( !v13 )
              goto LABEL_16;
            v18 = *(_OWORD *)(v17 + 32);
            v19 = (_QWORD *)v13[15];
            *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v21.fields.fakeValue = v18;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
            v20 = v21;
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v20, 0LL);
            *((_BYTE *)v15 + 201) = v19 == SelfUserGame;
          }
          itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
          ++v14;
          if ( itemList )
            continue;
        }
      }
      goto LABEL_16;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyServants(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w21
  __int64 methodPtr_low; // x10
  int64_t v26; // x22
  Il2CppObject v27; // q0
  int64_t v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B125AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, selectedId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B125AA = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_1BCAA3C(Instance, v23);
    v24 = 0;
    while ( v24 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v24,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v26 = Instance;
        else
          v26 = 0LL;
      }
      else
      {
        v26 = 0LL;
      }
      if ( entity )
      {
        if ( !v26 )
          goto LABEL_31;
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v26, v23);
        if ( !entity )
          goto LABEL_31;
        v27 = entity[2];
        v28 = Instance;
        *(Il2CppObject *)&v40.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v40.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
        v39 = v40;
        if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v39, 0LL) )
        {
          v35 = entity;
          *(_QWORD *)(v26 + 112) = entity;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 112), (int64_t)v35, v29, v30, v31, v32, v33, v34);
        }
      }
      else if ( !v26 )
      {
        goto LABEL_31;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v26, v23);
      if ( !SelfUserGame )
        goto LABEL_31;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v26,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v36);
      v38 = *(UnityEngine_Object_o **)(v26 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      if ( !UnityEngine_Object__op_Equality(v38, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v26 + 104);
        if ( !Instance )
          goto LABEL_31;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v26,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v24;
      if ( !Instance )
        goto LABEL_31;
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickChoiceModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4B125C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__, selectItem, method);
    byte_4B125C0 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1BCAA3C(v7, v8);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v12; // w9

  if ( (byte_4B125C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickFilter2Kind__, method, v2);
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v4, v5);
    byte_4B125C5 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !ServantOperationListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v9), (sort = this->fields.sort) == 0LL) )
    {
      sub_1BCAA3C(v8, v9);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v12 = filter2Kind + 1;
    else
      v12 = 0;
    sort->fields.filter2Kind = v12;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickFilterKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w9
  ListViewManager_o *v23; // x3
  int32_t v24; // w1

  if ( (byte_4B125C6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B125C6 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v15 = (CommonUI_o *)Instance;
    v19 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v16,
                                                      v17,
                                                      v18);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v15 )
      sub_1BCAA3C(v20, v21);
    if ( kind == 1 )
      v22 = 5;
    else
      v22 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v23 = 0LL;
    else
      v23 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v24 = 6;
    else
      v24 = v22;
    CommonUI__OpenServantFilterSelectMenu_30773292(v15, v24, sort, v23, v19, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickListView(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantOperationListViewManager__OnClickLockModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4B125BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickLockModeItem__, selectItem, method);
    byte_4B125BF = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1BCAA3C(v7, v8);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x19
  int64_t SelfUserGame; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  ServantOperationListViewItem_o **v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  const MethodInfo *v66; // x2
  int64_t v67; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v69; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v74; // x1
  Il2CppObject *v75; // x26
  __int64 v76; // x1
  Il2CppObject *Master_object; // x24
  System_String_o *v78; // x21
  System_String_o *v79; // x22
  System_Object_array *v80; // x23
  __int64 v81; // x1
  int32_t Rarity; // w27
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x27
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x26
  int32_t v97; // w0
  Il2CppClass *v98; // x8
  int32_t v99; // w25
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x25
  int32_t v107; // w0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x25
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x25
  ServantOperationListViewItem_o *v122; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x9
  int32_t SvtId_k__BackingField; // w20
  int32_t v125; // w0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x20
  System_String_o *v133; // x20
  System_String_o *v134; // x22
  System_String_o *v135; // x23
  Il2CppObject *Instance; // x24
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  CommonConfirmDialog_ClickDelegate_o *v140; // x25
  __int64 v141; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  if ( (byte_4B125C1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, selectItem, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&object___TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27);
    sub_1BCA7E0(&Rarity_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickPushModeItem__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v36, v37);
    sub_1BCA7E0(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v46, v47);
    byte_4B125C1 = 1;
  }
  v48 = sub_1BCAA2C(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, selectItem, method, v3);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v48,
    0LL);
  if ( !v48 )
    goto LABEL_59;
  *(_QWORD *)(v48 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 16), (int64_t)this, v51, v52, v53, v54, v55, v56);
  *(_QWORD *)(v48 + 24) = selectItem;
  v57 = (ServantOperationListViewItem_o **)(v48 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 24), (int64_t)selectItem, v58, v59, v60, v61, v62, v63);
  v64 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v64 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
  OverwriteAssetSoundName__PlaySystemSe(v65, 0, 0LL);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  v67 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v67 )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v57, v66);
    return;
  }
  if ( !*v57 )
    goto LABEL_59;
  UserServantEntity_k__BackingField = (*v57)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_59;
  v69 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v143.fields.fakeValue = v69;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50);
  v142 = v143;
  if ( v67 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v142, 0LL) )
    goto LABEL_13;
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             v67,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_59;
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
  *(_QWORD *)&v144.fields.currentCryptoKey = klass;
  *(_QWORD *)&v144.fields.fakeValue = monitor;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v144, 0LL);
  if ( !v71 )
    goto LABEL_59;
  v75 = DataMasterBase_object__object__int___GetEntity(
          v71,
          SelfUserGame,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v80 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v81);
  SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
  if ( !v80 )
LABEL_59:
    sub_1BCAA3C(SelfUserGame, v50);
  v89 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v80->max_length )
    goto LABEL_60;
  v80->m_Items[0] = (Il2CppObject *)v89;
  sub_1BCA784((PartyOrganizationUtility_o *)v80->m_Items, v89, v83, v84, v85, v86, v87, v88);
  if ( !v75 )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v75, 0LL);
  v96 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v80->max_length <= 1 )
    goto LABEL_60;
  v80->m_Items[1] = (Il2CppObject *)v96;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[1], v96, v90, v91, v92, v93, v94, v95);
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  v98 = Entity[6].klass;
  *(_QWORD *)&v145.fields.fakeValue = Entity[6].monitor;
  v99 = v97;
  *(_QWORD *)&v145.fields.currentCryptoKey = v98;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v145, 0LL);
  if ( !Master_object )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v99,
                            SelfUserGame,
                            0LL);
  v106 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v80->max_length <= 2 )
    goto LABEL_60;
  v80->m_Items[2] = (Il2CppObject *)v106;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[2], v106, v100, v101, v102, v103, v104, v105);
  if ( !*v57 )
    goto LABEL_59;
  SelfUserGame = (int64_t)(*v57)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_59;
  v107 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (int64_t)Rarity__getRarityType(v107, 0LL);
  v114 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v80->max_length <= 3 )
    goto LABEL_60;
  v80->m_Items[3] = (Il2CppObject *)v114;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[3], v114, v108, v109, v110, v111, v112, v113);
  if ( !*v57 )
    goto LABEL_59;
  SelfUserGame = (int64_t)(*v57)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v121 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v80->max_length <= 4 )
    goto LABEL_60;
  v80->m_Items[4] = (Il2CppObject *)v121;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[4], v121, v115, v116, v117, v118, v119, v120);
  v122 = *v57;
  if ( !*v57 )
    goto LABEL_59;
  v123 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v122->fields._UserServantEntity_k__BackingField;
  if ( !v123 )
    goto LABEL_59;
  SvtId_k__BackingField = v122->fields._SvtId_k__BackingField;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v123[6], 0LL);
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            SvtId_k__BackingField,
                            v125,
                            0LL);
  v132 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v80->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v141 = sub_1BCAA60();
      sub_1BCA908(v141, 0LL);
    }
  }
  if ( v80->max_length <= 5 )
LABEL_60:
    sub_1BCAA44(SelfUserGame, v50);
  v80->m_Items[5] = (Il2CppObject *)v132;
  sub_1BCA784((PartyOrganizationUtility_o *)&v80->m_Items[5], v132, v126, v127, v128, v129, v130, v131);
  v133 = System_String__Format_62415728(v79, v80, 0LL);
  v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v140 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v137,
                                                  v138,
                                                  v139);
  CommonConfirmDialog_ClickDelegate___ctor(
    v140,
    (Il2CppObject *)v48,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v50);
  if ( !Instance )
    goto LABEL_59;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)Instance,
    v78,
    v133,
    v134,
    v135,
    v140,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantOperationListViewManager_o *v15; // x0
  int v16; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v19; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B125CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickScaleChange__, method, v2);
    byte_4B125CD = 1;
  }
  v4 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = this;
    v16 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = this;
    v16 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = this;
    v16 = 1;
LABEL_11:
    v15->fields.seed = smallSizeSeed;
    p_seed = &v15->fields.seed;
    *((_DWORD *)p_seed + 110) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v7, v8, v9, v10, v11, v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v19 = this->fields.scaleType,
        sort->fields.iconScaleKind = v19,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v19, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v21);
  ServantOperationListViewManager__SetMode_33331828(this, 2, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *parentManager; // x8
  ServantOperationListViewManager_o *v17; // x22
  struct ServantOperationManager_o *v18; // x8
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  bool IsSelectEnable; // w21
  _QWORD *v24; // x8
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  UILabel_o *v27; // x21
  struct ServantOperationManager_o *v28; // x8
  ServantOperationListViewManager_o *v29; // x22
  struct ServantOperationManager_o *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B125BD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, selectItem, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickSelectListView__, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v9, v10);
    byte_4B125BD = 1;
  }
  if ( v4->fields.isInConfirm )
  {
    ServantOperationListViewManager__CallOnSelectServant(v4, selectItem, method);
    return;
  }
  if ( !selectItem )
    goto LABEL_29;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
  {
    v12 = Method_ServantOperationListViewManager_OnClickSelectListView__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      parentManager = v4->fields.parentManager;
      if ( parentManager )
      {
        v17 = this;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v18 = v4->fields.parentManager;
        if ( v18 )
        {
          v19 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v18->fields._SelectMax_k__BackingField;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_62415592(
                                                        (System_String_o *)v17,
                                                        v19,
                                                        v20,
                                                        0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v21);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                0LL);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_27:
              ServantOperationListViewManager__RefrashListDisp(v4, v22);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v11);
  v24 = Method_ServantOperationListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
  if ( IsSelectEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    if ( this )
    {
      selectItem->fields.selectNum = (int32_t)this->fields.sortOrderButton;
      ++v4->fields.selectSum;
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 1, 0LL);
      v27 = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      v28 = v4->fields.parentManager;
      if ( v28 )
      {
        v29 = this;
        TotalSum_k__BackingField = v28->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v30 = v4->fields.parentManager;
        if ( v30 )
        {
          v31 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v30->fields._SelectMax_k__BackingField;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_62415592(
                                                        (System_String_o *)v29,
                                                        v31,
                                                        v32,
                                                        0LL);
          if ( v27 )
          {
            UILabel__set_text(v27, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v33);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(this, selectItem);
  }
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSortAscendingOrder(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B125C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B125C9 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantSortSelectMenu_CallbackFunc_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w8
  int32_t v23; // w1

  if ( (byte_4B125C3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B125C3 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v15 = (CommonUI_o *)Instance;
    v19 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v15 )
      sub_1BCAA3C(v20, v21);
    if ( kind == 1 )
      v22 = 2;
    else
      v22 = 1;
    if ( kind == 2 )
      v23 = 6;
    else
      v23 = v22;
    CommonUI__OpenServantSortSelectMenu(v15, v23, sort, 1, v19, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  System_Action_bool__o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B125D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndClickTabChoice__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickTabChoice__, v6, v7);
    byte_4B125D0 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v10, v11, v12);
      System_Action_bool____ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v11);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabLock(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  System_Action_bool__o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B125CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndClickTabLock__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickTabLock__, v6, v7);
    byte_4B125CF = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickTabLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v10, v11, v12);
      System_Action_bool____ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v13, v14);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v11);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabPush(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_bool__o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B125D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndClickTabPush__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickTabPush__, v6, v7);
    byte_4B125D1 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickTabPush__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v10, v11, v12);
    System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabPush__, 0LL);
    ServantOperationListViewManager__StatusRequest(this, v13, v14);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_bool__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B125CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndClickTabStatus__, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnClickTabStatus__, v6, v7);
    byte_4B125CE = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v10);
    v14 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v11, v12, v13);
    System_Action_bool____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      0LL);
    ServantOperationListViewManager__StatusRequest(this, v14, v15);
  }
}


void __fastcall ServantOperationListViewManager__OnMoveEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_4B125B5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B125B5 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
      }
    }
  }
}


void __fastcall ServantOperationListViewManager__PushRequest(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B125C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B125C2 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !UserServantEntity_k__BackingField )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &UserServantEntity_k__BackingField->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      UserServantEntity_k__BackingField->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21

  if ( (byte_4B125A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v4, v5);
    byte_4B125A7 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  parentManager = (ServantOperationManager_o *)ServantOperationListViewManager__get_ObjectList(this, v7);
  if ( !parentManager )
    goto LABEL_10;
  v8 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( SLODWORD(parentManager->fields.m_CancellationTokenSource) >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      parentManager = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                     v8,
                                                     v9,
                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
      if ( !parentManager )
        break;
      ((void (__fastcall *)(ServantOperationManager_o *, bool, void *))parentManager->klass[1]._1.parent)(
        parentManager,
        this->fields.isInput,
        parentManager->klass[1]._1.generic_class);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_10:
    sub_1BCAA3C(parentManager, method);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v9; // w20
  ServantOperationListViewItem_o *v10; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v12; // x3

  if ( (byte_4B125BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v6, v7);
    byte_4B125BC = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_1BCAA3C(itemList, method);
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v10 = (ServantOperationListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect((ListViewItem_o *)itemList, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v10, v12);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v9;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_10;
  }
  this->fields.selectSum = 0;
  ServantOperationListViewManager__RefrashListDisp(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__RequestListObject(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B125B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B125B4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetCancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int32_t v6; // w21

  if ( (start & 0x80000000) == 0 )
  {
    if ( start <= end )
      v5 = start;
    else
      v5 = end;
    if ( start <= end )
      v6 = end;
    else
      v6 = start;
    do
      ServantOperationListViewManager__CancelDragSelect(this, v5++, *(const MethodInfo **)&end);
    while ( v5 <= v6 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetDecideDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int32_t v6; // w21

  if ( (start & 0x80000000) == 0 )
  {
    if ( start <= end )
      v5 = start;
    else
      v5 = end;
    if ( start <= end )
      v6 = end;
    else
      v6 = start;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v5++, *(const MethodInfo **)&end);
    while ( v5 <= v6 );
  }
}


bool __fastcall ServantOperationListViewManager__SetDispObjectsByListViewItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *parentManager; // x8
  ServantOperationListViewManager_o *v13; // x22
  struct ServantOperationManager_o *v14; // x8
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B125B3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v7, v8);
    byte_4B125B3 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
    && ServantOperationListViewItem__get_IsCanNotSelect(item, v9) )
  {
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      parentManager = v4->fields.parentManager;
      if ( parentManager )
      {
        v13 = this;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v14 = v4->fields.parentManager;
        if ( v14 )
        {
          v15 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v14->fields._SelectMax_k__BackingField;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_62415592(
                                                        (System_String_o *)v13,
                                                        v15,
                                                        v16,
                                                        0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v17);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, 0LL);
              ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
              return 1;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(this, item);
  }
  return 0;
}


void __fastcall ServantOperationListViewManager__SetDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v16; // w20
  int32_t v17; // w22
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v22; // x21
  struct ServantOperationManager_o *v23; // x8
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B125D8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_SetDragEnd__, v6, v7);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v8, v9);
    byte_4B125D8 = 1;
  }
  v10 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_ServantOperationListViewManager_SetDragEnd__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v16 = this->fields.dragStartIndex;
    else
      v16 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v17 = this->fields.dragEndIndex;
    else
      v17 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v16++, v13);
    while ( v16 <= v17 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_19;
  v22 = v19;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v19 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  v23 = this->fields.parentManager;
  if ( !v23
    || (v24 = (Il2CppObject *)v19,
        SelectMax_k__BackingField = v23->fields._SelectMax_k__BackingField,
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField),
        v19 = System_String__Format_62415592(v22, v24, v25, 0LL),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_1BCAA3C(v19, v20);
  }
  UILabel__set_text(selectDoneLabel, v19, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v26);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  this->fields.isDragSelect = 1;
}


void __fastcall ServantOperationListViewManager__SetDragMove(
        ServantOperationListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    ServantOperationListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x3
  ServantOperationListViewItem_o *v16; // x21
  __int64 methodPtr_low; // x9
  __int64 v18; // x1
  UnityEngine_Object_o *viewObject; // x19
  __int64 v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B125D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, isDragSelect);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantOperationListViewObject_TypeInfo, v11, v12);
    byte_4B125D6 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v16 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v16, isDragSelect, v15);
    sub_1BCAA3C(v21, v22);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1BCACFC(Item);
    goto LABEL_16;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(this, (ServantOperationListViewItem_o *)Item, isDragSelect, v15);
  viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v16->fields.viewObject;
    if ( itemSortList )
    {
      v20 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v20
        && (ServantOperationListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v20 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)itemSortList, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&index);
  }
}


void __fastcall ServantOperationListViewManager__SetDragSelectItem(
        ServantOperationListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v10; // w26
  int32_t v11; // w24
  int32_t v12; // w25
  int32_t v13; // w8
  int32_t v14; // w9
  int32_t v15; // w22
  int32_t v16; // w23
  const MethodInfo *v17; // x3

  dragStartIndex = this->fields.dragStartIndex;
  dragEndIndex = this->fields.dragEndIndex;
  if ( dragStartIndex <= dragEndIndex )
    v10 = this->fields.dragStartIndex;
  else
    v10 = this->fields.dragEndIndex;
  if ( dragStartIndex > dragEndIndex )
    dragEndIndex = this->fields.dragStartIndex;
  if ( dragStartIndex < 0 )
    v11 = -1;
  else
    v11 = v10;
  if ( dragStartIndex < 0 )
    v12 = -1;
  else
    v12 = dragEndIndex;
  if ( startIndex <= endIndex )
    v13 = startIndex;
  else
    v13 = endIndex;
  if ( startIndex <= endIndex )
    v14 = endIndex;
  else
    v14 = startIndex;
  if ( startIndex < 0 )
    v15 = -1;
  else
    v15 = v13;
  if ( startIndex < 0 )
    v16 = -1;
  else
    v16 = v14;
  this->fields.dragStartIndex = startIndex;
  this->fields.dragEndIndex = endIndex;
  if ( (v11 & 0x80000000) == 0 && v11 <= v12 )
  {
    do
    {
      if ( v10 > v16 || (v15 & 0x80000000) != 0 || v10 < v15 )
        ServantOperationListViewManager__SetDragSelect(this, v10, 0, method);
      ++v10;
    }
    while ( v10 <= v12 );
  }
  if ( (startIndex & 0x80000000) == 0 )
  {
    ServantOperationListViewManager__SetItemDragSelect(
      this,
      startIndex,
      endIndex,
      v11,
      v12,
      1,
      startIndex > endIndex,
      v4);
    if ( (v15 & 0x80000000) == 0 && this->fields.isDragSelect )
      ServantOperationListViewManager__SetItemDragSelectNum(this, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetDragStart(
        ServantOperationListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v15; // w21
  __int64 methodPtr_low; // x10
  __int64 v17; // x1
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_4B125D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex, isDragSelect);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v11, v12);
    byte_4B125D7 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BD2BC0;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  if ( !itemSortList )
    goto LABEL_17;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    do
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v15,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        break;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v15;
      HIDWORD(itemSortList[6].monitor) = -1;
      if ( size == v15 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_17:
    sub_1BCAA3C(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  ServantOperationListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !itemSortList )
      goto LABEL_17;
    UIScrollView__Press((UIScrollView_o *)itemSortList, 0, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__SetFilterButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B125C8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B125C8 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall ServantOperationListViewManager__SetIsItemDragSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        bool isDragSelect,
        const MethodInfo *method)
{
  int32_t DragSelectNum_k__BackingField; // w8
  _BOOL4 v7; // w21
  bool IsSelect; // w0
  const MethodInfo *v9; // x4
  ServantEntity_o *v10; // x0
  ServantEntity_o *servantEntity; // x0
  int32_t v12; // w8

  if ( !item )
    sub_1BCAA3C(this, 0LL);
  DragSelectNum_k__BackingField = item->fields._DragSelectNum_k__BackingField;
  if ( !isDragSelect )
  {
    if ( (DragSelectNum_k__BackingField & 0x80000000) != 0 )
      return;
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) && item->fields._DragSelectNum_k__BackingField >= 1 )
    {
      --this->fields.dragSelectSum;
      servantEntity = item->fields.servantEntity;
      if ( (!servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0LL)) && !item->fields.attribute )
        --this->fields.dragServantSelectSum;
    }
    v12 = -1;
    goto LABEL_20;
  }
  if ( (DragSelectNum_k__BackingField & 0x80000000) != 0 )
  {
    item->fields._DragSelectNum_k__BackingField = 0;
    if ( !ServantOperationListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
    {
      v7 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
      if ( v7 )
      {
        if ( !IsSelect
          && ServantOperationListViewManager__IsSelectEnable(
               this,
               item,
               this->fields.dragSelectSum,
               this->fields.dragServantSelectSum,
               v9) )
        {
          ++this->fields.dragSelectSum;
          v10 = item->fields.servantEntity;
          if ( (!v10 || ServantEntity__get_IsOrganization(v10, 0LL)) && !item->fields.attribute )
            ++this->fields.dragServantSelectSum;
          goto LABEL_23;
        }
      }
      else if ( IsSelect )
      {
LABEL_23:
        v12 = 1;
LABEL_20:
        item->fields._DragSelectNum_k__BackingField = v12;
      }
    }
  }
}


void __fastcall ServantOperationListViewManager__SetIsItemSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  _BOOL4 isDragSelect; // w21
  ServantOperationListViewManager_o *v5; // x20
  bool IsSelect; // w0
  int32_t sortOrderButton; // w8
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( !item )
    goto LABEL_13;
  if ( item->fields._DragSelectNum_k__BackingField < 1 )
    return;
  isDragSelect = this->fields.isDragSelect;
  v5 = this;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  if ( !isDragSelect )
  {
    if ( !IsSelect )
      return;
    this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
    --v5->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 1, item, v9);
      this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
      if ( this )
      {
        ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, 0LL);
        ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(this, item);
  }
  if ( IsSelect )
    return;
  this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
  if ( !this )
    goto LABEL_13;
  sortOrderButton = (int32_t)this->fields.sortOrderButton;
  if ( sortOrderButton < SHIDWORD(this->fields.sortOrderButton) )
  {
    item->fields.selectNum = sortOrderButton;
    ++v5->fields.selectSum;
    ServantOperationManager__setServant((ServantOperationManager_o *)this, 1, 0LL);
    ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 0, item, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetItemDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t from,
        int32_t to,
        int32_t start,
        int32_t end,
        bool isDragSelect,
        bool isReverse,
        const MethodInfo *method)
{
  int32_t v12; // w23
  bool v14; // cc

  v12 = from;
  v14 = from <= to;
  if ( isReverse )
  {
    if ( from >= to )
    {
      do
      {
        if ( v12 > end || (start & 0x80000000) != 0 || v12 < start )
          ServantOperationListViewManager__SetDragSelect(this, v12, isDragSelect, *(const MethodInfo **)&start);
        --v12;
      }
      while ( v12 >= to );
    }
  }
  else
  {
    while ( v14 )
    {
      if ( v12 > end || (start & 0x80000000) != 0 || v12 < start )
        ServantOperationListViewManager__SetDragSelect(this, v12, isDragSelect, *(const MethodInfo **)&start);
      v14 = ++v12 <= to;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetItemDragSelectNum(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  ServantOperationListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct ServantOperationManager_o *parentManager; // x8
  int v14; // w27
  ServantOperationListViewManager_o *v15; // x22
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x23
  struct UnityEngine_GameObject_o *v18; // x8
  __int64 v19; // x11
  ServantOperationListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  v5 = start;
  v6 = this;
  if ( (byte_4B125D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start, *(_QWORD *)&end);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v9, v10);
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(&ServantOperationListViewObject_TypeInfo, v11, v12);
    byte_4B125D5 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v14 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      this = (ServantOperationListViewManager_o *)v6->fields.itemSortList;
      if ( !this )
        goto LABEL_20;
      this = (ServantOperationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v5,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_20;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v15 = this;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( SHIDWORD(this->fields.leftItem) >= 1 )
      {
        HIDWORD(this->fields.leftItem) = v14;
        dropDragPrefab = (UnityEngine_Object_o *)this->fields.dropDragPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&start);
        ++v14;
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(dropDragPrefab, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v18 = v15->fields.dropDragPrefab;
          if ( !v18 )
            goto LABEL_20;
          v19 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
            || (ServantOperationListViewObject_c *)v18->klass->_2.typeHierarchy[v19 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_20;
          }
          ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)v15->fields.dropDragPrefab, 0LL);
        }
      }
      if ( ++v5 > end )
        return;
    }
    v20 = (ServantOperationListViewManager_o *)sub_1BCACFC(this);
    ServantOperationListViewManager__SetDragSelect(v20, v21, v22, v23);
  }
}


void __fastcall ServantOperationListViewManager__SetListViewSort(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v4; // x20
  ListViewSort_o *SortInfo; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  ListViewSort_o *klass; // x0
  int v14; // w8

  v4 = (PartyOrganizationUtility_o *)this;
  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  v4[1].fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)SortInfo;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 184);
  sub_1BCA784(v4, (int64_t)SortInfo, v6, v7, v8, v9, v10, v11);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_1BCAA3C(0LL, v12);
  v14 = kind == 1;
  if ( kind == 2 )
    v14 = 3;
  klass->fields.listViewKind = v14;
  ListViewSort__Load(klass, 0LL);
}


void __fastcall ServantOperationListViewManager__SetMode(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        System_Action_ServantOperationListViewItem__o *onSelectServant,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectServant = onSelectServant;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectServant,
    (int64_t)onSelectServant,
    (int64_t)onSelectServant,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_33331828(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_33331828(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t ObjectSum; // w0
  int32_t v10; // w8
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  char v13; // w22
  int32_t v14; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x2
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v18; // x1
  bool v19; // w8
  int32_t v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4B125B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v7, v8);
    byte_4B125B2 = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v10 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v10 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_14:
      sub_1BCAA3C(itemList, v11);
    v13 = 0;
    v14 = 0;
    while ( v14 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v14,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
          v18 = (ServantOperationListViewItem_o *)Item;
        else
          v18 = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      v19 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v18, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v13 |= v19;
      ++v14;
      if ( !itemList )
        goto LABEL_14;
    }
    if ( (v13 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v11);
    v20 = ServantOperationListViewObject__GetInitMode(initMode, 0LL);
    ServantOperationListViewManager__RequestListObject(this, v20, v21);
  }
}


void __fastcall ServantOperationListViewManager__SetObjectItem(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B125B1 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(&ServantOperationListViewObject_TypeInfo, obj, item);
    byte_4B125B1 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)obj, v7, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetScaleKind(
        ServantOperationListViewManager_o *this,
        int32_t scaleKind,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeButtonSprite; // x20

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_7:
    this->fields.seed = normalSizeSeed;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.seed,
      (int64_t)normalSizeSeed,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, *(_QWORD *)&scaleKind);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x22
  signed int max_length; // w8
  __int64 v22; // x22
  UserServantEntity_o *v23; // x24
  __int128 v24; // q0
  System_Int64_array *v25; // x25
  System_Int64_array *v26; // x26
  __int64 v27; // x2
  __int64 v28; // x3
  int64_t favoriteUserSvtId; // x29
  int64_t v30; // x27
  ServantOperationListViewItem_o *v31; // x23
  const MethodInfo *v32; // x6
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  const MethodInfo *v43; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B125A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities, userGameEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B125A2 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_24;
    UserDeckMaster__getPartyList((UserDeckMaster_o *)MasterData_object, &svtIdList, &equipIdList, Instance, 0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v22 >= max_length )
          sub_1BCAA44(Instance, v18);
        v23 = userServantEntities->m_Items[v22];
        if ( !v23 )
          break;
        v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
        v26 = equipIdList;
        v25 = svtIdList;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
        v45 = v46;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v30 = Instance;
        v31 = (ServantOperationListViewItem_o *)sub_1BCAA2C(ServantOperationListViewItem_TypeInfo, v18, v27, v28);
        ServantOperationListViewItem___ctor(v31, v22, v23, v25, v26, v30 == favoriteUserSvtId, v32);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v39 = *(_QWORD *)(Instance + 16);
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v39 )
          break;
        v41 = *(int *)(Instance + 24);
        if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v31,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = v39 + 8 * v41;
          *(_DWORD *)(Instance + 24) = v41 + 1;
          *(_QWORD *)(v42 + 32) = v31;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v31, v33, v34, v35, v36, v37, v38);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v31, v43);
        max_length = userServantEntities->max_length;
        if ( (int)++v22 >= max_length )
          return v22;
      }
LABEL_24:
      sub_1BCAA3C(Instance, v18);
    }
  }
  LODWORD(v22) = 0;
  return v22;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_33324132(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v19; // x22
  __int64 v20; // x21
  UserCommandCodeEntity_o *v21; // x24
  __int128 v22; // q0
  bool v23; // w25
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ServantOperationListViewItem_o *v27; // x23
  const MethodInfo *v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-80h]

  if ( (byte_4B125A3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantCommandCodeMaster___,
      userCommandCodeEntities,
      userGameEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B125A3 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                          (UserServantCommandCodeMaster_o *)Instance,
                          0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v19 = (System_Collections_Generic_List_long__o *)Instance;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1BCAA44(Instance, v17);
        v21 = userCommandCodeEntities->m_Items[v20];
        if ( !v21 )
          break;
        v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
        v41 = v42;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL);
        if ( !v19 )
          break;
        v23 = System_Collections_Generic_List_long___Contains(
                v19,
                Instance,
                (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__);
        v27 = (ServantOperationListViewItem_o *)sub_1BCAA2C(ServantOperationListViewItem_TypeInfo, v24, v25, v26);
        ServantOperationListViewItem___ctor_33309988(v27, v20, v21, v23, v28);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v35 = *(_QWORD *)(Instance + 16);
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v35 )
          break;
        v37 = *(int *)(Instance + 24);
        if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = v35 + 8 * v37;
          *(_DWORD *)(Instance + 24) = v37 + 1;
          *(_QWORD *)(v38 + 32) = v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v27, v29, v30, v31, v32, v33, v34);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v27, v39);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v20 >= max_length )
          return v20;
      }
LABEL_22:
      sub_1BCAA3C(Instance, v17);
    }
  }
  LODWORD(v20) = 0;
  return v20;
}


void __fastcall ServantOperationListViewManager__SetSortButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  ServantOperationManager_o *parentManager; // x20

  if ( (byte_4B125CC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B125CC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_36;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( !v21 )
      goto LABEL_36;
    sortKind = v21->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
        v24 = this->fields.sort;
        if ( v24 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
            v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_29:
            if ( v24->fields.isAscendingOrder )
              v28 = v25;
            else
              v28 = v26;
            UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
            goto LABEL_33;
          }
        }
      }
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
        v24 = this->fields.sort;
        if ( v24 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
            v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(sort, v17);
  }
LABEL_33:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_36;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_36;
  ServantOperationManager__SetFilter2Text(parentManager, (System_String_o *)sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetStatusKind(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UICommonButton_o *statusTabButton; // x1
  UISprite_o *statusTabSprite; // x2
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x5
  __int64 v14; // x1
  UnityEngine_Object_o *pushTabButton; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v18; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UILabel_o *v20; // x20
  ServantOperationListViewManager_o *v21; // x0
  const MethodInfo *v22; // x2
  __int64 methodPtr_low; // x9
  ServantOperationListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4B125A4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&ShopRootComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    byte_4B125A4 = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  statusTabSprite = this->fields.statusTabSprite;
  this->fields.modeKind = modeKind;
  ServantOperationListViewManager__SetTabButton(this, statusTabButton, statusTabSprite, modeKind, 0, v3);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.lockTabButton,
    this->fields.lockTabSprite,
    this->fields.modeKind,
    1,
    v12);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.choiceTabButton,
    this->fields.choiceTabSprite,
    this->fields.modeKind,
    2,
    v13);
  pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(pushTabSprite, 0LL, 0LL) )
      ServantOperationListViewManager__SetTabButton(
        this,
        this->fields.pushTabButton,
        this->fields.pushTabSprite,
        this->fields.modeKind,
        3,
        v18);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0LL),
        v20 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v21,
                                                   this->fields.modeKind,
                                                   v22),
        !v20)
    || (UILabel__set_text(v20, (System_String_o *)statusLabel, 0LL),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0LL )
  {
    sub_1BCAA3C(statusLabel, v16);
  }
  methodPtr_low = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(statusLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    v24 = (ServantOperationListViewManager_o *)sub_1BCACFC(statusLabel);
    ServantOperationListViewManager__SetFilterButtonImage(v24, v25);
  }
}


void __fastcall ServantOperationListViewManager__SetTabButton(
        ServantOperationListViewManager_o *this,
        UICommonButton_o *tabButton,
        UISprite_o *tabSprite,
        int32_t selectedModeKind,
        int32_t tabKind,
        const MethodInfo *method)
{
  bool v9; // w23
  bool v10; // w20
  ServantOperationListViewManager_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( !tabButton
    || (v9 = selectedModeKind == tabKind,
        v10 = selectedModeKind != tabKind,
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))tabButton->klass->vtable._5_set_isEnabled.method)(
          tabButton,
          1LL,
          tabButton->klass->vtable._6_OnInit.methodPtr),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tabButton, v10, 0LL),
        this = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetTabSpriteName(
                                                      v11,
                                                      tabKind,
                                                      v9,
                                                      v12),
        !tabSprite) )
  {
    sub_1BCAA3C(this, tabButton);
  }
  UISprite__set_spriteName(tabSprite, (System_String_o *)this, 0LL);
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))tabButton->klass->vtable._14_SetState.method)(
    tabButton,
    0LL,
    0LL,
    tabButton->klass->vtable._15_OnPress.methodPtr);
  UICommonButton__SetColliderEnable(tabButton, v10, 0, 0LL);
}


void __fastcall ServantOperationListViewManager__StatusRequest(
        ServantOperationListViewManager_o *this,
        System_Action_bool__o *onRequestEnd,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w1
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  __int64 v22; // x3
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  __int64 v25; // x1
  Il2CppObject *Request_object; // x0
  __int64 v27; // x1
  System_Int64_array *v28; // [xsp+0h] [xbp-30h] BYREF
  System_Int64_array *changeIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B125D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ServantOperationListViewManager_EndStatusSync__, v16, v17);
    byte_4B125D3 = 1;
  }
  v28 = 0LL;
  changeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onRequestEnd,
    (int64_t)onRequestEnd,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v18, &changeIds, &v28, v19) )
  {
    kind = this->fields.kind;
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21, v22);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
    if ( kind == 2 )
    {
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          (CommandCodeStatusSyncRequest_o *)Request_object,
          changeIds,
          v28,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(Request_object, v27);
    }
    Request_object = NetworkManager__getRequest_object_(
                       v24,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_object )
      goto LABEL_13;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_object,
      changeIds,
      v28,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0LL);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v21);
  }
}


void __fastcall ServantOperationListViewManager__SumItems(
        ServantOperationListViewManager_o *this,
        int32_t *qp,
        int32_t *mana,
        int32_t *rarePri,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v14; // w23
  System_Collections_Generic_List_object__o *v15; // x24
  __int64 methodPtr_low; // x10
  UserServantEntity_o *syncRoot; // x0
  int32_t v18; // w27
  int32_t v19; // w27
  int32_t v20; // w24
  int32_t SellRarePri; // w0
  UserCommandCodeEntity_o *items; // x0
  int32_t v23; // w27
  int32_t v24; // w27

  if ( (byte_4B125A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp, mana);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&ServantOperationListViewItem_TypeInfo, v11, v12);
    byte_4B125A8 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1BCAA3C(itemList, qp);
  v14 = 0;
  while ( v14 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v14,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v15 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      syncRoot = (UserServantEntity_o *)v15[2].fields._syncRoot;
      if ( syncRoot )
      {
        v18 = *qp;
        *qp = UserServantEntity__getSellQp(syncRoot, 0LL) + v18;
        itemList = (System_Collections_Generic_List_object__o *)v15[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v19 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)itemList, 0LL) + v19;
        itemList = (System_Collections_Generic_List_object__o *)v15[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v20 = *rarePri;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)itemList, 0LL);
LABEL_18:
        *rarePri = SellRarePri + v20;
        goto LABEL_19;
      }
      items = (UserCommandCodeEntity_o *)v15[3].fields._items;
      if ( items )
      {
        v23 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp(items, 0LL) + v23;
        itemList = (System_Collections_Generic_List_object__o *)v15[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v24 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)itemList, 0LL) + v24;
        itemList = (System_Collections_Generic_List_object__o *)v15[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v20 = *rarePri;
        SellRarePri = UserCommandCodeEntity__GetSellRarePri((UserCommandCodeEntity_o *)itemList, 0LL);
        goto LABEL_18;
      }
    }
LABEL_19:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v14;
    if ( !itemList )
      goto LABEL_20;
  }
}


bool __fastcall ServantOperationListViewManager__TryGetItemCollectId(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t *id,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x9
  __int128 v7; // q0
  __int128 *v8; // x0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x9
  __int128 v10; // q0
  bool result; // w0
  __int128 v12[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v13[2]; // [xsp+20h] [xbp-60h] BYREF
  __int128 v14; // [xsp+40h] [xbp-40h]
  __int128 v15; // [xsp+50h] [xbp-30h]

  if ( (byte_4B125D2 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1BCA7E0(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  item,
                                                  id);
    byte_4B125D2 = 1;
  }
  if ( !item )
    sub_1BCAA3C(this, item);
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v15 = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    v8 = v13;
    v13[0] = v14;
    v13[1] = v15;
  }
  else
  {
    UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
    {
      result = 0;
      *id = 0LL;
      return result;
    }
    v10 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
    v14 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v15 = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    v8 = v12;
    v12[0] = v14;
    v12[1] = v15;
  }
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v8,
          0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__decrementNumber(
        ServantOperationListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w21

  if ( (byte_4B125BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B125BE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BCAA3C(itemList, *(_QWORD *)&selectNum);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    if ( SLODWORD(itemList->fields._items) > selectNum )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_12;
      --LODWORD(itemList->fields._items);
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1259C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1259C = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v23 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewObject__GetItem(
                                                                  (ServantOperationListViewObject_o *)objectList,
                                                                  0LL);
      if ( objectList )
      {
        v18 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            goto LABEL_21;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v23,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v17;
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  if ( (byte_4B1259B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1259B = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v17 )
        goto LABEL_17;
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v17->fields._size;
      v32 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v17;
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B125DC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager___c_TypeInfo, v1, v2);
    byte_4B125DC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantOperationListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantOperationListViewManager___c___ctor(
        ServantOperationListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantOperationListViewManager___c___EndSelectFilterKind_b__106_0(
        ServantOperationListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___ctor(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__0(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B125DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v7, v8);
    byte_4B125DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__1(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}