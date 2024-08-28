void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  struct ServantOperationListViewManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x19
  ListViewSort_o *v19; // x20
  struct ServantOperationListViewManager_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x19
  ListViewSort_o *v24; // x20
  struct ServantOperationListViewManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0512E & 1) == 0 )
  {
    sub_1B686D4(&ListViewSort_TypeInfo, v1);
    sub_1B686D4(&ServantOperationListViewManager_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_1493/*"4"*/, v5);
    sub_1B686D4(&StringLiteral_12584/*"ServantOperation"*/, v6);
    byte_4A0512E = 1;
  }
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  v8 = StringLiteral_12584/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12584/*"ServantOperation"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->SORT_SAVE_KEY, v8, v2, v3);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v28 = 1;
  v10 = System_Int32__ToString((int32_t)&v28, 0LL);
  v11 = System_String__Concat_61419468(SORT_SAVE_KEY, v10, 0LL);
  v12 = (ListViewSort_o *)sub_1B68920(ListViewSort_TypeInfo);
  ListViewSort___ctor_40496064(v12, v11, 3, 0, 0LL);
  v13 = ServantOperationListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v13->servantSortInfo, (int32_t)v12, v14, v15);
  v16 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v28 = 2;
  v17 = System_Int32__ToString((int32_t)&v28, 0LL);
  v18 = System_String__Concat_61419468(v16, v17, 0LL);
  v19 = (ListViewSort_o *)sub_1B68920(ListViewSort_TypeInfo);
  ListViewSort___ctor_40496064(v19, v18, 3, 0, 0LL);
  v20 = ServantOperationListViewManager_TypeInfo->static_fields;
  v20->servantEquipSortInfo = v19;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v20->servantEquipSortInfo, (int32_t)v19, v21, v22);
  v23 = System_String__Concat_61419468(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1493/*"4"*/,
          0LL);
  v24 = (ListViewSort_o *)sub_1B68920(ListViewSort_TypeInfo);
  ListViewSort___ctor_40496064(v24, v23, 2, 0, 0LL);
  v25 = ServantOperationListViewManager_TypeInfo->static_fields;
  v25->commandCodeSortInfo = v24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v25->commandCodeSortInfo, (int32_t)v24, v26, v27);
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
    sub_1B68678(p_onSelectServant, 0, (int32_t)method, v3);
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
    sub_1B68678(p_onRequestEnd, 0, (int32_t)method, v3);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA6690;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A0512D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v5);
    byte_4A0512D = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1B68930(itemSortList, *(_QWORD *)&index);
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
    sub_1B68930(this, isPlus);
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
    this->klass->vtable._6_GetDragRoot.methodPtr);
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
  System_String_o *EmptyMessageCode; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1

  if ( (byte_4A050F0 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    byte_4A050F0 = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_32430784(
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
    sub_1B68930(v9, v10);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A0512C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v5);
    byte_4A0512C = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_1B68930(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v9 = Item;
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, v8);
    sub_1B68930(v11, v12);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_1B68BF0(Item);
    goto LABEL_9;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, (ServantOperationListViewItem_o *)Item, v8);
  HIDWORD(v9[15].monitor) = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A050EC & 1) == 0 )
  {
    sub_1B686D4(&ServantOperationListViewManager_TypeInfo, v1);
    byte_4A050EC = 1;
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
    sub_1B68930(servantSortInfo, v1);
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
    sub_1B68930(0LL, v3);
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
  ServantOperationListViewManager__SetMode_32438480(this, 2, v5);
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
    sub_1B68930(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v7);
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
    sub_1B68930(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v7);
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
    sub_1B68930(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v7);
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
    sub_1B68930(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  ServantOperationListViewManager___c_c *v11; // x8
  CommonUI_o *v12; // x19
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v14; // x21
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A0511A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v6);
    sub_1B686D4(&ServantOperationListViewManager___c_TypeInfo, v7);
    byte_4A0511A = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = ServantOperationListViewManager___c_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v11 = ServantOperationListViewManager___c_TypeInfo;
  }
  _9__106_0 = v11->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantOperationListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v14,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = _9__106_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v16, v17);
  }
  if ( !v12 )
    sub_1B68930(Instance, v10);
  CommonUI__CloseServantFilterSelectMenu(v12, _9__106_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A05117 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A05117 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v6);
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v12; // x8

  if ( (byte_4A0511D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A0511D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B68930(itemList, *(_QWORD *)&svtId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v9;
        v12 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v12[3].monitor) == svtId )
          ++v8;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v12; // x8

  if ( (byte_4A0511E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A0511E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B68930(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      klass = itemList->klass;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ++v9;
        v12 = (ServantOperationListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo
            ? itemList
            : 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( LODWORD(v12[3].fields._syncRoot) == commandCodeId )
          ++v8;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v8;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 *v10; // x8

  if ( (byte_4A050F4 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_11525/*"SERVANT_EQUIP_EMPTY"*/, *(_QWORD *)&kind);
    sub_1B686D4(&StringLiteral_3696/*"COMMAND_CODE_EMPTY"*/, v6);
    sub_1B686D4(&StringLiteral_11485/*"SERVANT_ALL_EMPTY"*/, v7);
    sub_1B686D4(&StringLiteral_11722/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v8);
    sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A050F4 = 1;
  }
  if ( isNotEmpty )
  {
    v10 = &StringLiteral_11722/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v10 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v10 = off_4463118[kind];
  }
  return (System_String_o *)*v10;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A0510D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4A0510D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1B68930(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v12 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    itemList = (System_Collections_Generic_List_object__o *)ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0
      && (LOBYTE(v12[4].fields._version) || BYTE2(v12[4].fields._version) || BYTE3(v12[5].klass)) )
    {
      if ( !v8 )
        goto LABEL_19;
      items = v8->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v12,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v12;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v8;
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
    sub_1B68930(this, item);
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
    sub_1B68930(this, item);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 methodPtr_low; // x10
  ServantEntity_o *klass; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A0510E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4A0510E = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1B68930(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v12 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      klass = (ServantEntity_o *)v12[3].klass;
      if ( klass )
      {
        itemList = (System_Collections_Generic_List_object__o *)ServantEntity__get_IsServant(klass, 0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 && (BYTE3(v12[4].fields._syncRoot) || BYTE4(v12[4].fields._syncRoot)) )
        {
          if ( !v8 )
            goto LABEL_20;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v12,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v12;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
          }
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v8;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w21
  ServantOperationListViewItem_o *v12; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4A0510A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4A0510A = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1B68920(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34A3A58 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1B68930(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v12 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                                v12,
                                                                v9);
      if ( !v8 )
        goto LABEL_16;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v8->fields._size;
      v9 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v8,
          (int64_t)itemList,
          *(const MethodInfo_34A42AC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_16;
  }
  return v8;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w21
  ServantOperationListViewItem_o *v9; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4A0510C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A0510C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B68930(itemList, userCommandCodeId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v9 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserCommandCodeId(v9, (const MethodInfo *)userCommandCodeId) == userCommandCodeId )
    {
      return v9->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w21
  ServantOperationListViewItem_o *v9; // x22
  __int64 methodPtr_low; // x10

  if ( (byte_4A0510B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A0510B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B68930(itemList, userServantId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    v9 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_12;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL)
      && ServantOperationListViewItem__get_UserSvtId(v9, (const MethodInfo *)userServantId) == userServantId )
    {
      return v9->fields.selectNum;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w21
  ServantOperationListViewItem_o *v12; // x22
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4A05109 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4A05109 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1B68920(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34A3A58 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1B68930(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_16;
    v12 = (ServantOperationListViewItem_o *)itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)ServantOperationListViewItem__get_UserSvtId(v12, v9);
      if ( !v8 )
        goto LABEL_16;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v8->fields._size;
      v9 = (const MethodInfo *)itemList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v8,
          (int64_t)itemList,
          *(const MethodInfo_34A42AC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = (int64_t)itemList;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v11;
    if ( !itemList )
      goto LABEL_16;
  }
  return v8;
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

  if ( (byte_4A050F1 & 1) == 0 )
  {
    sub_1B686D4(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
    byte_4A050F1 = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewManager__GetStatusText(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8

  if ( (byte_4A050F9 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B686D4(&StringLiteral_11575/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_1B686D4(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_1B686D4(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    sub_1B686D4(&StringLiteral_1/*""*/, v7);
    byte_4A050F9 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11575/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v21; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v23; // x3
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v25; // x25
  _BOOL8 IsSwap; // x0
  _BOOL8 ItemCollectId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Int64_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  System_Int64_array **v45; // x0
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A05127 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B686D4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v14);
    byte_4A05127 = 1;
  }
  id = 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_1B68920(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_34A3A58 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B68920(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_34A3A58 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v21 = 0;
  while ( v21 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v21,
             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
        v25 = (ServantOperationListViewItem_o *)Item;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)Item,
               v25,
               this->fields.modeKind,
               v23);
    if ( !IsSwap )
      goto LABEL_27;
    ItemCollectId = ServantOperationListViewManager__TryGetItemCollectId(
                      (ServantOperationListViewManager_o *)IsSwap,
                      v25,
                      &id,
                      v19);
    if ( !ItemCollectId )
      goto LABEL_27;
    itemList = (struct System_Collections_Generic_List_ListViewItem__o *)ServantOperationListViewManager__GetIsSelected(
                                                                           (ServantOperationListViewManager_o *)ItemCollectId,
                                                                           v25,
                                                                           this->fields.modeKind,
                                                                           v19);
    v17 = id;
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_28;
      items = v16->fields._items;
      v29 = Method_System_Collections_Generic_List_long__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v35 = v29[4];
        v36 = v16;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v36,
          v17,
          *(const MethodInfo_34A42AC **)(*(_QWORD *)(v35 + 192) + 112LL));
        goto LABEL_27;
      }
      v31 = &items->obj.klass + size;
      v16->fields._size = size + 1;
    }
    else
    {
      if ( !v15 )
        goto LABEL_28;
      v32 = v15->fields._items;
      v33 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v32 )
        goto LABEL_28;
      v34 = v15->fields._size;
      if ( (unsigned int)v34 >= v32->max_length )
      {
        v35 = v33[4];
        v36 = v15;
        goto LABEL_26;
      }
      v31 = &v32->obj.klass + v34;
      v15->fields._size = v34 + 1;
    }
    v31[4] = (Il2CppClass *)v17;
LABEL_27:
    itemList = this->fields.itemList;
    ++v21;
    if ( !itemList )
      goto LABEL_28;
  }
  if ( !v15 || !v16 )
LABEL_28:
    sub_1B68930(itemList, v17);
  v37 = v16->fields._size + v15->fields._size;
  if ( v37 < 1 )
  {
    *changeIds = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)changeIds, 0, v18, (int32_t)v19);
    v45 = revokeIds;
    v44 = 0;
    *revokeIds = 0LL;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_34A5D64 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v38;
    sub_1B68678((ServantStatusBattleListViewItem_o *)changeIds, (int32_t)v38, v39, v40);
    v41 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_34A5D64 *)Method_System_Collections_Generic_List_long__ToArray__);
    v44 = (int)v41;
    *revokeIds = v41;
    v45 = revokeIds;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)v45, v44, v42, v43);
  return v37 > 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
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
  __int64 *v14; // x8
  __int64 *v15; // x9

  if ( (byte_4A050F8 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17596/*"button_push_reg"*/, *(_QWORD *)&kind);
    sub_1B686D4(&StringLiteral_17597/*"button_push_unreg"*/, v6);
    sub_1B686D4(&StringLiteral_17582/*"button_allchoice_reg"*/, v7);
    sub_1B686D4(&StringLiteral_17585/*"button_alllock_unreg"*/, v8);
    sub_1B686D4(&StringLiteral_17598/*"button_select_reg"*/, v9);
    sub_1B686D4(&StringLiteral_1/*""*/, v10);
    sub_1B686D4(&StringLiteral_17599/*"button_select_unreg"*/, v11);
    sub_1B686D4(&StringLiteral_17584/*"button_alllock_reg"*/, v12);
    sub_1B686D4(&StringLiteral_17583/*"button_allchoice_unreg"*/, v13);
    byte_4A050F8 = 1;
  }
  switch ( kind )
  {
    case 0:
      v14 = &StringLiteral_17599/*"button_select_unreg"*/;
      v15 = &StringLiteral_17598/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v14 = &StringLiteral_17585/*"button_alllock_unreg"*/;
      v15 = &StringLiteral_17584/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v14 = &StringLiteral_17583/*"button_allchoice_unreg"*/;
      v15 = &StringLiteral_17582/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v14 = &StringLiteral_17597/*"button_push_unreg"*/;
      v15 = &StringLiteral_17596/*"button_push_reg"*/;
LABEL_9:
      if ( isSelected )
        v14 = v15;
      break;
    default:
      v14 = (__int64 *)&StringLiteral_1/*""*/;
      break;
  }
  return (System_String_o *)*v14;
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_array *__fastcall ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A050F3 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A050F3 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A050F2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A050F2 = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_1B68930(Instance, v6);
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

  if ( (byte_4A050ED & 1) == 0 )
  {
    sub_1B686D4(&ServantOperationListViewManager_TypeInfo, v1);
    byte_4A050ED = 1;
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
    sub_1B68930(servantSortInfo, v1);
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
    sub_1B68930(this, item);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  const MethodInfo *v17; // x2
  __int64 methodPtr_low; // x10
  int64_t v19; // x21
  Il2CppObject v20; // q0
  int64_t v21; // x22
  int32_t v22; // w3
  int32_t v23; // w1
  UnityEngine_Object_o *v24; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A050FC & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A050FC = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_1B68930(Instance, v15);
    v16 = 0;
    while ( v16 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v16,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v19 = Instance;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      if ( entity )
      {
        if ( !v19 )
          goto LABEL_30;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v19, v15);
        if ( !entity )
          goto LABEL_30;
        v20 = entity[2];
        v21 = Instance;
        *(Il2CppObject *)&v26.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v26.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v25, 0LL) )
        {
          v23 = (int)entity;
          *(_QWORD *)(v19 + 136) = entity;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 136), v23, (int32_t)v17, v22);
        }
      }
      else if ( !v19 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v19, 0, v17);
      v24 = *(UnityEngine_Object_o **)(v19 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v24, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v19 + 104);
        if ( !Instance )
          goto LABEL_30;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v19,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v16;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x21
  int32_t v20; // w22
  bool v21; // w26
  __int64 methodPtr_low; // x10
  __int64 v23; // x23
  int64_t UserSvtId; // x0
  __int128 v25; // q0
  int64_t v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *v31; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]

  if ( (byte_4A050FE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A050FE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v19 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1B68930(Instance, v18);
      }
      v19 = Instance;
    }
    v20 = 0;
    v21 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v20 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v20,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v23 = Instance;
        else
          v23 = 0LL;
        if ( !v19 )
          goto LABEL_25;
      }
      else
      {
        v23 = 0LL;
        if ( !v19 )
          goto LABEL_25;
      }
      if ( !v23 )
        goto LABEL_37;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v23, v18);
      v25 = *(_OWORD *)(v19 + 32);
      v26 = UserSvtId;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v33.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v33;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v32, 0LL);
      if ( v26 == Instance )
      {
        *(_QWORD *)(v23 + 112) = v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v23 + 112), v19, v27, v28);
      }
LABEL_25:
      if ( v21 )
      {
        if ( !v23 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v23, v18);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v23, v29);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v23, v30);
      }
      else if ( !v23 )
      {
        goto LABEL_37;
      }
      v31 = *(UnityEngine_Object_o **)(v23 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v23 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v23,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v23 + 104);
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v23, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v20;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  __int64 Instance; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x21
  int32_t v20; // w22
  bool v21; // w26
  __int64 methodPtr_low; // x10
  __int64 v23; // x23
  int64_t UserCommandCodeId; // x0
  __int128 v25; // q0
  int64_t v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *v30; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-80h]

  if ( (byte_4A05100 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId);
    sub_1B686D4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A05100 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v19 = 0LL;
    }
    else
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_30E466C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1B68930(Instance, v18);
      }
      v19 = Instance;
    }
    v20 = 0;
    v21 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( v20 >= itemList->fields._size )
        return;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            itemList,
                            v20,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v23 = Instance;
        else
          v23 = 0LL;
        if ( !v19 )
          goto LABEL_25;
      }
      else
      {
        v23 = 0LL;
        if ( !v19 )
          goto LABEL_25;
      }
      if ( !v23 )
        goto LABEL_37;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v23,
                            v18);
      v25 = *(_OWORD *)(v19 + 32);
      v26 = UserCommandCodeId;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v31, 0LL);
      if ( v26 == Instance )
      {
        *(_QWORD *)(v23 + 136) = v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v23 + 136), v19, v27, v28);
      }
