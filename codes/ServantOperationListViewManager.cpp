void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v18; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  ListViewSort_o *v22; // x20
  struct ServantOperationListViewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x19
  System_String_o *v31; // x0
  System_String_o *v32; // x19
  ListViewSort_o *v33; // x20
  struct ServantOperationListViewManager_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x19
  ListViewSort_o *v42; // x20
  struct ServantOperationListViewManager_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC758 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1192/*"4"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12875/*"ServantOperation"*/, v14, v15, v16);
    byte_42EC758 = 1;
  }
  v50 = 0;
  ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_12875/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12875/*"ServantOperation"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v18, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v50 = 1;
  v20 = System_Int32__ToString((int32_t)&v50, 0LL);
  v21 = System_String__Concat_44577788(SORT_SAVE_KEY, v20, 0LL);
  v22 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v22, v21, 3, 0, 0LL);
  v23 = ServantOperationListViewManager_TypeInfo->static_fields;
  v23->servantSortInfo = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v23->servantSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v50 = 2;
  v31 = System_Int32__ToString((int32_t)&v50, 0LL);
  v32 = System_String__Concat_44577788(v30, v31, 0LL);
  v33 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v33, v32, 3, 0, 0LL);
  v34 = ServantOperationListViewManager_TypeInfo->static_fields;
  v34->servantEquipSortInfo = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v34->servantEquipSortInfo,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = System_String__Concat_44577788(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1192/*"4"*/,
          0LL);
  v42 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v42, v41, 2, 0, 0LL);
  v43 = ServantOperationListViewManager_TypeInfo->static_fields;
  v43->commandCodeSortInfo = v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v43->commandCodeSortInfo,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_ServantOperationListViewItem__o *onSelectServant; // x21

  if ( (byte_42EC73A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantOperationListViewItem__Invoke__, (_DWORD)item, (_DWORD)method, v3);
    byte_42EC73A = 1;
  }
  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSelectServant,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onSelectServant,
      (System_Uri_o *)item,
      (const MethodInfo_258B334 *)Method_System_Action_ServantOperationListViewItem__Invoke__);
  }
}


void __fastcall ServantOperationListViewManager__CallRequestEnd(
        ServantOperationListViewManager_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_bool__o *onRequestEnd; // x20

  if ( (byte_42EC751 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__Invoke__, result, (_DWORD)method, v3);
    byte_42EC751 = 1;
  }
  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    this->fields.onRequestEnd = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onRequestEnd, result, (const MethodInfo_25873EC *)Method_System_Action_bool__Invoke__);
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
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v5 = this;
  if ( (byte_42EC757 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC757 = 1;
  }
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemSortList->fields._items->m_Items[index];
  if ( !v10
    || (v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  v10[2].fields.loopIndex = -1;
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
    sub_B5D69C(this, isPlus);
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

  if ( (byte_42EC718 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, kind, modeKind, method);
    byte_42EC718 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ServantOperationListViewManager__SetListViewSort(this, kind, v8);
  sort = this->fields.sort;
  this->fields.kind = kind;
  this->fields.modeKind = modeKind;
  if ( !sort )
    goto LABEL_9;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_32521088(
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get(EmptyMessageCode, 0LL);
  if ( !emptyMessageLabel )
LABEL_9:
    sub_B5D69C(v9, v10);
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
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ServantOperationListViewItem_o *v10; // x20
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 v13; // x1

  v5 = this;
  if ( (byte_42EC756 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC756 = 1;
  }
  itemSortList = v5->fields.itemSortList;
  if ( !itemSortList )
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v10 )
  {
    ServantOperationListViewManager__SetIsItemSelect(v5, 0LL, method);
    sub_B5D69C(v12, v13);
  }
  v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B5D990(v10);
    goto LABEL_11;
  }
  ServantOperationListViewManager__SetIsItemSelect(v5, v10, method);
  v10->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantOperationListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC714 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC714 = 1;
  }
  v4 = ServantOperationListViewManager_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v4 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
    sub_B5D69C(0LL, v3);
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
  ServantOperationListViewManager__SetMode_32530004(this, 2, v5);
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
    sub_B5D69C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v7);
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
    sub_B5D69C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v7);
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
    sub_B5D69C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v7);
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
    sub_B5D69C(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v7);
}


void __fastcall ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x1
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  CommonUI_o *v18; // x19
  ServantOperationListViewManager___c_c *v19; // x8
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v22; // x21
  struct ServantOperationListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EC743 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v9, v10, v11);
    sub_B5D5C4(&ServantOperationListViewManager___c_TypeInfo, v12, v13, v14);
    byte_42EC743 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v15);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (CommonUI_o *)Instance;
  v19 = ServantOperationListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v19 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v22,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    v23 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v23->__9__106_0 = _9__106_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v18 )
    sub_B5D69C(Instance, v17);
  CommonUI__CloseServantFilterSelectMenu(v18, _9__106_0, 0LL);
}


