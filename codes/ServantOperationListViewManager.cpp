void ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  struct ServantOperationListViewManager_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  ListViewSort_o *v23; // x20
  struct ServantOperationListViewManager_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x19
  ListViewSort_o *v32; // x20
  struct ServantOperationListViewManager_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59345BE & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1479/*"4"*/);
    sub_21FFC50(&StringLiteral_13253/*"ServantOperation"*/);
    byte_59345BE = 1;
  }
  v7 = StringLiteral_13253/*"ServantOperation"*/;
  v40 = 0;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->SORT_SAVE_KEY, v7, v1, v2, v3, v4, v5, v6);
  v40 = 1;
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v10 = System_Int32__ToString((int32_t)&v40, 0);
  v11 = System_String__Concat_75438412(SORT_SAVE_KEY, v10, 0);
  v12 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v12, v11, 3, 0, 0);
  v13 = ServantOperationListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->servantSortInfo, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  v20 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v40 = 2;
  v21 = System_Int32__ToString((int32_t)&v40, 0);
  v22 = System_String__Concat_75438412(v20, v21, 0);
  v23 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v23, v22, 3, 0, 0);
  v24 = ServantOperationListViewManager_TypeInfo->static_fields;
  v24->servantEquipSortInfo = v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v24->servantEquipSortInfo,
    (int32_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = System_String__Concat_75438412(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1479/*"4"*/,
          0);
  v32 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v32, v31, 2, 0, 0);
  v33 = ServantOperationListViewManager_TypeInfo->static_fields;
  v33->commandCodeSortInfo = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->commandCodeSortInfo, (int32_t)v32, v34, v35, v36, v37, v38, v39);
}


void ServantOperationListViewManager___ctor(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantOperationListViewManager__CallOnSelectServant(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_ServantOperationListViewItem__o *onSelectServant; // x20

  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectServant,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, ServantOperationListViewItem_o *, intptr_t))onSelectServant->fields.invoke_impl)(
      onSelectServant->fields.method_code,
      item,
      onSelectServant->fields.method);
  }
}


void ServantOperationListViewManager__CallRequestEnd(
        ServantOperationListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_bool__o *onRequestEnd; // x20
  MissionNaviTransitionBoardItem_o *p_onRequestEnd; // x0

  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    p_onRequestEnd = (MissionNaviTransitionBoardItem_o *)&this->fields.onRequestEnd;
    p_onRequestEnd->klass = 0;
    sub_21FFBF4(p_onRequestEnd, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))onRequestEnd->fields.invoke_impl)(
      onRequestEnd->fields.method_code,
      result,
      onRequestEnd->fields.method);
  }
}


