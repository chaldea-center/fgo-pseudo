void CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974821 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_4703/*"CoinRoomCoinList1"*/);
    byte_5974821 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_4703/*"CoinRoomCoinList1"*/, 27, 1, 0);
  CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974820 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_5974820 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectedCoinDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantCoinList,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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

  if ( (byte_597481D & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597481D = 1;
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
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  CoinRoomCoinListViewManager__SetMode_55496228(this, 2, v15);
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
  __int64 v11; // x1
  CoinRoomUtility_c *v12; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *v22; // x19
  int64_t v23; // x23
  int32_t v24; // w24
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t current; // w26
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v29; // x25
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  __int64 v44; // x1
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  CoinRoomCoinListViewManager_c *v54; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v56; // x21
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x2
  ListViewItem_o *v64; // x21
  __int64 naturalAligment; // x9
  Il2CppClass *klass; // x22
  __int64 v67; // x1
  ListViewObject_o *viewObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5974806 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_5974806 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v12 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v11);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v12);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantCoinList,
    (int32_t)UserSvtCoins,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !selectedCoinDic )
    goto LABEL_53;
  v22 = selectedCoinDic;
  v23 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64);
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
                                             (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_53;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v69,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_437DCDC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v24 = 0;
  v71 = v69;
  v69.fields._list = 0;
  *(_QWORD *)&v69.fields._index = &v71;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v71,
            (const MethodInfo_415904C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v25 )
      break;
    if ( !Master_object )
      goto LABEL_49;
    current = (int32_t)v71.fields._current;
    Entity = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)Master_object, v23, (int32_t)v71.fields._current, 0);
    v29 = (CoinRoomCoinIconItem_o *)sub_2213CCC(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v29, v24, Entity, 0, v30);
    if ( isDispSelectCount )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v22,
               current,
               (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v31);
      if ( !v29 )
        sub_2213CDC(Item, v31);
      v29->fields._selectedNum_k__BackingField = HIDWORD(Item[1].monitor);
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList
      || (items = itemList->fields._items,
          v41 = Method_System_Collections_Generic_List_ListViewItem__Add__,
          ++itemList->fields._version,
          !items) )
    {
      sub_2213CDC(itemList, v31);
    }
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v29,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v43[4] = (Il2CppClass *)v29;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v29, v32, v33, v34, v35, v36, v37);
    }
    ++v24;
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v71,
    (const MethodInfo_4159048 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_53;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)extremelySmallSizeSeed,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v54 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v53);
    v54 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v54->static_fields->coinRoomSortInfo;
  v56 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50855524(v56, coinRoomSortInfo, 0);
  if ( !v56
    || (ListViewSort__ClearFilter(v56, 0),
        this->fields.sort = v56,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v56, v57, v58, v59, v60, v61, v62),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0) )
  {
LABEL_53:
    sub_2213CDC(gameObject, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v70 = v69;
  v69.fields._list = 0;
  *(_QWORD *)&v69.fields._index = &v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v64 = (ListViewItem_o *)v70.fields._current;
    if ( v70.fields._current )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( v70.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (CoinRoomCoinIconItem_c *)v70.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        sub_221405C(v70.fields._current, CoinRoomCoinIconItem_TypeInfo, v63);
LABEL_49:
        sub_2213CDC(v25, v26);
      }
      klass = v70.fields._current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CoinRoomCoinIconItem_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        viewObject = v64->fields.viewObject;
        if ( !viewObject )
          sub_2213CDC(0, v67);
        ListViewObject__SetItemSeed(viewObject, v64, this->fields.seed, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void CoinRoomCoinListViewManager__CreateInitList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  int32_t size; // w2
  int v7; // w9
  __int64 v8; // x1
  CoinRoomUtility_c *v9; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  CoinRoomCoinListViewManager_c *v24; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v26; // x1
  struct ListViewSort_o **p_sort; // x20
  const MethodInfo *v28; // x2
  int32_t sortKind; // w9
  struct System_Collections_Generic_List_DataEntityBase__o *v30; // x8
  bool v31; // zf
  bool v32; // w21
  int v33; // w27
  int32_t v34; // w22
  UserSvtCoinEntity_o *v35; // x25
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *itemList; // x23
  CoinRoomCoinIconItem_o *v38; // x24
  const MethodInfo *v39; // x4
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  System_String_o *v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x22
  UILabel_o *nowLabel; // x21
  MethodInfo *v56; // x23
  Il2CppObject *v57; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v59; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct ListViewSort_o *v67; // x8
  int32_t v68; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v72; // x1
  struct ListViewSort_o **v73; // [xsp+0h] [xbp-70h]
  int32_t v74; // [xsp+8h] [xbp-68h] BYREF
  int32_t v75; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5974807 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UserSvtCoinEntity_TypeInfo);
    sub_2213A60(&StringLiteral_3693/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    sub_2213A60(&StringLiteral_3698/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/);
    sub_2213A60(&StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_5974807 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_38653BC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_61;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
                                                                              (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_DataEntityBase___);
  if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
  {
    userServantCoinList = this->fields.userServantCoinList;
    if ( !userServantCoinList )
      goto LABEL_61;
    size = userServantCoinList->fields._size;
    v7 = userServantCoinList->fields._version + 1;
    userServantCoinList->fields._size = 0;
    userServantCoinList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)userServantCoinList->fields._items, 0, size, 0);
  }
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !selectedCoinDic )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_61;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
    selectedCoinDic,
    3,
    0,
    selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_61;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
    selectedCoinDic,
    3,
    0,
    selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v9 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v8);
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v9);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantCoinList,
    (int32_t)UserSvtCoins,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v24 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v17);
    v24 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v24->static_fields->coinRoomSortInfo;
  v26 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v26, v18, v19, v20, v21, v22, v23);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_61;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0);
  if ( !*p_sort )
    goto LABEL_61;
  sortKind = (*p_sort)->fields.sortKind;
  v30 = this->fields.userServantCoinList;
  v73 = &this->fields.sort;
  v31 = sortKind == 27 || sortKind == 2;
  v32 = v31;
  if ( !v30 )