void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EC740 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EC740 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
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
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v13; // x22
  int64_t v14; // x21
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  v5 = this;
  if ( (byte_42EC746 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC746 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  v13 = 0LL;
  v14 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = itemList->fields._items->m_Items[v13];
    if ( v15 )
    {
      v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v5->fields.itemList;
        ++v13;
        if ( (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != ServantOperationListViewItem_TypeInfo )
          v15 = 0LL;
        if ( v15[1].fields.selectNum == svtId )
          ++v14;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v13; // x22
  int64_t v14; // x21
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  v5 = this;
  if ( (byte_42EC747 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC747 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&commandCodeId);
  v13 = 0LL;
  v14 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = itemList->fields._items->m_Items[v13];
    if ( v15 )
    {
      v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v5->fields.itemList;
        ++v13;
        if ( (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != ServantOperationListViewItem_TypeInfo )
          v15 = 0LL;
        if ( LODWORD(v15[1].fields.sortValue0B) == commandCodeId )
          ++v14;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v14;
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  __int64 *v18; // x8

  if ( (byte_42EC71C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, kind, isNotEmpty, method);
    sub_B5D5C4(&StringLiteral_3292/*"COMMAND_CODE_EMPTY"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11789/*"SERVANT_ALL_EMPTY"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EC71C = 1;
  }
  if ( isNotEmpty )
  {
    v18 = &StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v18 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v18 = off_3F3FE10[kind];
  }
  return (System_String_o *)*v18;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  _BOOL8 IsSelect; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v24; // x22
  ListViewItem_o *v25; // x21
  __int64 v26; // x10

  if ( (byte_42EC735 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v17, v18, v19);
    byte_42EC735 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B5D69C(IsSelect, v22);
  v24 = 0LL;
  while ( (__int64)v24 < itemList->fields._size )
  {
    if ( v24 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = itemList->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (ServantOperationListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v25, 0LL);
        if ( IsSelect && (BYTE4(v25[1].fields.sortValue2) || BYTE6(v25[1].fields.sortValue2)) )
        {
          if ( !v20 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
        }
        itemList = this->fields.itemList;
        ++v24;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v20;
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
LABEL_10:
    sub_B5D69C(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsLock_k__BackingField;
    goto LABEL_10;
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
LABEL_10:
    sub_B5D69C(this, item);
  }
  if ( modeKind == 1 )
  {
    if ( item )
      return item->fields._IsSwapLock_k__BackingField;
    goto LABEL_10;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  ServantEntity_o *IsSelect; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v24; // x22
  ListViewItem_o *v25; // x21
  __int64 v26; // x10

  if ( (byte_42EC736 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v17, v18, v19);
    byte_42EC736 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B5D69C(IsSelect, v22);
  v24 = 0LL;
  while ( (__int64)v24 < itemList->fields._size )
  {
    if ( v24 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = itemList->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (ServantOperationListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = (ServantEntity_o *)ListViewItem__get_IsSelect(v25, 0LL);
        if ( ((unsigned __int8)IsSelect & 1) != 0 )
        {
          IsSelect = (ServantEntity_o *)v25[1].monitor;
          if ( IsSelect )
          {
            IsSelect = (ServantEntity_o *)ServantEntity__get_IsServant(IsSelect, 0LL);
            if ( ((unsigned __int8)IsSelect & 1) != 0
              && (BYTE3(v25[1].fields.sortValue2B) || BYTE4(v25[1].fields.sortValue2B)) )
            {
              if ( !v20 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v20,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v24;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v20;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_long__o *v20; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v24; // x22
  ListViewItem_o *v25; // x21
  __int64 v26; // x10

  if ( (byte_42EC732 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v17, v18, v19);
    byte_42EC732 = 1;
  }
  v20 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B5D69C(IsSelect, v22);
  v24 = 0LL;
  while ( (__int64)v24 < itemList->fields._size )
  {
    if ( v24 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = itemList->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (ServantOperationListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v25, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v25, v22);
          if ( !v20 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v20,
            IsSelect,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v24;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v20;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ListViewItem_o *v14; // x21
  __int64 v15; // x10

  v5 = this;
  if ( (byte_42EC734 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC734 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B5D69C(this, userCommandCodeId);
  v13 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v13 >= itemList->fields._size )
      return -1;
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( !v14 )
      goto LABEL_14;
    v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v14, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                    (ServantOperationListViewItem_o *)v14,
                                                    (const MethodInfo *)userCommandCodeId);
      if ( this == (ServantOperationListViewManager_o *)userCommandCodeId )
        return v14->fields.selectNum;
    }
    itemList = v5->fields.itemList;
    ++v13;
    if ( !itemList )
      goto LABEL_14;
  }
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ListViewItem_o *v14; // x21
  __int64 v15; // x10

  v5 = this;
  if ( (byte_42EC733 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC733 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B5D69C(this, userServantId);
  v13 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v13 >= itemList->fields._size )
      return -1;
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( !v14 )
      goto LABEL_14;
    v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v14, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserSvtId(
                                                    (ServantOperationListViewItem_o *)v14,
                                                    (const MethodInfo *)userServantId);
      if ( this == (ServantOperationListViewManager_o *)userServantId )
        return v14->fields.selectNum;
    }
    itemList = v5->fields.itemList;
    ++v13;
    if ( !itemList )
      goto LABEL_14;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_long__o *v20; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v24; // x22
  ListViewItem_o *v25; // x21
  __int64 v26; // x10

  if ( (byte_42EC731 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v17, v18, v19);
    byte_42EC731 = 1;
  }
  v20 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B5D69C(IsSelect, v22);
  v24 = 0LL;
  while ( (__int64)v24 < itemList->fields._size )
  {
    if ( v24 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = itemList->fields._items->m_Items[v24];
    if ( v25 )
    {
      v26 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (ServantOperationListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v25, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v25, v22);
          if ( !v20 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v20,
            IsSelect,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v24;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v20;
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
  __int64 v3; // x3
  ServantOperationListViewManager_c *v5; // x0
  ListViewSort_o **p_commandCodeSortInfo; // x8
  ServantOperationListViewManager_c *v7; // x0
  ServantOperationListViewManager_c *v8; // x0

  if ( (byte_42EC719 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42EC719 = 1;
  }
  switch ( kind )
  {
    case 2:
      v7 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v7 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v7->static_fields->commandCodeSortInfo;
      return *p_commandCodeSortInfo;
    case 1:
      v8 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v8 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v8->static_fields->servantEquipSortInfo;
      return *p_commandCodeSortInfo;
    case 0:
      v5 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v5 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v5->static_fields->servantSortInfo;
      return *p_commandCodeSortInfo;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 *v17; // x8

  if ( (byte_42EC721 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EC721 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v17, 0LL);
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v17, 0LL);
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      return LocalizationManager__Get((System_String_o *)*v17, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_long__o *v29; // x23
  System_Collections_Generic_List_long__o *v30; // x22
  _BOOL8 IsSwap; // x0
  int64_t v32; // x1
  System_String_array **v33; // x2
  MethodInfo *v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v40; // x25
  ListViewItem_o *v41; // x8
  __int64 v42; // x11
  ServantOperationListViewItem_o *v43; // x24
  const MethodInfo_3047788 *v44; // x2
  System_Collections_Generic_List_long__o *v45; // x0
  System_Int64_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int64_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int64_t id; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EC750 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, modekind, (_DWORD)changeIds, revokeIds);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v26, v27, v28);
    byte_42EC750 = 1;
  }
  id = 0LL;
  v29 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v41 = itemList->fields._items->m_Items[v40];
    if ( v41
      && (v42 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
    {
      if ( (ServantOperationListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] == ServantOperationListViewItem_TypeInfo )
        v43 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v40];
      else
        v43 = 0LL;
    }
    else
    {
      v43 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)IsSwap,
               v43,
               this->fields.modeKind,
               v34);
    if ( IsSwap )
    {
      IsSwap = ServantOperationListViewManager__TryGetItemCollectId(
                 (ServantOperationListViewManager_o *)IsSwap,
                 v43,
                 &id,
                 v34);
      if ( IsSwap )
      {
        IsSwap = ServantOperationListViewManager__GetIsSelected(
                   (ServantOperationListViewManager_o *)IsSwap,
                   v43,
                   this->fields.modeKind,
                   v34);
        v32 = id;
        if ( IsSwap )
        {
          if ( !v30 )
            goto LABEL_23;
          v44 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v45 = v30;
        }
        else
        {
          if ( !v29 )
            goto LABEL_23;
          v44 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v45 = v29;
        }
        System_Collections_Generic_List_long___Add(v45, id, v44);
      }
    }
    itemList = this->fields.itemList;
    ++v40;
    if ( !itemList )
      goto LABEL_23;
  }
  if ( !v29 || !v30 )
LABEL_23:
    sub_B5D69C(IsSwap, v32);
  if ( v30->fields._size + v29->fields._size < 1 )
  {
    *changeIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)changeIds, 0LL, v33, (System_String_array **)v34, v35, v36, v37, v38);
    *revokeIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)revokeIds, 0LL, v61, v62, v63, v64, v65, v66);
    return 0;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v29,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v46;
    sub_B5D560((BattleServantConfConponent_o *)changeIds, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
    v53 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v53;
    sub_B5D560((BattleServantConfConponent_o *)revokeIds, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
    return 1;
  }
}


System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  __int64 *v30; // x8
  __int64 *v31; // x9

  if ( (byte_42EC720 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, kind, isSelected, method);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v27, v28, v29);
    byte_42EC720 = 1;
  }
  switch ( kind )
  {
    case 0:
      v30 = &StringLiteral_17350/*"button_select_unreg"*/;
      v31 = &StringLiteral_17349/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v30 = &StringLiteral_17336/*"button_alllock_unreg"*/;
      v31 = &StringLiteral_17335/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v30 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
      v31 = &StringLiteral_17333/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v30 = &StringLiteral_17348/*"button_push_unreg"*/;
      v31 = &StringLiteral_17347/*"button_push_reg"*/;
LABEL_9:
      if ( isSelected )
        v30 = v31;
      break;
    default:
      v30 = (__int64 *)&StringLiteral_1/*""*/;
      break;
  }
  return (System_String_o *)*v30;
}


UserCommandCodeEntity_array *__fastcall ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EC71B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EC71B = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
}


UserServantEntity_array *__fastcall ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EC71A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EC71A = 1;
  }
  if ( kind == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  ServantOperationListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC715 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC715 = 1;
  }
  v4 = ServantOperationListViewManager_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v4 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
    sub_B5D69C(this, item);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 Instance; // x0
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v32; // x22
  ListViewItem_o *v33; // x8
  __int64 v34; // x11
  ListViewItem_o *v35; // x20
  __int128 v36; // q0
  __int64 v37; // x21
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  UnityEngine_Object_o *viewObject; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42EC724 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, kind, selectedId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    byte_42EC724 = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_34:
      sub_B5D69C(Instance, v29);
    v32 = 0LL;
    while ( (__int64)v32 < itemList->fields._size )
    {
      if ( v32 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v33 = itemList->fields._items->m_Items[v32];
      if ( v33
        && (v34 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
      {
        if ( (ServantOperationListViewItem_c *)v33->klass->_2.typeHierarchy[v34 - 1] == ServantOperationListViewItem_TypeInfo )
          v35 = itemList->fields._items->m_Items[v32];
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      if ( entity )
      {
        if ( !v35 )
          goto LABEL_34;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v35, v29);
        if ( !entity )
          goto LABEL_34;
        v36 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v37 = Instance;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v45 = v46;
        if ( v37 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v45, 0LL) )
        {
          v43 = (System_Int32_array **)entity;
          *(_QWORD *)&v35[1].fields.sortIndex = entity;
          sub_B5D560((BattleServantConfConponent_o *)&v35[1].fields.sortIndex, v43, v30, v38, v39, v40, v41, v42);
        }
      }
      else if ( !v35 )
      {
        goto LABEL_34;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v35, 0, (const MethodInfo *)v30);
      viewObject = (UnityEngine_Object_o *)v35->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v35->fields.viewObject;
        if ( !Instance )
          goto LABEL_34;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v35,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v32;
      if ( !itemList )
        goto LABEL_34;
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
  ServantOperationListViewManager_o *v8; // x20
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v31; // x21
  unsigned __int64 v32; // x24
  bool v33; // w28
  ListViewItem_o *v34; // x8
  __int64 v35; // x11
  ListViewItem_o *v36; // x22
  int64_t UserSvtId; // x0
  __int128 v38; // q0
  ServantOperationListViewManager_o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_42EC726 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v24, v25, v26);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v27,
                                                  v28,
                                                  v29);
    byte_42EC726 = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v31 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrSvtId,
                                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B5D69C(this, usrSvtId);
      }
      v31 = this;
    }
    v32 = 0LL;
    v33 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v32 >= itemList->fields._size )
        return;
      if ( v32 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = itemList->fields._items->m_Items[v32];
      if ( v34
        && (v35 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
      {
        if ( (ServantOperationListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == ServantOperationListViewItem_TypeInfo )
          v36 = itemList->fields._items->m_Items[v32];
        else
          v36 = 0LL;
        if ( !v31 )
          goto LABEL_28;
      }
      else
      {
        v36 = 0LL;
        if ( !v31 )
          goto LABEL_28;
      }
      if ( !v36 )
        goto LABEL_41;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(
                    (ServantOperationListViewItem_o *)v36,
                    (const MethodInfo *)usrSvtId);
      v38 = *(_OWORD *)&v31->fields.indicator;
      v39 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v31->fields.m_CachedPtr;
      *(_OWORD *)&v50.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v49 = v50;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v49,
                                                    0LL);
      if ( v39 == this )
      {
        v36[1].klass = (ListViewItem_c *)v31;
        sub_B5D560((BattleServantConfConponent_o *)&v36[1], (System_Int32_array **)v31, v40, v41, v42, v43, v44, v45);
        if ( v33 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v33 )
      {
LABEL_29:
        if ( !v36 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v36,
          (const MethodInfo *)usrSvtId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v36, v46);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v36, v47);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v36 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v36->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v36->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v36,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v36->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v36, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v32;
      if ( !itemList )
        goto LABEL_41;
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
  ServantOperationListViewManager_o *v8; // x20
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v31; // x21
  unsigned __int64 v32; // x24
  bool v33; // w28
  ListViewItem_o *v34; // x8
  __int64 v35; // x11
  ListViewItem_o *v36; // x22
  int64_t UserCommandCodeId; // x0
  __int128 v38; // q0
  ServantOperationListViewManager_o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_42EC728 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId, isInit, isIconSizeChange);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v24, v25, v26);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v27,
                                                  v28,
                                                  v29);
    byte_42EC728 = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v31 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrCmdId,
                                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B5D69C(this, usrCmdId);
      }
      v31 = this;
    }
    v32 = 0LL;
    v33 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v32 >= itemList->fields._size )
        return;
      if ( v32 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = itemList->fields._items->m_Items[v32];
      if ( v34
        && (v35 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
      {
        if ( (ServantOperationListViewItem_c *)v34->klass->_2.typeHierarchy[v35 - 1] == ServantOperationListViewItem_TypeInfo )
          v36 = itemList->fields._items->m_Items[v32];
        else
          v36 = 0LL;
        if ( !v31 )
          goto LABEL_28;
      }
      else
      {
        v36 = 0LL;
        if ( !v31 )
          goto LABEL_28;
      }
      if ( !v36 )
        goto LABEL_41;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v36,
                            (const MethodInfo *)usrCmdId);
      v38 = *(_OWORD *)&v31->fields.indicator;
      v39 = (ServantOperationListViewManager_o *)UserCommandCodeId;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v31->fields.m_CachedPtr;
      *(_OWORD *)&v49.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v48 = v49;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v48,
                                                    0LL);
      if ( v39 == this )
      {
        *(_QWORD *)&v36[1].fields.sortIndex = v31;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v36[1].fields.sortIndex,
          (System_Int32_array **)v31,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        if ( v33 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v33 )
      {
LABEL_29:
        if ( !v36 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v36,
          (const MethodInfo *)usrCmdId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v36, v46);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v36 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v36->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v36->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v36,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v36->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v36, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v32;
      if ( !itemList )
        goto LABEL_41;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__ModifyLockItem_32526676(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v10; // x20
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantOperationListViewManager_o *v23; // x23
  int64_t UserSvtId; // x0
  __int128 v25; // q1
  ServantOperationListViewManager_o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]

  v10 = this;
  if ( (byte_42EC727 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)item, usrSvtId, isInit);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v20,
                                                  v21,
                                                  v22);
    byte_42EC727 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_27;
      v23 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v25 = *(_OWORD *)&v23->fields.indicator;
      v26 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v23->fields.m_CachedPtr;
      *(_OWORD *)&v37.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v36 = v37;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                    &v36,
                                                    0LL);
      if ( v26 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v23;
        sub_B5D560(
          (BattleServantConfConponent_o *)&item->fields._UserServantEntity_k__BackingField,
          (System_Int32_array **)v23,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !item )
      goto LABEL_27;
  }
  else
  {
    if ( !item )
      goto LABEL_27;
    ServantOperationListViewItem__ModifyLockItem(item, (const MethodInfo *)item);
    ServantOperationListViewItem__ModifyChoiceItem(item, v33);
    ServantOperationListViewItem__ModifyPushItem(item, v34);
  }
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_27:
    sub_B5D69C(this, item);
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  unsigned __int64 v16; // x23
  bool v17; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v19; // x26
  UserCommandCodeEntity_o **v20; // x27
  ListViewItem_o *v21; // x28
  __int64 v22; // x10
  __int64 v23; // x8
  __int128 v24; // q0
  UserCommandCodeEntity_o *v25; // x8
  __int128 v26; // q0
  ServantOperationListViewManager_o *v27; // x22
  __int64 v28; // x8
  __int128 v29; // q0
  int64_t v30; // x0
  const MethodInfo *v31; // x4
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_42EC72A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
      (_DWORD)userCommandCodeEntities,
      isIconSizeChange,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11, v12);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v13, v14, v15);
    byte_42EC72A = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v16 = 0LL;
    v17 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v19 = 0LL;
      v20 = &userCommandCodeEntities->m_Items[v16];
      while ( 1 )
      {
        if ( (__int64)v19 >= itemList->fields._size )
          goto LABEL_28;
        if ( v19 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v21 = itemList->fields._items->m_Items[v19];
        if ( !v21 )
          goto LABEL_30;
        v22 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (ServantOperationListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v23 = *(_QWORD *)&v21[1].fields.sortIndex;
        if ( v23 )
        {
          v24 = *(_OWORD *)(v23 + 32);
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
          *(_OWORD *)&v36.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                        &v35,
                                                        0LL);
          if ( v16 >= userCommandCodeEntities->max_length )
          {
            v32 = sub_B5D6C8(this);
            sub_B5D668(v32, 0LL);
          }
          v25 = *v20;
          if ( !*v20 )
            goto LABEL_30;
          v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
          v27 = this;
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v34.fields.fakeValue = v26;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                        &v34,
                                                        0LL);
          if ( v27 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v19;
        if ( !itemList )
          goto LABEL_30;
      }
      v28 = *(_QWORD *)&v21[1].fields.sortIndex;
      if ( !v28 )
LABEL_30:
        sub_B5D69C(this, userCommandCodeEntities);
      v29 = *(_OWORD *)(v28 + 32);
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
      *(_OWORD *)&v36.fields.fakeValue = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v36;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v33, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(v6, v30, 1, v17, v31);
LABEL_28:
      ++v16;
    }
    while ( (__int64)v16 < (int)userCommandCodeEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedServants(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  unsigned __int64 v16; // x24
  bool v17; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v19; // x27
  UserServantEntity_o **v20; // x28
  ServantOperationListViewItem_o *v21; // x22
  __int64 v22; // x10
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v24; // q0
  UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  ServantOperationListViewManager_o *v27; // x23
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  int64_t v30; // x0
  const MethodInfo *v31; // x5
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_42EC729 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
      (_DWORD)userServantEntities,
      isIconSizeChange,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11, v12);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v13, v14, v15);
    byte_42EC729 = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v16 = 0LL;
    v17 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v19 = 0LL;
      v20 = &userServantEntities->m_Items[v16];
      while ( 1 )
      {
        if ( (__int64)v19 >= itemList->fields._size )
          goto LABEL_28;
        if ( v19 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v21 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v19];
        if ( !v21 )
          goto LABEL_30;
        v22 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (ServantOperationListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        UserServantEntity_k__BackingField = v21->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v24 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v36.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                        &v35,
                                                        0LL);
          if ( v16 >= userServantEntities->max_length )
          {
            v32 = sub_B5D6C8(this);
            sub_B5D668(v32, 0LL);
          }
          v25 = *v20;
          if ( !*v20 )
            goto LABEL_30;
          v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
          v27 = this;
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v34.fields.fakeValue = v26;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                        &v34,
                                                        0LL);
          if ( v27 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v19;
        if ( !itemList )
          goto LABEL_30;
      }
      v28 = v21->fields._UserServantEntity_k__BackingField;
      if ( !v28 )
LABEL_30:
        sub_B5D69C(this, userServantEntities);
      v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v36.fields.fakeValue = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v36;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v33, 0LL);
      ServantOperationListViewManager__ModifyLockItem_32526676(v6, v21, v30, 1, v17, v31);
