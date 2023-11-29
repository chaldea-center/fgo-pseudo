void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ListViewSort_o *v20; // x20
  struct ServantOperationListViewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *v28; // x19
  System_String_o *v29; // x0
  System_String_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ListViewSort_o *v35; // x20
  struct ServantOperationListViewManager_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  ListViewSort_o *v48; // x20
  struct ServantOperationListViewManager_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int v56; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD747 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1169, v9);
    sub_B16FFC(&StringLiteral_12664, v10);
    byte_40FD747 = 1;
  }
  v56 = 0;
  ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_12664;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12664;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v12, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 1;
  v14 = System_Int32__ToString((int32_t)&v56, 0LL);
  v15 = System_String__Concat_43743732(SORT_SAVE_KEY, v14, 0LL);
  v20 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v16, v17, v18, v19);
  ListViewSort___ctor_30208480(v20, v15, 3, 0, 0LL);
  v21 = ServantOperationListViewManager_TypeInfo->static_fields;
  v21->servantSortInfo = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->servantSortInfo,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v56 = 2;
  v29 = System_Int32__ToString((int32_t)&v56, 0LL);
  v30 = System_String__Concat_43743732(v28, v29, 0LL);
  v35 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v31, v32, v33, v34);
  ListViewSort___ctor_30208480(v35, v30, 3, 0, 0LL);
  v36 = ServantOperationListViewManager_TypeInfo->static_fields;
  v36->servantEquipSortInfo = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->servantEquipSortInfo,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = System_String__Concat_43743732(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1169,
          0LL);
  v48 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v44, v45, v46, v47);
  ListViewSort___ctor_30208480(v48, v43, 2, 0, 0LL);
  v49 = ServantOperationListViewManager_TypeInfo->static_fields;
  v49->commandCodeSortInfo = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v49->commandCodeSortInfo,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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

  if ( (byte_40FD729 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantOperationListViewItem__Invoke__, item);
    byte_40FD729 = 1;
  }
  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0LL;
    sub_B16F98(
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
      (const MethodInfo_24B7324 *)Method_System_Action_ServantOperationListViewItem__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40FD740 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, result);
    byte_40FD740 = 1;
  }
  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    this->fields.onRequestEnd = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onRequestEnd, result, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FD746 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v5);
    byte_40FD746 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7
    || (v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_10:
    sub_B170D4();
  }
  v7[2].fields.loopIndex = -1;
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
    sub_B170D4();
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
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  struct ListViewSort_o *sort; // x8
  ServantOperationListViewManager_o *v12; // x0
  const MethodInfo *v13; // x2
  ServantOperationListViewManager_o *UserServantEntities; // x22
  const MethodInfo *v15; // x2
  UserCommandCodeEntity_array *UserCommandCodeEntities; // x23
  const MethodInfo *v17; // x3
  UserGameEntity_o *v18; // x2
  const MethodInfo *v19; // x3
  ServantOperationListViewManager_o *v20; // x0
  UILabel_o *emptyMessageLabel; // x21
  const MethodInfo *v22; // x3
  System_String_o *EmptyMessageCode; // x20
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1

  if ( (byte_40FD707 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    byte_40FD707 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  ServantOperationListViewManager__SetListViewSort(this, kind, v8);
  sort = this->fields.sort;
  this->fields.kind = kind;
  this->fields.modeKind = modeKind;
  if ( !sort )
    goto LABEL_9;
  this->fields.scaleType = sort->fields.iconScaleKind;
  ServantOperationListViewManager__SetScaleKind(this, v9, v10);
  *(_QWORD *)&this->fields.sellEnableRestCnt = 0LL;
  *(_QWORD *)&this->fields.dragSelectSum = 0LL;
  *(_QWORD *)&this->fields.dragStartIndex = -1LL;
  this->fields.isDragSelect = 1;
  UserServantEntities = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetUserServantEntities(
                                                               v12,
                                                               kind,
                                                               v13);
  UserCommandCodeEntities = ServantOperationListViewManager__GetUserCommandCodeEntities(UserServantEntities, kind, v15);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  LODWORD(UserServantEntities) = ServantOperationListViewManager__SetSellEnableRestCount(
                                   this,
                                   (UserServantEntity_array *)UserServantEntities,
                                   SelfUserGame,
                                   v17);
  v20 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_31613712(
                                               this,
                                               UserCommandCodeEntities,
                                               v18,
                                               v19);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  EmptyMessageCode = ServantOperationListViewManager__GetEmptyMessageCode(
                       v20,
                       kind,
                       (int)v20 + (int)UserServantEntities > 0,
                       v22);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get(EmptyMessageCode, 0LL);
  if ( !emptyMessageLabel )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(emptyMessageLabel, v24, 0LL);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ServantOperationListViewItem_o *v7; // x20
  __int64 v8; // x9

  if ( (byte_40FD745 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v5);
    byte_40FD745 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_11:
    sub_B170D4();
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v7 )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, method);
    sub_B170D4();
  }
  v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B173C8(v7);
    goto LABEL_11;
  }
  ServantOperationListViewManager__SetIsItemSelect(this, v7, method);
  v7->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0

  if ( (byte_40FD703 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v1);
    byte_40FD703 = 1;
  }
  v2 = ServantOperationListViewManager_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v2 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantEquipSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(servantEquipSortInfo, 0LL);
}


