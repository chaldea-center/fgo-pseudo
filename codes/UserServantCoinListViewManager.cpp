void __fastcall UserServantCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389378 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&UserServantCoinListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_15361/*"UserServantCoinList1"*/);
    byte_4389378 = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_15361/*"UserServantCoinList1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantCoinListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall UserServantCoinListViewManager___ctor(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserServantCoinListViewManager__ChangeIconScale(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UserServantCoinListViewManager_o *v8; // x19
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v15; // x22
  ListViewItem_o *v16; // x20
  __int64 v17; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_4389377 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (UserServantCoinListViewManager_o *)sub_B775C4(&UserServantCoinListViewItem_TypeInfo);
    byte_4389377 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v11 = 1;
LABEL_9:
    v8->fields.scaleType = v11;
    v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = v8->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v8->fields.scaleType,
        (this = (UserServantCoinListViewManager_o *)v8->fields.sort) == 0LL)
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL), (itemList = v8->fields.itemList) == 0LL) )
  {
LABEL_27:
    sub_B7769C(this, method);
  }
  v15 = 0LL;
  while ( (__int64)v15 < itemList->fields._size )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v16 = itemList->fields._items->m_Items[v15];
    if ( v16 )
    {
      v17 = *(&UserServantCoinListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (UserServantCoinListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == UserServantCoinListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (UserServantCoinListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (UserServantCoinListViewManager_o *)v16->fields.viewObject;
          if ( !this )
            goto LABEL_27;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v16, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v15;
    if ( !itemList )
      goto LABEL_27;
  }
  UserServantCoinListViewManager__SetMode_21769248(v8, 2, v13);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


void __fastcall UserServantCoinListViewManager__CreateList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x25
  UserServantCoinListViewItem_o *v11; // x0
  const MethodInfo *v12; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x24
  __int64 v14; // x9
  UILabel_o *emptyMessageLabel; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserServantCoinListViewManager_c *v22; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v24; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ListViewSort_o *v32; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v36; // x1
  UserServantCoinListViewManager_o *v37; // x0

  if ( (byte_438936D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UserServantCoinListViewItem_TypeInfo);
    sub_B775C4(&UserServantCoinListViewManager_TypeInfo);
    sub_B775C4(&UserSvtCoinEntity_TypeInfo);
    sub_B775C4(&StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_438936D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !gameObject )
    goto LABEL_38;
  v5 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)gameObject + 4);
  if ( !v5 )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)gameObject + 4),
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_16:
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
      v22 = UserServantCoinListViewManager_TypeInfo;
      if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
        v22 = UserServantCoinListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v22->static_fields->servantSortInfo;
      v24 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)v24,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      gameObject = this->fields.sort;
      if ( gameObject )
      {
        ListViewSort__Load((ListViewSort_o *)gameObject, 0LL);
        v32 = *p_sort;
        if ( *p_sort )
        {
          sortKind = v32->fields.sortKind;
          if ( sortKind == 2
            || sortKind == 14
            || (sortKind & 0xFFFFFFFE) == 26
            || (v32->fields.sortKind = 27, (v32 = *p_sort) != 0LL) )
          {
            iconScaleKind = v32->fields.iconScaleKind;
            this->fields.scaleType = iconScaleKind;
            if ( iconScaleKind < 2 )
            {
              normalSizeSeed = this->fields.normalSizeSeed;
            }
            else if ( iconScaleKind == 2 )
            {
              normalSizeSeed = this->fields.smallSizeSeed;
            }
            else
            {
              if ( iconScaleKind != 3 )
              {
LABEL_36:
                ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
                ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
                v37 = this;
                goto LABEL_37;
              }
              normalSizeSeed = this->fields.extremelySmallSizeSeed;
            }
            this->fields.seed = normalSizeSeed;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.seed,
              (System_Int32_array **)normalSizeSeed,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            goto LABEL_36;
          }
        }
      }
    }
LABEL_38:
    sub_B7769C(gameObject, v4);
  }
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    itemList = this->fields.itemList;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v5,
             v8,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    v11 = (UserServantCoinListViewItem_o *)sub_B77694(UserServantCoinListViewItem_TypeInfo);
    v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)v11;
    if ( Item )
    {
      v14 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (UserSvtCoinEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
    }
    UserServantCoinListViewItem___ctor(v11, v8, (UserSvtCoinEntity_o *)Item, v12);
    if ( !itemList )
      goto LABEL_38;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      v13,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( ++v8 >= v7 )
      goto LABEL_16;
  }
  v37 = (UserServantCoinListViewManager_o *)sub_B77990(Item);
LABEL_37:
  UserServantCoinListViewManager__SetFilterButtonImage(v37, v36);
}


void __fastcall UserServantCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438936A & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewManager_TypeInfo);
    byte_438936A = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall UserServantCoinListViewManager__DestroyList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438936F & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewManager_TypeInfo);
    byte_438936F = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  v3 = UserServantCoinListViewManager_TypeInfo;
  if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v3 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantSortInfo = UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        sub_B7769C(v5, v6);
    }
    ListViewSort__Save(servantSortInfo, 0LL);
  }
}


void __fastcall UserServantCoinListViewManager__EndSelectSortKind(
        UserServantCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_B7769C(0LL, isDecide);
  UserServantCoinSortSelectMenu__Close_21781880(sortSelectMenu, 0LL, method);
  UserServantCoinListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


System_String_o *__fastcall UserServantCoinListViewManager__GetScaleButtonSpriteName(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall UserServantCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438936B & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewManager_TypeInfo);
    byte_438936B = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( (BYTE3(UserServantCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall UserServantCoinListViewManager__ModifyItem(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
}


void __fastcall UserServantCoinListViewManager__OnClickListView(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall UserServantCoinListViewManager__OnClickSelectListView(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_CallbackFunc_o *callbackFunc; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x10
  __int64 v8; // x8
  int32_t v9; // w2
  UserServantCoinListViewManager_o *v10; // x0
  ListViewObject_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4389373 & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewItem_TypeInfo);
    byte_4389373 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
      sub_B7769C(callbackFunc, obj);
    v7 = *(&UserServantCoinListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (UserServantCoinListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == UserServantCoinListViewItem_TypeInfo )
    {
      v8 = *(_QWORD *)&linkItem[1].fields.selectNum;
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 24);
      else
        v9 = 0;
      UserServantCoinListViewManager_CallbackFunc__Invoke(callbackFunc, 1, v9, 0LL);
    }
    else
    {
      v10 = (UserServantCoinListViewManager_o *)sub_B77990(obj->fields.linkItem);
      UserServantCoinListViewManager__OnLongPushListView(v10, v11, v12);
    }
  }
}


void __fastcall UserServantCoinListViewManager__OnClickSortAscendingOrder(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4389375 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389375 = 1;
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


void __fastcall UserServantCoinListViewManager__OnClickSortKind(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  UserServantCoinSortSelectMenu_CallbackFunc_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4389374 & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_UserServantCoinListViewManager_EndSelectSortKind__);
    byte_4389374 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v5 = (UserServantCoinSortSelectMenu_CallbackFunc_o *)sub_B77694(UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    UserServantCoinSortSelectMenu_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_UserServantCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectMenu )
      sub_B7769C(v6, v7);
    UserServantCoinSortSelectMenu__Open(sortSelectMenu, 0, sort, v5, v8);
  }
}


void __fastcall UserServantCoinListViewManager__OnMoveEnd(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4389372 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389372 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      ActionExtensions__Call(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewManager__RequestListObject(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4389371 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__get_Count__);
    sub_B775C4(&Method_UserServantCoinListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4389371 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserServantCoinListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserServantCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserServantCoinListViewObject__Init(
        (UserServantCoinListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
  }
}


void __fastcall UserServantCoinListViewManager__SetFilterButtonImage(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438936E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17297/*"btn_bg_05"*/);
    sub_B775C4(&StringLiteral_17298/*"btn_bg_06"*/);
    sub_B775C4(&StringLiteral_372/*"#FE4545"*/);
    sub_B775C4(&StringLiteral_357/*"#000000"*/);
    byte_438936E = 1;
  }
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17297/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17298/*"btn_bg_06"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_357/*"#000000"*/
     : (System_String_o **)&StringLiteral_372/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B7769C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