LABEL_28:
      ++v16;
    }
    while ( (__int64)v16 < (int)userServantEntities->max_length );
  }
}


void __fastcall ServantOperationListViewManager__ModifyPushedServant(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ServantOperationListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t SelfUserGame; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int64_t v17; // x20
  unsigned __int64 v18; // x21
  ListViewItem_o *v19; // x24
  __int64 v20; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v23; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]

  v4 = this;
  if ( (byte_42EC72B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v11, v12, v13);
    byte_42EC72B = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v4->fields.kind, v2) )
  {
    SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    itemList = v4->fields.itemList;
    if ( !itemList )
LABEL_19:
      sub_B5D69C(SelfUserGame, v15);
    v17 = SelfUserGame;
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( v19 )
      {
        v20 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantOperationListViewItem_TypeInfo )
        {
          klass = v19[1].klass;
          if ( klass )
          {
            if ( !v17 )
              goto LABEL_19;
            byval_arg = klass->_1.byval_arg;
            v23 = *(_QWORD *)(v17 + 120);
            *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v24 = v25;
            SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v24, 0LL);
            v19[1].fields.isTerminationSpace = v23 == SelfUserGame;
          }
          itemList = v4->fields.itemList;
          ++v18;
          if ( itemList )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyServants(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        int64_t selectedId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  const MethodInfo *v30; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v32; // x23
  ListViewItem_o *v33; // x8
  __int64 v34; // x11
  ListViewItem_o *v35; // x21
  __int128 v36; // q0
  __int64 v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_42EC725 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, kind, selectedId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    byte_42EC725 = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B5D69C(Instance, v30);
    v32 = 0LL;
    while ( (__int64)v32 < itemList->fields._size )
    {
      if ( v32 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v33 = itemList->fields._items->m_Items[v32];
      if ( v33
        && (v34 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
      {
        if ( (ServantOperationListViewItem_c *)v33->klass->_2.typeHierarchy[v34 - 1] == ServantOperationListViewItem_TypeInfo )
          v35 = itemList->fields._items->m_Items[v32];
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      if ( entity )
      {
        if ( !v35 )
          goto LABEL_35;
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v35, v30);
        if ( !entity )
          goto LABEL_35;
        v36 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v37 = Instance;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v47 = v48;
        if ( v37 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL) )
        {
          v44 = (System_Int32_array **)entity;
          v35[1].klass = (ListViewItem_c *)entity;
          sub_B5D560((BattleServantConfConponent_o *)&v35[1], v44, v38, v39, v40, v41, v42, v43);
        }
      }
      else if ( !v35 )
      {
        goto LABEL_35;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v35, v30);
      if ( !SelfUserGame )
        goto LABEL_35;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v35,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v45);
      viewObject = (UnityEngine_Object_o *)v35->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v35->fields.viewObject;
        if ( !Instance )
          goto LABEL_35;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v35,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v32;
      if ( !itemList )
        goto LABEL_35;
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickChoiceModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2

  if ( (byte_42EC73C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42EC73C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B5D69C(v6, v7);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v7);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v9);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v10);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v12; // w9

  if ( (byte_42EC741 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC741 = 1;
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
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind,
          (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0)
      && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_B5D69C(v8, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int v21; // w9
  ListViewManager_o *v22; // x3
  int32_t v23; // w1

  if ( (byte_42EC742 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC742 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v17 )
      sub_B5D69C(v19, v20);
    if ( kind == 1 )
      v21 = 5;
    else
      v21 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v22 = 0LL;
    else
      v22 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v23 = 6;
    else
      v23 = v21;
    CommonUI__OpenServantFilterSelectMenu_18209116(v17, v23, sort, v22, v18, -1, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2

  if ( (byte_42EC73B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    byte_42EC73B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B5D69C(v6, v7);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v7);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v9);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v10);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x19
  __int64 SelfUserGame; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  ServantOperationListViewItem_o **v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  const MethodInfo *v85; // x2
  int64_t v86; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v88; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x21
  __int64 v91; // x22
  __int64 v92; // x23
  ServantEntity_o *v93; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v95; // w22
  ServantOperationListViewItem_o *v96; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x9
  int32_t v98; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v100; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v102; // x21
  System_String_o *v103; // x22
  System_Object_array *v104; // x24
  int32_t Rarity; // w26
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x26
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x26
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x25
  int32_t v127; // w0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x25
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x25
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x20
  System_String_o *v149; // x20
  System_String_o *v150; // x22
  System_String_o *v151; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v153; // x25
  __int64 v154; // x0
  __int64 v155; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  if ( (byte_42EC73D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&object___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Rarity_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&SoundManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v51, v52, v53);
    sub_B5D5C4(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v66, v67, v68);
    byte_42EC73D = 1;
  }
  v69 = sub_B5D694(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v69,
    0LL);
  if ( !v69 )
    goto LABEL_68;
  *(_QWORD *)(v69 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v69 + 16), (System_Int32_array **)this, v72, v73, v74, v75, v76, v77);
  *(_QWORD *)(v69 + 24) = selectItem;
  v78 = (ServantOperationListViewItem_o **)(v69 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v69 + 24),
    (System_Int32_array **)selectItem,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v86 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v86 )
  {
LABEL_15:
    ServantOperationListViewManager__PushRequest(this, *v78, v85);
    return;
  }
  if ( !*v78 )
    goto LABEL_68;
  UserServantEntity_k__BackingField = (*v78)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_68;
  v88 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v88;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v156 = v157;
  if ( v86 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v156, 0LL) )
    goto LABEL_15;
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_68;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             v86,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_68;
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v92 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v158.fields.currentCryptoKey = v92;
  *(_QWORD *)&v158.fields.fakeValue = v91;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v158, 0LL);
  if ( !v90 )
    goto LABEL_68;
  v93 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v90,
                             SelfUserGame,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_68;
  SelfUserGame = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v95,
                   SelfUserGame,
                   0LL);
  v96 = *v78;
  if ( !*v78 )
    goto LABEL_68;
  v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v96->fields._UserServantEntity_k__BackingField;
  if ( !v97 )
    goto LABEL_68;
  v98 = SelfUserGame;
  SvtId_k__BackingField = v96->fields._SvtId_k__BackingField;
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId_k__BackingField,
                                 v100,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v104 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v104 )
LABEL_68:
    sub_B5D69C(SelfUserGame, v71);
  v112 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( !v104->max_length )
    goto LABEL_69;
  v104->m_Items[0] = (Il2CppObject *)v112;
  sub_B5D560((BattleServantConfConponent_o *)v104->m_Items, v112, v106, v107, v108, v109, v110, v111);
  if ( !v93 )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName(v93, 0LL);
  v119 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v104->max_length <= 1 )
    goto LABEL_69;
  v104->m_Items[1] = (Il2CppObject *)v119;
  sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[1], v119, v113, v114, v115, v116, v117, v118);
  SelfUserGame = (__int64)ServantEntity__getName(v93, v98, -1, 0LL);
  v126 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v104->max_length <= 2 )
    goto LABEL_69;
  v104->m_Items[2] = (Il2CppObject *)v126;
  sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[2], v126, v120, v121, v122, v123, v124, v125);
  if ( !*v78 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v78)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_68;
  v127 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)Rarity__getRarityType(v127, 0LL);
  v134 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v104->max_length <= 3 )
    goto LABEL_69;
  v104->m_Items[3] = (Il2CppObject *)v134;
  sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[3], v134, v128, v129, v130, v131, v132, v133);
  if ( !*v78 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v78)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v141 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v104->max_length <= 4 )
    goto LABEL_69;
  v104->m_Items[4] = (Il2CppObject *)v141;
  sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[4], v141, v135, v136, v137, v138, v139, v140);
  if ( !*v78 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v78)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)SelfUserGame, ServantLimitCountSealAfter, -1, 0LL);
  v148 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B5D684(SelfUserGame, v104->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_70:
      v155 = sub_B5D6BC(SelfUserGame);
      sub_B5D668(v155, 0LL);
    }
  }
  if ( v104->max_length <= 5 )
  {
LABEL_69:
    v154 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v154, 0LL);
  }
  v104->m_Items[5] = (Il2CppObject *)v148;
  sub_B5D560((BattleServantConfConponent_o *)&v104->m_Items[5], v148, v142, v143, v144, v145, v146, v147);
  v149 = System_String__Format_44656512(v103, v104, 0LL);
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v153 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v153,
    (Il2CppObject *)v69,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_68;
  CommonUI__OpenConfirmDialog_18201384(
    Instance,
    v102,
    v149,
    v150,
    v151,
    v153,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v15; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_42EC749 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC749 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = 1;
LABEL_12:
    this->fields.scaleType = v15;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (ScaleKindSpriteName = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                                  ScaleKindSpriteName,
                                                  this->fields.scaleType,
                                                  0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v18);
  ServantOperationListViewManager__SetMode_32530004(this, 2, v19);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x4
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *v18; // x8
  System_String_o *v19; // x22
  struct ServantOperationManager_o *v20; // x8
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  struct ServantOperationManager_o *v26; // x8
  struct ServantOperationManager_o *v27; // x8
  UILabel_o *v28; // x21
  struct ServantOperationManager_o *v29; // x8
  System_String_o *v30; // x22
  struct ServantOperationManager_o *v31; // x8
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42EC738 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v12, v13, v14);
    byte_42EC738 = 1;
  }
  if ( v5->fields.isInConfirm )
  {
    ServantOperationListViewManager__CallOnSelectServant(v5, selectItem, method);
    return;
  }
  if ( !selectItem )
    goto LABEL_37;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)selectItem, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    parentManager = v5->fields.parentManager;
    --v5->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = v5->fields.selectDoneLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
      v18 = v5->fields.parentManager;
      if ( v18 )
      {
        v19 = (System_String_o *)this;
        TotalSum_k__BackingField = v18->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v20 = v5->fields.parentManager;
        if ( v20 )
        {
          v21 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v20->fields._SelectMax_k__BackingField;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_44573324(v19, v21, v22, 0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 1, selectItem, v23);
            this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                v24);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
              ServantOperationListViewManager__RefrashListDisp(v5, v25);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  if ( ServantOperationListViewManager__IsSelectEnable(v5, selectItem, 0, 0, v15) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v26 = v5->fields.parentManager;
    if ( v26 )
    {
      selectItem->fields.selectNum = v26->fields._TotalSum_k__BackingField;
      v27 = v5->fields.parentManager;
      ++v5->fields.selectSum;
      if ( v27 )
      {
        ++v27->fields._TotalSum_k__BackingField;
        v28 = v5->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12617/*"SUM_INFO"*/,
                                                      0LL);
        v29 = v5->fields.parentManager;
        if ( v29 )
        {
          v30 = (System_String_o *)this;
          TotalSum_k__BackingField = v29->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
          v31 = v5->fields.parentManager;
          if ( v31 )
          {
            v32 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v31->fields._SelectMax_k__BackingField;
            v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
            this = (ServantOperationListViewManager_o *)System_String__Format_44573324(v30, v32, v33, 0LL);
            if ( v28 )
            {
              UILabel__set_text(v28, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 0, selectItem, v34);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(this, selectItem);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSortAscendingOrder(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC745 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC745 = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int v21; // w8
  int32_t v22; // w1

  if ( (byte_42EC73F & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC73F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v17 )
      sub_B5D69C(v19, v20);
    if ( kind == 1 )
      v21 = 2;
    else
      v21 = 1;
    if ( kind == 2 )
      v22 = 6;
    else
      v22 = v21;
    CommonUI__OpenServantSortSelectMenu(v17, v22, sort, 1, v18, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x2
  System_Action_bool__o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC74C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndClickTabChoice__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC74C = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v15 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v15,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v15, v16);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v14);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabLock(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x2
  System_Action_bool__o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC74B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndClickTabLock__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC74B = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v15 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v15,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v15, v16);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v14);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabPush(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Action_bool__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42EC74D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndClickTabPush__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC74D = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v14 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabPush__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v14, v15);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x1
  System_Action_bool__o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC74A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndClickTabStatus__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC74A = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v14);
    v15 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v15,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v15, v16);
  }
}


void __fastcall ServantOperationListViewManager__OnMoveEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0

  if ( (byte_42EC730 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC730 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( v7 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
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
          sub_B5D69C(v10, v9);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42EC73E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42EC73E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !UserServantEntity_k__BackingField )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_fields = &UserServantEntity_k__BackingField->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.imageLimitCount,
          0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *parentManager; // x0
  const MethodInfo *v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21

  if ( (byte_42EC722 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v5, v6, v7);
    byte_42EC722 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_12;
  ServantOperationManager__RefrashListDisp((ServantOperationManager_o *)parentManager, method);
  parentManager = ServantOperationListViewManager__get_ObjectList(this, v9);
  if ( !parentManager )
    goto LABEL_12;
  v10 = *((_DWORD *)parentManager + 6);
  v11 = parentManager;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v10 <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      parentManager = *(void **)(*((_QWORD *)v11 + 2) + 8LL * (int)v12 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_12:
    sub_B5D69C(parentManager, method);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantOperationListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v12; // x21
  ListViewItem_o *v13; // x20
  __int64 v14; // x10
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_42EC737 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v8, v9, v10);
    byte_42EC737 = 1;
  }
  itemList = v4->fields.itemList;
  v4->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_12:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect(v13, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, (ServantOperationListViewItem_o *)v13, v15);
        itemList = v4->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
  }
  v4->fields.selectSum = 0;
  ServantOperationListViewManager__RefrashListDisp(v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__RequestListObject(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EC72F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantOperationListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC72F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantOperationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v31, v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *v15; // x8
  System_String_o *v16; // x22
  struct ServantOperationManager_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42EC72E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v9, v10, v11);
    byte_42EC72E = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_IsCanNotSelect(item, v12);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      parentManager = v5->fields.parentManager;
      --v5->fields.selectSum;
      if ( parentManager )
      {
        --parentManager->fields._TotalSum_k__BackingField;
        selectDoneLabel = v5->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12617/*"SUM_INFO"*/,
                                                      0LL);
        v15 = v5->fields.parentManager;
        if ( v15 )
        {
          v16 = (System_String_o *)this;
          TotalSum_k__BackingField = v15->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
          v17 = v5->fields.parentManager;
          if ( v17 )
          {
            v18 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v17->fields._SelectMax_k__BackingField;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
            this = (ServantOperationListViewManager_o *)System_String__Format_44573324(v16, v18, v19, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 1, item, v20);
              this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
              if ( this )
              {
                ServantOperationManager__numberAdjustment(
                  (ServantOperationManager_o *)this,
                  item->fields.selectNum,
                  v21);
                ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
                return 1;
              }
            }
          }
        }
      }
LABEL_17:
      sub_B5D69C(this, item);
    }
  }
  return 0;
}


