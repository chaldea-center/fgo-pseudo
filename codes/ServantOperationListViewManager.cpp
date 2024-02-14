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
  ListViewSort_o *v18; // x20
  struct ServantOperationListViewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  ListViewSort_o *v31; // x20
  struct ServantOperationListViewManager_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x19
  __int64 v40; // x1
  __int64 v41; // x2
  ListViewSort_o *v42; // x20
  struct ServantOperationListViewManager_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42181AF & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&ServantOperationListViewManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1179/*"4"*/, v9);
    sub_B0D8A4(&StringLiteral_12763/*"ServantOperation"*/, v10);
    byte_42181AF = 1;
  }
  v50 = 0;
  ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_12763/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12763/*"ServantOperation"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v12, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v50 = 1;
  v14 = System_Int32__ToString((int32_t)&v50, 0LL);
  v15 = System_String__Concat_43849904(SORT_SAVE_KEY, v14, 0LL);
  v18 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v16, v17);
  ListViewSort___ctor_32823364(v18, v15, 3, 0, 0LL);
  v19 = ServantOperationListViewManager_TypeInfo->static_fields;
  v19->servantSortInfo = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v19->servantSortInfo,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v50 = 2;
  v27 = System_Int32__ToString((int32_t)&v50, 0LL);
  v28 = System_String__Concat_43849904(v26, v27, 0LL);
  v31 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v29, v30);
  ListViewSort___ctor_32823364(v31, v28, 3, 0, 0LL);
  v32 = ServantOperationListViewManager_TypeInfo->static_fields;
  v32->servantEquipSortInfo = v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v32->servantEquipSortInfo,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = System_String__Concat_43849904(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1179/*"4"*/,
          0LL);
  v42 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v40, v41);
  ListViewSort___ctor_32823364(v42, v39, 2, 0, 0LL);
  v43 = ServantOperationListViewManager_TypeInfo->static_fields;
  v43->commandCodeSortInfo = v42;
  sub_B0D840(
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

  if ( (byte_4218191 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantOperationListViewItem__Invoke__, item);
    byte_4218191 = 1;
  }
  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0LL;
    sub_B0D840(
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
      (const MethodInfo_246EA50 *)Method_System_Action_ServantOperationListViewItem__Invoke__);
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

  if ( (byte_42181A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__Invoke__, result);
    byte_42181A8 = 1;
  }
  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    this->fields.onRequestEnd = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onRequestEnd, result, (const MethodInfo_246AB08 *)Method_System_Action_bool__Invoke__);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__CancelDragSelect(
        ServantOperationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  v4 = this;
  if ( (byte_42181AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v5);
    byte_42181AE = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7
    || (v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_10:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  int32_t v10; // w1
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

  if ( (byte_421816F & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    byte_421816F = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_31274740(
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
    sub_B0D97C(v9);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ServantOperationListViewItem_o *v7; // x20
  __int64 v8; // x9
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42181AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v5);
    byte_42181AD = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
LABEL_11:
    sub_B0D97C(this);
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v7 )
  {
    ServantOperationListViewManager__SetIsItemSelect(v4, 0LL, method);
    sub_B0D97C(v9);
  }
  v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B0DC70(v7);
    goto LABEL_11;
  }
  ServantOperationListViewManager__SetIsItemSelect(v4, v7, method);
  v7->fields._DragSelectNum_k__BackingField = -1;
}


void __fastcall ServantOperationListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantOperationListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_421816B & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationListViewManager_TypeInfo, v1);
    byte_421816B = 1;
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
    sub_B0D97C(servantSortInfo);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall ServantOperationListViewManager__DestroyList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
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
  ServantOperationListViewManager__SetMode_31283656(this, 2, v5);
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
    sub_B0D97C(0LL);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v7);
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
    sub_B0D97C(0LL);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v7);
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
    sub_B0D97C(0LL);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v7);
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
    sub_B0D97C(0LL);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v7);
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
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *v12; // x19
  ServantOperationListViewManager___c_c *v13; // x8
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v16; // x21
  struct ServantOperationListViewManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_421819A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v6);
    sub_B0D8A4(&ServantOperationListViewManager___c_TypeInfo, v7);
    byte_421819A = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  v13 = ServantOperationListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v13 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(
      _9__106_0,
      v16,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    v17 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v17->__9__106_0 = _9__106_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v12 )
    sub_B0D97C(Instance);
  CommonUI__CloseServantFilterSelectMenu(v12, _9__106_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4218197 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4218197 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v4 = this;
  if ( (byte_421819D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_421819D = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(this);
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
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
  ServantOperationListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v4 = this;
  if ( (byte_421819E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_421819E = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(this);
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = itemList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        itemList = v4->fields.itemList;
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

  if ( (byte_4218173 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_3239/*"COMMAND_CODE_EMPTY"*/, v6);
    sub_B0D8A4(&StringLiteral_11681/*"SERVANT_ALL_EMPTY"*/, v7);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4218173 = 1;
  }
  if ( isNotEmpty )
  {
    v10 = &StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v10 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v10 = off_3E6EF70[kind];
  }
  return (System_String_o *)*v10;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationListViewManager__GetEquipMaterialList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  _BOOL8 IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_421818C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    byte_421818C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B0D97C(IsSelect);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v13, 0LL);
        if ( IsSelect && (BYTE4(v13[1].fields.sortValue2) || BYTE6(v13[1].fields.sortValue2)) )
        {
          if ( !v9 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_17;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v9;
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  ServantEntity_o *IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_421818D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    byte_421818D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B0D97C(IsSelect);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = (ServantEntity_o *)ListViewItem__get_IsSelect(v13, 0LL);
        if ( ((unsigned __int8)IsSelect & 1) != 0 )
        {
          IsSelect = (ServantEntity_o *)v13[1].monitor;
          if ( IsSelect )
          {
            IsSelect = (ServantEntity_o *)ServantEntity__get_IsServant(IsSelect, 0LL);
            if ( ((unsigned __int8)IsSelect & 1) != 0
              && (BYTE3(v13[1].fields.sortValue2B) || BYTE4(v13[1].fields.sortValue2B)) )
            {
              if ( !v9 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v9,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_19;
  }
  return (System_Collections_Generic_List_ServantOperationListViewItem__o *)v9;
}


System_Collections_Generic_List_long__o *__fastcall ServantOperationListViewManager__GetSelectedCommandCodeIdList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10
  const MethodInfo *v15; // x1

  if ( (byte_4218189 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    byte_4218189 = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B0D97C(IsSelect);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v13, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v13, v15);
          if ( !v9 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v9,
            IsSelect,
            (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v9;
}


int32_t __fastcall ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
        ServantOperationListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v8; // x22
  ListViewItem_o *v9; // x21
  __int64 v10; // x10
  const MethodInfo *v11; // x1

  v4 = this;
  if ( (byte_421818B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_421818B = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B0D97C(this);
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_14;
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantOperationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v9, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserCommandCodeId(
                                                    (ServantOperationListViewItem_o *)v9,
                                                    v11);
      if ( this == (ServantOperationListViewManager_o *)userCommandCodeId )
        return v9->fields.selectNum;
    }
    itemList = v4->fields.itemList;
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
  ServantOperationListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v8; // x22
  ListViewItem_o *v9; // x21
  __int64 v10; // x10
  const MethodInfo *v11; // x1

  v4 = this;
  if ( (byte_421818A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_421818A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B0D97C(this);
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_14;
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantOperationListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_14;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v9, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_UserSvtId(
                                                    (ServantOperationListViewItem_o *)v9,
                                                    v11);
      if ( this == (ServantOperationListViewManager_o *)userServantId )
        return v9->fields.selectNum;
    }
    itemList = v4->fields.itemList;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t IsSelect; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10
  const MethodInfo *v15; // x1

  if ( (byte_4218188 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    byte_4218188 = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B0D97C(IsSelect);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        IsSelect = ListViewItem__get_IsSelect(v13, 0LL);
        if ( (IsSelect & 1) != 0 )
        {
          IsSelect = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v13, v15);
          if ( !v9 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v9,
            IsSelect,
            (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v9;
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

  if ( (byte_4218170 & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
    byte_4218170 = 1;
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

  if ( (byte_4218178 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4218178 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  _BOOL8 IsSwap; // x0
  System_String_array **v20; // x2
  MethodInfo *v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v27; // x25
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  ServantOperationListViewItem_o *v30; // x24
  const MethodInfo_2FB5EB0 *v31; // x2
  System_Collections_Generic_List_long__o *v32; // x0
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int64_t id; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42181A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v14);
    byte_42181A7 = 1;
  }
  id = 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     *(_QWORD *)&modekind,
                                                     changeIds);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  v27 = 0LL;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v28 = itemList->fields._items->m_Items[v27];
    if ( v28
      && (v29 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
    {
      if ( (ServantOperationListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] == ServantOperationListViewItem_TypeInfo )
        v30 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v27];
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)IsSwap,
               v30,
               this->fields.modeKind,
               v21);
    if ( IsSwap )
    {
      IsSwap = ServantOperationListViewManager__TryGetItemCollectId(
                 (ServantOperationListViewManager_o *)IsSwap,
                 v30,
                 &id,
                 v21);
      if ( IsSwap )
      {
        IsSwap = ServantOperationListViewManager__GetIsSelected(
                   (ServantOperationListViewManager_o *)IsSwap,
                   v30,
                   this->fields.modeKind,
                   v21);
        if ( IsSwap )
        {
          if ( !v18 )
            goto LABEL_23;
          v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v18;
        }
        else
        {
          if ( !v15 )
            goto LABEL_23;
          v31 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v15;
        }
        System_Collections_Generic_List_long___Add(v32, id, v31);
      }
    }
    itemList = this->fields.itemList;
    ++v27;
    if ( !itemList )
      goto LABEL_23;
  }
  if ( !v15 || !v18 )
LABEL_23:
    sub_B0D97C(IsSwap);
  if ( v18->fields._size + v15->fields._size < 1 )
  {
    *changeIds = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)changeIds, 0LL, v20, (System_String_array **)v21, v22, v23, v24, v25);
    *revokeIds = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)revokeIds, 0LL, v48, v49, v50, v51, v52, v53);
    return 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v33;
    sub_B0D840((BattleServantConfConponent_o *)changeIds, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v40;
    sub_B0D840((BattleServantConfConponent_o *)revokeIds, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
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
  __int64 *v14; // x8
  __int64 *v15; // x9

  if ( (byte_4218177 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v6);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v7);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v8);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v11);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v12);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v13);
    byte_4218177 = 1;
  }
  switch ( kind )
  {
    case 0:
      v14 = &StringLiteral_17192/*"button_select_unreg"*/;
      v15 = &StringLiteral_17191/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v14 = &StringLiteral_17178/*"button_alllock_unreg"*/;
      v15 = &StringLiteral_17177/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v14 = &StringLiteral_17176/*"button_allchoice_unreg"*/;
      v15 = &StringLiteral_17175/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v14 = &StringLiteral_17190/*"button_push_unreg"*/;
      v15 = &StringLiteral_17189/*"button_push_reg"*/;
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
  DataManager_o *Instance; // x0

  if ( (byte_4218172 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4218172 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0

  if ( (byte_4218171 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4218171 = 1;
  }
  if ( kind == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_B0D97C(Instance);
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

  if ( (byte_421816C & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationListViewManager_TypeInfo, v1);
    byte_421816C = 1;
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
    sub_B0D97C(servantSortInfo);
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
    sub_B0D97C(this);
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
  __int64 Instance; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v18; // x22
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_o *v21; // x20
  __int128 v22; // q0
  __int64 v23; // x21
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  UnityEngine_Object_o *viewObject; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_421817B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421817B = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_2669E58 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_34:
      sub_B0D97C(Instance);
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( v19
        && (v20 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
      {
        if ( (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantOperationListViewItem_TypeInfo )
          v21 = itemList->fields._items->m_Items[v18];
        else
          v21 = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      if ( entity )
      {
        if ( !v21 )
          goto LABEL_34;
        Instance = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v21, v15);
        if ( !entity )
          goto LABEL_34;
        v22 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v23 = Instance;
        *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v32.fields.fakeValue = v22;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v32;
        if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v31, 0LL) )
        {
          v29 = (System_Int32_array **)entity;
          *(_QWORD *)&v21[1].fields.sortIndex = entity;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1].fields.sortIndex, v29, v16, v24, v25, v26, v27, v28);
        }
      }
      else if ( !v21 )
      {
        goto LABEL_34;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v21, 0, (const MethodInfo *)v16);
      viewObject = (UnityEngine_Object_o *)v21->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v21->fields.viewObject;
        if ( !Instance )
          goto LABEL_34;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v21,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v18;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v17; // x21
  unsigned __int64 v18; // x24
  bool v19; // w28
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ListViewItem_o *v22; // x22
  int64_t UserSvtId; // x0
  __int128 v24; // q0
  ServantOperationListViewManager_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_421817D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v14);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15);
    byte_421817D = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrSvtId < 1 )
    {
      v17 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrSvtId,
                                                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B0D97C(this);
      }
      v17 = this;
    }
    v18 = 0LL;
    v19 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v18 >= itemList->fields._size )
        return;
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v20 = itemList->fields._items->m_Items[v18];
      if ( v20
        && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
          v22 = itemList->fields._items->m_Items[v18];
        else
          v22 = 0LL;
        if ( !v17 )
          goto LABEL_28;
      }
      else
      {
        v22 = 0LL;
        if ( !v17 )
          goto LABEL_28;
      }
      if ( !v22 )
        goto LABEL_41;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(
                    (ServantOperationListViewItem_o *)v22,
                    (const MethodInfo *)usrSvtId);
      v24 = *(_OWORD *)&v17->fields.indicator;
      v25 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.m_CachedPtr;
      *(_OWORD *)&v36.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v35 = v36;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v35,
                                                    0LL);
      if ( v25 == this )
      {
        v22[1].klass = (ListViewItem_c *)v17;
        sub_B0D840((BattleServantConfConponent_o *)&v22[1], (System_Int32_array **)v17, v26, v27, v28, v29, v30, v31);
        if ( v19 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v19 )
      {
LABEL_29:
        if ( !v22 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v22,
          (const MethodInfo *)usrSvtId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v22, v32);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v22, v33);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v22 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v22->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v22->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v22,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v22->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v22, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v18;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  ServantOperationListViewManager_o *v17; // x21
  unsigned __int64 v18; // x24
  bool v19; // w28
  ListViewItem_o *v20; // x8
  __int64 v21; // x11
  ListViewItem_o *v22; // x22
  int64_t UserCommandCodeId; // x0
  __int128 v24; // q0
  ServantOperationListViewManager_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *viewObject; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]

  v8 = this;
  if ( (byte_421817F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v14);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15);
    byte_421817F = 1;
  }
  itemList = v8->fields.itemList;
  if ( itemList )
  {
    if ( usrCmdId < 1 )
    {
      v17 = 0LL;
    }
    else
    {
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrCmdId,
                                                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B0D97C(this);
      }
      v17 = this;
    }
    v18 = 0LL;
    v19 = !isIconSizeChange && isInit;
    while ( 1 )
    {
      if ( (__int64)v18 >= itemList->fields._size )
        return;
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v20 = itemList->fields._items->m_Items[v18];
      if ( v20
        && (v21 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
      {
        if ( (ServantOperationListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == ServantOperationListViewItem_TypeInfo )
          v22 = itemList->fields._items->m_Items[v18];
        else
          v22 = 0LL;
        if ( !v17 )
          goto LABEL_28;
      }
      else
      {
        v22 = 0LL;
        if ( !v17 )
          goto LABEL_28;
      }
      if ( !v22 )
        goto LABEL_41;
      UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(
                            (ServantOperationListViewItem_o *)v22,
                            (const MethodInfo *)usrCmdId);
      v24 = *(_OWORD *)&v17->fields.indicator;
      v25 = (ServantOperationListViewManager_o *)UserCommandCodeId;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v17->fields.m_CachedPtr;
      *(_OWORD *)&v35.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v35;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v34,
                                                    0LL);
      if ( v25 == this )
      {
        *(_QWORD *)&v22[1].fields.sortIndex = v17;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v22[1].fields.sortIndex,
          (System_Int32_array **)v17,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        if ( v19 )
          goto LABEL_29;
        goto LABEL_31;
      }
LABEL_28:
      if ( v19 )
      {
LABEL_29:
        if ( !v22 )
          goto LABEL_41;
        ServantOperationListViewItem__ModifyLockItem(
          (ServantOperationListViewItem_o *)v22,
          (const MethodInfo *)usrCmdId);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v22, v32);
        goto LABEL_32;
      }
LABEL_31:
      if ( !v22 )
        goto LABEL_41;
LABEL_32:
      viewObject = (UnityEngine_Object_o *)v22->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (ServantOperationListViewManager_o *)v22->fields.viewObject;
        if ( !this )
          goto LABEL_41;
        this = (ServantOperationListViewManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, ListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v22,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        if ( isIconSizeChange )
        {
          this = (ServantOperationListViewManager_o *)v22->fields.viewObject;
          if ( !this )
            goto LABEL_41;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v22, v8->fields.seed, 0LL);
        }
      }
      itemList = v8->fields.itemList;
      ++v18;
      if ( !itemList )
        goto LABEL_41;
    }
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockItem_31280328(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-50h]

  v10 = this;
  if ( (byte_421817E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, item);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v14);
    byte_421817E = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_27;
      v15 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v17 = *(_OWORD *)&v15->fields.indicator;
      v18 = (ServantOperationListViewManager_o *)UserSvtId;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v15->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v29;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                    &v28,
                                                    0LL);
      if ( v18 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v15;
        sub_B0D840(
          (BattleServantConfConponent_o *)&item->fields._UserServantEntity_k__BackingField,
          (System_Int32_array **)v15,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
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
    ServantOperationListViewItem__ModifyChoiceItem(item, v25);
    ServantOperationListViewItem__ModifyPushItem(item, v26);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantOperationListViewManager__ModifyLockedCommandCodes(
        ServantOperationListViewManager_o *this,
        UserCommandCodeEntity_array *userCommandCodeEntities,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v6; // x20
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
  UserCommandCodeEntity_o *v19; // x8
  __int128 v20; // q0
  ServantOperationListViewManager_o *v21; // x22
  __int64 v22; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_4218181 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4218181 = 1;
  }
  if ( userCommandCodeEntities && (int)userCommandCodeEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v13 = 0LL;
      v14 = &userCommandCodeEntities->m_Items[v10];
      while ( 1 )
      {
        if ( (__int64)v13 >= itemList->fields._size )
          goto LABEL_28;
        if ( v13 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
          *(_OWORD *)&v30.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v30;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                        &v29,
                                                        0LL);
          if ( v10 >= userCommandCodeEntities->max_length )
          {
            v26 = sub_B0D9A8(this);
            sub_B0D948(v26, 0LL);
          }
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = this;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v20;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                        &v28,
                                                        0LL);
          if ( v21 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_30;
      }
      v22 = *(_QWORD *)&v15[1].fields.sortIndex;
      if ( !v22 )
LABEL_30:
        sub_B0D97C(this);
      v23 = *(_OWORD *)(v22 + 32);
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v30;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v27, 0LL);
      ServantOperationListViewManager__ModifyLockItemComandCode(v6, v24, 1, v11, v25);
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
  ServantOperationListViewManager_o *v6; // x20
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
  UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  ServantOperationListViewManager_o *v21; // x23
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  const MethodInfo *v25; // x5
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+60h] [xbp-70h]

  v6 = this;
  if ( (byte_4218180 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4218180 = 1;
  }
  if ( userServantEntities && (int)userServantEntities->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = isIconSizeChange;
    do
    {
      itemList = v6->fields.itemList;
      if ( !itemList )
        goto LABEL_30;
      v13 = 0LL;
      v14 = &userServantEntities->m_Items[v10];
      while ( 1 )
      {
        if ( (__int64)v13 >= itemList->fields._size )
          goto LABEL_28;
        if ( v13 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v30.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v30;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                        &v29,
                                                        0LL);
          if ( v10 >= userServantEntities->max_length )
          {
            v26 = sub_B0D9A8(this);
            sub_B0D948(v26, 0LL);
          }
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = this;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v20;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                        &v28,
                                                        0LL);
          if ( v21 == this )
            break;
        }
        itemList = v6->fields.itemList;
        ++v13;
        if ( !itemList )
          goto LABEL_30;
      }
      v22 = v15->fields._UserServantEntity_k__BackingField;
      if ( !v22 )
LABEL_30:
        sub_B0D97C(this);
      v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v30;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v27, 0LL);
      ServantOperationListViewManager__ModifyLockItem_31280328(v6, v15, v24, 1, v11, v25);
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
  int64_t SelfUserGame; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int64_t v9; // x20
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x24
  __int64 v12; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v15; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  v3 = this;
  if ( (byte_4218182 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4218182 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    itemList = v3->fields.itemList;
    if ( !itemList )
LABEL_19:
      sub_B0D97C(SelfUserGame);
    v9 = SelfUserGame;
    v10 = 0LL;
    while ( (__int64)v10 < itemList->fields._size )
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
            v15 = *(_QWORD *)(v9 + 120);
            *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v17.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v16 = v17;
            SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
            v11[1].fields.isTerminationSpace = v15 == SelfUserGame;
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
  __int64 Instance; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v18; // x23
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_o *v21; // x21
  __int128 v22; // q0
  __int64 v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_421817C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421817C = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B0D97C(Instance);
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( v19
        && (v20 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
      {
        if ( (ServantOperationListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == ServantOperationListViewItem_TypeInfo )
          v21 = itemList->fields._items->m_Items[v18];
        else
          v21 = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      if ( entity )
      {
        if ( !v21 )
          goto LABEL_35;
        Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v21, v16);
        if ( !entity )
          goto LABEL_35;
        v22 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
        v23 = Instance;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v22;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v33 = v34;
        if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v33, 0LL) )
        {
          v30 = (System_Int32_array **)entity;
          v21[1].klass = (ListViewItem_c *)entity;
          sub_B0D840((BattleServantConfConponent_o *)&v21[1], v30, v24, v25, v26, v27, v28, v29);
        }
      }
      else if ( !v21 )
      {
        goto LABEL_35;
      }
      Instance = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v21, v16);
      if ( !SelfUserGame )
        goto LABEL_35;
      ServantOperationListViewItem__ModifyItem(
        (ServantOperationListViewItem_o *)v21,
        Instance == SelfUserGame->fields.favoriteUserSvtId,
        v31);
      viewObject = (UnityEngine_Object_o *)v21->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)v21->fields.viewObject;
        if ( !Instance )
          goto LABEL_35;
        Instance = (*(__int64 (__fastcall **)(__int64, ListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                     Instance,
                     v21,
                     *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      }
      itemList = this->fields.itemList;
      ++v18;
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

  if ( (byte_4218193 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, selectItem);
    byte_4218193 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B0D97C(v5);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v9);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v7; // w9

  if ( (byte_4218198 & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationListViewManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4218198 = 1;
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
      sub_B0D97C(v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  int32_t kind; // w23
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  int v14; // w9
  ListViewManager_o *v15; // x3
  int32_t v16; // w1

  if ( (byte_4218199 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4218199 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v12 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v10, v11);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v9 )
      sub_B0D97C(v13);
    if ( kind == 1 )
      v14 = 5;
    else
      v14 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v15 = 0LL;
    else
      v15 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v16 = 6;
    else
      v16 = v14;
    CommonUI__OpenServantFilterSelectMenu_17023928(v9, v16, sort, v15, v12, -1, 0LL);
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

  if ( (byte_4218192 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, selectItem);
    byte_4218192 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B0D97C(v5);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v9);
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
  __int64 SelfUserGame; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ServantOperationListViewItem_o **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  int64_t v42; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v44; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x21
  __int64 v47; // x22
  __int64 v48; // x23
  ServantEntity_o *v49; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v51; // w22
  ServantOperationListViewItem_o *v52; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x9
  int32_t v54; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v56; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  System_Object_array *v60; // x24
  int32_t Rarity; // w26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x25
  int32_t v83; // w0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x25
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x20
  System_String_o *v105; // x20
  System_String_o *v106; // x22
  System_String_o *v107; // x23
  CommonUI_o *Instance; // x24
  __int64 v109; // x1
  __int64 v110; // x2
  CommonConfirmDialog_ClickDelegate_o *v111; // x25
  __int64 v112; // x0
  __int64 v113; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4218194 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, selectItem);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&object___TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B0D8A4(&Rarity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B0D8A4(&SoundManager_TypeInfo, v19);
    sub_B0D8A4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v20);
    sub_B0D8A4(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4218194 = 1;
  }
  v26 = sub_B0D974(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, selectItem, method);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_68;
  *(_QWORD *)(v26 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v26 + 24) = selectItem;
  v34 = (ServantOperationListViewItem_o **)(v26 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v26 + 24),
    (System_Int32_array **)selectItem,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v42 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v42 )
  {
LABEL_15:
    ServantOperationListViewManager__PushRequest(this, *v34, v41);
    return;
  }
  if ( !*v34 )
    goto LABEL_68;
  UserServantEntity_k__BackingField = (*v34)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_68;
  v44 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v115.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v114 = v115;
  if ( v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v114, 0LL) )
    goto LABEL_15;
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_68;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             v42,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_68;
  v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v48 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v116.fields.currentCryptoKey = v48;
  *(_QWORD *)&v116.fields.fakeValue = v47;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v116, 0LL);
  if ( !v46 )
    goto LABEL_68;
  v49 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v46,
                             SelfUserGame,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.svtId, 0LL);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_68;
  SelfUserGame = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v51,
                   SelfUserGame,
                   0LL);
  v52 = *v34;
  if ( !*v34 )
    goto LABEL_68;
  v53 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v52->fields._UserServantEntity_k__BackingField;
  if ( !v53 )
    goto LABEL_68;
  v54 = SelfUserGame;
  SvtId_k__BackingField = v52->fields._SvtId_k__BackingField;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId_k__BackingField,
                                 v56,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v60 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v60 )
LABEL_68:
    sub_B0D97C(SelfUserGame);
  v68 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( !v60->max_length )
    goto LABEL_69;
  v60->m_Items[0] = (Il2CppObject *)v68;
  sub_B0D840((BattleServantConfConponent_o *)v60->m_Items, v68, v62, v63, v64, v65, v66, v67);
  if ( !v49 )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName(v49, 0LL);
  v75 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v60->max_length <= 1 )
    goto LABEL_69;
  v60->m_Items[1] = (Il2CppObject *)v75;
  sub_B0D840((BattleServantConfConponent_o *)&v60->m_Items[1], v75, v69, v70, v71, v72, v73, v74);
  SelfUserGame = (__int64)ServantEntity__getName(v49, v54, -1, 0LL);
  v82 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v60->max_length <= 2 )
    goto LABEL_69;
  v60->m_Items[2] = (Il2CppObject *)v82;
  sub_B0D840((BattleServantConfConponent_o *)&v60->m_Items[2], v82, v76, v77, v78, v79, v80, v81);
  if ( !*v34 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v34)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_68;
  v83 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)Rarity__getRarityType(v83, 0LL);
  v90 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v60->max_length <= 3 )
    goto LABEL_69;
  v60->m_Items[3] = (Il2CppObject *)v90;
  sub_B0D840((BattleServantConfConponent_o *)&v60->m_Items[3], v90, v84, v85, v86, v87, v88, v89);
  if ( !*v34 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v34)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v97 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v60->max_length <= 4 )
    goto LABEL_69;
  v60->m_Items[4] = (Il2CppObject *)v97;
  sub_B0D840((BattleServantConfConponent_o *)&v60->m_Items[4], v97, v91, v92, v93, v94, v95, v96);
  if ( !*v34 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v34)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)SelfUserGame, ServantLimitCountSealAfter, -1, 0LL);
  v104 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B0D964(SelfUserGame, v60->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_70:
      v113 = sub_B0D99C(SelfUserGame);
      sub_B0D948(v113, 0LL);
    }
  }
  if ( v60->max_length <= 5 )
  {
LABEL_69:
    v112 = sub_B0D9A8(SelfUserGame);
    sub_B0D948(v112, 0LL);
  }
  v60->m_Items[5] = (Il2CppObject *)v104;
  sub_B0D840((BattleServantConfConponent_o *)&v60->m_Items[5], v104, v98, v99, v100, v101, v102, v103);
  v105 = System_String__Format_43928628(v59, v60, 0LL);
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v111 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v109, v110);
  CommonConfirmDialog_ClickDelegate___ctor(
    v111,
    (Il2CppObject *)v26,
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
  CommonUI__OpenConfirmDialog_17016196(
    Instance,
    v58,
    v105,
    v106,
    v107,
    v111,
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v12; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_42181A0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42181A0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v12 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v12 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v12 = 1;
LABEL_12:
    this->fields.scaleType = v12;
    this->fields.seed = smallSizeSeed;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
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
    sub_B0D97C(ScaleKindSpriteName);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v15);
  ServantOperationListViewManager__SetMode_31283656(this, 2, v16);
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
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *v11; // x8
  System_String_o *v12; // x22
  struct ServantOperationManager_o *v13; // x8
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  struct ServantOperationManager_o *v19; // x8
  struct ServantOperationManager_o *v20; // x8
  UILabel_o *v21; // x21
  struct ServantOperationManager_o *v22; // x8
  System_String_o *v23; // x22
  struct ServantOperationManager_o *v24; // x8
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x3
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_421818F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, selectItem);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v7);
    byte_421818F = 1;
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
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
      v11 = v4->fields.parentManager;
      if ( v11 )
      {
        v12 = (System_String_o *)this;
        TotalSum_k__BackingField = v11->fields._TotalSum_k__BackingField;
        this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
        v13 = v4->fields.parentManager;
        if ( v13 )
        {
          v14 = (Il2CppObject *)this;
          SelectMax_k__BackingField = v13->fields._SelectMax_k__BackingField;
          v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
          this = (ServantOperationListViewManager_o *)System_String__Format_43845440(v12, v14, v15, 0LL);
          if ( selectDoneLabel )
          {
            UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
            ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 1, selectItem, v16);
            this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
            if ( this )
            {
              ServantOperationManager__numberAdjustment(
                (ServantOperationManager_o *)this,
                selectItem->fields.selectNum,
                v17);
              ListViewItem__set_IsSelect((ListViewItem_o *)selectItem, 0, 0LL);
LABEL_32:
              ServantOperationListViewManager__RefrashListDisp(v4, v18);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  if ( ServantOperationListViewManager__IsSelectEnable(v4, selectItem, 0, 0, v8) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v19 = v4->fields.parentManager;
    if ( v19 )
    {
      selectItem->fields.selectNum = v19->fields._TotalSum_k__BackingField;
      v20 = v4->fields.parentManager;
      ++v4->fields.selectSum;
      if ( v20 )
      {
        ++v20->fields._TotalSum_k__BackingField;
        v21 = v4->fields.selectDoneLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantOperationListViewManager_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12507/*"SUM_INFO"*/,
                                                      0LL);
        v22 = v4->fields.parentManager;
        if ( v22 )
        {
          v23 = (System_String_o *)this;
          TotalSum_k__BackingField = v22->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
          v24 = v4->fields.parentManager;
          if ( v24 )
          {
            v25 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v24->fields._SelectMax_k__BackingField;
            v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
            this = (ServantOperationListViewManager_o *)System_String__Format_43845440(v23, v25, v26, 0LL);
            if ( v21 )
            {
              UILabel__set_text(v21, (System_String_o *)this, 0LL);
              ServantOperationListViewManager__ChangeSellEnableRestCount(v4, 0, selectItem, v27);
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_37:
    sub_B0D97C(this);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_421819C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421819C = 1;
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
      sub_B0D97C(v3);
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
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  int v14; // w8
  int32_t v15; // w1

  if ( (byte_4218196 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4218196 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v10, v11);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B0D97C(v13);
    if ( kind == 1 )
      v14 = 2;
    else
      v14 = 1;
    if ( kind == 2 )
      v15 = 6;
    else
      v15 = v14;
    CommonUI__OpenServantSortSelectMenu(v9, v15, sort, 1, v12, 0LL);
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
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42181A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndClickTabChoice__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42181A3 = 1;
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
      v8 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v6, v7);
      System_Action_bool____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42181A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndClickTabLock__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42181A2 = 1;
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
      v8 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v6, v7);
      System_Action_bool____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_bool__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42181A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndClickTabPush__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42181A4 = 1;
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
    v8 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v6, v7);
    System_Action_bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabPush__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v8, v9);
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
  System_Action_bool__o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42181A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndClickTabStatus__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42181A1 = 1;
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
    v9 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v7, v8);
    System_Action_bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v9, v10);
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
  UIScrollView_o *v7; // x0

  if ( (byte_4218187 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218187 = 1;
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
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v7 = this->fields.scrollView) == 0LL) )
        {
          sub_B0D97C(v7);
        }
        UIScrollView__UpdatePosition(v7, 0LL);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  DataManager_o *v15; // x23
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v23; // x8
  int64_t v24; // x0
  __int128 v25; // q0
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v30; // q0
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w21
  bool IsLock; // w23
  char v36; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  __int64 v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4218195 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4218195 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  v15 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserServantEntity_k__BackingField )
    goto LABEL_21;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  if ( !v16 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_fields = &UserServantEntity_k__BackingField->fields;
  v23 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v25 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.imageLimitCount,
          0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v31 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    v44,
    v43,
    v32,
    v33,
    v34,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v46,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != v48,
    0LL);
}


