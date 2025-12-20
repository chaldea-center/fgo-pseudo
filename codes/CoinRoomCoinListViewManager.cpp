void CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3063F & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&StringLiteral_4533/*"CoinRoomCoinList1"*/);
    byte_4D3063F = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_4533/*"CoinRoomCoinList1"*/, 27, 1, 0);
  CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D3063E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_4D3063E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.selectedCoinDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantCoinList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CoinRoomCoinListViewManager__ChangeIconScale(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CoinRoomCoinListViewManager_o *v11; // x0
  int v12; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v18; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_4D3063B & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3063B = 1;
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
    *((_DWORD *)p_seed + 105) = v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        (sort = (ListViewSort_o *)this->fields.itemList) == 0) )
  {
LABEL_23:
    sub_1C942F0(sort, method);
  }
  v16 = 0;
  while ( v16 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v16,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v18 = (ListViewItem_o *)Item;
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  CoinRoomCoinListViewManager__SetMode_49067248(this, 2, v15);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CoinRoomCoinListViewManager__CreateConfirmList(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v20; // x20
  int64_t v21; // x25
  int32_t v22; // w26
  bool v23; // w29
  bool v24; // w19
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t current; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v29; // x22
  const MethodInfo *v30; // x4
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  CoinRoomCoinListViewManager_c *v53; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  ListViewItem_o *v62; // x21
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x22
  __int64 v65; // x1
  ListViewObject_o *viewObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4D30624 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_14920/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_4D30624 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v11 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v11);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantCoinList,
    (int32_t)UserSvtCoins,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !selectedCoinDic )
    goto LABEL_56;
  v20 = selectedCoinDic;
  v21 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64);
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
                                             (const MethodInfo_34B4594 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v69,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_3783468 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v22 = 0;
  v23 = isWarningDialog;
  v71 = v69;
  v24 = isConfirmDialog;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v71,
            (const MethodInfo_3610A7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v25 )
      break;
    if ( !Master_object )
      sub_1C942F0(v25, v26);
    current = (int32_t)v71.fields._current;
    Entity = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)Master_object, v21, (int32_t)v71.fields._current, 0);
    v29 = (CoinRoomCoinIconItem_o *)sub_1C942E4(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v29, v22, Entity, 0, v30);
    if ( isDispSelectCount )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v20,
               current,
               (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_1C942F0(0, v32);
      if ( !v29 )
        sub_1C942F0(Item, v32);
      v29->fields._selectedNum_k__BackingField = HIDWORD(Item[1].monitor);
    }
    else if ( !v29 )
    {
      sub_1C942F0(v31, v32);
    }
    v29->fields._isWarningDialog_k__BackingField = v23;
    v29->fields._isConfirmDialog_k__BackingField = v24;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
