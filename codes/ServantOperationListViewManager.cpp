void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  int64_t v8; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  struct ServantOperationListViewManager_StaticFields *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  ListViewSort_o *v23; // x20
  struct ServantOperationListViewManager_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_o *v31; // x19
  ListViewSort_o *v32; // x20
  struct ServantOperationListViewManager_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD888C & 1) == 0 )
  {
    sub_1C21E38(&ListViewSort_TypeInfo);
    sub_1C21E38(&ServantOperationListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1492/*"4"*/);
    sub_1C21E38(&StringLiteral_12887/*"ServantOperation"*/);
    byte_4BD888C = 1;
  }
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  v8 = StringLiteral_12887/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12887/*"ServantOperation"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->SORT_SAVE_KEY, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v40 = 1;
  v10 = System_Int32__ToString((int32_t)&v40, 0LL);
  v11 = System_String__Concat_63115476(SORT_SAVE_KEY, v10, 0LL);
  v12 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v12, v11, 3, 0, 0LL);
  v13 = ServantOperationListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->servantSortInfo, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  v20 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v40 = 2;
  v21 = System_Int32__ToString((int32_t)&v40, 0LL);
  v22 = System_String__Concat_63115476(v20, v21, 0LL);
  v23 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v23, v22, 3, 0, 0LL);
  v24 = ServantOperationListViewManager_TypeInfo->static_fields;
  v24->servantEquipSortInfo = v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->servantEquipSortInfo, (int64_t)v23, v25, v26, v27, v28, v29, v30);
  v31 = System_String__Concat_63115476(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1492/*"4"*/,
          0LL);
  v32 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v32, v31, 2, 0, 0LL);
  v33 = ServantOperationListViewManager_TypeInfo->static_fields;
  v33->commandCodeSortInfo = v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v33->commandCodeSortInfo, (int64_t)v32, v34, v35, v36, v37, v38, v39);
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
    sub_1C21DDC(p_onSelectServant, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C21DDC(p_onRequestEnd, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFE510;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BD888B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD888B = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1C22094(itemSortList, *(_QWORD *)&index);
  }
  ServantOperationListViewItem__set_IsDragSelect((ServantOperationListViewItem_o *)itemSortList, 0, 0LL);
}


void __fastcall ServantOperationListViewManager__ChangeSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        bool isPlus,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8
  int v8; // w9

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_11;
  if ( sort->fields.listViewKind )
    return;
  if ( !item )
LABEL_11:
    sub_1C22094(this, isPlus);
  if ( ServantOperationListViewItem__get_IsOrganization(item, 0LL)
    && ServantOperationListViewItem__get_IsSellEnableServant(item, 0LL) )
  {
    if ( isPlus )
      v8 = 1;
    else
      v8 = -1;
    this->fields.sellEnableRestCnt += v8;
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
  System_String_o *EmptyMessageCode; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1

  if ( (byte_4BD884E & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD884E = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_33765784(
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get(EmptyMessageCode, 0LL);
  if ( !emptyMessageLabel )
LABEL_8:
    sub_1C22094(v9, v10);
  UILabel__set_text(emptyMessageLabel, v9, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, this->fields.modeKind, v25);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantOperationListViewManager__SetFilterButtonImage(this, v26);
  this->fields.isInConfirm = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__DecideDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x2
  ServantOperationListViewItem_o *v8; // x20
  __int64 methodPtr_low; // x9
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BD888A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD888A = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_1C22094(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v8 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, v7);
    sub_1C22094(v10, v11);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_1C22354(Item);
    goto LABEL_9;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, (ServantOperationListViewItem_o *)Item, v7);
  ServantOperationListViewItem__set_IsDragSelect(v8, 0, 0LL);
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BD884A & 1) == 0 )
  {
    sub_1C21E38(&ServantOperationListViewManager_TypeInfo);
    byte_4BD884A = 1;
  }
  v2 = ServantOperationListViewManager_TypeInfo;
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v2 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1C22094(servantSortInfo, v1);
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
    sub_1C22094(0LL, v3);
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
  ServantOperationListViewManager__SetMode_33774368(this, 2, v5);
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
    sub_1C22094(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v7);
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
    sub_1C22094(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v7);
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
    sub_1C22094(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v7);
}


void __fastcall ServantOperationListViewManager__EndClickTabStatus(
        ServantOperationListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  ServantOperationListViewManager__SetStatusKind(this, 0, method);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    sub_1C22094(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v7);
}


void __fastcall ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantOperationListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v11; // x21
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD8878 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__);
    sub_1C21E38(&ServantOperationListViewManager___c_TypeInfo);
    byte_4BD8878 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = ServantOperationListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v8 = ServantOperationListViewManager___c_TypeInfo;
  }
  _9__106_0 = v8->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantOperationListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v11,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = _9__106_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v9 )
    sub_1C22094(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v9, _9__106_0, 0LL);
}