void __fastcall ServantOperationListViewManager__SetDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v17; // w20
  int32_t v18; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v20; // x0
  __int64 v21; // x1
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v23; // x21
  struct ServantOperationManager_o *v24; // x8
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC755 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v11, v12, v13);
    byte_42EC755 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v17 = this->fields.dragStartIndex;
    else
      v17 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v18 = this->fields.dragEndIndex;
    else
      v18 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v17++, v14);
    while ( v17 <= v18 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_21;
  v23 = v20;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v20 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  v24 = this->fields.parentManager;
  if ( !v24
    || (v25 = (Il2CppObject *)v20,
        SelectMax_k__BackingField = v24->fields._SelectMax_k__BackingField,
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField),
        v20 = System_String__Format_44573324(v23, v25, v26, 0LL),
        !selectDoneLabel) )
  {
LABEL_21:
    sub_B5D69C(v20, v21);
  }
  UILabel__set_text(selectDoneLabel, v20, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v27);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_32A3DA0;
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
  ServantOperationListViewManager_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v17; // x21
  __int64 v18; // x9
  UnityEngine_Object_o *viewObject; // x19
  __int64 v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1

  v6 = this;
  if ( (byte_42EC753 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, isDragSelect, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v10, v11, v12);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewObject_TypeInfo, v13, v14, v15);
    byte_42EC753 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_17;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = itemSortList->fields._items->m_Items[index];
  if ( !v17 )
  {
LABEL_19:
    ServantOperationListViewManager__SetIsItemDragSelect(
      v6,
      (ServantOperationListViewItem_o *)v17,
      isDragSelect,
      method);
    sub_B5D69C(v21, v22);
  }
  v18 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (ServantOperationListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B5D990(v17);
    goto LABEL_19;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(v6, (ServantOperationListViewItem_o *)v17, isDragSelect, method);
  viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)v17->fields.viewObject;
    if ( this )
    {
      v20 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (ServantOperationListViewObject_c *)this->klass->_2.typeHierarchy[v20 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(
          (ServantOperationListViewObject_o *)this,
          *(const MethodInfo **)&index);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&index);
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
  int32_t v10; // w22
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w25
  int32_t v14; // w26
  const MethodInfo *v15; // x3

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v10 = -1;
    v11 = -1;
  }
  else
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = this->fields.dragStartIndex;
    else
      v10 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v11 = this->fields.dragEndIndex;
    else
      v11 = this->fields.dragStartIndex;
  }
  this->fields.dragStartIndex = startIndex;
  this->fields.dragEndIndex = endIndex;
  if ( (startIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_26;
  }
  else
  {
    if ( startIndex <= endIndex )
      v12 = startIndex;
    else
      v12 = endIndex;
    if ( startIndex <= endIndex )
      v13 = endIndex;
    else
      v13 = startIndex;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_26;
  }
  if ( v10 <= v11 )
  {
    v14 = v10;
    do
    {
      if ( v14 > v13 || (v12 & 0x80000000) != 0 || v14 < v12 )
        ServantOperationListViewManager__SetDragSelect(this, v14, 0, method);
      ++v14;
    }
    while ( v14 <= v11 );
  }
LABEL_26:
  if ( (startIndex & 0x80000000) == 0 )
  {
    ServantOperationListViewManager__SetItemDragSelect(
      this,
      startIndex,
      endIndex,
      v10,
      v11,
      1,
      startIndex > endIndex,
      v4);
    if ( (v12 & 0x80000000) == 0 && this->fields.isDragSelect )
      ServantOperationListViewManager__SetItemDragSelectNum(this, v12, v13, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetDragStart(
        ServantOperationListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  signed __int64 size; // x21
  unsigned __int64 v18; // x22
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  __int64 v21; // x11
  UnityEngine_Object_o *scrollView; // x20

  v6 = this;
  if ( (byte_42EC754 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, startIndex, isDragSelect, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v13, v14, v15);
    byte_42EC754 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_32A3DA0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemSortList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = itemSortList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
        break;
      if ( (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantOperationListViewItem_TypeInfo )
        break;
      v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v21 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v18;
      v19[2].fields.loopIndex = -1;
      if ( (__int64)v18 >= size )
        goto LABEL_16;
      itemSortList = v6->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&startIndex);
  }
LABEL_16:
  ServantOperationListViewManager__SetDragSelectItem(v6, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)v6->fields.scrollView;
    if ( !this )
      goto LABEL_22;
    UIScrollView__Press((UIScrollView_o *)this, 0, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__SetFilterButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EC744 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC744 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  const MethodInfo *v6; // x3
  struct ServantOperationManager_o *parentManager; // x9
  int32_t TotalSum_k__BackingField; // w8
  struct ServantOperationManager_o *v9; // x8
  struct ServantOperationManager_o *v10; // x8
  const MethodInfo *v11; // x2

  if ( !item )
    goto LABEL_14;
  if ( item->fields._DragSelectNum_k__BackingField >= 1 )
  {
    isDragSelect = this->fields.isDragSelect;
    v5 = this;
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    if ( isDragSelect )
    {
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        parentManager = v5->fields.parentManager;
        if ( !parentManager )
          goto LABEL_14;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        if ( TotalSum_k__BackingField < parentManager->fields._SelectMax_k__BackingField )
        {
          item->fields.selectNum = TotalSum_k__BackingField;
          v9 = v5->fields.parentManager;
          ++v5->fields.selectSum;
          if ( v9 )
          {
            ++v9->fields._TotalSum_k__BackingField;
            ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 0, item, v6);
            return;
          }
LABEL_14:
          sub_B5D69C(this, item);
        }
      }
    }
    else if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v5->fields.parentManager;
      --v5->fields.selectSum;
      if ( !v10 )
        goto LABEL_14;
      --v10->fields._TotalSum_k__BackingField;
      ServantOperationListViewManager__ChangeSellEnableRestCount(v5, 1, item, v6);
      this = (ServantOperationListViewManager_o *)v5->fields.parentManager;
      if ( !this )
        goto LABEL_14;
      ServantOperationManager__numberAdjustment((ServantOperationManager_o *)this, item->fields.selectNum, v11);
      ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
    }
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct ServantOperationManager_o *parentManager; // x8
  int v17; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v19; // x22
  __int64 v20; // x9
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v22; // x8
  __int64 v23; // x11
  __int64 v24; // x11
  ServantOperationListViewObject_o *v25; // x0
  ServantOperationListViewObject_o *v26; // x0
  const MethodInfo *v27; // x1

  v5 = start;
  v6 = this;
  if ( (byte_42EC752 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, start, end, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v10, v11, v12);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewObject_TypeInfo, v13, v14, v15);
    byte_42EC752 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_28:
    sub_B5D69C(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v17 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_28;
      if ( itemSortList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = itemSortList->fields._items->m_Items[v5];
      if ( !v19 )
        goto LABEL_28;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v20 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( v19[2].fields.loopIndex >= 1 )
      {
        v19[2].fields.loopIndex = v17;
        viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
        ++v17;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v22 = v19->fields.viewObject;
          if ( !v22 )
            goto LABEL_28;
          v23 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23
            || (ServantOperationListViewObject_c *)v22->klass->_2.typeHierarchy[v23 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_28;
          }
          v24 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
          {
            if ( (ServantOperationListViewObject_c *)v22->klass->_2.typeHierarchy[v24 - 1] == ServantOperationListViewObject_TypeInfo )
              v25 = (ServantOperationListViewObject_o *)v19->fields.viewObject;
            else
              v25 = 0LL;
          }
          else
          {
            v25 = 0LL;
          }
          ServantOperationListViewObject__SetupDisp(v25, *(const MethodInfo **)&start);
        }
      }
      if ( ++v5 > end )
        return;
    }
    sub_B5D990(v19);
    ServantOperationListViewObject__SetupDisp(v26, v27);
  }
}


void __fastcall ServantOperationListViewManager__SetListViewSort(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct ListViewSort_o *SortInfo; // x0
  struct ListViewSort_o **p_sort; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ListViewSort_o *v13; // x0
  __int64 v14; // x1
  int v15; // w9

  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  this->fields.sort = SortInfo;
  p_sort = &this->fields.sort;
  sub_B5D560((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)SortInfo, v7, v8, v9, v10, v11, v12);
  if ( !*p_sort )
    goto LABEL_6;
  v15 = kind == 1;
  if ( kind == 2 )
    v15 = 3;
  (*p_sort)->fields.listViewKind = v15;
  v13 = *p_sort;
  if ( !*p_sort )
LABEL_6:
    sub_B5D69C(v13, v14);
  ListViewSort__Load(v13, 0LL);
}


void __fastcall ServantOperationListViewManager__SetMode(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        System_Action_ServantOperationListViewItem__o *onSelectServant,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelectServant = onSelectServant;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelectServant,
    (System_Int32_array **)onSelectServant,
    (System_String_array **)onSelectServant,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_32530004(this, mode, v10);
}


void __fastcall ServantOperationListViewManager__SetMode_32530004(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t ObjectSum; // w0
  int32_t v13; // w8
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v18; // x22
  char v19; // w21
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ServantOperationListViewItem_o *v22; // x1
  int v23; // w8
  int32_t v24; // w1

  if ( (byte_42EC72D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, initMode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC72D = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v13 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v13 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_B5D69C(v14, v15);
    v18 = 0LL;
    v19 = 0;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v20 = itemList->fields._items->m_Items[v18];
      if ( v20
        && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
          v22 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v18];
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      v14 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v22, v16);
      itemList = this->fields.itemList;
      v19 |= v14;
      ++v18;
      if ( !itemList )
        goto LABEL_16;
    }
    if ( (v19 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v15);
    if ( initMode == 2 )
      v23 = 3;
    else
      v23 = 0;
    if ( initMode == 1 )
      v24 = 2;
    else
      v24 = v23;
    ServantOperationListViewManager__RequestListObject(this, v24, v16);
  }
}


void __fastcall ServantOperationListViewManager__SetObjectItem(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_42EC72C & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &ServantOperationListViewObject_TypeInfo,
                                                  (_DWORD)obj,
                                                  (_DWORD)item,
                                                  method);
    byte_42EC72C = 1;
  }
  if ( !obj
    || (v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      (System_String_array **)method,
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
    sub_B5D69C(sort, *(_QWORD *)&scaleKind);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  signed int max_length; // w8
  __int64 v26; // x22
  UserServantEntity_o *v27; // x23
  __int128 v28; // q0
  System_Int64_array *v29; // x24
  System_Int64_array *v30; // x25
  int64_t favoriteUserSvtId; // x20
  DataManager_o *v32; // x27
  ServantOperationListViewItem_o *v33; // x26
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x3
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  System_Int64_array *equipIdList; // [xsp+50h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42EC71D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserDeckMaster___,
      (_DWORD)userServantEntities,
      (_DWORD)userGameEntity,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EC71D = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_22;
    UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v26 >= max_length )
        {
          v37 = sub_B5D6C8(Instance);
          sub_B5D668(v37, 0LL);
        }
        v27 = userServantEntities->m_Items[v26];
        if ( !v27 )
          break;
        v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
        v30 = equipIdList;
        v29 = svtIdList;
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v39.fields.fakeValue = v28;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v38 = v39;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v38, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v32 = Instance;
        v33 = (ServantOperationListViewItem_o *)sub_B5D694(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v33, v26, v27, v29, v30, v32 == (DataManager_o *)favoriteUserSvtId, v34);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v33, v35);
        max_length = userServantEntities->max_length;
        if ( (int)++v26 >= max_length )
          return v26;
      }