LABEL_49:
      sub_1C942F0(itemList, v32);
    items = itemList->fields._items;
    v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C942F0(itemList, v32);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v29,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v29;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)v29, v33, v34, v35, v36, v37, v38);
    }
    ++v22;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v71,
    (const MethodInfo_3610A78 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14920/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.seed,
    (int32_t)extremelySmallSizeSeed,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v53 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v53->static_fields->coinRoomSortInfo;
  v55 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44629008(v55, coinRoomSortInfo, 0);
  if ( !v55
    || (ListViewSort__ClearFilter(v55, 0),
        this->fields.sort = v55,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v55, v56, v57, v58, v59, v60, v61),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0) )
  {
LABEL_56:
    sub_1C942F0(gameObject, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v70 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v62 = (ListViewItem_o *)v70.fields._current;
    if ( v70.fields._current )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( v70.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CoinRoomCoinIconItem_c *)v70.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_1C9468C(v70.fields._current);
        goto LABEL_49;
      }
      klass = v70.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        viewObject = v62->fields.viewObject;
        if ( !viewObject )
          sub_1C942F0(0, v65);
        ListViewObject__SetItemSeed(viewObject, v62, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void CoinRoomCoinListViewManager__CreateInitList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  CoinRoomCoinListViewManager_c *v23; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v25; // x1
  struct ListViewSort_o **p_sort; // x20
  const MethodInfo *v27; // x2
  int32_t sortKind; // w8
  bool v29; // w22
  int v30; // w8
  int v31; // w28
  int32_t v32; // w23
  UserSvtCoinEntity_o *v33; // x26
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *itemList; // x24
  CoinRoomCoinIconItem_o *v36; // x25
  const MethodInfo *v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  const MethodInfo *v48; // x1
  System_String_o *v49; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v51; // x22
  MethodInfo *v52; // x23
  Il2CppObject *v53; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v55; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct ListViewSort_o *v63; // x8
  int32_t v64; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v68; // x1
  struct ListViewSort_o **v69; // [xsp+0h] [xbp-70h]
  int32_t v70; // [xsp+8h] [xbp-68h] BYREF
  int32_t v71; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D30625 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataEntityBase__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UserSvtCoinEntity_TypeInfo);
    sub_1C94098(&StringLiteral_3556/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    sub_1C94098(&StringLiteral_3561/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/);
    sub_1C94098(&StringLiteral_14920/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_4D30625 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_31A6FB4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
      (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  selectedCoinDic = (void *)System_Linq_Enumerable__Any_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
                              (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_DataEntityBase___);
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
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  }
  selectedCoinDic = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !selectedCoinDic )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0);
  selectedCoinDic = this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3,
    0,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  selectedCoinDic = this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_60;
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)selectedCoinDic + 536LL))(
    selectedCoinDic,
    3,
    0,
    *(_QWORD *)(*(_QWORD *)selectedCoinDic + 544LL));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v9 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v9);
  *p_userServantCoinList = UserSvtCoins;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantCoinList,
    (int32_t)UserSvtCoins,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v23 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v23 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v23->static_fields->coinRoomSortInfo;
  v25 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v25, v17, v18, v19, v20, v21, v22);
  selectedCoinDic = this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0);
  if ( !*p_sort )
    goto LABEL_60;
  sortKind = (*p_sort)->fields.sortKind;
  v29 = sortKind == 27 || sortKind == 2;
  selectedCoinDic = *p_userServantCoinList;
  v69 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_60:
    sub_1C942F0(selectedCoinDic, v3);
  v30 = *((_DWORD *)selectedCoinDic + 6);
  v31 = v30 - 1;
  if ( v30 >= 1 )
  {
    v32 = 0;
    do
    {
      selectedCoinDic = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)selectedCoinDic,
                          v32,
                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !selectedCoinDic )
        break;
      v33 = (UserSvtCoinEntity_o *)selectedCoinDic;
      naturalAligment = UserSvtCoinEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)selectedCoinDic + 304LL) < (unsigned int)naturalAligment
        || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)selectedCoinDic + 200LL) + 8 * naturalAligment - 8) != UserSvtCoinEntity_TypeInfo )
      {
        break;
      }
      if ( *((int *)selectedCoinDic + 7) >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v36 = (CoinRoomCoinIconItem_o *)sub_1C942E4(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v36, v32, v33, v29, v37);
        if ( !itemList )
          goto LABEL_60;
        items = itemList->fields._items;
        v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_60;
        v46 = itemList->fields._size;
        if ( (unsigned int)v46 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v36,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + v46;
          itemList->fields._size = v46 + 1;
          v47[4] = (Il2CppClass *)v36;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v36, v38, v39, v40, v41, v42, v43);
        }
      }
      if ( v31 == v32 )
        goto LABEL_38;
      selectedCoinDic = *p_userServantCoinList;
      ++v32;
    }
    while ( *p_userServantCoinList );
    goto LABEL_60;
  }