void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD8875 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8875 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v10; // x8

  if ( (byte_4BD887B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD887B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C22094(itemList, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v7;
        v10 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v10[3].monitor) == svtId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v10; // x8

  if ( (byte_4BD887C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD887C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C22094(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v7;
        v10 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v10[3].fields._syncRoot) == commandCodeId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v6;
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


System_String_o *__fastcall ServantOperationListViewManager__GetEmptyMessageCode(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isNotEmpty,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4BD8852 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11793/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C21E38(&StringLiteral_3775/*"COMMAND_CODE_EMPTY"*/);
    sub_1C21E38(&StringLiteral_11753/*"SERVANT_ALL_EMPTY"*/);
    sub_1C21E38(&StringLiteral_11990/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8852 = 1;
  }
  if ( isNotEmpty )
  {
    v6 = &StringLiteral_11990/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v6 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v6 = off_4609D48[kind];
  }
  return (System_String_o *)*v6;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  int64_t itemList; // x0
  int32_t v6; // w21
  int64_t v7; // x22
  __int64 methodPtr_low; // x10
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BD886B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD886B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1C22094(itemList, v4);
  v6 = 0;
  while ( v6 < *(_DWORD *)(itemList + 24) )
  {
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v6,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v7 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    itemList = ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( (itemList & 1) != 0 && (*(_BYTE *)(v7 + 188) || *(_BYTE *)(v7 + 190) || *(_BYTE *)(v7 + 203)) )
    {
      if ( !v3 )
        goto LABEL_19;
      items = v3->fields._items;
      v16 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v7,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v7;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v7, v9, v10, v11, v12, v13, v14);
      }
    }
    itemList = (int64_t)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v3;
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
    sub_1C22094(this, item);
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
    sub_1C22094(this, item);
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
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BD886C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD886C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1C22094(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v7 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_IsServant(v7, 0LL);
      if ( ((unsigned __int8)itemList & 1) != 0
        && (v7->fields._IsEquippedCommandCodeServant_k__BackingField
         || v7->fields._IsCommandCardOpenServant_k__BackingField) )
      {
        if ( !v3 )
          goto LABEL_19;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v7,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v7;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v7, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v3;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4BD8868 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8868 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C22094(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v7 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                                v7,
                                                                0LL);
      if ( !v3 )
        goto LABEL_16;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v3->fields._size;
      v4 = itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_36370E8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_16;
  }
  return v3;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4BD886A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD886A = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C22094(itemList, userCommandCodeId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v7 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserCommandCodeId(v7, 0LL) == userCommandCodeId )
    {
      return v7->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4BD8869 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8869 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C22094(itemList, userServantId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v7 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserSvtId(v7, 0LL) == userServantId )
    {
      return v7->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4BD8867 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8867 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C22094(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v7 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserSvtId(v7, 0LL);
      if ( !v3 )
        goto LABEL_16;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v3->fields._size;
      v4 = itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_36370E8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_16;
  }
  return v3;
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


ListViewSort_o *__fastcall ServantOperationListViewManager__GetSortInfo(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationListViewManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4BD884F & 1) == 0 )
  {
    sub_1C21E38(&ServantOperationListViewManager_TypeInfo);
    byte_4BD884F = 1;
  }
  switch ( kind )
  {
    case 2:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      v5 = 32LL;
      return *(ListViewSort_o **)((char *)&v4->static_fields->FILTER2_MAX_KIND_NUM + v5);
    case 1:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      v5 = 24LL;
      return *(ListViewSort_o **)((char *)&v4->static_fields->FILTER2_MAX_KIND_NUM + v5);
    case 0:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
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


System_String_o *__fastcall ServantOperationListViewManager__GetStatusText(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4BD8857 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11843/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C21E38(&StringLiteral_11841/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C21E38(&StringLiteral_11842/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8857 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11843/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11841/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11842/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall ServantOperationListViewManager__GetSwapList(
        ServantOperationListViewManager_o *this,
        int32_t modekind,
        System_Int64_array **changeIds,
        System_Int64_array **revokeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v8; // x23
  System_Collections_Generic_List_long__o *v9; // x22
  int64_t v10; // x1
  int64_t v11; // x2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v18; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v22; // x25
  _BOOL8 IsSwap; // x0
  _BOOL8 ItemCollectId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Int64_array *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Int64_array **v49; // x0
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD8885 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8885 = 1;
  }
  id = 0LL;
  v8 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v18 = 0;
  while ( v18 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v18,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
        v22 = (ServantOperationListViewItem_o *)Item;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)Item,
               v22,
               this->fields.modeKind,
               v20);
    if ( !IsSwap )
      goto LABEL_27;
    ItemCollectId = ServantOperationListViewManager__TryGetItemCollectId(
                      (ServantOperationListViewManager_o *)IsSwap,
                      v22,
                      &id,
                      v12);
    if ( !ItemCollectId )
      goto LABEL_27;
    itemList = (struct System_Collections_Generic_List_ListViewItem__o *)ServantOperationListViewManager__GetIsSelected(
                                                                           (ServantOperationListViewManager_o *)ItemCollectId,
                                                                           v22,
                                                                           this->fields.modeKind,
                                                                           v12);
    v10 = id;
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_28;
      items = v9->fields._items;
      v26 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v32 = v26[4];
        v33 = v9;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v33,
          v10,
          *(const MethodInfo_36370E8 **)(*(_QWORD *)(v32 + 192) + 112LL));
        goto LABEL_27;
      }
      v28 = &items->obj.klass + size;
      v9->fields._size = size + 1;
    }
    else
    {
      if ( !v8 )
        goto LABEL_28;
      v29 = v8->fields._items;
      v30 = Method_System_Collections_Generic_List_long__Add__;
      ++v8->fields._version;
      if ( !v29 )
        goto LABEL_28;
      v31 = v8->fields._size;
      if ( (unsigned int)v31 >= v29->max_length )
      {
        v32 = v30[4];
        v33 = v8;
        goto LABEL_26;
      }
      v28 = &v29->obj.klass + v31;
      v8->fields._size = v31 + 1;
    }
    v28[4] = (Il2CppClass *)v10;
LABEL_27:
    itemList = this->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_28;
  }
  if ( !v8 || !v9 )
LABEL_28:
    sub_1C22094(itemList, v10);
  v34 = v9->fields._size + v8->fields._size;
  if ( v34 < 1 )
  {
    *changeIds = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)changeIds, 0LL, v11, (int32_t)v12, v13, v14, v15, v16);
    v49 = revokeIds;
    v42 = 0LL;
    *revokeIds = 0LL;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v35;
    sub_1C21DDC((PartyOrganizationUtility_o *)changeIds, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v9,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v42;
    v49 = revokeIds;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)v49, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  return v34 > 0;
}


System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9

  if ( (byte_4BD8856 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17958/*"button_push_reg"*/);
    sub_1C21E38(&StringLiteral_17959/*"button_push_unreg"*/);
    sub_1C21E38(&StringLiteral_17944/*"button_allchoice_reg"*/);
    sub_1C21E38(&StringLiteral_17947/*"button_alllock_unreg"*/);
    sub_1C21E38(&StringLiteral_17960/*"button_select_reg"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_17961/*"button_select_unreg"*/);
    sub_1C21E38(&StringLiteral_17946/*"button_alllock_reg"*/);
    sub_1C21E38(&StringLiteral_17945/*"button_allchoice_unreg"*/);
    byte_4BD8856 = 1;
  }
  switch ( kind )
  {
    case 0:
      v6 = &StringLiteral_17961/*"button_select_unreg"*/;
      v7 = &StringLiteral_17960/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v6 = &StringLiteral_17947/*"button_alllock_unreg"*/;
      v7 = &StringLiteral_17946/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v6 = &StringLiteral_17945/*"button_allchoice_unreg"*/;
      v7 = &StringLiteral_17944/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v6 = &StringLiteral_17959/*"button_push_unreg"*/;
      v7 = &StringLiteral_17958/*"button_push_reg"*/;
LABEL_9:
      if ( isSelected )
        v6 = v7;
      break;
    default:
      v6 = (__int64 *)&StringLiteral_1/*""*/;
      break;
  }
  return (System_String_o *)*v6;
}


UserCommandCodeEntity_array *__fastcall ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD8851 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8851 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  return UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
}


UserServantEntity_array *__fastcall ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD8850 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8850 = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_1C22094(Instance, v5);
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
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4BD884B & 1) == 0 )
  {
    sub_1C21E38(&ServantOperationListViewManager_TypeInfo);
    byte_4BD884B = 1;
  }
  v2 = ServantOperationListViewManager_TypeInfo;
  if ( !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v2 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1C22094(servantSortInfo, v1);
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
    if ( ServantOperationListViewItem__get_IsCanNotSelect(item, 0LL) )
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

  if ( this->fields.isInConfirm )
    return 1;
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_12;
  if ( parentManager->fields._TotalSum_k__BackingField + addSum >= parentManager->fields._SelectMax_k__BackingField )
    return 0;
  sort = this->fields.sort;
  if ( !sort )
LABEL_12:
    sub_1C22094(this, item);
  return !item
      || sort->fields.listViewKind
      || !ServantOperationListViewItem__get_IsOrganization(item, 0LL)
      || !ServantOperationListViewItem__get_IsSellEnableServant(item, 0LL)
      || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void __fastcall ServantOperationListViewManager__ModifyCommandCodes(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v11; // x21
  Il2CppObject v12; // q0
  int64_t v13; // x22
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4BD885A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD885A = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_325E370 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_1C22094(Instance, v8);
    v9 = 0;
    while ( v9 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v9,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v11 = (ServantOperationListViewItem_o *)Instance;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      if ( entity )
      {
        if ( !v11 )
          goto LABEL_30;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId(v11, 0LL);
        if ( !entity )
          goto LABEL_30;
        v12 = entity[2];
        v13 = Instance;
        *(Il2CppObject *)&v16.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v16.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v15 = v16;
        if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v15, 0LL) )
          ServantOperationListViewItem__setUserCommandCodeEntity(v11, (UserCommandCodeEntity_o *)entity, 0LL);
      }
      else if ( !v11 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem(v11, 0, 0LL);
      viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        Instance = (int64_t)v11->fields.viewObject;
        if ( !Instance )
          goto LABEL_30;
        (*(void (__fastcall **)(int64_t, ServantOperationListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v11,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v9;
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


void __fastcall ServantOperationListViewManager__ModifyLockItem(
        ServantOperationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w26
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v16; // x23
  int64_t UserSvtId; // x0
  __int128 v18; // q0
  int64_t v19; // x24
  UnityEngine_Object_o *viewObject; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]

  if ( (byte_4BD885C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD885C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v12 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1C22094(Instance, v11);
      }
      v12 = Instance;
    }
    v13 = 0;
    v14 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v13 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v13,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v16 = (ServantOperationListViewItem_o *)Instance;
        else
          v16 = 0LL;
        if ( !v12 )
          goto LABEL_25;
      }
      else
      {
        v16 = 0LL;
        if ( !v12 )
          goto LABEL_25;
      }
      if ( !v16 )
        goto LABEL_37;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(v16, 0LL);
      v18 = *(_OWORD *)(v12 + 32);
      v19 = UserSvtId;
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v22.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v21, 0LL);
      if ( v19 == Instance )
        ServantOperationListViewItem__setUserServantEntity(v16, (UserServantEntity_o *)v12, 0LL);
LABEL_25:
      if ( v14 )
      {
        if ( !v16 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem(v16, 0LL);
        ServantOperationListViewItem__ModifyChoiceItem(v16, 0LL);
        ServantOperationListViewItem__ModifyPushItem(v16, 0LL);
      }
      else if ( !v16 )
      {
        goto LABEL_37;
      }
      viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v16->fields.viewObject;
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, ServantOperationListViewItem_o *, _QWORD))(*(_QWORD *)Instance
                                                                                                + 392LL))(
                     Instance,
                     v16,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = (__int64)v16->fields.viewObject;
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v16, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItemComandCode(
        ServantOperationListViewManager_o *this,
        int64_t usrCmdId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w26
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v16; // x23
  int64_t UserCommandCodeId; // x0
  __int128 v18; // q0
  int64_t v19; // x24
  UnityEngine_Object_o *viewObject; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]

  if ( (byte_4BD885E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD885E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v12 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1C22094(Instance, v11);
      }
      v12 = Instance;
    }
    v13 = 0;
    v14 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v13 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v13,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v16 = (ServantOperationListViewItem_o *)Instance;
        else
          v16 = 0LL;
        if ( !v12 )
          goto LABEL_25;
      }
      else
      {
        v16 = 0LL;
        if ( !v12 )
          goto LABEL_25;
      }
      if ( !v16 )
        goto LABEL_37;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(v16, 0LL);
      v18 = *(_OWORD *)(v12 + 32);
      v19 = UserCommandCodeId;
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v22.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v21, 0LL);
      if ( v19 == Instance )
        ServantOperationListViewItem__setUserCommandCodeEntity(v16, (UserCommandCodeEntity_o *)v12, 0LL);
