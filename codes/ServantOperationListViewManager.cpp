void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  int32_t v4; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  ListViewSort_o *v8; // x20
  struct ServantOperationListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  ListViewSort_o *v15; // x20
  struct ServantOperationListViewManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x19
  ListViewSort_o *v20; // x20
  struct ServantOperationListViewManager_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A57670 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1493/*"4"*/);
    sub_1B885B0(&StringLiteral_12640/*"ServantOperation"*/);
    byte_4A57670 = 1;
  }
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  v4 = StringLiteral_12640/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12640/*"ServantOperation"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SORT_SAVE_KEY, v4, v1, v2);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v24 = 1;
  v6 = System_Int32__ToString((int32_t)&v24, 0LL);
  v7 = System_String__Concat_61707032(SORT_SAVE_KEY, v6, 0LL);
  v8 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v8, v7, 3, 0, 0LL);
  v9 = ServantOperationListViewManager_TypeInfo->static_fields;
  v9->servantSortInfo = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->servantSortInfo, (int32_t)v8, v10, v11);
  v12 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v24 = 2;
  v13 = System_Int32__ToString((int32_t)&v24, 0LL);
  v14 = System_String__Concat_61707032(v12, v13, 0LL);
  v15 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v15, v14, 3, 0, 0LL);
  v16 = ServantOperationListViewManager_TypeInfo->static_fields;
  v16->servantEquipSortInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->servantEquipSortInfo, (int32_t)v15, v17, v18);
  v19 = System_String__Concat_61707032(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1493/*"4"*/,
          0LL);
  v20 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v20, v19, 2, 0, 0LL);
  v21 = ServantOperationListViewManager_TypeInfo->static_fields;
  v21->commandCodeSortInfo = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->commandCodeSortInfo, (int32_t)v20, v22, v23);
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
  struct System_Action_ServantOperationListViewItem__o *onSelectServant; // x20
  ServantStatusBattleListViewItem_o *p_onSelectServant; // x0

  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    p_onSelectServant = (ServantStatusBattleListViewItem_o *)&this->fields.onSelectServant;
    p_onSelectServant->klass = 0LL;
    sub_1B88554(p_onSelectServant, 0, (int32_t)method, v3);
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
  struct System_Action_bool__o *onRequestEnd; // x20
  ServantStatusBattleListViewItem_o *p_onRequestEnd; // x0

  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    p_onRequestEnd = (ServantStatusBattleListViewItem_o *)&this->fields.onRequestEnd;
    p_onRequestEnd->klass = 0LL;
    sub_1B88554(p_onRequestEnd, 0, (int32_t)method, v3);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
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

  if ( (byte_4A5766F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5766F = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  }
  HIDWORD(itemSortList[6].monitor) = -1;
}


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
    sub_1B8880C(this, isPlus);
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

  if ( (byte_4A57632 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A57632 = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_32731588(
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
    sub_1B8880C(v9, v10);
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
  Il2CppObject *v8; // x20
  __int64 methodPtr_low; // x9
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A5766E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5766E = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v8 = Item;
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, v7);
    sub_1B8880C(v10, v11);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_1B88ACC(Item);
    goto LABEL_9;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, (ServantOperationListViewItem_o *)Item, v7);
  HIDWORD(v8[15].monitor) = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A5762E & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5762E = 1;
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
    sub_1B8880C(servantSortInfo, v1);
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
    sub_1B8880C(0LL, v3);
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
  ServantOperationListViewManager__SetMode_32739284(this, 2, v5);
}


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
    sub_1B8880C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v7);
}


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
    sub_1B8880C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v7);
}


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
    sub_1B8880C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v7);
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
    sub_1B8880C(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v7);
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
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5765C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__);
    sub_1B885B0(&ServantOperationListViewManager___c_TypeInfo);
    byte_4A5765C = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__106_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v11,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = _9__106_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v13, v14);
  }
  if ( !v9 )
    sub_1B8880C(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v9, _9__106_0, 0LL);
}


