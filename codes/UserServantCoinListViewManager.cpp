void UserServantCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C229DA & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&UserServantCoinListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_15228/*"UserServantCoinList1"*/);
    byte_4C229DA = 1;
  }
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_15228/*"UserServantCoinList1"*/, 27, 1, 0);
  UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C2D434((CGThumbnailListItem_o *)UserServantCoinListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserServantCoinListViewManager___ctor(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserServantCoinListViewManager__ChangeIconScale(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  UserServantCoinListViewManager_o *v7; // x0
  int v8; // w8
  CGThumbnailListItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v14; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_4C229D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UserServantCoinListViewItem_TypeInfo);
    byte_4C229D9 = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = this;
    v8 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = this;
    v8 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = this;
    v8 = 1;
LABEL_9:
    v7->fields.seed = smallSizeSeed;
    p_seed = (CGThumbnailListItem_o *)&v7->fields.seed;
    p_seed[2].fields.loopIndex = v8;
    sub_1C2D434(p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(sort, method);
  }
  v12 = 0;
  while ( v12 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v12,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (ListViewItem_o *)Item;
      naturalAligment = UserServantCoinListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserServantCoinListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UserServantCoinListViewItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          sort = (ListViewSort_o *)v14->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v14, this->fields.seed, 0);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v12;
    if ( !sort )
      goto LABEL_23;
  }
  UserServantCoinListViewManager__SetMode_33661952(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserServantCoinListViewManager__CreateList(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *Item; // x25
  UserServantCoinListViewItem_o *v11; // x24
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  UILabel_o *emptyMessageLabel; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserServantCoinListViewManager_c *v22; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v24; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v32; // x1

  if ( (byte_4C229CF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UserServantCoinListViewItem_TypeInfo);
    sub_1C2D490(&UserServantCoinListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_14859/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_4C229CF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !gameObject )
    goto LABEL_35;
  v5 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)gameObject + 5);
  if ( !v5 )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            *((System_Collections_ObjectModel_Collection_T__o **)gameObject + 5),
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               v5,
               v8,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Item__);
      v11 = (UserServantCoinListViewItem_o *)sub_1C2D6DC(UserServantCoinListViewItem_TypeInfo);
      UserServantCoinListViewItem___ctor(v11, v8, (UserSvtCoinEntity_o *)Item, v12);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v11,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v11, v13, v14);
      }
      if ( v7 == ++v8 )
        goto LABEL_16;
    }
LABEL_35:
    sub_1C2D6EC(gameObject, v4);
  }
LABEL_16:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_14859/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_35;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0);
  v22 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v22 = UserServantCoinListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v22->static_fields->servantSortInfo;
  v24 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v24, v20, v21);
  gameObject = this->fields.sort;
  if ( !gameObject )
    goto LABEL_35;
  ListViewSort__Load((ListViewSort_o *)gameObject, 0);
  v28 = *p_sort;
  if ( !*p_sort )
    goto LABEL_35;
  sortKind = v28->fields.sortKind;
  if ( sortKind != 2 && sortKind != 14 && (sortKind & 0xFFFFFFFE) != 0x1A )
    v28->fields.sortKind = 27;
  iconScaleKind = v28->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_33;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_33;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_33:
    this->fields.seed = normalSizeSeed;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v26, v27);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  UserServantCoinListViewManager__SetFilterButtonImage(this, v32);
}


void UserServantCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C229CC & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_TypeInfo);
    byte_4C229CC = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void UserServantCoinListViewManager__DestroyList(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C229D1 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_TypeInfo);
    byte_4C229D1 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  v3 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v3 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantSortInfo = UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        sub_1C2D6EC(v5, v6);
    }
    ListViewSort__Save(servantSortInfo, 0);
  }
}


void UserServantCoinListViewManager__EndSelectSortKind(
        UserServantCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_1C2D6EC(0, isDecide);
  UserServantCoinSortSelectMenu__Close_33675020(sortSelectMenu, 0, method);
  UserServantCoinListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


System_String_o *UserServantCoinListViewManager__GetScaleButtonSpriteName(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void UserServantCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C229CD & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_TypeInfo);
    byte_4C229CD = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void UserServantCoinListViewManager__ModifyItem(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
}


void UserServantCoinListViewManager__OnClickListView(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void UserServantCoinListViewManager__OnClickSelectListView(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_o *v4; // x20
  struct UserServantCoinListViewManager_CallbackFunc_o *callbackFunc; // x8
  __int64 naturalAligment; // x10
  struct UICommonButton_o *sortKindButton; // x9
  __int64 m_CancellationTokenSource_low; // x2
  UserServantCoinListViewManager_o *v9; // x0
  ListViewObject_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C229D5 & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_1C2D490(&UserServantCoinListViewItem_TypeInfo);
    byte_4C229D5 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj || (this = (UserServantCoinListViewManager_o *)obj->fields.linkItem) == 0 )
      sub_1C2D6EC(this, obj);
    naturalAligment = UserServantCoinListViewItem_TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserServantCoinListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == UserServantCoinListViewItem_TypeInfo )
    {
      sortKindButton = this->fields.sortKindButton;
      if ( sortKindButton )
        m_CancellationTokenSource_low = LODWORD(sortKindButton->fields.m_CancellationTokenSource);
      else
        m_CancellationTokenSource_low = 0;
      ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        m_CancellationTokenSource_low,
        callbackFunc->fields.method);
    }
    else
    {
      v9 = (UserServantCoinListViewManager_o *)sub_1C2D9AC(this);
      UserServantCoinListViewManager__OnLongPushListView(v9, v10, v11);
    }
  }
}