LABEL_25:
      if ( v14 )
      {
        if ( !v16 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem(v16, 0LL);
        ServantOperationListViewItem__ModifyChoiceItem(v16, 0LL);
      }
      else if ( !v16 )
      {
        goto LABEL_37;
      }
      viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v16->fields.viewObject;
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, ServantOperationListViewItem_o *, _QWORD))(*(_QWORD *)Instance
                                                                                                + 392LL))(
                     Instance,
                     v16,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = (__int64)v16->fields.viewObject;
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v16, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_33771196(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v10; // x20
  ServantOperationListViewManager_o *v11; // x23
  int64_t UserSvtId; // x0
  __int128 v13; // q1
  ServantOperationListViewManager_o *v14; // x24
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_4BD885D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD885D = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v11 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, 0LL);
      v13 = *(_OWORD *)&v11->fields.dropObjectList;
      v14 = (ServantOperationListViewManager_o *)UserSvtId;
      *(UnityEngine_MonoBehaviour_Fields *)&v17.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v17.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v16 = v17;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                    &v16,
                                                    0LL);
      if ( v14 == this )
        ServantOperationListViewItem__setUserServantEntity(item, (UserServantEntity_o *)v11, 0LL);
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
    ServantOperationListViewItem__ModifyLockItem(item, 0LL);
    ServantOperationListViewItem__ModifyChoiceItem(item, 0LL);
    ServantOperationListViewItem__ModifyPushItem(item, 0LL);
  }
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(this, item);
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x25
  bool v8; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w22
  UserCommandCodeEntity_o **v11; // x29
  System_Collections_Generic_List_object__o *v12; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  __int128 v15; // q0
  UserCommandCodeEntity_o *v16; // x8
  __int128 v17; // q0
  System_Collections_Generic_List_object__o *v18; // x24
  struct System_Object_array *v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-80h]

  if ( (byte_4BD8860 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8860 = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v10 = 0;
      v11 = &userCommandCodeEntities->m_Items[v7];
      while ( 1 )
      {
        if ( v10 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v10,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v12 = itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        items = itemList[3].fields._items;
        if ( items )
        {
          v15 = *(_OWORD *)items->m_Items;
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&items->bounds;
          *(_OWORD *)&v26.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v26;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                                    &v25,
                                                                    0LL);
          if ( v7 >= userCommandCodeEntities->max_length )
            sub_1C2209C(itemList, userCommandCodeEntities);
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_26;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = itemList;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v24.fields.fakeValue = v17;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                                    &v24,
                                                                    0LL);
          if ( v18 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v10;
        if ( !itemList )
          goto LABEL_26;
      }
      v19 = v12[3].fields._items;
      if ( !v19 )
LABEL_26:
        sub_1C22094(itemList, userCommandCodeEntities);
      v20 = *(_OWORD *)v19->m_Items;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v19->bounds;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v26;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v23, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(this, v21, 1, v8, v22);
LABEL_24:
      ++v7;
    }
    while ( (__int64)v7 < (int)userCommandCodeEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedServants(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x25
  bool v8; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w23
  UserServantEntity_o **v11; // x29
  ServantOperationListViewItem_o *v12; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  Il2CppObject v15; // q0
  UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  System_Collections_Generic_List_object__o *v18; // x24
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-80h]

  if ( (byte_4BD885F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD885F = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v10 = 0;
      v11 = &userServantEntities->m_Items[v7];
      while ( 1 )
      {
        if ( v10 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v10,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v12 = (ServantOperationListViewItem_o *)itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        syncRoot = itemList[2].fields._syncRoot;
        if ( syncRoot )
        {
          v15 = syncRoot[2];
          *(Il2CppObject *)&v26.fields.currentCryptoKey = syncRoot[1];
          *(Il2CppObject *)&v26.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v26;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                                    &v25,
                                                                    0LL);
          if ( v7 >= userServantEntities->max_length )
            sub_1C2209C(itemList, userServantEntities);
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_26;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = itemList;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v24.fields.fakeValue = v17;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                                    &v24,
                                                                    0LL);
          if ( v18 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v10;
        if ( !itemList )
          goto LABEL_26;
      }
      UserServantEntity_k__BackingField = v12->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
LABEL_26:
        sub_1C22094(itemList, userServantEntities);
      v20 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v26;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v23, 0LL);
      ServantOperationListViewManager__ModifyLockItem_33771196(this, v12, v21, 1, v8, v22);
LABEL_24:
      ++v7;
    }
    while ( (__int64)v7 < (int)userServantEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyPushedServant(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *v3; // x19
  _QWORD *SelfUserGame; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  _QWORD *v7; // x20
  int32_t v8; // w21
  _QWORD *v9; // x22
  __int64 methodPtr_low; // x10
  __int64 v11; // x8
  __int128 v12; // q0
  _QWORD *v13; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h]

  v3 = this;
  if ( (byte_4BD8861 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8861 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_1C22094(SelfUserGame, v5);
    v7 = SelfUserGame;
    v8 = 0;
    while ( v8 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v8,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( SelfUserGame )
      {
        v9 = SelfUserGame;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*SelfUserGame + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantOperationListViewItem_c **)(*(_QWORD *)(*SelfUserGame + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
        {
          v11 = SelfUserGame[14];
          if ( v11 )
          {
            if ( !v7 )
              goto LABEL_16;
            v12 = *(_OWORD *)(v11 + 32);
            v13 = (_QWORD *)v7[15];
            *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
            *(_OWORD *)&v15.fields.fakeValue = v12;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v14 = v15;
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v14, 0LL);
            *((_BYTE *)v9 + 201) = v13 == SelfUserGame;
          }
          itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
          ++v8;
          if ( itemList )
            continue;
        }
      }
      goto LABEL_16;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyServants(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v12; // x22
  Il2CppObject v13; // q0
  int64_t v14; // x23
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4BD885B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD885B = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_1C22094(Instance, v9);
    v10 = 0;
    while ( v10 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v10,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v12 = (ServantOperationListViewItem_o *)Instance;
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( entity )
      {
        if ( !v12 )
          goto LABEL_31;
        Instance = ServantOperationListViewItem__get_UserSvtId(v12, 0LL);
        if ( !entity )
          goto LABEL_31;
        v13 = entity[2];
        v14 = Instance;
        *(Il2CppObject *)&v17.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v17.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v16 = v17;
        if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v16, 0LL) )
          ServantOperationListViewItem__setUserServantEntity(v12, (UserServantEntity_o *)entity, 0LL);
      }
      else if ( !v12 )
      {
        goto LABEL_31;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId(v12, 0LL);
      if ( !SelfUserGame )
        goto LABEL_31;
      ServantOperationListViewItem__ModifyItem(v12, Instance == SelfUserGame->fields.favoriteUserSvtId, 0LL);
      viewObject = (UnityEngine_Object_o *)v12->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        Instance = (int64_t)v12->fields.viewObject;
        if ( !Instance )
          goto LABEL_31;
        (*(void (__fastcall **)(int64_t, ServantOperationListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v12,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v10;
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
  __int64 v8; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4BD8871 & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
    byte_4BD8871 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  if ( !selectItem )
    sub_1C22094(v7, v8);
  ServantOperationListViewItem__SwapChoice(selectItem, 0LL);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0LL);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v9; // w9

  if ( (byte_4BD8876 & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    sub_1C21E38(&ServantOperationListViewManager_TypeInfo);
    byte_4BD8876 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !ServantOperationListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1C22094(v5, v6);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v9 = filter2Kind + 1;
    else
      v9 = 0;
    sort->fields.filter2Kind = v9;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickFilterKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w9
  ListViewManager_o *v13; // x3
  int32_t v14; // w1

  if ( (byte_4BD8877 & 1) == 0 )
  {
    sub_1C21E38(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndSelectFilterKind__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickFilterKind__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8877 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C22084(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_1C22094(v10, v11);
    if ( kind == 1 )
      v12 = 5;
    else
      v12 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v13 = 0LL;
    else
      v13 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v14 = 6;
    else
      v14 = v12;
    CommonUI__OpenServantFilterSelectMenu_31135152(v8, v14, sort, v13, v9, -1, 0LL);
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
  __int64 v8; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4BD8870 & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickLockModeItem__);
    byte_4BD8870 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0LL);
  if ( !selectItem )
    sub_1C22094(v7, v8);
  ServantOperationListViewItem__SwapLock(selectItem, 0LL);
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0LL);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ServantOperationListViewItem_o **v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  int64_t v24; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v26; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v31; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  System_Object_array *v35; // x23
  int32_t Rarity; // w27
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x27
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x26
  int32_t v51; // w0
  Il2CppClass *v52; // x8
  int32_t v53; // w25
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x25
  int32_t v61; // w0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x25
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x25
  ServantOperationListViewItem_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x9
  int32_t SvtId_k__BackingField; // w20
  int32_t v79; // w0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x20
  System_String_o *v87; // x20
  System_String_o *v88; // x22
  System_String_o *v89; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v91; // x25
  __int64 v92; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4BD8872 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickPushModeItem__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__);
    sub_1C21E38(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_1C21E38(&StringLiteral_12113/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12111/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12112/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_12114/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4BD8872 = 1;
  }
  v5 = sub_1C22084(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_59;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = selectItem;
  v14 = (ServantOperationListViewItem_o **)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)selectItem, v15, v16, v17, v18, v19, v20);
  v21 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v22 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  v24 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v24 )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v14, v23);
    return;
  }
  if ( !*v14 )
    goto LABEL_59;
  UserServantEntity_k__BackingField = (*v14)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_59;
  v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v94.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v93 = v94;
  if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v93, 0LL) )
    goto LABEL_13;
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             v24,
             (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_59;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = klass;
  *(_QWORD *)&v95.fields.fakeValue = monitor;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v95, 0LL);
  if ( !v28 )
    goto LABEL_59;
  v31 = DataMasterBase_object__object__int___GetEntity(
          v28,
          SelfUserGame,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v35 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v35 )
LABEL_59:
    sub_1C22094(SelfUserGame, v7);
  v43 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v35->max_length )
    goto LABEL_60;
  v35->m_Items[0] = (Il2CppObject *)v43;
  sub_1C21DDC((PartyOrganizationUtility_o *)v35->m_Items, v43, v37, v38, v39, v40, v41, v42);
  if ( !v31 )
    goto LABEL_59;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v31, 0LL);
  v50 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_60;
  v35->m_Items[1] = (Il2CppObject *)v50;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[1], v50, v44, v45, v46, v47, v48, v49);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  v52 = Entity[6].klass;
  *(_QWORD *)&v96.fields.fakeValue = Entity[6].monitor;
  v53 = v51;
  *(_QWORD *)&v96.fields.currentCryptoKey = v52;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v96, 0LL);
  if ( !Master_object )
    goto LABEL_59;
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v53,
                            SelfUserGame,
                            1,
                            0LL);
  v60 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_60;
  v35->m_Items[2] = (Il2CppObject *)v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[2], v60, v54, v55, v56, v57, v58, v59);
  if ( !*v14 )
    goto LABEL_59;
  SelfUserGame = (__int64)(*v14)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_59;
  v61 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)Rarity__getRarityType(v61, 0LL);
  v68 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_60;
  v35->m_Items[3] = (Il2CppObject *)v68;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[3], v68, v62, v63, v64, v65, v66, v67);
  if ( !*v14 )
    goto LABEL_59;
  SelfUserGame = (__int64)(*v14)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v75 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_60;
  v35->m_Items[4] = (Il2CppObject *)v75;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[4], v75, v69, v70, v71, v72, v73, v74);
  v76 = *v14;
  if ( !*v14 )
    goto LABEL_59;
  v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v76->fields._UserServantEntity_k__BackingField;
  if ( !v77 )
    goto LABEL_59;
  SvtId_k__BackingField = v76->fields._SvtId_k__BackingField;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v77[6], 0LL);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            SvtId_k__BackingField,
                            v79,
                            1,
                            0LL);
  v86 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C21F74(SelfUserGame, v35->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v92 = sub_1C220B8();
      sub_1C21F60(v92, 0LL);
    }
  }
  if ( v35->max_length <= 5 )