LABEL_38:
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v27);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v48);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3556/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0);
  nowLabel = this->fields.nowLabel;
  v51 = v49;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v71 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v49);
  v52 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  v70 = CoinRoomUtility__MaxPoint(v52);
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  selectedCoinDic = System_String__Format_64459052(v51, (Il2CppObject *)v52, v53, 0);
  if ( !nowLabel )
    goto LABEL_60;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_3561/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0);
  if ( !statusLabel )
    goto LABEL_60;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v55);
  selectedCoinDic = this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_60;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = LocalizationManager__Get((System_String_o *)StringLiteral_14920/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_60;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0);
  v63 = *v69;
  if ( !*v69 )
    goto LABEL_60;
  v64 = v63->fields.sortKind;
  if ( v64 != 2 && v64 != 14 && (v64 & 0xFFFFFFFE) != 0x1A )
    v63->fields.sortKind = 27;
  iconScaleKind = v63->fields.iconScaleKind;
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v57, v58, v59, v60, v61, v62);
LABEL_58:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v3);
  if ( !scaleChangeTabSprite )
    goto LABEL_60;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v68);
}


void CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4D30621 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    byte_4D30621 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1C942F0(0, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0);
}


void CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v5; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_4D3062C & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    byte_4D3062C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
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
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0);
      return;
    }
LABEL_11:
    sub_1C942F0(selectedCoinDic, v3);
  }
}


void CoinRoomCoinListViewManager__EndCloseItemDetail(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_49067248(this, 2, v4);
}


void CoinRoomCoinListViewManager__EndSelectFilterKind(
        CoinRoomCoinListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *sortSelectManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    sub_1C942F0(0, isDecide);
  CoinRoomSortSelectManager__Close_49095072(sortSelectManager, 0, method);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v6);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    CoinRoomCoinListViewManager__RefrashListDisp(this, 0, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__EndSelectSortKind(
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
  __int64 naturalAligment; // x10

  if ( (byte_4D30638 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D30638 = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_19;
  CoinRoomSortSelectManager__Close_49095072(sortSelectManager, 0, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v8 = 0) : (v8 = 1),
        (sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList) == 0) )
  {
LABEL_19:
    sub_1C942F0(sortSelectManager, isDecide);
  }
  v9 = 0;
  while ( v9 < SLODWORD(sortSelectManager->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sortSelectManager,
             v9,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(Item[10].klass) = v8;
      }
    }
    sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList;
    ++v9;
    if ( !sortSelectManager )
      goto LABEL_19;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CoinRoomCoinListViewManager__EndShowItemDetail(
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

  if ( (byte_4D30631 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30631 = 1;
  }
  v4 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0) )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0) )
  {
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0);
    if ( !v8 )
      goto LABEL_15;
    CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v8, v9, 0);
  }
  else
  {
LABEL_11:
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0);
    if ( !itemDetailInfoComp )
      goto LABEL_15;
    ItemDetailInfoComponent__Close_33886108(itemDetailInfoComp, v11, 0);
  }
  Instance = (CommonUI_o *)this->fields.scrollView;
  if ( !Instance )
LABEL_15:
    sub_1C942F0(Instance, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
}


System_String_o *CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C942F0(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *CoinRoomCoinListViewManager__GetSelectedDic(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectedCoinDic;
}


void CoinRoomCoinListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_4D30622 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_TypeInfo);
    byte_4D30622 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_1C942F0(0, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0);
}


bool CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C942F0(this, 0);
  return ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
}


void CoinRoomCoinListViewManager__ModifyItem(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
}


void CoinRoomCoinListViewManager__OnClicFilterKind(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D30636 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    byte_4D30636 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClicFilterKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClicFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1C942E4(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      v8);
    if ( !sortSelectManager )
      sub_1C942F0(v9, v10);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v7, v11);
  }
}


void CoinRoomCoinListViewManager__OnClickAllRelease(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v16; // x2
  __int64 v17; // x9
  CoinRoomCoinListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4D30635 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&CoinRoomCoinIconObject_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30635 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickAllRelease__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickAllRelease__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v7);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v8);
    v9 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
           (const MethodInfo_31BB900 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v9, v10);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.allReleaseButton;
    if ( !selectedCoinDic
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
            selectedCoinDic,
            3,
            0,
            selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton) == 0)
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
            selectedCoinDic,
            3,
            0,
            selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemList) == 0) )
    {
LABEL_24:
      sub_1C942F0(selectedCoinDic, v5);
    }
    v11 = 0;
    while ( v11 < SLODWORD(selectedCoinDic->fields._entries) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectedCoinDic,
               v11,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v13 = Item;
        naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            LODWORD(v13[10].klass) = 0;
            LODWORD(v13[1].klass) = -1;
            BYTE4(v13[10].klass) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v13[7].klass;
            if ( !selectedCoinDic )
              goto LABEL_24;
            v17 = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment;
            if ( selectedCoinDic->klass->_2.naturalAligment < (unsigned int)v17
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v17 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              sub_1C9468C(selectedCoinDic);
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


void CoinRoomCoinListViewManager__OnClickIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 2, obj, v3);
}


