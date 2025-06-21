void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1FF46 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, v1);
    sub_1BCAFF8(&ListViewSort_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_4492/*"CoinRoomCoinList1"*/, v3);
    byte_4B1FF46 = 1;
  }
  v4 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42965576(v4, (System_String_o *)StringLiteral_4492/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1FF45 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v5);
    byte_4B1FF45 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedCoinDic, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantCoinList, (int32_t)v9, v10, v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ChangeIconScale(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CoinRoomCoinListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v17; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B1FF42 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1FF42 = 1;
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
    *((_DWORD *)p_seed + 105) = v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(sort, method);
  }
  v15 = 0;
  while ( v15 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v15,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v17 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
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
  CoinRoomCoinListViewManager__SetMode_47063012(this, 2, v14);
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
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v35; // x20
  int64_t v36; // x25
  int32_t v37; // w26
  bool v38; // w29
  bool v39; // w19
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t current; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v44; // x22
  const MethodInfo *v45; // x4
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  CoinRoomCoinListViewManager_c *v60; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  ListViewItem_o *v65; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v68; // x1
  ListViewObject_o *viewObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1FF2B & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, selectedCoinDic);
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, v9);
    sub_1BCAFF8(&CoinRoomUtility_TypeInfo, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__, v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v19);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v20);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v21);
    sub_1BCAFF8(&ListViewSort_TypeInfo, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v24);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v25);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v26);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v27);
    sub_1BCAFF8(&StringLiteral_14742/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v28);
    byte_4B1FF2B = 1;
  }
  memset(&v74, 0, sizeof(v74));
  memset(&v73, 0, sizeof(v73));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins(0LL);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantCoinList, (int32_t)UserSvtCoins, v32, v33);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v30);
    byte_4B165D1 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !selectedCoinDic )
    goto LABEL_56;
  v35 = selectedCoinDic;
  v36 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 64LL);
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
                                             (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v72,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_35DA5A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v37 = 0;
  v38 = isWarningDialog;
  v74 = v72;
  v39 = isConfirmDialog;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v74,
            (const MethodInfo_34737E0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v40 )
      break;
    if ( !Master_object )
      sub_1BCB254(v40, v41);
    current = (int32_t)v74.fields._current;
    Entity = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)Master_object, v36, (int32_t)v74.fields._current, 0LL);
    v44 = (CoinRoomCoinIconItem_o *)sub_1BCB244(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v44, v37, Entity, 0, v45);
    if ( isDispSelectCount )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v35,
               current,
               (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_1BCB254(0LL, v47);
      if ( !v44 )
        sub_1BCB254(Item, v47);
      v44->fields._selectedNum_k__BackingField = HIDWORD(Item[1].monitor);
    }
    else if ( !v44 )
    {
      sub_1BCB254(v46, v47);
    }
    v44->fields._isWarningDialog_k__BackingField = v38;
    v44->fields._isConfirmDialog_k__BackingField = v39;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_49:
      sub_1BCB254(itemList, v47);
    items = itemList->fields._items;
    v53 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1BCB254(itemList, v47);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v44,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v55[4] = (Il2CppClass *)v44;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v44, v48, v49);
    }
    ++v37;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v74,
    (const MethodInfo_34737DC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14742/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)extremelySmallSizeSeed, v58, v59);
  v60 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v60 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v60->static_fields->coinRoomSortInfo;
  v62 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42966300(v62, coinRoomSortInfo, 0LL);
  if ( !v62
    || (ListViewSort__ClearFilter(v62, 0LL),
        this->fields.sort = v62,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v62, v63, v64),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_1BCB254(gameObject, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v65 = (ListViewItem_o *)v73.fields._current;
    if ( v73.fields._current )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v73.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (CoinRoomCoinIconItem_c *)v73.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_1BCB514(v73.fields._current);
        goto LABEL_49;
      }
      monitor = (UnityEngine_Object_o *)v73.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v65->fields.viewObject;
        if ( !viewObject )
          sub_1BCB254(0LL, v68);
        ListViewObject__SetItemSeed(viewObject, v65, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateInitList(
        CoinRoomCoinListViewManager_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  void *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  struct System_Collections_Generic_List_DataEntityBase__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CoinRoomCoinListViewManager_c *v29; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v31; // x1
  struct ListViewSort_o **p_sort; // x20
  const MethodInfo *v33; // x2
  int32_t sortKind; // w8
  bool v35; // w22
  int v36; // w8
  int v37; // w28
  int32_t v38; // w23
  UserSvtCoinEntity_o *v39; // x26
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *itemList; // x24
  CoinRoomCoinIconItem_o *v42; // x25
  const MethodInfo *v43; // x4
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x1
  System_String_o *v51; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v53; // x22
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x23
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v63; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct ListViewSort_o *v67; // x8
  int32_t v68; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v72; // x1
  struct ListViewSort_o **v73; // [xsp+0h] [xbp-70h]
  int32_t v74; // [xsp+8h] [xbp-68h] BYREF
  int32_t v75; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1FF2C & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, v3);
    sub_1BCAFF8(&CoinRoomUtility_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataEntityBase__Clear__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&UserSvtCoinEntity_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_3516/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v15);
    sub_1BCAFF8(&StringLiteral_3521/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, v16);
    sub_1BCAFF8(&StringLiteral_14742/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v17);
    byte_4B1FF2C = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_3025924 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
      (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  selectedCoinDic = (void *)System_Linq_Enumerable__Any_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
                              (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_DataEntityBase___);
  if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
  {
    v21 = *p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_60;
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
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
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins(0LL);
  *p_userServantCoinList = UserSvtCoins;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userServantCoinList, (int32_t)UserSvtCoins, v25, v26);
  v29 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v29 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v29->static_fields->coinRoomSortInfo;
  v31 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v31, v27, v28);
  selectedCoinDic = this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_60;
  sortKind = (*p_sort)->fields.sortKind;
  v35 = sortKind == 27 || sortKind == 2;
  selectedCoinDic = *p_userServantCoinList;
  v73 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_60:
    sub_1BCB254(selectedCoinDic, v18);
  v36 = *((_DWORD *)selectedCoinDic + 6);
  v37 = v36 - 1;
  if ( v36 >= 1 )
  {
    v38 = 0;
    do
    {
      selectedCoinDic = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)selectedCoinDic,
                          v38,
                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !selectedCoinDic )
        break;
      v39 = (UserSvtCoinEntity_o *)selectedCoinDic;
      methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)selectedCoinDic + 304LL) < (unsigned int)methodPtr_low
        || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)selectedCoinDic + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
      if ( *((int *)selectedCoinDic + 7) >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v42 = (CoinRoomCoinIconItem_o *)sub_1BCB244(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v42, v38, v39, v35, v43);
        if ( !itemList )
          goto LABEL_60;
        items = itemList->fields._items;
        v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_60;
        v48 = itemList->fields._size;
        if ( (unsigned int)v48 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v42,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + v48;
          itemList->fields._size = v48 + 1;
          v49[4] = (Il2CppClass *)v42;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v42, v44, v45);
        }
      }
      if ( v37 == v38 )
        goto LABEL_38;
      selectedCoinDic = *p_userServantCoinList;
      ++v38;
    }
    while ( *p_userServantCoinList );
    goto LABEL_60;
  }