LABEL_25:
      if ( v21 )
      {
        if ( !v23 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v23, v18);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v23, v29);
      }
      else if ( !v23 )
      {
        goto LABEL_37;
      }
      v30 = *(UnityEngine_Object_o **)(v23 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = *(_QWORD *)(v23 + 104);
        if ( !Instance )
          goto LABEL_37;
        Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v23,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        if ( isIconSizeChange )
        {
          Instance = *(_QWORD *)(v23 + 104);
          if ( !Instance )
            goto LABEL_37;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v23, this->fields.seed, 0LL);
        }
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v20;
      if ( !itemList )
        goto LABEL_37;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_32435724(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  ServantOperationListViewManager_o *v15; // x23
  int64_t UserSvtId; // x0
  __int128 v17; // q1
  ServantOperationListViewManager_o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_4A050FF & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, item);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v12);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (ServantOperationListViewManager_o *)sub_1B686D4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v14);
    byte_4A050FF = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v15 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v17 = *(_OWORD *)&v15->fields.dropObjectList;
      v18 = (ServantOperationListViewManager_o *)UserSvtId;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = v15->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
                                                    &v24,
                                                    0LL);
      if ( v18 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v15;
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&item->fields._UserServantEntity_k__BackingField,
          (int32_t)v15,
          v19,
          v20);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v21);
    ServantOperationListViewItem__ModifyPushItem(item, v22);
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
        this->klass->vtable._6_GetDragRoot.methodPtr);
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
    sub_1B68930(this, item);
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned __int64 v10; // x25
  bool v11; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v13; // w22
  UserCommandCodeEntity_o **v14; // x29
  System_Collections_Generic_List_object__o *v15; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  __int128 v18; // q0
  UserCommandCodeEntity_o *v19; // x8
  __int128 v20; // q0
  System_Collections_Generic_List_object__o *v21; // x24
  struct System_Object_array *v22; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  const MethodInfo *v25; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+60h] [xbp-80h]

  if ( (byte_4A05102 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeEntities);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4A05102 = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v13 = 0;
      v14 = &userCommandCodeEntities->m_Items[v10];
      while ( 1 )
      {
        if ( v13 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v13,
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v15 = itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        items = itemList[3].fields._items;
        if ( items )
        {
          v18 = *(_OWORD *)items->m_Items;
          *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&items->bounds;
          *(_OWORD *)&v29.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v28 = v29;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
                                                                    &v28,
                                                                    0LL);
          if ( v10 >= userCommandCodeEntities->max_length )
            sub_1B68938(itemList, userCommandCodeEntities);
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_26;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = itemList;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v20;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
                                                                    &v27,
                                                                    0LL);
          if ( v21 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_26;
      }
      v22 = v15[3].fields._items;
      if ( !v22 )
LABEL_26:
        sub_1B68930(itemList, userCommandCodeEntities);
      v23 = *(_OWORD *)v22->m_Items;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->bounds;
      *(_OWORD *)&v29.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v29;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v26, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(this, v24, 1, v11, v25);
LABEL_24:
      ++v10;
    }
    while ( (__int64)v10 < (int)userCommandCodeEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedServants(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned __int64 v10; // x25
  bool v11; // w21
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v13; // w23
  UserServantEntity_o **v14; // x29
  ServantOperationListViewItem_o *v15; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  Il2CppObject v18; // q0
  UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  System_Collections_Generic_List_object__o *v21; // x24
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  const MethodInfo *v25; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+60h] [xbp-80h]

  if ( (byte_4A05101 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantEntities);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4A05101 = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_26;
      v13 = 0;
      v14 = &userServantEntities->m_Items[v10];
      while ( 1 )
      {
        if ( v13 >= itemList->fields._size )
          goto LABEL_24;
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v13,
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_26;
        v15 = (ServantOperationListViewItem_o *)itemList;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_26;
        }
        syncRoot = itemList[2].fields._syncRoot;
        if ( syncRoot )
        {
          v18 = syncRoot[2];
          *(Il2CppObject *)&v29.fields.currentCryptoKey = syncRoot[1];
          *(Il2CppObject *)&v29.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v28 = v29;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
                                                                    &v28,
                                                                    0LL);
          if ( v10 >= userServantEntities->max_length )
            sub_1B68938(itemList, userServantEntities);
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_26;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = itemList;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v20;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
                                                                    &v27,
                                                                    0LL);
          if ( v21 == itemList )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_26;
      }
      UserServantEntity_k__BackingField = v15->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
LABEL_26:
        sub_1B68930(itemList, userServantEntities);
      v23 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v29;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v26, 0LL);
      ServantOperationListViewManager__ModifyLockItem_32435724(this, v15, v24, 1, v11, v25);