void CoinRoomCoinListViewManager__OnClickListView(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CoinRoomCoinListViewManager__OnClickScaleChange(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v7; // x1
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v9; // x1

  if ( (byte_4D3063C & 1) == 0 )
  {
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    byte_4D3063C = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_1C942F0(ScaleButtonSpriteName, v9);
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0);
  }
}


void CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D30639 & 1) == 0 )
  {
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    byte_4D30639 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void CoinRoomCoinListViewManager__OnClickSortKind(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D30637 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    byte_4D30637 = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0, 0, 0, 0, 0, 0);
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_1C942E4(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectManager )
      sub_1C942F0(v9, v10);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v7, v11);
  }
}


void CoinRoomCoinListViewManager__OnMoveEnd(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4D3062F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3062F = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C942F0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void CoinRoomCoinListViewManager__OnPressIcon(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UIScrollView_o *scrollView; // x0

  CoinRoomCoinListViewManager__OnSelectedCoinIcon(this, 1, obj, v3);
  scrollView = this->fields.scrollView;
  if ( !scrollView || (UIScrollView__Press(scrollView, 0, 0), (scrollView = this->fields.scrollView) == 0) )
    sub_1C942F0(scrollView, v5);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__OnSelectedCoinIcon(
        CoinRoomCoinListViewManager_o *this,
        int32_t kind,
        CoinRoomCoinIconObject_o *iconObject,
        const MethodInfo *method)
{
  int32_t v5; // w21
  CoinRoomCoinListViewManager_o *v6; // x19
  int32_t *linkItem; // x22
  __int64 naturalAligment; // x9
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
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w23
  System_Action_T1__T2__o *v31; // x24
  const MethodInfo *v32; // x5
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v34; // x22
  CoinRoomCoinListViewManager_o *v35; // x0
  CoinRoomCoinIconObject_o *v36; // x1
  const MethodInfo *v37; // x2
  UserSvtCoinEntity_o *v38; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_4D30630 & 1) == 0 )
  {
    sub_1C94098(&System_Action_CoinRoomCoinIconObject__int__TypeInfo);
    sub_1C94098(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserSvtCoinMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__);
    this = (CoinRoomCoinListViewManager_o *)sub_1C94098(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4D30630 = 1;
  }
  entity = 0;
  v38 = 0;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_39;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_39;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)naturalAligment
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[40] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v12 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_39;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_39;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &entity,
                 linkItem[31],
                 (const MethodInfo_345B50C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0);
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C942E4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
              ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                v15,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0);
              if ( !Instance )
                goto LABEL_39;
              CommonUI__OpenItemLinkInfoDetailWindow_31691264((CommonUI_o *)Instance, UserItemData, v15, 0);
            }
            else
            {
              itemDetailInfoComp = v6->fields.itemDetailInfoComp;
              v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                v34,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0);
              if ( !itemDetailInfoComp )
                goto LABEL_39;
              ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v34, 5, 0);
            }
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0);
          if ( !v12 )
            goto LABEL_39;
          v16 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    v12,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v16 || !this )
            goto LABEL_39;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v38,
                 v16->fields.m_CachedPtr,
                 linkItem[30],
                 0) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v18 = v38;
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
              _9__58_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__object___int____ctor(
                _9__58_0,
                v22,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                0);
              static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              static_fields->__9__58_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__58_0;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__58_0,
                (int32_t)_9__58_0,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
            }
            v30 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_31DADFC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v31 = (System_Action_T1__T2__o *)sub_1C942E4(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v31,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              0);
            if ( !bulkSelectDialog )
              goto LABEL_39;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v18,
              iconObject,
              v30,
              (System_Action_CoinRoomCoinIconObject__int__o *)v31,
              v32);
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
               linkItem[30],
               (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              linkItem[30],
              (const MethodInfo_34B5D5C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v9);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v10);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v11);
            return;
          }