LABEL_38:
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v33);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v50);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v53 = v51;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v75 = CoinRoomUtility__MonthExchangePoint(0LL);
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v54, v55, v56);
  v74 = CoinRoomUtility__MaxPoint(0LL);
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v58, v59, v60);
  selectedCoinDic = System_String__Format_62491716(v53, v57, v61, 0LL);
  if ( !nowLabel )
    goto LABEL_60;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_60;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v63);
  selectedCoinDic = this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_60;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_14742/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_60;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v67 = *v73;
  if ( !*v73 )
    goto LABEL_60;
  v68 = v67->fields.sortKind;
  if ( v68 != 2 && v68 != 14 && (v68 & 0xFFFFFFFE) != 26 )
    v67->fields.sortKind = 27;
  iconScaleKind = v67->fields.iconScaleKind;
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v65, v66);
LABEL_58:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v18);
  if ( !scaleChangeTabSprite )
    goto LABEL_60;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v72);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4B1FF28 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_4B1FF28 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1BCB254(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v6; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_4B1FF33 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v3);
    byte_4B1FF33 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v6 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v6 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v6->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( v6->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v6),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_11:
    sub_1BCB254(selectedCoinDic, v4);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_47063012(this, 2, v4);
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
    sub_1BCB254(0LL, isDecide);
  CoinRoomSortSelectManager__Close(sortSelectManager, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w8
  char v10; // w21
  int32_t v11; // w20
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1FF3F & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B1FF3F = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_19;
  CoinRoomSortSelectManager__Close(sortSelectManager, 0LL);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v10 = 0) : (v10 = 1),
        (sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList) == 0LL) )
  {
LABEL_19:
    sub_1BCB254(sortSelectManager, isDecide);
  }
  v11 = 0;
  while ( v11 < SLODWORD(sortSelectManager->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sortSelectManager,
             v11,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(Item[9].monitor) = v10;
      }
    }
    sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList;
    ++v11;
    if ( !sortSelectManager )
      goto LABEL_19;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__EndShowItemDetail(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  System_Action_o *v12; // x21
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21

  if ( (byte_4B1FF38 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, v4);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B1FF38 = 1;
  }
  v7 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !v11 )
      goto LABEL_15;
    CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v11, v12, 0LL);
  }
  else
  {
LABEL_11:
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
    if ( !itemDetailInfoComp )
      goto LABEL_15;
    ItemDetailInfoComponent__Close_32480428(itemDetailInfoComp, v14, 0LL);
  }
  Instance = (CommonUI_o *)this->fields.scrollView;
  if ( !Instance )