LABEL_24:
      ++v10;
    }
    while ( (__int64)v10 < (int)userServantEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyPushedServant(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *SelfUserGame; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  _QWORD *v10; // x20
  int32_t v11; // w21
  _QWORD *v12; // x22
  __int64 methodPtr_low; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  _QWORD *v16; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-70h]

  v3 = this;
  if ( (byte_4A05103 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A05103 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_1B68930(SelfUserGame, v8);
    v10 = SelfUserGame;
    v11 = 0;
    while ( v11 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v11,
                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( SelfUserGame )
      {
        v12 = SelfUserGame;
        methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*SelfUserGame + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantOperationListViewItem_c **)(*(_QWORD *)(*SelfUserGame + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
        {
          v14 = SelfUserGame[14];
          if ( v14 )
          {
            if ( !v10 )
              goto LABEL_16;
            v15 = *(_OWORD *)(v14 + 32);
            v16 = (_QWORD *)v10[15];
            *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
            *(_OWORD *)&v18.fields.fakeValue = v15;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v17 = v18;
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v17, 0LL);
            *((_BYTE *)v12 + 201) = v16 == SelfUserGame;
          }
          itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
          ++v11;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w21
  __int64 methodPtr_low; // x10
  int64_t v19; // x22
  Il2CppObject v20; // q0
  int64_t v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A050FD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A050FD = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_1B68930(Instance, v16);
    v17 = 0;
    while ( v17 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v17,
                            (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Instance
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantOperationListViewItem_TypeInfo )
          v19 = Instance;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      if ( entity )
      {
        if ( !v19 )
          goto LABEL_31;
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v19, v16);
        if ( !entity )
          goto LABEL_31;
        v20 = entity[2];
        v21 = Instance;
        *(Il2CppObject *)&v28.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v28.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v27, 0LL) )
        {
          v24 = (int)entity;
          *(_QWORD *)(v19 + 112) = entity;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 112), v24, v22, v23);
        }
      }
      else if ( !v19 )
      {
        goto LABEL_31;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v19, v16);
      if ( !SelfUserGame )
        goto LABEL_31;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v19,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v25);
      v26 = *(UnityEngine_Object_o **)(v19 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
      {
        Instance = *(_QWORD *)(v19 + 104);
        if ( !Instance )
          goto LABEL_31;
        (*(void (__fastcall **)(int64_t, int64_t, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          v19,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      Instance = (int64_t)this->fields.itemList;
      ++v17;
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

  if ( (byte_4A05113 & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__, selectItem);
    byte_4A05113 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1B68930(v7, v8);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w21
  int32_t v10; // w9

  if ( (byte_4A05118 & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickFilter2Kind__, method);
    sub_1B686D4(&ServantOperationListViewManager_TypeInfo, v3);
    byte_4A05118 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !ServantOperationListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1B68930(v6, v7);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v10 = filter2Kind + 1;
    else
      v10 = 0;
    sort->fields.filter2Kind = v10;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickFilterKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w9
  ListViewManager_o *v16; // x3
  int32_t v17; // w1

  if ( (byte_4A05119 & 1) == 0 )
  {
    sub_1B686D4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickFilterKind__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A05119 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B68920(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v11 )
      sub_1B68930(v13, v14);
    if ( kind == 1 )
      v15 = 5;
    else
      v15 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v16 = 0LL;
    else
      v16 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v17 = 6;
    else
      v17 = v15;
    CommonUI__OpenServantFilterSelectMenu_30369964(v11, v17, sort, v16, v12, -1, 0LL);
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

  if ( (byte_4A05112 & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickLockModeItem__, selectItem);
    byte_4A05112 = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1B68930(v7, v8);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v11);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  __int64 v25; // x1
  __int64 v26; // x19
  DataManager_o *SelfUserGame; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  ServantOperationListViewItem_o **v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  int64_t context; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v39; // q1
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v44; // x25
  Il2CppObject *Master_object; // x21
  int32_t v46; // w22
  ServantOperationListViewItem_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x9
  int32_t v49; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v51; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  System_Object_array *v55; // x23
  int32_t Rarity; // w26
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x26
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x25
  int32_t v66; // w0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x20
  System_String_o *v76; // x20
  System_String_o *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v80; // x25
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4A05114 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, selectItem);
    sub_1B686D4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1B686D4(&DataManager_TypeInfo, v9);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B686D4(&LocalizationManager_TypeInfo, v12);
    sub_1B686D4(&object___TypeInfo, v13);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B686D4(&Rarity_TypeInfo, v16);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickPushModeItem__, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B686D4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v20);
    sub_1B686D4(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v21);
    sub_1B686D4(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_1B686D4(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_1B686D4(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_1B686D4(&StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4A05114 = 1;
  }
  v26 = sub_1B68920(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_61;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v29, v30);
  *(_QWORD *)(v26 + 24) = selectItem;
  v31 = (ServantOperationListViewItem_o **)(v26 + 24);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v26 + 24), (int32_t)selectItem, v32, v33);
  v34 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v34 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v35 = (System_Reflection_MethodBase_o *)sub_1B686B8(v34, v34[4]);
  OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  context = (int64_t)SelfUserGame->fields.context;
  if ( !context )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v31, v36);
    return;
  }
  if ( !*v31 )
    goto LABEL_61;
  UserServantEntity_k__BackingField = (*v31)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_61;
  v39 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v83;
  if ( context == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v82, 0LL) )
    goto LABEL_13;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_61;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             context,
             (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_61;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = klass;
  *(_QWORD *)&v84.fields.fakeValue = monitor;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v84, 0LL);
  if ( !v41 )
    goto LABEL_61;
  v44 = DataMasterBase_object__object__int___GetEntity(
          v41,
          (int32_t)SelfUserGame,
          (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                    0LL);
  if ( !Master_object )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    v46,
                                    (int32_t)SelfUserGame,
                                    0LL);
  v47 = *v31;
  if ( !*v31 )
    goto LABEL_61;
  v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v47->fields._UserServantEntity_k__BackingField;
  if ( !v48 )
    goto LABEL_61;
  v49 = (int)SelfUserGame;
  SvtId_k__BackingField = v47->fields._SvtId_k__BackingField;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v48[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 SvtId_k__BackingField,
                                 v51,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v55 = (System_Object_array *)sub_1B6877C(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataManager_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v55 )
LABEL_61:
    sub_1B68930(SelfUserGame, v28);
  v59 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( !v55->max_length )
    goto LABEL_62;
  v55->m_Items[0] = v59;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v59, v57, v58);
  if ( !v44 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)v44, 0LL);
  v62 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v55->max_length <= 1 )
    goto LABEL_62;
  v55->m_Items[1] = v62;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v62, v60, v61);
  SelfUserGame = (DataManager_o *)ServantEntity__getName((ServantEntity_o *)v44, v49, -1, 0LL);
  v65 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v55->max_length <= 2 )
    goto LABEL_62;
  v55->m_Items[2] = v65;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v65, v63, v64);
  if ( !*v31 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v31)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_61;
  v66 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataManager_o *)Rarity__getRarityType(v66, 0LL);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_62;
  v55->m_Items[3] = v69;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->m_Items[3], (int32_t)v69, v67, v68);
  if ( !*v31 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v31)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v72 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_63;
  }
  if ( v55->max_length <= 4 )
    goto LABEL_62;
  v55->m_Items[4] = v72;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->m_Items[4], (int32_t)v72, v70, v71);
  if ( !*v31 )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)(*v31)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (DataManager_o *)ServantEntity__getName(
                                    (ServantEntity_o *)SelfUserGame,
                                    ServantLimitCountSealAfter,
                                    -1,
                                    0LL);
  v75 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataManager_o *)sub_1B68810(SelfUserGame, v55->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_63:
      v81 = sub_1B68954();
      sub_1B687FC(v81, 0LL);
    }
  }
  if ( v55->max_length <= 5 )
