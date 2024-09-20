void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E6C2 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_4559/*"CoinRoomCoinList1"*/);
    byte_4A5E6C2 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_4559/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E6C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_4A5E6C1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedCoinDic, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantCoinList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ChangeIconScale(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CoinRoomCoinListViewManager_o *v7; // x0
  int v8; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v14; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4A5E6BE & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E6BE = 1;
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
    p_seed = &v7->fields.seed;
    *((_DWORD *)p_seed + 105) = v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(sort, method);
  }
  v12 = 0;
  while ( v12 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v12,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          sort = (ListViewSort_o *)v14->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v14, this->fields.seed, 0LL);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v12;
    if ( !sort )
      goto LABEL_23;
  }
  CoinRoomCoinListViewManager__SetMode_44577256(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateConfirmList(
        CoinRoomCoinListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        bool isDispSelectCount,
        bool isWarningDialog,
        bool isConfirmDialog,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  CoinRoomUtility_c *v11; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Master_object; // x24
  int64_t v16; // x25
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v17; // x20
  int32_t v18; // w26
  bool v19; // w29
  bool v20; // w19
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t current; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v25; // x22
  const MethodInfo *v26; // x4
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  CoinRoomCoinListViewManager_c *v41; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  ListViewItem_o *v46; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v49; // x1
  ListViewObject_o *viewObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5E6A7 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_14848/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_4A5E6A7 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v11 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v11);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantCoinList, (int32_t)UserSvtCoins, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)NetworkManager__get_UserId(0LL);
  if ( !selectedCoinDic )
    goto LABEL_52;
  v16 = (int64_t)gameObject;
  v17 = selectedCoinDic;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
                                             (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v53,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_341A1A0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v18 = 0;
  v19 = isWarningDialog;
  v55 = v53;
  v20 = isConfirmDialog;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v55,
            (const MethodInfo_32B7EE8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v21 )
      break;
    if ( !Master_object )
      sub_1B8880C(v21, v22);
    current = (int32_t)v55.fields._current;
    Entity = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)Master_object, v16, (int32_t)v55.fields._current, 0LL);
    v25 = (CoinRoomCoinIconItem_o *)sub_1B887FC(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v25, v18, Entity, 0, v26);
    if ( isDispSelectCount )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v17,
               current,
               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_1B8880C(0LL, v28);
      if ( !v25 )
        sub_1B8880C(Item, v28);
      v25->fields._selectedNum_k__BackingField = HIDWORD(Item[1].monitor);
    }
    else if ( !v25 )
    {
      sub_1B8880C(v27, v28);
    }
    v25->fields._isWarningDialog_k__BackingField = v19;
    v25->fields._isConfirmDialog_k__BackingField = v20;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_45:
      sub_1B8880C(itemList, v28);
    items = itemList->fields._items;
    v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1B8880C(itemList, v28);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v25,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v25, v29, v30);
    }
    ++v18;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v55,
    (const MethodInfo_32B7EE4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14848/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_52;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)extremelySmallSizeSeed, v39, v40);
  v41 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v41 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v41->static_fields->coinRoomSortInfo;
  v43 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759792(v43, coinRoomSortInfo, 0LL);
  if ( !v43
    || (ListViewSort__ClearFilter(v43, 0LL),
        this->fields.sort = v43,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v43, v44, v45),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_52:
    sub_1B8880C(gameObject, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v46 = (ListViewItem_o *)v54.fields._current;
    if ( v54.fields._current )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v54.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CoinRoomCoinIconItem_c *)v54.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_1B88ACC(v54.fields._current);
        goto LABEL_45;
      }
      monitor = (UnityEngine_Object_o *)v54.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v46->fields.viewObject;
        if ( !viewObject )
          sub_1B8880C(0LL, v49);
        ListViewObject__SetItemSeed(viewObject, v46, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateInitList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  void *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  struct System_Collections_Generic_List_DataEntityBase__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  CoinRoomUtility_c *v9; // x0
  System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  CoinRoomCoinListViewManager_c *v15; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v17; // x1
  struct ListViewSort_o **p_sort; // x20
  const MethodInfo *v19; // x2
  int32_t sortKind; // w8
  bool v21; // w22
  int v22; // w8
  int v23; // w28
  int32_t v24; // w23
  UserSvtCoinEntity_o *v25; // x26
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *itemList; // x24
  CoinRoomCoinIconItem_o *v28; // x25
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x1
  System_String_o *v37; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  MethodInfo *v43; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v49; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  struct ListViewSort_o *v53; // x8
  int32_t v54; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v58; // x1
  struct ListViewSort_o **v59; // [xsp+0h] [xbp-70h]
  int32_t v60; // [xsp+8h] [xbp-68h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5E6A8 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UserSvtCoinEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_3631/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    sub_1B885B0(&StringLiteral_3636/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/);
    sub_1B885B0(&StringLiteral_14848/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_4A5E6A8 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_2E8C5E4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  selectedCoinDic = (void *)System_Linq_Enumerable__Any_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
                              (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_DataEntityBase___);
  if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
  {
    v6 = *p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_60;
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  }
  selectedCoinDic = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !selectedCoinDic )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0LL);
  selectedCoinDic = this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  selectedCoinDic = this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v9 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v9);
  *p_userServantCoinList = UserSvtCoins;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantCoinList, (int32_t)UserSvtCoins, v11, v12);
  v15 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v15 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v15->static_fields->coinRoomSortInfo;
  v17 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v17, v13, v14);
  selectedCoinDic = this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_60;
  sortKind = (*p_sort)->fields.sortKind;
  v21 = sortKind == 27 || sortKind == 2;
  selectedCoinDic = *p_userServantCoinList;
  v59 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_60:
    sub_1B8880C(selectedCoinDic, v3);
  v22 = *((_DWORD *)selectedCoinDic + 6);
  v23 = v22 - 1;
  if ( v22 >= 1 )
  {
    v24 = 0;
    do
    {
      selectedCoinDic = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)selectedCoinDic,
                          v24,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !selectedCoinDic )
        break;
      v25 = (UserSvtCoinEntity_o *)selectedCoinDic;
      methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)selectedCoinDic + 304LL) < (unsigned int)methodPtr_low
        || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)selectedCoinDic + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
      if ( *((int *)selectedCoinDic + 7) >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v28 = (CoinRoomCoinIconItem_o *)sub_1B887FC(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v28, v24, v25, v21, v29);
        if ( !itemList )
          goto LABEL_60;
        items = itemList->fields._items;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_60;
        v34 = itemList->fields._size;
        if ( (unsigned int)v34 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + v34;
          itemList->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v28;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
        }
      }
      if ( v23 == v24 )
        goto LABEL_38;
      selectedCoinDic = *p_userServantCoinList;
      ++v24;
    }
    while ( *p_userServantCoinList );
    goto LABEL_60;
  }