LABEL_15:
    sub_1BCB254(Instance, v10);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
}


System_String_o *__fastcall CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCB254(0LL, method);
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

  if ( (byte_4B1FF29 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_4B1FF29 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1BCB254(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCB254(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B1FF3D & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__, v3);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnClicFilterKind__, v4);
    byte_4B1FF3D = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_CoinRoomCoinListViewManager_OnClicFilterKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClicFilterKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v9 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1BCB244(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !sortSelectManager )
      sub_1BCB254(v10, v11);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v9, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickAllRelease(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v23; // x2
  __int64 v24; // x9
  CoinRoomCoinListViewManager_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4B1FF3C & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BCAFF8(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnClickAllRelease__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B1FF3C = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CoinRoomCoinListViewManager_OnClickAllRelease__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickAllRelease__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0LL);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v14);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v15);
    v16 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
            (const MethodInfo_3035F24 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v16, v17);
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
      sub_1BCB254(selectedCoinDic, v12);
    }
    v18 = 0;
    while ( v18 < SLODWORD(selectedCoinDic->fields._entries) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectedCoinDic,
               v18,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            LODWORD(v20[9].monitor) = 0;
            LODWORD(v20[1].klass) = -1;
            BYTE4(v20[9].monitor) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v20[6].monitor;
            if ( !selectedCoinDic )
              goto LABEL_24;
            v24 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(selectedCoinDic->klass->vtable._0_Equals.methodPtr) < (unsigned int)v24
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v24 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              sub_1BCB514(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v25, v26);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v23);
          }
        }
      }
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList;
      ++v18;
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

  if ( (byte_4B1FF43 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnClickScaleChange__, method);
    byte_4B1FF43 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_1BCB254(ScaleButtonSpriteName, v9);
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

  if ( (byte_4B1FF40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B1FF40 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCB254(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B1FF3E & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__, v3);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnClickSortKind__, v4);
    byte_4B1FF3E = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CoinRoomCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v9 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1BCB244(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectManager )
      sub_1BCB254(v10, v11);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v9, 0LL);
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

  if ( (byte_4B1FF36 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1FF36 = 1;
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
          sub_1BCB254(0LL, v7);
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
    sub_1BCB254(scrollView, v5);
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
  int32_t *linkItem; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  DataManager_o *v28; // x23
  UserItemData_o *UserItemData; // x20
  Il2CppObject *Instance; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v31; // x22
  CoinRoomCoinListViewManager_o *v32; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v36; // x0
  System_Func_T__TResult__o *_9__58_0; // x24
  Il2CppObject *v38; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w23
  System_Action_T1__T2__o *v43; // x24
  const MethodInfo *v44; // x5
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v46; // x22
  CoinRoomCoinListViewManager_o *v47; // x0
  CoinRoomCoinIconObject_o *v48; // x1
  const MethodInfo *v49; // x2
  UserSvtCoinEntity_o *v50; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_4B1FF37 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_CoinRoomCoinIconObject__int__TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, v7);
    sub_1BCAFF8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8);
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, v9);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v10);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserSvtCoinMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v17);
    sub_1BCAFF8(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__, v21);
    this = (CoinRoomCoinListViewManager_o *)sub_1BCAFF8(&CoinRoomCoinListViewManager___c_TypeInfo, v22);
    byte_4B1FF37 = 1;
  }
  entity = 0LL;
  v50 = 0LL;
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
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v28 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_39;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_39;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v31 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCB244(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
              ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                v31,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !Instance )
                goto LABEL_39;
              CommonUI__OpenItemLinkInfoDetailWindow_30870088((CommonUI_o *)Instance, UserItemData, v31, 0LL);
            }
            else
            {
              itemDetailInfoComp = v6->fields.itemDetailInfoComp;
              v46 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCB244(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                v46,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0LL);
              if ( !itemDetailInfoComp )
                goto LABEL_39;
              ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v46, 5, 0LL);
            }
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v28 )
            goto LABEL_39;
          v32 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    v28,
                                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v32 || !this )
            goto LABEL_39;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v50,
                 *(_QWORD *)&v32->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v34 = v50;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v36 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v36 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            _9__58_0 = (System_Func_T__TResult__o *)v36->static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( !v36->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v36);
                v36 = CoinRoomCoinListViewManager___c_TypeInfo;
              }
              v38 = (Il2CppObject *)v36->static_fields->__9;
              _9__58_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__object___int____ctor(
                _9__58_0,
                v38,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                0LL);
              static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              static_fields->__9__58_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__58_0;
              sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v40, v41);
            }
            v42 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_3055C58 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v43 = (System_Action_T1__T2__o *)sub_1BCB244(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v43,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              0LL);
            if ( !bulkSelectDialog )
              goto LABEL_39;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v34,
              iconObject,
              v42,
              (System_Action_CoinRoomCoinIconObject__int__o *)v43,
              v44);
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
               (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              linkItem[28],
              (const MethodInfo_332276C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v25);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v26);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v27);
            return;
          }