LABEL_61:
    sub_2213CDC(selectedCoinDic, v3);
  v33 = v30->fields._size;
  if ( v33 >= 1 )
  {
    v34 = 0;
    do
    {
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.userServantCoinList;
      if ( !selectedCoinDic )
        goto LABEL_61;
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)selectedCoinDic,
                                                                                  v34,
                                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
      if ( !selectedCoinDic )
        goto LABEL_61;
      v35 = (UserSvtCoinEntity_o *)selectedCoinDic;
      naturalAligment = UserSvtCoinEntity_TypeInfo->_2.naturalAligment;
      if ( selectedCoinDic->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UserSvtCoinEntity_c *)selectedCoinDic->klass->_2.typeHierarchy[naturalAligment - 1] != UserSvtCoinEntity_TypeInfo )
      {
        goto LABEL_61;
      }
      if ( SHIDWORD(selectedCoinDic->fields._entries) >= 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v38 = (CoinRoomCoinIconItem_o *)sub_2213CCC(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v38, v34, v35, v32, v39);
        if ( !itemList )
          goto LABEL_61;
        items = itemList->fields._items;
        v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_61;
        v48 = itemList->fields._size;
        if ( (unsigned int)v48 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v38,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + v48;
          itemList->fields._size = v48 + 1;
          v49[4] = (Il2CppClass *)v38;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v38, v40, v41, v42, v43, v44, v45);
        }
      }
    }
    while ( v33 != ++v34 );
  }
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v28);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v50);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0);
  v54 = v52;
  nowLabel = this->fields.nowLabel;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v53);
  v75 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v52);
  v56 = (MethodInfo *)j_il2cpp_value_box_0(qword_5984348, &v75);
  v74 = CoinRoomUtility__MaxPoint(v56);
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v74);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)System_String__Format_75697880(
                                                                              v54,
                                                                              (Il2CppObject *)v56,
                                                                              v57,
                                                                              0);
  if ( !nowLabel )
    goto LABEL_61;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3698/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/,
                                                                              0);
  if ( !statusLabel )
    goto LABEL_61;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v59);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_61;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_15459/*"USER_SERVANT_COIN_LIST_EMPTY"*/,
                                                                              0);
  if ( !emptyMessageLabel )
    goto LABEL_61;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0);
  v67 = *v73;
  if ( !*v73 )
    goto LABEL_61;
  v68 = v67->fields.sortKind;
  if ( v68 != 2 && v68 != 14 && (v68 & 0xFFFFFFFE) != 0x1A )
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
      goto LABEL_59;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
