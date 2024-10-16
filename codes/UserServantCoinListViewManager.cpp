void __fastcall UserServantCoinListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB1834 & 1) == 0 )
  {
    sub_1BAB41C(&ListViewSort_TypeInfo, v1);
    sub_1BAB41C(&UserServantCoinListViewManager_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_15256/*"UserServantCoinList1"*/, v3);
    byte_4AB1834 = 1;
  }
  v4 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136084(v4, (System_String_o *)StringLiteral_15256/*"UserServantCoinList1"*/, 27, 1, 0LL);
  UserServantCoinListViewManager_TypeInfo->static_fields->servantSortInfo = v4;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)UserServantCoinListViewManager_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
}


void __fastcall UserServantCoinListViewManager___ctor(UserServantCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserServantCoinListViewManager__ChangeIconScale(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  UserServantCoinListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v17; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4AB1833 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    sub_1BAB41C(&UserServantCoinListViewItem_TypeInfo, v7);
    byte_4AB1833 = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_9:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 79) = v11;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0LL) )
  {
LABEL_23:
    sub_1BAB678(sort, method);
  }
  v15 = 0;
  while ( v15 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v15,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v17 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(UserServantCoinListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserServantCoinListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCoinListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          sort = (ListViewSort_o *)v17->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v17, this->fields.seed, 0LL);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v15;
    if ( !sort )
      goto LABEL_23;
  }
  UserServantCoinListViewManager__SetMode_31994872(this, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserServantCoinListViewManager__CreateList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *gameObject; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *v14; // x20
  int32_t Count; // w0
  int32_t v16; // w21
  int32_t v17; // w22
  System_Collections_Generic_List_object__o *itemList; // x23
  Il2CppObject *Item; // x25
  UserServantCoinListViewItem_o *v20; // x0
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x24
  __int64 methodPtr_low; // x9
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  UILabel_o *emptyMessageLabel; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  UserServantCoinListViewManager_c *v33; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v35; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  struct ListViewSort_o *v39; // x8
  int32_t sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v43; // x1
  UserServantCoinListViewManager_o *v44; // x0

  if ( (byte_4AB1829 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v4);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v7);
    sub_1BAB41C(&UserServantCoinListViewItem_TypeInfo, v8);
    sub_1BAB41C(&UserServantCoinListViewManager_TypeInfo, v9);
    sub_1BAB41C(&UserSvtCoinEntity_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_14878/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v11);
    byte_4AB1829 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !gameObject )
    goto LABEL_39;
  v14 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)gameObject + 4);
  if ( !v14 )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            *((System_Collections_ObjectModel_Collection_T__o **)gameObject + 4),
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_19:
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_14878/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
    if ( emptyMessageLabel )
    {
      UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
      v33 = UserServantCoinListViewManager_TypeInfo;
      if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
        v33 = UserServantCoinListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v33->static_fields->servantSortInfo;
      v35 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v35, v31, v32);
      gameObject = this->fields.sort;
      if ( gameObject )
      {
        ListViewSort__Load((ListViewSort_o *)gameObject, 0LL);
        v39 = *p_sort;
        if ( *p_sort )
        {
          sortKind = v39->fields.sortKind;
          if ( sortKind != 2 && sortKind != 14 && (sortKind & 0xFFFFFFFE) != 26 )
            v39->fields.sortKind = 27;
          iconScaleKind = v39->fields.iconScaleKind;
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
LABEL_37:
              ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
              ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
              v44 = this;
              goto LABEL_38;
            }
            normalSizeSeed = this->fields.extremelySmallSizeSeed;
          }
          this->fields.seed = normalSizeSeed;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v37, v38);
          goto LABEL_37;
        }
      }
    }
LABEL_39:
    sub_1BAB678(gameObject, v13);
  }
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             v14,
             v17,
             (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    v20 = (UserServantCoinListViewItem_o *)sub_1BAB668(UserServantCoinListViewItem_TypeInfo);
    v22 = (Il2CppObject *)v20;
    if ( Item )
    {
      methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserSvtCoinEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
    }
    UserServantCoinListViewItem___ctor(v20, v17, (UserSvtCoinEntity_o *)Item, v21);
    if ( !itemList )
      goto LABEL_39;
    items = itemList->fields._items;
    v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_39;
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        v22,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v22;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
    }
    if ( v16 == ++v17 )
      goto LABEL_19;
  }
  v44 = (UserServantCoinListViewManager_o *)sub_1BAB938(Item);
LABEL_38:
  UserServantCoinListViewManager__SetFilterButtonImage(v44, v43);
}


void __fastcall UserServantCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB1826 & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinListViewManager_TypeInfo, v1);
    byte_4AB1826 = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BAB678(0LL, v1);
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

  if ( (byte_4AB182B & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinListViewManager_TypeInfo, method);
    byte_4AB182B = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
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
        sub_1BAB678(v5, v6);
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
    sub_1BAB678(0LL, isDecide);
  UserServantCoinSortSelectMenu__Close_32007920(sortSelectMenu, 0LL, method);
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
    sub_1BAB678(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall UserServantCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCoinListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB1827 & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinListViewManager_TypeInfo, v1);
    byte_4AB1827 = 1;
  }
  v2 = UserServantCoinListViewManager_TypeInfo;
  if ( !UserServantCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCoinListViewManager_TypeInfo);
    v2 = UserServantCoinListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BAB678(0LL, v1);
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
  UserServantCoinListViewManager_o *v4; // x20
  struct UserServantCoinListViewManager_CallbackFunc_o *callbackFunc; // x8
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x9
  __int64 size; // x2
  UserServantCoinListViewManager_o *v9; // x0
  ListViewObject_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4AB182F & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_1BAB41C(&UserServantCoinListViewItem_TypeInfo, obj);
    byte_4AB182F = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj || (this = (UserServantCoinListViewManager_o *)obj->fields.linkItem) == 0LL )
      sub_1BAB678(this, obj);
    methodPtr_low = LOBYTE(UserServantCoinListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserServantCoinListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCoinListViewItem_TypeInfo )
    {
      dropList = this->fields.dropList;
      if ( dropList )
        size = (unsigned int)dropList->fields._size;
      else
        size = 0LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        size,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
    else
    {
      v9 = (UserServantCoinListViewManager_o *)sub_1BAB938(this);
      UserServantCoinListViewManager__OnLongPushListView(v9, v10, v11);
    }
  }
}