LABEL_62:
    sub_1B68938(SelfUserGame, v28);
  v55->m_Items[5] = v75;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->m_Items[5], (int32_t)v75, v73, v74);
  v76 = System_String__Format_61433976(v54, v55, 0LL);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v80 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B68920(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v80,
    (Il2CppObject *)v26,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_61;
  CommonUI__OpenConfirmDialog_30362904(
    (CommonUI_o *)Instance,
    v53,
    v76,
    v77,
    v78,
    v80,
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

  if ( (byte_4A05120 & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickScaleChange__, method);
    byte_4A05120 = 1;
  }
  v3 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B68930(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v16);
  ServantOperationListViewManager__SetMode_32438480(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UILabel_o *selectDoneLabel; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct ServantOperationManager_o *parentManager; // x8
  ServantOperationListViewManager_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct ServantOperationManager_o *v20; // x8
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  bool IsSelectEnable; // w21
  _QWORD *v26; // x8
  System_Reflection_MethodBase_o *v27; // x0
  UILabel_o *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct ServantOperationManager_o *v32; // x8
  ServantOperationListViewManager_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  struct ServantOperationManager_o *v37; // x8
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A05110 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, selectItem);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickSelectListView__, v6);
    this = (ServantOperationListViewManager_o *)sub_1B686D4(&StringLiteral_12326/*"SUM_INFO"*/, v7);
    byte_4A05110 = 1;
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
    v9 = Method_ServantOperationListViewManager_OnClickSelectListView__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B686B8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUM_INFO"*/, 0LL);
      parentManager = v4->fields.parentManager;
      if ( parentManager )
      {
        v16 = this;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v12,
                                                      v13,
                                                      v14);
        v20 = v4->fields.parentManager;
        if ( v20 )
        {
          v21 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v20->fields._SelectMax_k__BackingField;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v17, v18, v19);
          this = (ServantOperationListViewManager_o *)System_String__Format_61433840(
                                                        (System_String_o *)v16,
                                                        v21,
                                                        v22,
                                                        0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v23);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                0LL);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_27:
              ServantOperationListViewManager__RefrashListDisp(v4, v24);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v8);
  v26 = Method_ServantOperationListViewManager_OnClickSelectListView__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSelectListView__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B686B8(v26, v26[4]);
  if ( IsSelectEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    if ( this )
    {
      selectItem->fields.selectNum = (int32_t)this->fields.sortOrderButton;
      ++v4->fields.selectSum;
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 1, 0LL);
      v28 = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUM_INFO"*/, 0LL);
      v32 = v4->fields.parentManager;
      if ( v32 )
      {
        v33 = this;
        TotalSum_k__BackingField = v32->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(
                                                      int_TypeInfo,
                                                      &TotalSum_k__BackingField,
                                                      v29,
                                                      v30,
                                                      v31);
        v37 = v4->fields.parentManager;
        if ( v37 )
        {
          v38 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v37->fields._SelectMax_k__BackingField;
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v34, v35, v36);
          this = (ServantOperationListViewManager_o *)System_String__Format_61433840(
                                                        (System_String_o *)v33,
                                                        v38,
                                                        v39,
                                                        0LL);
          if ( v28 )
          {
            UILabel__set_text(v28, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v40);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_29:
    sub_1B68930(this, selectItem);
  }
  OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
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

  if ( (byte_4A0511C & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A0511C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B68930(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w8
  int32_t v16; // w1

  if ( (byte_4A05116 & 1) == 0 )
  {
    sub_1B686D4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndSelectSortKind__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickSortKind__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A05116 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B68920(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1B68930(v13, v14);
    if ( kind == 1 )
      v15 = 2;
    else
      v15 = 1;
    if ( kind == 2 )
      v16 = 6;
    else
      v16 = v15;
    CommonUI__OpenServantSortSelectMenu(v11, v16, sort, 1, v12, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4A05123 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndClickTabChoice__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickTabChoice__, v4);
    byte_4A05123 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v7);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabLock(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4A05122 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndClickTabLock__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickTabLock__, v4);
    byte_4A05122 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        0LL);
      ServantOperationListViewManager__StatusRequest(this, v8, v9);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v7);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabPush(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_bool__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4A05124 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndClickTabPush__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickTabPush__, v4);
    byte_4A05124 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v7, (Il2CppObject *)this, Method_ServantOperationListViewManager_EndClickTabPush__, 0LL);
    ServantOperationListViewManager__StatusRequest(this, v7, v8);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4A05121 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_bool__TypeInfo, method);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndClickTabStatus__, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnClickTabStatus__, v4);
    byte_4A05121 = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v7);
    v8 = (System_Action_bool__o *)sub_1B68920(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      0LL);
    ServantOperationListViewManager__StatusRequest(this, v8, v9);
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

  if ( (byte_4A05108 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A05108 = 1;
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
          sub_1B68930(v8, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4A05115 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B686D4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A05115 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserServantEntity_k__BackingField )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &UserServantEntity_k__BackingField->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v51, 0LL);
  v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                      UserServantEntity_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B68930(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4A050FA & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v3);
    byte_4A050FA = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_10;
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  parentManager = (ServantOperationManager_o *)ServantOperationListViewManager__get_ObjectList(this, v5);
  if ( !parentManager )
    goto LABEL_10;
  v6 = (System_Collections_Generic_List_object__o *)parentManager;
  if ( SLODWORD(parentManager->fields.m_CancellationTokenSource) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      parentManager = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                     v6,
                                                     v7,
                                                     (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
      if ( !parentManager )
        break;
      ((void (__fastcall *)(ServantOperationManager_o *, bool, void *))parentManager->klass[1]._1.parent)(
        parentManager,
        this->fields.isInput,
        parentManager->klass[1]._1.generic_class);
      if ( ++v7 >= v6->fields._size )
        return;
    }
LABEL_10:
    sub_1B68930(parentManager, method);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w20
  ServantOperationListViewItem_o *v7; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v9; // x3

  if ( (byte_4A0510F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v4);
    byte_4A0510F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_1B68930(itemList, method);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v7 = (ServantOperationListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect((ListViewItem_o *)itemList, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v7, v9);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v6;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A05107 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v9);
    sub_1B686D4(&Method_ServantOperationListViewManager_OnMoveEnd__, v10);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v11);
    byte_4A05107 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v17, v18);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x1
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
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A05106 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, item);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_1B686D4(&StringLiteral_12326/*"SUM_INFO"*/, v6);
    byte_4A05106 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
    && ServantOperationListViewItem__get_IsCanNotSelect(item, v7) )
  {
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUM_INFO"*/, 0LL);
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
          this = (ServantOperationListViewManager_o *)System_String__Format_61433840(
                                                        (System_String_o *)v13,
                                                        v18,
                                                        v19,
                                                        0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v20);
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
    sub_1B68930(this, item);
  }
  return 0;
}