LABEL_22:
      sub_B5D69C(Instance, v23);
    }
  }
  LODWORD(v26) = 0;
  return v26;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_32521088(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v24; // x22
  __int64 v25; // x21
  UserCommandCodeEntity_o *v26; // x23
  __int128 v27; // q0
  bool v28; // w25
  ServantOperationListViewItem_o *v29; // x24
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x3
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]

  if ( (byte_42EC71E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantCommandCodeMaster___,
      (_DWORD)userCommandCodeEntities,
      (_DWORD)userGameEntity,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Contains__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EC71E = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                                  (UserServantCommandCodeMaster_o *)Instance,
                                  0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v24 = (System_Collections_Generic_List_long__o *)Instance;
      v25 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v25 >= max_length )
        {
          v33 = sub_B5D6C8(Instance);
          sub_B5D668(v33, 0LL);
        }
        v26 = userCommandCodeEntities->m_Items[v25];
        if ( !v26 )
          break;
        v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v34, 0LL);
        if ( !v24 )
          break;
        v28 = System_Collections_Generic_List_long___Contains(
                v24,
                (int64_t)Instance,
                (const MethodInfo_3047BDC *)Method_System_Collections_Generic_List_long__Contains__);
        v29 = (ServantOperationListViewItem_o *)sub_B5D694(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_32506232(v29, v25, v26, v28, v30);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v29, v31);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v25 >= max_length )
          return v25;
      }