void __fastcall ServantOperationListViewManager__RefrashListDisp(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *parentManager; // x0
  const MethodInfo *v5; // x1
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21

  if ( (byte_4218179 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v3);
    byte_4218179 = 1;
  }
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_12;
  ServantOperationManager__RefrashListDisp((ServantOperationManager_o *)parentManager, method);
  parentManager = ServantOperationListViewManager__get_ObjectList(this, v5);
  if ( !parentManager )
    goto LABEL_12;
  v6 = *((_DWORD *)parentManager + 6);
  v7 = parentManager;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v6 <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      parentManager = *(void **)(*((_QWORD *)v7 + 2) + 8LL * (int)v8 + 32);
      if ( !parentManager )
        break;
      (*(void (__fastcall **)(void *, bool, _QWORD))(*(_QWORD *)parentManager + 456LL))(
        parentManager,
        this->fields.isInput,
        *(_QWORD *)(*(_QWORD *)parentManager + 464LL));
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_12:
    sub_B0D97C(parentManager);
  }
}


void __fastcall ServantOperationListViewManager__ReleaseAll(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v6; // x21
  ListViewItem_o *v7; // x20
  __int64 v8; // x10
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_421818E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v4);
    byte_421818E = 1;
  }
  itemList = v2->fields.itemList;
  v2->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_12:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v7 = itemList->fields._items->m_Items[v6];
    if ( v7 )
    {
      v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewItem_TypeInfo )
      {
        ListViewItem__set_IsSelect(v7, 0, 0LL);
        ServantOperationListViewManager__ChangeSellEnableRestCount(v2, 1, (ServantOperationListViewItem_o *)v7, v9);
        itemList = v2->fields.itemList;
        ++v6;
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4218186 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantOperationListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4218186 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantOperationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  struct ServantOperationManager_o *parentManager; // x8
  UILabel_o *selectDoneLabel; // x21
  struct ServantOperationManager_o *v10; // x8
  System_String_o *v11; // x22
  struct ServantOperationManager_o *v12; // x8
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4218185 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v6);
    byte_4218185 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)ServantOperationListViewItem__get_IsCanNotSelect(item, v7);
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
                                                      (System_String_o *)StringLiteral_12507/*"SUM_INFO"*/,
                                                      0LL);
        v10 = v4->fields.parentManager;
        if ( v10 )
        {
          v11 = (System_String_o *)this;
          TotalSum_k__BackingField = v10->fields._TotalSum_k__BackingField;
          this = (ServantOperationListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
          v12 = v4->fields.parentManager;
          if ( v12 )
          {
            v13 = (Il2CppObject *)this;
            SelectMax_k__BackingField = v12->fields._SelectMax_k__BackingField;
            v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
            this = (ServantOperationListViewManager_o *)System_String__Format_43845440(v11, v13, v14, 0LL);
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
      sub_B0D97C(this);
    }
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
  struct ServantOperationManager_o *v15; // x8
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42181AC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v5);
    byte_42181AC = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_21;
  v14 = v12;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v12 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  v15 = this->fields.parentManager;
  if ( !v15
    || (v16 = (Il2CppObject *)v12,
        SelectMax_k__BackingField = v15->fields._SelectMax_k__BackingField,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField),
        v12 = System_String__Format_43845440(v14, v16, v17, 0LL),
        !selectDoneLabel) )
  {
LABEL_21:
    sub_B0D97C(v12);
  }
  UILabel__set_text(selectDoneLabel, v12, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v18);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_3204CE0;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v11; // x21
  __int64 v12; // x9
  UnityEngine_Object_o *viewObject; // x19
  const MethodInfo *v14; // x1
  __int64 v15; // x10
  __int64 v16; // x0

  v6 = this;
  if ( (byte_42181AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewObject_TypeInfo, v9);
    byte_42181AA = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_17;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
  {
LABEL_19:
    ServantOperationListViewManager__SetIsItemDragSelect(
      v6,
      (ServantOperationListViewItem_o *)v11,
      isDragSelect,
      method);
    sub_B0D97C(v16);
  }
  v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantOperationListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B0DC70(v11);
    goto LABEL_19;
  }
  ServantOperationListViewManager__SetIsItemDragSelect(v6, (ServantOperationListViewItem_o *)v11, isDragSelect, method);
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    this = (ServantOperationListViewManager_o *)v11->fields.viewObject;
    if ( this )
    {
      v15 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantOperationListViewObject_c *)this->klass->_2.typeHierarchy[v15 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp((ServantOperationListViewObject_o *)this, v14);
        return;
      }
    }