LABEL_60:
    sub_1C2209C(SelfUserGame, v7);
  v35->m_Items[5] = (Il2CppObject *)v86;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->m_Items[5], v86, v80, v81, v82, v83, v84, v85);
  v87 = System_String__Format_63129984(v34, v35, 0LL);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v91,
    (Il2CppObject *)v5,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_59;
  CommonUI__OpenConfirmDialog_31128528(
    (CommonUI_o *)Instance,
    v33,
    v87,
    v88,
    v89,
    v91,
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 488LL),
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 500LL),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0LL);
}


void __fastcall ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantOperationListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4BD887E & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickScaleChange__);
    byte_4BD887E = 1;
  }
  v3 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 110) = v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1C22094(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v20);
  ServantOperationListViewManager__SetMode_33774368(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x19
  const MethodInfo *v5; // x4
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct ServantOperationManager_o *v13; // x8
  ServantOperationListViewManager_o *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct ServantOperationManager_o *v18; // x8
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  bool IsSelectEnable; // w21
  _QWORD *v25; // x8
  System_Reflection_MethodBase_o *v26; // x0
  struct ServantOperationManager_o *v27; // x8
  int32_t v28; // w9
  UILabel_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct ServantOperationManager_o *v33; // x8
  ServantOperationListViewManager_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct ServantOperationManager_o *v38; // x8
  Il2CppObject *v39; // x23
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BD886E & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickSelectListView__);
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&StringLiteral_12620/*"SUM_INFO"*/);
    byte_4BD886E = 1;
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
    v6 = Method_ServantOperationListViewManager_OnClickSelectListView__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    parentManager = v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SUM_INFO"*/, 0LL);
      v13 = v4->fields.parentManager;
      if ( v13 )
      {
        v14 = this;
        TotalSum_k__BackingField = v13->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v10,
                                                      v11,
                                                      v12);
        v18 = v4->fields.parentManager;
        if ( v18 )
        {
          v19 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v18->fields._SelectMax_k__BackingField;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v15, v16, v17);
          this = (ServantOperationListViewManager_o *)System_String__Format_63129848(
                                                        (System_String_o *)v14,
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
                v22);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_27:
              ServantOperationListViewManager__RefrashListDisp(v4, v23);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v5);
  v25 = Method_ServantOperationListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v26 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v25, v25[4]);
  if ( IsSelectEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0LL);
    v27 = v4->fields.parentManager;
    if ( v27 )
    {
      v28 = v27->fields._TotalSum_k__BackingField;
      selectItem->fields.selectNum = v28;
      ++v4->fields.selectSum;
      v27->fields._TotalSum_k__BackingField = v28 + 1;
      v29 = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SUM_INFO"*/, 0LL);
      v33 = v4->fields.parentManager;
      if ( v33 )
      {
        v34 = this;
        TotalSum_k__BackingField = v33->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v30,
                                                      v31,
                                                      v32);
        v38 = v4->fields.parentManager;
        if ( v38 )
        {
          v39 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v38->fields._SelectMax_k__BackingField;
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v35, v36, v37);
          this = (ServantOperationListViewManager_o *)System_String__Format_63129848(
                                                        (System_String_o *)v34,
                                                        v39,
                                                        v40,
                                                        0LL);
          if ( v29 )
          {
            UILabel__set_text(v29, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v41);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_29:
    sub_1C22094(this, selectItem);
  }
  OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSortAscendingOrder(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4BD887A & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    byte_4BD887A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C22094(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  int32_t v13; // w1

  if ( (byte_4BD8874 & 1) == 0 )
  {
    sub_1C21E38(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndSelectSortKind__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickSortKind__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8874 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C22084(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_1C22094(v10, v11);
    if ( kind == 1 )
      v12 = 2;
    else
      v12 = 1;
    if ( kind == 2 )
      v13 = 6;
    else
      v13 = v12;
    CommonUI__OpenServantSortSelectMenu(v8, v13, sort, 1, v9, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BD8881 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndClickTabChoice__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickTabChoice__);
    byte_4BD8881 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v6,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v5);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabLock(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BD8880 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndClickTabLock__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickTabLock__);
    byte_4BD8880 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v6,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v5);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabPush(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_bool__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4BD8882 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndClickTabPush__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickTabPush__);
    byte_4BD8882 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    v5 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v5, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabPush__, 0LL);
    ServantOperationListViewManager__StatusRequest(this, v5, v6);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BD887F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnClickTabStatus__);
    byte_4BD887F = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v5);
    v6 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      0LL);
    ServantOperationListViewManager__StatusRequest(this, v6, v7);
  }
}