LABEL_38:
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v19);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v36);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3631/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v39 = v37;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v61 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v37);
  v43 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v40, v41, v42);
  v60 = CoinRoomUtility__MaxPoint(v43);
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v44, v45, v46);
  selectedCoinDic = System_String__Format_61721404(v39, (Il2CppObject *)v43, v47, 0LL);
  if ( !nowLabel )
    goto LABEL_60;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_3636/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_60;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v49);
  selectedCoinDic = this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_60;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_14848/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_60;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v53 = *v59;
  if ( !*v59 )
    goto LABEL_60;
  v54 = v53->fields.sortKind;
  if ( v54 != 2 && v54 != 14 && (v54 & 0xFFFFFFFE) != 26 )
    v53->fields.sortKind = 27;
  iconScaleKind = v53->fields.iconScaleKind;
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
      goto LABEL_58;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v51, v52);
LABEL_58:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v3);
  if ( !scaleChangeTabSprite )
    goto LABEL_60;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v58);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4A5E6A4 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    byte_4A5E6A4 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v5; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_4A5E6AF & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    byte_4A5E6AF = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v5 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v5 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v5->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( v5->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v5),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(selectedCoinDic, v3);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_44577256(this, 2, v4);
}


void __fastcall CoinRoomCoinListViewManager__EndSelectFilterKind(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    sub_1B8880C(0LL, isDecide);
  CoinRoomSortSelectManager__Close_44604916(sortSelectManager, 0LL, method);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v6);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CoinRoomCoinListViewManager__RefrashListDisp(this, 0, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__EndSelectSortKind(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w8
  char v8; // w21
  int32_t v9; // w20
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5E6BB & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5E6BB = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_19;
  CoinRoomSortSelectManager__Close_44604916(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v8 = 0) : (v8 = 1),
        (sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(sortSelectManager, isDecide);
  }
  v9 = 0;
  while ( v9 < SLODWORD(sortSelectManager->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sortSelectManager,
             v9,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(Item[9].monitor) = v8;
      }
    }
    sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList;
    ++v9;
    if ( !sortSelectManager )
      goto LABEL_19;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__EndShowItemDetail(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  System_Action_o *v9; // x21
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A5E6B4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E6B4 = 1;
  }
  v4 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
  {
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !v8 )
      goto LABEL_15;
    CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v8, v9, 0LL);
  }
  else
  {
LABEL_11:
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !itemDetailInfoComp )
      goto LABEL_15;
    ItemDetailInfoComponent__Close_31094980(itemDetailInfoComp, v11, 0LL);
  }
  Instance = (CommonUI_o *)this->fields.scrollView;
  if ( !Instance )