LABEL_39:
          sub_1C942F0(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      sub_1C9468C(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v35, v36, v37);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__RefrashListDisp(
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
  void (__fastcall *methodPtr)(_QWORD, _QWORD, _QWORD, _QWORD); // x9
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_int__object__c *v17; // x8
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4D30633 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30633 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    selectedCoinDic,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v20,
           (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v6 )
      break;
    if ( !v20.fields._current.fields.value )
      sub_1C942F0(v6, v7);
    klass = v20.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1C942F0(0, v7);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v8);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v20,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v10);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v11);
  v12 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_31BB900 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v12, v13);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
                                                                              (const MethodInfo_31BB900 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_18;
  methodPtr = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))allReleaseButton->klass->vtable._14_SetState.methodPtr;
  v16 = allReleaseButton->klass->vtable._14_SetState.method;
  if ( !(_DWORD)selectedCoinDic )
  {
    methodPtr(this->fields.allReleaseButton, 3, 0, v16);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v17 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_1C942F0(selectedCoinDic, *(_QWORD *)&num);
  }
  methodPtr(this->fields.allReleaseButton, 0, 1, v16);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_18;
  v17 = selectedCoinDic->klass;
LABEL_15:
  v17->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__RequestListObject(
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

  if ( (byte_4D3062E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_OnMoveEnd__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D3062E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      CoinRoomCoinIconObject__Init_49059488((CoinRoomCoinIconObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__SelectedCoinConfirm(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v4; // w20
  CoinRoomCoinIconObject_o *v5; // x21
  CoinRoomCoinListViewManager_o *v6; // x19
  struct ListViewItem_o *linkItem; // x22
  __int64 naturalAligment; // x9
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
  if ( (byte_4D30632 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager_RefrashListDisp__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    this = (CoinRoomCoinListViewManager_o *)sub_1C94098(&SelectedUserSvtCoin_TypeInfo);
    byte_4D30632 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v11 = 0;
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
    naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.m_CancellationTokenSource);
        HIDWORD(this->fields.m_CancellationTokenSource) = v4;
      }
      else
      {
        v12 = (SelectedUserSvtCoin_o *)sub_1C942E4(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v12, v5, v4, v13);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__object___Add(
          selectedCoinDic,
          klass,
          (Il2CppObject *)v12,
          (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_31BB900 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v15 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
      System_Action_int____ctor(v15, (Il2CppObject *)v6, Method_CoinRoomCoinListViewManager_RefrashListDisp__, 0);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v11 = v15;
        goto LABEL_21;
      }
LABEL_22:
      sub_1C942F0(this, iconObject);
    }
    sub_1C9468C(v5->fields.linkItem);
    SelectedUserSvtCoin___ctor(v16, v17, v18, v19);
  }
}


void CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  int32_t v22; // w8
  UIProgressBar_o *addSlider; // x0
  int v24; // w8
  float v25; // s0

  if ( (byte_4D30629 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__);
    sub_1C94098(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4D30629 = 1;
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
    _9__45_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__45_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      0);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__45_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__45_0,
      (int32_t)_9__45_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v22 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_31DADFC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v24 = v7 + v22 * v11;
  if ( v5 <= v24 )
  {
    if ( addSlider )
    {
      v25 = (float)v5;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C942F0(addSlider, v21);
  }
  if ( !addSlider )
    goto LABEL_17;
  v25 = (float)v24 / (float)v5;
LABEL_16:
  UIProgressBar__set_value(addSlider, v25, 0);
}


void CoinRoomCoinListViewManager__SetAddNumLabel(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomCoinListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  System_Func_T__TResult__o *_9__43_0; // x21
  Il2CppObject *v6; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w0
  __int64 v15; // x1
  int32_t v16; // w20
  System_String_o *v17; // x21
  UILabel_o *addLabel; // x19
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30627 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__);
    sub_1C94098(&CoinRoomCoinListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_3542/*"COIN_ROOM_ADD_NUM"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D30627 = 1;
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
    _9__43_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__43_0,
      v6,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      0);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__43_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_31DADFC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v14 )
  {
    v16 = v14;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3542/*"COIN_ROOM_ADD_NUM"*/, 0);
    addLabel = this->fields.addLabel;
    v21 = v16;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = System_String__Format(v17, v19, 0);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v20, 0);
      return;
    }
LABEL_16:
    sub_1C942F0(v20, v15);
  }
  v20 = (System_String_o *)this->fields.addLabel;
  if ( !v20 )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)v20, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void CoinRoomCoinListViewManager__SetCurrentBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *currentSlider; // x8
  float v9; // s0

  if ( (byte_4D30628 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    byte_4D30628 = 1;
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
    sub_1C942F0(v6, v7);
  }
  if ( !currentSlider )
    goto LABEL_11;
  v9 = (float)(int)v6 / (float)v5;
LABEL_10:
  UIProgressBar__set_value(currentSlider, v9, 0);
}


void CoinRoomCoinListViewManager__SetFilterButtonBGImage(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D3062B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17573/*"btn_filter_on"*/);
    sub_1C94098(&StringLiteral_17572/*"btn_filter"*/);
    byte_4D3062B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C942F0(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17572/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17573/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CoinRoomCoinListViewManager__SetMode_49067248(this, mode, v10);
}


void CoinRoomCoinListViewManager__SetMode_49067248(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    CoinRoomCoinListViewManager__RequestListObject(this, mode + 1, 0.0, v5);
}


void CoinRoomCoinListViewManager__SetObjectItem(
        CoinRoomCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D3062D & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_1C94098(&CoinRoomCoinIconObject_TypeInfo);
    byte_4D3062D = 1;
  }
  if ( !obj
    || (naturalAligment = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CoinRoomCoinIconObject__Init_49059488((CoinRoomCoinIconObject_o *)obj, v7, 0, 0.0, method);
}


void CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x0
  int32_t size; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30626 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3556/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    byte_4D30626 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3556/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0);
  selectDoneLabel = this->fields.selectDoneLabel;
  v13 = selectedNum;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v10 = (Il2CppObject *)v7,
        size = userServantCoinList->fields._size,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size),
        v7 = System_String__Format_64459052(v5, v10, v11, 0),
        !selectDoneLabel) )
  {
    sub_1C942F0(v7, v8);
  }
  UILabel__set_text(selectDoneLabel, v7, 0);
}