void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A57659 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57659 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5765F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5765F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A57660 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57660 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A57636 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_3720/*"COMMAND_CODE_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11535/*"SERVANT_ALL_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57636 = 1;
  }
  if ( isNotEmpty )
  {
    v6 = &StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v6 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v6 = off_44AE988[kind];
  }
  return (System_String_o *)*v6;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 methodPtr_low; // x10
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5764F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5764F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1B8880C(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v7 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0
      && (LOBYTE(v7[4].fields._version) || BYTE2(v7[4].fields._version) || BYTE3(v7[5].klass)) )
    {
      if ( !v3 )
        goto LABEL_19;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v7,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v7;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v7, v9, v10);
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
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
    sub_1B8880C(this, item);
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
    sub_1B8880C(this, item);
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
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 methodPtr_low; // x10
  ServantEntity_o *klass; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A57650 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57650 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1B8880C(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v7 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      klass = (ServantEntity_o *)v7[3].klass;
      if ( klass )
      {
        itemList = (System_Collections_Generic_List_object__o *)ServantEntity__get_IsServant(klass, 0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 && (BYTE3(v7[4].fields._syncRoot) || BYTE4(v7[4].fields._syncRoot)) )
        {
          if ( !v3 )
            goto LABEL_20;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v7,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v7, v10, v11);
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


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4A5764C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5764C = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1B8880C(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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

  if ( (byte_4A5764E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5764E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B8880C(itemList, userCommandCodeId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5764D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5764D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B8880C(itemList, userServantId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  ServantOperationListViewItem_o *v7; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4A5764B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5764B = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1B8880C(itemList, v4);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          (int64_t)itemList,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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

  if ( (byte_4A57633 & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A57633 = 1;
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

  if ( (byte_4A5763B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5763B = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x3
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v18; // x25
  _BOOL8 IsSwap; // x0
  _BOOL8 ItemCollectId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  struct System_Int64_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  System_Collections_Generic_List_long__o *v29; // x0
  int v30; // w21
  System_Int64_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  System_Int64_array **v38; // x0
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57669 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57669 = 1;
  }
  id = 0LL;
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v14 = 0;
  while ( v14 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v14,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)Item,
               v18,
               this->fields.modeKind,
               v16);
    if ( !IsSwap )
      goto LABEL_27;
    ItemCollectId = ServantOperationListViewManager__TryGetItemCollectId(
                      (ServantOperationListViewManager_o *)IsSwap,
                      v18,
                      &id,
                      v12);
    if ( !ItemCollectId )
      goto LABEL_27;
    itemList = (struct System_Collections_Generic_List_ListViewItem__o *)ServantOperationListViewManager__GetIsSelected(
                                                                           (ServantOperationListViewManager_o *)ItemCollectId,
                                                                           v18,
                                                                           this->fields.modeKind,
                                                                           v12);
    v10 = id;
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_28;
      items = v9->fields._items;
      v22 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v28 = v22[4];
        v29 = v9;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v29,
          v10,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v28 + 192) + 112LL));
        goto LABEL_27;
      }
      v24 = &items->obj.klass + size;
      v9->fields._size = size + 1;
    }
    else
    {
      if ( !v8 )
        goto LABEL_28;
      v25 = v8->fields._items;
      v26 = Method_System_Collections_Generic_List_long__Add__;
      ++v8->fields._version;
      if ( !v25 )
        goto LABEL_28;
      v27 = v8->fields._size;
      if ( (unsigned int)v27 >= v25->max_length )
      {
        v28 = v26[4];
        v29 = v8;
        goto LABEL_26;
      }
      v24 = &v25->obj.klass + v27;
      v8->fields._size = v27 + 1;
    }
    v24[4] = (Il2CppClass *)v10;
LABEL_27:
    itemList = this->fields.itemList;
    ++v14;
    if ( !itemList )
      goto LABEL_28;
  }
  if ( !v8 || !v9 )
LABEL_28:
    sub_1B8880C(itemList, v10);
  v30 = v9->fields._size + v8->fields._size;
  if ( v30 < 1 )
  {
    *changeIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)changeIds, 0, v11, (int32_t)v12);
    v38 = revokeIds;
    v37 = 0;
    *revokeIds = 0LL;
  }
  else
  {
    v31 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)changeIds, (int32_t)v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v9,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v37 = (int)v34;
    *revokeIds = v34;
    v38 = revokeIds;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v38, v37, v35, v36);
  return v30 > 0;
}


System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9

  if ( (byte_4A5763A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A5763A = 1;
  }
  switch ( kind )
  {
    case 0:
      v6 = &StringLiteral_17664/*"button_select_unreg"*/;
      v7 = &StringLiteral_17663/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v6 = &StringLiteral_17650/*"button_alllock_unreg"*/;
      v7 = &StringLiteral_17649/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v6 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
      v7 = &StringLiteral_17647/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v6 = &StringLiteral_17662/*"button_push_unreg"*/;
      v7 = &StringLiteral_17661/*"button_push_reg"*/;
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

  if ( (byte_4A57635 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57635 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
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

  if ( (byte_4A57634 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57634 = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_1B8880C(Instance, v5);
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

  if ( (byte_4A5762F & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5762F = 1;
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
    sub_1B8880C(servantSortInfo, v1);
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
    sub_1B8880C(this, item);
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


void __fastcall ServantOperationListViewManager__ModifyCommandCodes(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  const MethodInfo *v10; // x2
  __int64 methodPtr_low; // x10
  int64_t v12; // x21
  Il2CppObject v13; // q0
  int64_t v14; // x22
  int32_t v15; // w3
  int32_t v16; // w1
  UnityEngine_Object_o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A5763E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5763E = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_1B8880C(Instance, v8);
    v9 = 0;
    while ( v9 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v9,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v12 = Instance;
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
          goto LABEL_30;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v12, v8);
        if ( !entity )
          goto LABEL_30;
        v13 = entity[2];
        v14 = Instance;
        *(Il2CppObject *)&v19.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v19.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v19;
        if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL) )
        {
          v16 = (int)entity;
          *(_QWORD *)(v12 + 136) = entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 136), v16, (int32_t)v10, v15);
        }
      }
      else if ( !v12 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v12, 0, v10);
      v17 = *(UnityEngine_Object_o **)(v12 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v12 + 104);
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
  const MethodInfo *v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w26
  __int64 methodPtr_low; // x10
  __int64 v16; // x23
  int64_t UserSvtId; // x0
  __int128 v18; // q0
  int64_t v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]

  if ( (byte_4A57640 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57640 = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1B8880C(Instance, v11);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v16 = Instance;
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
      UserSvtId = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v16, v11);
      v18 = *(_OWORD *)(v12 + 32);
      v19 = UserSvtId;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v26.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v25 = v26;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
      if ( v19 == Instance )
      {
        *(_QWORD *)(v16 + 112) = v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 112), v12, v20, v21);
      }