LABEL_59:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
                                                                              this,
                                                                              v3);
  if ( !scaleChangeTabSprite )
    goto LABEL_61;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v72);
}


void CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_5974803 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    byte_5974803 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v1);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0);
}


void CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  __int64 v5; // x1
  CoinRoomCoinListViewManager_c *v6; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_597480E & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    byte_597480E = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)selectedCoinDic,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v6 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v5);
    v6 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v6->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( *(&v6->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v6, v5),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(selectedCoinDic, v3);
  }
}


void CoinRoomCoinListViewManager__EndCloseItemDetail(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_55496228(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(0, isDecide);
  CoinRoomSortSelectManager__Close_55523884(sortSelectManager, 0, method);
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
  int32_t v8; // w20
  bool v10; // w23
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  if ( (byte_597481A & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_597481A = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_19;
  CoinRoomSortSelectManager__Close_55523884(sortSelectManager, 0, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort || (sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList) == 0 )
LABEL_19:
    sub_2213CDC(sortSelectManager, isDecide);
  sortKind = sort->fields.sortKind;
  v8 = 0;
  v10 = sortKind == 27 || sortKind == 2;
  while ( v8 < SLODWORD(sortSelectManager->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sortSelectManager,
             v8,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(Item[9].monitor) = v10;
      }
    }
    sortSelectManager = (CoinRoomSortSelectManager_o *)this->fields.itemList;
    ++v8;
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

  if ( (byte_5974813 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974813 = 1;
  }
  v4 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( !CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0) )
    goto LABEL_11;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0) )
  {
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0);
    if ( !v8 )
      goto LABEL_15;
    CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v8, v9, 0);
  }
  else
  {
LABEL_11:
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0);
    if ( !itemDetailInfoComp )
      goto LABEL_15;
    ItemDetailInfoComponent__Close_39909252(itemDetailInfoComp, v11, 0);
  }
  Instance = (CommonUI_o *)this->fields.scrollView;
  if ( !Instance )
LABEL_15:
    sub_2213CDC(Instance, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
}


System_String_o *CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, method);
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

  if ( (byte_5974804 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_TypeInfo);
    byte_5974804 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( !*(&CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo, v1);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0);
}