void ServantOperationListViewManager__CancelDragEnd(ServantOperationListViewManager_o *this, const MethodInfo *method)
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
    if ( dragStartIndex >= dragEndIndex )
      v6 = this->fields.dragEndIndex;
    else
      v6 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v7 = this->fields.dragEndIndex;
    else
      v7 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__CancelDragSelect(this, v6++, v2);
    while ( v6 <= v7 );
  }
  ServantOperationListViewManager__RefrashListDisp(this, method);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E92B50;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 naturalAligment; // x10

  if ( (byte_59345BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345BD = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0
    || (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
        itemSortList->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
  HIDWORD(itemSortList[6].fields._syncRoot) = -1;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__ChangeSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        bool isPlus,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8
  ServantEntity_o *servantEntity; // x0
  int32_t sellEnableRestCnt; // w8
  int32_t v10; // w8

  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  if ( sort->fields.listViewKind )
    return;
  if ( !item )
LABEL_12:
    sub_21FFECC(this, isPlus);
  servantEntity = item->fields.servantEntity;
  if ( (!servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0)) && !item->fields.attribute )
  {
    sellEnableRestCnt = this->fields.sellEnableRestCnt;
    if ( isPlus )
      v10 = sellEnableRestCnt + 1;
    else
      v10 = sellEnableRestCnt - 1;
    this->fields.sellEnableRestCnt = v10;
  }
}


void ServantOperationListViewManager__ChangeSortKindDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(ServantOperationListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void ServantOperationListViewManager__CreateList(
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
  __int64 v25; // x2
  System_String_o *EmptyMessageCode; // x20
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_5934580 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5934580 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  ServantOperationListViewManager__SetListViewSort(this, kind, v8);
  sort = this->fields.sort;
  this->fields.kind = kind;
  this->fields.modeKind = modeKind;
  if ( !sort )
    goto LABEL_8;
  this->fields.scaleType = sort->fields.iconScaleKind;
  ServantOperationListViewManager__SetScaleKind(this, v10, v11);
  this->fields.isDragSelect = 1;
  *(_QWORD *)&this->fields.dragStartIndex = -1;
  *(_OWORD *)&this->fields.sellEnableRestCnt = 0u;
  UserServantEntities = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetUserServantEntities(
                                                               v13,
                                                               kind,
                                                               v14);
  UserCommandCodeEntities = ServantOperationListViewManager__GetUserCommandCodeEntities(UserServantEntities, kind, v16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  LODWORD(UserServantEntities) = ServantOperationListViewManager__SetSellEnableRestCount(
                                   this,
                                   (UserServantEntity_array *)UserServantEntities,
                                   SelfUserGame,
                                   v18);
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_41784476(
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  v9 = LocalizationManager__Get(EmptyMessageCode, 0);
  if ( !emptyMessageLabel )
LABEL_8:
    sub_21FFECC(v9, v10);
  UILabel__set_text(emptyMessageLabel, v9, 0);
  ServantOperationListViewManager__SetStatusKind(this, this->fields.modeKind, v27);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantOperationListViewManager__SetFilterButtonImage(this, v28);
  this->fields.isInConfirm = 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__DecideDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  Il2CppObject *v9; // x20
  __int64 naturalAligment; // x9
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_59345BC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345BC = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0, v7);
    sub_21FFECC(v11, v12);
  }
  v9 = Item;
  naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_220024C(
                                                                               Item,
                                                                               ServantOperationListViewItem_TypeInfo,
                                                                               v7,
                                                                               v8);
    goto LABEL_9;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, (ServantOperationListViewItem_o *)Item, v7);
  HIDWORD(v9[17].klass) = -1;
}


void ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantOperationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_593457C & 1) == 0 )
  {
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    byte_593457C = 1;
  }
  v3 = ServantOperationListViewManager_TypeInfo;
  if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v1, v2);
    v3 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_21FFECC(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void ServantOperationListViewManager__DestroyList(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
}


void ServantOperationListViewManager__EndCardFavoriteRequest(
        ServantOperationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  ServantOperationListViewManager__ModifyPushedServant(this, (const MethodInfo *)result);
  ServantOperationListViewManager__ModifyList(this, 0, v4);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__EndClickTabChoice(
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
    sub_21FFECC(0, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__EndClickTabLock(
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
    sub_21FFECC(0, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__EndClickTabPush(
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
    sub_21FFECC(0, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v7);
}


void ServantOperationListViewManager__EndClickTabStatus(
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
    sub_21FFECC(0, v4);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v7);
}


void ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  ServantOperationListViewManager___c_c *v9; // x8
  CommonUI_o *v10; // x19
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v13; // x21
  struct ServantOperationListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59345AA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__);
    sub_21FFC50(&ServantOperationListViewManager___c_TypeInfo);
    byte_59345AA = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantOperationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = ServantOperationListViewManager___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo, v7, v8);
    v9 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__106_0, v13, Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, 0);
    v14 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v14->__9__106_0 = _9__106_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__106_0, (int32_t)_9__106_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
    sub_21FFECC(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v10, _9__106_0, 0);
}


void ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59345A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59345A7 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


void ServantOperationListViewManager__EndStatusSync(
        ServantOperationListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantOperationListViewManager__CallRequestEnd(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantOperationListViewManager__GetAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 v8; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppClass *declaringType; // x23
  Il2CppClass *parent; // x24
  int32_t v13; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_59345AD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345AD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_21FFECC(itemList, *(_QWORD *)&svtId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
      {
        klass = itemList[3].klass;
        if ( klass )
        {
          declaringType = klass->_1.declaringType;
          parent = klass->_1.parent;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v8);
          *(_QWORD *)&v15.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v15.fields.fakeValue = parent;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          ++v7;
          if ( v13 == svtId )
            ++v6;
          if ( itemList )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  __int64 naturalAligment; // x10
  int klass; // w8

  if ( (byte_59345AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345AE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_21FFECC(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
      {
        klass = (int)itemList[4].klass;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
        if ( klass == commandCodeId )
          ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
  }
  return v6;
}


int32_t ServantOperationListViewManager__GetDragEndIndex(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v4; // w8

  if ( start <= end )
    v4 = end;
  else
    v4 = start;
  if ( start < 0 )
    return -1;
  else
    return v4;
}


bool ServantOperationListViewManager__GetDragSelect(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int32_t ServantOperationListViewManager__GetDragStartIndex(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v4; // w8

  if ( start >= end )
    v4 = end;
  else
    v4 = start;
  if ( start < 0 )
    return -1;
  else
    return v4;
}


System_String_o *ServantOperationListViewManager__GetEmptyMessageCode(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isNotEmpty,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_5934584 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/);
    sub_21FFC50(&StringLiteral_3784/*"COMMAND_CODE_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12053/*"SERVANT_ALL_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934584 = 1;
  }
  if ( isNotEmpty )
  {
    v6 = &StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v6 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v6 = off_5296270[kind];
  }
  return (System_String_o *)*v6;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 naturalAligment; // x10
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_593459D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_21FFECC(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v7 = itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0);
    if ( ((unsigned __int8)itemList & 1) != 0
      && (LOBYTE(v7[5].monitor) || BYTE2(v7[5].monitor) || HIBYTE(v7[5].fields._items) || BYTE1(v7[5].fields._size)) )
    {
      if ( !v3 )
        goto LABEL_20;
      items = v3->fields._items;
      v16 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v7,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v7;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v7, v9, v10, v11, v12, v13, v14);
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v3;
}


bool ServantOperationListViewManager__GetIsSelected(
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
    sub_21FFECC(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsLock_k__BackingField;
    goto LABEL_9;
  }
  return 0;
}


bool ServantOperationListViewManager__GetIsSwap(
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
    sub_21FFECC(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsSwapLock_k__BackingField;
    goto LABEL_9;
  }
  return 0;
}


int32_t ServantOperationListViewManager__GetKind(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


ListViewManager_o *ServantOperationListViewManager__GetListViewManagerForServantFilterSelectMenu(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  if ( (unsigned int)(kind - 1) >= 2 )
    return 0;
  return (ListViewManager_o *)this;
}


int32_t ServantOperationListViewManager__GetMenuKind(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w9
  int32_t v4; // w8

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


int32_t ServantOperationListViewManager__GetModeKind(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 naturalAligment; // x10
  ServantEntity_o *monitor; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_593459E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_21FFECC(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v7 = itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      monitor = (ServantEntity_o *)v7[3].monitor;
      if ( monitor )
      {
        itemList = (System_Collections_Generic_List_object__o *)ServantEntity__get_IsServant(monitor, 0);
        if ( ((unsigned __int8)itemList & 1) != 0 && (HIBYTE(v7[5].monitor) || LOBYTE(v7[5].fields._items)) )
        {
          if ( !v3 )
            goto LABEL_20;
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v7,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v7;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
          }
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v3;
}


System_Collections_Generic_List_long__o *ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 naturalAligment; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_593459A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459A = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_21FFECC(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v7 = (ServantOperationListViewItem_o *)itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                                v7,
                                                                v4);
      if ( !v3 )
        goto LABEL_16;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v3->fields._size;
      v4 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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


int32_t ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 naturalAligment; // x10

  if ( (byte_593459C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_21FFECC(itemList, userCommandCodeId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v7 = (ServantOperationListViewItem_o *)itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0)
      && ServantOperationListViewItem__get_UserCommandCodeId(v7, (const MethodInfo *)userCommandCodeId) == userCommandCodeId )
    {
      return v7->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


int32_t ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 naturalAligment; // x10

  if ( (byte_593459B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_21FFECC(itemList, userServantId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v7 = (ServantOperationListViewItem_o *)itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0)
      && ServantOperationListViewItem__get_UserSvtId(v7, (const MethodInfo *)userServantId) == userServantId )
    {
      return v7->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_long__o *ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 naturalAligment; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_5934599 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_5934599 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_21FFECC(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v7 = (ServantOperationListViewItem_o *)itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserSvtId(v7, v4);
      if ( !v3 )
        goto LABEL_16;
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v3->fields._size;
      v4 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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


int32_t ServantOperationListViewManager__GetServantFilterSelectMenuKind(
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
ListViewSort_o *ServantOperationListViewManager__GetSortInfo(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationListViewManager_c *v4; // x0
  ListViewSort_o **p_commandCodeSortInfo; // x8
  ServantOperationListViewManager_c *v6; // x0
  ServantOperationListViewManager_c *v7; // x0

  if ( (byte_5934581 & 1) == 0 )
  {
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    byte_5934581 = 1;
  }
  switch ( kind )
  {
    case 2:
      v7 = ServantOperationListViewManager_TypeInfo;
      if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind, method);
        v7 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v7->static_fields->commandCodeSortInfo;
      return *p_commandCodeSortInfo;
    case 1:
      v6 = ServantOperationListViewManager_TypeInfo;
      if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind, method);
        v6 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v6->static_fields->servantEquipSortInfo;
      return *p_commandCodeSortInfo;
    case 0:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind, method);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v4->static_fields->servantSortInfo;
      return *p_commandCodeSortInfo;
  }
  return 0;
}


int32_t ServantOperationListViewManager__GetSortKind(
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
System_String_o *ServantOperationListViewManager__GetStatusText(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_5934589 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_21FFC50(&StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934589 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
      v4 = &StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    case 2:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
      v4 = &StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    case 1:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
      v4 = &StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool ServantOperationListViewManager__GetSwapList(
        ServantOperationListViewManager_o *this,
        int32_t modekind,
        System_Int64_array **changeIds,
        System_Int64_array **revokeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v8; // x22
  System_Collections_Generic_List_long__o *v9; // x23
  int64_t v10; // x1
  System_String_o *v11; // x2
  MethodInfo *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v18; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x3
  __int64 naturalAligment; // x10
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
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Int64_array *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59345B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345B7 = 1;
  }
  id = 0;
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v18 = 0;
  while ( v18 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v18,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item
      && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
          Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
        v22 = (ServantOperationListViewItem_o *)Item;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
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
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v32 = v26[4];
        v33 = v9;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v33,
          v10,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v32 + 192) + 112LL));
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
      if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
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
    sub_21FFECC(itemList, v10);
  v34 = v9->fields._size + v8->fields._size;
  if ( v34 < 1 )
  {
    *changeIds = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)changeIds, 0, v11, (System_String_o *)v12, v13, v14, v15, v16);
    v42 = 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v35;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)changeIds, (int32_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v9,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *revokeIds = v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)revokeIds, (int32_t)v42, v43, v44, v45, v46, v47, v48);
  return v34 > 0;
}


System_String_o *ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9
  __int64 *v8; // x9
  __int64 *v9; // x10

  if ( (byte_5934588 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18393/*"button_push_reg"*/);
    sub_21FFC50(&StringLiteral_18394/*"button_push_unreg"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_5934588 = 1;
  }
  v6 = (__int64 *)&StringLiteral_1/*""*/;
  if ( kind > 1 )
  {
    v8 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
    if ( isSelected )
    {
      v8 = &StringLiteral_18379/*"button_allchoice_reg"*/;
      v9 = &StringLiteral_18393/*"button_push_reg"*/;
    }
    else
    {
      v9 = &StringLiteral_18394/*"button_push_unreg"*/;
    }
    if ( kind == 3 )
      v6 = v9;
    if ( kind == 2 )
      v6 = v8;
  }
  else
  {
    if ( kind )
    {
      if ( kind != 1 )
        return (System_String_o *)*v6;
      v6 = &StringLiteral_18382/*"button_alllock_unreg"*/;
      v7 = &StringLiteral_18381/*"button_alllock_reg"*/;
    }
    else
    {
      v6 = &StringLiteral_18396/*"button_select_unreg"*/;
      v7 = &StringLiteral_18395/*"button_select_reg"*/;
    }
    if ( isSelected )
      v6 = v7;
  }
  return (System_String_o *)*v6;
}


UserCommandCodeEntity_array *ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5934583 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934583 = 1;
  }
  if ( kind != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  return UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0);
}


UserServantEntity_array *ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5934582 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934582 = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0);
      }
LABEL_12:
      sub_21FFECC(Instance, v5);
    }
    return 0;
  }
}


void ServantOperationListViewManager__InitBack(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  ServantOperationListViewManager__StatusRequest(this, 0, v2);
  ServantOperationListViewManager__SetStatusKind(this, 0, v4);
}


void ServantOperationListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantOperationListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_593457D & 1) == 0 )
  {
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    byte_593457D = 1;
  }
  v3 = ServantOperationListViewManager_TypeInfo;
  if ( !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v1, v2);
    v3 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_21FFECC(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


bool ServantOperationListViewManager__IsDragEnable(
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
    {
      return 0;
    }
    else
    {
      if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0) )
        return 1;
      IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(this, item, 0, 0, v6);
      result = 0;
      if ( IsSelectEnable )
        return 1;
    }
  }
  return result;
}