LABEL_39:
          sub_1BCB254(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      sub_1BCB514(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v47, v48, v49);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RefrashListDisp(
        CoinRoomCoinListViewManager_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppClass *klass; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  struct UICommonButton_o *allReleaseButton; // x8
  const MethodInfo *v20; // x9
  Il2CppMethodPointer methodPtr; // x3
  System_Collections_Generic_Dictionary_int__object__c *v22; // x8
  const MethodInfo *v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B1FF3A & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__,
      *(_QWORD *)&num);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v9);
    byte_4B1FF3A = 1;
  }
  memset(&v25, 0, sizeof(v25));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v24,
    selectedCoinDic,
    (const MethodInfo_332171C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_3472D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v11 )
      break;
    if ( !v25.fields._current.fields.value )
      sub_1BCB254(v11, v12);
    klass = v25.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1BCB254(0LL, v12);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v13);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_3472E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v15);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v16);
  v17 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_3035F24 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v17, v18);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
                                                                              (const MethodInfo_3035F24 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  v20 = allReleaseButton->klass->vtable._14_SetState.method;
  methodPtr = allReleaseButton->klass->vtable._15_OnPress.methodPtr;
  if ( !(_DWORD)selectedCoinDic )
  {
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v20)(
      this->fields.allReleaseButton,
      3LL,
      0LL,
      methodPtr);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v22 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_1BCB254(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v20)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_18;
  v22 = selectedCoinDic->klass;
LABEL_15:
  ((void (*)(void))v22->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RequestListObject(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_4B1FF35 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_OnMoveEnd__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__, v12);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v13);
    byte_4B1FF35 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCB254(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v19, v20);
      CoinRoomCoinIconObject__Init_47056148((CoinRoomCoinIconObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ListViewItem_o *linkItem; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v18; // x1
  SelectedUserSvtCoin_o *v19; // x25
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v21; // x21
  CoinRoomCoinListViewManager_o *v22; // x0
  const MethodInfo *v23; // x1

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_4B1FF39 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, iconObject);
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, v7);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager_RefrashListDisp__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v12);
    this = (CoinRoomCoinListViewManager_o *)sub_1BCAFF8(&SelectedUserSvtCoin_TypeInfo, v13);
    byte_4B1FF39 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v18 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v18, *(const MethodInfo **)&num);
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
                                                (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.m_CancellationTokenSource);
        HIDWORD(this->fields.m_CancellationTokenSource) = v4;
      }
      else
      {
        v19 = (SelectedUserSvtCoin_o *)sub_1BCB244(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v19, v5, v4, 0LL);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__object___Add(
          selectedCoinDic,
          klass,
          (Il2CppObject *)v19,
          (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_3035F24 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v21 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
      System_Action_int____ctor(v21, (Il2CppObject *)v6, Method_CoinRoomCoinListViewManager_RefrashListDisp__, 0LL);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v18 = v21;
        goto LABEL_21;
      }
LABEL_22:
      sub_1BCB254(this, iconObject);
    }
    sub_1BCB514(v5->fields.linkItem);
    CoinRoomCoinListViewManager__SetTouchEnabled(v22, v23);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t v9; // w0
  CoinRoomCoinListViewManager___c_c *v10; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v12; // w22
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v14; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w8
  UIProgressBar_o *addSlider; // x0
  int v21; // w8
  float v22; // s0

  if ( (byte_4B1FF30 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomUtility_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v3);
    sub_1BCAFF8(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v4);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__, v5);
    sub_1BCAFF8(&CoinRoomCoinListViewManager___c_TypeInfo, v6);
    byte_4B1FF30 = 1;
  }
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v7 = CoinRoomUtility__MaxPoint(0LL);
  v8 = CoinRoomUtility__MonthExchangePoint(0LL);
  v9 = CoinRoomUtility__CalcPoint(0LL);
  v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v12 = v9;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v10->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__45_0,
      v14,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__45_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v16, v17);
  }
  v19 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_3055C58 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v21 = v8 + v19 * v12;
  if ( v7 <= v21 )
  {
    if ( addSlider )
    {
      v22 = (float)v7;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCB254(addSlider, v18);
  }
  if ( !addSlider )
    goto LABEL_17;
  v22 = (float)v21 / (float)v7;
LABEL_16:
  UIProgressBar__set_value(addSlider, v22, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CoinRoomCoinListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  System_Func_T__TResult__o *_9__43_0; // x21
  Il2CppObject *v13; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w0
  __int64 v18; // x1
  int v19; // w20
  System_String_o *v20; // x21
  UILabel_o *addLabel; // x19
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1FF2E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, method);
    sub_1BCAFF8(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v3);
    sub_1BCAFF8(&int_TypeInfo, v4);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__, v6);
    sub_1BCAFF8(&CoinRoomCoinListViewManager___c_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_3502/*"COIN_ROOM_ADD_NUM"*/, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B1FF2E = 1;
  }
  v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__43_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__43_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_3055C58 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v17 )
  {
    v19 = v17;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3502/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v27 = v19;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format(v20, v25, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v26, 0LL);
      return;
    }