LABEL_15:
    sub_1B8880C(Instance, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
}


System_String_o *__fastcall CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *__fastcall CoinRoomCoinListViewManager__GetSelectedDic(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectedCoinDic;
}


void __fastcall CoinRoomCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4A5E6A5 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_TypeInfo);
    byte_4A5E6A5 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B8880C(this, 0LL);
  return ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ModifyItem(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
}


void __fastcall CoinRoomCoinListViewManager__OnClicFilterKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4A5E6B9 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    byte_4A5E6B9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClicFilterKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClicFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1B887FC(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      v8);
    if ( !sortSelectManager )
      sub_1B8880C(v9, v10);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v7, v11);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickAllRelease(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  int32_t v9; // w0
  const MethodInfo *v10; // x2
  int32_t v11; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v16; // x2
  __int64 v17; // x9
  CoinRoomCoinListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4A5E6B8 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&CoinRoomCoinIconObject_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E6B8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickAllRelease__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickAllRelease__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v7);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v8);
    v9 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
           (const MethodInfo_2E9BEBC *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v9, v10);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.allReleaseButton;
    if ( !selectedCoinDic
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton) == 0LL)
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList) == 0LL) )
    {
LABEL_24:
      sub_1B8880C(selectedCoinDic, v5);
    }
    v11 = 0;
    while ( v11 < SLODWORD(selectedCoinDic->fields._entries) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectedCoinDic,
               v11,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v13 = Item;
        methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            LODWORD(v13[9].monitor) = 0;
            LODWORD(v13[1].klass) = -1;
            BYTE4(v13[9].monitor) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v13[6].monitor;
            if ( !selectedCoinDic )
              goto LABEL_24;
            v17 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(selectedCoinDic->klass->vtable._0_Equals.methodPtr) < (unsigned int)v17
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v17 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              sub_1B88ACC(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v18, v19);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v16);
          }
        }
      }
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList;
      ++v11;
      if ( !selectedCoinDic )
        goto LABEL_24;
    }
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 2, obj, v3);
}