LABEL_25:
      if ( v14 )
      {
        if ( !v16 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v16, v11);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v16, v22);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v16, v23);
      }
      else if ( !v16 )
      {
        goto LABEL_37;
      }
      v24 = *(UnityEngine_Object_o **)(v16 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v16 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v16,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v16 + 104);
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
  const MethodInfo *v11; // x1
  __int64 v12; // x21
  int32_t v13; // w22
  bool v14; // w26
  __int64 methodPtr_low; // x10
  __int64 v16; // x23
  int64_t UserCommandCodeId; // x0
  __int128 v18; // q0
  int64_t v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *v23; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h]

  if ( (byte_4A57642 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57642 = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1B8880C(Instance, v11);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v16 = Instance;
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
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v16,
                            v11);
      v18 = *(_OWORD *)(v12 + 32);
      v19 = UserCommandCodeId;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v25.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
      if ( v19 == Instance )
      {
        *(_QWORD *)(v16 + 136) = v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 136), v12, v20, v21);
      }
LABEL_25:
      if ( v14 )
      {
        if ( !v16 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v16, v11);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v16, v22);
      }
      else if ( !v16 )
      {
        goto LABEL_37;
      }
      v23 = *(UnityEngine_Object_o **)(v16 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v16 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v16,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v16 + 104);
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