void __fastcall ServantOperationListViewManager__SetDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v11; // w20
  int32_t v12; // w22
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct ServantOperationManager_o *v24; // x8
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0512B & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&LocalizationManager_TypeInfo, v3);
    sub_1B686D4(&Method_ServantOperationListViewManager_SetDragEnd__, v4);
    sub_1B686D4(&StringLiteral_12326/*"SUM_INFO"*/, v5);
    byte_4A0512B = 1;
  }
  v6 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B686EC(Method_ServantOperationListViewManager_SetDragEnd__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v11 = this->fields.dragStartIndex;
    else
      v11 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = this->fields.dragEndIndex;
    else
      v12 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v11++, v8);
    while ( v11 <= v12 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_19;
  v20 = v14;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v14 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v16, v17, v18);
  v24 = this->fields.parentManager;
  if ( !v24
    || (v25 = (Il2CppObject *)v14,
        SelectMax_k__BackingField = v24->fields._SelectMax_k__BackingField,
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v21, v22, v23),
        v14 = System_String__Format_61433840(v20, v25, v26, 0LL),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_1B68930(v14, v15);
  }
  UILabel__set_text(selectDoneLabel, v14, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v27);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA6690;
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3
  ServantOperationListViewItem_o *v13; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *viewObject; // x19
  __int64 v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4A05129 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v8);
    sub_1B686D4(&ServantOperationListViewObject_TypeInfo, v9);
    byte_4A05129 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v13 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v13, isDragSelect, v12);
    sub_1B68930(v17, v18);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1B68BF0(Item);
    goto LABEL_16;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(this, (ServantOperationListViewItem_o *)Item, isDragSelect, v12);
  viewObject = (UnityEngine_Object_o *)v13->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v13->fields.viewObject;
    if ( itemSortList )
    {
      v16 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v16
        && (ServantOperationListViewObject_c *)itemSortList->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)itemSortList, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B68930(itemSortList, *(_QWORD *)&index);
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemSortList; // x0
  int size; // w22
  int32_t v12; // w21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *scrollView; // x20

  v6 = isDragSelect;
  if ( (byte_4A0512A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4A0512A = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BA6690;
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  this->fields.isDragSelect = v6;
  if ( !itemSortList )
    goto LABEL_17;
  size = itemSortList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemSortList,
                                                                    v12,
                                                                    (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemSortList )
        break;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      HIDWORD(itemSortList[6].monitor) = -1;
      if ( size == v12 )
        goto LABEL_12;
      itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_17:
    sub_1B68930(itemSortList, *(_QWORD *)&startIndex);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4A0511B & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17446/*"btn_filter_on"*/, method);
    sub_1B686D4(&StringLiteral_17445/*"btn_filter"*/, v3);
    byte_4A0511B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B68930(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17445/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17446/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, item);
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantOperationManager_o *parentManager; // x8
  int v11; // w27
  ServantOperationListViewManager_o *v12; // x22
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *dropDragPrefab; // x23
  struct UnityEngine_GameObject_o *v15; // x8
  __int64 v16; // x11
  ServantOperationListViewManager_o *v17; // x0
  int32_t v18; // w1
  bool v19; // w2
  const MethodInfo *v20; // x3

  v5 = start;
  v6 = this;
  if ( (byte_4A05128 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_1B686D4(&ServantOperationListViewObject_TypeInfo, v9);
    byte_4A05128 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_1B68930(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v11 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      this = (ServantOperationListViewManager_o *)v6->fields.itemSortList;
      if ( !this )
        goto LABEL_20;
      this = (ServantOperationListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v5,
                                                    (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_20;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v12 = this;
      methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantOperationListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( SHIDWORD(this->fields.leftItem) >= 1 )
      {
        HIDWORD(this->fields.leftItem) = v11;
        dropDragPrefab = (UnityEngine_Object_o *)this->fields.dropDragPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ++v11;
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(dropDragPrefab, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v15 = v12->fields.dropDragPrefab;
          if ( !v15 )
            goto LABEL_20;
          v16 = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
            || (ServantOperationListViewObject_c *)v15->klass->_2.typeHierarchy[v16 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_20;
          }
          ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)v12->fields.dropDragPrefab, 0LL);
        }
      }
      if ( ++v5 > end )
        return;
    }
    v17 = (ServantOperationListViewManager_o *)sub_1B68BF0(this);
    ServantOperationListViewManager__SetDragSelect(v17, v18, v19, v20);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)v4, (int32_t)SortInfo, v6, v7);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_1B68930(0LL, v8);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectServant,
    (int32_t)onSelectServant,
    (int32_t)onSelectServant,
    (int32_t)method);
  ServantOperationListViewManager__SetMode_32438480(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_32438480(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t ObjectSum; // w0
  int32_t v8; // w8
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  char v11; // w22
  int32_t v12; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v14; // x2
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v16; // x1
  bool v17; // w8
  int32_t v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_4A05105 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4A05105 = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v8 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v8 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_14:
      sub_1B68930(itemList, v9);
    v11 = 0;
    v12 = 0;
    while ( v12 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v12,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item
        && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
          v16 = (ServantOperationListViewItem_o *)Item;
        else
          v16 = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v16, v14);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v11 |= v17;
      ++v12;
      if ( !itemList )
        goto LABEL_14;
    }
    if ( (v11 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v9);
    v18 = ServantOperationListViewObject__GetInitMode(initMode, 0LL);
    ServantOperationListViewManager__RequestListObject(this, v18, v19);
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
  if ( (byte_4A05104 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1B686D4(&ServantOperationListViewObject_TypeInfo, obj);
    byte_4A05104 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, (int32_t)method, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1B68930(sort, *(_QWORD *)&scaleKind);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  signed int max_length; // w8
  __int64 v16; // x22
  UserServantEntity_o *v17; // x24
  __int128 v18; // q0
  System_Int64_array *v19; // x25
  System_Int64_array *v20; // x26
  int64_t favoriteUserSvtId; // x29
  int64_t v22; // x27
  ServantOperationListViewItem_o *v23; // x23
  const MethodInfo *v24; // x6
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  const MethodInfo *v31; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A050F5 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A050F5 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_24;
    UserDeckMaster__getPartyList((UserDeckMaster_o *)MasterData_object, &svtIdList, &equipIdList, Instance, 0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1B68938(Instance, v13);
        v17 = userServantEntities->m_Items[v16];
        if ( !v17 )
          break;
        v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
        v20 = equipIdList;
        v19 = svtIdList;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v33, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v22 = Instance;
        v23 = (ServantOperationListViewItem_o *)sub_1B68920(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v23, v16, v17, v19, v20, v22 == favoriteUserSvtId, v24);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v27 = *(_QWORD *)(Instance + 16);
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v27 )
          break;
        v29 = *(int *)(Instance + 24);
        if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v23,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = v27 + 8 * v29;
          *(_DWORD *)(Instance + 24) = v29 + 1;
          *(_QWORD *)(v30 + 32) = v23;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v23, v25, v26);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v23, v31);
        max_length = userServantEntities->max_length;
        if ( (int)++v16 >= max_length )
          return v16;
      }
LABEL_24:
      sub_1B68930(Instance, v13);
    }
  }
  LODWORD(v16) = 0;
  return v16;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_32430784(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v14; // x22
  __int64 v15; // x21
  UserCommandCodeEntity_o *v16; // x24
  __int128 v17; // q0
  bool v18; // w25
  ServantOperationListViewItem_o *v19; // x23
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h]

  if ( (byte_4A050F6 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userCommandCodeEntities);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A050F6 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                          (UserServantCommandCodeMaster_o *)Instance,
                          0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v14 = (System_Collections_Generic_List_long__o *)Instance;
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1B68938(Instance, v12);
        v16 = userCommandCodeEntities->m_Items[v15];
        if ( !v16 )
          break;
        v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v30.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v30;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v29, 0LL);
        if ( !v14 )
          break;
        v18 = System_Collections_Generic_List_long___Contains(
                v14,
                Instance,
                (const MethodInfo_34A4624 *)Method_System_Collections_Generic_List_long__Contains__);
        v19 = (ServantOperationListViewItem_o *)sub_1B68920(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_32416640(v19, v15, v16, v18, v20);
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
            (Il2CppObject *)v19,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * v25;
          *(_DWORD *)(Instance + 24) = v25 + 1;
          *(_QWORD *)(v26 + 32) = v19;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v19, v21, v22);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v19, v27);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v15 >= max_length )
          return v15;
      }
