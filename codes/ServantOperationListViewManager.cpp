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
  __int64 v9; // x1
  __int64 v10; // x1
  struct ServantOperationListViewManager_StaticFields *static_fields; // x0
  int64_t v12; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  ListViewSort_o *v16; // x20
  struct ServantOperationListViewManager_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  ListViewSort_o *v27; // x20
  struct ServantOperationListViewManager_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x19
  ListViewSort_o *v36; // x20
  struct ServantOperationListViewManager_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B62F38 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, v1);
    sub_1BE4ACC(&ServantOperationListViewManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_1490/*"4"*/, v9);
    sub_1BE4ACC(&StringLiteral_12835/*"ServantOperation"*/, v10);
    byte_4B62F38 = 1;
  }
  static_fields = ServantOperationListViewManager_TypeInfo->static_fields;
  static_fields->FILTER2_MAX_KIND_NUM = 1;
  v12 = StringLiteral_12835/*"ServantOperation"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_12835/*"ServantOperation"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->SORT_SAVE_KEY, v12, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v44 = 1;
  v14 = System_Int32__ToString((int32_t)&v44, 0LL);
  v15 = System_String__Concat_62698808(SORT_SAVE_KEY, v14, 0LL);
  v16 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v16, v15, 3, 0, 0LL);
  v17 = ServantOperationListViewManager_TypeInfo->static_fields;
  v17->servantSortInfo = v16;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v17->servantSortInfo, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v44 = 2;
  v25 = System_Int32__ToString((int32_t)&v44, 0LL);
  v26 = System_String__Concat_62698808(v24, v25, 0LL);
  v27 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v27, v26, 3, 0, 0LL);
  v28 = ServantOperationListViewManager_TypeInfo->static_fields;
  v28->servantEquipSortInfo = v27;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v28->servantEquipSortInfo, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_62698808(
          ServantOperationListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY,
          (System_String_o *)StringLiteral_1490/*"4"*/,
          0LL);
  v36 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v36, v35, 2, 0, 0LL);
  v37 = ServantOperationListViewManager_TypeInfo->static_fields;
  v37->commandCodeSortInfo = v36;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v37->commandCodeSortInfo, (int64_t)v36, v38, v39, v40, v41, v42, v43);
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
    sub_1BE4A70(p_onSelectServant, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BE4A70(p_onRequestEnd, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BE2130;
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

  if ( (byte_4B62F37 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v5);
    byte_4B62F37 = 1;
  }
  itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
  if ( !itemSortList
    || (itemSortList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemSortList,
                                                                      index,
                                                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemSortList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewItem_c *)itemSortList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1BE4D28(itemSortList, *(_QWORD *)&index);
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
    sub_1BE4D28(this, isPlus);
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
  System_String_o *EmptyMessageCode; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1

  if ( (byte_4B62EFA & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B62EFA = 1;
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
  v21 = (ServantOperationListViewManager_o *)ServantOperationListViewManager__SetSellEnableRestCount_33460148(
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
    sub_1BE4D28(v9, v10);
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

  if ( (byte_4B62F36 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v5);
    byte_4B62F36 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
LABEL_9:
    sub_1BE4D28(itemSortList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v9 = Item;
  if ( !Item )
  {
    ServantOperationListViewManager__SetIsItemSelect(this, 0LL, v8);
    sub_1BE4D28(v11, v12);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)sub_1BE4FE8(Item);
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

  if ( (byte_4B62EF6 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantOperationListViewManager_TypeInfo, v1);
    byte_4B62EF6 = 1;
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
    sub_1BE4D28(servantSortInfo, v1);
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
    sub_1BE4D28(0LL, v3);
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
  ServantOperationListViewManager__SetMode_33467844(this, 2, v5);
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
    sub_1BE4D28(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 2, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v7);
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
    sub_1BE4D28(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 1, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v7);
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
    sub_1BE4D28(0LL, isRequest);
  ServantOperationManager__ReleaseAll(parentManager, 0LL);
  ServantOperationListViewManager__SetStatusKind(this, 3, v5);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v7);
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
    sub_1BE4D28(0LL, v4);
  ServantOperationManager__RefrashListDisp(parentManager, 0LL);
  ServantOperationListViewManager__ModifyList(this, 0, v6);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v7);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B62F24 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__, v6);
    sub_1BE4ACC(&ServantOperationListViewManager___c_TypeInfo, v7);
    byte_4B62F24 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantOperationListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__106_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__106_0,
      v14,
      Method_ServantOperationListViewManager___c__EndSelectFilterKind_b__106_0__,
      0LL);
    static_fields = ServantOperationListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = _9__106_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v12 )
    sub_1BE4D28(Instance, v10);
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

  if ( (byte_4B62F21 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B62F21 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
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

  if ( (byte_4B62F27 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F27 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BE4D28(itemList, *(_QWORD *)&svtId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62F28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F28 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BE4D28(itemList, *(_QWORD *)&commandCodeId);
  v8 = 0LL;
  v9 = 0;
  while ( v9 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62EFE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/, *(_QWORD *)&kind);
    sub_1BE4ACC(&StringLiteral_3760/*"COMMAND_CODE_EMPTY"*/, v6);
    sub_1BE4ACC(&StringLiteral_11705/*"SERVANT_ALL_EMPTY"*/, v7);
    sub_1BE4ACC(&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B62EFE = 1;
  }
  if ( isNotEmpty )
  {
    v10 = &StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  }
  else if ( (unsigned int)kind > 2 )
  {
    v10 = (__int64 *)&StringLiteral_1/*""*/;
  }
  else
  {
    v10 = off_45A37A8[kind];
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
  int64_t itemList; // x0
  int32_t v11; // w21
  int64_t v12; // x22
  __int64 methodPtr_low; // x10
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B62F17 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4B62F17 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_1BE4D28(itemList, v9);
  v11 = 0;
  while ( v11 < *(_DWORD *)(itemList + 24) )
  {
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v11,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    v12 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    itemList = ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL);
    if ( (itemList & 1) != 0 && (*(_BYTE *)(v12 + 188) || *(_BYTE *)(v12 + 190) || *(_BYTE *)(v12 + 203)) )
    {
      if ( !v8 )
        goto LABEL_19;
      items = v8->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v12,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v12;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), v12, v14, v15, v16, v17, v18, v19);
      }
    }
    itemList = (int64_t)this->fields.itemList;
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
    sub_1BE4D28(this, item);
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
    sub_1BE4D28(this, item);
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
  int64_t itemList; // x0
  int32_t v11; // w21
  int64_t v12; // x22
  __int64 methodPtr_low; // x10
  ServantEntity_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B62F18 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo, v6);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4B62F18 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantOperationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantOperationListViewItem___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1BE4D28(itemList, v9);
  v11 = 0;
  while ( v11 < *(_DWORD *)(itemList + 24) )
  {
    itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)itemList,
                          v11,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_20;
    v12 = itemList;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
      || *(ServantOperationListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantOperationListViewItem_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)itemList, 0LL) )
    {
      v14 = *(ServantEntity_o **)(v12 + 120);
      if ( v14 )
      {
        itemList = ServantEntity__get_IsServant(v14, 0LL);
        if ( (itemList & 1) != 0 && (*(_BYTE *)(v12 + 195) || *(_BYTE *)(v12 + 196)) )
        {
          if ( !v8 )
            goto LABEL_20;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantOperationListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v12,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v12, v15, v16, v17, v18, v19, v20);
          }
        }
      }
    }
    itemList = (int64_t)this->fields.itemList;
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

  if ( (byte_4B62F14 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4B62F14 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BE4D28(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          *(const MethodInfo_35D4258 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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

  if ( (byte_4B62F16 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F16 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BE4D28(itemList, userCommandCodeId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62F15 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F15 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BE4D28(itemList, userServantId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= itemList->fields._size )
      return -1;
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62F13 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v7);
    byte_4B62F13 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BE4D28(itemList, v9);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          *(const MethodInfo_35D4258 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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

  if ( (byte_4B62EFB & 1) == 0 )
  {
    sub_1BE4ACC(&ServantOperationListViewManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B62EFB = 1;
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

  if ( (byte_4B62F03 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BE4ACC(&StringLiteral_11795/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_1BE4ACC(&StringLiteral_11793/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_1BE4ACC(&StringLiteral_11794/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B62F03 = 1;
  }
  switch ( modeKind )
  {
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11795/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11793/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0LL);
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11794/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
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
  int64_t v18; // x2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v25; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x3
  __int64 methodPtr_low; // x10
  ServantOperationListViewItem_o *v29; // x25
  _BOOL8 IsSwap; // x0
  _BOOL8 ItemCollectId; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  struct System_Int64_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_long__o *v40; // x0
  int v41; // w21
  System_Int64_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Int64_array *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Int64_array **v56; // x0
  int64_t id; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B62F31 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&modekind);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v14);
    byte_4B62F31 = 1;
  }
  id = 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  v25 = 0;
  while ( v25 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)itemList,
             v25,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item
      && (methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
        v29 = (ServantOperationListViewItem_o *)Item;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    IsSwap = ServantOperationListViewManager__GetIsSwap(
               (ServantOperationListViewManager_o *)Item,
               v29,
               this->fields.modeKind,
               v27);
    if ( !IsSwap )
      goto LABEL_27;
    ItemCollectId = ServantOperationListViewManager__TryGetItemCollectId(
                      (ServantOperationListViewManager_o *)IsSwap,
                      v29,
                      &id,
                      v19);
    if ( !ItemCollectId )
      goto LABEL_27;
    itemList = (struct System_Collections_Generic_List_ListViewItem__o *)ServantOperationListViewManager__GetIsSelected(
                                                                           (ServantOperationListViewManager_o *)ItemCollectId,
                                                                           v29,
                                                                           this->fields.modeKind,
                                                                           v19);
    v17 = id;
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_28;
      items = v16->fields._items;
      v33 = Method_System_Collections_Generic_List_long__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v39 = v33[4];
        v40 = v16;
LABEL_26:
        System_Collections_Generic_List_long___AddWithResize(
          v40,
          v17,
          *(const MethodInfo_35D4258 **)(*(_QWORD *)(v39 + 192) + 112LL));
        goto LABEL_27;
      }
      v35 = &items->obj.klass + size;
      v16->fields._size = size + 1;
    }
    else
    {
      if ( !v15 )
        goto LABEL_28;
      v36 = v15->fields._items;
      v37 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v36 )
        goto LABEL_28;
      v38 = v15->fields._size;
      if ( (unsigned int)v38 >= v36->max_length )
      {
        v39 = v37[4];
        v40 = v15;
        goto LABEL_26;
      }
      v35 = &v36->obj.klass + v38;
      v15->fields._size = v38 + 1;
    }
    v35[4] = (Il2CppClass *)v17;
LABEL_27:
    itemList = this->fields.itemList;
    ++v25;
    if ( !itemList )
      goto LABEL_28;
  }
  if ( !v15 || !v16 )
LABEL_28:
    sub_1BE4D28(itemList, v17);
  v41 = v16->fields._size + v15->fields._size;
  if ( v41 < 1 )
  {
    *changeIds = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)changeIds, 0LL, v18, (int32_t)v19, v20, v21, v22, v23);
    v56 = revokeIds;
    v49 = 0LL;
    *revokeIds = 0LL;
  }
  else
  {
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *changeIds = v42;
    sub_1BE4A70((PartyOrganizationUtility_o *)changeIds, (int64_t)v42, v43, v44, v45, v46, v47, v48);
    v49 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *revokeIds = v49;
    v56 = revokeIds;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)v56, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  return v41 > 0;
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

  if ( (byte_4B62F02 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17889/*"button_push_reg"*/, *(_QWORD *)&kind);
    sub_1BE4ACC(&StringLiteral_17890/*"button_push_unreg"*/, v6);
    sub_1BE4ACC(&StringLiteral_17875/*"button_allchoice_reg"*/, v7);
    sub_1BE4ACC(&StringLiteral_17878/*"button_alllock_unreg"*/, v8);
    sub_1BE4ACC(&StringLiteral_17891/*"button_select_reg"*/, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    sub_1BE4ACC(&StringLiteral_17892/*"button_select_unreg"*/, v11);
    sub_1BE4ACC(&StringLiteral_17877/*"button_alllock_reg"*/, v12);
    sub_1BE4ACC(&StringLiteral_17876/*"button_allchoice_unreg"*/, v13);
    byte_4B62F02 = 1;
  }
  switch ( kind )
  {
    case 0:
      v14 = &StringLiteral_17892/*"button_select_unreg"*/;
      v15 = &StringLiteral_17891/*"button_select_reg"*/;
      goto LABEL_9;
    case 1:
      v14 = &StringLiteral_17878/*"button_alllock_unreg"*/;
      v15 = &StringLiteral_17877/*"button_alllock_reg"*/;
      goto LABEL_9;
    case 2:
      v14 = &StringLiteral_17876/*"button_allchoice_unreg"*/;
      v15 = &StringLiteral_17875/*"button_allchoice_reg"*/;
      goto LABEL_9;
    case 3:
      v14 = &StringLiteral_17890/*"button_push_unreg"*/;
      v15 = &StringLiteral_17889/*"button_push_reg"*/;
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

  if ( (byte_4B62EFD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B62EFD = 1;
  }
  if ( kind != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
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

  if ( (byte_4B62EFC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B62EFC = 1;
  }
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_12;
    return UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  }
  else
  {
    if ( !kind )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
          return UserServantMaster__getKeepServantList((UserServantMaster_o *)Instance, 0LL);
      }
LABEL_12:
      sub_1BE4D28(Instance, v6);
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

  if ( (byte_4B62EF7 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantOperationListViewManager_TypeInfo, v1);
    byte_4B62EF7 = 1;
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
    sub_1BE4D28(servantSortInfo, v1);
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
    sub_1BE4D28(this, item);
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
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x1
  UnityEngine_Object_o *v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B62F06 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62F06 = 1;
  }
  entity = 0LL;
  if ( kind == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_30;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_30:
      sub_1BE4D28(Instance, v15);
    v16 = 0;
    while ( v16 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v16,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        *(Il2CppObject *)&v30.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v30.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v30;
        if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v29, 0LL) )
        {
          v27 = entity;
          *(_QWORD *)(v19 + 136) = entity;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 136), (int64_t)v27, (int64_t)v17, v22, v23, v24, v25, v26);
        }
      }
      else if ( !v19 )
      {
        goto LABEL_30;
      }
      ServantOperationListViewItem__ModifyItem((ServantOperationListViewItem_o *)v19, 0, v17);
      v28 = *(UnityEngine_Object_o **)(v19 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
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
  int64_t v19; // x21
  int32_t v20; // w22
  bool v21; // w26
  __int64 methodPtr_low; // x10
  __int64 v23; // x23
  int64_t UserSvtId; // x0
  __int128 v25; // q0
  int64_t v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]

  if ( (byte_4B62F08 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B62F08 = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrSvtId,
                                  (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1BE4D28(Instance, v18);
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
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v36, 0LL);
      if ( v26 == Instance )
      {
        *(_QWORD *)(v23 + 112) = v19;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 112), v19, v27, v28, v29, v30, v31, v32);
      }
LABEL_25:
      if ( v21 )
      {
        if ( !v23 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v23, v18);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v23, v33);
        ServantOperationListViewItem__ModifyPushItem((ServantOperationListViewItem_o *)v23, v34);
      }
      else if ( !v23 )
      {
        goto LABEL_37;
      }
      v35 = *(UnityEngine_Object_o **)(v23 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
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
  int64_t v19; // x21
  int32_t v20; // w22
  bool v21; // w26
  __int64 methodPtr_low; // x10
  __int64 v23; // x23
  int64_t UserCommandCodeId; // x0
  __int128 v25; // q0
  int64_t v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *v34; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-80h]

  if ( (byte_4B62F0A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, usrCmdId);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B62F0A = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
        || (Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  usrCmdId,
                                  (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_37:
        sub_1BE4D28(Instance, v18);
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
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
      *(_OWORD *)&v36.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v36;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v35, 0LL);
      if ( v26 == Instance )
      {
        *(_QWORD *)(v23 + 136) = v19;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 136), v19, v27, v28, v29, v30, v31, v32);
      }
LABEL_25:
      if ( v21 )
      {
        if ( !v23 )
          goto LABEL_37;
        ServantOperationListViewItem__ModifyLockItem((ServantOperationListViewItem_o *)v23, v18);
        ServantOperationListViewItem__ModifyChoiceItem((ServantOperationListViewItem_o *)v23, v33);
      }
      else if ( !v23 )
      {
        goto LABEL_37;
      }
      v34 = *(UnityEngine_Object_o **)(v23 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
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


void __fastcall ServantOperationListViewManager__ModifyLockItem_33465088(
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]

  v10 = this;
  if ( (byte_4B62F09 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, item);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v14);
    byte_4B62F09 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (ServantOperationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_25;
    this = (ServantOperationListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  usrSvtId,
                                                  (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !item )
        goto LABEL_25;
      v15 = this;
      UserSvtId = ServantOperationListViewItem__get_UserSvtId(item, (const MethodInfo *)item);
      v17 = *(_OWORD *)&v15->fields.dropObjectList;
      v18 = (ServantOperationListViewManager_o *)UserSvtId;
      *(UnityEngine_MonoBehaviour_Fields *)&v29.fields.currentCryptoKey = v15->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v29.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v28 = v29;
      this = (ServantOperationListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                    &v28,
                                                    0LL);
      if ( v18 == this )
      {
        item->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)v15;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&item->fields._UserServantEntity_k__BackingField,
          (int64_t)v15,
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
      goto LABEL_25;
  }
  else
  {
    if ( !item )
      goto LABEL_25;
    ServantOperationListViewItem__ModifyLockItem(item, (const MethodInfo *)item);
    ServantOperationListViewItem__ModifyChoiceItem(item, v25);
    ServantOperationListViewItem__ModifyPushItem(item, v26);
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
    sub_1BE4D28(this, item);
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

  if ( (byte_4B62F0C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userCommandCodeEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4B62F0C = 1;
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                                    &v28,
                                                                    0LL);
          if ( v10 >= userCommandCodeEntities->max_length )
            sub_1BE4D30(itemList, userCommandCodeEntities);
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_26;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = itemList;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v20;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
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
        sub_1BE4D28(itemList, userCommandCodeEntities);
      v23 = *(_OWORD *)v22->m_Items;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->bounds;
      *(_OWORD *)&v29.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v29;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v26, 0LL);
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

  if ( (byte_4B62F0B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userServantEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4B62F0B = 1;
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                                    &v28,
                                                                    0LL);
          if ( v10 >= userServantEntities->max_length )
            sub_1BE4D30(itemList, userServantEntities);
          v19 = *v14;
          if ( !*v14 )
            goto LABEL_26;
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = itemList;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v20;
          itemList = (System_Collections_Generic_List_object__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
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
        sub_1BE4D28(itemList, userServantEntities);
      v23 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v29;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v26, 0LL);
      ServantOperationListViewManager__ModifyLockItem_33465088(this, v15, v24, 1, v11, v25);
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
  if ( (byte_4B62F0D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F0D = 1;
  }
  if ( ServantOperationListViewManager__GetUserServantEntities(this, v3->fields.kind, v2) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    itemList = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !itemList )
LABEL_16:
      sub_1BE4D28(SelfUserGame, v8);
    v10 = SelfUserGame;
    v11 = 0;
    while ( v11 < itemList->fields._size )
    {
      SelfUserGame = System_Collections_Generic_List_object___get_Item(
                       itemList,
                       v11,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            SelfUserGame = (_QWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v17, 0LL);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x1
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-80h]
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B62F07 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62F07 = 1;
  }
  entity = 0LL;
  if ( kind != 2 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_31;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            selectedId,
            (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      return;
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
LABEL_31:
      sub_1BE4D28(Instance, v16);
    v17 = 0;
    while ( v17 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v17,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        *(Il2CppObject *)&v32.fields.currentCryptoKey = entity[1];
        *(Il2CppObject *)&v32.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v31, 0LL) )
        {
          v28 = entity;
          *(_QWORD *)(v19 + 112) = entity;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 112), (int64_t)v28, v22, v23, v24, v25, v26, v27);
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
        v29);
      v30 = *(UnityEngine_Object_o **)(v19 + 104);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v30, 0LL, 0LL) )
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

  if ( (byte_4B62F1D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickChoiceModeItem__, selectItem);
    byte_4B62F1D = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickChoiceModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickChoiceModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickChoiceModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !selectItem )
    sub_1BE4D28(v7, v8);
  selectItem->fields._IsSwapChoice_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v11);
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

  if ( (byte_4B62F22 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickFilter2Kind__, method);
    sub_1BE4ACC(&ServantOperationListViewManager_TypeInfo, v3);
    byte_4B62F22 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_ServantOperationListViewManager_OnClickFilter2Kind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilter2Kind__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickFilter2Kind__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (filter2Kind = sort->fields.filter2Kind, !ServantOperationListViewManager_TypeInfo->_2.cctor_finished)
      && (j_il2cpp_runtime_class_init_0(ServantOperationListViewManager_TypeInfo), (sort = this->fields.sort) == 0LL) )
    {
      sub_1BE4D28(v6, v7);
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

  if ( (byte_4B62F23 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndSelectFilterKind__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickFilterKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62F23 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantOperationListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v11 )
      sub_1BE4D28(v13, v14);
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
    CommonUI__OpenServantFilterSelectMenu_30880700(v11, v17, sort, v16, v12, -1, 0LL);
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

  if ( (byte_4B62F1C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickLockModeItem__, selectItem);
    byte_4B62F1C = 1;
  }
  v5 = Method_ServantOperationListViewManager_OnClickLockModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickLockModeItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickLockModeItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !selectItem )
    sub_1BE4D28(v7, v8);
  selectItem->fields._IsSwapLock_k__BackingField ^= 1u;
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  ServantOperationListViewManager__ModifyLockItem(this, UserSvtId, 0, 0, v10);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v11);
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
  int64_t SelfUserGame; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  ServantOperationListViewItem_o **v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  const MethodInfo *v44; // x2
  int64_t v45; // x22
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v47; // q1
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v52; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v54; // x21
  System_String_o *v55; // x22
  System_Object_array *v56; // x23
  int32_t Rarity; // w27
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x27
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x26
  int32_t v72; // w0
  Il2CppClass *v73; // x8
  int32_t v74; // w25
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x25
  int32_t v82; // w0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x25
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x25
  ServantOperationListViewItem_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x9
  int32_t SvtId_k__BackingField; // w20
  int32_t v100; // w0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x20
  System_String_o *v108; // x20
  System_String_o *v109; // x22
  System_String_o *v110; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v112; // x25
  __int64 v113; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4B62F1E & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, selectItem);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&object___TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BE4ACC(&Rarity_TypeInfo, v16);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickPushModeItem__, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__, v20);
    sub_1BE4ACC(&ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_1BE4ACC(&StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_1BE4ACC(&StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_1BE4ACC(&StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4B62F1E = 1;
  }
  v26 = sub_1BE4D18(ServantOperationListViewManager___c__DisplayClass96_0_TypeInfo);
  ServantOperationListViewManager___c__DisplayClass96_0___ctor(
    (ServantOperationListViewManager___c__DisplayClass96_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_59;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 24) = selectItem;
  v35 = (ServantOperationListViewItem_o **)(v26 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)selectItem, v36, v37, v38, v39, v40, v41);
  v42 = Method_ServantOperationListViewManager_OnClickPushModeItem__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickPushModeItem__ + 83) & 2) != 0 )
    v42 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickPushModeItem__);
  v43 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v42, v42[4]);
  OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  v45 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v45 )
  {
LABEL_13:
    ServantOperationListViewManager__PushRequest(this, *v35, v44);
    return;
  }
  if ( !*v35 )
    goto LABEL_59;
  UserServantEntity_k__BackingField = (*v35)->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_59;
  v47 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v115.fields.fakeValue = v47;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v114 = v115;
  if ( v45 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v114, 0LL) )
    goto LABEL_13;
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
             v45,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_59;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = klass;
  *(_QWORD *)&v116.fields.fakeValue = monitor;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v116, 0LL);
  if ( !v49 )
    goto LABEL_59;
  v52 = DataMasterBase_object__object__int___GetEntity(
          v49,
          SelfUserGame,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v56 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
  if ( !v56 )
LABEL_59:
    sub_1BE4D28(SelfUserGame, v28);
  v64 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v56->max_length )
    goto LABEL_60;
  v56->m_Items[0] = (Il2CppObject *)v64;
  sub_1BE4A70((PartyOrganizationUtility_o *)v56->m_Items, v64, v58, v59, v60, v61, v62, v63);
  if ( !v52 )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v52, 0LL);
  v71 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_60;
  v56->m_Items[1] = (Il2CppObject *)v71;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v56->m_Items[1], v71, v65, v66, v67, v68, v69, v70);
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  v73 = Entity[6].klass;
  *(_QWORD *)&v117.fields.fakeValue = Entity[6].monitor;
  v74 = v72;
  *(_QWORD *)&v117.fields.currentCryptoKey = v73;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v117, 0LL);
  if ( !Master_object )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v74,
                            SelfUserGame,
                            0LL);
  v81 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_60;
  v56->m_Items[2] = (Il2CppObject *)v81;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v56->m_Items[2], v81, v75, v76, v77, v78, v79, v80);
  if ( !*v35 )
    goto LABEL_59;
  SelfUserGame = (int64_t)(*v35)->fields._UserServantEntity_k__BackingField;
  if ( !SelfUserGame )
    goto LABEL_59;
  v82 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (int64_t)Rarity__getRarityType(v82, 0LL);
  v89 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_60;
  v56->m_Items[3] = (Il2CppObject *)v89;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v56->m_Items[3], v89, v83, v84, v85, v86, v87, v88);
  if ( !*v35 )
    goto LABEL_59;
  SelfUserGame = (int64_t)(*v35)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v96 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v56->max_length <= 4 )
    goto LABEL_60;
  v56->m_Items[4] = (Il2CppObject *)v96;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v56->m_Items[4], v96, v90, v91, v92, v93, v94, v95);
  v97 = *v35;
  if ( !*v35 )
    goto LABEL_59;
  v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v97->fields._UserServantEntity_k__BackingField;
  if ( !v98 )
    goto LABEL_59;
  SvtId_k__BackingField = v97->fields._SvtId_k__BackingField;
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v98[6], 0LL);
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            SvtId_k__BackingField,
                            v100,
                            0LL);
  v107 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v56->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v113 = sub_1BE4D4C();
      sub_1BE4BF4(v113, 0LL);
    }
  }
  if ( v56->max_length <= 5 )