LABEL_17:
    sub_B0D97C(this);
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

  v6 = this;
  if ( (byte_42181AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v9);
    byte_42181AB = 1;
  }
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_3204CE0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)itemSortList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      itemSortList = v6->fields.itemSortList;
    }
    while ( itemSortList );
LABEL_22:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_421819B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_421819B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
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
    sub_B0D97C(this);
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
          sub_B0D97C(this);
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
  v6 = this;
  if ( (byte_42181A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewObject_TypeInfo, v9);
    byte_42181A9 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_28:
    sub_B0D97C(this);
  if ( v5 <= end )
  {
    v11 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_28;
      if ( itemSortList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
        this = (ServantOperationListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
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
    sub_B0DC70(v13);
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
  ListViewSort_o *v13; // x0
  int v14; // w9

  SortInfo = ServantOperationListViewManager__GetSortInfo(this, kind, method);
  this->fields.sort = SortInfo;
  p_sort = &this->fields.sort;
  sub_B0D840((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)SortInfo, v7, v8, v9, v10, v11, v12);
  if ( !*p_sort )
    goto LABEL_6;
  v14 = kind == 1;
  if ( kind == 2 )
    v14 = 3;
  (*p_sort)->fields.listViewKind = v14;
  v13 = *p_sort;
  if ( !*p_sort )
LABEL_6:
    sub_B0D97C(v13);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onSelectServant,
    (System_Int32_array **)onSelectServant,
    (System_String_array **)onSelectServant,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_31283656(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_31283656(
        ServantOperationListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t ObjectSum; // w0
  int32_t v8; // w8
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v13; // x22
  char v14; // w21
  ListViewItem_o *v15; // x8
  __int64 v16; // x11
  ServantOperationListViewItem_o *v17; // x1
  int v18; // w8
  int32_t v19; // w1

  if ( (byte_4218184 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4218184 = 1;
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
      sub_B0D97C(v9);
    v13 = 0LL;
    v14 = 0;
    while ( (__int64)v13 < itemList->fields._size )
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = itemList->fields._items->m_Items[v13];
      if ( v15
        && (v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
      {
        if ( (ServantOperationListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == ServantOperationListViewItem_TypeInfo )
          v17 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v13];
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      v9 = ServantOperationListViewManager__SetDispObjectsByListViewItem(this, v17, v11);
      itemList = this->fields.itemList;
      v14 |= v9;
      ++v13;
      if ( !itemList )
        goto LABEL_16;
    }
    if ( (v14 & 1) != 0 )
      ServantOperationListViewManager__RefrashListDisp(this, v10);
    if ( initMode == 2 )
      v18 = 3;
    else
      v18 = 0;
    if ( initMode == 1 )
      v19 = 2;
    else
      v19 = v18;
    ServantOperationListViewManager__RequestListObject(this, v19, v11);
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
  if ( (byte_4218183 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewObject_TypeInfo, obj);
    byte_4218183 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  if ( v5->fields.initMode == 2 )
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
    sub_B0D840(
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
    sub_B0D97C(sort);
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
  DataManager_o *Instance; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  signed int max_length; // w8
  __int64 v15; // x22
  UserServantEntity_o *v16; // x23
  __int128 v17; // q0
  System_Int64_array *v18; // x24
  System_Int64_array *v19; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t favoriteUserSvtId; // x20
  DataManager_o *v23; // x27
  ServantOperationListViewItem_o *v24; // x26
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x3
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-80h]
  System_Int64_array *equipIdList; // [xsp+50h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4218174 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4218174 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
        {
          v28 = sub_B0D9A8(Instance);
          sub_B0D948(v28, 0LL);
        }
        v16 = userServantEntities->m_Items[v15];
        if ( !v16 )
          break;
        v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
        v19 = equipIdList;
        v18 = svtIdList;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v30.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v29 = v30;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v29, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v23 = Instance;
        v24 = (ServantOperationListViewItem_o *)sub_B0D974(ServantOperationListViewItem_TypeInfo, v20, v21);
        ServantOperationListViewItem___ctor(v24, v15, v16, v18, v19, v23 == (DataManager_o *)favoriteUserSvtId, v25);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v24, v26);
        max_length = userServantEntities->max_length;
        if ( (int)++v15 >= max_length )
          return v15;
      }
LABEL_22:
      sub_B0D97C(Instance);
    }
  }
  LODWORD(v15) = 0;
  return v15;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_31274740(
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
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v13; // x22
  __int64 v14; // x21
  UserCommandCodeEntity_o *v15; // x23
  __int128 v16; // q0
  bool v17; // w25
  __int64 v18; // x1
  __int64 v19; // x2
  ServantOperationListViewItem_o *v20; // x24
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x3
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]

  if ( (byte_4218175 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userCommandCodeEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4218175 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                                  (UserServantCommandCodeMaster_o *)Instance,
                                  0LL);
    max_length = userCommandCodeEntities->max_length;
    if ( max_length >= 1 )
    {
      v13 = (System_Collections_Generic_List_long__o *)Instance;
      v14 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
        {
          v24 = sub_B0D9A8(Instance);
          sub_B0D948(v24, 0LL);
        }
        v15 = userCommandCodeEntities->m_Items[v14];
        if ( !v15 )
          break;
        v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v26.fields.fakeValue = v16;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v25 = v26;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v25, 0LL);
        if ( !v13 )
          break;
        v17 = System_Collections_Generic_List_long___Contains(
                v13,
                (int64_t)Instance,
                (const MethodInfo_2FB6304 *)Method_System_Collections_Generic_List_long__Contains__);
        v20 = (ServantOperationListViewItem_o *)sub_B0D974(ServantOperationListViewItem_TypeInfo, v18, v19);
        ServantOperationListViewItem___ctor_31259884(v20, v14, v15, v17, v21);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v20, v22);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v14 >= max_length )
          return v14;
      }
LABEL_19:
      sub_B0D97C(Instance);
    }
  }
  LODWORD(v14) = 0;
  return v14;
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
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  struct ServantOperationManager_o *parentManager; // x20
  System_String_o *v24; // x1

  if ( (byte_421819F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_421819F = 1;
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
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_39;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_39;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
        v16 = this->fields.sort;
        if ( v16 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v16->fields.isAscendingOrder;
            v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
            v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
LABEL_31:
            if ( isAscendingOrder )
              v22 = v18;
            else
              v22 = v19;
            UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
        v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
        v21 = this->fields.sort;
        if ( v21 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v21->fields.isAscendingOrder;
            v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
            v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_B0D97C(sort);
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
  UILabel_o *v16; // x20
  ServantOperationListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x9
  ServantOperationListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4218176 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind);
    sub_B0D8A4(&ShopRootComponent_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_4218176 = 1;
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
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, this->fields.modeKind != 0, 0LL),
        v16 = this->fields.statusLabel,
        statusLabel = (UnityEngine_Component_o *)ServantOperationListViewManager__GetStatusText(
                                                   v17,
                                                   this->fields.modeKind,
                                                   v18),
        !v16)
    || (UILabel__set_text(v16, (System_String_o *)statusLabel, 0LL),
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].klass) == 0LL )
  {
    sub_B0D97C(statusLabel);
  }
  v19 = *(&ShopRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&statusLabel->klass->_2.bitflags2 + 1) >= (unsigned int)v19
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[v19 - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    sub_B0DC70(statusLabel);
    ServantOperationListViewManager__SetFilterButtonImage(v20, v21);
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
    sub_B0D97C(this);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  const MethodInfo *v15; // x4
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-28h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42181A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B0D8A4(&Method_ServantOperationListViewManager_EndStatusSync__, v13);
    byte_42181A6 = 1;
  }
  changeIds = 0LL;
  revokeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_B0D840(
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
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
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
                                                                              v19,
                                                                              (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v19,
                                                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  ServantOperationListViewManager_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v12; // x24
  ListViewItem_o *v13; // x23
  __int64 v14; // x10
  UserServantEntity_o *klass; // x0
  int32_t v16; // w26
  int32_t v17; // w26
  int32_t v18; // w23
  int32_t v19; // w26
  int32_t v20; // w26

  v8 = this;
  if ( (byte_421817A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(&ServantOperationListViewItem_TypeInfo, v10);
    byte_421817A = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_B0D97C(this);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( !v13 )
      goto LABEL_22;
    v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (ServantOperationListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_22;
    }
    this = (ServantOperationListViewManager_o *)ListViewItem__get_IsSelect(v13, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      klass = (UserServantEntity_o *)v13[1].klass;
      if ( klass )
      {
        v16 = *qp;
        *qp = UserServantEntity__getSellQp(klass, 0LL) + v16;
        this = (ServantOperationListViewManager_o *)v13[1].klass;
        if ( !this )
          goto LABEL_22;
        v17 = *mana;
        *mana = UserServantEntity__getSellMana((UserServantEntity_o *)this, 0LL) + v17;
        this = (ServantOperationListViewManager_o *)v13[1].klass;
        if ( !this )
          goto LABEL_22;
        v18 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserServantEntity__getSellRarePri((UserServantEntity_o *)this, 0LL);
LABEL_20:
        *rarePri = (_DWORD)this + v18;
        goto LABEL_21;
      }
      this = *(ServantOperationListViewManager_o **)&v13[1].fields.sortIndex;
      if ( this )
      {
        v19 = *qp;
        *qp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL) + v19;
        this = *(ServantOperationListViewManager_o **)&v13[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v20 = *mana;
        *mana = UserCommandCodeEntity__GetSellMana((UserCommandCodeEntity_o *)this, 0LL) + v20;
        this = *(ServantOperationListViewManager_o **)&v13[1].fields.sortIndex;
        if ( !this )
          goto LABEL_22;
        v18 = *rarePri;
        this = (ServantOperationListViewManager_o *)UserCommandCodeEntity__GetSellRarePri(
                                                      (UserCommandCodeEntity_o *)this,
                                                      0LL);
        goto LABEL_20;
      }
    }
LABEL_21:
    itemList = v8->fields.itemList;
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

  if ( (byte_42181A5 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  item);
    byte_42181A5 = 1;
  }
  if ( !item )
    sub_B0D97C(this);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  __int64 v7; // x21
  int size; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x22
  __int64 v12; // x8

  v4 = this;
  if ( (byte_4218190 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum);
    this = (ServantOperationListViewManager_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                  v5);
    byte_4218190 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B0D97C(this);
  v7 = 4LL;
  while ( 1 )
  {
    size = itemList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = *((_QWORD *)&itemList->fields._items->obj.klass + v7);
    if ( !v10 )
      goto LABEL_16;
    if ( *(_DWORD *)(v10 + 16) > selectNum )
    {
      v11 = v4->fields.itemList;
      if ( !v11 )
        goto LABEL_16;
      if ( v11->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v12 = *((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !v12 )
        goto LABEL_16;
      --*(_DWORD *)(v12 + 16);
    }
    itemList = v4->fields.itemList;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21

  if ( (byte_421816E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421816E = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B0D97C(Component_srcLineSprite);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v10;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_23;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantOperationListViewObject__GetItem(
                                                              (ServantOperationListViewObject_o *)Component_srcLineSprite,
                                                              v17);
      if ( Component_srcLineSprite )
      {
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23719204(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v10 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v18,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantOperationListViewObject__o *__fastcall ServantOperationListViewManager__get_ObjectList(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21

  if ( (byte_421816D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421816D = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B0D97C(Component_srcLineSprite);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v10;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v16 = this->fields.objectList;
      if ( !v16 )
        goto LABEL_19;
      if ( v14 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v10 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v13;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ServantOperationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_421223D & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationListViewManager___c_TypeInfo, v1);
    byte_421223D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantOperationListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_421223E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v6);
    byte_421223E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}