void UserServantCoinListViewManager__OnClickSortAscendingOrder(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C229D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__);
    byte_4C229D7 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void UserServantCoinListViewManager__OnClickSortKind(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  UserServantCoinSortSelectMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4C229D6 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_UserServantCoinListViewManager_OnClickSortKind__);
    byte_4C229D6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserServantCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v7 = (UserServantCoinSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    UserServantCoinSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserServantCoinListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectMenu )
      sub_1C2D6EC(v9, v10);
    UserServantCoinSortSelectMenu__Open(sortSelectMenu, 0, sort, v7, v11);
  }
}


void UserServantCoinListViewManager__OnMoveEnd(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4C229D4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C229D4 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      ActionExtensions__Call(callbackFunc2, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UserServantCoinListViewManager__RequestListObject(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C229D3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__get_Count__);
    sub_1C2D490(&Method_UserServantCoinListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C229D3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserServantCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserServantCoinListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      UserServantCoinListViewObject__Init_33661800((UserServantCoinListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
  }
}


void UserServantCoinListViewManager__SetFilterButtonImage(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C229D0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17434/*"btn_bg_05"*/);
    sub_1C2D490(&StringLiteral_17435/*"btn_bg_06"*/);
    sub_1C2D490(&StringLiteral_423/*"#FE4545"*/);
    sub_1C2D490(&StringLiteral_404/*"#000000"*/);
    byte_4C229D0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_17434/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_404/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_17435/*"btn_bg_06"*/;
    v5 = (System_String_o **)&StringLiteral_423/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_1C2D6EC(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void UserServantCoinListViewManager__SetMode(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        UserServantCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  UserServantCoinListViewManager__SetMode_33661952(this, mode, v6);
}


void UserServantCoinListViewManager__SetMode_33661952(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    UserServantCoinListViewManager__RequestListObject(this, mode + 1, 0.0, v5);
}


void UserServantCoinListViewManager__SetObjectItem(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C229D2 & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_1C2D490(&UserServantCoinListViewObject_TypeInfo);
    byte_4C229D2 = 1;
  }
  if ( !obj
    || (naturalAligment = UserServantCoinListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserServantCoinListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserServantCoinListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  UserServantCoinListViewObject__Init_33661800((UserServantCoinListViewObject_o *)obj, v7, 0, 0.0, method);
}


void UserServantCoinListViewManager__SetSortButtonImage(
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4C229D8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C229D8 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(sort, v4);
  }
}


void UserServantCoinListViewManager__add_callbackFunc(
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

  if ( (byte_4C229C8 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4C229C8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v7->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1C2D9AC(v7);
  UserServantCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


void UserServantCoinListViewManager__add_callbackFunc2(
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

  if ( (byte_4C229CA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C229CA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1C2D9AC(v7);
  UserServantCoinListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_UserServantCoinListViewObject__o *UserServantCoinListViewManager__get_ObjectList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C229CE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C229CE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserServantCoinListViewObject__o *)v3;
}


void UserServantCoinListViewManager__remove_callbackFunc(
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

  if ( (byte_4C229C9 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4C229C9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v7->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1C2D9AC(v7);
  UserServantCoinListViewManager__add_callbackFunc2(v10, v11, v12);
}


void UserServantCoinListViewManager__remove_callbackFunc2(
        UserServantCoinListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4C229CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C229CB = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
  UserServantCoinListViewManager__DeleteContinueData(v10);
}


void UserServantCoinListViewManager_CallbackFunc___ctor(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B740;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B6E8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UserServantCoinListViewManager_CallbackFunc__BeginInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = itemId;
  v15 = kind;
  if ( (byte_4C229DB & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UserServantCoinListViewManager_ResultKind_TypeInfo);
    byte_4C229DB = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             UserServantCoinListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&itemId,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void UserServantCoinListViewManager_CallbackFunc__EndInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void UserServantCoinListViewManager_CallbackFunc__Invoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    itemId,
    this->fields.method);
}