void __fastcall ServantOperationListViewManager__OnMoveEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_4BD8866 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8866 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_1C22094(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


void __fastcall ServantOperationListViewManager__PushRequest(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4BD8873 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8873 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserServantEntity_k__BackingField )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &UserServantEntity_k__BackingField->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v43, 0LL);
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                      UserServantEntity_k__BackingField->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1C22094(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_4BD8858 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
    byte_4BD8858 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  ServantOperationManager__RefrashListDisp(parentManager, method);
  parentManager = (ServantOperationManager_o *)ServantOperationListViewManager__get_ObjectList(this, v4);
  if ( !parentManager )
    goto LABEL_10;
  v5 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( SLODWORD(parentManager->fields.m_CancellationTokenSource) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      parentManager = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                     v5,
                                                     v6,
                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
      if ( !parentManager )
        break;
      ((void (__fastcall *)(ServantOperationManager_o *, bool, void *))parentManager->klass[1]._1.parent)(
        parentManager,
        this->fields.isInput,
        parentManager->klass[1]._1.generic_class);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_10:
    sub_1C22094(parentManager, method);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  ServantOperationListViewItem_o *v5; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v7; // x3

  if ( (byte_4BD886D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD886D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_1C22094(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = (ServantOperationListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect((ListViewItem_o *)itemList, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v5, v7);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v4;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD8865 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_1C21E38(&Method_ServantOperationListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD8865 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct ServantOperationManager_o *v10; // x8
  ServantOperationListViewManager_o *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct ServantOperationManager_o *v15; // x8
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BD8864 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&StringLiteral_12620/*"SUM_INFO"*/);
    byte_4BD8864 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_IsCanNotSelect(item, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      parentManager = v4->fields.parentManager;
      --v4->fields.selectSum;
      if ( parentManager )
      {
        --parentManager->fields._TotalSum_k__BackingField;
        selectDoneLabel = v4->fields.selectDoneLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12620/*"SUM_INFO"*/,
                                                      0LL);
        v10 = v4->fields.parentManager;
        if ( v10 )
        {
          v11 = this;
          TotalSum_k__BackingField = v10->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                        int_TypeInfo,
                                                        &TotalSum_k__BackingField,
                                                        v7,
                                                        v8,
                                                        v9);
          v15 = v4->fields.parentManager;
          if ( v15 )
          {
            v16 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v15->fields._SelectMax_k__BackingField;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v12, v13, v14);
            this = (ServantOperationListViewManager_o *)System_String__Format_63129848(
                                                          (System_String_o *)v11,
                                                          v16,
                                                          v17,
                                                          0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v18);
              this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
              if ( this )
              {
                ServantOperationManager__numberAdjustment(
                  (ServantOperationManager_o *)this,
                  item->fields.selectNum,
                  v19);
                ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
                return 1;
              }
            }
          }
        }
      }
LABEL_15:
      sub_1C22094(this, item);
    }
  }
  return 0;
}