bool ServantOperationListViewManager__IsDragStart(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


bool ServantOperationListViewManager__IsSelectEnable(
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
    sub_21FFECC(this, item);
  if ( !item )
    return 1;
  if ( sort->fields.listViewKind )
    return 1;
  servantEntity = item->fields.servantEntity;
  if ( servantEntity )
  {
    if ( !ServantEntity__get_IsOrganization(servantEntity, 0) )
      return 1;
  }
  return item->fields.attribute || this->fields.sellEnableRestCnt - addServantSum >= 2;
}


void ServantOperationListViewManager__ModifyCommandCodes(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  System_String_o *v10; // x2
  __int64 naturalAligment; // x10
  int64_t v12; // x21
  __int64 v13; // x2
  int64_t v14; // x22
  Il2CppObject v15; // q1
  int v16; // w8
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_593458C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593458C = 1;
  }
  entity = 0;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_21FFECC(Instance, v8);
    v9 = 0;
    while ( v9 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v9,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == ServantOperationListViewItem_TypeInfo )
          v12 = Instance;
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
      if ( entity )
      {
        if ( !v12 )
          goto LABEL_30;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v12, v8);
        if ( !entity )
          goto LABEL_30;
        v14 = Instance;
        v15 = entity[2];
        v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v27.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v27.fields.fakeValue = v15;
        if ( !v16 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v13);
        v26 = v27;
        if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0) )
        {
          v22 = (int)entity;
          *(_QWORD *)(v12 + 144) = entity;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 144), v22, v10, v17, v18, v19, v20, v21);
        }
      }
      else if ( !v12 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v12, 0, (const MethodInfo *)v10);
      v25 = *(UnityEngine_Object_o **)(v12 + 112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
      {
        Instance = *(_QWORD *)(v12 + 112);
        if ( !Instance )
          goto LABEL_30;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v12,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v9;
      if ( !Instance )
        goto LABEL_30;
    }
  }
}


void ServantOperationListViewManager__ModifyItem(
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


void ServantOperationListViewManager__ModifyList(
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
  ServantOperationListViewManager__ModifyLockedServants(this, UserServantEntities, isIconSizeChange, v6);
  UserCommandCodeEntities = ServantOperationListViewManager__GetUserCommandCodeEntities(v7, this->fields.kind, v8);
  ServantOperationListViewManager__ModifyLockedCommandCodes(this, UserCommandCodeEntities, isIconSizeChange, v10);
}


void ServantOperationListViewManager__ModifyLockItem(
        ServantOperationListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w29
  const MethodInfo *v15; // x2
  __int64 naturalAligment; // x10
  ServantOperationListViewItem_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t UserSvtId; // x24
  __int128 v21; // q1
  int v22; // w8
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *viewObject; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]

  if ( (byte_593458E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593458E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v12 = 0;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
      {
LABEL_37:
        sub_21FFECC(Instance, v11);
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
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == ServantOperationListViewItem_TypeInfo )
          v17 = (ServantOperationListViewItem_o *)Instance;
        else
          v17 = 0;
        if ( !v12 )
          goto LABEL_25;
      }
      else
      {
        v17 = 0;
        if ( !v12 )
          goto LABEL_25;
      }
      if ( !v17 )
        goto LABEL_37;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(v17, v11);
      v21 = *(_OWORD *)(v12 + 32);
      v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v21;
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
      v26 = v27;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
      if ( UserSvtId == Instance )
        ServantOperationListViewItem__setUserServantEntity(v17, (UserServantEntity_o *)v12, v15);
LABEL_25:
      if ( v14 )
      {
        if ( !v17 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem(v17, v11);
        ServantOperationListViewItem__ModifyChoiceItem(v17, v23);
        ServantOperationListViewItem__ModifyPushItem(v17, v24);
      }
      else if ( !v17 )
      {
        goto LABEL_37;
      }
      viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v15);
      Instance = UnityEngine_Object__op_Equality(viewObject, 0, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v17->fields.viewObject;
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, ServantOperationListViewItem_o *, _QWORD))(*(_QWORD *)Instance
                                                                                                + 392LL))(
                     Instance,
                     v17,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = (__int64)v17->fields.viewObject;
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v17, this->fields.seed, 0);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void ServantOperationListViewManager__ModifyLockItemComandCode(
        ServantOperationListViewManager_o *this,
        int64_t usrCmdId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w29
  System_String_o *v15; // x2
  __int64 naturalAligment; // x10
  __int64 v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t UserCommandCodeId; // x24
  __int128 v21; // q1
  int v22; // w8
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *v29; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-80h]

  if ( (byte_5934590 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934590 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v12 = 0;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
      {
LABEL_37:
        sub_21FFECC(Instance, v11);
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
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == ServantOperationListViewItem_TypeInfo )
          v17 = Instance;
        else
          v17 = 0;
        if ( !v12 )
          goto LABEL_25;
      }
      else
      {
        v17 = 0;
        if ( !v12 )
          goto LABEL_25;
      }
      if ( !v17 )
        goto LABEL_37;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v17,
                            v11);
      v21 = *(_OWORD *)(v12 + 32);
      v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v31.fields.fakeValue = v21;
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
      v30 = v31;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v30, 0);
      if ( UserCommandCodeId == Instance )
      {
        *(_QWORD *)(v17 + 144) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 144), v12, v15, v23, v24, v25, v26, v27);
      }
LABEL_25:
      if ( v14 )
      {
        if ( !v17 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v17, v11);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v17, v28);
      }
      else if ( !v17 )
      {
        goto LABEL_37;
      }
      v29 = *(UnityEngine_Object_o **)(v17 + 112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v15);
      Instance = UnityEngine_Object__op_Equality(v29, 0, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v17 + 112);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v17,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v17 + 112);
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v17, this->fields.seed, 0);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void ServantOperationListViewManager__ModifyLockItem_41789840(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v10; // x20
  ServantOperationListViewManager_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  ServantOperationListViewManager_o *UserSvtId; // x24
  __int128 v15; // q1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_593458F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593458F = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v11 = this;
      UserSvtId = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserSvtId(
                                                         item,
                                                         (const MethodInfo *)item);
      v15 = *(_OWORD *)&v11->fields.dropObjectList;
      *(UnityEngine_MonoBehaviour_Fields *)&v20.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v20.fields.fakeValue = v15;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
      v19 = v20;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v19,
                                                    0);
      if ( UserSvtId == this )
        ServantOperationListViewItem__setUserServantEntity(
          item,
          (UserServantEntity_o *)v11,
          (const MethodInfo *)usrSvtId);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v16);
    ServantOperationListViewItem__ModifyPushItem(item, v17);
  }
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, usrSvtId);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (ServantOperationListViewManager_o *)item->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(ServantOperationListViewManager_o *, ServantOperationListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        item,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (ServantOperationListViewManager_o *)item->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)item, v10->fields.seed, 0);
        return;
      }
    }
LABEL_25:
    sub_21FFECC(this, item);
  }
}


void ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x28
  int64_t itemList; // x0
  int32_t v9; // w22
  __int64 v10; // x2
  int64_t v11; // x23
  __int64 naturalAligment; // x10
  __int64 v13; // x8
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  UserCommandCodeEntity_o *v17; // x8
  __int128 v18; // q1
  int64_t v19; // x24
  __int64 v20; // x2
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  int64_t v25; // x0
  const MethodInfo *v26; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-80h]

  if ( (byte_5934592 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_5934592 = 1;
  }
  if ( userCommandCodeEntities && SLODWORD(userCommandCodeEntities->max_length) >= 1 )
  {
    v7 = 0;
    do
    {
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= *(_DWORD *)(itemList + 24) )
          goto LABEL_24;
        itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)itemList,
                              v9,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v11 = itemList;
        naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
          || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        v13 = *(_QWORD *)(itemList + 144);
        if ( v13 )
        {
          v14 = *(_OWORD *)(v13 + 16);
          v15 = *(_OWORD *)(v13 + 32);
          v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v30.fields.currentCryptoKey = v14;
          *(_OWORD *)&v30.fields.fakeValue = v15;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              userCommandCodeEntities,
              v10);
          v29 = v30;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v29, 0);
          if ( v7 >= LODWORD(userCommandCodeEntities->max_length) )
            sub_21FFED4(itemList);
          v17 = userCommandCodeEntities->m_Items[v7];
          if ( !v17 )
            goto LABEL_26;
          v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
          v19 = itemList;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v18;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v28, 0);
          if ( v19 == itemList )
            break;
        }
        itemList = (int64_t)this->fields.itemList;
        ++v9;
        if ( !itemList )
          goto LABEL_26;
      }
      v21 = *(_QWORD *)(v11 + 144);
      if ( !v21 )
LABEL_26:
        sub_21FFECC(itemList, userCommandCodeEntities);
      v22 = *(_OWORD *)(v21 + 16);
      v23 = *(_OWORD *)(v21 + 32);
      v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v30.fields.currentCryptoKey = v22;
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          userCommandCodeEntities,
          v20);
      v27 = v30;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v27, 0);
      ServantOperationListViewManager__ModifyLockItemComandCode(this, v25, 1, isIconSizeChange, v26);