LABEL_19:
      sub_B5D69C(Instance, v22);
    }
  }
  LODWORD(v25) = 0;
  return v25;
}


void __fastcall ServantOperationListViewManager__SetSortButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  System_String_o *v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  struct ServantOperationManager_o *parentManager; // x20

  if ( (byte_42EC748 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC748 = 1;
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
      goto LABEL_39;
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_39;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_39;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
        v31 = this->fields.sort;
        if ( v31 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v31->fields.isAscendingOrder;
            v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
            v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_31:
            if ( isAscendingOrder )
              v37 = v33;
            else
              v37 = v34;
            UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
            goto LABEL_35;
          }
        }
      }
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
        v36 = this->fields.sort;
        if ( v36 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v36->fields.isAscendingOrder;
            v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
            v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(sort, v24);
  }
LABEL_35:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_39;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_39;
  v24 = (System_String_o *)sort;
  sort = (ListViewSort_o *)parentManager->fields.filter2Label;
  if ( !sort )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)sort, v24, 0LL);
}


void __fastcall ServantOperationListViewManager__SetStatusKind(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UICommonButton_o *statusTabButton; // x1
  UISprite_o *statusTabSprite; // x2
  const MethodInfo *v15; // x5
  const MethodInfo *v16; // x5
  UnityEngine_Object_o *pushTabButton; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v20; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UILabel_o *v22; // x20
  ServantOperationListViewManager_o *v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x9
  ServantOperationListViewManager_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_42EC71F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&ShopRootComponent_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11, v12);
    byte_42EC71F = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  statusTabSprite = this->fields.statusTabSprite;
  this->fields.modeKind = modeKind;
  ServantOperationListViewManager__SetTabButton(this, statusTabButton, statusTabSprite, modeKind, 0, v4);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.lockTabButton,
    this->fields.lockTabSprite,
    this->fields.modeKind,
    1,
    v15);
  ServantOperationListViewManager__SetTabButton(
    this,
    this->fields.choiceTabButton,
    this->fields.choiceTabSprite,
    this->fields.modeKind,
    2,
    v16);
  pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushTabSprite, 0LL, 0LL) )
      ServantOperationListViewManager__SetTabButton(
        this,
        this->fields.pushTabButton,
        this->fields.pushTabSprite,
        this->fields.modeKind,
        3,
        v20);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0LL),
        v22 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v23,
                                                   this->fields.modeKind,
                                                   v24),
        !v22)
    || (UILabel__set_text(v22, (System_String_o *)statusLabel, 0LL),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].klass) == 0LL )
  {
    sub_B5D69C(statusLabel, v18);
  }
  v25 = *(&ShopRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&statusLabel->klass->_2.bitflags2 + 1) >= (unsigned int)v25
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[v25 - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    sub_B5D990(statusLabel);
    ServantOperationListViewManager__SetFilterButtonImage(v26, v27);
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
    sub_B5D69C(this, tabButton);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v28; // x1
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-28h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42EC74F & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)onRequestEnd, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ServantOperationListViewManager_EndStatusSync__, v19, v20, v21);
    byte_42EC74F = 1;
  }
  changeIds = 0LL;
  revokeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
    (System_Int32_array **)onRequestEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v22, &changeIds, &revokeIds, v23) )
  {
    kind = this->fields.kind;
    v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0LL);
    if ( kind == 2 )
    {
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                              v26,
                                                                              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          changeIds,
          revokeIds,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v28);
    }
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v26,
                                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_17;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_WarBoardWallAttackRequest,
      changeIds,
      revokeIds,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0LL);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v24);
  }
}