LABEL_22:
      sub_1B68930(Instance, v12);
    }
  }
  LODWORD(v15) = 0;
  return v15;
}


void __fastcall ServantOperationListViewManager__SetSortButtonImage(
        ServantOperationListViewManager_o *this,
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  ServantOperationManager_o *parentManager; // x20

  if ( (byte_4A0511F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_17476/*"btn_sort_up"*/, v3);
    sub_1B686D4(&StringLiteral_17563/*"btn_txt_up"*/, v4);
    sub_1B686D4(&StringLiteral_17519/*"btn_txt_new"*/, v5);
    sub_1B686D4(&StringLiteral_17509/*"btn_txt_down"*/, v6);
    sub_1B686D4(&StringLiteral_17526/*"btn_txt_old"*/, v7);
    sub_1B686D4(&StringLiteral_17473/*"btn_sort_down"*/, v8);
    byte_4A0511F = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_36;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17526/*"btn_txt_old"*/ : &StringLiteral_17519/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
        v17 = this->fields.sort;
        if ( v17 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v18 = (System_String_o **)&StringLiteral_17473/*"btn_sort_down"*/;
            v19 = (System_String_o **)&StringLiteral_17476/*"btn_sort_up"*/;
LABEL_29:
            if ( v17->fields.isAscendingOrder )
              v21 = v18;
            else
              v21 = v19;
            UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
        v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17563/*"btn_txt_up"*/ : &StringLiteral_17509/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
        v17 = this->fields.sort;
        if ( v17 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v18 = (System_String_o **)&StringLiteral_17476/*"btn_sort_up"*/;
            v19 = (System_String_o **)&StringLiteral_17473/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_36:
    sub_1B68930(sort, v10);
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
  __int64 v7; // x1
  UICommonButton_o *statusTabButton; // x1
  UISprite_o *statusTabSprite; // x2
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x5
  UnityEngine_Object_o *pushTabButton; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v15; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UILabel_o *v17; // x20
  ServantOperationListViewManager_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 methodPtr_low; // x9
  ServantOperationListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4A050F7 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B686D4(&ShopRootComponent_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_4A050F7 = 1;
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
    v10);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.choiceTabButton,
    this->fields.choiceTabSprite,
    this->fields.modeKind,
    2,
    v11);
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
        v15);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0LL),
        v17 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v18,
                                                   this->fields.modeKind,
                                                   v19),
        !v17)
    || (UILabel__set_text(v17, (System_String_o *)statusLabel, 0LL),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0LL )
  {
    sub_1B68930(statusLabel, v13);
  }
  methodPtr_low = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(statusLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    v21 = (ServantOperationListViewManager_o *)sub_1B68BF0(statusLabel);
    ServantOperationListViewManager__SetFilterButtonImage(v21, v22);
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
    sub_1B68930(this, tabButton);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  System_Int64_array *v17; // [xsp+0h] [xbp-30h] BYREF
  System_Int64_array *changeIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A05126 & 1) == 0 )
  {
    sub_1B686D4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd);
    sub_1B686D4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1B686D4(&Method_ServantOperationListViewManager_EndStatusSync__, v9);
    byte_4A05126 = 1;
  }
  v17 = 0LL;
  changeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.onRequestEnd,
    (int32_t)onRequestEnd,
    (int32_t)method,
    v3);
  if ( ServantOperationListViewManager__GetSwapList(this, v10, &changeIds, &v17, v11) )
  {
    kind = this->fields.kind;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                         (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
      sub_1B68930(Request_object, v16);
    }
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w23
  System_Collections_Generic_List_object__o *v13; // x24
  __int64 methodPtr_low; // x10
  UserServantEntity_o *syncRoot; // x0
  int32_t v16; // w27
  int32_t v17; // w27
  int32_t v18; // w24
  int32_t SellRarePri; // w0
  UserCommandCodeEntity_o *items; // x0
  int32_t v21; // w27
  int32_t v22; // w27

  if ( (byte_4A050FB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1B686D4(&ServantOperationListViewItem_TypeInfo, v10);
    byte_4A050FB = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1B68930(itemList, qp);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v13 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      syncRoot = (UserServantEntity_o *)v13[2].fields._syncRoot;
      if ( syncRoot )
      {
        v16 = *qp;
        *qp = UserServantEntity__getSellQp(syncRoot, 0LL) + v16;
        itemList = (System_Collections_Generic_List_object__o *)v13[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v17 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)itemList, 0LL) + v17;
        itemList = (System_Collections_Generic_List_object__o *)v13[2].fields._syncRoot;
        if ( !itemList )
          goto LABEL_20;
        v18 = *rarePri;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)itemList, 0LL);
LABEL_18:
        *rarePri = SellRarePri + v18;
        goto LABEL_19;
      }
      items = (UserCommandCodeEntity_o *)v13[3].fields._items;
      if ( items )
      {
        v21 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp(items, 0LL) + v21;
        itemList = (System_Collections_Generic_List_object__o *)v13[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v22 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)itemList, 0LL) + v22;
        itemList = (System_Collections_Generic_List_object__o *)v13[3].fields._items;
        if ( !itemList )
          goto LABEL_20;
        v18 = *rarePri;
        SellRarePri = UserCommandCodeEntity__GetSellRarePri((UserCommandCodeEntity_o *)itemList, 0LL);
        goto LABEL_18;
      }
    }
LABEL_19:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
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

  if ( (byte_4A05125 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1B686D4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  item);
    byte_4A05125 = 1;
  }
  if ( !item )
    sub_1B68930(this, item);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v7; // w21

  if ( (byte_4A05111 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A05111 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B68930(itemList, *(_QWORD *)&selectNum);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_12;
    if ( SLODWORD(itemList->fields._items) > selectNum )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_12;
      --LODWORD(itemList->fields._items);
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v7;
    if ( !itemList )
      goto LABEL_12;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A050EF & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B686D4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A050EF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1B68930(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v14 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewObject__GetItem(
                                                                  (ServantOperationListViewObject_o *)objectList,
                                                                  0LL);
      if ( objectList )
      {
        v10 = objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40459252(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v9;
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4A050EE & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B686D4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A050EE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1B68930(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v12,
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v12;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v9;
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A051A2 & 1) == 0 )
  {
    sub_1B686D4(&ServantOperationListViewManager___c_TypeInfo, v1);
    byte_4A051A2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A051A3 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v6);
    byte_4A051A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30363564(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B68930(Instance, v8);
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
    sub_1B68930(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}