void __fastcall ServantOperationListViewManager__SetDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v8; // w20
  int32_t v9; // w22
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct ServantOperationManager_o *v21; // x8
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD8889 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_SetDragEnd__);
    sub_1C21E38(&StringLiteral_12620/*"SUM_INFO"*/);
    byte_4BD8889 = 1;
  }
  v3 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantOperationListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v8 = this->fields.dragStartIndex;
    else
      v8 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = this->fields.dragEndIndex;
    else
      v9 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v8++, v5);
    while ( v8 <= v9 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_19;
  v17 = v11;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v13, v14, v15);
  v21 = this->fields.parentManager;
  if ( !v21
    || (v22 = (Il2CppObject *)v11,
        SelectMax_k__BackingField = v21->fields._SelectMax_k__BackingField,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v18, v19, v20),
        v11 = System_String__Format_63129848(v17, v22, v23, 0LL),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_1C22094(v11, v12);
  }
  UILabel__set_text(selectDoneLabel, v11, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v24);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFE510;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v9; // x3
  ServantOperationListViewItem_o *v10; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *viewObject; // x19
  __int64 v13; // x10
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4BD8887 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&ServantOperationListViewObject_TypeInfo);
    byte_4BD8887 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v10 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v10, isDragSelect, v9);
    sub_1C22094(v14, v15);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1C22354(Item);
    goto LABEL_16;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(this, (ServantOperationListViewItem_o *)Item, isDragSelect, v9);
  viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v10->fields.viewObject;
    if ( itemSortList )
    {
      v13 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v13
        && (ServantOperationListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(
          (ServantOperationListViewObject_o *)itemSortList,
          *(const MethodInfo **)&index);
        return;
      }
    }
LABEL_14:
    sub_1C22094(itemSortList, *(_QWORD *)&index);
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
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v9; // w21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_4BD8888 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8888 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BFE510;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  if ( !itemSortList )
    goto LABEL_17;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v9,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        break;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ServantOperationListViewItem__set_IsDragSelect((ServantOperationListViewItem_o *)itemSortList, 0, 0LL);
      if ( size == ++v9 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_17:
    sub_1C22094(itemSortList, *(_QWORD *)&startIndex);
  }