void __fastcall ServantOperationListViewManager__SumItems(
        ServantOperationListViewManager_o *this,
        int32_t *qp,
        int32_t *mana,
        int32_t *rarePri,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v16; // x24
  ListViewItem_o *v17; // x23
  __int64 v18; // x10
  UserServantEntity_o *klass; // x0
  int32_t v20; // w26
  int32_t v21; // w26
  int32_t v22; // w23
  int32_t v23; // w26
  int32_t v24; // w26

  v8 = this;
  if ( (byte_42EC723 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)qp, (_DWORD)mana, rarePri);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10, v11);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v12, v13, v14);
    byte_42EC723 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_B5D69C(this, qp);
  v16 = 0LL;
  while ( (__int64)v16 < itemList->fields._size )
  {
    if ( v16 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = itemList->fields._items->m_Items[v16];
    if ( !v17 )
      goto LABEL_22;
    v18 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (ServantOperationListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_22;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v17, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      klass = (UserServantEntity_o *)v17[1].klass;
      if ( klass )
      {
        v20 = *qp;
        *qp = UserServantEntity__getSellQp(klass, 0LL) + v20;
        this = (ServantOperationListViewManager_o *)v17[1].klass;
        if ( !this )
          goto LABEL_22;
        v21 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)this, 0LL) + v21;
        this = (ServantOperationListViewManager_o *)v17[1].klass;
        if ( !this )
          goto LABEL_22;
        v22 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserServantEntity__getSellRarePri((UserServantEntity_o *)this, 0LL);
LABEL_20:
        *rarePri = (_DWORD)this + v22;
        goto LABEL_21;
      }
      this = *(ServantOperationListViewManager_o **)&v17[1].fields.sortIndex;
      if ( this )
      {
        v23 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL) + v23;
        this = *(ServantOperationListViewManager_o **)&v17[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v24 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)this, 0LL) + v24;
        this = *(ServantOperationListViewManager_o **)&v17[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v22 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserCommandCodeEntity__GetSellRarePri(
                                                      (UserCommandCodeEntity_o *)this,
                                                      0LL);
        goto LABEL_20;
      }
    }