void __fastcall CoinRoomCoinListViewManager__OnClickListView(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomCoinListViewManager__OnClickScaleChange(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v7; // x1
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v9; // x1

  if ( (byte_4A5E6BF & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    byte_4A5E6BF = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_1B8880C(ScaleButtonSpriteName, v9);
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5E6BC & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    byte_4A5E6BC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4A5E6BA & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    byte_4A5E6BA = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1B887FC(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectManager )
      sub_1B8880C(v9, v10);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v7, v11);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnMoveEnd(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4A5E6B2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E6B2 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall CoinRoomCoinListViewManager__OnPressIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UIScrollView_o *scrollView; // x0

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 1, obj, v3);
  scrollView = this->fields.scrollView;
  if ( !scrollView || (UIScrollView__Press(scrollView, 0, 0LL), (scrollView = this->fields.scrollView) == 0LL) )
    sub_1B8880C(scrollView, v5);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__OnSelectedCoinIcon(
        CoinRoomCoinListViewManager_o *this,
        int32_t kind,
        CoinRoomCoinIconObject_o *iconObject,
        const MethodInfo *method)
{
  int32_t v5; // w21
  CoinRoomCoinListViewManager_o *v6; // x19
  int32_t *linkItem; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  DataManager_o *v12; // x23
  UserItemData_o *UserItemData; // x20
  Il2CppObject *Instance; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v15; // x22
  CoinRoomCoinListViewManager_o *v16; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v20; // x0
  System_Func_T__TResult__o *_9__58_0; // x24
  Il2CppObject *v22; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w23
  System_Action_T1__T2__o *v27; // x24
  const MethodInfo *v28; // x5
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x22
  CoinRoomCoinListViewManager_o *v31; // x0
  CoinRoomCoinIconObject_o *v32; // x1
  const MethodInfo *v33; // x2
  UserSvtCoinEntity_o *v34; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_4A5E6B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CoinRoomCoinIconObject__int__TypeInfo);
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserSvtCoinMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__);
    this = (CoinRoomCoinListViewManager_o *)sub_1B885B0(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4A5E6B3 = 1;
  }
  entity = 0LL;
  v34 = 0LL;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_39;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_39;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * methodPtr_low - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v12 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_39;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_39;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
              ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                v15,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !Instance )
                goto LABEL_39;
              CommonUI__OpenItemLinkInfoDetailWindow_30585972((CommonUI_o *)Instance, UserItemData, v15, 0LL);
            }
            else
            {
              itemDetailInfoComp = v6->fields.itemDetailInfoComp;
              v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                v30,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !itemDetailInfoComp )
                goto LABEL_39;
              ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v30, 5, 0LL);
            }
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v12 )
            goto LABEL_39;
          v16 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    v12,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v16 || !this )
            goto LABEL_39;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v34,
                 *(_QWORD *)&v16->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v18 = v34;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v20 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v20 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            _9__58_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( !v20->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v20);
                v20 = CoinRoomCoinListViewManager___c_TypeInfo;
              }
              v22 = (Il2CppObject *)v20->static_fields->__9;
              _9__58_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__object___int____ctor(
                _9__58_0,
                v22,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                0LL);
              static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              static_fields->__9__58_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__58_0;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v24, v25);
            }
            v26 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_2EB7144 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v27 = (System_Action_T1__T2__o *)sub_1B887FC(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v27,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              0LL);
            if ( !bulkSelectDialog )
              goto LABEL_39;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v18,
              iconObject,
              v26,
              (System_Action_CoinRoomCoinIconObject__int__o *)v27,
              v28);
          }
        }
      }
      else
      {
        this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
        if ( !this )
          goto LABEL_39;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               linkItem[28],
               (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              linkItem[28],
              (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v9);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v10);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v11);
            return;
          }