void __fastcall UserServantCoinListViewManager__SetMode(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        UserServantCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserServantCoinListViewManager__SetMode_21769248(this, mode, v10);
}


void __fastcall UserServantCoinListViewManager__SetMode_21769248(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      v6 = 4;
      break;
    case 2:
      v6 = 3;
      break;
    case 1:
      v6 = 2;
      break;
    default:
      return;
  }
  UserServantCoinListViewManager__RequestListObject(this, v6, 0.0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewManager__SetObjectItem(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_4389370 & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_B775C4(&UserServantCoinListViewObject_TypeInfo);
    byte_4389370 = 1;
  }
  if ( !obj
    || (v6 = *(&UserServantCoinListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserServantCoinListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserServantCoinListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  UserServantCoinListViewObject__Init(
    (UserServantCoinListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall UserServantCoinListViewManager__SetSortButtonImage(
        UserServantCoinListViewManager_o *this,
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_4389376 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_4389376 = 1;
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
      goto LABEL_36;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_36;
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
    if ( v8 )
    {
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
LABEL_32:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
              return;
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
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7769C(sort, v4);
  }
}


void __fastcall UserServantCoinListViewManager__add_callbackFunc(
        UserServantCoinListViewManager_o *this,
        UserServantCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserServantCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinListViewManager_o *v10; // x0
  UserServantCoinListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4389366 & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4389366 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v7->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_B77990(v7);
  UserServantCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall UserServantCoinListViewManager__add_callbackFunc2(
        UserServantCoinListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4389368 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4389368 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_B77990(v7);
  UserServantCoinListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_UserServantCoinListViewObject__o *__fastcall UserServantCoinListViewManager__get_ObjectList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438936C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438936C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserServantCoinListViewObject__o *)v3;
}


void __fastcall UserServantCoinListViewManager__remove_callbackFunc(
        UserServantCoinListViewManager_o *this,
        UserServantCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserServantCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4389367 & 1) == 0 )
  {
    sub_B775C4(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4389367 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v7->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_B77990(v7);
  UserServantCoinListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall UserServantCoinListViewManager__remove_callbackFunc2(
        UserServantCoinListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4389369 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4389369 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_B77990(v7);
  UserServantCoinListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewManager_CallbackFunc___ctor(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserServantCoinListViewManager_CallbackFunc__BeginInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = itemId;
  v13 = kind;
  if ( (byte_4388915 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UserServantCoinListViewManager_ResultKind_TypeInfo);
    byte_4388915 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(UserServantCoinListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&itemId);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall UserServantCoinListViewManager_CallbackFunc__EndInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewManager_CallbackFunc__Invoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  UserServantCoinListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  UserServantCoinListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  UserServantCoinListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserServantCoinListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)itemId, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)itemId, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)itemId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)itemId,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)itemId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)itemId, v22);
    goto LABEL_38;
  }
}