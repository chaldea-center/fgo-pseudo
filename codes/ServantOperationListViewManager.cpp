void __fastcall ServantOperationListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  struct ServantOperationListViewManager_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  ListViewSort_o *v23; // x20
  struct ServantOperationListViewManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x19
  ListViewSort_o *v32; // x20
  struct ServantOperationListViewManager_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438F2A3 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_1198/*"4"*/);
    sub_B775C4(&StringLiteral_12960/*"ServantOperation"*/);
    byte_438F2A3 = 1;
  }
  v40 = 0;
  ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_12960/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12960/*"ServantOperation"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v8, v1, v2, v3, v4, v5, v6);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v40 = 1;
  v10 = System_Int32__ToString((int32_t)&v40, 0LL);
  v11 = System_String__Concat_44901936(SORT_SAVE_KEY, v10, 0LL);
  v12 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v12, v11, 3, 0, 0LL);
  v13 = ServantOperationListViewManager_TypeInfo->static_fields;
  v13->servantSortInfo = v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&v13->servantSortInfo,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v40 = 2;
  v21 = System_Int32__ToString((int32_t)&v40, 0LL);
  v22 = System_String__Concat_44901936(v20, v21, 0LL);
  v23 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v23, v22, 3, 0, 0LL);
  v24 = ServantOperationListViewManager_TypeInfo->static_fields;
  v24->servantEquipSortInfo = v23;
  sub_B77560(
    (BattleServantConfConponent_o *)&v24->servantEquipSortInfo,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = System_String__Concat_44901936(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1198/*"4"*/,
          0LL);
  v32 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v32, v31, 2, 0, 0LL);
  v33 = ServantOperationListViewManager_TypeInfo->static_fields;
  v33->commandCodeSortInfo = v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&v33->commandCodeSortInfo,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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

  if ( (byte_438F285 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ServantOperationListViewItem__Invoke__);
    byte_438F285 = 1;
  }
  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0LL;
    sub_B77560(
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
      (const MethodInfo_26A087C *)Method_System_Action_ServantOperationListViewItem__Invoke__);
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

  if ( (byte_438F29C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__Invoke__);
    byte_438F29C = 1;
  }
  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    this->fields.onRequestEnd = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onRequestEnd, result, (const MethodInfo_269C934 *)Method_System_Action_bool__Invoke__);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_331EE00;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  v4 = this;
  if ( (byte_438F2A2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F2A2 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemSortList->fields._items->m_Items[index];
  if ( !v6
    || (v7 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (ServantOperationListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_10:
    sub_B7769C(this, *(_QWORD *)&index);
  }
  v6[2].fields.loopIndex = -1;
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
    sub_B7769C(this, isPlus);
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

  if ( (byte_438F263 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_438F263 = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_32901028(
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
    sub_B7769C(v9, v10);
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
  ServantOperationListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ServantOperationListViewItem_o *v6; // x20
  __int64 v7; // x9
  __int64 v8; // x0
  __int64 v9; // x1

  v4 = this;
  if ( (byte_438F2A1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F2A1 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
LABEL_11:
    sub_B7769C(this, *(_QWORD *)&index);
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v6 )
  {
    ServantOperationListViewManager__SetIsItemSelect(v4, 0LL, method);
    sub_B7769C(v8, v9);
  }
  v7 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantOperationListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B77990(v6);
    goto LABEL_11;
  }
  ServantOperationListViewManager__SetIsItemSelect(v4, v6, method);
  v6->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438F25F & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    byte_438F25F = 1;
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
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
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
    sub_B7769C(0LL, v3);
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
  ServantOperationListViewManager__SetMode_32909944(this, 2, v5);
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
    sub_B7769C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v7);
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
    sub_B7769C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v7);
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
    sub_B7769C(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v7);
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
    sub_B7769C(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v7);
}


void __fastcall ServantOperationListViewManager__EndSelectFilterKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x19
  ServantOperationListViewManager___c_c *v9; // x8
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v12; // x21
  struct ServantOperationListViewManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438F28E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__);
    sub_B775C4(&ServantOperationListViewManager___c_TypeInfo);
    byte_438F28E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = ServantOperationListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v9 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v12,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    v13 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v13->__9__106_0 = _9__106_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v8 )
    sub_B7769C(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v8, _9__106_0, 0LL);
}


void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438F28B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438F28B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
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
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v4 = this;
  if ( (byte_438F291 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F291 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&svtId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v6;
        if ( (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != ServantOperationListViewItem_TypeInfo )
          v8 = 0LL;
        if ( v8[1].fields.selectNum == svtId )
          ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationListViewManager__GetCommandCodeAmountSortValue(
        ServantOperationListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v4 = this;
  if ( (byte_438F292 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F292 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&commandCodeId);
  v6 = 0LL;
  v7 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v6];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
        ++v6;
        if ( (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[*(&ServantOperationListViewItem_TypeInfo->_2.bitflags2
                                                                           + 1)
                                                                         - 1] != ServantOperationListViewItem_TypeInfo )
          v8 = 0LL;
        if ( LODWORD(v8[1].fields.sortValue0B) == commandCodeId )
          ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_16;
  }
  return v7;
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

  if ( (byte_438F267 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B775C4(&StringLiteral_3352/*"COMMAND_CODE_EMPTY"*/);
    sub_B775C4(&StringLiteral_11874/*"SERVANT_ALL_EMPTY"*/);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438F267 = 1;
  }
  if ( isNotEmpty )
  {
    v6 = &StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v6 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v6 = off_3FDAA00[kind];
  }
  return (System_String_o *)*v6;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  _BOOL8 IsSelect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v7; // x22
  ListViewItem_o *v8; // x21
  __int64 v9; // x10

  if ( (byte_438F280 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F280 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B7769C(IsSelect, v5);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
        if ( IsSelect && (BYTE4(v8[1].fields.sortValue2) || BYTE6(v8[1].fields.sortValue2)) )
        {
          if ( !v3 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
        }
        itemList = this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_17;
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
LABEL_10:
    sub_B7769C(this, item);
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
    sub_B7769C(this, item);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  ServantEntity_o *IsSelect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v7; // x22
  ListViewItem_o *v8; // x21
  __int64 v9; // x10

  if ( (byte_438F281 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F281 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B7769C(IsSelect, v5);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = (ServantEntity_o *)ListViewItem__get_IsSelect(v8, 0LL);
        if ( ((unsigned __int8)IsSelect & 1) != 0 )
        {
          IsSelect = (ServantEntity_o *)v8[1].monitor;
          if ( IsSelect )
          {
            IsSelect = (ServantEntity_o *)ServantEntity__get_IsServant(IsSelect, 0LL);
            if ( ((unsigned __int8)IsSelect & 1) != 0
              && (BYTE3(v8[1].fields.sortValue2B) || BYTE4(v8[1].fields.sortValue2B)) )
            {
              if ( !v3 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v3,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v3;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v7; // x22
  ListViewItem_o *v8; // x21
  __int64 v9; // x10

  if ( (byte_438F27D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F27D = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B7769C(IsSelect, v5);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v8, v5);
          if ( !v3 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v3,
            IsSelect,
            (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v3;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v6; // x22
  ListViewItem_o *v7; // x21
  __int64 v8; // x10

  v4 = this;
  if ( (byte_438F27F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F27F = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B7769C(this, userCommandCodeId);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= itemList->fields._size )
      return -1;
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v7 = itemList->fields._items->m_Items[v6];
    if ( !v7 )
      goto LABEL_14;
    v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v7, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                    (ServantOperationListViewItem_o *)v7,
                                                    (const MethodInfo *)userCommandCodeId);
      if ( this == (ServantOperationListViewManager_o *)userCommandCodeId )
        return v7->fields.selectNum;
    }
    itemList = v4->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_14;
  }
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserServantId(
        ServantOperationListViewManager_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v6; // x22
  ListViewItem_o *v7; // x21
  __int64 v8; // x10

  v4 = this;
  if ( (byte_438F27E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F27E = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B7769C(this, userServantId);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= itemList->fields._size )
      return -1;
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v7 = itemList->fields._items->m_Items[v6];
    if ( !v7 )
      goto LABEL_14;
    v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v7, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserSvtId(
                                                    (ServantOperationListViewItem_o *)v7,
                                                    (const MethodInfo *)userServantId);
      if ( this == (ServantOperationListViewManager_o *)userServantId )
        return v7->fields.selectNum;
    }
    itemList = v4->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_14;
  }
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedServantIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v7; // x22
  ListViewItem_o *v8; // x21
  __int64 v9; // x10

  if ( (byte_438F27C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F27C = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B7769C(IsSelect, v5);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v8, v5);
          if ( !v3 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v3,
            IsSelect,
            (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
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
  ListViewSort_o **p_commandCodeSortInfo; // x8
  ServantOperationListViewManager_c *v6; // x0
  ServantOperationListViewManager_c *v7; // x0

  if ( (byte_438F264 & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    byte_438F264 = 1;
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


System_String_o *__fastcall ServantOperationListViewManager__GetStatusText(
        ServantOperationListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_438F26C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438F26C = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0LL);
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
  _BOOL8 IsSwap; // x0
  int64_t v11; // x1
  System_String_array **v12; // x2
  MethodInfo *v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v19; // x25
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ServantOperationListViewItem_o *v22; // x24
  const MethodInfo_30EBD98 *v23; // x2
  System_Collections_Generic_List_long__o *v24; // x0
  System_Int64_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int64_t id; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438F29B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F29B = 1;
  }
  id = 0LL;
  v8 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  v19 = 0LL;
  while ( (__int64)v19 < itemList->fields._size )
  {
    if ( v19 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v20 = itemList->fields._items->m_Items[v19];
    if ( v20
      && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
    {
      if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
        v22 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v19];
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)IsSwap,
               v22,
               this->fields.modeKind,
               v13);
    if ( IsSwap )
    {
      IsSwap = ServantOperationListViewManager__TryGetItemCollectId(
                 (ServantOperationListViewManager_o *)IsSwap,
                 v22,
                 &id,
                 v13);
      if ( IsSwap )
      {
        IsSwap = ServantOperationListViewManager__GetIsSelected(
                   (ServantOperationListViewManager_o *)IsSwap,
                   v22,
                   this->fields.modeKind,
                   v13);
        v11 = id;
        if ( IsSwap )
        {
          if ( !v9 )
            goto LABEL_23;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v9;
        }
        else
        {
          if ( !v8 )
            goto LABEL_23;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
        }
        System_Collections_Generic_List_long___Add(v24, id, v23);
      }
    }
    itemList = this->fields.itemList;
    ++v19;
    if ( !itemList )
      goto LABEL_23;
  }
  if ( !v8 || !v9 )
LABEL_23:
    sub_B7769C(IsSwap, v11);
  if ( v9->fields._size + v8->fields._size < 1 )
  {
    *changeIds = 0LL;
    sub_B77560((BattleServantConfConponent_o *)changeIds, 0LL, v12, (System_String_array **)v13, v14, v15, v16, v17);
    *revokeIds = 0LL;
    sub_B77560((BattleServantConfConponent_o *)revokeIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
  else
  {
    v25 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v25;
    sub_B77560((BattleServantConfConponent_o *)changeIds, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v9,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v32;
    sub_B77560((BattleServantConfConponent_o *)revokeIds, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    return 1;
  }
}


System_String_o *__fastcall ServantOperationListViewManager__GetTabSpriteName(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9

  if ( (byte_438F26B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438F26B = 1;
  }
  switch ( kind )
  {
    case 0:
      v6 = &StringLiteral_17480/*"button_select_unreg"*/;
      v7 = &StringLiteral_17479/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v6 = &StringLiteral_17466/*"button_alllock_unreg"*/;
      v7 = &StringLiteral_17465/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v6 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
      v7 = &StringLiteral_17463/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v6 = &StringLiteral_17478/*"button_push_unreg"*/;
      v7 = &StringLiteral_17477/*"button_push_reg"*/;
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438F266 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F266 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v5);
  }
  return UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
}


UserServantEntity_array *__fastcall ServantOperationListViewManager__GetUserServantEntities(
        ServantOperationListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438F265 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F265 = 1;
  }
  if ( kind == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_B7769C(Instance, v5);
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

  if ( (byte_438F260 & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    byte_438F260 = 1;
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
        (servantSortInfo = ServantOperationListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B7769C(servantSortInfo, v1);
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
    sub_B7769C(this, item);
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
  __int64 Instance; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v11; // x22
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  ListViewItem_o *v14; // x20
  __int128 v15; // q0
  __int64 v16; // x21
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  UnityEngine_Object_o *viewObject; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_438F26F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F26F = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_34:
      sub_B7769C(Instance, v8);
    v11 = 0LL;
    while ( (__int64)v11 < itemList->fields._size )
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v12 = itemList->fields._items->m_Items[v11];
      if ( v12
        && (v13 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (ServantOperationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewItem_TypeInfo )
          v14 = itemList->fields._items->m_Items[v11];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      if ( entity )
      {
        if ( !v14 )
          goto LABEL_34;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v14, v8);
        if ( !entity )
          goto LABEL_34;
        v15 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v16 = Instance;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v25.fields.fakeValue = v15;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v24 = v25;
        if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v24, 0LL) )
        {
          v22 = (System_Int32_array **)entity;
          *(_QWORD *)&v14[1].fields.sortIndex = entity;
          sub_B77560((BattleServantConfConponent_o *)&v14[1].fields.sortIndex, v22, v9, v17, v18, v19, v20, v21);
        }
      }
      else if ( !v14 )
      {
        goto LABEL_34;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v14, 0, (const MethodInfo *)v9);
      viewObject = (UnityEngine_Object_o *)v14->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v14->fields.viewObject;
        if ( !Instance )
          goto LABEL_34;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v14,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v11;
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
  ServantOperationListViewManager_o *v8; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v10; // x21
  unsigned __int64 v11; // x24
  bool v12; // w28
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  ListViewItem_o *v15; // x22
  int64_t UserSvtId; // x0
  __int128 v17; // q0
  ServantOperationListViewManager_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_438F271 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F271 = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v10 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrSvtId,
                                                          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B7769C(this, usrSvtId);
      }
      v10 = this;
    }
    v11 = 0LL;
    v12 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v11 >= itemList->fields._size )
        return;
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v13 = itemList->fields._items->m_Items[v11];
      if ( v13
        && (v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
          v15 = itemList->fields._items->m_Items[v11];
        else
          v15 = 0LL;
        if ( !v10 )
          goto LABEL_28;
      }
      else
      {
        v15 = 0LL;
        if ( !v10 )
          goto LABEL_28;
      }
      if ( !v15 )
        goto LABEL_41;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(
                    (ServantOperationListViewItem_o *)v15,
                    (const MethodInfo *)usrSvtId);
      v17 = *(_OWORD *)&v10->fields.indicator;
      v18 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v10->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v29;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v28,
                                                    0LL);
      if ( v18 == this )
      {
        v15[1].klass = (ListViewItem_c *)v10;
        sub_B77560((BattleServantConfConponent_o *)&v15[1], (System_Int32_array **)v10, v19, v20, v21, v22, v23, v24);
        if ( v12 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v12 )
      {
LABEL_29:
        if ( !v15 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v15,
          (const MethodInfo *)usrSvtId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v15, v25);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v15, v26);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v15 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v15->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v15->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v15,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v15->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v15, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v11;
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
  ServantOperationListViewManager_o *v8; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v10; // x21
  unsigned __int64 v11; // x24
  bool v12; // w28
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  ListViewItem_o *v15; // x22
  int64_t UserCommandCodeId; // x0
  __int128 v17; // q0
  ServantOperationListViewManager_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_438F273 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F273 = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v10 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrCmdId,
                                                          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B7769C(this, usrCmdId);
      }
      v10 = this;
    }
    v11 = 0LL;
    v12 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v11 >= itemList->fields._size )
        return;
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v13 = itemList->fields._items->m_Items[v11];
      if ( v13
        && (v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
          v15 = itemList->fields._items->m_Items[v11];
        else
          v15 = 0LL;
        if ( !v10 )
          goto LABEL_28;
      }
      else
      {
        v15 = 0LL;
        if ( !v10 )
          goto LABEL_28;
      }
      if ( !v15 )
        goto LABEL_41;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v15,
                            (const MethodInfo *)usrCmdId);
      v17 = *(_OWORD *)&v10->fields.indicator;
      v18 = (ServantOperationListViewManager_o *)UserCommandCodeId;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v10->fields.m_CachedPtr;
      *(_OWORD *)&v28.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v28;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v27,
                                                    0LL);
      if ( v18 == this )
      {
        *(_QWORD *)&v15[1].fields.sortIndex = v10;
        sub_B77560(
          (BattleServantConfConponent_o *)&v15[1].fields.sortIndex,
          (System_Int32_array **)v10,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        if ( v12 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v12 )
      {
LABEL_29:
        if ( !v15 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v15,
          (const MethodInfo *)usrCmdId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v15, v25);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v15 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v15->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v15->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v15,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v15->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v15, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v11;
      if ( !itemList )
        goto LABEL_41;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_32906616(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  v10 = this;
  if ( (byte_438F272 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F272 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_27;
      v11 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v13 = *(_OWORD *)&v11->fields.indicator;
      v14 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v11->fields.m_CachedPtr;
      *(_OWORD *)&v25.fields.fakeValue = v13;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v25;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                    &v24,
                                                    0LL);
      if ( v14 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v11;
        sub_B77560(
          (BattleServantConfConponent_o *)&item->fields._UserServantEntity_k__BackingField,
          (System_Int32_array **)v11,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v21);
    ServantOperationListViewItem__ModifyPushItem(item, v22);
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
    sub_B7769C(this, item);
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v6; // x20
  unsigned __int64 v7; // x23
  bool v8; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v10; // x26
  UserCommandCodeEntity_o **v11; // x27
  ListViewItem_o *v12; // x28
  __int64 v13; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  UserCommandCodeEntity_o *v16; // x8
  __int128 v17; // q0
  ServantOperationListViewManager_o *v18; // x22
  __int64 v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x4
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_438F275 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F275 = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v10 = 0LL;
      v11 = &userCommandCodeEntities->m_Items[v7];
      while ( 1 )
      {
        if ( (__int64)v10 >= itemList->fields._size )
          goto LABEL_28;
        if ( v10 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v12 = itemList->fields._items->m_Items[v10];
        if ( !v12 )
          goto LABEL_30;
        v13 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
          || (ServantOperationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v14 = *(_QWORD *)&v12[1].fields.sortIndex;
        if ( v14 )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v27.fields.fakeValue = v15;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                        &v26,
                                                        0LL);
          if ( v7 >= userCommandCodeEntities->max_length )
          {
            v23 = sub_B776C8(this);
            sub_B77668(v23, 0LL);
          }
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_30;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = this;
          *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v25.fields.fakeValue = v17;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                        &v25,
                                                        0LL);
          if ( v18 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v10;
        if ( !itemList )
          goto LABEL_30;
      }
      v19 = *(_QWORD *)&v12[1].fields.sortIndex;
      if ( !v19 )
LABEL_30:
        sub_B7769C(this, userCommandCodeEntities);
      v20 = *(_OWORD *)(v19 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v27;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v24, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(v6, v21, 1, v8, v22);
LABEL_28:
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
  ServantOperationListViewManager_o *v6; // x20
  unsigned __int64 v7; // x24
  bool v8; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  unsigned __int64 v10; // x27
  UserServantEntity_o **v11; // x28
  ServantOperationListViewItem_o *v12; // x22
  __int64 v13; // x10
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q0
  UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  ServantOperationListViewManager_o *v18; // x23
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x5
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_438F274 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F274 = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v10 = 0LL;
      v11 = &userServantEntities->m_Items[v7];
      while ( 1 )
      {
        if ( (__int64)v10 >= itemList->fields._size )
          goto LABEL_28;
        if ( v10 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v12 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v10];
        if ( !v12 )
          goto LABEL_30;
        v13 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
          || (ServantOperationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != ServantOperationListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        UserServantEntity_k__BackingField = v12->fields._UserServantEntity_k__BackingField;
        if ( UserServantEntity_k__BackingField )
        {
          v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v15;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                        &v26,
                                                        0LL);
          if ( v7 >= userServantEntities->max_length )
          {
            v23 = sub_B776C8(this);
            sub_B77668(v23, 0LL);
          }
          v16 = *v11;
          if ( !*v11 )
            goto LABEL_30;
          v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
          v18 = this;
          *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v25.fields.fakeValue = v17;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                        &v25,
                                                        0LL);
          if ( v18 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v10;
        if ( !itemList )
          goto LABEL_30;
      }
      v19 = v12->fields._UserServantEntity_k__BackingField;
      if ( !v19 )
LABEL_30:
        sub_B7769C(this, userServantEntities);
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v27;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v24, 0LL);
      ServantOperationListViewManager__ModifyLockItem_32906616(v6, v12, v21, 1, v8, v22);
LABEL_28:
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
  int64_t SelfUserGame; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int64_t v7; // x20
  unsigned __int64 v8; // x21
  ListViewItem_o *v9; // x24
  __int64 v10; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v13; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h]

  v3 = this;
  if ( (byte_438F276 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F276 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    itemList = v3->fields.itemList;
    if ( !itemList )
LABEL_19:
      sub_B7769C(SelfUserGame, v5);
    v7 = SelfUserGame;
    v8 = 0LL;
    while ( (__int64)v8 < itemList->fields._size )
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( v9 )
      {
        v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (ServantOperationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == ServantOperationListViewItem_TypeInfo )
        {
          klass = v9[1].klass;
          if ( klass )
          {
            if ( !v7 )
              goto LABEL_19;
            byval_arg = klass->_1.byval_arg;
            v13 = *(_QWORD *)(v7 + 120);
            *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v14 = v15;
            SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
            v9[1].fields.isTerminationSpace = v13 == SelfUserGame;
          }
          itemList = v3->fields.itemList;
          ++v8;
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
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Instance; // x0
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v11; // x23
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  ListViewItem_o *v14; // x21
  __int128 v15; // q0
  __int64 v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_438F270 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F270 = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B7769C(Instance, v9);
    v11 = 0LL;
    while ( (__int64)v11 < itemList->fields._size )
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v12 = itemList->fields._items->m_Items[v11];
      if ( v12
        && (v13 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (ServantOperationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewItem_TypeInfo )
          v14 = itemList->fields._items->m_Items[v11];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      if ( entity )
      {
        if ( !v14 )
          goto LABEL_35;
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v14, v9);
        if ( !entity )
          goto LABEL_35;
        v15 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v16 = Instance;
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v27.fields.fakeValue = v15;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v26 = v27;
        if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL) )
        {
          v23 = (System_Int32_array **)entity;
          v14[1].klass = (ListViewItem_c *)entity;
          sub_B77560((BattleServantConfConponent_o *)&v14[1], v23, v17, v18, v19, v20, v21, v22);
        }
      }
      else if ( !v14 )
      {
        goto LABEL_35;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v14, v9);
      if ( !SelfUserGame )
        goto LABEL_35;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v14,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v24);
      viewObject = (UnityEngine_Object_o *)v14->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v14->fields.viewObject;
        if ( !Instance )
          goto LABEL_35;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v14,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v11;
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
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x2

  if ( (byte_438F287 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F287 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B7769C(v5, v6);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v9);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v7; // w9

  if ( (byte_438F28C & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F28C = 1;
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
      sub_B7769C(v3, v4);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v7 = filter2Kind + 1;
    else
      v7 = 0;
    sort->fields.filter2Kind = v7;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickFilterKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w9
  ListViewManager_o *v11; // x3
  int32_t v12; // w1

  if ( (byte_438F28D & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F28D = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v6 = (CommonUI_o *)Instance;
    v7 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v6 )
      sub_B7769C(v8, v9);
    if ( kind == 1 )
      v10 = 5;
    else
      v10 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v11 = 0LL;
    else
      v11 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v12 = 6;
    else
      v12 = v10;
    CommonUI__OpenServantFilterSelectMenu_18063096(v6, v12, sort, v11, v7, -1, 0LL);
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
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x2

  if ( (byte_438F286 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F286 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B7769C(v5, v6);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v9);
}


void __fastcall ServantOperationListViewManager__OnClickPushModeItem(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ServantOperationListViewItem_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  int64_t v22; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v24; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  ServantEntity_o *v29; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v31; // w22
  ServantOperationListViewItem_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x9
  int32_t v34; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v36; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v38; // x21
  System_String_o *v39; // x22
  System_Object_array *v40; // x24
  int32_t Rarity; // w26
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x25
  int32_t v63; // w0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x25
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x25
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x20
  System_String_o *v85; // x20
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v89; // x25
  __int64 v90; // x0
  __int64 v91; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_438F288 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__);
    sub_B775C4(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438F288 = 1;
  }
  v5 = sub_B77694(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_68;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = selectItem;
  v14 = (ServantOperationListViewItem_o **)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)selectItem, v15, v16, v17, v18, v19, v20);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v22 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v22 )
  {
LABEL_15:
    ServantOperationListViewManager__PushRequest(this, *v14, v21);
    return;
  }
  if ( !*v14 )
    goto LABEL_68;
  UserServantEntity_k__BackingField = (*v14)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_68;
  v24 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v93.fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v92 = v93;
  if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v92, 0LL) )
    goto LABEL_15;
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_68;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             v22,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_68;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v28 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v94.fields.currentCryptoKey = v28;
  *(_QWORD *)&v94.fields.fakeValue = v27;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v94, 0LL);
  if ( !v26 )
    goto LABEL_68;
  v29 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v26,
                             SelfUserGame,
                             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.svtId, 0LL);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_68;
  SelfUserGame = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v31,
                   SelfUserGame,
                   0LL);
  v32 = *v14;
  if ( !*v14 )
    goto LABEL_68;
  v33 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v32->fields._UserServantEntity_k__BackingField;
  if ( !v33 )
    goto LABEL_68;
  v34 = SelfUserGame;
  SvtId_k__BackingField = v32->fields._SvtId_k__BackingField;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId_k__BackingField,
                                 v36,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v40 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v40 )
LABEL_68:
    sub_B7769C(SelfUserGame, v7);
  v48 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( !v40->max_length )
    goto LABEL_69;
  v40->m_Items[0] = (Il2CppObject *)v48;
  sub_B77560((BattleServantConfConponent_o *)v40->m_Items, v48, v42, v43, v44, v45, v46, v47);
  if ( !v29 )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName(v29, 0LL);
  v55 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v40->max_length <= 1 )
    goto LABEL_69;
  v40->m_Items[1] = (Il2CppObject *)v55;
  sub_B77560((BattleServantConfConponent_o *)&v40->m_Items[1], v55, v49, v50, v51, v52, v53, v54);
  SelfUserGame = (__int64)ServantEntity__getName(v29, v34, -1, 0LL);
  v62 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v40->max_length <= 2 )
    goto LABEL_69;
  v40->m_Items[2] = (Il2CppObject *)v62;
  sub_B77560((BattleServantConfConponent_o *)&v40->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
  if ( !*v14 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v14)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_68;
  v63 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)Rarity__getRarityType(v63, 0LL);
  v70 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v40->max_length <= 3 )
    goto LABEL_69;
  v40->m_Items[3] = (Il2CppObject *)v70;
  sub_B77560((BattleServantConfConponent_o *)&v40->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
  if ( !*v14 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v14)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v77 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v40->max_length <= 4 )
    goto LABEL_69;
  v40->m_Items[4] = (Il2CppObject *)v77;
  sub_B77560((BattleServantConfConponent_o *)&v40->m_Items[4], v77, v71, v72, v73, v74, v75, v76);
  if ( !*v14 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v14)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)SelfUserGame, ServantLimitCountSealAfter, -1, 0LL);
  v84 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B77684(SelfUserGame, v40->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_70:
      v91 = sub_B776BC(SelfUserGame);
      sub_B77668(v91, 0LL);
    }
  }
  if ( v40->max_length <= 5 )
  {
LABEL_69:
    v90 = sub_B776C8(SelfUserGame);
    sub_B77668(v90, 0LL);
  }
  v40->m_Items[5] = (Il2CppObject *)v84;
  sub_B77560((BattleServantConfConponent_o *)&v40->m_Items[5], v84, v78, v79, v80, v81, v82, v83);
  v85 = System_String__Format_44980660(v39, v40, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v89 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v89,
    (Il2CppObject *)v5,
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
  CommonUI__OpenConfirmDialog_18055364(
    Instance,
    v38,
    v85,
    v86,
    v87,
    v89,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall ServantOperationListViewManager__OnClickScaleChange(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v13; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_438F294 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F294 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v13 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v13 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v13 = 1;
LABEL_12:
    this->fields.scaleType = v13;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v16);
  ServantOperationListViewManager__SetMode_32909944(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantOperationListViewManager__OnClickSelectListView(
        ServantOperationListViewManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x19
  const MethodInfo *v5; // x4
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  __int64 v8; // x2
  struct ServantOperationManager_o *v9; // x8
  System_String_o *v10; // x22
  __int64 v11; // x2
  struct ServantOperationManager_o *v12; // x8
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  struct ServantOperationManager_o *v18; // x8
  struct ServantOperationManager_o *v19; // x8
  UILabel_o *v20; // x21
  __int64 v21; // x2
  struct ServantOperationManager_o *v22; // x8
  System_String_o *v23; // x22
  __int64 v24; // x2
  struct ServantOperationManager_o *v25; // x8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_438F283 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438F283 = 1;
  }
  if ( v4->fields.isInConfirm )
  {
    ServantOperationListViewManager__CallOnSelectServant(v4, selectItem, method);
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
    parentManager = v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( parentManager )
    {
      --parentManager->fields._TotalSum_k__BackingField;
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
      v9 = v4->fields.parentManager;
      if ( v9 )
      {
        v10 = (System_String_o *)this;
        TotalSum_k__BackingField = v9->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v8);
        v12 = v4->fields.parentManager;
        if ( v12 )
        {
          v13 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v12->fields._SelectMax_k__BackingField;
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v11);
          this = (ServantOperationListViewManager_o *)System_String__Format_44897472(v10, v13, v14, 0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v15);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                v16);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
              ServantOperationListViewManager__RefrashListDisp(v4, v17);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  if ( ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v5) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v18 = v4->fields.parentManager;
    if ( v18 )
    {
      selectItem->fields.selectNum = v18->fields._TotalSum_k__BackingField;
      v19 = v4->fields.parentManager;
      ++v4->fields.selectSum;
      if ( v19 )
      {
        ++v19->fields._TotalSum_k__BackingField;
        v20 = v4->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12702/*"SUM_INFO"*/,
                                                      0LL);
        v22 = v4->fields.parentManager;
        if ( v22 )
        {
          v23 = (System_String_o *)this;
          TotalSum_k__BackingField = v22->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v21);
          v25 = v4->fields.parentManager;
          if ( v25 )
          {
            v26 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v25->fields._SelectMax_k__BackingField;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v24);
            this = (ServantOperationListViewManager_o *)System_String__Format_44897472(v23, v26, v27, 0LL);
            if ( v20 )
            {
              UILabel__set_text(v20, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v28);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(this, selectItem);
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
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438F290 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F290 = 1;
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
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickSortKind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  ServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w8
  int32_t v11; // w1

  if ( (byte_438F28A & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F28A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v6 = (CommonUI_o *)Instance;
    v7 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v6 )
      sub_B7769C(v8, v9);
    if ( kind == 1 )
      v10 = 2;
    else
      v10 = 1;
    if ( kind == 2 )
      v11 = 6;
    else
      v11 = v10;
    CommonUI__OpenServantSortSelectMenu(v6, v11, sort, 1, v7, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  System_Action_bool__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438F297 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndClickTabChoice__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F297 = 1;
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
      v4 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v4,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v3);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabLock(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  System_Action_bool__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438F296 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndClickTabLock__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F296 = 1;
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
      v4 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v4,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v3);
    }
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabPush(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438F298 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndClickTabPush__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F298 = 1;
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
    v3 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v3,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabPush__,
      (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabStatus(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_bool__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438F295 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F295 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v3);
    v4 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v4, v5);
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

  if ( (byte_438F27B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F27B = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B7769C(v8, v7);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438F289 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438F289 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !UserServantEntity_k__BackingField )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_fields = &UserServantEntity_k__BackingField->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  void *parentManager; // x0
  const MethodInfo *v4; // x1
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21

  if ( (byte_438F26D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
    byte_438F26D = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_12;
  ServantOperationManager__RefrashListDisp((ServantOperationManager_o *)parentManager, method);
  parentManager = ServantOperationListViewManager__get_ObjectList(this, v4);
  if ( !parentManager )
    goto LABEL_12;
  v5 = *((_DWORD *)parentManager + 6);
  v6 = parentManager;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v5 <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      parentManager = *(void **)(*((_QWORD *)v6 + 2) + 8LL * (int)v7 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_12:
    sub_B7769C(parentManager, method);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v4; // x21
  ListViewItem_o *v5; // x20
  __int64 v6; // x10
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_438F282 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F282 = 1;
  }
  itemList = v2->fields.itemList;
  v2->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_12:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < itemList->fields._size )
  {
    if ( v4 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v5 = itemList->fields._items->m_Items[v4];
    if ( v5 )
    {
      v6 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v6
        && (ServantOperationListViewItem_c *)v5->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect(v5, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(v2, 1, (ServantOperationListViewItem_o *)v5, v7);
        itemList = v2->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_12;
  }
  v2->fields.selectSum = 0;
  ServantOperationListViewManager__RefrashListDisp(v2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__RequestListObject(
        ServantOperationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438F27A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__);
    sub_B775C4(&Method_ServantOperationListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438F27A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantOperationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  __int64 v8; // x2
  struct ServantOperationManager_o *v9; // x8
  System_String_o *v10; // x22
  __int64 v11; // x2
  struct ServantOperationManager_o *v12; // x8
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_438F279 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438F279 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_IsCanNotSelect(item, v5);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      parentManager = v4->fields.parentManager;
      --v4->fields.selectSum;
      if ( parentManager )
      {
        --parentManager->fields._TotalSum_k__BackingField;
        selectDoneLabel = v4->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12702/*"SUM_INFO"*/,
                                                      0LL);
        v9 = v4->fields.parentManager;
        if ( v9 )
        {
          v10 = (System_String_o *)this;
          TotalSum_k__BackingField = v9->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v8);
          v12 = v4->fields.parentManager;
          if ( v12 )
          {
            v13 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v12->fields._SelectMax_k__BackingField;
            v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v11);
            this = (ServantOperationListViewManager_o *)System_String__Format_44897472(v10, v13, v14, 0LL);
            if ( selectDoneLabel )
            {
              UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, item, v15);
              this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
              if ( this )
              {
                ServantOperationManager__numberAdjustment(
                  (ServantOperationManager_o *)this,
                  item->fields.selectNum,
                  v16);
                ListViewItem__set_IsSelect((ListViewItem_o *)item, 0, 0LL);
                return 1;
              }
            }
          }
        }
      }
LABEL_17:
      sub_B7769C(this, item);
    }
  }
  return 0;
}


void __fastcall ServantOperationListViewManager__SetDragEnd(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int32_t v6; // w20
  int32_t v7; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v13; // x21
  __int64 v14; // x2
  struct ServantOperationManager_o *v15; // x8
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438F2A0 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438F2A0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
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
      ServantOperationListViewManager__DecideDragSelect(this, v6++, v3);
    while ( v6 <= v7 );
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_21;
  v13 = v9;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v11);
  v15 = this->fields.parentManager;
  if ( !v15
    || (v16 = (Il2CppObject *)v9,
        SelectMax_k__BackingField = v15->fields._SelectMax_k__BackingField,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v14),
        v9 = System_String__Format_44897472(v13, v16, v17, 0LL),
        !selectDoneLabel) )
  {
LABEL_21:
    sub_B7769C(v9, v10);
  }
  UILabel__set_text(selectDoneLabel, v9, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v18);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_331EE00;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v8; // x21
  __int64 v9; // x9
  UnityEngine_Object_o *viewObject; // x19
  __int64 v11; // x10
  __int64 v12; // x0
  __int64 v13; // x1

  v6 = this;
  if ( (byte_438F29E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewObject_TypeInfo);
    byte_438F29E = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_17;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v8 = itemSortList->fields._items->m_Items[index];
  if ( !v8 )
  {
LABEL_19:
    ServantOperationListViewManager__SetIsItemDragSelect(v6, (ServantOperationListViewItem_o *)v8, isDragSelect, method);
    sub_B7769C(v12, v13);
  }
  v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (ServantOperationListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B77990(v8);
    goto LABEL_19;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(v6, (ServantOperationListViewItem_o *)v8, isDragSelect, method);
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)v8->fields.viewObject;
    if ( this )
    {
      v11 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewObject_c *)this->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(
          (ServantOperationListViewObject_o *)this,
          *(const MethodInfo **)&index);
        return;
      }
    }
LABEL_17:
    sub_B7769C(this, *(_QWORD *)&index);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  signed __int64 size; // x21
  unsigned __int64 v9; // x22
  ListViewItem_o *v10; // x8
  __int64 v11; // x11
  __int64 v12; // x11
  UnityEngine_Object_o *scrollView; // x20

  v6 = this;
  if ( (byte_438F29F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F29F = 1;
  }
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_331EE00;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)itemSortList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v10 = itemSortList->fields._items->m_Items[v9];
      if ( !v10 )
        break;
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
        break;
      if ( (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo )
        break;
      v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      v10[2].fields.loopIndex = -1;
      if ( (__int64)v9 >= size )
        goto LABEL_16;
      itemSortList = v6->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_22:
    sub_B7769C(this, *(_QWORD *)&startIndex);
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
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438F28F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438F28F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
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
    sub_B7769C(this, 0LL);
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
          sub_B7769C(this, item);
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
  struct ServantOperationManager_o *parentManager; // x8
  int v8; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v10; // x22
  __int64 v11; // x9
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v13; // x8
  __int64 v14; // x11
  __int64 v15; // x11
  ServantOperationListViewObject_o *v16; // x0
  ServantOperationListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  v5 = start;
  v6 = this;
  if ( (byte_438F29D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewObject_TypeInfo);
    byte_438F29D = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_28:
    sub_B7769C(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v8 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_28;
      if ( itemSortList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v10 = itemSortList->fields._items->m_Items[v5];
      if ( !v10 )
        goto LABEL_28;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo )
      {
        break;
      }
      if ( v10[2].fields.loopIndex >= 1 )
      {
        v10[2].fields.loopIndex = v8;
        viewObject = (UnityEngine_Object_o *)v10->fields.viewObject;
        ++v8;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v13 = v10->fields.viewObject;
          if ( !v13 )
            goto LABEL_28;
          v14 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
            || (ServantOperationListViewObject_c *)v13->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_28;
          }
          v15 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
          {
            if ( (ServantOperationListViewObject_c *)v13->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewObject_TypeInfo )
              v16 = (ServantOperationListViewObject_o *)v10->fields.viewObject;
            else
              v16 = 0LL;
          }
          else
          {
            v16 = 0LL;
          }
          ServantOperationListViewObject__SetupDisp(v16, *(const MethodInfo **)&start);
        }
      }
      if ( ++v5 > end )
        return;
    }
    sub_B77990(v10);
    ServantOperationListViewObject__SetupDisp(v17, v18);
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
  sub_B77560((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)SortInfo, v7, v8, v9, v10, v11, v12);
  if ( !*p_sort )
    goto LABEL_6;
  v15 = kind == 1;
  if ( kind == 2 )
    v15 = 3;
  (*p_sort)->fields.listViewKind = v15;
  v13 = *p_sort;
  if ( !*p_sort )
LABEL_6:
    sub_B7769C(v13, v14);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onSelectServant,
    (System_Int32_array **)onSelectServant,
    (System_String_array **)onSelectServant,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_32909944(this, mode, v10);
}


void __fastcall ServantOperationListViewManager__SetMode_32909944(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t ObjectSum; // w0
  int32_t v6; // w8
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v11; // x22
  char v12; // w21
  ListViewItem_o *v13; // x8
  __int64 v14; // x11
  ServantOperationListViewItem_o *v15; // x1
  int v16; // w8
  int32_t v17; // w1

  if ( (byte_438F278 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F278 = 1;
  }
  this->fields.initMode = initMode;
  ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  v6 = this->fields.initMode;
  this->fields.callbackCount = ObjectSum;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v6 == 2, 0LL);
  if ( (unsigned int)(this->fields.initMode - 1) <= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_B7769C(v7, v8);
    v11 = 0LL;
    v12 = 0;
    while ( (__int64)v11 < itemList->fields._size )
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v13 = itemList->fields._items->m_Items[v11];
      if ( v13
        && (v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
          v15 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v11];
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      v7 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v15, v9);
      itemList = this->fields.itemList;
      v12 |= v7;
      ++v11;
      if ( !itemList )
        goto LABEL_16;
    }
    if ( (v12 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v8);
    if ( initMode == 2 )
      v16 = 3;
    else
      v16 = 0;
    if ( initMode == 1 )
      v17 = 2;
    else
      v17 = v16;
    ServantOperationListViewManager__RequestListObject(this, v17, v9);
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
  if ( (byte_438F277 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewObject_TypeInfo);
    byte_438F277 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
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
    sub_B77560(
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
    sub_B7769C(sort, *(_QWORD *)&scaleKind);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount(
        ServantOperationListViewManager_o *this,
        UserServantEntity_array *userServantEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  signed int max_length; // w8
  __int64 v11; // x22
  UserServantEntity_o *v12; // x23
  __int128 v13; // q0
  System_Int64_array *v14; // x24
  System_Int64_array *v15; // x25
  int64_t favoriteUserSvtId; // x20
  DataManager_o *v17; // x27
  ServantOperationListViewItem_o *v18; // x26
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x3
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-80h]
  System_Int64_array *equipIdList; // [xsp+50h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_438F268 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F268 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
        {
          v22 = sub_B776C8(Instance);
          sub_B77668(v22, 0LL);
        }
        v12 = userServantEntities->m_Items[v11];
        if ( !v12 )
          break;
        v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
        v15 = equipIdList;
        v14 = svtIdList;
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v24.fields.fakeValue = v13;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v23 = v24;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v23, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v17 = Instance;
        v18 = (ServantOperationListViewItem_o *)sub_B77694(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v18, v11, v12, v14, v15, v17 == (DataManager_o *)favoriteUserSvtId, v19);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v18, v20);
        max_length = userServantEntities->max_length;
        if ( (int)++v11 >= max_length )
          return v11;
      }
LABEL_22:
      sub_B7769C(Instance, v8);
    }
  }
  LODWORD(v11) = 0;
  return v11;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_32901028(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v9; // x22
  __int64 v10; // x21
  UserCommandCodeEntity_o *v11; // x23
  __int128 v12; // q0
  bool v13; // w25
  ServantOperationListViewItem_o *v14; // x24
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x3
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h]

  if ( (byte_438F269 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F269 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
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
        {
          v18 = sub_B776C8(Instance);
          sub_B77668(v18, 0LL);
        }
        v11 = userCommandCodeEntities->m_Items[v10];
        if ( !v11 )
          break;
        v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
        *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v20.fields.fakeValue = v12;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v19 = v20;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
        if ( !v9 )
          break;
        v13 = System_Collections_Generic_List_long___Contains(
                v9,
                (int64_t)Instance,
                (const MethodInfo_30EC1EC *)Method_System_Collections_Generic_List_long__Contains__);
        v14 = (ServantOperationListViewItem_o *)sub_B77694(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_32886172(v14, v10, v11, v13, v15);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v14, v16);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v10 >= max_length )
          return v10;
      }
LABEL_19:
      sub_B7769C(Instance, v7);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  struct ServantOperationManager_o *parentManager; // x20

  if ( (byte_438F293 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438F293 = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_39;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_39;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
        v11 = this->fields.sort;
        if ( v11 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v11->fields.isAscendingOrder;
            v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
            v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
LABEL_31:
            if ( isAscendingOrder )
              v17 = v13;
            else
              v17 = v14;
            UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
        v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
        v16 = this->fields.sort;
        if ( v16 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v16->fields.isAscendingOrder;
            v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
            v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_B7769C(sort, v4);
  }
LABEL_35:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_39;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_39;
  v4 = (System_String_o *)sort;
  sort = (ListViewSort_o *)parentManager->fields.filter2Label;
  if ( !sort )
    goto LABEL_39;
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
  __int64 v18; // x9
  ServantOperationListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_438F26A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ShopRootComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438F26A = 1;
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
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].klass) == 0LL )
  {
    sub_B7769C(statusLabel, v11);
  }
  v18 = *(&ShopRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&statusLabel->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[v18 - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    sub_B77990(statusLabel);
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
    sub_B7769C(this, tabButton);
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
  int32_t v10; // w1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-28h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_438F29A & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantOperationListViewManager_EndStatusSync__);
    byte_438F29A = 1;
  }
  changeIds = 0LL;
  revokeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
    (System_Int32_array **)onRequestEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v10, &changeIds, &revokeIds, v11) )
  {
    kind = this->fields.kind;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
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
                                                                              v14,
                                                                              (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
      sub_B7769C(Request_WarBoardWallAttackRequest, v16);
    }
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v14,
                                                                            (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  ServantOperationListViewManager_o *v8; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v10; // x24
  ListViewItem_o *v11; // x23
  __int64 v12; // x10
  UserServantEntity_o *klass; // x0
  int32_t v14; // w26
  int32_t v15; // w26
  int32_t v16; // w23
  int32_t v17; // w26
  int32_t v18; // w26

  v8 = this;
  if ( (byte_438F26E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&ServantOperationListViewItem_TypeInfo);
    byte_438F26E = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_B7769C(this, qp);
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v11 = itemList->fields._items->m_Items[v10];
    if ( !v11 )
      goto LABEL_22;
    v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (ServantOperationListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_22;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v11, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      klass = (UserServantEntity_o *)v11[1].klass;
      if ( klass )
      {
        v14 = *qp;
        *qp = UserServantEntity__getSellQp(klass, 0LL) + v14;
        this = (ServantOperationListViewManager_o *)v11[1].klass;
        if ( !this )
          goto LABEL_22;
        v15 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)this, 0LL) + v15;
        this = (ServantOperationListViewManager_o *)v11[1].klass;
        if ( !this )
          goto LABEL_22;
        v16 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserServantEntity__getSellRarePri((UserServantEntity_o *)this, 0LL);
LABEL_20:
        *rarePri = (_DWORD)this + v16;
        goto LABEL_21;
      }
      this = *(ServantOperationListViewManager_o **)&v11[1].fields.sortIndex;
      if ( this )
      {
        v17 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL) + v17;
        this = *(ServantOperationListViewManager_o **)&v11[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v18 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)this, 0LL) + v18;
        this = *(ServantOperationListViewManager_o **)&v11[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v16 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserCommandCodeEntity__GetSellRarePri(
                                                      (UserCommandCodeEntity_o *)this,
                                                      0LL);
        goto LABEL_20;
      }
    }
LABEL_21:
    itemList = v8->fields.itemList;
    ++v10;
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

  if ( (byte_438F299 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438F299 = 1;
  }
  if ( !item )
    sub_B7769C(this, item);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
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
  ServantOperationListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  __int64 v6; // x21
  int size; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x22
  __int64 v11; // x8

  v4 = this;
  if ( (byte_438F284 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (ServantOperationListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438F284 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&selectNum);
  v6 = 4LL;
  while ( 1 )
  {
    size = itemList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      break;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = *((_QWORD *)&itemList->fields._items->obj.klass + v6);
    if ( !v9 )
      goto LABEL_16;
    if ( *(_DWORD *)(v9 + 16) > selectNum )
    {
      v10 = v4->fields.itemList;
      if ( !v10 )
        goto LABEL_16;
      if ( v10->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v11 = *((_QWORD *)&v10->fields._items->obj.klass + v6);
      if ( !v11 )
        goto LABEL_16;
      --*(_DWORD *)(v11 + 16);
    }
    itemList = v4->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ClippingObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21

  if ( (byte_438F262 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F262 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B7769C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_23;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantOperationListViewObject__GetItem(
                                                              (ServantOperationListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( Component_srcLineSprite )
      {
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24185472(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v11,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21

  if ( (byte_438F261 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F261 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B7769C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_19;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v3 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4388828 & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager___c_TypeInfo);
    byte_4388828 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v1;
  sub_B77560(static_fields);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4388829 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__);
    byte_4388829 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
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
    sub_B7769C(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}