bool CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_5974818 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    byte_5974818 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClicFilterKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClicFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_OnClicFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_2213CCC(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      v8);
    if ( !sortSelectManager )
      sub_2213CDC(v9, v10);
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

  if ( (byte_5974817 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&CoinRoomCoinIconObject_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974817 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickAllRelease__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickAllRelease__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_OnClickAllRelease__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      selectedCoinDic,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v7);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v8);
    v9 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
           (const MethodInfo_38789A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
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
      sub_2213CDC(selectedCoinDic, v5);
    }
    v11 = 0;
    while ( v11 < SLODWORD(selectedCoinDic->fields._entries) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)selectedCoinDic,
               v11,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v13 = Item;
        naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
          if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            LODWORD(v13[9].monitor) = 0;
            LODWORD(v13[1].klass) = -1;
            BYTE4(v13[9].monitor) = 1;
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
              sub_221405C(selectedCoinDic, CoinRoomCoinIconObject_TypeInfo, v16);
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

  if ( (byte_597481E & 1) == 0 )
  {
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    byte_597481E = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v5);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v7);
    if ( !scaleChangeTabSprite )
      sub_2213CDC(ScaleButtonSpriteName, v9);
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

  if ( (byte_597481B & 1) == 0 )
  {
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    byte_597481B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_5974819 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    byte_5974819 = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0, 0, 0, 0, 0, 0);
    v3 = Method_CoinRoomCoinListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinRoomCoinListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_2213CCC(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectManager )
      sub_2213CDC(v9, v10);
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

  if ( (byte_5974811 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974811 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_2213CDC(0, v7);
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
    sub_2213CDC(scrollView, v5);
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
  int32_t initMode; // w8
  int32_t *linkItem; // x22
  __int64 naturalAligment; // x9
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  DataManager_o *v13; // x23
  UserItemData_o *UserItemData; // x20
  Il2CppObject *Instance; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v16; // x22
  CoinRoomCoinListViewManager_o *v17; // x21
  __int64 v18; // x1
  CoinBulkSelectDialog_o *bulkSelectDialog; // x21
  UserSvtCoinEntity_o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v22; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__58_0; // x24
  Il2CppObject *v25; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w23
  System_Action_T1__T2__o *v34; // x24
  const MethodInfo *v35; // x5
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v37; // x22
  CoinRoomCoinListViewManager_o *v38; // x0
  CoinRoomCoinIconObject_o *v39; // x1
  const MethodInfo *v40; // x2
  UserSvtCoinEntity_o *v41; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_5974812 & 1) == 0 )
  {
    sub_2213A60(&System_Action_CoinRoomCoinIconObject__int__TypeInfo);
    sub_2213A60(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserSvtCoinMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__);
    this = (CoinRoomCoinListViewManager_o *)sub_2213A60(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_5974812 = 1;
  }
  initMode = v6->fields.initMode;
  entity = 0;
  v41 = 0;
  if ( initMode == 2 )
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
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v13 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_39;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_39;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &entity,
                 linkItem[31],
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0);
            this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_39;
            if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v16 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
              ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                v16,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0);
              if ( !Instance )
                goto LABEL_39;
              CommonUI__OpenItemLinkInfoDetailWindow_37479768((CommonUI_o *)Instance, UserItemData, v16, 0);
            }
            else
            {
              itemDetailInfoComp = v6->fields.itemDetailInfoComp;
              v37 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                v37,
                (Il2CppObject *)v6,
                (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
                0);
              if ( !itemDetailInfoComp )
                goto LABEL_39;
              ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v37, 5, 0);
            }
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0);
          if ( !v13 )
            goto LABEL_39;
          v17 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_object_(
                                                    v13,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v17 || !this )
            goto LABEL_39;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v41,
                 v17->fields.m_CachedPtr,
                 linkItem[30],
                 0) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v20 = v41;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v22 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( !*(&CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo, v18);
              v22 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            static_fields = v22->static_fields;
            _9__58_0 = (System_Func_T__TResult__o *)static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( !*(&v22->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v22, v18);
                static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              }
              v25 = (Il2CppObject *)static_fields->__9;
              _9__58_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__object___int____ctor(
                _9__58_0,
                v25,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                0);
              v26 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              v26->__9__58_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__58_0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v26->__9__58_0,
                (int32_t)_9__58_0,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
            }
            v33 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_3899E40 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v34 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v34,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              0);
            if ( !bulkSelectDialog )
              goto LABEL_39;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v20,
              iconObject,
              v33,
              (System_Action_CoinRoomCoinIconObject__int__o *)v34,
              v35);
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
               (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              linkItem[30],
              (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v10);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v11);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v12);
            return;
          }