LABEL_60:
    sub_1BE4D30(SelfUserGame, v28);
  v56->m_Items[5] = (Il2CppObject *)v107;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v56->m_Items[5], v107, v101, v102, v103, v104, v105, v106);
  v108 = System_String__Format_62713316(v55, v56, 0LL);
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v112 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v112,
    (Il2CppObject *)v26,
    Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__0__,
    0LL);
  SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_59;
  CommonUI__OpenConfirmDialog_30873636(
    (CommonUI_o *)Instance,
    v54,
    v108,
    v109,
    v110,
    v112,
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
  PartyOrganizationUtility_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4B62F2A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickScaleChange__, method);
    byte_4B62F2A = 1;
  }
  v3 = Method_ServantOperationListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    p_seed = (PartyOrganizationUtility_o *)&v14->fields.seed;
    p_seed[2].fields._CachedQuestPhase_k__BackingField = v15;
    sub_1BE4A70(p_seed, (int64_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BE4D28(sort, v5);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  ServantOperationListViewManager__ModifyList(this, 1, v20);
  ServantOperationListViewManager__SetMode_33467844(this, 2, v21);
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
  if ( (byte_4B62F1A & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, selectItem);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickSelectListView__, v6);
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(&StringLiteral_12568/*"SUM_INFO"*/, v7);
    byte_4B62F1A = 1;
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
      v9 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickSelectListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    this = (ServantOperationListViewManager_o *)v4->fields.parentManager;
    --v4->fields.selectSum;
    if ( this )
    {
      ServantOperationManager__setServant((ServantOperationManager_o *)this, 0, 0LL);
      selectDoneLabel = v4->fields.selectDoneLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
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
          this = (ServantOperationListViewManager_o *)System_String__Format_62713180(
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
    v26 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickSelectListView__);
  v27 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v26, v26[4]);
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
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
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
          this = (ServantOperationListViewManager_o *)System_String__Format_62713180(
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
    sub_1BE4D28(this, selectItem);
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

  if ( (byte_4B62F26 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B62F26 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantOperationListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B62F20 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndSelectSortKind__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickSortKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62F20 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantOperationListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    kind = this->fields.kind;
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1BE4D28(v13, v14);
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

  if ( (byte_4B62F2D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndClickTabChoice__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickTabChoice__, v4);
    byte_4B62F2D = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
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

  if ( (byte_4B62F2C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndClickTabLock__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickTabLock__, v4);
    byte_4B62F2C = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabLock__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v8 = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
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

  if ( (byte_4B62F2E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndClickTabPush__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickTabPush__, v4);
    byte_4B62F2E = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_ServantOperationListViewManager_OnClickTabPush__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
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

  if ( (byte_4B62F2B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, method);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndClickTabStatus__, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnClickTabStatus__, v4);
    byte_4B62F2B = 1;
  }
  if ( this->fields.modeKind )
  {
    v5 = Method_ServantOperationListViewManager_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantOperationListViewManager_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ServantOperationListViewManager__ReleaseAll(this, v7);
    v8 = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
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

  if ( (byte_4B62F12 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62F12 = 1;
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
          sub_1BE4D28(v8, v7);
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

  if ( (byte_4B62F1F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndCardFavoriteRequest__, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62F1F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServantEntity_k__BackingField = selectItem->fields._UserServantEntity_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v51, 0LL);
  v26 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantOperationListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                      UserServantEntity_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          UserServantEntity_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          UserServantEntity_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          UserServantEntity_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          UserServantEntity_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServantEntity_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServantEntity_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                  UserServantEntity_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                       UserServantEntity_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          UserServantEntity_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServantEntity_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BE4D28(limitCountSupport, v14);
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

  if ( (byte_4B62F04 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__, v3);
    byte_4B62F04 = 1;
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
                                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Item__);
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
    sub_1BE4D28(parentManager, method);
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

  if ( (byte_4B62F19 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v4);
    byte_4B62F19 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  this->fields.sellEnableRestCnt = 0;
  if ( !itemList )
LABEL_10:
    sub_1BE4D28(itemList, method);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v6,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62F11 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__get_Count__, v9);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B62F11 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantOperationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantOperationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantOperationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantOperationListViewObject__Dispose__);
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
  if ( (byte_4B62F10 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, item);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(&StringLiteral_12568/*"SUM_INFO"*/, v6);
    byte_4B62F10 = 1;
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
      this = (ServantOperationListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
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
          this = (ServantOperationListViewManager_o *)System_String__Format_62713180(
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
    sub_1BE4D28(this, item);
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

  if ( (byte_4B62F35 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_SetDragEnd__, v4);
    sub_1BE4ACC(&StringLiteral_12568/*"SUM_INFO"*/, v5);
    byte_4B62F35 = 1;
  }
  v6 = Method_ServantOperationListViewManager_SetDragEnd__;
  if ( (*((_BYTE *)Method_ServantOperationListViewManager_SetDragEnd__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BE4AE4(Method_ServantOperationListViewManager_SetDragEnd__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
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
        v14 = System_String__Format_62713180(v20, v25, v26, 0LL),
        !selectDoneLabel) )
  {
LABEL_19:
    sub_1BE4D28(v14, v15);
  }
  UILabel__set_text(selectDoneLabel, v14, 0LL);
  ServantOperationListViewManager__RefrashListDisp(this, v27);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BE2130;
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

  if ( (byte_4B62F33 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v8);
    sub_1BE4ACC(&ServantOperationListViewObject_TypeInfo, v9);
    byte_4B62F33 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_14;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)itemSortList,
           index,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  v13 = (ServantOperationListViewItem_o *)Item;
  if ( !Item )
  {
LABEL_16:
    ServantOperationListViewManager__SetIsItemDragSelect(this, v13, isDragSelect, v12);
    sub_1BE4D28(v17, v18);
  }
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1BE4FE8(Item);
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
    sub_1BE4D28(itemSortList, *(_QWORD *)&index);
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
  if ( (byte_4B62F34 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&startIndex);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v9);
    byte_4B62F34 = 1;
  }
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_BE2130;
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
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BE4D28(itemSortList, *(_QWORD *)&startIndex);
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

  if ( (byte_4B62F25 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v3);
    byte_4B62F25 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BE4D28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, item);
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
  if ( (byte_4B62F32 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&start);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v8);
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(&ServantOperationListViewObject_TypeInfo, v9);
    byte_4B62F32 = 1;
  }
  parentManager = v6->fields.parentManager;
  if ( !parentManager )
LABEL_20:
    sub_1BE4D28(this, *(_QWORD *)&start);
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
                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    v17 = (ServantOperationListViewManager_o *)sub_1BE4FE8(this);
    ServantOperationListViewManager__SetDragSelect(v17, v18, v19, v20);
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
  v4[1].fields._normalFollowerInfo = (struct FollowerInfo_o *)SortInfo;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 184);
  sub_1BE4A70(v4, (int64_t)SortInfo, v6, v7, v8, v9, v10, v11);
  klass = (ListViewSort_o *)v4->klass;
  if ( !v4->klass )
    sub_1BE4D28(0LL, v12);
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onSelectServant,
    (int64_t)onSelectServant,
    (int64_t)onSelectServant,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationListViewManager__SetMode_33467844(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewManager__SetMode_33467844(
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

  if ( (byte_4B62F0F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&initMode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v6);
    byte_4B62F0F = 1;
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
      sub_1BE4D28(itemList, v9);
    v11 = 0;
    v12 = 0;
    while ( v12 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v12,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4B62F0E & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(&ServantOperationListViewObject_TypeInfo, obj);
    byte_4B62F0E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantOperationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
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
    sub_1BE4A70(
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
    sub_1BE4D28(sort, *(_QWORD *)&scaleKind);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  const MethodInfo *v35; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B62EFF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, userServantEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B62EFF = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  if ( userServantEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
      byte_4B61717 = 1;
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
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1BE4D30(Instance, v13);
        v17 = userServantEntities->m_Items[v16];
        if ( !v17 )
          break;
        v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
        v20 = equipIdList;
        v19 = svtIdList;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v38;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v37, 0LL);
        if ( !userGameEntity )
          break;
        favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
        v22 = Instance;
        v23 = (ServantOperationListViewItem_o *)sub_1BE4D18(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor(v23, v16, v17, v19, v20, v22 == favoriteUserSvtId, v24);
        Instance = (int64_t)this->fields.itemList;
        if ( !Instance )
          break;
        v31 = *(_QWORD *)(Instance + 16);
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v31 )
          break;
        v33 = *(int *)(Instance + 24);
        if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v23,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * v33;
          *(_DWORD *)(Instance + 24) = v33 + 1;
          *(_QWORD *)(v34 + 32) = v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v23, v25, v26, v27, v28, v29, v30);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v23, v35);
        max_length = userServantEntities->max_length;
        if ( (int)++v16 >= max_length )
          return v16;
      }
LABEL_28:
      sub_1BE4D28(Instance, v13);
    }
  }
  LODWORD(v16) = 0;
  return v16;
}


int32_t __fastcall ServantOperationListViewManager__SetSellEnableRestCount_33460148(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  const MethodInfo *v31; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h]

  if ( (byte_4B62F00 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userCommandCodeEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B62F00 = 1;
  }
  if ( userCommandCodeEntities )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
          sub_1BE4D30(Instance, v12);
        v16 = userCommandCodeEntities->m_Items[v15];
        if ( !v16 )
          break;
        v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v33, 0LL);
        if ( !v14 )
          break;
        v18 = System_Collections_Generic_List_long___Contains(
                v14,
                Instance,
                (const MethodInfo_35D45D0 *)Method_System_Collections_Generic_List_long__Contains__);
        v19 = (ServantOperationListViewItem_o *)sub_1BE4D18(ServantOperationListViewItem_TypeInfo);
        ServantOperationListViewItem___ctor_33445856(v19, v15, v16, v18, v20);
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
            (Il2CppObject *)v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = v27 + 8 * v29;
          *(_DWORD *)(Instance + 24) = v29 + 1;
          *(_QWORD *)(v30 + 32) = v19;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v19, v21, v22, v23, v24, v25, v26);
        }
        ServantOperationListViewManager__ChangeSellEnableRestCount(this, 1, v19, v31);
        max_length = userCommandCodeEntities->max_length;
        if ( (int)++v15 >= max_length )
          return v15;
      }
LABEL_22:
      sub_1BE4D28(Instance, v12);
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

  if ( (byte_4B62F29 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17765/*"btn_sort_up"*/, v3);
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, v4);
    sub_1BE4ACC(&StringLiteral_17809/*"btn_txt_new"*/, v5);
    sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v6);
    sub_1BE4ACC(&StringLiteral_17816/*"btn_txt_old"*/, v7);
    sub_1BE4ACC(&StringLiteral_17762/*"btn_sort_down"*/, v8);
    byte_4B62F29 = 1;
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
        v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17816/*"btn_txt_old"*/ : &StringLiteral_17809/*"btn_txt_new"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
        v17 = this->fields.sort;
        if ( v17 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v18 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
            v19 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
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
        v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17856/*"btn_txt_up"*/ : &StringLiteral_17799/*"btn_txt_down"*/);
        UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
        v17 = this->fields.sort;
        if ( v17 )
        {
          sort = (ListViewSort_o *)this->fields.sortOrderSprite;
          if ( sort )
          {
            v18 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
            v19 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_36:
    sub_1BE4D28(sort, v10);
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

  if ( (byte_4B62F01 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BE4ACC(&ShopRootComponent_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_4B62F01 = 1;
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
        (statusLabel = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)statusLabel[1].monitor) == 0LL )
  {
    sub_1BE4D28(statusLabel, v13);
  }
  methodPtr_low = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(statusLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ShopRootComponent_c *)statusLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopRootComponent_TypeInfo )
  {
    ShopRootComponent__SetStatusTitleInfo((ShopRootComponent_o *)statusLabel, this->fields.modeKind == 0, 0LL);
  }
  else
  {
    v21 = (ServantOperationListViewManager_o *)sub_1BE4FE8(statusLabel);
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
    sub_1BE4D28(this, tabButton);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  int32_t kind; // w21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1
  System_Int64_array *v21; // [xsp+0h] [xbp-30h] BYREF
  System_Int64_array *changeIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B62F30 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, onRequestEnd);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v10);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_1BE4ACC(&Method_ServantOperationListViewManager_EndStatusSync__, v13);
    byte_4B62F30 = 1;
  }
  v21 = 0LL;
  changeIds = 0LL;
  this->fields.onRequestEnd = onRequestEnd;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onRequestEnd,
    (int64_t)onRequestEnd,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ServantOperationListViewManager__GetSwapList(this, v14, &changeIds, &v21, v15) )
  {
    kind = this->fields.kind;
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantOperationListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( kind == 2 )
    {
      Request_object = NetworkManager__getRequest_object_(
                         v18,
                         (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        CommandCodeStatusSyncRequest__beginRequest(
          (CommandCodeStatusSyncRequest_o *)Request_object,
          changeIds,
          v21,
          this->fields.modeKind == 1,
          this->fields.modeKind == 2,
          0LL);
        return;
      }
LABEL_13:
      sub_1BE4D28(Request_object, v20);
    }
    Request_object = NetworkManager__getRequest_object_(
                       v18,
                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !Request_object )
      goto LABEL_13;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)Request_object,
      changeIds,
      v21,
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

  if ( (byte_4B62F05 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, qp);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_1BE4ACC(&ServantOperationListViewItem_TypeInfo, v10);
    byte_4B62F05 = 1;
  }
  *qp = 0;
  *mana = 0;
  *rarePri = 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_20:
    sub_1BE4D28(itemList, qp);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v12,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4B62F2F & 1) == 0 )
  {
    this = (ServantOperationListViewManager_o *)sub_1BE4ACC(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  item);
    byte_4B62F2F = 1;
  }
  if ( !item )
    sub_1BE4D28(this, item);
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
  *id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
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

  if ( (byte_4B62F1B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&selectNum);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B62F1B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BE4D28(itemList, *(_QWORD *)&selectNum);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B62EF9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B62EF9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41702652(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            goto LABEL_21;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v14,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B62EF8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B62EF8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantOperationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantOperationListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BE4D28(objectList, v10);
  v12 = 0;
  while ( v12 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v12,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantOperationListViewObject__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      v23 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62F39 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantOperationListViewManager___c_TypeInfo, v1);
    byte_4B62F39 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantOperationListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantOperationListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantOperationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B62F3A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__, v6);
    byte_4B62F3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ServantOperationListViewManager___c__DisplayClass96_0__OnClickPushModeItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30874304(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BE4D28(Instance, v8);
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
    sub_1BE4D28(0LL, method);
  ServantOperationListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}