LABEL_16:
    sub_1BCB254(v26, v18);
  }
  v26 = (System_String_o *)this->fields.addLabel;
  if ( !v26 )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetCurrentBar(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v4; // x0
  __int64 v5; // x1
  UIProgressBar_o *currentSlider; // x8
  float v7; // s0

  if ( (byte_4B1FF2F & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomUtility_TypeInfo, method);
    byte_4B1FF2F = 1;
  }
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v3 = CoinRoomUtility__MaxPoint(0LL);
  v4 = CoinRoomUtility__MonthExchangePoint(0LL);
  currentSlider = (UIProgressBar_o *)this->fields.currentSlider;
  if ( v3 <= (int)v4 )
  {
    if ( currentSlider )
    {
      v7 = (float)v3;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCB254(v4, v5);
  }
  if ( !currentSlider )
    goto LABEL_11;
  v7 = (float)(int)v4 / (float)v3;
LABEL_10:
  UIProgressBar__set_value(currentSlider, v7, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B1FF32 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17343/*"btn_filter_on"*/, method);
    sub_1BCAFF8(&StringLiteral_17342/*"btn_filter"*/, v3);
    byte_4B1FF32 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCB254(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17342/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17343/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CoinRoomCoinListViewManager__SetMode_47063012(this, mode, v6);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_47063012(
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
  if ( (byte_4B1FF34 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_1BCAFF8(&CoinRoomCoinIconObject_TypeInfo, obj);
    byte_4B1FF34 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CoinRoomCoinIconObject__Init_47056148((CoinRoomCoinIconObject_o *)obj, v7, 0LL, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x22
  UILabel_o *selectDoneLabel; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v19; // x19
  Il2CppObject *v20; // x0
  int32_t size; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1FF2D & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&selectedNum);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_3516/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v7);
    byte_4B1FF2D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v22 = selectedNum;
  v13 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v10, v11, v12);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v19 = (Il2CppObject *)v13,
        size = userServantCoinList->fields._size,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v15, v16, v17),
        v13 = System_String__Format_62491716(v8, v19, v20, 0LL),
        !selectDoneLabel) )
  {
    sub_1BCB254(v13, v14);
  }
  UILabel__set_text(selectDoneLabel, v13, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B1FF31 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17300/*"btn_bg_05"*/, method);
    sub_1BCAFF8(&StringLiteral_17301/*"btn_bg_06"*/, v3);
    sub_1BCAFF8(&StringLiteral_421/*"#FE4545"*/, v4);
    sub_1BCAFF8(&StringLiteral_402/*"#000000"*/, v5);
    byte_4B1FF31 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17300/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17301/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_402/*"#000000"*/
     : (System_String_o **)&StringLiteral_421/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BCB254(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonImage(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_4B1FF41 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17379/*"btn_sort_up"*/, v3);
    sub_1BCAFF8(&StringLiteral_17474/*"btn_txt_up"*/, v4);
    sub_1BCAFF8(&StringLiteral_17427/*"btn_txt_new"*/, v5);
    sub_1BCAFF8(&StringLiteral_17417/*"btn_txt_down"*/, v6);
    sub_1BCAFF8(&StringLiteral_17434/*"btn_txt_old"*/, v7);
    sub_1BCAFF8(&StringLiteral_17376/*"btn_sort_down"*/, v8);
    byte_4B1FF41 = 1;
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17434/*"btn_txt_old"*/ : &StringLiteral_17427/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17474/*"btn_txt_up"*/ : &StringLiteral_17417/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCB254(sort, v10);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetTouchEnabled(
        CoinRoomCoinListViewManager_o *this,
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
  int32_t v12; // w20
  int32_t v13; // w21
  int32_t v14; // w0
  CoinRoomCoinListViewManager___c_c *v15; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v17; // w22
  System_Func_T__TResult__o *_9__63_0; // x24
  Il2CppObject *v19; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  int32_t v24; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v26; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v28; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v31; // x9
  int32_t v32; // w20
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x21
  __int64 v35; // x10
  UnityEngine_Object_o *v36; // x22
  __int64 v37; // x9
  CoinRoomCoinListViewManager_o *v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_4B1FF3B & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_1BCAFF8(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_1BCAFF8(&CoinRoomUtility_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_1BCAFF8(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__, v10);
    sub_1BCAFF8(&CoinRoomCoinListViewManager___c_TypeInfo, v11);
    byte_4B1FF3B = 1;
  }
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v12 = CoinRoomUtility__MaxPoint(0LL);
  v13 = CoinRoomUtility__MonthExchangePoint(0LL);
  v14 = CoinRoomUtility__CalcPoint(0LL);
  v15 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v17 = v14;
  if ( !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v15 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  _9__63_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = CoinRoomCoinListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v15->static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__63_0,
      v19,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      0LL);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__63_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v21, v22);
  }
  v24 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_3055C58 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( v12 > v13 + v24 * v17 )
  {
    if ( itemList )
    {
      v26 = 0;
      while ( v26 < itemList->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 v26,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v28 = Item;
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
              itemList = (System_Collections_Generic_List_object__o *)v28[6].monitor;
              if ( !itemList )
                goto LABEL_41;
              v31 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
                || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v31 - 1] != CoinRoomCoinIconObject_TypeInfo )
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
        ++v26;
        if ( !itemList )
          goto LABEL_41;
      }
      return;
    }
LABEL_41:
    sub_1BCB254(itemList, v23);
  }
  if ( !itemList )
    goto LABEL_41;
  v32 = 0;
  while ( v32 < itemList->fields._size )
  {
    v33 = System_Collections_Generic_List_object___get_Item(
            itemList,
            v32,
            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( v33 )
    {
      v34 = v33;
      v35 = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v33->klass->vtable[0].methodPtr) >= (unsigned int)v35
        && (CoinRoomCoinIconItem_c *)v33->klass->_2.typeHierarchy[v35 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v36 = (UnityEngine_Object_o *)v33[6].monitor;
        BYTE4(v33[9].monitor) = SLODWORD(v33[9].monitor) > 0;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v36, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v34[6].monitor;
          if ( !itemList )
            goto LABEL_41;
          v37 = LOBYTE(CoinRoomCoinIconObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v37
            || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v37 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_43:
            sub_1BCB514(itemList);
            CoinRoomCoinListViewManager__OnClickAllRelease(v38, v39);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(
            (CoinRoomCoinIconObject_o *)itemList,
            (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v32;
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t klass; // w8

  if ( (byte_4B1FF44 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&deleteNum);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4B1FF44 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1BCB254(itemList, *(_QWORD *)&deleteNum);
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v8,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    ++v8;
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

  if ( (byte_4B1FF26 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1FF26 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
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
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1FF2A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B1FF2A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v11;
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

  if ( (byte_4B1FF27 & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1FF27 = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A198E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A19884;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = index;
  v22 = kind;
  v20 = id;
  if ( (byte_4B20109 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&CoinRoomCoinListViewManager_ResultKind_TypeInfo, v10);
    byte_4B20109 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             CoinRoomCoinListViewManager_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&index,
             *(_QWORD *)&id,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v18, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B2010A & 1) == 0 )
  {
    sub_1BCAFF8(&CoinRoomCoinListViewManager___c_TypeInfo, v1);
    byte_4B2010A = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CoinRoomCoinListViewManager___c_TypeInfo->static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4B2010D & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B2010D = 1;
  }
  if ( !value )
    sub_1BCB254(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B2010C & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B2010C = 1;
  }
  if ( !value )
    sub_1BCB254(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B2010B & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B2010B = 1;
  }
  if ( !value )
    sub_1BCB254(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B2010E & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4B2010E = 1;
  }
  if ( !value )
    sub_1BCB254(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}