LABEL_21:
    itemList = v8->fields.itemList;
    ++v16;
    if ( !itemList )
      goto LABEL_22;
  }
}


bool __fastcall ServantOperationListViewManager__TryGetItemCollectId(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t *id,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v7; // q1
  __int128 *v8; // x0
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v10; // q1
  bool result; // w0
  __int128 v12[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v13[2]; // [xsp+20h] [xbp-60h] BYREF
  __int128 v14; // [xsp+40h] [xbp-40h]
  __int128 v15; // [xsp+50h] [xbp-30h]

  if ( (byte_42EC74E & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  (_DWORD)item,
                                                  (_DWORD)id,
                                                  method);
    byte_42EC74E = 1;
  }
  if ( !item )
    sub_B5D69C(this, item);
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField )
  {
    v7 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
    v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v15 = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v8 = v12;
    v12[0] = v14;
    v12[1] = v15;
  }
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
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
  __int64 v3; // x3
  ServantOperationListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  __int64 v10; // x21
  int size; // w8
  unsigned int v12; // w23
  __int64 v13; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x22
  __int64 v15; // x8

  v5 = this;
  if ( (byte_42EC739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, selectNum, (_DWORD)method, v3);
    this = (ServantOperationListViewManager_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                  v6,
                                                  v7,
                                                  v8);
    byte_42EC739 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&selectNum);
  v10 = 4LL;
  while ( 1 )
  {
    size = itemList->fields._size;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= size )
      break;
    if ( size <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v13 = *((_QWORD *)&itemList->fields._items->obj.klass + v10);
    if ( !v13 )
      goto LABEL_16;
    if ( *(_DWORD *)(v13 + 16) > selectNum )
    {
      v14 = v5->fields.itemList;
      if ( !v14 )
        goto LABEL_16;
      if ( v14->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v15 = *((_QWORD *)&v14->fields._items->obj.klass + v10);
      if ( !v15 )
        goto LABEL_16;
      --*(_DWORD *)(v15 + 16);
    }
    itemList = v5->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21

  if ( (byte_42EC717 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EC717 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_23;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantOperationListViewObject__GetItem(
                                                              (ServantOperationListViewObject_o *)Component_srcLineSprite,
                                                              v25);
      if ( Component_srcLineSprite )
      {
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v31,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21

  if ( (byte_42EC716 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EC716 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_19;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v23 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D68 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D68 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E5D69 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v9, v10, v11);
    byte_42E5D69 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall ServantOperationListViewManager___c__DisplayClass96_0___OnClickPushModeItem_b__1(
        ServantOperationListViewManager___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}