void __fastcall ServantOperationListViewManager__ModifyLockItem_32736528(
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
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_4A57641 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57641 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v11 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v13 = *(_OWORD *)&v11->fields.dropObjectList;
      v14 = (ServantOperationListViewManager_o *)UserSvtId;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v11->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v20,
                                                    0LL);
      if ( v14 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v11;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&item->fields._UserServantEntity_k__BackingField,
          (int32_t)v11,
          v15,
          v16);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v17);
    ServantOperationListViewItem__ModifyPushItem(item, v18);
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
    sub_1B8880C(this, item);
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

  if ( (byte_4A57644 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57644 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                    &v25,
                                                                    0LL);
          if ( v7 >= userCommandCodeEntities->max_length )
            sub_1B88814(itemList, userCommandCodeEntities);
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_26;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = itemList;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v24.fields.fakeValue = v17;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
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
        sub_1B8880C(itemList, userCommandCodeEntities);
      v20 = *(_OWORD *)v19->m_Items;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v19->bounds;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v26;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL);
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

  if ( (byte_4A57643 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57643 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                    &v25,
                                                                    0LL);
          if ( v7 >= userServantEntities->max_length )
            sub_1B88814(itemList, userServantEntities);
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_26;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = itemList;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v24.fields.fakeValue = v17;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
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
        sub_1B8880C(itemList, userServantEntities);
      v20 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v26;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL);
      ServantOperationListViewManager__ModifyLockItem_32736528(this, v12, v21, 1, v8, v22);
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
  if ( (byte_4A57645 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57645 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_1B8880C(SelfUserGame, v5);
    v7 = SelfUserGame;
    v8 = 0;
    while ( v8 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v8,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
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
  const MethodInfo *v9; // x1
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  int64_t v12; // x22
  Il2CppObject v13; // q0
  int64_t v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A5763F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5763F = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_1B8880C(Instance, v9);
    v10 = 0;
    while ( v10 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v10,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v12 = Instance;
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
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v12, v9);
        if ( !entity )
          goto LABEL_31;
        v13 = entity[2];
        v14 = Instance;
        *(Il2CppObject *)&v21.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v21.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL) )
        {
          v17 = (int)entity;
          *(_QWORD *)(v12 + 112) = entity;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 112), v17, v15, v16);
        }
      }
      else if ( !v12 )
      {
        goto LABEL_31;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v12, v9);
      if ( !SelfUserGame )
        goto LABEL_31;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v12,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v18);
      v19 = *(UnityEngine_Object_o **)(v12 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v12 + 104);
        if ( !Instance )
          goto LABEL_31;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
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
  const MethodInfo *v8; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4A57655 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
    byte_4A57655 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1B8880C(v7, v8);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v11);
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

  if ( (byte_4A5765A & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5765A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !ServantOperationListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A5765B & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5765B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_1B8880C(v10, v11);
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
    CommonUI__OpenServantFilterSelectMenu_30500992(v8, v14, sort, v13, v9, -1, 0LL);
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

  if ( (byte_4A57654 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickLockModeItem__);
    byte_4A57654 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1B8880C(v7, v8);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ServantOperationListViewItem_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2
  int64_t context; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v18; // q1
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v23; // x25
  Il2CppObject *Master_object; // x21
  int32_t v25; // w22
  ServantOperationListViewItem_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x9
  int32_t v28; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v30; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_Object_array *v34; // x23
  int32_t Rarity; // w26
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x26
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x26
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x25
  int32_t v45; // w0
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x25
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x20
  System_String_o *v55; // x20
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v59; // x25
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4A57656 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickPushModeItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__);
    sub_1B885B0(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A57656 = 1;
  }
  v5 = sub_1B887FC(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_61;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = selectItem;
  v10 = (ServantOperationListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)selectItem, v11, v12);
  v13 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  context = (int64_t)SelfUserGame->fields.context;
  if ( !context )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v10, v15);
    return;
  }
  if ( !*v10 )
    goto LABEL_61;
  UserServantEntity_k__BackingField = (*v10)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_61;
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v61 = v62;
  if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v61, 0LL) )
    goto LABEL_13;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_61;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             context,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_61;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = klass;
  *(_QWORD *)&v63.fields.fakeValue = monitor;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
  if ( !v20 )
    goto LABEL_61;
  v23 = DataMasterBase_object__object__int___GetEntity(
          v20,
          (int32_t)SelfUserGame,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                    0LL);
  if ( !Master_object )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    v25,
                                    (int32_t)SelfUserGame,
                                    0LL);
  v26 = *v10;
  if ( !*v10 )
    goto LABEL_61;
  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v26->fields._UserServantEntity_k__BackingField;
  if ( !v27 )
    goto LABEL_61;
  v28 = (int)SelfUserGame;
  SvtId_k__BackingField = v26->fields._SvtId_k__BackingField;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 SvtId_k__BackingField,
                                 v30,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v34 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v34 )