void CoinRoomCoinListViewManager__SetSortButtonBGImage(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4D3062A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17526/*"btn_bg_05"*/);
    sub_1C94098(&StringLiteral_17527/*"btn_bg_06"*/);
    sub_1C94098(&StringLiteral_422/*"#FE4545"*/);
    sub_1C94098(&StringLiteral_403/*"#000000"*/);
    byte_4D3062A = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.sortSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_17526/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_403/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_17527/*"btn_bg_06"*/;
    v5 = (System_String_o **)&StringLiteral_422/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.sortSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_1C942F0(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void CoinRoomCoinListViewManager__SetSortButtonImage(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D3063A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17609/*"btn_sort_up"*/);
    sub_1C94098(&StringLiteral_17709/*"btn_txt_up"*/);
    sub_1C94098(&StringLiteral_17660/*"btn_txt_new"*/);
    sub_1C94098(&StringLiteral_17650/*"btn_txt_down"*/);
    sub_1C94098(&StringLiteral_17667/*"btn_txt_old"*/);
    sub_1C94098(&StringLiteral_17606/*"btn_sort_down"*/);
    byte_4D3063A = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17667/*"btn_txt_old"*/ : &StringLiteral_17660/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17709/*"btn_txt_up"*/ : &StringLiteral_17650/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C942F0(sort, v4);
  }
}