LABEL_12:
  ServantOperationListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4BD8879 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17804/*"btn_filter_on"*/);
    sub_1C21E38(&StringLiteral_17803/*"btn_filter"*/);
    byte_4BD8879 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C22094(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17803/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17804/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall ServantOperationListViewManager__SetIsItemDragSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        bool isDragSelect,
        const MethodInfo *method)
{
  bool v7; // w0
  _BOOL4 v8; // w21
  bool IsSelect; // w0
  const MethodInfo *v10; // x4

  if ( !item )
    sub_1C22094(this, 0LL);
  v7 = ServantOperationListViewItem__get_IsDragSelect(item, 0LL);
  if ( isDragSelect )
  {
    if ( !v7 )
    {
      item->fields._DragSelectNum_k__BackingField = 0;
      if ( !ServantOperationListViewItem__get_IsCanNotSelect(item, 0LL) )
      {
        v8 = this->fields.isDragSelect;
        IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
        if ( !v8 )
        {
          if ( !IsSelect )
            return;
          goto LABEL_19;
        }
        if ( !IsSelect
          && ServantOperationListViewManager__IsSelectEnable(
               this,
               item,
               this->fields.dragSelectSum,
               this->fields.dragServantSelectSum,
               v10) )
        {
          ++this->fields.dragSelectSum;
          if ( ServantOperationListViewItem__get_IsOrganization(item, 0LL)
            && ServantOperationListViewItem__get_IsSellEnableServant(item, 0LL) )
          {
            ++this->fields.dragServantSelectSum;
          }
LABEL_19:
          item->fields._DragSelectNum_k__BackingField = 1;
        }
      }
    }
  }
  else if ( v7 )
  {
    if ( !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) && item->fields._DragSelectNum_k__BackingField >= 1 )
    {
      --this->fields.dragSelectSum;
      if ( ServantOperationListViewItem__get_IsOrganization(item, 0LL)
        && ServantOperationListViewItem__get_IsSellEnableServant(item, 0LL) )
      {
        --this->fields.dragServantSelectSum;
      }
    }
    ServantOperationListViewItem__set_IsDragSelect(item, 0, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__SetIsItemSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  _BOOL4 isDragSelect; // w21
  ServantOperationListViewManager_o *v5; // x20
  const MethodInfo *v6; // x3
  struct ServantOperationManager_o *v7; // x8
  int32_t TotalSum_k__BackingField; // w9
  struct ServantOperationManager_o *parentManager; // x8
  const MethodInfo *v10; // x2

  if ( !item )
    goto LABEL_13;
  if ( item->fields._DragSelectNum_k__BackingField < 1 )
    return;
  isDragSelect = this->fields.isDragSelect;
  v5 = this;
  this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  if ( !isDragSelect )
  {
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    parentManager = v5->fields.parentManager;
    --v5->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 1, item, v6);
      this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
      if ( this )
      {
        ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, v10);
        ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1C22094(this, item);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v7 = v5->fields.parentManager;
  if ( !v7 )
    goto LABEL_13;
  TotalSum_k__BackingField = v7->fields._TotalSum_k__BackingField;
  if ( TotalSum_k__BackingField < v7->fields._SelectMax_k__BackingField )
  {
    item->fields.selectNum = TotalSum_k__BackingField;
    ++v5->fields.selectSum;
    v7->fields._TotalSum_k__BackingField = TotalSum_k__BackingField + 1;
    ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 0, item, v6);
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
  struct ServantOperationManager_o *parentManager; // x8
  int v8; // w27
  ServantOperationListViewManager_o *v9; // x22
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x23
  struct UnityEngine_GameObject_o *v12; // x8
  __int64 v13; // x11
  ServantOperationListViewObject_o *v14; // x0
  const MethodInfo *v15; // x1

  v5 = start;
  v6 = this;
  if ( (byte_4BD8886 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&ServantOperationListViewObject_TypeInfo);
    byte_4BD8886 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_1C22094(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v8 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      this = (ServantOperationListViewManager_o *)v6->fields.itemSortList;
      if ( !this )
        goto LABEL_20;
      this = (ServantOperationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v5,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_20;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v9 = this;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( SHIDWORD(this->fields.leftItem) >= 1 )
      {
        HIDWORD(this->fields.leftItem) = v8;
        dropDragPrefab = (UnityEngine_Object_o *)this->fields.dropDragPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ++v8;
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(dropDragPrefab, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v12 = v9->fields.dropDragPrefab;
          if ( !v12 )
            goto LABEL_20;
          v13 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v12->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13
            || (ServantOperationListViewObject_c *)v12->klass->_2.typeHierarchy[v13 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_20;
          }
          ServantOperationListViewObject__SetupDisp(
            (ServantOperationListViewObject_o *)v9->fields.dropDragPrefab,
            *(const MethodInfo **)&start);
        }
      }
      if ( ++v5 > end )
        return;
    }
    v14 = (ServantOperationListViewObject_o *)sub_1C22354(this);
    ServantOperationListViewObject__SetupDisp(v14, v15);
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
  v4[1].fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)SortInfo;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 184);
  sub_1C21DDC(v4, (int64_t)SortInfo, v6, v7, v8, v9, v10, v11);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_1C22094(0LL, v12);
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onSelectServant,
    (int64_t)onSelectServant,
    (int64_t)onSelectServant,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_33774368(this, mode, v10);
}


void __fastcall ServantOperationListViewManager__SetMode_33774368(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t ObjectSum; // w0
  int32_t v6; // w8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  char v10; // w22
  int32_t v11; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x2
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v15; // x1
  bool v16; // w8
  int v17; // w8
  int32_t v18; // w1

  if ( (byte_4BD8863 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8863 = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v6 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v6 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_14:
      sub_1C22094(itemList, v7);
    v10 = 0;
    v11 = 0;
    while ( v11 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v11,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
          v15 = (ServantOperationListViewItem_o *)Item;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v15, v13);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v10 |= v16;
      ++v11;
      if ( !itemList )
        goto LABEL_14;
    }
    if ( (v10 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v7);
    if ( initMode == 2 )
      v17 = 3;
    else
      v17 = 0;
    if ( initMode == 1 )
      v18 = 2;
    else
      v18 = v17;
    ServantOperationListViewManager__RequestListObject(this, v18, v8);
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
  if ( (byte_4BD8862 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&ServantOperationListViewObject_TypeInfo);
    byte_4BD8862 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)obj, v7, 0LL, method);
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
    sub_1C21DDC(
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
    sub_1C22094(sort, *(_QWORD *)&scaleKind);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  signed int max_length; // w8
  __int64 v11; // x22
  UserServantEntity_o *v12; // x24
  __int128 v13; // q0
  System_Int64_array *v14; // x25
  System_Int64_array *v15; // x26
  int64_t favoriteUserSvtId; // x29
  int64_t v17; // x27
  ServantOperationListViewItem_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BD8853 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8853 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_28;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)MasterData_object,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1C2209C(Instance, v8);
        v12 = userServantEntities->m_Items[v11];
        if ( !v12 )
          break;
        v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
        v15 = equipIdList;
        v14 = svtIdList;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v31, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v17 = Instance;
        v18 = (ServantOperationListViewItem_o *)sub_1C22084(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v18, v11, v12, v14, v15, v17 == favoriteUserSvtId, 0LL);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v25 = *(_QWORD *)(Instance + 16);
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v25 )
          break;
        v27 = *(int *)(Instance + 24);
        if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v18,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * v27;
          *(_DWORD *)(Instance + 24) = v27 + 1;
          *(_QWORD *)(v28 + 32) = v18;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v18, v29);
        max_length = userServantEntities->max_length;
        if ( (int)++v11 >= max_length )
          return v11;
      }
LABEL_28:
      sub_1C22094(Instance, v8);
    }
  }
  LODWORD(v11) = 0;
  return v11;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_33765784(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v9; // x22
  __int64 v10; // x21
  UserCommandCodeEntity_o *v11; // x24
  __int128 v12; // q0
  bool v13; // w25
  ServantOperationListViewItem_o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  const MethodInfo *v25; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h]

  if ( (byte_4BD8854 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8854 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                          (UserServantCommandCodeMaster_o *)Instance,
                          0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v9 = (System_Collections_Generic_List_long__o *)Instance;
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
          sub_1C2209C(Instance, v7);
        v11 = userCommandCodeEntities->m_Items[v10];
        if ( !v11 )
          break;
        v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v28.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v27, 0LL);
        if ( !v9 )
          break;
        v13 = System_Collections_Generic_List_long___Contains(
                v9,
                Instance,
                (const MethodInfo_3637460 *)Method_System_Collections_Generic_List_long__Contains__);
        v14 = (ServantOperationListViewItem_o *)sub_1C22084(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_33751892(v14, v10, v11, v13, 0LL);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v21 = *(_QWORD *)(Instance + 16);
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v21 )
          break;
        v23 = *(int *)(Instance + 24);
        if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v14,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * v23;
          *(_DWORD *)(Instance + 24) = v23 + 1;
          *(_QWORD *)(v24 + 32) = v14;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v14, v15, v16, v17, v18, v19, v20);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v14, v25);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v10 >= max_length )
          return v10;
      }