LABEL_24:
      ++v7;
    }
    while ( (__int64)v7 < SLODWORD(userCommandCodeEntities->max_length) );
  }
}


void ServantOperationListViewManager__ModifyLockedServants(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x28
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v9; // w23
  __int64 v10; // x2
  ServantOperationListViewItem_o *v11; // x22
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  __int128 v14; // q0
  Il2CppType byval_arg; // q1
  int v16; // w8
  UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  System_Collections_Generic_List_object__o *v19; // x24
  __int64 v20; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  int64_t v25; // x0
  const MethodInfo *v26; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-80h]

  if ( (byte_5934591 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_5934591 = 1;
  }
  if ( userServantEntities && SLODWORD(userServantEntities->max_length) >= 1 )
  {
    v7 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v9,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v11 = (ServantOperationListViewItem_o *)itemList;
        naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        klass = itemList[3].klass;
        if ( klass )
        {
          v14 = *(_OWORD *)&klass->_1.name;
          byval_arg = klass->_1.byval_arg;
          v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v30.fields.currentCryptoKey = v14;
          *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              userServantEntities,
              v10);
          v29 = v30;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                    &v29,
                                                                    0);
          if ( v7 >= LODWORD(userServantEntities->max_length) )
            sub_21FFED4(itemList);
          v17 = userServantEntities->m_Items[v7];
          if ( !v17 )
            goto LABEL_26;
          v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
          v19 = itemList;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v18;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                    &v28,
                                                                    0);
          if ( v19 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v9;
        if ( !itemList )
          goto LABEL_26;
      }
      UserServantEntity_k__BackingField = v11->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
LABEL_26:
        sub_21FFECC(itemList, userServantEntities);
      v22 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v23 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v30.fields.currentCryptoKey = v22;
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntities, v20);
      v27 = v30;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v27, 0);
      ServantOperationListViewManager__ModifyLockItem_41789840(this, v11, v25, 1, isIconSizeChange, v26);
LABEL_24:
      ++v7;
    }
    while ( (__int64)v7 < SLODWORD(userServantEntities->max_length) );
  }
}


void ServantOperationListViewManager__ModifyPushedServant(
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
  __int64 v9; // x2
  _QWORD *v10; // x22
  __int64 naturalAligment; // x10
  __int64 v12; // x8
  __int128 v13; // q0
  __int128 v14; // q1
  _QWORD *v15; // x26
  int v16; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-70h]

  v3 = this;
  if ( (byte_5934593 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_5934593 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_21FFECC(SelfUserGame, v5);
    v7 = SelfUserGame;
    v8 = 0;
    while ( v8 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v8,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( SelfUserGame )
      {
        v10 = SelfUserGame;
        naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*SelfUserGame + 304LL) >= (unsigned int)naturalAligment
          && *(ServantOperationListViewItem_c **)(*(_QWORD *)(*SelfUserGame + 200LL) + 8 * naturalAligment - 8) == ServantOperationListViewItem_TypeInfo )
        {
          v12 = SelfUserGame[15];
          if ( v12 )
          {
            if ( !v7 )
              goto LABEL_16;
            v13 = *(_OWORD *)(v12 + 16);
            v14 = *(_OWORD *)(v12 + 32);
            v15 = (_QWORD *)v7[16];
            v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v18.fields.currentCryptoKey = v13;
            *(_OWORD *)&v18.fields.fakeValue = v14;
            if ( !v16 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v9);
            v17 = v18;
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v17, 0);
            *((_BYTE *)v10 + 221) = v15 == SelfUserGame;
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


void ServantOperationListViewManager__ModifyServants(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w21
  __int64 naturalAligment; // x10
  ServantOperationListViewItem_o *v12; // x22
  __int64 v13; // x2
  int64_t v14; // x23
  Il2CppObject v15; // q1
  int v16; // w8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_593458D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593458D = 1;
  }
  entity = 0;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_21FFECC(Instance, v9);
    v10 = 0;
    while ( v10 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v10,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)naturalAligment) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) == ServantOperationListViewItem_TypeInfo )
          v12 = (ServantOperationListViewItem_o *)Instance;
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
      if ( entity )
      {
        if ( !v12 )
          goto LABEL_31;
        Instance = ServantOperationListViewItem__get_UserSvtId(v12, v9);
        if ( !entity )
          goto LABEL_31;
        v14 = Instance;
        v15 = entity[2];
        v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v23.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v23.fields.fakeValue = v15;
        if ( !v16 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v13);
        v22 = v23;
        if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v22, 0) )
          ServantOperationListViewItem__setUserServantEntity(v12, (UserServantEntity_o *)entity, v17);
      }
      else if ( !v12 )
      {
        goto LABEL_31;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId(v12, v9);
      if ( !SelfUserGame )
        goto LABEL_31;
      ServantOperationListViewItem__ModifyItem(v12, Instance == SelfUserGame->fields.favoriteUserSvtId, v18);
      viewObject = (UnityEngine_Object_o *)v12->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      if ( !UnityEngine_Object__op_Equality(viewObject, 0, 0) )
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


void ServantOperationListViewManager__OnClickChoiceModeItem(
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

  if ( (byte_59345A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
    byte_59345A3 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !selectItem )
    sub_21FFECC(v7, v8);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v11);
}


void ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v10; // w9

  if ( (byte_59345A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    sub_21FFC50(&ServantOperationListViewManager_TypeInfo);
    byte_59345A8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !*(&ServantOperationListViewManager_TypeInfo->_2.cctor_finished + 1))
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo, v6, v7),
          (sort = this->fields.sort) == 0) )
    {
      sub_21FFECC(v5, v6);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v10 = filter2Kind + 1;
    else
      v10 = 0;
    sort->fields.filter2Kind = v10;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantOperationListViewManager__OnClickFilterKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  CommonUI_o *v7; // x21
  ListViewSort_o *sort; // x20
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w9
  ListViewManager_o *v13; // x3
  int32_t v14; // w1

  if ( (byte_59345A9 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59345A9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    v7 = (CommonUI_o *)Instance;
    sort = this->fields.sort;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v10, v11);
    if ( kind == 1 )
      v12 = 5;
    else
      v12 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v13 = 0;
    else
      v13 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v14 = 6;
    else
      v14 = v12;
    CommonUI__OpenServantFilterSelectMenu_37298956(v7, v14, sort, v13, v9, -1, 0);
  }
}


void ServantOperationListViewManager__OnClickListView(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void ServantOperationListViewManager__OnClickLockModeItem(
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

  if ( (byte_59345A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickLockModeItem__);
    byte_59345A2 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !selectItem )
    sub_21FFECC(v7, v8);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v11);
}


void ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ServantOperationListViewItem_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  int64_t v24; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v26; // q1
  __int64 v27; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  ServantEntity_o *ServantEntity; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v32; // x8
  int32_t v33; // w28
  __int64 v34; // x2
  int32_t v35; // w26
  System_String_o *v36; // x21
  System_String_o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  System_Object_array *v40; // x24
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // x28
  __int64 v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x28
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x27
  __int64 v59; // x28
  int32_t v60; // w0
  __int64 v61; // x8
  int32_t v62; // w25
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *v69; // x25
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  Il2CppObject *v76; // x25
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  Il2CppObject *v83; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  int32_t v86; // w20
  int32_t v87; // w0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  Il2CppObject *v94; // x20
  System_String_o *v95; // x20
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v99; // x25
  __int64 v100; // x2
  __int64 v101; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_59345A4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickPushModeItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__);
    sub_21FFC50(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_59345A4 = 1;
  }
  v5 = sub_21FFEBC(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_61;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = selectItem;
  v14 = (ServantOperationListViewItem_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)selectItem, v15, v16, v17, v18, v19, v20);
  v21 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v22 = (System_Reflection_MethodBase_o *)sub_21FFC34(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_61;
  v24 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v24 )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v14, v23);
    return;
  }
  if ( !*v14 )
    goto LABEL_61;
  UserServantEntity_k__BackingField = (*v14)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_61;
  v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v103.fields.fakeValue = v26;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v23);
  v102 = v103;
  if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v102, 0) )
    goto LABEL_13;
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v24,
                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_61;
  v27 = SelfUserGame;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v27, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_61;
  if ( !*v14 )
    goto LABEL_61;
  v32 = (*v14)->fields._UserServantEntity_k__BackingField;
  if ( !v32 )
    goto LABEL_61;
  v33 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus(v32, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_61;
  v35 = *(_DWORD *)(SelfUserGame + 24);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v34);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v40 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v38, v39);
  SelfUserGame = (__int64)Rarity__getRarityType(v33, 0);
  if ( !v40 )
    goto LABEL_61;
  v47 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( !LODWORD(v40->max_length) )
    goto LABEL_62;
  v40->m_Items[0] = v47;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v40->m_Items, (int32_t)v47, v41, v42, v43, v44, v45, v46);
  if ( !ServantEntity )
    goto LABEL_61;
  SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
  v55 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( (v40->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_62;
  v40->m_Items[1] = v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->m_Items[1], (int32_t)v55, v49, v50, v51, v52, v53, v54);
  v59 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v58 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57);
  *(_QWORD *)&v104.fields.currentCryptoKey = v59;
  *(_QWORD *)&v104.fields.fakeValue = v58;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v104, 0);
  v61 = *(_QWORD *)(v27 + 96);
  *(_QWORD *)&v105.fields.fakeValue = *(_QWORD *)(v27 + 104);
  v62 = v60;
  *(_QWORD *)&v105.fields.currentCryptoKey = v61;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v105, 0);
  if ( !Master_object )