void __fastcall ServantOperationListViewManager__DestroyList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
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
  ServantOperationListViewManager__SetMode_31622628(this, 2, v5);
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
    sub_B170D4();
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v7);
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
    sub_B170D4();
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v7);
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
    sub_B170D4();
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v7);
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
    sub_B170D4();
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x19
  ServantOperationListViewManager___c_c *v14; // x8
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v17; // x21
  struct ServantOperationListViewManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FD732 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v6);
    sub_B16FFC(&ServantOperationListViewManager___c_TypeInfo, v7);
    byte_40FD732 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = ServantOperationListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v14 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      _9__106_0,
      v17,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    v18 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v18->__9__106_0 = _9__106_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, _9__106_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD72F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD72F = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_40FD735 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD735 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = this->fields.itemList;
        ++v8;
        if ( (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != ServantOperationListViewItem_TypeInfo )
          v10 = 0LL;
        if ( v10[1].fields.selectNum == svtId )
          ++v9;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_40FD736 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD736 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = this->fields.itemList;
        ++v8;
        if ( (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                            + 1)
                                                                          - 1] != ServantOperationListViewItem_TypeInfo )
          v10 = 0LL;
        if ( LODWORD(v10[1].fields.sortValue0B) == commandCodeId )
          ++v9;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v9;
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

  if ( (byte_40FD70B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11651, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_3218, v6);
    sub_B16FFC(&StringLiteral_11618, v7);
    sub_B16FFC(&StringLiteral_11842, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FD70B = 1;
  }
  if ( isNotEmpty )
  {
    v10 = &StringLiteral_11842;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v10 = (__int64 *)&StringLiteral_1;
  }
  else
  {
    v10 = off_3D6AA30[kind];
  }
  return (System_String_o *)*v10;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ListViewItem_o *v14; // x21
  __int64 v15; // x10

  if ( (byte_40FD724 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_40FD724 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B170D4();
  v13 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( v14 )
    {
      v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        if ( ListViewItem__get_IsSelect(v14, 0LL)
          && (BYTE4(v14[1].fields.sortValue2) || BYTE6(v14[1].fields.sortValue2)) )
        {
          if ( !v11 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v11;
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ListViewItem_o *v14; // x21
  __int64 v15; // x10
  ServantEntity_o *monitor; // x0

  if ( (byte_40FD725 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_40FD725 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B170D4();
  v13 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( v14 )
    {
      v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        if ( ListViewItem__get_IsSelect(v14, 0LL) )
        {
          monitor = (ServantEntity_o *)v14[1].monitor;
          if ( monitor )
          {
            if ( ServantEntity__get_IsServant(monitor, 0LL)
              && (BYTE3(v14[1].fields.sortValue2B) || BYTE4(v14[1].fields.sortValue2B)) )
            {
              if ( !v11 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v11;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ServantOperationListViewItem_o *v14; // x21
  __int64 v15; // x10
  const MethodInfo *v16; // x1
  int64_t UserCommandCodeId; // x0

  if ( (byte_40FD721 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_40FD721 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B170D4();
  v13 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v13];
    if ( v14 )
    {
      v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v14, 0LL) )
        {
          UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(v14, v16);
          if ( !v11 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v11,
            UserCommandCodeId,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v11;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v8; // x22
  ListViewItem_o *v9; // x21
  __int64 v10; // x10
  const MethodInfo *v11; // x1

  if ( (byte_40FD723 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD723 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B170D4();
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_14;
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantOperationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( ListViewItem__get_IsSelect(v9, 0LL)
      && ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v9, v11) == userCommandCodeId )
    {
      return v9->fields.selectNum;
    }
    itemList = this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_14;
  }
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v8; // x22
  ListViewItem_o *v9; // x21
  __int64 v10; // x10
  const MethodInfo *v11; // x1

  if ( (byte_40FD722 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD722 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B170D4();
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_14;
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantOperationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( ListViewItem__get_IsSelect(v9, 0LL)
      && ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v9, v11) == userServantId )
    {
      return v9->fields.selectNum;
    }
    itemList = this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_14;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v13; // x22
  ServantOperationListViewItem_o *v14; // x21
  __int64 v15; // x10
  const MethodInfo *v16; // x1
  int64_t UserSvtId; // x0

  if ( (byte_40FD720 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_40FD720 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B170D4();
  v13 = 0LL;
  while ( (__int64)v13 < itemList->fields._size )
  {
    if ( v13 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v14 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v13];
    if ( v14 )
    {
      v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v14, 0LL) )
        {
          UserSvtId = ServantOperationListViewItem__get_UserSvtId(v14, v16);
          if ( !v11 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v11,
            UserSvtId,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v11;
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
  ListViewSort_o **p_commandCodeSortInfo; // x8
  ServantOperationListViewManager_c *v6; // x0
  ServantOperationListViewManager_c *v7; // x0

  if ( (byte_40FD708 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
    byte_40FD708 = 1;
  }
  switch ( kind )
  {
    case 2:
      v6 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v6 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v6->static_fields->commandCodeSortInfo;
      return *p_commandCodeSortInfo;
    case 1:
      v7 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v7 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v7->static_fields->servantEquipSortInfo;
      return *p_commandCodeSortInfo;
    case 0:
      v4 = ServantOperationListViewManager_TypeInfo;
      if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
        v4 = ServantOperationListViewManager_TypeInfo;
      }
      p_commandCodeSortInfo = &v4->static_fields->servantSortInfo;
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

  if ( (byte_40FD710 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_11701, v4);
    sub_B16FFC(&StringLiteral_11699, v5);
    sub_B16FFC(&StringLiteral_11700, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FD710 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11701;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11699;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11700;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  return (System_String_o *)StringLiteral_1;
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  _BOOL8 IsSwap; // x0
  System_String_array **v22; // x2
  MethodInfo *v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v29; // x25
  ListViewItem_o *v30; // x8
  __int64 v31; // x11
  ServantOperationListViewItem_o *v32; // x24
  const MethodInfo_2F164A0 *v33; // x2
  System_Collections_Generic_List_long__o *v34; // x0
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
  int64_t id; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD73F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v14);
    byte_40FD73F = 1;
  }
  id = 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&modekind,
                                                     changeIds,
                                                     revokeIds,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  v29 = 0LL;
  while ( (__int64)v29 < itemList->fields._size )
  {
    if ( v29 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v30 = itemList->fields._items->m_Items[v29];
    if ( v30
      && (v31 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v31) )
    {
      if ( (ServantOperationListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] == ServantOperationListViewItem_TypeInfo )
        v32 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v29];
      else
        v32 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)IsSwap,
               v32,
               this->fields.modeKind,
               v23);
    if ( IsSwap )
    {
      IsSwap = ServantOperationListViewManager__TryGetItemCollectId(
                 (ServantOperationListViewManager_o *)IsSwap,
                 v32,
                 &id,
                 v23);
      if ( IsSwap )
      {
        if ( ServantOperationListViewManager__GetIsSelected(
               (ServantOperationListViewManager_o *)IsSwap,
               v32,
               this->fields.modeKind,
               v23) )
        {
          if ( !v20 )
            goto LABEL_23;
          v33 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v34 = v20;
        }
        else
        {
          if ( !v15 )
            goto LABEL_23;
          v33 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v34 = v15;
        }
        System_Collections_Generic_List_long___Add(v34, id, v33);
      }
    }
    itemList = this->fields.itemList;
    ++v29;
    if ( !itemList )
      goto LABEL_23;
  }
  if ( !v15 || !v20 )
LABEL_23:
    sub_B170D4();
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *changeIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)changeIds, 0LL, v22, (System_String_array **)v23, v24, v25, v26, v27);
    *revokeIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)revokeIds, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v35;
    sub_B16F98((BattleServantConfConponent_o *)changeIds, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v42;
    sub_B16F98((BattleServantConfConponent_o *)revokeIds, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
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
  System_String_o **v14; // x8
  System_String_o **v15; // x9

  if ( (byte_40FD70F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17071, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_17072, v6);
    sub_B16FFC(&StringLiteral_17057, v7);
    sub_B16FFC(&StringLiteral_17060, v8);
    sub_B16FFC(&StringLiteral_17073, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    sub_B16FFC(&StringLiteral_17074, v11);
    sub_B16FFC(&StringLiteral_17059, v12);
    sub_B16FFC(&StringLiteral_17058, v13);
    byte_40FD70F = 1;
  }
  switch ( kind )
  {
    case 0:
      v14 = (System_String_o **)&StringLiteral_17074;
      v15 = (System_String_o **)&StringLiteral_17073;
      goto LABEL_9;
    case 1:
      v14 = (System_String_o **)&StringLiteral_17060;
      v15 = (System_String_o **)&StringLiteral_17059;
      goto LABEL_9;
    case 2:
      v14 = (System_String_o **)&StringLiteral_17058;
      v15 = (System_String_o **)&StringLiteral_17057;
      goto LABEL_9;
    case 3:
      v14 = (System_String_o **)&StringLiteral_17072;
      v15 = (System_String_o **)&StringLiteral_17071;
LABEL_9:
      if ( isSelected )
        v14 = v15;
      break;
    default:
      v14 = (System_String_o **)&StringLiteral_1;
      break;
  }
  return *v14;
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_array *__fastcall ServantOperationListViewManager__GetUserCommandCodeEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FD70A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD70A = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserCommandCodeMaster__getList(MasterData_WarQuestSelectionMaster, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *v5; // x0
  UserServantMaster_o *v6; // x0
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FD709 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD709 = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
  }
  else
  {
    if ( !kind )
    {
      v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v5 )
      {
        v6 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v5,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( v6 )
          return UserServantMaster__getKeepServantList(v6, 0LL);
      }
LABEL_12:
      sub_B170D4();
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
  ListViewSort_o *servantEquipSortInfo; // x0

  if ( (byte_40FD704 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v1);
    byte_40FD704 = 1;
  }
  v2 = ServantOperationListViewManager_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo);
    v2 = ServantOperationListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantEquipSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(servantEquipSortInfo, 0LL);
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ListViewItem_o *v22; // x20
  int64_t UserCommandCodeId; // x0
  __int128 v24; // q0
  int64_t v25; // x21
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FD713 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD713 = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_34;
    if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            selectedId,
            (const MethodInfo_266F60C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_34:
      sub_B170D4();
    v19 = 0LL;
    while ( (__int64)v19 < itemList->fields._size )
    {
      if ( v19 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v20 = itemList->fields._items->m_Items[v19];
      if ( v20
        && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
          v22 = itemList->fields._items->m_Items[v19];
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      if ( entity )
      {
        if ( !v22 )
          goto LABEL_34;
        UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                              (ServantOperationListViewItem_o *)v22,
                              v16);
        if ( !entity )
          goto LABEL_34;
        v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v25 = UserCommandCodeId;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL) )
        {
          v31 = (System_Int32_array **)entity;
          *(_QWORD *)&v22[1].fields.sortIndex = entity;
          sub_B16F98((BattleServantConfConponent_o *)&v22[1].fields.sortIndex, v31, v17, v26, v27, v28, v29, v30);
        }
      }
      else if ( !v22 )
      {
        goto LABEL_34;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v22, 0, (const MethodInfo *)v17);
      viewObject = (UnityEngine_Object_o *)v22->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        v33 = v22->fields.viewObject;
        if ( !v33 )
          goto LABEL_34;
        ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._5_SetItem.method)(
          v33,
          v22,
          v33->klass->vtable._6_SetItem.methodPtr);
      }
      itemList = this->fields.itemList;
      ++v19;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v20; // x21
  unsigned __int64 v21; // x24
  bool v22; // w28
  ListViewItem_o *v23; // x8
  __int64 v24; // x11
  ListViewItem_o *v25; // x22
  int64_t UserSvtId; // x0
  __int128 v27; // q0
  int64_t v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v38; // x0
  ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-70h]

  if ( (byte_40FD715 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FD715 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v20 = 0LL;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       usrSvtId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = this->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B170D4();
      }
      v20 = Entity;
    }
    v21 = 0LL;
    v22 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v21 >= itemList->fields._size )
        return;
      if ( v21 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = itemList->fields._items->m_Items[v21];
      if ( v23
        && (v24 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
      {
        if ( (ServantOperationListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] == ServantOperationListViewItem_TypeInfo )
          v25 = itemList->fields._items->m_Items[v21];
        else
          v25 = 0LL;
        if ( !v20 )
          goto LABEL_28;
      }
      else
      {
        v25 = 0LL;
        if ( !v20 )
          goto LABEL_28;
      }
      if ( !v25 )
        goto LABEL_41;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(
                    (ServantOperationListViewItem_o *)v25,
                    (const MethodInfo *)usrSvtId);
      v27 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      v28 = UserSvtId;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v40 = v41;
      if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL) )
      {
        v25[1].klass = (ListViewItem_c *)v20;
        sub_B16F98((BattleServantConfConponent_o *)&v25[1], (System_Int32_array **)v20, v29, v30, v31, v32, v33, v34);
        if ( v22 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v22 )
      {
LABEL_29:
        if ( !v25 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v25,
          (const MethodInfo *)usrSvtId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v25, v35);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v25, v36);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v25 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v25->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        v38 = v25->fields.viewObject;
        if ( !v38 )
          goto LABEL_41;
        ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v38->klass->vtable._5_SetItem.method)(
          v38,
          v25,
          v38->klass->vtable._6_SetItem.methodPtr);
        if ( isIconSizeChange )
        {
          v39 = v25->fields.viewObject;
          if ( !v39 )
            goto LABEL_41;
          ListViewObject__SetItemSeed(v39, v25, this->fields.seed, 0LL);
        }
      }
      itemList = this->fields.itemList;
      ++v21;
      if ( !itemList )
        goto LABEL_41;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v20; // x21
  unsigned __int64 v21; // x24
  bool v22; // w28
  ListViewItem_o *v23; // x8
  __int64 v24; // x11
  ListViewItem_o *v25; // x22
  int64_t UserCommandCodeId; // x0
  __int128 v27; // q0
  int64_t v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v37; // x0
  ListViewObject_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-70h]

  if ( (byte_40FD717 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FD717 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v20 = 0LL;
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       usrCmdId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = this->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B170D4();
      }
      v20 = Entity;
    }
    v21 = 0LL;
    v22 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v21 >= itemList->fields._size )
        return;
      if ( v21 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = itemList->fields._items->m_Items[v21];
      if ( v23
        && (v24 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
      {
        if ( (ServantOperationListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] == ServantOperationListViewItem_TypeInfo )
          v25 = itemList->fields._items->m_Items[v21];
        else
          v25 = 0LL;
        if ( !v20 )
          goto LABEL_28;
      }
      else
      {
        v25 = 0LL;
        if ( !v20 )
          goto LABEL_28;
      }
      if ( !v25 )
        goto LABEL_41;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v25,
                            (const MethodInfo *)usrCmdId);
      v27 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      v28 = UserCommandCodeId;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v40.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL) )
      {
        *(_QWORD *)&v25[1].fields.sortIndex = v20;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v25[1].fields.sortIndex,
          (System_Int32_array **)v20,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        if ( v22 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v22 )
      {
LABEL_29:
        if ( !v25 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v25,
          (const MethodInfo *)usrCmdId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v25, v35);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v25 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v25->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        v37 = v25->fields.viewObject;
        if ( !v37 )
          goto LABEL_41;
        ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v37->klass->vtable._5_SetItem.method)(
          v37,
          v25,
          v37->klass->vtable._6_SetItem.methodPtr);
        if ( isIconSizeChange )
        {
          v38 = v25->fields.viewObject;
          if ( !v38 )
            goto LABEL_41;
          ListViewObject__SetItemSeed(v38, v25, this->fields.seed, 0LL);
        }
      }
      itemList = this->fields.itemList;
      ++v21;
      if ( !itemList )
        goto LABEL_41;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_31619300(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *item,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v18; // x23
  int64_t UserSvtId; // x0
  __int128 v20; // q1
  int64_t v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v31; // x0
  ListViewObject_o *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]

  if ( (byte_40FD716 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, item);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD716 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_27;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               usrSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity )
    {
      if ( !item )
        goto LABEL_27;
      v18 = Entity;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v20 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      v21 = UserSvtId;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v33, 0LL) )
      {
        item->fields._UserServantEntity_k__BackingField = v18;
        sub_B16F98(
          (BattleServantConfConponent_o *)&item->fields._UserServantEntity_k__BackingField,
          (System_Int32_array **)v18,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v28);
    ServantOperationListViewItem__ModifyPushItem(item, v29);
  }
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v31 = item->fields.viewObject;
    if ( v31 )
    {
      ((void (__fastcall *)(struct ListViewObject_o *, ServantOperationListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
        v31,
        item,
        v31->klass->vtable._6_SetItem.methodPtr);
      if ( !isIconSizeChange )
        return;
      v32 = item->fields.viewObject;
      if ( v32 )
      {
        ListViewObject__SetItemSeed(v32, (ListViewItem_o *)item, this->fields.seed, 0LL);
        return;
      }
    }
LABEL_27:
    sub_B170D4();
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
  unsigned __int64 v10; // x23
  bool v11; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v13; // x26
  UserCommandCodeEntity_o **v14; // x27
  ListViewItem_o *v15; // x28
  __int64 v16; // x10
  __int64 v17; // x8
  __int128 v18; // q0
  int64_t v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UserCommandCodeEntity_o *v22; // x8
  __int128 v23; // q0
  __int64 v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+60h] [xbp-70h]

  if ( (byte_40FD719 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_40FD719 = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v13 = 0LL;
      v14 = &userCommandCodeEntities->m_Items[v10];
      while ( 1 )
      {
        if ( (__int64)v13 >= itemList->fields._size )
          goto LABEL_28;
        if ( v13 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v15 = itemList->fields._items->m_Items[v13];
        if ( !v15 )
          goto LABEL_30;
        v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v17 = *(_QWORD *)&v15[1].fields.sortIndex;
        if ( v17 )
        {
          v18 = *(_OWORD *)(v17 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
          if ( v10 >= userCommandCodeEntities->max_length )
          {
            sub_B17100(v19, v20, v21);
            sub_B170A0();
          }
          v22 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
          *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v29.fields.fakeValue = v23;
          if ( v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v29, 0LL) )
            break;
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_30;
      }
      v24 = *(_QWORD *)&v15[1].fields.sortIndex;
      if ( !v24 )
LABEL_30:
        sub_B170D4();
      v25 = *(_OWORD *)(v24 + 32);
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
      *(_OWORD *)&v31.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v31;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(this, v26, 1, v11, v27);
LABEL_28:
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
  unsigned __int64 v10; // x24
  bool v11; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v13; // x27
  UserServantEntity_o **v14; // x28
  ServantOperationListViewItem_o *v15; // x22
  __int64 v16; // x10
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v18; // q0
  int64_t v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  const MethodInfo *v27; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+60h] [xbp-70h]

  if ( (byte_40FD718 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_40FD718 = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v13 = 0LL;
      v14 = &userServantEntities->m_Items[v10];
      while ( 1 )
      {
        if ( (__int64)v13 >= itemList->fields._size )
          goto LABEL_28;
        if ( v13 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v15 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v13];
        if ( !v15 )
          goto LABEL_30;
        v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        UserServantEntity_k__BackingField = v15->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v31.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
          if ( v10 >= userServantEntities->max_length )
          {
            sub_B17100(v19, v20, v21);
            sub_B170A0();
          }
          v22 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
          *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v29.fields.fakeValue = v23;
          if ( v19 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v29, 0LL) )
            break;
        }
        itemList = this->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_30;
      }
      v24 = v15->fields._UserServantEntity_k__BackingField;
      if ( !v24 )
LABEL_30:
        sub_B170D4();
      v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v31;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
      ServantOperationListViewManager__ModifyLockItem_31619300(this, v15, v26, 1, v11, v27);
LABEL_28:
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
  UserGameEntity_o *SelfUserGame; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  UserGameEntity_o *v9; // x20
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x24
  __int64 v12; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t pushUserSvtId; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  v3 = this;
  if ( (byte_40FD71A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD71A = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = v3->fields.itemList;
    if ( !itemList )
LABEL_19:
      sub_B170D4();
    v9 = SelfUserGame;
    v10 = 0LL;
    while ( (__int64)v10 < itemList->fields._size )
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( v11 )
      {
        v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (ServantOperationListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == ServantOperationListViewItem_TypeInfo )
        {
          klass = v11[1].klass;
          if ( klass )
          {
            if ( !v9 )
              goto LABEL_19;
            byval_arg = klass->_1.byval_arg;
            pushUserSvtId = v9->fields.pushUserSvtId;
            *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v17.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v16 = v17;
            v11[1].fields.isTerminationSpace = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                                  &v16,
                                                                  0LL);
          }
          itemList = v3->fields.itemList;
          ++v10;
          if ( itemList )
            continue;
        }
      }
      goto LABEL_19;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v19; // x23
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ListViewItem_o *v22; // x21
  int64_t UserSvtId; // x0
  __int128 v24; // q0
  int64_t v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  int64_t v33; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *viewObject; // x22
  struct ListViewObject_o *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_40FD714 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD714 = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_35;
    if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            selectedId,
            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B170D4();
    v19 = 0LL;
    while ( (__int64)v19 < itemList->fields._size )
    {
      if ( v19 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v20 = itemList->fields._items->m_Items[v19];
      if ( v20
        && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
          v22 = itemList->fields._items->m_Items[v19];
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      if ( entity )
      {
        if ( !v22 )
          goto LABEL_35;
        UserSvtId = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v22, v17);
        if ( !entity )
          goto LABEL_35;
        v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v25 = UserSvtId;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v37 = v38;
        if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL) )
        {
          v32 = (System_Int32_array **)entity;
          v22[1].klass = (ListViewItem_c *)entity;
          sub_B16F98((BattleServantConfConponent_o *)&v22[1], v32, v26, v27, v28, v29, v30, v31);
        }
      }
      else if ( !v22 )
      {
        goto LABEL_35;
      }
      v33 = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v22, v17);
      if ( !SelfUserGame )
        goto LABEL_35;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v22,
        v33 == SelfUserGame->fields.favoriteUserSvtId,
        v34);
      viewObject = (UnityEngine_Object_o *)v22->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
      {
        v36 = v22->fields.viewObject;
        if ( !v36 )
          goto LABEL_35;
        ((void (__fastcall *)(struct ListViewObject_o *, ListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._5_SetItem.method)(
          v36,
          v22,
          v36->klass->vtable._6_SetItem.methodPtr);
      }
      itemList = this->fields.itemList;
      ++v19;
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
  const MethodInfo *v5; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2

  if ( (byte_40FD72B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, selectItem);
    byte_40FD72B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B170D4();
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v5);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v7);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v8);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v6; // w9

  if ( (byte_40FD730 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD730 = 1;
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
      sub_B170D4();
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v6 = filter2Kind + 1;
    else
      v6 = 0;
    sort->fields.filter2Kind = v6;
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
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v14; // x22
  int v15; // w9
  ListViewManager_o *v16; // x3
  int32_t v17; // w1

  if ( (byte_40FD731 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD731 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v10,
                                                      v11,
                                                      v12,
                                                      v13);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v9 )
      sub_B170D4();
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
    CommonUI__OpenServantFilterSelectMenu_18244592(v9, v17, sort, v16, v14, -1, 0LL);
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
  const MethodInfo *v5; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2

  if ( (byte_40FD72A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, selectItem);
    byte_40FD72A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B170D4();
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v5);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v7);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v8);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ServantOperationListViewItem_o **v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v43; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v46; // q1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v50; // x0
  WarQuestSelectionMaster_o *v51; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  int32_t v55; // w0
  ServantEntity_o *v56; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v58; // w22
  int32_t v59; // w0
  int32_t ServantLimitCountSealAfter; // w0
  ServantOperationListViewItem_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x9
  int32_t v63; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v65; // w0
  int32_t v66; // w23
  System_String_o *v67; // x21
  System_String_o *v68; // x22
  __int64 v69; // x2
  System_Object_array *v70; // x24
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x26
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x26
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x25
  UserServantEntity_o *v93; // x0
  int32_t v94; // w0
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x25
  ServantEntity_o *v108; // x0
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x20
  System_String_o *v115; // x20
  System_String_o *v116; // x22
  System_String_o *v117; // x23
  CommonUI_o *v118; // x24
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  CommonConfirmDialog_ClickDelegate_o *v123; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  if ( (byte_40FD72C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, selectItem);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&object___TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B16FFC(&Rarity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B16FFC(&SoundManager_TypeInfo, v21);
    sub_B16FFC(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v22);
    sub_B16FFC(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_11946, v24);
    sub_B16FFC(&StringLiteral_11944, v25);
    sub_B16FFC(&StringLiteral_11945, v26);
    sub_B16FFC(&StringLiteral_11947, v27);
    byte_40FD72C = 1;
  }
  v28 = sub_B170CC(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, selectItem, method, v3, v4);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_68;
  *(_QWORD *)(v28 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v28 + 24) = selectItem;
  v35 = (ServantOperationListViewItem_o **)(v28 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v28 + 24),
    (System_Int32_array **)selectItem,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  if ( !pushUserSvtId )
  {
LABEL_15:
    ServantOperationListViewManager__PushRequest(this, *v35, v43);
    return;
  }
  if ( !*v35 )
    goto LABEL_68;
  UserServantEntity_k__BackingField = (*v35)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_68;
  v46 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v46;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v124 = v125;
  if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v124, 0LL) )
    goto LABEL_15;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             pushUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v50 )
    goto LABEL_68;
  v51 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v50,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_68;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)v51;
  v54 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v126.fields.currentCryptoKey = v54;
  *(_QWORD *)&v126.fields.fakeValue = v53;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v126, 0LL);
  if ( !v52 )
    goto LABEL_68;
  v56 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v52,
                             v55,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_68;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 v58,
                                 v59,
                                 0LL);
  v61 = *v35;
  if ( !*v35 )
    goto LABEL_68;
  v62 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v61->fields._UserServantEntity_k__BackingField;
  if ( !v62 )
    goto LABEL_68;
  v63 = ServantLimitCountSealAfter;
  SvtId_k__BackingField = v61->fields._SvtId_k__BackingField;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62[6], 0LL);
  v66 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
          Master_WarQuestSelectionMaster,
          SvtId_k__BackingField,
          v65,
          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
  v70 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v69);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(Rarity, 0LL);
  if ( !v70 )
LABEL_68:
    sub_B170D4();
  v80 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_70;
  }
  if ( !v70->max_length )
    goto LABEL_69;
  v70->m_Items[0] = (Il2CppObject *)v80;
  sub_B16F98((BattleServantConfConponent_o *)v70->m_Items, v80, v74, v75, v76, v77, v78, v79);
  if ( !v56 )
    goto LABEL_68;
  RarityType = ServantEntity__getClassName(v56, 0LL);
  v86 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_70;
  }
  if ( v70->max_length <= 1 )
    goto LABEL_69;
  v70->m_Items[1] = (Il2CppObject *)v86;
  sub_B16F98((BattleServantConfConponent_o *)&v70->m_Items[1], v86, v74, v81, v82, v83, v84, v85);
  RarityType = ServantEntity__getName(v56, v63, -1, 0LL);
  v92 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_70;
  }
  if ( v70->max_length <= 2 )
    goto LABEL_69;
  v70->m_Items[2] = (Il2CppObject *)v92;
  sub_B16F98((BattleServantConfConponent_o *)&v70->m_Items[2], v92, v74, v87, v88, v89, v90, v91);
  if ( !*v35 )
    goto LABEL_68;
  v93 = (*v35)->fields._UserServantEntity_k__BackingField;
  if ( !v93 )
    goto LABEL_68;
  v94 = UserServantEntity__getRarity(v93, 0LL);
  RarityType = Rarity__getRarityType(v94, 0LL);
  v100 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_70;
  }
  if ( v70->max_length <= 3 )
    goto LABEL_69;
  v70->m_Items[3] = (Il2CppObject *)v100;
  sub_B16F98((BattleServantConfConponent_o *)&v70->m_Items[3], v100, v74, v95, v96, v97, v98, v99);
  if ( !*v35 )
    goto LABEL_68;
  servantEntity = (*v35)->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_68;
  RarityType = ServantEntity__getClassName(servantEntity, 0LL);
  v107 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_70;
  }
  if ( v70->max_length <= 4 )
    goto LABEL_69;
  v70->m_Items[4] = (Il2CppObject *)v107;
  sub_B16F98((BattleServantConfConponent_o *)&v70->m_Items[4], v107, v74, v102, v103, v104, v105, v106);
  if ( !*v35 )
    goto LABEL_68;
  v108 = (*v35)->fields.servantEntity;
  if ( !v108 )
    goto LABEL_68;
  RarityType = ServantEntity__getName(v108, v66, -1, 0LL);
  v114 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v70->obj.klass->_1.element_class);
    if ( !RarityType )
    {
LABEL_70:
      sub_B170F4(RarityType);
      sub_B170A0();
    }
  }
  if ( v70->max_length <= 5 )
  {
LABEL_69:
    sub_B17100(RarityType, v73, v74);
    sub_B170A0();
  }
  v70->m_Items[5] = (Il2CppObject *)v114;
  sub_B16F98((BattleServantConfConponent_o *)&v70->m_Items[5], v114, v74, v109, v110, v111, v112, v113);
  v115 = System_String__Format_43822456(v68, v70, 0LL);
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
  v118 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v123 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v119,
                                                  v120,
                                                  v121,
                                                  v122);
  CommonConfirmDialog_ClickDelegate___ctor(
    v123,
    (Il2CppObject *)v28,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v118 )
    goto LABEL_68;
  CommonUI__OpenConfirmDialog_18236860(
    v118,
    v67,
    v115,
    v116,
    v117,
    v123,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  UISprite_o *scaleChangeButtonSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_40FD738 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD738 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v13, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v16);
  ServantOperationListViewManager__SetMode_31622628(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v11; // x0
  struct ServantOperationManager_o *v12; // x8
  System_String_o *v13; // x22
  __int64 v14; // x0
  struct ServantOperationManager_o *v15; // x8
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  ServantOperationManager_o *v21; // x0
  const MethodInfo *v22; // x1
  struct ServantOperationManager_o *v23; // x8
  struct ServantOperationManager_o *v24; // x8
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  struct ServantOperationManager_o *v27; // x8
  System_String_o *v28; // x22
  __int64 v29; // x0
  struct ServantOperationManager_o *v30; // x8
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD727 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, selectItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12413, v7);
    byte_40FD727 = 1;
  }
  if ( this->fields.isInConfirm )
  {
    ServantOperationListViewManager__CallOnSelectServant(this, selectItem, method);
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
    parentManager = this->fields.parentManager;
    --this->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = this->fields.selectDoneLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      v12 = this->fields.parentManager;
      if ( v12 )
      {
        v13 = v11;
        TotalSum_k__BackingField = v12->fields._TotalSum_k__BackingField;
        v14 = j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v15 = this->fields.parentManager;
        if ( v15 )
        {
          v16 = (Il2CppObject *)v14;
          SelectMax_k__BackingField = v15->fields._SelectMax_k__BackingField;
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          v18 = System_String__Format_43739268(v13, v16, v17, 0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, v18, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, selectItem, v19);
            v21 = this->fields.parentManager;
            if ( v21 )
            {
              ServantOperationManager__numberAdjustment(v21, selectItem->fields.selectNum, v20);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
              ServantOperationListViewManager__RefrashListDisp(this, v22);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  if ( ServantOperationListViewManager__IsSelectEnable(this, selectItem, 0, 0, v8) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v23 = this->fields.parentManager;
    if ( v23 )
    {
      selectItem->fields.selectNum = v23->fields._TotalSum_k__BackingField;
      v24 = this->fields.parentManager;
      ++this->fields.selectSum;
      if ( v24 )
      {
        ++v24->fields._TotalSum_k__BackingField;
        v25 = this->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
        v27 = this->fields.parentManager;
        if ( v27 )
        {
          v28 = v26;
          TotalSum_k__BackingField = v27->fields._TotalSum_k__BackingField;
          v29 = j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
          v30 = this->fields.parentManager;
          if ( v30 )
          {
            v31 = (Il2CppObject *)v29;
            SelectMax_k__BackingField = v30->fields._SelectMax_k__BackingField;
            v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
            v33 = System_String__Format_43739268(v28, v31, v32, 0LL);
            if ( v25 )
            {
              UILabel__set_text(v25, v33, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(this, 0, selectItem, v34);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD734 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD734 = 1;
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
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  int v15; // w8
  int32_t v16; // w1

  if ( (byte_40FD72E & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD72E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B170D4();
    if ( kind == 1 )
      v15 = 2;
    else
      v15 = 1;
    if ( kind == 2 )
      v16 = 6;
    else
      v16 = v15;
    CommonUI__OpenServantSortSelectMenu(v9, v16, sort, 1, v14, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_bool__o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FD73B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndClickTabChoice__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD73B = 1;
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
      v10 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v6, v7, v8, v9);
      System_Action_bool____ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v10, v11);
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
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_bool__o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FD73A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndClickTabLock__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD73A = 1;
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
      v10 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v6, v7, v8, v9);
      System_Action_bool____ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v10, v11);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_bool__o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FD73C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndClickTabPush__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD73C = 1;
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
    v10 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v6, v7, v8, v9);
    System_Action_bool____ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabPush__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v10, v11);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_bool__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40FD739 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndClickTabStatus__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD739 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v6);
    v11 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v7, v8, v9, v10);
    System_Action_bool____ctor(
      v11,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v11, v12);
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
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0

  if ( (byte_40FD71F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD71F = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40FD72D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FD72D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserServantEntity_k__BackingField )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_fields = &UserServantEntity_k__BackingField->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.imageLimitCount,
          0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  IsChoice = UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantOperationManager_o *parentManager; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_ServantOperationListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_ServantOperationListViewObject__o *v8; // x20
  unsigned int v9; // w21
  ServantOperationListViewObject_o *v10; // x0

  if ( (byte_40FD711 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v3);
    byte_40FD711 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_12;
  ServantOperationManager__RefrashListDisp(parentManager, method);
  ObjectList = ServantOperationListViewManager__get_ObjectList(this, v5);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v8 = ObjectList;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = v8->fields._items->m_Items[v9];
      if ( !v10 )
        break;
      ((void (__fastcall *)(ServantOperationListViewObject_o *, bool, Il2CppMethodPointer))v10->klass->vtable._9_SetInput.method)(
        v10,
        this->fields.isInput,
        v10->klass->vtable._10_Invalidation.methodPtr);
      size = v8->fields._size;
      if ( (int)++v9 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v6; // x21
  ListViewItem_o *v7; // x20
  __int64 v8; // x10
  const MethodInfo *v9; // x3

  if ( (byte_40FD726 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v4);
    byte_40FD726 = 1;
  }
  itemList = this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_12:
    sub_B170D4();
  v6 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = itemList->fields._items->m_Items[v6];
    if ( v7 )
    {
      v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect(v7, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, (ServantOperationListViewItem_o *)v7, v9);
        itemList = this->fields.itemList;
        ++v6;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD71E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantOperationListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FD71E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantOperationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v19, v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v10; // x0
  struct ServantOperationManager_o *v11; // x8
  System_String_o *v12; // x22
  __int64 v13; // x0
  struct ServantOperationManager_o *v14; // x8
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  ServantOperationManager_o *v20; // x0
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD71D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12413, v6);
    byte_40FD71D = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL)
    && ServantOperationListViewItem__get_IsCanNotSelect(item, v7) )
  {
    parentManager = this->fields.parentManager;
    --this->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = this->fields.selectDoneLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      v11 = this->fields.parentManager;
      if ( v11 )
      {
        v12 = v10;
        TotalSum_k__BackingField = v11->fields._TotalSum_k__BackingField;
        v13 = j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v14 = this->fields.parentManager;
        if ( v14 )
        {
          v15 = (Il2CppObject *)v13;
          SelectMax_k__BackingField = v14->fields._SelectMax_k__BackingField;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          v17 = System_String__Format_43739268(v12, v15, v16, 0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, v17, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, item, v18);
            v20 = this->fields.parentManager;
            if ( v20 )
            {
              ServantOperationManager__numberAdjustment(v20, item->fields.selectNum, v19);
              ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
              return 1;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
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
  const MethodInfo *v6; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v9; // w20
  int32_t v10; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v12; // x0
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v14; // x21
  __int64 v15; // x0
  struct ServantOperationManager_o *v16; // x8
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD744 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12413, v5);
    byte_40FD744 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = this->fields.dragStartIndex;
    else
      v9 = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = this->fields.dragEndIndex;
    else
      v10 = this->fields.dragStartIndex;
    do
      ServantOperationListViewManager__DecideDragSelect(this, v9++, v6);
    while ( v9 <= v10 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_21;
  v14 = v12;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  v16 = this->fields.parentManager;
  if ( !v16
    || (v17 = (Il2CppObject *)v15,
        SelectMax_k__BackingField = v16->fields._SelectMax_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField),
        v19 = System_String__Format_43739268(v14, v17, v18, 0LL),
        !selectDoneLabel) )
  {
LABEL_21:
    sub_B170D4();
  }
  UILabel__set_text(selectDoneLabel, v19, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v20);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ServantOperationListViewItem_o *v11; // x21
  __int64 v12; // x9
  UnityEngine_Object_o *viewObject; // x19
  const MethodInfo *v14; // x1
  ServantOperationListViewObject_o *v15; // x0
  __int64 v16; // x10

  if ( (byte_40FD742 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewObject_TypeInfo, v9);
    byte_40FD742 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_17;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v11 )
  {
LABEL_19:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v11, isDragSelect, method);
    sub_B170D4();
  }
  v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantOperationListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B173C8(v11);
    goto LABEL_19;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(this, v11, isDragSelect, method);
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    v15 = (ServantOperationListViewObject_o *)v11->fields.viewObject;
    if ( v15 )
    {
      v16 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (ServantOperationListViewObject_c *)v15->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(v15, v14);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  signed __int64 size; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  __int64 v15; // x11
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v17; // x0

  if ( (byte_40FD743 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_40FD743 = 1;
  }
  itemSortList = this->fields.itemSortList;
  this->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31369F0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)itemSortList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = itemSortList->fields._items->m_Items[v12];
      if ( !v13 )
        break;
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14 )
        break;
      if ( (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewItem_TypeInfo )
        break;
      v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v15 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v12;
      v13[2].fields.loopIndex = -1;
      if ( (__int64)v12 >= size )
        goto LABEL_16;
      itemSortList = this->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_22:
    sub_B170D4();
  }
LABEL_16:
  ServantOperationListViewManager__SetDragSelectItem(this, startIndex, startIndex, method);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v17 = this->fields.scrollView;
    if ( !v17 )
      goto LABEL_22;
    UIScrollView__Press(v17, 0, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__SetFilterButtonImage(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FD733 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927, method);
    sub_B16FFC(&StringLiteral_16926, v3);
    byte_40FD733 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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
    sub_B170D4();
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
  bool IsSelect; // w0
  const MethodInfo *v7; // x3
  struct ServantOperationManager_o *parentManager; // x9
  int32_t TotalSum_k__BackingField; // w8
  struct ServantOperationManager_o *v10; // x8
  struct ServantOperationManager_o *v11; // x8
  const MethodInfo *v12; // x2
  ServantOperationManager_o *v13; // x0

  if ( !item )
    goto LABEL_14;
  if ( item->fields._DragSelectNum_k__BackingField >= 1 )
  {
    isDragSelect = this->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        parentManager = this->fields.parentManager;
        if ( !parentManager )
          goto LABEL_14;
        TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
        if ( TotalSum_k__BackingField < parentManager->fields._SelectMax_k__BackingField )
        {
          item->fields.selectNum = TotalSum_k__BackingField;
          v10 = this->fields.parentManager;
          ++this->fields.selectSum;
          if ( v10 )
          {
            ++v10->fields._TotalSum_k__BackingField;
            ServantOperationListViewManager__ChangeSellEnableRestCount(this, 0, item, v7);
            return;
          }
LABEL_14:
          sub_B170D4();
        }
      }
    }
    else if ( IsSelect )
    {
      v11 = this->fields.parentManager;
      --this->fields.selectSum;
      if ( !v11 )
        goto LABEL_14;
      --v11->fields._TotalSum_k__BackingField;
      ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, item, v7);
      v13 = this->fields.parentManager;
      if ( !v13 )
        goto LABEL_14;
      ServantOperationManager__numberAdjustment(v13, item->fields.selectNum, v12);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantOperationManager_o *parentManager; // x8
  int v11; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v13; // x22
  __int64 v14; // x9
  UnityEngine_Object_o *viewObject; // x23
  const MethodInfo *v16; // x1
  struct ListViewObject_o *v17; // x8
  __int64 v18; // x11
  __int64 v19; // x11
  ServantOperationListViewObject_o *v20; // x0
  ServantOperationListViewObject_o *v21; // x0
  const MethodInfo *v22; // x1

  v5 = start;
  if ( (byte_40FD741 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewObject_TypeInfo, v9);
    byte_40FD741 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
LABEL_28:
    sub_B170D4();
  if ( v5 <= end )
  {
    v11 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      itemSortList = this->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_28;
      if ( itemSortList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = itemSortList->fields._items->m_Items[v5];
      if ( !v13 )
        goto LABEL_28;
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( v13[2].fields.loopIndex >= 1 )
      {
        v13[2].fields.loopIndex = v11;
        viewObject = (UnityEngine_Object_o *)v13->fields.viewObject;
        ++v11;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
        {
          v17 = v13->fields.viewObject;
          if ( !v17 )
            goto LABEL_28;
          v18 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
            || (ServantOperationListViewObject_c *)v17->klass->_2.typeHierarchy[v18 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_28;
          }
          v19 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
          {
            if ( (ServantOperationListViewObject_c *)v17->klass->_2.typeHierarchy[v19 - 1] == ServantOperationListViewObject_TypeInfo )
              v20 = (ServantOperationListViewObject_o *)v13->fields.viewObject;
            else
              v20 = 0LL;
          }
          else
          {
            v20 = 0LL;
          }
          ServantOperationListViewObject__SetupDisp(v20, v16);
        }
      }
      if ( ++v5 > end )
        return;
    }
    sub_B173C8(v13);
    ServantOperationListViewObject__SetupDisp(v21, v22);
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
  int v13; // w9

  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  this->fields.sort = SortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)SortInfo, v7, v8, v9, v10, v11, v12);
  if ( !*p_sort )
    goto LABEL_6;
  v13 = kind == 1;
  if ( kind == 2 )
    v13 = 3;
  (*p_sort)->fields.listViewKind = v13;
  if ( !*p_sort )
LABEL_6:
    sub_B170D4();
  ListViewSort__Load(*p_sort, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onSelectServant,
    (System_Int32_array **)onSelectServant,
    (System_String_array **)onSelectServant,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_31622628(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_31622628(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t ObjectSum; // w0
  int32_t v8; // w8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v12; // x22
  char v13; // w21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  ServantOperationListViewItem_o *v16; // x1
  bool v17; // w0
  int v18; // w8
  int32_t v19; // w1

  if ( (byte_40FD71C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_40FD71C = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v8 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v8 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_B170D4();
    v12 = 0LL;
    v13 = 0;
    while ( (__int64)v12 < itemList->fields._size )
    {
      if ( v12 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = itemList->fields._items->m_Items[v12];
      if ( v14
        && (v15 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
      {
        if ( (ServantOperationListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewItem_TypeInfo )
          v16 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v12];
        else
          v16 = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v16, v10);
      itemList = this->fields.itemList;
      v13 |= v17;
      ++v12;
      if ( !itemList )
        goto LABEL_16;
    }
    if ( (v13 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v9);
    if ( initMode == 2 )
      v18 = 3;
    else
      v18 = 0;
    if ( initMode == 1 )
      v19 = 2;
    else
      v19 = v18;
    ServantOperationListViewManager__RequestListObject(this, v19, v10);
  }
}


void __fastcall ServantOperationListViewManager__SetObjectItem(
        ServantOperationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FD71B & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewObject_TypeInfo, obj);
    byte_40FD71B = 1;
  }
  if ( !obj
    || (v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)obj, v7, 0LL, method);
}


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
  System_String_o *ScaleKindSpriteName; // x0

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
    sub_B16F98(
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
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, ScaleKindSpriteName, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  signed int max_length; // w8
  __int64 v19; // x22
  UserServantEntity_o *v20; // x23
  __int128 v21; // q0
  System_Int64_array *v22; // x24
  System_Int64_array *v23; // x25
  int64_t v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t favoriteUserSvtId; // x20
  int64_t v30; // x27
  ServantOperationListViewItem_o *v31; // x26
  const MethodInfo *v32; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-80h]
  System_Int64_array *equipIdList; // [xsp+50h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40FD70C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD70C = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_22;
    UserDeckMaster__getPartyList(MasterData_WarQuestSelectionMaster, &svtIdList, &equipIdList, UserId, 0LL);
    max_length = userServantEntities->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= max_length )
        {
          sub_B17100(v15, v16, v17);
          sub_B170A0();
        }
        v20 = userServantEntities->m_Items[v19];
        if ( !v20 )
          break;
        v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
        v23 = equipIdList;
        v22 = svtIdList;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v36 = v37;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v36, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v30 = v24;
        v31 = (ServantOperationListViewItem_o *)sub_B170CC(ServantOperationListViewItem_TypeInfo, v25, v26, v27, v28);
        ServantOperationListViewItem___ctor(v31, v19, v20, v22, v23, v30 == favoriteUserSvtId, v32);
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v31, v34);
        max_length = userServantEntities->max_length;
        if ( (int)++v19 >= max_length )
          return v19;
      }
LABEL_22:
      sub_B170D4();
    }
  }
  LODWORD(v19) = 0;
  return v19;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_31613712(
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
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v17; // x22
  __int64 v18; // x21
  UserCommandCodeEntity_o *v19; // x23
  __int128 v20; // q0
  int64_t v21; // x0
  bool v22; // w25
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  ServantOperationListViewItem_o *v27; // x24
  const MethodInfo *v28; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v30; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h]

  if ( (byte_40FD70D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userCommandCodeEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FD70D = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_19;
    EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               MasterData_WarQuestSelectionMaster,
                               0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v17 = EquipedCommandCodeList;
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
        {
          sub_B17100(EquipedCommandCodeList, v14, v15);
          sub_B170A0();
        }
        v19 = userCommandCodeEntities->m_Items[v18];
        if ( !v19 )
          break;
        v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v20;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v32 = v33;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL);
        if ( !v17 )
          break;
        v22 = System_Collections_Generic_List_long___Contains(
                v17,
                v21,
                (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__);
        v27 = (ServantOperationListViewItem_o *)sub_B170CC(ServantOperationListViewItem_TypeInfo, v23, v24, v25, v26);
        ServantOperationListViewItem___ctor_31599056(v27, v18, v19, v22, v28);
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v27, v30);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v18 >= max_length )
          return v18;
      }
LABEL_19:
      sub_B170D4();
    }
  }
  LODWORD(v18) = 0;
  return v18;
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
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  ListViewSort_o *v27; // x0
  struct ServantOperationManager_o *parentManager; // x20
  System_String_o *SvtOperationFilter2Text; // x0
  System_String_o *v30; // x1
  UILabel_o *filter2Label; // x0

  if ( (byte_40FD737 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FD737 = 1;
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
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_39;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_39;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( sortExplanationSprite )
      {
        v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
        UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
        v18 = this->fields.sort;
        if ( v18 )
        {
          v19 = this->fields.sortOrderSprite;
          if ( v19 )
          {
            isAscendingOrder = v18->fields.isAscendingOrder;
            v21 = (System_String_o **)&StringLiteral_16952;
            v22 = (System_String_o **)&StringLiteral_16955;
LABEL_31:
            if ( isAscendingOrder )
              v26 = v21;
            else
              v26 = v22;
            UISprite__set_spriteName(v19, *v26, 0LL);
            goto LABEL_35;
          }
        }
      }
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( v23 )
      {
        v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
        UISprite__set_spriteName(v23, *v24, 0LL);
        v25 = this->fields.sort;
        if ( v25 )
        {
          v19 = this->fields.sortOrderSprite;
          if ( v19 )
          {
            isAscendingOrder = v25->fields.isAscendingOrder;
            v21 = (System_String_o **)&StringLiteral_16955;
            v22 = (System_String_o **)&StringLiteral_16952;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_35:
  v27 = this->fields.sort;
  if ( !v27 )
    goto LABEL_39;
  parentManager = this->fields.parentManager;
  SvtOperationFilter2Text = ListViewSort__GetSvtOperationFilter2Text(v27, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_39;
  v30 = SvtOperationFilter2Text;
  filter2Label = parentManager->fields.filter2Label;
  if ( !filter2Label )
    goto LABEL_39;
  UILabel__set_text(filter2Label, v30, 0LL);
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
  UnityEngine_Object_o *pushTabSprite; // x20
  const MethodInfo *v14; // x5
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v17; // x20
  ServantOperationListViewManager_o *v18; // x0
  const MethodInfo *v19; // x2
  System_String_o *StatusText; // x0
  WebViewManager_o *Instance; // x0
  ShopRootComponent_o *basePanel; // x0
  __int64 v23; // x9
  ServantOperationListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_40FD70E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&ShopRootComponent_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_40FD70E = 1;
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
        v14);
  }
  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (gameObject = UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, this->fields.modeKind != 0, 0LL),
        v17 = this->fields.statusLabel,
        StatusText = ServantOperationListViewManager__GetStatusText(v18, this->fields.modeKind, v19),
        !v17)
    || (UILabel__set_text(v17, StatusText, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (basePanel = (ShopRootComponent_o *)Instance->fields.basePanel) == 0LL )
  {
    sub_B170D4();
  }
  v23 = *(&ShopRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v23
    && (ShopRootComponent_c *)basePanel->klass->_2.typeHierarchy[v23 - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo(basePanel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    sub_B173C8(basePanel);
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
  System_String_o *TabSpriteName; // x0

  if ( !tabButton
    || (v9 = selectedModeKind == tabKind,
        v10 = selectedModeKind != tabKind,
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))tabButton->klass->vtable._5_set_isEnabled.method)(
          tabButton,
          1LL,
          tabButton->klass->vtable._6_OnInit.methodPtr),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tabButton, v10, 0LL),
        TabSpriteName = ServantOperationListViewManager__GetTabSpriteName(v11, tabKind, v9, v12),
        !tabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(tabSprite, TabSpriteName, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  const MethodInfo *v15; // x4
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  CardStatusSyncRequest_o *v23; // x0
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-28h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FD73E & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd);
    sub_B16FFC(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B16FFC(&Method_ServantOperationListViewManager_EndStatusSync__, v13);
    byte_40FD73E = 1;
  }
  changeIds = 0LL;
  revokeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
    (System_Int32_array **)onRequestEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v14, &changeIds, &revokeIds, v15) )
  {
    kind = this->fields.kind;
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    NetworkManager_ResultCallbackFunc___ctor(
      v21,
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
                                                                              v21,
                                                                              (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
      sub_B170D4();
    }
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v23 = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v21,
                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !v23 )
      goto LABEL_17;
    CardStatusSyncRequest__beginRequest(
      v23,
      changeIds,
      revokeIds,
      0,
      this->fields.modeKind == 1,
      this->fields.modeKind == 2,
      0LL);
  }
  else
  {
    ServantOperationListViewManager__CallRequestEnd(this, 0, v17);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v12; // x24
  ListViewItem_o *v13; // x23
  __int64 v14; // x10
  UserServantEntity_o *klass; // x0
  int32_t v16; // w26
  UserServantEntity_o *v17; // x0
  int32_t v18; // w26
  UserServantEntity_o *v19; // x0
  int32_t v20; // w23
  int32_t SellRarePri; // w0
  UserCommandCodeEntity_o *v22; // x0
  int32_t v23; // w26
  UserCommandCodeEntity_o *v24; // x0
  int32_t v25; // w26
  UserCommandCodeEntity_o *v26; // x0

  if ( (byte_40FD712 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_40FD712 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_B170D4();
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( !v13 )
      goto LABEL_22;
    v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( ListViewItem__get_IsSelect(v13, 0LL) )
    {
      klass = (UserServantEntity_o *)v13[1].klass;
      if ( klass )
      {
        v16 = *qp;
        *qp = UserServantEntity__getSellQp(klass, 0LL) + v16;
        v17 = (UserServantEntity_o *)v13[1].klass;
        if ( !v17 )
          goto LABEL_22;
        v18 = *mana;
        *mana = UserServantEntity__getSellMana(v17, 0LL) + v18;
        v19 = (UserServantEntity_o *)v13[1].klass;
        if ( !v19 )
          goto LABEL_22;
        v20 = *rarePri;
        SellRarePri = UserServantEntity__getSellRarePri(v19, 0LL);
LABEL_20:
        *rarePri = SellRarePri + v20;
        goto LABEL_21;
      }
      v22 = *(UserCommandCodeEntity_o **)&v13[1].fields.sortIndex;
      if ( v22 )
      {
        v23 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp(v22, 0LL) + v23;
        v24 = *(UserCommandCodeEntity_o **)&v13[1].fields.sortIndex;
        if ( !v24 )
          goto LABEL_22;
        v25 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana(v24, 0LL) + v25;
        v26 = *(UserCommandCodeEntity_o **)&v13[1].fields.sortIndex;
        if ( !v26 )
          goto LABEL_22;
        v20 = *rarePri;
        SellRarePri = UserCommandCodeEntity__GetSellRarePri(v26, 0LL);
        goto LABEL_20;
      }
    }
LABEL_21:
    itemList = this->fields.itemList;
    ++v12;
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

  if ( (byte_40FD73D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    byte_40FD73D = 1;
  }
  if ( !item )
    sub_B170D4();
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  __int64 v7; // x21
  int size; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x22
  __int64 v12; // x8

  if ( (byte_40FD728 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FD728 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B170D4();
  v7 = 4LL;
  while ( 1 )
  {
    size = itemList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = *((_QWORD *)&itemList->fields._items->obj.klass + v7);
    if ( !v10 )
      goto LABEL_16;
    if ( *(_DWORD *)(v10 + 16) > selectNum )
    {
      v11 = this->fields.itemList;
      if ( !v11 )
        goto LABEL_16;
      if ( v11->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v12 = *((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !v12 )
        goto LABEL_16;
      --*(_DWORD *)(v12 + 16);
    }
    itemList = this->fields.itemList;
    ++v7;
    if ( !itemList )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  ServantOperationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FD706 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FD706 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_23;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_23;
      Component_srcLineSprite = (ServantOperationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v18,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)ServantOperationListViewObject__GetItem(Component_srcLineSprite, v20);
      if ( Item
        && (!Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL)) )
      {
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
      }
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FD705 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FD705 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_19;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_19;
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v18,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v12 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F763A & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager___c_TypeInfo, v1);
    byte_40F763A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantOperationListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantOperationListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F763B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v6);
    byte_40F763B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}