LABEL_22:
      sub_1C22094(Instance, v7);
    }
  }
  LODWORD(v10) = 0;
  return v10;
}


void __fastcall ServantOperationListViewManager__SetSortButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  System_String_o *v4; // x1
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
  struct ServantOperationManager_o *parentManager; // x20

  if ( (byte_4BD887D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17834/*"btn_sort_up"*/);
    sub_1C21E38(&StringLiteral_17925/*"btn_txt_up"*/);
    sub_1C21E38(&StringLiteral_17878/*"btn_txt_new"*/);
    sub_1C21E38(&StringLiteral_17868/*"btn_txt_down"*/);
    sub_1C21E38(&StringLiteral_17885/*"btn_txt_old"*/);
    sub_1C21E38(&StringLiteral_17831/*"btn_sort_down"*/);
    byte_4BD887D = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_37;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_37;
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
      goto LABEL_37;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17885/*"btn_txt_old"*/ : &StringLiteral_17878/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
        v11 = this->fields.sort;
        if ( v11 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v12 = (System_String_o **)&StringLiteral_17831/*"btn_sort_down"*/;
            v13 = (System_String_o **)&StringLiteral_17834/*"btn_sort_up"*/;
LABEL_29:
            if ( v11->fields.isAscendingOrder )
              v15 = v12;
            else
              v15 = v13;
            UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
        v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17925/*"btn_txt_up"*/ : &StringLiteral_17868/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
        v11 = this->fields.sort;
        if ( v11 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v12 = (System_String_o **)&StringLiteral_17834/*"btn_sort_up"*/;
            v13 = (System_String_o **)&StringLiteral_17831/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_37:
    sub_1C22094(sort, v4);
  }
LABEL_33:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_37;
  v4 = (System_String_o *)sort;
  sort = (ListViewSort_o *)parentManager->fields.filter2Label;
  if ( !sort )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)sort, v4, 0LL);
}


void __fastcall ServantOperationListViewManager__SetStatusKind(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  UICommonButton_o *statusTabButton; // x1
  UISprite_o *statusTabSprite; // x2
  const MethodInfo *v8; // x5
  const MethodInfo *v9; // x5
  UnityEngine_Object_o *pushTabButton; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v13; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UILabel_o *v15; // x20
  ServantOperationListViewManager_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 methodPtr_low; // x9
  ServantOperationListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4BD8855 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ShopRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD8855 = 1;
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
    v8);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.choiceTabButton,
    this->fields.choiceTabSprite,
    this->fields.modeKind,
    2,
    v9);
  pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushTabSprite, 0LL, 0LL) )
      ServantOperationListViewManager__SetTabButton(
        this,
        this->fields.pushTabButton,
        this->fields.pushTabSprite,
        this->fields.modeKind,
        3,
        v13);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0LL),
        v15 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v16,
                                                   this->fields.modeKind,
                                                   v17),
        !v15)
    || (UILabel__set_text(v15, (System_String_o *)statusLabel, 0LL),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0LL )
  {
    sub_1C22094(statusLabel, v11);
  }
  methodPtr_low = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(statusLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    v19 = (ServantOperationListViewManager_o *)sub_1C22354(statusLabel);
    ServantOperationListViewManager__SetFilterButtonImage(v19, v20);
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
    sub_1C22094(this, tabButton);
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
  int32_t v10; // w1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  System_Int64_array *v17; // [xsp+0h] [xbp-30h] BYREF
  System_Int64_array *changeIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8884 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C21E38(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantOperationListViewManager_EndStatusSync__);
    byte_4BD8884 = 1;
  }
  v17 = 0LL;
  changeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onRequestEnd,
    (int64_t)onRequestEnd,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v10, &changeIds, &v17, v11) )
  {
    kind = this->fields.kind;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( kind == 2 )
    {
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          (CommandCodeStatusSyncRequest_o *)Request_object,
          changeIds,
          v17,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0LL);
        return;
      }
LABEL_13:
      sub_1C22094(Request_object, v16);
    }
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_object )
      goto LABEL_13;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_object,
      changeIds,
      v17,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0LL);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v12);
  }
}


void __fastcall ServantOperationListViewManager__SumItems(
        ServantOperationListViewManager_o *this,
        int32_t *qp,
        int32_t *mana,
        int32_t *rarePri,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  __int64 methodPtr_low; // x10
  UserServantEntity_o *syncRoot; // x0
  int32_t v14; // w27
  int32_t v15; // w27
  int32_t v16; // w24
  int32_t SellRarePri; // w0
  UserCommandCodeEntity_o *items; // x0
  int32_t v19; // w27
  int32_t v20; // w27

  if ( (byte_4BD8859 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&ServantOperationListViewItem_TypeInfo);
    byte_4BD8859 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1C22094(itemList, qp);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v11 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      syncRoot = (UserServantEntity_o *)v11[2].fields._syncRoot;
      if ( syncRoot )
      {
        v14 = *qp;
        *qp = UserServantEntity__getSellQp(syncRoot, 0LL) + v14;
        itemList = (System_Collections_Generic_List_object__o *)v11[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v15 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)itemList, 0LL) + v15;
        itemList = (System_Collections_Generic_List_object__o *)v11[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v16 = *rarePri;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)itemList, 0LL);
LABEL_18:
        *rarePri = SellRarePri + v16;
        goto LABEL_19;
      }
      items = (UserCommandCodeEntity_o *)v11[3].fields._items;
      if ( items )
      {
        v19 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp(items, 0LL) + v19;
        itemList = (System_Collections_Generic_List_object__o *)v11[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v20 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)itemList, 0LL) + v20;
        itemList = (System_Collections_Generic_List_object__o *)v11[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v16 = *rarePri;
        SellRarePri = UserCommandCodeEntity__GetSellRarePri((UserCommandCodeEntity_o *)itemList, 0LL);
        goto LABEL_18;
      }
    }
LABEL_19:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
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

  if ( (byte_4BD8883 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BD8883 = 1;
  }
  if ( !item )
    sub_1C22094(this, item);
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v15 = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v12;
    v12[0] = v14;
    v12[1] = v15;
  }
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21

  if ( (byte_4BD886F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4BD886F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C22094(itemList, *(_QWORD *)&selectNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    if ( SLODWORD(itemList->fields._items) > selectNum )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v6,
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_12;
      --LODWORD(itemList->fields._items);
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BD884D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD884D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C22094(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewObject__GetItem(
                                                                  (ServantOperationListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42012552(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  int64_t v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4BD884C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD884C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C22094(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v17 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v17, v8, v9, v10, v11, v12, v13);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v3;
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD888D & 1) == 0 )
  {
    sub_1C21E38(&ServantOperationListViewManager___c_TypeInfo);
    byte_4BD888D = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__0(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD888E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__);
    byte_4BD888E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31128756(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__1(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  ServantOperationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}