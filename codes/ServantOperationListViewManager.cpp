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
  ListViewSort_o *v16; // x20
  struct ServantOperationListViewManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  ListViewSort_o *v27; // x20
  struct ServantOperationListViewManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x19
  ListViewSort_o *v36; // x20
  struct ServantOperationListViewManager_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B2BE & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1172/*"4"*/, v9);
    sub_B2C35C(&StringLiteral_12720/*"ServantOperation"*/, v10);
    byte_418B2BE = 1;
  }
  v44 = 0;
  ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_12720/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12720/*"ServantOperation"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v12, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v44 = 1;
  v14 = System_Int32__ToString((int32_t)&v44, 0LL);
  v15 = System_String__Concat_44305532(SORT_SAVE_KEY, v14, 0LL);
  v16 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v16, v15, 3, 0, 0LL);
  v17 = ServantOperationListViewManager_TypeInfo->static_fields;
  v17->servantSortInfo = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v17->servantSortInfo,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v44 = 2;
  v25 = System_Int32__ToString((int32_t)&v44, 0LL);
  v26 = System_String__Concat_44305532(v24, v25, 0LL);
  v27 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v27, v26, 3, 0, 0LL);
  v28 = ServantOperationListViewManager_TypeInfo->static_fields;
  v28->servantEquipSortInfo = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v28->servantEquipSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = System_String__Concat_44305532(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1172/*"4"*/,
          0LL);
  v36 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v36, v35, 2, 0, 0LL);
  v37 = ServantOperationListViewManager_TypeInfo->static_fields;
  v37->commandCodeSortInfo = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v37->commandCodeSortInfo,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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

  if ( (byte_418B2A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantOperationListViewItem__Invoke__, item);
    byte_418B2A0 = 1;
  }
  onSelectServant = this->fields.onSelectServant;
  if ( onSelectServant )
  {
    this->fields.onSelectServant = 0LL;
    sub_B2C2F8(
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
      (const MethodInfo_24BBAEC *)Method_System_Action_ServantOperationListViewItem__Invoke__);
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

  if ( (byte_418B2B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, result);
    byte_418B2B7 = 1;
  }
  onRequestEnd = this->fields.onRequestEnd;
  if ( onRequestEnd )
  {
    this->fields.onRequestEnd = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onRequestEnd,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onRequestEnd, result, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
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
  if ( (byte_418B2BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v5);
    byte_418B2BD = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemSortList->fields._items->m_Items[index];
  if ( !v7
    || (v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&index);
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
    sub_B2C434(this, isPlus);
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

  if ( (byte_418B27E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    byte_418B27E = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_31593112(
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
    sub_B2C434(v9, v10);
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
  __int64 v10; // x1

  v4 = this;
  if ( (byte_418B2BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v5);
    byte_418B2BC = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&index);
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = (ServantOperationListViewItem_o *)itemSortList->fields._items->m_Items[index];
  if ( !v7 )
  {
    ServantOperationListViewManager__SetIsItemSelect(v4, 0LL, method);
    sub_B2C434(v9, v10);
  }
  v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (ServantOperationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B2C728(v7);
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

  if ( (byte_418B27A & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, v1);
    byte_418B27A = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
    sub_B2C434(0LL, v3);
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
  ServantOperationListViewManager__SetMode_31602028(this, 2, v5);
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
    sub_B2C434(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v7);
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
    sub_B2C434(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v7);
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
    sub_B2C434(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, (const MethodInfo *)isRequest);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v7);
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
    sub_B2C434(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, v4);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v7);
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
  CommonUI_o *v11; // x19
  ServantOperationListViewManager___c_c *v12; // x8
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__106_0; // x20
  Il2CppObject *v15; // x21
  struct ServantOperationListViewManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_418B2A9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v6);
    sub_B2C35C(&ServantOperationListViewManager___c_TypeInfo, v7);
    byte_418B2A9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  v12 = ServantOperationListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationListViewManager___c_TypeInfo);
    v12 = ServantOperationListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__106_0 = static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v15,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    v16 = ServantOperationListViewManager___c_TypeInfo->static_fields;
    v16->__9__106_0 = _9__106_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v11 )
    sub_B2C434(Instance, v10);
  CommonUI__CloseServantFilterSelectMenu(v11, _9__106_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__EndSelectSortKind(
        ServantOperationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418B2A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418B2A6 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  if ( (byte_418B2AC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B2AC = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&svtId);
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418B2AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B2AD = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418B282 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_3227/*"COMMAND_CODE_EMPTY"*/, v6);
    sub_B2C35C(&StringLiteral_11654/*"SERVANT_ALL_EMPTY"*/, v7);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418B282 = 1;
  }
  if ( isNotEmpty )
  {
    v10 = &StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v10 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v10 = off_3DF1F10[kind];
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  _BOOL8 IsSelect; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_418B29B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v7);
    byte_418B29B = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_17:
    sub_B2C434(IsSelect, v10);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          if ( !v8 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_17;
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
LABEL_10:
    sub_B2C434(this, item);
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
    sub_B2C434(this, item);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  ServantEntity_o *IsSelect; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_418B29C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v7);
    byte_418B29C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B2C434(IsSelect, v10);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
              if ( !v8 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v8,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__);
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
  int64_t IsSelect; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_418B298 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v7);
    byte_418B298 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B2C434(IsSelect, v10);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          IsSelect = ServantOperationListViewItem__get_UserCommandCodeId((ServantOperationListViewItem_o *)v13, v10);
          if ( !v8 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v8,
            IsSelect,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
  return v8;
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

  v4 = this;
  if ( (byte_418B29A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B29A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B2C434(this, userCommandCodeId);
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                                    (const MethodInfo *)userCommandCodeId);
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

  v4 = this;
  if ( (byte_418B299 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B299 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B2C434(this, userServantId);
  v8 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v8 >= itemList->fields._size )
      return -1;
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                                    (const MethodInfo *)userServantId);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  int64_t IsSelect; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  unsigned __int64 v12; // x22
  ListViewItem_o *v13; // x21
  __int64 v14; // x10

  if ( (byte_418B297 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v7);
    byte_418B297 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B2C434(IsSelect, v10);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          IsSelect = ServantOperationListViewItem__get_UserSvtId((ServantOperationListViewItem_o *)v13, v10);
          if ( !v8 )
            goto LABEL_15;
          System_Collections_Generic_List_long___Add(
            v8,
            IsSelect,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
        itemList = this->fields.itemList;
        ++v12;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
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
  ListViewSort_o **p_commandCodeSortInfo; // x8
  ServantOperationListViewManager_c *v6; // x0
  ServantOperationListViewManager_c *v7; // x0

  if ( (byte_418B27F & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
    byte_418B27F = 1;
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

  if ( (byte_418B287 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418B287 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
  _BOOL8 IsSwap; // x0
  int64_t v18; // x1
  System_String_array **v19; // x2
  MethodInfo *v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  ServantOperationListViewItem_o *v29; // x24
  const MethodInfo_2F6CFA8 *v30; // x2
  System_Collections_Generic_List_long__o *v31; // x0
  System_Int64_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int64_t id; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418B2B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v14);
    byte_418B2B6 = 1;
  }
  id = 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = itemList->fields._items->m_Items[v26];
    if ( v27
      && (v28 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
    {
      if ( (ServantOperationListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == ServantOperationListViewItem_TypeInfo )
        v29 = (ServantOperationListViewItem_o *)itemList->fields._items->m_Items[v26];
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)IsSwap,
               v29,
               this->fields.modeKind,
               v20);
    if ( IsSwap )
    {
      IsSwap = ServantOperationListViewManager__TryGetItemCollectId(
                 (ServantOperationListViewManager_o *)IsSwap,
                 v29,
                 &id,
                 v20);
      if ( IsSwap )
      {
        IsSwap = ServantOperationListViewManager__GetIsSelected(
                   (ServantOperationListViewManager_o *)IsSwap,
                   v29,
                   this->fields.modeKind,
                   v20);
        v18 = id;
        if ( IsSwap )
        {
          if ( !v16 )
            goto LABEL_23;
          v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v31 = v16;
        }
        else
        {
          if ( !v15 )
            goto LABEL_23;
          v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v31 = v15;
        }
        System_Collections_Generic_List_long___Add(v31, id, v30);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_23;
  }
  if ( !v15 || !v16 )
LABEL_23:
    sub_B2C434(IsSwap, v18);
  if ( v16->fields._size + v15->fields._size < 1 )
  {
    *changeIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)changeIds, 0LL, v19, (System_String_array **)v20, v21, v22, v23, v24);
    *revokeIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)revokeIds, 0LL, v47, v48, v49, v50, v51, v52);
    return 0;
  }
  else
  {
    v32 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v32;
    sub_B2C2F8((BattleServantConfConponent_o *)changeIds, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v39 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v39;
    sub_B2C2F8((BattleServantConfConponent_o *)revokeIds, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
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

  if ( (byte_418B286 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v6);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v7);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v8);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v11);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v13);
    byte_418B286 = 1;
  }
  switch ( kind )
  {
    case 0:
      v14 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
      v15 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v14 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
      v15 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v14 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
      v15 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v14 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
      v15 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
LABEL_9:
      if ( isSelected )
        v14 = v15;
      break;
    default:
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418B281 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B281 = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  __int64 v6; // x1

  if ( (byte_418B280 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B280 = 1;
  }
  if ( kind == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_B2C434(Instance, v6);
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

  if ( (byte_418B27B & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, v1);
    byte_418B27B = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
    sub_B2C434(this, item);
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

  if ( (byte_418B28A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418B28A = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_34:
      sub_B2C434(Instance, v15);
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL) )
        {
          v29 = (System_Int32_array **)entity;
          *(_QWORD *)&v21[1].fields.sortIndex = entity;
          sub_B2C2F8((BattleServantConfConponent_o *)&v21[1].fields.sortIndex, v29, v16, v24, v25, v26, v27, v28);
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
  if ( (byte_418B28C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v14);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15);
    byte_418B28C = 1;
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
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrSvtId,
                                                          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B2C434(this, usrSvtId);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                    &v35,
                                                    0LL);
      if ( v25 == this )
      {
        v22[1].klass = (ListViewItem_c *)v17;
        sub_B2C2F8((BattleServantConfConponent_o *)&v22[1], (System_Int32_array **)v17, v26, v27, v28, v29, v30, v31);
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
  if ( (byte_418B28E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v14);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15);
    byte_418B28E = 1;
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
      this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                          usrCmdId,
                                                          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v8->fields.itemList) == 0LL) )
      {
LABEL_41:
        sub_B2C434(this, usrCmdId);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                    &v34,
                                                    0LL);
      if ( v25 == this )
      {
        *(_QWORD *)&v22[1].fields.sortIndex = v17;
        sub_B2C2F8(
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


void __fastcall ServantOperationListViewManager__ModifyLockItem_31598700(
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
  if ( (byte_418B28D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, item);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v14);
    byte_418B28D = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_27;
    this = (ServantOperationListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                    &v28,
                                                    0LL);
      if ( v18 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v15;
        sub_B2C2F8(
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
    sub_B2C434(this, item);
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
  if ( (byte_418B290 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v9);
    byte_418B290 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                        &v29,
                                                        0LL);
          if ( v10 >= userCommandCodeEntities->max_length )
          {
            v26 = sub_B2C460(this);
            sub_B2C400(v26, 0LL);
          }
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = this;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v20;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
        sub_B2C434(this, userCommandCodeEntities);
      v23 = *(_OWORD *)(v22 + 32);
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v30;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v27, 0LL);
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
  if ( (byte_418B28F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v9);
    byte_418B28F = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                        &v29,
                                                        0LL);
          if ( v10 >= userServantEntities->max_length )
          {
            v26 = sub_B2C460(this);
            sub_B2C400(v26, 0LL);
          }
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_30;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = this;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v20;
          this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
        sub_B2C434(this, userServantEntities);
      v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v30;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v27, 0LL);
      ServantOperationListViewManager__ModifyLockItem_31598700(v6, v15, v24, 1, v11, v25);
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
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int64_t v10; // x20
  unsigned __int64 v11; // x21
  ListViewItem_o *v12; // x24
  __int64 v13; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  __int64 v16; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]

  v3 = this;
  if ( (byte_418B291 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B291 = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    itemList = v3->fields.itemList;
    if ( !itemList )
LABEL_19:
      sub_B2C434(SelfUserGame, v8);
    v10 = SelfUserGame;
    v11 = 0LL;
    while ( (__int64)v11 < itemList->fields._size )
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v12 = itemList->fields._items->m_Items[v11];
      if ( v12 )
      {
        v13 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (ServantOperationListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewItem_TypeInfo )
        {
          klass = v12[1].klass;
          if ( klass )
          {
            if ( !v10 )
              goto LABEL_19;
            byval_arg = klass->_1.byval_arg;
            v16 = *(_QWORD *)(v10 + 120);
            *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v18.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v17 = v18;
            SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
            v12[1].fields.isTerminationSpace = v16 == SelfUserGame;
          }
          itemList = v3->fields.itemList;
          ++v11;
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

  if ( (byte_418B28B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418B28B = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 selectedId,
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B2C434(Instance, v16);
    v18 = 0LL;
    while ( (__int64)v18 < itemList->fields._size )
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v33, 0LL) )
        {
          v30 = (System_Int32_array **)entity;
          v21[1].klass = (ListViewItem_c *)entity;
          sub_B2C2F8((BattleServantConfConponent_o *)&v21[1], v30, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_418B2A2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, selectItem);
    byte_418B2A2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    sub_B2C434(v5, v6);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v9);
}


void __fastcall ServantOperationListViewManager__OnClickFilter2Kind(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t v8; // w9

  if ( (byte_418B2A7 & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418B2A7 = 1;
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
      sub_B2C434(v4, v5);
    }
    if ( filter2Kind + 1 <= ServantOperationListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM )
      v8 = filter2Kind + 1;
    else
      v8 = 0;
    sort->fields.filter2Kind = v8;
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
  ServantFilterSelectMenu_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w9
  ListViewManager_o *v14; // x3
  int32_t v15; // w1

  if ( (byte_418B2A8 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2A8 = 1;
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
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v9 )
      sub_B2C434(v11, v12);
    if ( kind == 1 )
      v13 = 5;
    else
      v13 = 7;
    if ( (unsigned int)(kind - 1) >= 2 )
      v14 = 0LL;
    else
      v14 = (ListViewManager_o *)this;
    if ( kind == 2 )
      v15 = 6;
    else
      v15 = v13;
    CommonUI__OpenServantFilterSelectMenu_17978356(v9, v15, sort, v14, v10, -1, 0LL);
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

  if ( (byte_418B2A1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, selectItem);
    byte_418B2A1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !selectItem )
    sub_B2C434(v5, v6);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v6);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v8);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v9);
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
  __int64 v28; // x1
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
  const MethodInfo *v42; // x2
  int64_t v43; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v45; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  __int64 v48; // x22
  __int64 v49; // x23
  ServantEntity_o *v50; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v52; // w22
  ServantOperationListViewItem_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x9
  int32_t v55; // w27
  int32_t SvtId_k__BackingField; // w22
  int32_t v57; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v59; // x21
  System_String_o *v60; // x22
  System_Object_array *v61; // x24
  int32_t Rarity; // w26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x26
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x25
  int32_t v84; // w0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x25
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x25
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x20
  System_String_o *v106; // x20
  System_String_o *v107; // x22
  System_String_o *v108; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_418B2A3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, selectItem);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&object___TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Rarity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    sub_B2C35C(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v20);
    sub_B2C35C(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_418B2A3 = 1;
  }
  v26 = sub_B2C42C(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_68;
  *(_QWORD *)(v26 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 24) = selectItem;
  v35 = (ServantOperationListViewItem_o **)(v26 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v26 + 24),
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
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v43 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v43 )
  {
LABEL_15:
    ServantOperationListViewManager__PushRequest(this, *v35, v42);
    return;
  }
  if ( !*v35 )
    goto LABEL_68;
  UserServantEntity_k__BackingField = (*v35)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_68;
  v45 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v114.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v113 = v114;
  if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v113, 0LL) )
    goto LABEL_15;
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_68;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             v43,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_68;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v49 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v115.fields.currentCryptoKey = v49;
  *(_QWORD *)&v115.fields.fakeValue = v48;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v115, 0LL);
  if ( !v47 )
    goto LABEL_68;
  v50 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v47,
                             SelfUserGame,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.limitCount, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_68;
  SelfUserGame = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v52,
                   SelfUserGame,
                   0LL);
  v53 = *v35;
  if ( !*v35 )
    goto LABEL_68;
  v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v53->fields._UserServantEntity_k__BackingField;
  if ( !v54 )
    goto LABEL_68;
  v55 = SelfUserGame;
  SvtId_k__BackingField = v53->fields._SvtId_k__BackingField;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId_k__BackingField,
                                 v57,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v61 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v61 )
LABEL_68:
    sub_B2C434(SelfUserGame, v28);
  v69 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( !v61->max_length )
    goto LABEL_69;
  v61->m_Items[0] = (Il2CppObject *)v69;
  sub_B2C2F8((BattleServantConfConponent_o *)v61->m_Items, v69, v63, v64, v65, v66, v67, v68);
  if ( !v50 )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName(v50, 0LL);
  v76 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_69;
  v61->m_Items[1] = (Il2CppObject *)v76;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[1], v76, v70, v71, v72, v73, v74, v75);
  SelfUserGame = (__int64)ServantEntity__getName(v50, v55, -1, 0LL);
  v83 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_69;
  v61->m_Items[2] = (Il2CppObject *)v83;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[2], v83, v77, v78, v79, v80, v81, v82);
  if ( !*v35 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v35)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_68;
  v84 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)Rarity__getRarityType(v84, 0LL);
  v91 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_69;
  v61->m_Items[3] = (Il2CppObject *)v91;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[3], v91, v85, v86, v87, v88, v89, v90);
  if ( !*v35 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v35)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v98 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_70;
  }
  if ( v61->max_length <= 4 )
    goto LABEL_69;
  v61->m_Items[4] = (Il2CppObject *)v98;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[4], v98, v92, v93, v94, v95, v96, v97);
  if ( !*v35 )
    goto LABEL_68;
  SelfUserGame = (__int64)(*v35)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_68;
  SelfUserGame = (__int64)ServantEntity__getName((ServantEntity_o *)SelfUserGame, ServantLimitCountSealAfter, -1, 0LL);
  v105 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_70:
      v112 = sub_B2C454(SelfUserGame);
      sub_B2C400(v112, 0LL);
    }
  }
  if ( v61->max_length <= 5 )
  {
LABEL_69:
    v111 = sub_B2C460(SelfUserGame);
    sub_B2C400(v111, 0LL);
  }
  v61->m_Items[5] = (Il2CppObject *)v105;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[5], v105, v99, v100, v101, v102, v103, v104);
  v106 = System_String__Format_44384256(v60, v61, 0LL);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v110 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v110,
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
  CommonUI__OpenConfirmDialog_17970624(
    Instance,
    v59,
    v106,
    v107,
    v108,
    v110,
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

  if ( (byte_418B2AF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B2AF = 1;
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
    sub_B2C2F8(
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
    sub_B2C434(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v16);
  ServantOperationListViewManager__SetMode_31602028(this, 2, v17);
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
  if ( (byte_418B29E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, selectItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v7);
    byte_418B29E = 1;
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
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
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
          this = (ServantOperationListViewManager_o *)System_String__Format_44301068(v12, v14, v15, 0LL);
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
                                                      (System_String_o *)StringLiteral_12469/*"SUM_INFO"*/,
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
            this = (ServantOperationListViewManager_o *)System_String__Format_44301068(v23, v25, v26, 0LL);
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
    sub_B2C434(this, selectItem);
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

  if ( (byte_418B2AB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B2AB = 1;
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
  ServantSortSelectMenu_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w8
  int32_t v14; // w1

  if ( (byte_418B2A5 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2A5 = 1;
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
    kind = this->fields.kind;
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B2C434(v11, v12);
    if ( kind == 1 )
      v13 = 2;
    else
      v13 = 1;
    if ( kind == 2 )
      v14 = 6;
    else
      v14 = v13;
    CommonUI__OpenServantSortSelectMenu(v9, v14, sort, 1, v10, 0LL);
  }
}


void __fastcall ServantOperationListViewManager__OnClickTabChoice(
        ServantOperationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Action_bool__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_418B2B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndClickTabChoice__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2B2 = 1;
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
      v7 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabChoice__,
        (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabChoice(this, 0, v6);
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
  const MethodInfo *v6; // x2
  System_Action_bool__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_418B2B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndClickTabLock__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2B1 = 1;
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
      v7 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager_EndClickTabLock__,
        (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
      ServantOperationListViewManager__StatusRequest(this, v7, v8);
    }
    else
    {
      ServantOperationListViewManager__EndClickTabLock(this, 0, v6);
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
  System_Action_bool__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418B2B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndClickTabPush__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2B3 = 1;
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
    v6 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabPush__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v6, v7);
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
  System_Action_bool__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_418B2B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndClickTabStatus__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B2B0 = 1;
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
    v7 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(this, v7, v8);
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

  if ( (byte_418B296 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B296 = 1;
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
          sub_B2C434(v8, v7);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418B2A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418B2A4 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !UserServantEntity_k__BackingField )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_fields = &UserServantEntity_k__BackingField->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.imageLimitCount,
          0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
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

  if ( (byte_418B288 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v3);
    byte_418B288 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(parentManager, method);
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
  if ( (byte_418B29D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v4);
    byte_418B29D = 1;
  }
  itemList = v2->fields.itemList;
  v2->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_12:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B295 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantOperationListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B295 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantOperationListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  if ( (byte_418B294 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v6);
    byte_418B294 = 1;
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
                                                      (System_String_o *)StringLiteral_12469/*"SUM_INFO"*/,
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
            this = (ServantOperationListViewManager_o *)System_String__Format_44301068(v11, v13, v14, 0LL);
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
      sub_B2C434(this, item);
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
  __int64 v13; // x1
  struct ServantOperationManager_o *parentManager; // x8
  System_String_o *v15; // x21
  struct ServantOperationManager_o *v16; // x8
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B2BB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v5);
    byte_418B2BB = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  parentManager = this->fields.parentManager;
  if ( !parentManager )
    goto LABEL_21;
  v15 = v12;
  TotalSum_k__BackingField = parentManager->fields._TotalSum_k__BackingField;
  v12 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  v16 = this->fields.parentManager;
  if ( !v16
    || (v17 = (Il2CppObject *)v12,
        SelectMax_k__BackingField = v16->fields._SelectMax_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField),
        v12 = System_String__Format_44301068(v15, v17, v18, 0LL),
        !selectDoneLabel) )
  {
LABEL_21:
    sub_B2C434(v12, v13);
  }
  UILabel__set_text(selectDoneLabel, v12, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v19);
  this->fields.isDragSelect = 1;
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
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
  __int64 v14; // x10
  __int64 v15; // x0
  __int64 v16; // x1

  v6 = this;
  if ( (byte_418B2B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewObject_TypeInfo, v9);
    byte_418B2B9 = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_17;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
  {
LABEL_19:
    ServantOperationListViewManager__SetIsItemDragSelect(
      v6,
      (ServantOperationListViewItem_o *)v11,
      isDragSelect,
      method);
    sub_B2C434(v15, v16);
  }
  v12 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantOperationListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_B2C728(v11);
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
      v14 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (ServantOperationListViewObject_c *)this->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewObject_TypeInfo )
      {
        ServantOperationListViewObject__SetupDisp(
          (ServantOperationListViewObject_o *)this,
          *(const MethodInfo **)&index);
        return;
      }
    }
LABEL_17:
    sub_B2C434(this, *(_QWORD *)&index);
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
  if ( (byte_418B2BA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v9);
    byte_418B2BA = 1;
  }
  itemSortList = v6->fields.itemSortList;
  v6->fields.isDragSelect = isDragSelect;
  *(_OWORD *)&v6->fields.dragSelectSum = xmmword_31A31B0;
  if ( !itemSortList )
    goto LABEL_22;
  size = itemSortList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)itemSortList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, *(_QWORD *)&startIndex);
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

  if ( (byte_418B2AA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418B2AA = 1;
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
    sub_B2C434(this, 0LL);
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
          sub_B2C434(this, item);
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
  struct ListViewObject_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  ServantOperationListViewObject_o *v19; // x0
  ServantOperationListViewObject_o *v20; // x0
  const MethodInfo *v21; // x1

  v5 = start;
  v6 = this;
  if ( (byte_418B2B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewObject_TypeInfo, v9);
    byte_418B2B8 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_28:
    sub_B2C434(this, *(_QWORD *)&start);
  if ( v5 <= end )
  {
    v11 = parentManager->fields._TotalSum_k__BackingField + 1;
    while ( 1 )
    {
      itemSortList = v6->fields.itemSortList;
      if ( !itemSortList )
        goto LABEL_28;
      if ( itemSortList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v13 = itemSortList->fields._items->m_Items[v5];
      if ( !v13 )
        goto LABEL_28;
      *(_QWORD *)&start = ServantOperationListViewItem_TypeInfo;
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
          v16 = v13->fields.viewObject;
          if ( !v16 )
            goto LABEL_28;
          v17 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
            || (ServantOperationListViewObject_c *)v16->klass->_2.typeHierarchy[v17 - 1] != ServantOperationListViewObject_TypeInfo )
          {
            goto LABEL_28;
          }
          v18 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
          {
            if ( (ServantOperationListViewObject_c *)v16->klass->_2.typeHierarchy[v18 - 1] == ServantOperationListViewObject_TypeInfo )
              v19 = (ServantOperationListViewObject_o *)v13->fields.viewObject;
            else
              v19 = 0LL;
          }
          else
          {
            v19 = 0LL;
          }
          ServantOperationListViewObject__SetupDisp(v19, *(const MethodInfo **)&start);
        }
      }
      if ( ++v5 > end )
        return;
    }
    sub_B2C728(v13);
    ServantOperationListViewObject__SetupDisp(v20, v21);
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
  sub_B2C2F8((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)SortInfo, v7, v8, v9, v10, v11, v12);
  if ( !*p_sort )
    goto LABEL_6;
  v15 = kind == 1;
  if ( kind == 2 )
    v15 = 3;
  (*p_sort)->fields.listViewKind = v15;
  v13 = *p_sort;
  if ( !*p_sort )
LABEL_6:
    sub_B2C434(v13, v14);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelectServant,
    (System_Int32_array **)onSelectServant,
    (System_String_array **)onSelectServant,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_31602028(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_31602028(
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

  if ( (byte_418B293 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v6);
    byte_418B293 = 1;
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
      sub_B2C434(v9, v10);
    v13 = 0LL;
    v14 = 0;
    while ( (__int64)v13 < itemList->fields._size )
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418B292 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewObject_TypeInfo, obj);
    byte_418B292 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
    sub_B2C2F8(
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
    sub_B2C434(sort, *(_QWORD *)&scaleKind);
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
  __int64 v13; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  signed int max_length; // w8
  __int64 v16; // x22
  UserServantEntity_o *v17; // x23
  __int128 v18; // q0
  System_Int64_array *v19; // x24
  System_Int64_array *v20; // x25
  int64_t favoriteUserSvtId; // x20
  DataManager_o *v22; // x27
  ServantOperationListViewItem_o *v23; // x26
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-80h]
  System_Int64_array *equipIdList; // [xsp+50h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_418B283 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418B283 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
        {
          v27 = sub_B2C460(Instance);
          sub_B2C400(v27, 0LL);
        }
        v17 = userServantEntities->m_Items[v16];
        if ( !v17 )
          break;
        v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
        v20 = equipIdList;
        v19 = svtIdList;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v18;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v28 = v29;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v22 = Instance;
        v23 = (ServantOperationListViewItem_o *)sub_B2C42C(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v23, v16, v17, v19, v20, v22 == (DataManager_o *)favoriteUserSvtId, v24);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v23, v25);
        max_length = userServantEntities->max_length;
        if ( (int)++v16 >= max_length )
          return v16;
      }
LABEL_22:
      sub_B2C434(Instance, v13);
    }
  }
  LODWORD(v16) = 0;
  return v16;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_31593112(
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
  __int64 v12; // x1
  signed int max_length; // w8
  System_Collections_Generic_List_long__o *v14; // x22
  __int64 v15; // x21
  UserCommandCodeEntity_o *v16; // x23
  __int128 v17; // q0
  bool v18; // w25
  ServantOperationListViewItem_o *v19; // x24
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x3
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]

  if ( (byte_418B284 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userCommandCodeEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B284 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
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
        {
          v23 = sub_B2C460(Instance);
          sub_B2C400(v23, 0LL);
        }
        v16 = userCommandCodeEntities->m_Items[v15];
        if ( !v16 )
          break;
        v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v25.fields.fakeValue = v17;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v24 = v25;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
        if ( !v14 )
          break;
        v18 = System_Collections_Generic_List_long___Contains(
                v14,
                (int64_t)Instance,
                (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__);
        v19 = (ServantOperationListViewItem_o *)sub_B2C42C(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_31578456(v19, v15, v16, v18, v20);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v19, v21);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v15 >= max_length )
          return v15;
      }
LABEL_19:
      sub_B2C434(Instance, v12);
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
  System_String_o *v10; // x1
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
  struct ServantOperationManager_o *parentManager; // x20

  if ( (byte_418B2AE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418B2AE = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_39;
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
      goto LABEL_39;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( sort )
      {
        v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
        v17 = this->fields.sort;
        if ( v17 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v17->fields.isAscendingOrder;
            v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
            v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_31:
            if ( isAscendingOrder )
              v23 = v19;
            else
              v23 = v20;
            UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
        v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
        v22 = this->fields.sort;
        if ( v22 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            isAscendingOrder = v22->fields.isAscendingOrder;
            v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
            v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_B2C434(sort, v10);
  }
LABEL_35:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_39;
  parentManager = this->fields.parentManager;
  sort = (ListViewSort_o *)ListViewSort__GetSvtOperationFilter2Text(sort, this->fields.kind, 0LL);
  if ( !parentManager )
    goto LABEL_39;
  v10 = (System_String_o *)sort;
  sort = (ListViewSort_o *)parentManager->fields.filter2Label;
  if ( !sort )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)sort, v10, 0LL);
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
  __int64 v20; // x9
  ServantOperationListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_418B285 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&ShopRootComponent_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_418B285 = 1;
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
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].klass) == 0LL )
  {
    sub_B2C434(statusLabel, v13);
  }
  v20 = *(&ShopRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&statusLabel->klass->_2.bitflags2 + 1) >= (unsigned int)v20
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[v20 - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    sub_B2C728(statusLabel);
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
    sub_B2C434(this, tabButton);
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
  const MethodInfo *v16; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v20; // x1
  System_Int64_array *revokeIds; // [xsp+8h] [xbp-28h] BYREF
  System_Int64_array *changeIds; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_418B2B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd);
    sub_B2C35C(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B2C35C(&Method_ServantOperationListViewManager_EndStatusSync__, v13);
    byte_418B2B5 = 1;
  }
  changeIds = 0LL;
  revokeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_B2C2F8(
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
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
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
                                                                              v18,
                                                                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
      sub_B2C434(Request_WarBoardWallAttackRequest, v20);
    }
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v18,
                                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    ServantOperationListViewManager__CallRequestEnd(this, 0, v16);
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
  if ( (byte_418B289 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(&ServantOperationListViewItem_TypeInfo, v10);
    byte_418B289 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = v8->fields.itemList;
  if ( !itemList )
LABEL_22:
    sub_B2C434(this, qp);
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418B2B4 & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_B2C35C(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  item);
    byte_418B2B4 = 1;
  }
  if ( !item )
    sub_B2C434(this, item);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
  if ( (byte_418B29F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum);
    this = (ServantOperationListViewManager_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                  v5);
    byte_418B29F = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&selectNum);
  v7 = 4LL;
  while ( 1 )
  {
    size = itemList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v10 = *((_QWORD *)&itemList->fields._items->obj.klass + v7);
    if ( !v10 )
      goto LABEL_16;
    if ( *(_DWORD *)(v10 + 16) > selectNum )
    {
      v11 = v4->fields.itemList;
      if ( !v11 )
        goto LABEL_16;
      if ( v11->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_418B27D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418B27D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantOperationListViewObject__GetItem(
                                                              (ServantOperationListViewObject_o *)Component_srcLineSprite,
                                                              v11);
      if ( Component_srcLineSprite )
      {
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24147020(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct System_Collections_Generic_List_GameObject__o *v16; // x21

  if ( (byte_418B27C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418B27C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B2C434(Component_srcLineSprite, v11);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ServantOperationListViewObject__o *)v9;
    if ( v14 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v16->fields._items->obj.klass + v13);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v9 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__);
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
  Il2CppObject *v2; // x19
  struct ServantOperationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41853F6 & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager___c_TypeInfo, v1);
    byte_41853F6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_41853F7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v6);
    byte_41853F7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
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
    sub_B2C434(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}