LABEL_39:
          sub_1B8880C(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      sub_1B88ACC(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v31, v32, v33);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RefrashListDisp(
        CoinRoomCoinListViewManager_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  Il2CppClass *klass; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  struct UICommonButton_o *allReleaseButton; // x8
  const MethodInfo *v15; // x9
  Il2CppMethodPointer methodPtr; // x3
  System_Collections_Generic_Dictionary_int__object__c *v17; // x8
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4A5E6B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4A5E6B6 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    selectedCoinDic,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v20,
           (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v6 )
      break;
    if ( !v20.fields._current.fields.value )
      sub_1B8880C(v6, v7);
    klass = v20.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1B8880C(0LL, v7);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v8);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v20,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v10);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v11);
  v12 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_2E9BEBC *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v12, v13);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
                                                                              (const MethodInfo_2E9BEBC *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  v15 = allReleaseButton->klass->vtable._14_SetState.method;
  methodPtr = allReleaseButton->klass->vtable._15_OnPress.methodPtr;
  if ( !(_DWORD)selectedCoinDic )
  {
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v15)(
      this->fields.allReleaseButton,
      3LL,
      0LL,
      methodPtr);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v17 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_1B8880C(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v15)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_18;
  v17 = selectedCoinDic->klass;
LABEL_15:
  ((void (*)(void))v17->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RequestListObject(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_4A5E6B1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5E6B1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      CoinRoomCoinIconObject__Init_44569444((CoinRoomCoinIconObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SelectedCoinConfirm(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v4; // w20
  CoinRoomCoinIconObject_o *v5; // x21
  CoinRoomCoinListViewManager_o *v6; // x19
  struct ListViewItem_o *linkItem; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v11; // x1
  SelectedUserSvtCoin_o *v12; // x25
  const MethodInfo *v13; // x3
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v15; // x21
  SelectedUserSvtCoin_o *v16; // x0
  CoinRoomCoinIconObject_o *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_4A5E6B5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager_RefrashListDisp__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    this = (CoinRoomCoinListViewManager_o *)sub_1B885B0(&SelectedUserSvtCoin_TypeInfo);
    byte_4A5E6B5 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v11 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v11, *(const MethodInfo **)&num);
        return;
      }
      goto LABEL_22;
    }
    if ( !v5 )
      goto LABEL_22;
    linkItem = v5->fields.linkItem;
    if ( !linkItem )
      goto LABEL_22;
    iconObject = (CoinRoomCoinIconObject_o *)CoinRoomCoinIconItem_TypeInfo;
    methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.m_CancellationTokenSource);
        HIDWORD(this->fields.m_CancellationTokenSource) = v4;
      }
      else
      {
        v12 = (SelectedUserSvtCoin_o *)sub_1B887FC(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v12, v5, v4, v13);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__object___Add(
          selectedCoinDic,
          klass,
          (Il2CppObject *)v12,
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_2E9BEBC *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v15 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v15, (Il2CppObject *)v6, Method_CoinRoomCoinListViewManager_RefrashListDisp__, 0LL);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v11 = v15;
        goto LABEL_21;
      }
LABEL_22:
      sub_1B8880C(this, iconObject);
    }
    sub_1B88ACC(v5->fields.linkItem);
    SelectedUserSvtCoin___ctor(v16, v17, v18, v19);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  const MethodInfo *v6; // x0
  int v7; // w21
  int32_t v8; // w0
  CoinRoomCoinListViewManager___c_c *v9; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v11; // w22
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v13; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  int32_t v18; // w8
  UIProgressBar_o *addSlider; // x0
  int v20; // w8
  float v21; // s0

  if ( (byte_4A5E6AC & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__);
    sub_1B885B0(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4A5E6AC = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  v9 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v11 = v8;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v9 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v9->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__45_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__45_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v15, v16);
  }
  v18 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_2EB7144 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v20 = v7 + v18 * v11;
  if ( v5 <= v20 )
  {
    if ( addSlider )
    {
      v21 = (float)v5;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B8880C(addSlider, v17);
  }
  if ( !addSlider )
    goto LABEL_17;
  v21 = (float)v20 / (float)v5;
LABEL_16:
  UIProgressBar__set_value(addSlider, v21, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  System_Func_T__TResult__o *_9__43_0; // x21
  Il2CppObject *v6; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w0
  __int64 v11; // x1
  int v12; // w20
  System_String_o *v13; // x21
  UILabel_o *addLabel; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E6AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__);
    sub_1B885B0(&CoinRoomCoinListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3617/*"COIN_ROOM_ADD_NUM"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E6AA = 1;
  }
  v3 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v3 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__43_0,
      v6,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__43_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_2EB7144 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v10 )
  {
    v12 = v10;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v20 = v12;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v15, v16, v17);
    v19 = System_String__Format(v13, v18, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v19, 0LL);
      return;
    }
LABEL_16:
    sub_1B8880C(v19, v11);
  }
  v19 = (System_String_o *)this->fields.addLabel;
  if ( !v19 )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetCurrentBar(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *currentSlider; // x8
  float v9; // s0

  if ( (byte_4A5E6AB & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    byte_4A5E6AB = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = CoinRoomUtility__MonthExchangePoint(v4);
  currentSlider = (UIProgressBar_o *)this->fields.currentSlider;
  if ( v5 <= (int)v6 )
  {
    if ( currentSlider )
    {
      v9 = (float)v5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B8880C(v6, v7);
  }
  if ( !currentSlider )
    goto LABEL_11;
  v9 = (float)(int)v6 / (float)v5;
LABEL_10:
  UIProgressBar__set_value(currentSlider, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A5E6AE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A5E6AE = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CoinRoomCoinListViewManager__SetMode_44577256(this, mode, v6);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_44577256(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    CoinRoomCoinListViewManager__RequestListObject(this, mode + 1, 0.0, v5);
}


void __fastcall CoinRoomCoinListViewManager__SetObjectItem(
        CoinRoomCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5E6B0 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_1B885B0(&CoinRoomCoinIconObject_TypeInfo);
    byte_4A5E6B0 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CoinRoomCoinIconObject__Init_44569444((CoinRoomCoinIconObject_o *)obj, v7, 0LL, 0.0, method);
}


void __fastcall CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  UILabel_o *selectDoneLabel; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x0
  int32_t size; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E6A9 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3631/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    byte_4A5E6A9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3631/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v19 = selectedNum;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v7, v8, v9);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v16 = (Il2CppObject *)v10,
        size = userServantCoinList->fields._size,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v12, v13, v14),
        v10 = System_String__Format_61721404(v5, v16, v17, 0LL),
        !selectDoneLabel) )
  {
    sub_1B8880C(v10, v11);
  }
  UILabel__set_text(selectDoneLabel, v10, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A5E6AD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17472/*"btn_bg_05"*/);
    sub_1B885B0(&StringLiteral_17473/*"btn_bg_06"*/);
    sub_1B885B0(&StringLiteral_453/*"#FE4545"*/);
    sub_1B885B0(&StringLiteral_436/*"#000000"*/);
    byte_4A5E6AD = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17472/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17473/*"btn_bg_06"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_436/*"#000000"*/
     : (System_String_o **)&StringLiteral_453/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1B8880C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonImage(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_4A5E6BD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5E6BD = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetTouchEnabled(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  const MethodInfo *v6; // x0
  int v7; // w21
  int32_t v8; // w0
  CoinRoomCoinListViewManager___c_c *v9; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v11; // w22
  System_Func_T__TResult__o *_9__63_0; // x24
  Il2CppObject *v13; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  int32_t v18; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v20; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v25; // x9
  int32_t v26; // w20
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  __int64 v29; // x10
  UnityEngine_Object_o *v30; // x22
  __int64 v31; // x9
  CoinRoomCoinListViewManager_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4A5E6B7 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&CoinRoomCoinIconObject_TypeInfo);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1B885B0(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__);
    sub_1B885B0(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4A5E6B7 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  v9 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v11 = v8;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v9 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__63_0 = (System_Func_T__TResult__o *)v9->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__63_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__63_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v15, v16);
  }
  v18 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_2EB7144 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( v5 > v7 + v18 * v11 )
  {
    if ( itemList )
    {
      v20 = 0;
      while ( v20 < itemList->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 v20,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v22 = Item;
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(Item[9].monitor) = 1;
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              itemList = (System_Collections_Generic_List_object__o *)v22[6].monitor;
              if ( !itemList )
                goto LABEL_41;
              v25 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v25
                || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v25 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_43;
              }
              CoinRoomCoinIconObject__SetupDisp(
                (CoinRoomCoinIconObject_o *)itemList,
                (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v20;
        if ( !itemList )
          goto LABEL_41;
      }
      return;
    }
LABEL_41:
    sub_1B8880C(itemList, v17);
  }
  if ( !itemList )
    goto LABEL_41;
  v26 = 0;
  while ( v26 < itemList->fields._size )
  {
    v27 = System_Collections_Generic_List_object___get_Item(
            itemList,
            v26,
            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( v27 )
    {
      v28 = v27;
      v29 = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v27->klass->vtable[0].methodPtr) >= (unsigned int)v29
        && (CoinRoomCoinIconItem_c *)v27->klass->_2.typeHierarchy[v29 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v30 = (UnityEngine_Object_o *)v27[6].monitor;
        BYTE4(v27[9].monitor) = SLODWORD(v27[9].monitor) > 0;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v30, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v28[6].monitor;
          if ( !itemList )
            goto LABEL_41;
          v31 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
            || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v31 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_43:
            sub_1B88ACC(itemList);
            CoinRoomCoinListViewManager__OnClickAllRelease(v32, v33);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(
            (CoinRoomCoinIconObject_o *)itemList,
            (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__UpdateSelectNum(
        CoinRoomCoinListViewManager_o *this,
        int32_t deleteNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t klass; // w8

  if ( (byte_4A5E6C0 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5E6C0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1B8880C(itemList, *(_QWORD *)&deleteNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v6,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        klass = (int32_t)Item[1].klass;
        if ( klass > deleteNum )
          LODWORD(Item[1].klass) = klass - 1;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_12;
  }
}


void __fastcall CoinRoomCoinListViewManager__add_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CoinRoomCoinListViewManager_o *v10; // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5E6A2 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4A5E6A2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
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
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5E6A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E6A6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v3;
}


void __fastcall CoinRoomCoinListViewManager__remove_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomCoinListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4A5E6A3 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4A5E6A3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CoinRoomCoinListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D29A0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2940;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CoinRoomCoinListViewManager_CallbackFunc__BeginInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = index;
  v21 = kind;
  v19 = id;
  if ( (byte_4A5E6C3 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&CoinRoomCoinListViewManager_ResultKind_TypeInfo);
    byte_4A5E6C3 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             CoinRoomCoinListViewManager_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&index,
             *(_QWORD *)&id,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__Invoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E6C4 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4A5E6C4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CoinRoomCoinListViewManager___c_TypeInfo->static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CoinRoomCoinListViewManager___c___ctor(
        CoinRoomCoinListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CoinRoomCoinListViewManager___c___OnSelectedCoinIcon_b__58_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4A5E6C7 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4A5E6C7 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4A5E6C6 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4A5E6C6 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4A5E6C5 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4A5E6C5 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4A5E6C8 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4A5E6C8 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}