void CoinRoomCoinListViewManager__SetTouchEnabled(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  int32_t v22; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v24; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v29; // x9
  int32_t v30; // w20
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x21
  __int64 v33; // x10
  UnityEngine_Object_o *v34; // x22
  __int64 v35; // x9
  CoinRoomCoinListViewManager_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_4D30634 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&CoinRoomCoinIconObject_TypeInfo);
    sub_1C94098(&CoinRoomUtility_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_1C94098(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__);
    sub_1C94098(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4D30634 = 1;
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
    _9__63_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__63_0,
      v13,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      0);
    static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__63_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__63_0,
      (int32_t)_9__63_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v22 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_31DADFC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( v5 > v7 + v22 * v11 )
  {
    if ( itemList )
    {
      v24 = 0;
      while ( v24 < itemList->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 v24,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v26 = Item;
          naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(Item[10].klass) = 1;
            klass = (UnityEngine_Object_o *)Item[7].klass;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              itemList = (System_Collections_Generic_List_object__o *)v26[7].klass;
              if ( !itemList )
                goto LABEL_41;
              v29 = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment;
              if ( itemList->klass->_2.naturalAligment < (unsigned int)v29
                || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v29 - 1] != CoinRoomCoinIconObject_TypeInfo )
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
        ++v24;
        if ( !itemList )
          goto LABEL_41;
      }
      return;
    }
LABEL_41:
    sub_1C942F0(itemList, v21);
  }
  if ( !itemList )
    goto LABEL_41;
  v30 = 0;
  while ( v30 < itemList->fields._size )
  {
    v31 = System_Collections_Generic_List_object___get_Item(
            itemList,
            v30,
            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( v31 )
    {
      v32 = v31;
      v33 = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( v31->klass->_2.naturalAligment >= (unsigned int)v33
        && (CoinRoomCoinIconItem_c *)v31->klass->_2.typeHierarchy[v33 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v34 = (UnityEngine_Object_o *)v31[7].klass;
        BYTE4(v31[10].klass) = SLODWORD(v31[10].klass) > 0;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v34, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v32[7].klass;
          if ( !itemList )
            goto LABEL_41;
          v35 = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment;
          if ( itemList->klass->_2.naturalAligment < (unsigned int)v35
            || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v35 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_43:
            sub_1C9468C(itemList);
            CoinRoomCoinListViewManager__OnClickAllRelease(v36, v37);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(
            (CoinRoomCoinIconObject_o *)itemList,
            (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v30;
    if ( !itemList )
      goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinListViewManager__UpdateSelectNum(
        CoinRoomCoinListViewManager_o *this,
        int32_t deleteNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  int32_t klass; // w8

  if ( (byte_4D3063D & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D3063D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_1C942F0(itemList, *(_QWORD *)&deleteNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
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


void CoinRoomCoinListViewManager__add_callbackFunc(
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

  if ( (byte_4D3061F & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4D3061F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *CoinRoomCoinListViewManager__get_ObjectList(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D30623 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30623 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v3;
}


void CoinRoomCoinListViewManager__remove_callbackFunc(
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

  if ( (byte_4D30620 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_4D30620 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v7->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  CoinRoomCoinListViewManager__DeleteContinueData(v10);
}


void CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACD24C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACD1EC;
}


System_IAsyncResult_o *CoinRoomCoinListViewManager_CallbackFunc__BeginInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = kind;
  v13 = id;
  if ( (byte_4D30640 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&CoinRoomCoinListViewManager_ResultKind_TypeInfo);
    byte_4D30640 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void CoinRoomCoinListViewManager_CallbackFunc__Invoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    id,
    this->fields.method);
}


void CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30641 & 1) == 0 )
  {
    sub_1C94098(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_4D30641 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomCoinListViewManager___c_TypeInfo->static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CoinRoomCoinListViewManager___c___ctor(CoinRoomCoinListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CoinRoomCoinListViewManager___c___OnSelectedCoinIcon_b__58_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4D30644 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30644 = 1;
  }
  if ( !value )
    sub_1C942F0(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4D30643 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30643 = 1;
  }
  if ( !value )
    sub_1C942F0(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4D30642 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30642 = 1;
  }
  if ( !value )
    sub_1C942F0(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4D30645 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_4D30645 = 1;
  }
  if ( !value )
    sub_1C942F0(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}