LABEL_39:
          sub_2213CDC(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      sub_221405C(iconObject->fields.linkItem, CoinRoomCoinIconItem_TypeInfo, iconObject);
      CoinRoomCoinListViewManager__OnClickIcon(v38, v39, v40);
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
  int32_t v14; // w8
  System_Collections_Generic_Dictionary_int__object__c *v15; // x8
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_5974815 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974815 = 1;
  }
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.selectedCoinDic;
  memset(&v18, 0, sizeof(v18));
  if ( !selectedCoinDic )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v17,
    selectedCoinDic,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v18 = v17;
  v17.fields._dictionary = 0;
  *(_QWORD *)&v17.fields._version = &v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v18,
           (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v6 )
      break;
    if ( !v18.fields._current.fields.value )
      sub_2213CDC(v6, v7);
    klass = v18.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_2213CDC(0, v7);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v8);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v18,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v10);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v11);
  v12 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_38789A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v12, v13);
  v14 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_38789A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.allReleaseButton;
  if ( !v14 )
  {
    if ( selectedCoinDic )
    {
      ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, __int64, _QWORD, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
        selectedCoinDic,
        3,
        0,
        selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
      if ( selectedCoinDic )
      {
        v15 = selectedCoinDic->klass;
        goto LABEL_16;
      }
    }
LABEL_19:
    sub_2213CDC(selectedCoinDic, *(_QWORD *)&num);
  }
  if ( !selectedCoinDic )
    goto LABEL_19;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__object__o *, _QWORD, __int64, const MethodInfo *))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr)(
    selectedCoinDic,
    0,
    1,
    selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_19;
  v15 = selectedCoinDic->klass;
LABEL_16:
  v15->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.methodPtr();
  CoinRoomCoinListViewManager__SetTouchEnabled(this, v16);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5974810 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5974810 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)CoinRoomCoinListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      CoinRoomCoinIconObject__Init_55488600((CoinRoomCoinIconObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
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
  CoinRoomCoinIconObject_o *v5; // x22
  CoinRoomCoinListViewManager_o *v6; // x19
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_Dictionary_int__object__o *selectedCoinDic; // x23
  System_Action_int__o *v10; // x1
  int32_t klass; // w24
  SelectedUserSvtCoin_o *v12; // x25
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w0
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v17; // x21
  SelectedUserSvtCoin_o *v18; // x0
  CoinRoomCoinIconObject_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_5974814 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager_RefrashListDisp__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    this = (CoinRoomCoinListViewManager_o *)sub_2213A60(&SelectedUserSvtCoin_TypeInfo);
    byte_5974814 = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v10 = 0;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v10, *(const MethodInfo **)&num);
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
                                                (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)v6->fields.selectedCoinDic,
                                                  (int32_t)linkItem[1].klass,
                                                  (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.m_CancellationTokenSource);
        HIDWORD(this->fields.m_CancellationTokenSource) = v4;
      }
      else
      {
        klass = (int32_t)linkItem[1].klass;
        v12 = (SelectedUserSvtCoin_o *)sub_2213CCC(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v12, v5, v4, v13);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__object___Add(
          selectedCoinDic,
          klass,
          (Il2CppObject *)v12,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
      LODWORD(linkItem[1].fields.sortValue0) = v4;
      v15 = System_Linq_Enumerable__Count_KeyValuePair_int__object__(
              v14,
              (const MethodInfo_38789A4 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      linkItem->fields.selectNum = v15 - 1;
      v17 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v17, (Il2CppObject *)v6, Method_CoinRoomCoinListViewManager_RefrashListDisp__, 0);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v10 = v17;
        goto LABEL_21;
      }
LABEL_22:
      sub_2213CDC(this, iconObject);
    }
    sub_221405C(v5->fields.linkItem, CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&num);
    SelectedUserSvtCoin___ctor(v18, v19, v20, v21);
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
  __int64 v9; // x1
  CoinRoomCoinListViewManager___c_c *v10; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v12; // w22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v15; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  int32_t v24; // w8
  UIProgressBar_o *addSlider; // x0
  int v26; // w8
  float v27; // s0

  if ( (byte_597480B & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__);
    sub_2213A60(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_597480B = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v12 = v8;
  if ( !*(&CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo, v9);
    v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__45_0 = (System_Func_T__TResult__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__45_0,
      v15,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      0);
    v16 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v16->__9__45_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__45_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__45_0, (int32_t)_9__45_0, v17, v18, v19, v20, v21, v22);
  }
  v24 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_3899E40 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v26 = v7 + v24 * v12;
  if ( v5 <= v26 )
  {
    if ( addSlider )
    {
      v27 = (float)v5;
      goto LABEL_16;
    }
LABEL_17:
    sub_2213CDC(addSlider, v23);
  }
  if ( !addSlider )
    goto LABEL_17;
  v27 = (float)v26 / (float)v5;
LABEL_16:
  UIProgressBar__set_value(addSlider, v27, 0);
}


void CoinRoomCoinListViewManager__SetAddNumLabel(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomCoinListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__43_0; // x21
  Il2CppObject *v7; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w0
  __int64 v16; // x1
  int32_t v17; // w20
  System_String_o *v18; // x21
  UILabel_o *addLabel; // x19
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974809 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__);
    sub_2213A60(&CoinRoomCoinListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_3679/*"COIN_ROOM_ADD_NUM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974809 = 1;
  }
  v3 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !*(&CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo, method);
    v3 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__43_0 = (System_Func_T__TResult__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__43_0,
      v7,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      0);
    v8 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v8->__9__43_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__43_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__43_0, (int32_t)_9__43_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_3899E40 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v15 )
  {
    v17 = v15;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COIN_ROOM_ADD_NUM"*/, 0);
    addLabel = this->fields.addLabel;
    v22 = v17;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    v21 = System_String__Format(v18, v20, 0);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v21, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(v21, v16);
  }
  v21 = (System_String_o *)this->fields.addLabel;
  if ( !v21 )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)v21, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void CoinRoomCoinListViewManager__SetCurrentBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0
  int v5; // w20
  __int64 v6; // x1
  int32_t v7; // w8
  UIProgressBar_o *currentSlider; // x0
  float v9; // s0

  if ( (byte_597480A & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    byte_597480A = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v7 = CoinRoomUtility__MonthExchangePoint(v4);
  currentSlider = (UIProgressBar_o *)this->fields.currentSlider;
  if ( v5 <= v7 )
  {
    if ( currentSlider )
    {
      v9 = (float)v5;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(currentSlider, v6);
  }
  if ( !currentSlider )
    goto LABEL_11;
  v9 = (float)v7 / (float)v5;
LABEL_10:
  UIProgressBar__set_value(currentSlider, v9, 0);
}


void CoinRoomCoinListViewManager__SetFilterButtonBGImage(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_597480D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_597480D = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
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
  CoinRoomCoinListViewManager__SetMode_55496228(this, mode, v10);
}


void CoinRoomCoinListViewManager__SetMode_55496228(
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_597480F & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconObject_TypeInfo);
    byte_597480F = 1;
  }
  if ( obj
    && (naturalAligment = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconObject_TypeInfo )
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
  CoinRoomCoinIconObject__Init_55488600((CoinRoomCoinIconObject_o *)v7, v8, 0, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5974808 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3693/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    byte_5974808 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&selectedNum);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0);
  selectDoneLabel = this->fields.selectDoneLabel;
  v13 = selectedNum;
  v7 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &v13);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v10 = (Il2CppObject *)v7,
        size = userServantCoinList->fields._size,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &size),
        v7 = System_String__Format_75697880(v5, v10, v11, 0),
        !selectDoneLabel) )
  {
    sub_2213CDC(v7, v8);
  }
  UILabel__set_text(selectDoneLabel, v7, 0);
}