LABEL_61:
    sub_21FFECC(SelfUserGame, v7);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v62,
                            SelfUserGame,
                            1,
                            1,
                            0);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( LODWORD(v40->max_length) <= 2 )
    goto LABEL_62;
  v40->m_Items[2] = v69;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->m_Items[2], (int32_t)v69, v63, v64, v65, v66, v67, v68);
  SelfUserGame = (__int64)Rarity__getRarityType(v35, 0);
  v76 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( (v40->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_62;
  v40->m_Items[3] = v76;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->m_Items[3], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  if ( !*v14 )
    goto LABEL_61;
  SelfUserGame = (__int64)(*v14)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0);
  v83 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( LODWORD(v40->max_length) <= 4 )
    goto LABEL_62;
  v40->m_Items[4] = v83;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->m_Items[4], (int32_t)v83, v77, v78, v79, v80, v81, v82);
  if ( !*v14 )
    goto LABEL_61;
  v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v14)->fields.servantEntity;
  if ( !v84 )
    goto LABEL_61;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v84[1], 0);
  if ( !*v14 )
    goto LABEL_61;
  v85 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v14)->fields._UserServantEntity_k__BackingField;
  if ( !v85 )
    goto LABEL_61;
  v86 = SelfUserGame;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v85[6], 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v86,
                            v87,
                            1,
                            1,
                            0);
  v94 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_63:
      v101 = sub_21FFEF0(SelfUserGame, v48);
      sub_21FFD90(v101, 0);
    }
  }
  if ( LODWORD(v40->max_length) <= 5 )
LABEL_62:
    sub_21FFED4(SelfUserGame);
  v40->m_Items[5] = v94;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->m_Items[5], (int32_t)v94, v88, v89, v90, v91, v92, v93);
  v95 = System_String__Format_75484712(v37, v40, 0);
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v99,
    (Il2CppObject *)v5,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v100);
  if ( !Instance )
    goto LABEL_61;
  CommonUI__OpenConfirmDialog_37292168(
    (CommonUI_o *)Instance,
    v36,
    v95,
    v96,
    v97,
    v99,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0);
}


void ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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

  if ( (byte_59345B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickScaleChange__);
    byte_59345B0 = 1;
  }
  v3 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeButtonSprite) )
  {
    sub_21FFECC(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
  ServantOperationListViewManager__ModifyList(this, 1, v20);
  ServantOperationListViewManager__SetMode_41792936(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x19
  const MethodInfo *v5; // x4
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x2
  struct ServantOperationManager_o *parentManager; // x8
  LocalizationManager_c *v10; // x0
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *v12; // x8
  ServantOperationListViewManager_o *v13; // x22
  struct ServantOperationManager_o *v14; // x8
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  bool IsSelectEnable; // w8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 v23; // x2
  struct ServantOperationManager_o *v24; // x8
  int32_t v25; // w9
  LocalizationManager_c *v26; // x0
  UILabel_o *v27; // x21
  struct ServantOperationManager_o *v28; // x8
  ServantOperationListViewManager_o *v29; // x22
  struct ServantOperationManager_o *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x3
  System_Reflection_MethodBase_o *v34; // x0
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_59345A0 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickSelectListView__);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59345A0 = 1;
  }
  if ( v4->fields.isInConfirm )
  {
    ServantOperationListViewManager__CallOnSelectServant(v4, selectItem, method);
    return;
  }
  if ( !selectItem )
    goto LABEL_31;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0) )
  {
    v6 = Method_ServantOperationListViewManager_OnClickSelectListView__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    parentManager = v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( parentManager )
    {
      v10 = LocalizationManager_TypeInfo;
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !*(&v10->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v10, selectItem, v8);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
      v12 = v4->fields.parentManager;
      if ( v12 )
      {
        v13 = this;
        TotalSum_k__BackingField = v12->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(qword_594C070, &TotalSum_k__BackingField);
        v14 = v4->fields.parentManager;
        if ( v14 )
        {
          v15 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v14->fields._SelectMax_k__BackingField;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_75484576(
                                                        (System_String_o *)v13,
                                                        v15,
                                                        v16,
                                                        0);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v17);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                v18);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0);
LABEL_27:
              ServantOperationListViewManager__RefrashListDisp(v4, v19);
              return;
            }
          }
        }
      }
    }
    goto LABEL_31;
  }
  IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v5);
  v21 = Method_ServantOperationListViewManager_OnClickSelectListView__;
  if ( IsSelectEnable )
  {
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v22 = (System_Reflection_MethodBase_o *)sub_21FFC34(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
    v24 = v4->fields.parentManager;
    if ( v24 )
    {
      v25 = v24->fields._TotalSum_k__BackingField;
      selectItem->fields.selectNum = v25;
      v26 = LocalizationManager_TypeInfo;
      ++v4->fields.selectSum;
      v24->fields._TotalSum_k__BackingField = v25 + 1;
      v27 = v4->fields.selectDoneLabel;
      if ( !*(&v26->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v26, selectItem, v23);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
      v28 = v4->fields.parentManager;
      if ( v28 )
      {
        v29 = this;
        TotalSum_k__BackingField = v28->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(qword_594C070, &TotalSum_k__BackingField);
        v30 = v4->fields.parentManager;
        if ( v30 )
        {
          v31 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v30->fields._SelectMax_k__BackingField;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_75484576(
                                                        (System_String_o *)v29,
                                                        v31,
                                                        v32,
                                                        0);
          if ( v27 )
          {
            UILabel__set_text(v27, (System_String_o *)this, 0);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v33);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_31:
    sub_21FFECC(this, selectItem);
  }
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v34 = (System_Reflection_MethodBase_o *)sub_21FFC34(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0);
}


void ServantOperationListViewManager__OnClickSortAscendingOrder(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_59345AC & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    byte_59345AC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  CommonUI_o *v7; // x21
  ListViewSort_o *sort; // x20
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  int32_t v13; // w1

  if ( (byte_59345A6 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59345A6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    v7 = (CommonUI_o *)Instance;
    sort = this->fields.sort;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_21FFECC(v10, v11);
    if ( kind == 1 )
      v12 = 2;
    else
      v12 = 1;
    if ( kind == 2 )
      v13 = 6;
    else
      v13 = v12;
    CommonUI__OpenServantSortSelectMenu(v7, v13, sort, 1, v9, 0);
  }
}


void ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_59345B3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndClickTabChoice__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickTabChoice__);
    byte_59345B3 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v6,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        0);
      ServantOperationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v5);
    }
  }
}


void ServantOperationListViewManager__OnClickTabLock(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_59345B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndClickTabLock__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickTabLock__);
    byte_59345B2 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(v6, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabLock__, 0);
      ServantOperationListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v5);
    }
  }
}


void ServantOperationListViewManager__OnClickTabPush(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_bool__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_59345B4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndClickTabPush__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickTabPush__);
    byte_59345B4 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v5, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabPush__, 0);
    ServantOperationListViewManager__StatusRequest(this, v5, v6);
  }
}


void ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_59345B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnClickTabStatus__);
    byte_59345B1 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantOperationListViewManager__ReleaseAll(this, v5);
    v6 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v6, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabStatus__, 0);
    ServantOperationListViewManager__StatusRequest(this, v6, v7);
  }
}


void ServantOperationListViewManager__OnMoveEnd(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_5934598 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934598 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v10,
                1,
                v10->klass->vtable._8_UpdateScrollbars.method),
              (v10 = this->fields.scrollView) == 0) )
        {
          sub_21FFECC(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0);
      }
    }
  }
}


void ServantOperationListViewManager__PushRequest(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_59345A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59345A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v6);
  CardFavoriteRequest__beginRequestPush(
    (CardFavoriteRequest_o *)Instance,
    selectItem->fields._UserServantEntity_k__BackingField,
    0);
}


void ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w21

  if ( (byte_593458A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
    byte_593458A = 1;
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
                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
      if ( !parentManager )
        break;
      ((void (__fastcall *)(ServantOperationManager_o *, bool, Il2CppClass *))parentManager->klass[1]._1.declaringType)(
        parentManager,
        this->fields.isInput,
        parentManager->klass[1]._1.parent);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_10:
    sub_21FFECC(parentManager, method);
  }
}