void __fastcall UserServantCoinListViewManager__OnClickSortAscendingOrder(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4AB1831 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AB1831 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_UserServantCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BAB678(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall UserServantCoinListViewManager__OnClickSortKind(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UserServantCoinSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  UserServantCoinSortSelectMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4AB1830 & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_UserServantCoinListViewManager_EndSelectSortKind__, v3);
    sub_1BAB41C(&Method_UserServantCoinListViewManager_OnClickSortKind__, v4);
    byte_4AB1830 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_UserServantCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_UserServantCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_UserServantCoinListViewManager_OnClickSortKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v9 = (UserServantCoinSortSelectMenu_CallbackFunc_o *)sub_1BAB668(UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    UserServantCoinSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_UserServantCoinListViewManager_EndSelectSortKind__,
      v10);
    if ( !sortSelectMenu )
      sub_1BAB678(v11, v12);
    UserServantCoinSortSelectMenu__Open(sortSelectMenu, 0, sort, v9, v13);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4AB182E & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB182E = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BAB678(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB182D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__get_Count__, v11);
    sub_1BAB41C(&Method_UserServantCoinListViewManager_OnMoveEnd__, v12);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v13);
    byte_4AB182D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserServantCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserServantCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v19, v20);
      UserServantCoinListViewObject__Init_31994720((UserServantCoinListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_UserServantCoinListViewObject__Dispose__);
  }
}


void __fastcall UserServantCoinListViewManager__SetFilterButtonImage(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4AB182A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17502/*"btn_bg_05"*/, method);
    sub_1BAB41C(&StringLiteral_17503/*"btn_bg_06"*/, v3);
    sub_1BAB41C(&StringLiteral_448/*"#FE4545"*/, v4);
    sub_1BAB41C(&StringLiteral_431/*"#000000"*/, v5);
    byte_4AB182A = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17502/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17503/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_431/*"#000000"*/
     : (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BAB678(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


void __fastcall UserServantCoinListViewManager__SetMode(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        UserServantCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserServantCoinListViewManager__SetMode_31994872(this, mode, v6);
}


void __fastcall UserServantCoinListViewManager__SetMode_31994872(
        UserServantCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    UserServantCoinListViewManager__RequestListObject(this, mode + 1, 0.0, v5);
}


void __fastcall UserServantCoinListViewManager__SetObjectItem(
        UserServantCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserServantCoinListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4AB182C & 1) == 0 )
  {
    this = (UserServantCoinListViewManager_o *)sub_1BAB41C(&UserServantCoinListViewObject_TypeInfo, obj);
    byte_4AB182C = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserServantCoinListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserServantCoinListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCoinListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  UserServantCoinListViewObject__Init_31994720((UserServantCoinListViewObject_o *)obj, v7, 0LL, 0.0, method);
}


void __fastcall UserServantCoinListViewManager__SetSortButtonImage(
        UserServantCoinListViewManager_o *this,
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

  if ( (byte_4AB1832 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17571/*"btn_sort_up"*/, v3);
    sub_1BAB41C(&StringLiteral_17659/*"btn_txt_up"*/, v4);
    sub_1BAB41C(&StringLiteral_17614/*"btn_txt_new"*/, v5);
    sub_1BAB41C(&StringLiteral_17604/*"btn_txt_down"*/, v6);
    sub_1BAB41C(&StringLiteral_17621/*"btn_txt_old"*/, v7);
    sub_1BAB41C(&StringLiteral_17568/*"btn_sort_down"*/, v8);
    byte_4AB1832 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_old"*/ : &StringLiteral_17614/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17659/*"btn_txt_up"*/ : &StringLiteral_17604/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BAB678(sort, v10);
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

  if ( (byte_4AB1822 & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB1822 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB1824 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB1824 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1BAB938(v7);
  UserServantCoinListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_UserServantCoinListViewObject__o *__fastcall UserServantCoinListViewManager__get_ObjectList(
        UserServantCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB1828 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB1828 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UserServantCoinListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UserServantCoinListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UserServantCoinListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_UserServantCoinListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserServantCoinListViewObject__o *)v11;
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

  if ( (byte_4AB1823 & 1) == 0 )
  {
    sub_1BAB41C(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB1823 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinListViewManager_o *)sub_1BAB938(v7);
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
  const MethodInfo *v10; // x0

  if ( (byte_4AB1825 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB1825 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BAB938(v7);
  UserServantCoinListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinListViewManager_CallbackFunc___ctor(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19E8834;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E87DC;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = itemId;
  v16 = kind;
  if ( (byte_4AB1835 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&UserServantCoinListViewManager_ResultKind_TypeInfo, v9);
    byte_4AB1835 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             UserServantCoinListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&itemId,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall UserServantCoinListViewManager_CallbackFunc__EndInvoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall UserServantCoinListViewManager_CallbackFunc__Invoke(
        UserServantCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    itemId,
    *(_QWORD *)&this->fields.extra_arg);
}