LABEL_61:
    sub_1B8880C(SelfUserGame, v7);
  v38 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( !v34->max_length )
    goto LABEL_62;
  v34->m_Items[0] = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v34->m_Items, (int32_t)v38, v36, v37);
  if ( !v23 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v23, 0LL);
  v41 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_62;
  v34->m_Items[1] = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], (int32_t)v41, v39, v40);
  SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v23, v28, -1, 0LL);
  v44 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_62;
  v34->m_Items[2] = v44;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[2], (int32_t)v44, v42, v43);
  if ( !*v10 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v10)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_61;
  v45 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataManager_o *)Rarity__getRarityType(v45, 0LL);
  v48 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_62;
  v34->m_Items[3] = v48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[3], (int32_t)v48, v46, v47);
  if ( !*v10 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v10)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v51 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_62;
  v34->m_Items[4] = v51;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[4], (int32_t)v51, v49, v50);
  if ( !*v10 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v10)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getName(
                                    (ServantEntity_o *)SelfUserGame,
                                    ServantLimitCountSealAfter,
                                    -1,
                                    0LL);
  v54 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B886EC(SelfUserGame, v34->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_63:
      v60 = sub_1B88830();
      sub_1B886D8(v60, 0LL);
    }
  }
  if ( v34->max_length <= 5 )
