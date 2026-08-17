void UserServantCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BCAE & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&UserServantCoinListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_15839/*"UserServantCoinList1"*/);
    byte_596BCAE = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_15839/*"UserServantCoinList1"*/, 27, 1, 0);
  UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserServantCoinListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantCoinListViewManager___ctor(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserServantCoinListViewManager__ChangeIconScale(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  UserServantCoinListViewManager_o *v11; // x0
  int v12; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v18; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_596BCAD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserServantCoinListViewItem_TypeInfo);
    byte_596BCAD = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = this;
    v12 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = this;
    v12 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = this;
    v12 = 1;
LABEL_9:
    v11->fields.seed = smallSizeSeed;
    p_seed = &v11->fields.seed;
    *((_DWORD *)p_seed + 79) = v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0) )
  {
LABEL_23:
    sub_2213CDC(sort, method);
  }
  v16 = 0;
  while ( v16 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v16,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v18 = (ListViewItem_o *)Item;
      naturalAligment = UserServantCoinListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserServantCoinListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UserServantCoinListViewItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v15);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          sort = (ListViewSort_o *)v18->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v18, this->fields.seed, 0);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v16;
    if ( !sort )
      goto LABEL_23;
  }
  UserServantCoinListViewManager__SetMode_40612960(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserServantCoinListViewManager__CreateList(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_ObjectModel_Collection_T__o *v7; // x20
  int32_t Count; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w21
  int32_t v12; // w22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *Item; // x25
  UserServantCoinListViewItem_o *v15; // x24
  const MethodInfo *v16; // x3
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  UILabel_o *emptyMessageLabel; // x20
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UserServantCoinListViewManager_c *v35; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v37; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ListViewSort_o *v45; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v49; // x1

  if ( (byte_596BCA3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UserServantCoinListViewItem_TypeInfo);
    sub_2213A60(&UserServantCoinListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_596BCA3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !gameObject )
    goto LABEL_35;
  v7 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)gameObject + 5);
  if ( !v7 )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            *((System_Collections_ObjectModel_Collection_T__o **)gameObject + 5),
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               v7,
               v12,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__get_Item__);
      v15 = (UserServantCoinListViewItem_o *)sub_2213CCC(UserServantCoinListViewItem_TypeInfo);
      UserServantCoinListViewItem___ctor(v15, v12, (UserSvtCoinEntity_o *)Item, v16);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v15;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_35:
    sub_2213CDC(gameObject, v4);
  }
LABEL_16:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_35;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0);
  v35 = UserServantCoinListViewManager_TypeInfo;
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v28, v29);
    v35 = UserServantCoinListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v35->static_fields->servantSortInfo;
  v37 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v37, v29, v30, v31, v32, v33, v34);
  gameObject = this->fields.sort;
  if ( !gameObject )
    goto LABEL_35;
  ListViewSort__Load((ListViewSort_o *)gameObject, 0);
  v45 = *p_sort;
  if ( !*p_sort )
    goto LABEL_35;
  sortKind = v45->fields.sortKind;
  if ( sortKind != 2 && sortKind != 14 && (sortKind & 0xFFFFFFFE) != 0x1A )
    v45->fields.sortKind = 27;
  iconScaleKind = v45->fields.iconScaleKind;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  UserServantCoinListViewManager__SetFilterButtonImage(this, v49);
}


void UserServantCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserServantCoinListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596BCA0 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_TypeInfo);
    byte_596BCA0 = 1;
  }
  v3 = UserServantCoinListViewManager_TypeInfo;
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v1, v2);
    v3 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void UserServantCoinListViewManager__DestroyList(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UserServantCoinListViewManager_c *v5; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596BCA5 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_TypeInfo);
    byte_596BCA5 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  v5 = UserServantCoinListViewManager_TypeInfo;
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v3, v4);
    v5 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v5->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      servantSortInfo = UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        sub_2213CDC(v7, v8);
    }
    ListViewSort__Save(servantSortInfo, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserServantCoinListViewManager__EndSelectSortKind(
        UserServantCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_2213CDC(0, isDecide);
  UserServantCoinSortSelectMenu__Close_40625972(sortSelectMenu, 0, method);
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
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void UserServantCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserServantCoinListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596BCA1 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_TypeInfo);
    byte_596BCA1 = 1;
  }
  v3 = UserServantCoinListViewManager_TypeInfo;
  if ( !*(&UserServantCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo, v1, v2);
    v3 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
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
  __int64 v3; // x3
  UserServantCoinListViewManager_o *v5; // x20
  struct UserServantCoinListViewManager_CallbackFunc_o *callbackFunc; // x8
  __int64 naturalAligment; // x10
  struct UICommonButton_o *sortKindButton; // x9
  __int64 m_CancellationTokenSource_low; // x2
  UserServantCoinListViewManager_o *v10; // x0
  ListViewObject_o *v11; // x1
  const MethodInfo *v12; // x2

  v5 = this;
  if ( (byte_596BCA9 & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_2213A60(&UserServantCoinListViewItem_TypeInfo);
    byte_596BCA9 = 1;
  }
  callbackFunc = v5->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj || (this = (UserServantCoinListViewManager_o *)obj->fields.linkItem) == 0 )
      sub_2213CDC(this, obj);
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
      v10 = (UserServantCoinListViewManager_o *)sub_221405C(this, UserServantCoinListViewItem_TypeInfo, method, v3);
      UserServantCoinListViewManager__OnLongPushListView(v10, v11, v12);
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

  if ( (byte_596BCAB & 1) == 0 )
  {
    sub_2213A60(&Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__);
    byte_596BCAB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BCAA & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UserServantCoinListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_UserServantCoinListViewManager_OnClickSortKind__);
    byte_596BCAA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserServantCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_UserServantCoinListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v7 = (UserServantCoinSortSelectMenu_CallbackFunc_o *)sub_2213CCC(UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    UserServantCoinSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserServantCoinListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectMenu )
      sub_2213CDC(v9, v10);
    UserServantCoinSortSelectMenu__Open(sortSelectMenu, 0, sort, v7, v11);
  }
}


void UserServantCoinListViewManager__OnMoveEnd(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_596BCA8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BCA8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BCA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__get_Count__);
    sub_2213A60(&Method_UserServantCoinListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BCA7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)UserServantCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_UserServantCoinListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      UserServantCoinListViewObject__Init_40612808((UserServantCoinListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
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

  if ( (byte_596BCA4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18202/*"btn_bg_05"*/);
    sub_2213A60(&StringLiteral_18203/*"btn_bg_06"*/);
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    byte_596BCA4 = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_18202/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_18203/*"btn_bg_06"*/;
    v5 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_2213CDC(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void UserServantCoinListViewManager__SetMode(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        UserServantCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  UserServantCoinListViewManager__SetMode_40612960(this, mode, v10);
}


void UserServantCoinListViewManager__SetMode_40612960(
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BCA6 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewObject_TypeInfo);
    byte_596BCA6 = 1;
  }
  if ( obj
    && (naturalAligment = UserServantCoinListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserServantCoinListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == UserServantCoinListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  UserServantCoinListViewObject__Init_40612808((UserServantCoinListViewObject_o *)v7, v8, 0, 0.0, method);
}


void UserServantCoinListViewManager__SetSortButtonImage(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596BCAC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596BCAC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_30:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v5);
  }
}


void UserServantCoinListViewManager__add_callbackFunc(
        UserServantCoinListViewManager_o *this,
        UserServantCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserServantCoinListViewManager_o *v11; // x0
  UserServantCoinListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BC9C & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_596BC9C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v6->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinListViewManager_o *)sub_221405C(
                                              v6,
                                              UserServantCoinListViewManager_CallbackFunc_TypeInfo,
                                              v7,
                                              v8);
  UserServantCoinListViewManager__remove_callbackFunc(v11, v12, v13);
}


void UserServantCoinListViewManager__add_callbackFunc2(
        UserServantCoinListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserServantCoinListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BC9E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BC9E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  UserServantCoinListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_UserServantCoinListViewObject__o *UserServantCoinListViewManager__get_ObjectList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BCA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BCA2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserServantCoinListViewObject__o *)v3;
}


void UserServantCoinListViewManager__remove_callbackFunc(
        UserServantCoinListViewManager_o *this,
        UserServantCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserServantCoinListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BC9D & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    byte_596BC9D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserServantCoinListViewManager_CallbackFunc_c *)v6->klass != UserServantCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinListViewManager_o *)sub_221405C(
                                              v6,
                                              UserServantCoinListViewManager_CallbackFunc_TypeInfo,
                                              v7,
                                              v8);
  UserServantCoinListViewManager__add_callbackFunc2(v11, v12, v13);
}


void UserServantCoinListViewManager__remove_callbackFunc2(
        UserServantCoinListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596BC9F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BC9F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  UserServantCoinListViewManager__DeleteContinueData(v11);
}


void UserServantCoinListViewManager_CallbackFunc___ctor(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20036B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200365C;
}


System_IAsyncResult_o *UserServantCoinListViewManager_CallbackFunc__BeginInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = itemId;
  if ( (byte_596BCAF & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_ResultKind_TypeInfo);
    byte_596BCAF = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(UserServantCoinListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void UserServantCoinListViewManager_CallbackFunc__EndInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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