void ServantOperationListViewManager__ReleaseAll(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  ServantOperationListViewItem_o *v5; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v7; // x3

  if ( (byte_593459F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593459F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_21FFECC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = (ServantOperationListViewItem_o *)itemList;
      naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect((ListViewItem_o *)itemList, 0, 0);
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
void ServantOperationListViewManager__RequestListObject(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5934597 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantOperationListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5934597 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetCancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int32_t v6; // w21

  if ( (start & 0x80000000) == 0 )
  {
    if ( start >= end )
      v5 = end;
    else
      v5 = start;
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
void ServantOperationListViewManager__SetDecideDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int32_t v6; // w21

  if ( (start & 0x80000000) == 0 )
  {
    if ( start >= end )
      v5 = end;
    else
      v5 = start;
    if ( start <= end )
      v6 = end;
    else
      v6 = start;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v5++, *(const MethodInfo **)&end);
    while ( v5 <= v6 );
  }
}


bool ServantOperationListViewManager__SetDispObjectsByListViewItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  LocalizationManager_c *v9; // x0
  int v10; // w10
  struct ServantOperationManager_o *v11; // x8
  ServantOperationListViewManager_o *v12; // x22
  struct ServantOperationManager_o *v13; // x8
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5934596 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_5934596 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0) )
  {
    this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_IsCanNotSelect(item, v5);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      parentManager = v4->fields.parentManager;
      --v4->fields.selectSum;
      if ( parentManager )
      {
        selectDoneLabel = v4->fields.selectDoneLabel;
        v9 = LocalizationManager_TypeInfo;
        v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        --parentManager->fields._TotalSum_k__BackingField;
        if ( !v10 )
          j_il2cpp_runtime_class_init_0(v9, item, v6);
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
        v11 = v4->fields.parentManager;
        if ( v11 )
        {
          v12 = this;
          TotalSum_k__BackingField = v11->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(qword_594C070, &TotalSum_k__BackingField);
          v13 = v4->fields.parentManager;
          if ( v13 )
          {
            v14 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v13->fields._SelectMax_k__BackingField;
            v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SelectMax_k__BackingField);
            this = (ServantOperationListViewManager_o *)System_String__Format_75484576(
                                                          (System_String_o *)v12,
                                                          v14,
                                                          v15,
                                                          0);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v16);
              this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
              if ( this )
              {
                ServantOperationManager__numberAdjustment(
                  (ServantOperationManager_o *)this,
                  item->fields.selectNum,
                  v17);
                ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0);
                return 1;
              }
            }
          }
        }
      }
LABEL_15:
      sub_21FFECC(this, item);
    }
  }
  return 0;
}


void ServantOperationListViewManager__SetDragEnd(ServantOperationListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w20
  int32_t v10; // w22
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v15; // x21
  struct ServantOperationManager_o *v16; // x8
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59345BB & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_SetDragEnd__);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59345BB = 1;
  }
  v3 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ServantOperationListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex >= dragEndIndex )
      v9 = this->fields.dragEndIndex;
    else
      v9 = this->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = this->fields.dragEndIndex;
    else
      v10 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v9++, v6);
    while ( v9 <= v10 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_19;
  v15 = v12;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v12 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &TotalSum_k__BackingField);
  v16 = this->fields.parentManager;
  if ( !v16
    || (v17 = (Il2CppObject *)v12,
        SelectMax_k__BackingField = v16->fields._SelectMax_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SelectMax_k__BackingField),
        v12 = System_String__Format_75484576(v15, v17, v18, 0),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_21FFECC(v12, v13);
  }
  UILabel__set_text(selectDoneLabel, v12, 0);
  ServantOperationListViewManager__RefrashListDisp(this, v19);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_E92B50;
}


void ServantOperationListViewManager__SetDragMove(
        ServantOperationListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    ServantOperationListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  __int64 naturalAligment; // x9
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *klass; // x19
  __int64 v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_59345B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&ServantOperationListViewObject_TypeInfo);
    byte_59345B9 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, 0, isDragSelect, v10);
    sub_21FFECC(v17, v18);
  }
  v11 = Item;
  naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_220024C(Item, ServantOperationListViewItem_TypeInfo, v9, v10);
    goto LABEL_16;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(this, (ServantOperationListViewItem_o *)Item, isDragSelect, v10);
  klass = (UnityEngine_Object_o *)v11[7].klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v11[7].klass;
    if ( itemSortList )
    {
      v16 = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
      if ( itemSortList->klass->_2.naturalAligment >= (unsigned int)v16
        && (ServantOperationListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(
          (ServantOperationListViewObject_o *)itemSortList,
          *(const MethodInfo **)&index);
        return;
      }
    }
LABEL_14:
    sub_21FFECC(itemSortList, *(_QWORD *)&index);
  }
}


void ServantOperationListViewManager__SetDragSelectItem(
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
  int32_t v13; // w21
  int32_t v14; // w22
  int v15; // w27
  int v16; // w28
  const MethodInfo *v17; // x3

  dragStartIndex = this->fields.dragStartIndex;
  dragEndIndex = this->fields.dragEndIndex;
  this->fields.dragStartIndex = startIndex;
  this->fields.dragEndIndex = endIndex;
  if ( dragStartIndex >= dragEndIndex )
    v10 = dragEndIndex;
  else
    v10 = dragStartIndex;
  if ( dragStartIndex > dragEndIndex )
    dragEndIndex = dragStartIndex;
  if ( dragStartIndex < 0 )
    v11 = -1;
  else
    v11 = v10;
  if ( dragStartIndex < 0 )
    v12 = -1;
  else
    v12 = dragEndIndex;
  if ( startIndex >= endIndex )
    v13 = endIndex;
  else
    v13 = startIndex;
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
  if ( (v11 & 0x80000000) == 0 && v11 <= v12 )
  {
    do
    {
      if ( v10 > v16 || v15 < 0 || v10 < v15 )
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
    if ( (endIndex & 0x80000000) == 0 && this->fields.isDragSelect )
      ServantOperationListViewManager__SetItemDragSelectNum(this, v13, v14, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetDragStart(
        ServantOperationListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v5; // x19
  bool v6; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x10
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *scrollView; // x20

  v5 = this;
  v6 = isDragSelect;
  if ( (byte_59345BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_59345BA = 1;
  }
  v5->fields.isDragSelect = v6;
  itemSortList = v5->fields.itemSortList;
  *(_OWORD *)&v5->fields.dragSelectSum = xmmword_E92B50;
  if ( !itemSortList )
    goto LABEL_16;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (ServantOperationListViewManager_o *)v5->fields.itemSortList;
      if ( !this )
        break;
      this = (ServantOperationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v9,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantOperationListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      HIDWORD(this->fields.horizontalItem) = -1;
      if ( size == v9 )
        goto LABEL_11;
    }
LABEL_16:
    sub_21FFECC(this, *(_QWORD *)&startIndex);
  }
LABEL_11:
  ServantOperationListViewManager__SetDragSelectItem(v5, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)v5->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    this = (ServantOperationListViewManager_o *)v5->fields.scrollView;
    if ( !this )
      goto LABEL_16;
    UIScrollView__Press((UIScrollView_o *)this, 0, 0);
  }
}


void ServantOperationListViewManager__SetFilterButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_59345AB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_59345AB = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantOperationListViewManager__SetIsItemDragSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        bool isDragSelect,
        const MethodInfo *method)
{
  _BOOL4 v6; // w21
  bool IsSelect; // w0
  const MethodInfo *v8; // x4
  ServantEntity_o *v9; // x0
  ServantEntity_o *servantEntity; // x0
  int32_t v11; // w8

  if ( !isDragSelect )
  {
    if ( item )
    {
      if ( item->fields._DragSelectNum_k__BackingField < 0 )
        return;
      if ( !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0) && item->fields._DragSelectNum_k__BackingField >= 1 )
      {
        servantEntity = item->fields.servantEntity;
        --this->fields.dragSelectSum;
        if ( (!servantEntity || ServantEntity__get_IsOrganization(servantEntity, 0)) && !item->fields.attribute )
          --this->fields.dragServantSelectSum;
      }
      v11 = -1;
      goto LABEL_21;
    }
LABEL_25:
    sub_21FFECC(this, item);
  }
  if ( !item )
    goto LABEL_25;
  if ( item->fields._DragSelectNum_k__BackingField < 0 )
  {
    item->fields._DragSelectNum_k__BackingField = 0;
    if ( !ServantOperationListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
    {
      v6 = this->fields.isDragSelect;
      IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
      if ( v6 )
      {
        if ( !IsSelect
          && ServantOperationListViewManager__IsSelectEnable(
               this,
               item,
               this->fields.dragSelectSum,
               this->fields.dragServantSelectSum,
               v8) )
        {
          v9 = item->fields.servantEntity;
          ++this->fields.dragSelectSum;
          if ( (!v9 || ServantEntity__get_IsOrganization(v9, 0)) && !item->fields.attribute )
            ++this->fields.dragServantSelectSum;
          goto LABEL_24;
        }
      }
      else if ( IsSelect )
      {
LABEL_24:
        v11 = 1;
LABEL_21:
        item->fields._DragSelectNum_k__BackingField = v11;
      }
    }
  }
}


void ServantOperationListViewManager__SetIsItemSelect(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  _BOOL4 isDragSelect; // w21
  const MethodInfo *v6; // x3
  struct ServantOperationManager_o *v7; // x8
  int32_t TotalSum_k__BackingField; // w9
  int32_t selectSum; // w10
  struct ServantOperationManager_o *parentManager; // x8
  const MethodInfo *v11; // x2

  if ( !item )
    goto LABEL_13;
  if ( item->fields._DragSelectNum_k__BackingField < 1 )
    return;
  v4 = this;
  isDragSelect = this->fields.isDragSelect;
  this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  if ( !isDragSelect )
  {
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    parentManager = v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v6);
      this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
      if ( this )
      {
        ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, v11);
        ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0);
        return;
      }
    }