LABEL_62:
    sub_1B88814(SelfUserGame, v7);
  v34->m_Items[5] = v54;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[5], (int32_t)v54, v52, v53);
  v55 = System_String__Format_61721540(v33, v34, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v59 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v59,
    (Il2CppObject *)v5,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_61;
  CommonUI__OpenConfirmDialog_30493912(
    (CommonUI_o *)Instance,
    v32,
    v55,
    v56,
    v57,
    v59,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
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
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  ServantOperationListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4A57662 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickScaleChange__);
    byte_4A57662 = 1;
  }
  v3 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 110) = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B8880C(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v16);
  ServantOperationListViewManager__SetMode_32739284(this, 2, v17);
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
  UILabel_o *selectDoneLabel; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct ServantOperationManager_o *parentManager; // x8
  ServantOperationListViewManager_o *v13; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct ServantOperationManager_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  bool IsSelectEnable; // w21
  _QWORD *v23; // x8
  System_Reflection_MethodBase_o *v24; // x0
  UILabel_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct ServantOperationManager_o *v29; // x8
  ServantOperationListViewManager_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct ServantOperationManager_o *v34; // x8
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A57652 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickSelectListView__);
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A57652 = 1;
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
      v6 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
      parentManager = v4->fields.parentManager;
      if ( parentManager )
      {
        v13 = this;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v9,
                                                      v10,
                                                      v11);
        v17 = v4->fields.parentManager;
        if ( v17 )
        {
          v18 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v17->fields._SelectMax_k__BackingField;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v14, v15, v16);
          this = (ServantOperationListViewManager_o *)System_String__Format_61721404(
                                                        (System_String_o *)v13,
                                                        v18,
                                                        v19,
                                                        0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v20);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                0LL);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_27:
              ServantOperationListViewManager__RefrashListDisp(v4, v21);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v5);
  v23 = Method_ServantOperationListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
  if ( IsSelectEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    if ( this )
    {
      selectItem->fields.selectNum = (int32_t)this->fields.sortOrderButton;
      ++v4->fields.selectSum;
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 1, 0LL);
      v25 = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
      v29 = v4->fields.parentManager;
      if ( v29 )
      {
        v30 = this;
        TotalSum_k__BackingField = v29->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v26,
                                                      v27,
                                                      v28);
        v34 = v4->fields.parentManager;
        if ( v34 )
        {
          v35 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v34->fields._SelectMax_k__BackingField;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v31, v32, v33);
          this = (ServantOperationListViewManager_o *)System_String__Format_61721404(
                                                        (System_String_o *)v30,
                                                        v35,
                                                        v36,
                                                        0LL);
          if ( v25 )
          {
            UILabel__set_text(v25, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v37);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_29:
    sub_1B8880C(this, selectItem);
  }
  OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0LL);
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

  if ( (byte_4A5765E & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    byte_4A5765E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A57658 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57658 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_1B8880C(v10, v11);
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

  if ( (byte_4A57665 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndClickTabChoice__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickTabChoice__);
    byte_4A57665 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
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

  if ( (byte_4A57664 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndClickTabLock__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickTabLock__);
    byte_4A57664 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v6 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
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

  if ( (byte_4A57666 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndClickTabPush__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickTabPush__);
    byte_4A57666 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
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

  if ( (byte_4A57663 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnClickTabStatus__);
    byte_4A57663 = 1;
  }
  if ( this->fields.modeKind )
  {
    v3 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v5);
    v6 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
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

  if ( (byte_4A5764A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5764A = 1;
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
          sub_1B8880C(v8, v7);
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

  if ( (byte_4A57657 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57657 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      UserServantEntity_k__BackingField->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
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

  if ( (byte_4A5763C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
    byte_4A5763C = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
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
                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
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
    sub_1B8880C(parentManager, method);
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

  if ( (byte_4A57651 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57651 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_1B8880C(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57649 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantOperationListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57649 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  const MethodInfo *v5; // x1
  UILabel_o *selectDoneLabel; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct ServantOperationManager_o *parentManager; // x8
  ServantOperationListViewManager_o *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct ServantOperationManager_o *v15; // x8
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A57648 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A57648 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
    && ServantOperationListViewItem__get_IsCanNotSelect(item, v5) )
  {
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
      parentManager = v4->fields.parentManager;
      if ( parentManager )
      {
        v11 = this;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
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
          this = (ServantOperationListViewManager_o *)System_String__Format_61721404(
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
              ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, 0LL);
              ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
              return 1;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(this, item);
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

  if ( (byte_4A5766D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_SetDragEnd__);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5766D = 1;
  }
  v3 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewManager_SetDragEnd__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
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
        v11 = System_String__Format_61721404(v17, v22, v23, 0LL),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_1B8880C(v11, v12);
  }
  UILabel__set_text(selectDoneLabel, v11, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v24);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
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

  if ( (byte_4A5766B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&ServantOperationListViewObject_TypeInfo);
    byte_4A5766B = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v10 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v10, isDragSelect, v9);
    sub_1B8880C(v14, v15);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1B88ACC(Item);
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
        ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)itemSortList, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B8880C(itemSortList, *(_QWORD *)&index);
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
  if ( (byte_4A5766C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5766C = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BB49F0;
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
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        break;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      HIDWORD(itemSortList[6].monitor) = -1;
      if ( size == v9 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_17:
    sub_1B8880C(itemSortList, *(_QWORD *)&startIndex);
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

  if ( (byte_4A5765D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5765D = 1;
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, item);
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
  struct ServantOperationManager_o *parentManager; // x8
  int v8; // w27
  ServantOperationListViewManager_o *v9; // x22
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x23
  struct UnityEngine_GameObject_o *v12; // x8
  __int64 v13; // x11
  ServantOperationListViewManager_o *v14; // x0
  int32_t v15; // w1
  bool v16; // w2
  const MethodInfo *v17; // x3

  v5 = start;
  v6 = this;
  if ( (byte_4A5766A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&ServantOperationListViewObject_TypeInfo);
    byte_4A5766A = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_1B8880C(this, *(_QWORD *)&start);
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
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)v9->fields.dropDragPrefab, 0LL);
        }
      }
      if ( ++v5 > end )
        return;
    }
    v14 = (ServantOperationListViewManager_o *)sub_1B88ACC(this);
    ServantOperationListViewManager__SetDragSelect(v14, v15, v16, v17);
  }
}


void __fastcall ServantOperationListViewManager__SetListViewSort(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  ListViewSort_o *SortInfo; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  ListViewSort_o *klass; // x0
  int v10; // w8

  v4 = this;
  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  v4->fields.sort = SortInfo;
  v4 = (ServantOperationListViewManager_o *)((char *)v4 + 184);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, (int32_t)SortInfo, v6, v7);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_1B8880C(0LL, v8);
  v10 = kind == 1;
  if ( kind == 2 )
    v10 = 3;
  klass->fields.listViewKind = v10;
  ListViewSort__Load(klass, 0LL);
}


void __fastcall ServantOperationListViewManager__SetMode(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        System_Action_ServantOperationListViewItem__o *onSelectServant,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelectServant = onSelectServant;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectServant,
    (int32_t)onSelectServant,
    (int32_t)onSelectServant,
    (int32_t)method);
  ServantOperationListViewManager__SetMode_32739284(this, mode, v6);
}


void __fastcall ServantOperationListViewManager__SetMode_32739284(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t ObjectSum; // w0
  int32_t v6; // w8
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  char v9; // w22
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x2
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v14; // x1
  bool v15; // w8
  int32_t v16; // w1
  const MethodInfo *v17; // x2

  if ( (byte_4A57647 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57647 = 1;
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
      sub_1B8880C(itemList, v7);
    v9 = 0;
    v10 = 0;
    while ( v10 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v10,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
          v14 = (ServantOperationListViewItem_o *)Item;
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      v15 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v14, v12);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v9 |= v15;
      ++v10;
      if ( !itemList )
        goto LABEL_14;
    }
    if ( (v9 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v7);
    v16 = ServantOperationListViewObject__GetInitMode(initMode, 0LL);
    ServantOperationListViewManager__RequestListObject(this, v16, v17);
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
  if ( (byte_4A57646 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&ServantOperationListViewObject_TypeInfo);
    byte_4A57646 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, (int32_t)method, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B8880C(sort, *(_QWORD *)&scaleKind);
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
  const MethodInfo *v19; // x6
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  const MethodInfo *v26; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A57637 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57637 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_24;
    UserDeckMaster__getPartyList((UserDeckMaster_o *)MasterData_object, &svtIdList, &equipIdList, Instance, 0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1B88814(Instance, v8);
        v12 = userServantEntities->m_Items[v11];
        if ( !v12 )
          break;
        v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
        v15 = equipIdList;
        v14 = svtIdList;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v29;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v17 = Instance;
        v18 = (ServantOperationListViewItem_o *)sub_1B887FC(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v18, v11, v12, v14, v15, v17 == favoriteUserSvtId, v19);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v22 = *(_QWORD *)(Instance + 16);
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v22 )
          break;
        v24 = *(int *)(Instance + 24);
        if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * v24;
          *(_DWORD *)(Instance + 24) = v24 + 1;
          *(_QWORD *)(v25 + 32) = v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v18, v20, v21);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v18, v26);
        max_length = userServantEntities->max_length;
        if ( (int)++v11 >= max_length )
          return v11;
      }
LABEL_24:
      sub_1B8880C(Instance, v8);
    }
  }
  LODWORD(v11) = 0;
  return v11;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_32731588(
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
  const MethodInfo *v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h]

  if ( (byte_4A57638 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57638 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
          sub_1B88814(Instance, v7);
        v11 = userCommandCodeEntities->m_Items[v10];
        if ( !v11 )
          break;
        v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v25.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
        if ( !v9 )
          break;
        v13 = System_Collections_Generic_List_long___Contains(
                v9,
                Instance,
                (const MethodInfo_34E5BE0 *)Method_System_Collections_Generic_List_long__Contains__);
        v14 = (ServantOperationListViewItem_o *)sub_1B887FC(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_32717444(v14, v10, v11, v13, v15);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v18 = *(_QWORD *)(Instance + 16);
        v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v18 )
          break;
        v20 = *(int *)(Instance + 24);
        if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = v18 + 8 * v20;
          *(_DWORD *)(Instance + 24) = v20 + 1;
          *(_QWORD *)(v21 + 32) = v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v14, v16, v17);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v14, v22);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v10 >= max_length )
          return v10;
      }
LABEL_22:
      sub_1B8880C(Instance, v7);
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
  ServantOperationManager_o *parentManager; // x20

  if ( (byte_4A57661 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A57661 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_36;
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
      goto LABEL_36;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
        v11 = this->fields.sort;
        if ( v11 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
            v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
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
        v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
        v11 = this->fields.sort;
        if ( v11 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
            v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_36:
    sub_1B8880C(sort, v4);
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

  if ( (byte_4A57639 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57639 = 1;
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
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0LL )
  {
    sub_1B8880C(statusLabel, v11);
  }
  methodPtr_low = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(statusLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    v19 = (ServantOperationListViewManager_o *)sub_1B88ACC(statusLabel);
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
    sub_1B8880C(this, tabButton);
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
  int32_t v6; // w1
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  System_Int64_array *v13; // [xsp+0h] [xbp-30h] BYREF
  System_Int64_array *changeIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57668 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewManager_EndStatusSync__);
    byte_4A57668 = 1;
  }
  v13 = 0LL;
  changeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onRequestEnd,
    (int32_t)onRequestEnd,
    (int32_t)method,
    v3);
  if ( ServantOperationListViewManager__GetSwapList(this, v6, &changeIds, &v13, v7) )
  {
    kind = this->fields.kind;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( kind == 2 )
    {
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          (CommandCodeStatusSyncRequest_o *)Request_object,
          changeIds,
          v13,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(Request_object, v12);
    }
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_object )
      goto LABEL_13;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_object,
      changeIds,
      v13,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0LL);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v8);
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

  if ( (byte_4A5763D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A5763D = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1B8880C(itemList, qp);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v10,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4A57667 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57667 = 1;
  }
  if ( !item )
    sub_1B8880C(this, item);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
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

  if ( (byte_4A57653 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A57653 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B8880C(itemList, *(_QWORD *)&selectNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_object__o *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A57631 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57631 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewObject__GetItem(
                                                                  (ServantOperationListViewObject_o *)objectList,
                                                                  0LL);
      if ( objectList )
      {
        v4 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4A57630 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57630 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B8880C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v11 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v13 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57671 & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewManager___c_TypeInfo);
    byte_4A57671 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A57672 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__);
    byte_4A57672 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
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
    sub_1B8880C(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}