void CoinRoomCoinListViewManager__SetSortButtonBGImage(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_597480C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18202/*"btn_bg_05"*/);
    sub_2213A60(&StringLiteral_18203/*"btn_bg_06"*/);
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    byte_597480C = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.sortSprite )
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
  UISprite__set_spriteName(this->fields.sortSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_2213CDC(sort, method);
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

  if ( (byte_597481C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_597481C = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v4);
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
  __int64 v9; // x1
  CoinRoomCoinListViewManager___c_c *v10; // x8
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v12; // w22
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__63_0; // x24
  Il2CppObject *v15; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  int32_t v24; // w8
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v26; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v28; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_c *v30; // x0
  UnityEngine_Object_o *klass; // x22
  __int64 v32; // x2
  CoinRoomCoinIconObject_c *v33; // x1
  __int64 v34; // x9
  int32_t v35; // w20
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x21
  __int64 v38; // x10
  UnityEngine_Object_c *v39; // x0
  UnityEngine_Object_o *v40; // x22
  int v41; // w8
  __int64 v42; // x9
  CoinRoomCoinListViewManager_o *v43; // x0
  const MethodInfo *v44; // x1

  if ( (byte_5974816 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&CoinRoomCoinIconObject_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_2213A60(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__);
    sub_2213A60(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_5974816 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, method);
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  selectedCoinDic = this->fields.selectedCoinDic;
  v12 = v8;
  if ( !*(&CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo, v9);
    v10 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__63_0 = (System_Func_T__TResult__o *)static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__63_0,
      v15,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      0);
    v16 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v16->__9__63_0 = (struct System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)_9__63_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__63_0, (int32_t)_9__63_0, v17, v18, v19, v20, v21, v22);
  }
  v24 = System_Linq_Enumerable__Sum_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__63_0,
          (const MethodInfo_3899E40 *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( v5 > v7 + v24 * v12 )
  {
    if ( itemList )
    {
      v26 = 0;
      while ( v26 < itemList->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 v26,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v28 = Item;
          naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (CoinRoomCoinIconItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            v30 = UnityEngine_Object_TypeInfo;
            klass = (UnityEngine_Object_o *)v28[7].klass;
            BYTE4(v28[9].monitor) = 1;
            if ( !*(&v30->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v30, v23);
            if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
            {
              itemList = (System_Collections_Generic_List_object__o *)v28[7].klass;
              if ( !itemList )
                goto LABEL_41;
              v33 = CoinRoomCoinIconObject_TypeInfo;
              v34 = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment;
              if ( itemList->klass->_2.naturalAligment < (unsigned int)v34
                || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v34 - 1] != CoinRoomCoinIconObject_TypeInfo )
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
    sub_2213CDC(itemList, v23);
  }
  if ( !itemList )
    goto LABEL_41;
  v35 = 0;
  while ( v35 < itemList->fields._size )
  {
    v36 = System_Collections_Generic_List_object___get_Item(
            itemList,
            v35,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( v36 )
    {
      v37 = v36;
      v38 = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
      if ( v36->klass->_2.naturalAligment >= (unsigned int)v38
        && (CoinRoomCoinIconItem_c *)v36->klass->_2.typeHierarchy[v38 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v39 = UnityEngine_Object_TypeInfo;
        v40 = (UnityEngine_Object_o *)v37[7].klass;
        v41 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
        BYTE4(v37[9].monitor) = SLODWORD(v37[9].monitor) > 0;
        if ( !v41 )
          j_il2cpp_runtime_class_init_0(v39, v23);
        if ( !UnityEngine_Object__op_Equality(v40, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v37[7].klass;
          if ( !itemList )
            goto LABEL_41;
          v33 = CoinRoomCoinIconObject_TypeInfo;
          v42 = CoinRoomCoinIconObject_TypeInfo->_2.naturalAligment;
          if ( itemList->klass->_2.naturalAligment < (unsigned int)v42
            || (CoinRoomCoinIconObject_c *)itemList->klass->_2.typeHierarchy[v42 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_43:
            sub_221405C(itemList, v33, v32);
            CoinRoomCoinListViewManager__OnClickAllRelease(v43, v44);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(
            (CoinRoomCoinIconObject_o *)itemList,
            (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v35;
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

  if ( (byte_597481F & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_597481F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_12:
    sub_2213CDC(itemList, *(_QWORD *)&deleteNum);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CoinRoomCoinListViewManager_o *v10; // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_5974801 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_5974801 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v6->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5974805 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974805 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      v17 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__,
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CoinRoomCoinIconObject__o *)v3;
}


void CoinRoomCoinListViewManager__remove_callbackFunc(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_5974802 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_5974802 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CoinRoomCoinListViewManager_CallbackFunc_c *)v6->klass != CoinRoomCoinListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, v7);
  CoinRoomCoinListViewManager__DeleteContinueData(v10);
}


void CoinRoomCoinListViewManager_CallbackFunc___ctor(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
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
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2014780;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2014720;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = kind;
  v13 = id;
  if ( (byte_5974822 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager_ResultKind_TypeInfo);
    byte_5974822 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974823 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_5974823 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomCoinListViewManager___c_TypeInfo->static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CoinRoomCoinListViewManager___c_TypeInfo->static_fields,
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
  if ( (byte_5974826 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974826 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_5974825 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974825 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_5974824 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974824 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_5974827 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_5974827 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}