LABEL_13:
    sub_21FFECC(this, item);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v7 = v4->fields.parentManager;
  if ( !v7 )
    goto LABEL_13;
  TotalSum_k__BackingField = v7->fields._TotalSum_k__BackingField;
  if ( TotalSum_k__BackingField < v7->fields._SelectMax_k__BackingField )
  {
    selectSum = v4->fields.selectSum;
    item->fields.selectNum = TotalSum_k__BackingField;
    v7->fields._TotalSum_k__BackingField = TotalSum_k__BackingField + 1;
    v4->fields.selectSum = selectSum + 1;
    ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, item, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetItemDragSelect(
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
        if ( v12 > end || start < 0 || v12 < start )
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
      if ( v12 > end || start < 0 || v12 < start )
        ServantOperationListViewManager__SetDragSelect(this, v12, isDragSelect, *(const MethodInfo **)&start);
      v14 = ++v12 <= to;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetItemDragSelectNum(
        ServantOperationListViewManager_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  int32_t v5; // w20
  ServantOperationListViewManager_o *v6; // x21
  struct ServantOperationManager_o *parentManager; // x8
  int v8; // w28
  __int64 v9; // x2
  __int64 v10; // x3
  ServantOperationListViewManager_o *v11; // x22
  __int64 naturalAligment; // x9
  UnityEngine_Object_c *v13; // x0
  UnityEngine_Object_o *clipRange; // x23
  __int64 v15; // x10
  ServantOperationListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  v5 = start;
  v6 = this;
  if ( (byte_59345B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&ServantOperationListViewObject_TypeInfo);
    byte_59345B8 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_21FFECC(this, *(_QWORD *)&start);
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
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_20;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v11 = this;
      naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantOperationListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( SHIDWORD(this->fields.horizontalItem) >= 1 )
      {
        v13 = UnityEngine_Object_TypeInfo;
        clipRange = (UnityEngine_Object_o *)v11->fields.clipRange;
        HIDWORD(v11->fields.horizontalItem) = v8;
        if ( !*(&v13->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&start, v9);
        ++v8;
        if ( !UnityEngine_Object__op_Equality(clipRange, 0, 0) )
        {
          this = (ServantOperationListViewManager_o *)v11->fields.clipRange;
          if ( !this )
            goto LABEL_20;
          v15 = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
          if ( this->klass->_2.naturalAligment < (unsigned int)v15
            || (ServantOperationListViewObject_c *)this->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_20;
          }
          ServantOperationListViewObject__SetupDisp(
            (ServantOperationListViewObject_o *)this,
            *(const MethodInfo **)&start);
        }
      }
      if ( ++v5 > end )
        return;
    }
    v16 = (ServantOperationListViewObject_o *)sub_220024C(this, ServantOperationListViewItem_TypeInfo, v9, v10);
    ServantOperationListViewObject__SetupDisp(v16, v17);
  }
}


void ServantOperationListViewManager__SetListViewSort(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  ListViewSort_o *SortInfo; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  ListViewSort_o *klass; // x0
  int v14; // w8

  v4 = this;
  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  v4->fields.sort = SortInfo;
  v4 = (ServantOperationListViewManager_o *)((char *)v4 + 184);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v4, (int32_t)SortInfo, v6, v7, v8, v9, v10, v11);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_21FFECC(0, v12);
  v14 = kind == 1;
  if ( kind == 2 )
    v14 = 3;
  klass->fields.listViewKind = v14;
  ListViewSort__Load(klass, 0);
}


void ServantOperationListViewManager__SetMode(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        System_Action_ServantOperationListViewItem__o *onSelectServant,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onSelectServant = onSelectServant;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectServant,
    (int32_t)onSelectServant,
    (System_String_o *)onSelectServant,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_41792936(this, mode, v10);
}


void ServantOperationListViewManager__SetMode_41792936(
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
  __int64 naturalAligment; // x10
  ServantOperationListViewItem_o *v15; // x1
  bool v16; // w8
  int v17; // w8
  int32_t v18; // w1

  if ( (byte_5934595 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_5934595 = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  v6 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v6 == 2, 0);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_14:
      sub_21FFECC(itemList, v7);
    v10 = 0;
    v11 = 0;
    while ( v11 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v11,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
          v15 = (ServantOperationListViewItem_o *)Item;
        else
          v15 = 0;
      }
      else
      {
        v15 = 0;
      }
      v16 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v15, v13);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v11;
      v10 |= v16;
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


void ServantOperationListViewManager__SetObjectItem(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5934594 & 1) == 0 )
  {
    sub_21FFC50(&ServantOperationListViewObject_TypeInfo);
    byte_5934594 = 1;
  }
  if ( obj
    && (naturalAligment = ServantOperationListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewObject_TypeInfo )
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
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)v7, v8, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__SetScaleKind(
        ServantOperationListViewManager_o *this,
        int32_t scaleKind,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0),
        !scaleChangeButtonSprite) )
  {
    sub_21FFECC(sort, *(_QWORD *)&scaleKind);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0);
}


int32_t ServantOperationListViewManager__SetSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v11; // x2
  int max_length; // w8
  __int64 v13; // x22
  UserServantEntity_o *v14; // x24
  __int128 v15; // q1
  System_Int64_array *v16; // x25
  System_Int64_array *v17; // x26
  int64_t favoriteUserSvtId; // x28
  int64_t v19; // x27
  ServantOperationListViewItem_o *v20; // x23
  const MethodInfo *v21; // x6
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  const MethodInfo *v32; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5934585 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934585 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_28;
    UserDeckMaster__getPartyList(
      (UserDeckMaster_o *)MasterData_object,
      &svtIdList,
      &equipIdList,
      *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
      0);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_21FFED4(Instance);
        v14 = userServantEntities->m_Items[v13];
        if ( !v14 )
          break;
        v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
        v17 = equipIdList;
        v16 = svtIdList;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v15;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v11);
        v34 = v35;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v34, 0);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v19 = Instance;
        v20 = (ServantOperationListViewItem_o *)sub_21FFEBC(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v20, v13, v14, v16, v17, v19 == favoriteUserSvtId, v21);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v28 = *(_QWORD *)(Instance + 16);
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v28 )
          break;
        v30 = *(int *)(Instance + 24);
        if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v20,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * v30;
          *(_DWORD *)(Instance + 24) = v30 + 1;
          *(_QWORD *)(v31 + 32) = v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v20, v22, v23, v24, v25, v26, v27);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v20, v32);
        max_length = userServantEntities->max_length;
        if ( (int)++v13 >= max_length )
          return v13;
      }
LABEL_28:
      sub_21FFECC(Instance, v8);
    }
  }
  LODWORD(v13) = 0;
  return v13;
}


int32_t ServantOperationListViewManager__SetSellEnableRestCount_41784476(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  System_Collections_Generic_List_long__o *v10; // x22
  __int64 v11; // x21
  UserCommandCodeEntity_o *v12; // x24
  __int128 v13; // q1
  bool v14; // w25
  ServantOperationListViewItem_o *v15; // x23
  const MethodInfo *v16; // x4
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h]

  if ( (byte_5934586 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934586 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                          (UserServantCommandCodeMaster_o *)Instance,
                          0);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v10 = (System_Collections_Generic_List_long__o *)Instance;
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_21FFED4(Instance);
        v12 = userCommandCodeEntities->m_Items[v11];
        if ( !v12 )
          break;
        v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v30.fields.fakeValue = v13;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
        v29 = v30;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v29, 0);
        if ( !v10 )
          break;
        v14 = System_Collections_Generic_List_long___Contains(
                v10,
                Instance,
                (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__);
        v15 = (ServantOperationListViewItem_o *)sub_21FFEBC(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_41768860(v15, v11, v12, v14, v16);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v23 = *(_QWORD *)(Instance + 16);
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v23 )
          break;
        v25 = *(int *)(Instance + 24);
        if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * v25;
          *(_DWORD *)(Instance + 24) = v25 + 1;
          *(_QWORD *)(v26 + 32) = v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v15, v27);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v11 >= max_length )
          return v11;
      }
LABEL_22:
      sub_21FFECC(Instance, v7);
    }
  }
  LODWORD(v11) = 0;
  return v11;
}


void ServantOperationListViewManager__SetSortButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  System_String_o *v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8
  struct ServantOperationManager_o *parentManager; // x20

  if ( (byte_59345AF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_59345AF = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_37;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_37;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( !v10 )
      goto LABEL_37;
    sortKind = v10->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
        v13 = this->fields.sort;
        if ( v13 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v14 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
            v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
LABEL_29:
            if ( v13->fields.isAscendingOrder )
              v17 = v14;
            else
              v17 = v15;
            UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
        v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
        v13 = this->fields.sort;
        if ( v13 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v14 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
            v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_37:
    sub_21FFECC(sort, v5);
  }
LABEL_33:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_37;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0);
  if ( !parentManager )
    goto LABEL_37;
  v5 = (System_String_o *)sort;
  sort = (ListViewSort_o *)parentManager->fields.filter2Label;
  if ( !sort )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)sort, v5, 0);
}


void ServantOperationListViewManager__SetStatusKind(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  UICommonButton_o *statusTabButton; // x1
  UISprite_o *statusTabSprite; // x2
  const MethodInfo *v8; // x5
  const MethodInfo *v9; // x5
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *pushTabButton; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v16; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UILabel_o *v18; // x20
  ServantOperationListViewManager_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 naturalAligment; // x9
  ServantOperationListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_5934587 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ShopRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5934587 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(pushTabButton, 0, 0) )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(pushTabSprite, 0, 0) )
      ServantOperationListViewManager__SetTabButton(
        this,
        this->fields.pushTabButton,
        this->fields.pushTabSprite,
        this->fields.modeKind,
        3,
        v16);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0),
        v18 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v19,
                                                   this->fields.modeKind,
                                                   v20),
        !v18)
    || (UILabel__set_text(v18, (System_String_o *)statusLabel, 0),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0 )
  {
    sub_21FFECC(statusLabel, v13);
  }
  naturalAligment = ShopRootComponent_TypeInfo->_2.naturalAligment;
  if ( statusLabel->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[naturalAligment - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0);
  }
  else
  {
    v24 = (ServantOperationListViewManager_o *)sub_220024C(statusLabel, ShopRootComponent_TypeInfo, v21, v22);
    ServantOperationListViewManager__SetFilterButtonImage(v24, v25);
  }
}


void ServantOperationListViewManager__SetTabButton(
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
        ((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))tabButton->klass->vtable._5_set_isEnabled.methodPtr)(
          tabButton,
          1,
          tabButton->klass->vtable._5_set_isEnabled.method),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tabButton, v10, 0),
        this = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetTabSpriteName(
                                                      v11,
                                                      tabKind,
                                                      v9,
                                                      v12),
        !tabSprite) )
  {
    sub_21FFECC(this, tabButton);
  }
  UISprite__set_spriteName(tabSprite, (System_String_o *)this, 0);
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _QWORD, const MethodInfo *))tabButton->klass->vtable._14_SetState.methodPtr)(
    tabButton,
    0,
    0,
    tabButton->klass->vtable._14_SetState.method);
  UICommonButton__SetColliderEnable(tabButton, v10, 0, 0);
}


void ServantOperationListViewManager__StatusRequest(
        ServantOperationListViewManager_o *this,
        System_Action_bool__o *onRequestEnd,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  int32_t kind; // w22
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w8
  Il2CppObject *Request_object; // x0
  __int64 v19; // x1
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59345B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantOperationListViewManager_EndStatusSync__);
    byte_59345B6 = 1;
  }
  changeIds = 0;
  revokeIds = 0;
  this->fields.onRequestEnd = onRequestEnd;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onRequestEnd,
    (int32_t)onRequestEnd,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v10, &changeIds, &revokeIds, v11) )
  {
    kind = this->fields.kind;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0);
    v17 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
    if ( kind == 2 )
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          (CommandCodeStatusSyncRequest_o *)Request_object,
          changeIds,
          revokeIds,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0);
        return;
      }
LABEL_15:
      sub_21FFECC(Request_object, v19);
    }
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_object )
      goto LABEL_15;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_object,
      changeIds,
      revokeIds,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v12);
  }
}


void ServantOperationListViewManager__SumItems(
        ServantOperationListViewManager_o *this,
        int32_t *qp,
        int32_t *mana,
        int32_t *rarePri,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  __int64 naturalAligment; // x10
  UserServantEntity_o *klass; // x0
  int32_t v14; // w27
  int32_t SellQp; // w8
  int32_t v16; // w27
  int32_t SellMana; // w8
  int32_t v18; // w24
  int32_t SellRarePri; // w0
  UserCommandCodeEntity_o *v20; // x0
  int32_t v21; // w27
  int32_t v22; // w8
  int32_t v23; // w27
  int32_t v24; // w8

  if ( (byte_593458B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantOperationListViewItem_TypeInfo);
    byte_593458B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  if ( !itemList )
LABEL_20:
    sub_21FFECC(itemList, qp);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v11 = itemList;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0) )
    {
      klass = (UserServantEntity_o *)v11[3].klass;
      if ( klass )
      {
        v14 = *qp;
        SellQp = UserServantEntity__getSellQp(klass, 0);
        itemList = (System_Collections_Generic_List_object__o *)v11[3].klass;
        *qp = SellQp + v14;
        if ( !itemList )
          goto LABEL_20;
        v16 = *mana;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)itemList, 0);
        itemList = (System_Collections_Generic_List_object__o *)v11[3].klass;
        *mana = SellMana + v16;
        if ( !itemList )
          goto LABEL_20;
        v18 = *rarePri;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)itemList, 0);
LABEL_18:
        *rarePri = SellRarePri + v18;
        goto LABEL_19;
      }
      v20 = *(UserCommandCodeEntity_o **)&v11[3].fields._size;
      if ( v20 )
      {
        v21 = *qp;
        v22 = UserCommandCodeEntity__GetSellQp(v20, 0);
        itemList = *(System_Collections_Generic_List_object__o **)&v11[3].fields._size;
        *qp = v22 + v21;
        if ( !itemList )
          goto LABEL_20;
        v23 = *mana;
        v24 = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)itemList, 0);
        itemList = *(System_Collections_Generic_List_object__o **)&v11[3].fields._size;
        *mana = v24 + v23;
        if ( !itemList )
          goto LABEL_20;
        v18 = *rarePri;
        SellRarePri = UserCommandCodeEntity__GetSellRarePri((UserCommandCodeEntity_o *)itemList, 0);
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


bool ServantOperationListViewManager__TryGetItemCollectId(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t *id,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x9
  __int128 v7; // q1
  int v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v9; // x0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x9
  __int128 v11; // q1
  int v12; // w8
  int64_t v13; // x8
  bool result; // w0
  _OWORD v15[2]; // [xsp+0h] [xbp-80h] BYREF
  _OWORD v16[2]; // [xsp+20h] [xbp-60h] BYREF
  __int128 v17; // [xsp+40h] [xbp-40h]
  __int128 v18; // [xsp+50h] [xbp-30h]

  if ( (byte_59345B5 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59345B5 = 1;
  }
  if ( !item )
    sub_21FFECC(this, item);
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    v17 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v18 = v7;
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, id);
    v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v16;
    v16[0] = v17;
    v16[1] = v18;
  }
  else
  {
    UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
    if ( !UserCommandCodeEntity_k__BackingField )
    {
      result = 0;
      *id = 0;
      return result;
    }
    v11 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
    v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    v17 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v18 = v11;
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, id);
    v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v15;
    v15[0] = v17;
    v15[1] = v18;
  }
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v9, 0);
  result = 1;
  *id = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewManager__decrementNumber(
        ServantOperationListViewManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21

  if ( (byte_59345A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59345A1 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_21FFECC(itemList, *(_QWORD *)&selectNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


System_Collections_Generic_List_ServantOperationListViewObject__o *ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_593457F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593457F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_21FFECC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v10 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewObject__GetItem(
                                                                  (ServantOperationListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50765052(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
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


System_Collections_Generic_List_ServantOperationListViewObject__o *ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_593457E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593457E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_21FFECC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v3;
}


void ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59345BF & 1) == 0 )
  {
    sub_21FFC50(&ServantOperationListViewManager___c_TypeInfo);
    byte_59345BF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantOperationListViewManager___c___ctor(ServantOperationListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationListViewManager___c___EndSelectFilterKind_b__106_0(
        ServantOperationListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantOperationListViewManager___c__DisplayClass96_0___ctor(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__0(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59345C0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__);
    byte_59345C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37292452(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__1(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  ServantOperationListViewManager__PushRequest(this->fields.__4__this, this->fields.selectItem, v2);
}