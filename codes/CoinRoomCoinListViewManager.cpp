void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B711 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_4248/*"CoinRoomCoinList1"*/);
    byte_438B711 = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_4248/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438B710 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_438B710 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__ChangeIconScale(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CoinRoomCoinListViewManager_o *v8; // x19
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
  if ( (byte_438B70D & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CoinRoomCoinListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B70D = 1;
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
        (this = (CoinRoomCoinListViewManager_o *)v8->fields.sort) == 0LL)
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
      v17 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (CoinRoomCoinIconItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CoinRoomCoinListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (CoinRoomCoinListViewManager_o *)v16->fields.viewObject;
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
  CoinRoomCoinListViewManager__SetMode_25845152(v8, 2, v13);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
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
  __int64 v11; // x1
  CoinRoomUtility_c *v12; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t v21; // x25
  int32_t v22; // w26
  bool v23; // w28
  bool v24; // w21
  int32_t currentKey; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v27; // x22
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  CoinRoomCoinListViewManager_c *v43; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ListViewItem_o *v52; // x21
  __int64 v53; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v55; // x1
  ListViewObject_o *viewObject; // x0
  int v57; // w19
  CoinRoomCoinListViewManager_o *v59; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v60; // [xsp+18h] [xbp-B8h] BYREF
  int v61[2]; // [xsp+30h] [xbp-A0h]
  int v62; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v63; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v64; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_438B6F6 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_438B6F6 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v12 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v12);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)UserSvtCoins,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager__get_UserId(0LL);
  if ( !selectedCoinDic )
    goto LABEL_56;
  v21 = (int64_t)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)selectedCoinDic,
                                             (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
    &v60,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_22E70F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v64 = v60;
  v22 = 0;
  v23 = isWarningDialog;
  v24 = isConfirmDialog;
  v59 = this;
  while ( 1 )
  {
    v33 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
            &v64,
            (const MethodInfo_28892FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( (v33 & 1) == 0 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    currentKey = (int32_t)v64.fields.currentKey;
    Entity = UserSvtCoinMaster__GetEntity(Master_WarQuestSelectionMaster, v21, (int32_t)v64.fields.currentKey, 0LL);
    v27 = (CoinRoomCoinIconItem_o *)sub_B77694(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v27, v22, Entity, 0, v28);
    if ( isDispSelectCount )
    {
      this = v59;
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)selectedCoinDic,
               currentKey,
               (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_B7769C(0LL, v30);
      if ( !v27 )
        sub_B7769C(Item, v30);
      v27->fields._selectedNum_k__BackingField = LODWORD(Item->fields._EvalValueBenefit_k__BackingField);
    }
    else
    {
      this = v59;
      if ( !v27 )
        sub_B7769C(v29, v30);
    }
    v27->fields._isWarningDialog_k__BackingField = v23;
    v27->fields._isConfirmDialog_k__BackingField = v24;
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B7769C(0LL, v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    ++v22;
  }
  v61[0] = 172;
  v62 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
    &v64,
    (const MethodInfo_28892F8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v62 = 0;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)extremelySmallSizeSeed,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v43 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v43->static_fields->coinRoomSortInfo;
  v45 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308964(v45, coinRoomSortInfo, 0LL);
  if ( !v45
    || (ListViewSort__ClearFilter(v45, 0LL),
        this->fields.sort = v45,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.sort,
          (System_Int32_array **)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_B7769C(gameObject, v11);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v63 = v60;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v63,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v52 = (ListViewItem_o *)v63.fields.currentKey;
    if ( v63.fields.currentKey )
    {
      v53 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v63.fields.currentKey->klass->_2.bitflags2 + 1) < (unsigned int)v53
        || (CoinRoomCoinIconItem_c *)v63.fields.currentKey->klass->_2.typeHierarchy[v53 - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        v33 = sub_B77990(v63.fields.currentKey);
LABEL_50:
        sub_B7769C(v33, v34);
      }
      monitor = (UnityEngine_Object_o *)v63.fields.currentKey[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v52->fields.viewObject;
        if ( !viewObject )
          sub_B7769C(0LL, v55);
        ListViewObject__SetItemSeed(viewObject, v52, this->fields.seed, 0LL);
      }
    }
  }
  v61[0] = 322;
  v57 = ++v62;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v57 && v61[v57 - 1] == 322 )
    v62 = v57 - 1;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__CreateInitList(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  CoinRoomUtility_c *v6; // x0
  System_Int32_array **UserSvtCoins; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CoinRoomCoinListViewManager_c *v20; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v22; // x1
  struct ListViewSort_o **p_sort; // x19
  const MethodInfo *v24; // x2
  int32_t sortKind; // w8
  bool v26; // w22
  struct System_Collections_Generic_List_DataEntityBase__o *v27; // x24
  signed __int64 size; // x28
  unsigned __int64 v29; // x23
  UserSvtCoinEntity_o *v30; // x24
  __int64 v31; // x10
  CoinRoomCoinListViewManager_o *v32; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  CoinRoomCoinIconItem_o *v34; // x26
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  System_String_o *v37; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v39; // x22
  __int64 v40; // x2
  MethodInfo *v41; // x23
  __int64 v42; // x2
  Il2CppObject *v43; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v45; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ListViewSort_o *v53; // x8
  int32_t v54; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v58; // x1
  struct ListViewSort_o **v59; // [xsp+0h] [xbp-60h]
  int32_t v60; // [xsp+8h] [xbp-58h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438B6F7 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UserSvtCoinEntity_TypeInfo);
    sub_B775C4(&StringLiteral_3263/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    sub_B775C4(&StringLiteral_3268/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/);
    sub_B775C4(&StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/);
    byte_438B6F7 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_1D1CF10 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_62;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      selectedCoinDic,
      (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)*p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_62;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedCoinDic,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_DataEntityBase__Clear__);
  }
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !selectedCoinDic )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCoinDic, 1, 0LL);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.allReleaseButton;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
    selectedCoinDic,
    3LL,
    0LL,
    selectedCoinDic->klass->vtable._15_unknown.methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.decideButton;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
    selectedCoinDic,
    3LL,
    0LL,
    selectedCoinDic->klass->vtable._15_unknown.methodPtr);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v6 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = (System_Int32_array **)CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v6);
  *p_userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)UserSvtCoins;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    UserSvtCoins,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v20 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v20 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v20->static_fields->coinRoomSortInfo;
  v22 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v22,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_62;
  sortKind = (*p_sort)->fields.sortKind;
  v26 = sortKind == 27 || sortKind == 2;
  v27 = *p_userServantCoinList;
  v59 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_62:
    sub_B7769C(selectedCoinDic, v3);
  size = v27->fields._size;
  if ( (int)size >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v30 = (UserSvtCoinEntity_o *)v27->fields._items->m_Items[v29];
      if ( !v30 )
        goto LABEL_62;
      v31 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (UserSvtCoinEntity_c *)v30->klass->_2.typeHierarchy[v31 - 1] != UserSvtCoinEntity_TypeInfo )
      {
        goto LABEL_62;
      }
      if ( v30->fields.num >= 1 )
      {
        v32 = this;
        itemList = this->fields.itemList;
        v34 = (CoinRoomCoinIconItem_o *)sub_B77694(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v34, v29, v30, v26, v35);
        if ( !itemList )
          goto LABEL_62;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        this = v32;
      }
      if ( (__int64)++v29 >= size )
        break;
      v27 = *p_userServantCoinList;
      if ( !*p_userServantCoinList )
        goto LABEL_62;
    }
  }
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v24);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v36);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3263/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v39 = v37;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v61 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v37);
  v41 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v40);
  v60 = CoinRoomUtility__MaxPoint(v41);
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v42);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_String__Format_44897472(v39, (Il2CppObject *)v41, v43, 0LL);
  if ( !nowLabel )
    goto LABEL_62;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_3268/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_62;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v45);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_62;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_15014/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v53 = *v59;
  if ( !*v59 )
    goto LABEL_62;
  v54 = v53->fields.sortKind;
  if ( v54 != 2 && v54 != 14 && (v54 & 0xFFFFFFFE) != 26 )
  {
    v53->fields.sortKind = 27;
    v53 = *v59;
    if ( !*v59 )
      goto LABEL_62;
  }
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
      goto LABEL_60;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
LABEL_60:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v3);
  if ( !scaleChangeTabSprite )
    goto LABEL_62;
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

  if ( (byte_438B6F3 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    byte_438B6F3 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v5; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_438B6FE & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    byte_438B6FE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v5 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v5 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v5->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) == 0
      || v5->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v5),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(selectedCoinDic, v3);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_25845152(this, 2, v4);
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
    sub_B7769C(0LL, isDecide);
  CoinRoomSortSelectManager__Close_25870420(sortSelectManager, 0LL, method);
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
  char v8; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  if ( (byte_438B70A & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438B70A = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_21;
  CoinRoomSortSelectManager__Close_25870420(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v8 = 0) : (v8 = 1),
        (itemList = this->fields.itemList) == 0LL) )
  {
LABEL_21:
    sub_B7769C(sortSelectManager, isDecide);
  }
  v10 = 0LL;
  while ( (__int64)v10 < itemList->fields._size )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v11 = itemList->fields._items->m_Items[v10];
    if ( v11 )
    {
      v12 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (CoinRoomCoinIconItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(v11[1].fields.sortValue0B) = v8;
      }
    }
    itemList = this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_21;
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
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v7; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v9; // x1

  if ( (byte_438B703 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    byte_438B703 = 1;
  }
  v4 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B775CC(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B775A8(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
  if ( !itemDetailInfoComp
    || (ItemDetailInfoComponent__Close_28169980(itemDetailInfoComp, v7, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B7769C(scrollView, v9);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


System_String_o *__fastcall CoinRoomCoinListViewManager__GetScaleButtonSpriteName(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
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

  if ( (byte_438B6F4 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_TypeInfo);
    byte_438B6F4 = 1;
  }
  v2 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v2 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v2->static_fields->coinRoomSortInfo;
  if ( !coinRoomSortInfo )
    sub_B7769C(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B7769C(this, 0LL);
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_438B708 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B708 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v5 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B77694(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B7769C(v6, v7);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v5, v8);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickAllRelease(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x27
  __int64 v12; // x10
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v14; // x2
  __int64 v15; // x9
  CoinRoomCoinListViewManager_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_438B707 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&CoinRoomCoinIconObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B707 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      selectedCoinDic,
      (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v5);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v6);
    v7 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
           (const MethodInfo_1D2C8E0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v7, v8);
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.allReleaseButton;
    if ( !selectedCoinDic
      || (((void (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(
            selectedCoinDic,
            3LL,
            0LL,
            selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.decideButton) == 0LL)
      || (selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *, __int64, _QWORD, Il2CppMethodPointer))selectedCoinDic->klass->vtable._14_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add.method)(selectedCoinDic, 3LL, 0LL, selectedCoinDic->klass->vtable._15_unknown.methodPtr),
          (itemList = this->fields.itemList) == 0LL) )
    {
LABEL_28:
      sub_B7769C(selectedCoinDic, v3);
    }
    v10 = 0LL;
    while ( (__int64)v10 < itemList->fields._size )
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( v11 )
      {
        v12 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (CoinRoomCoinIconItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
          {
            LODWORD(v11[1].fields.sortValue0B) = 0;
            v11->fields.selectNum = -1;
            BYTE4(v11[1].fields.sortValue0B) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v11->fields.viewObject;
            if ( !selectedCoinDic )
              goto LABEL_28;
            v15 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&selectedCoinDic->klass->_2.bitflags2 + 1) < (unsigned int)v15
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v15 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              v16 = (CoinRoomCoinListViewManager_o *)sub_B77990(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v16, v17);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v14);
          }
        }
      }
      itemList = this->fields.itemList;
      ++v10;
      if ( !itemList )
        goto LABEL_28;
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
  const MethodInfo *v3; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v5; // x1
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v7; // x1

  if ( (byte_438B70E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B70E = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CoinRoomCoinListViewManager__ChangeIconScale(this, v3);
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    ScaleButtonSpriteName = CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v5);
    if ( !scaleChangeTabSprite )
      sub_B7769C(ScaleButtonSpriteName, v7);
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CoinRoomCoinListViewManager__OnClickSortAscendingOrder(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438B70B & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B70B = 1;
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


void __fastcall CoinRoomCoinListViewManager__OnClickSortKind(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_438B709 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B709 = 1;
  }
  if ( this->fields.isInput )
  {
    EventTutorialMaster__CheckTutorial(0, 32, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sortSelectManager = this->fields.sortSelectManager;
    sort = this->fields.sort;
    v5 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B77694(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B7769C(v6, v7);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v5, v8);
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

  if ( (byte_438B701 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B701 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B7769C(0LL, v7);
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
    sub_B7769C(scrollView, v5);
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
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  DataManager_o *v12; // x23
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **age; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **name; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v29; // x22
  CoinRoomCoinListViewManager_o *v30; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v34; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__58_0; // x24
  Il2CppObject *v37; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w23
  System_Action_T1__T2__o *v46; // x24
  const MethodInfo *v47; // x5
  CoinRoomCoinListViewManager_o *v48; // x0
  CoinRoomCoinIconObject_o *v49; // x1
  const MethodInfo *v50; // x2
  UserSvtCoinEntity_o *v51; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_438B702 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_CoinRoomCoinIconObject__int___ctor__);
    sub_B775C4(&System_Action_CoinRoomCoinIconObject__int__TypeInfo);
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserSvtCoinMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__);
    sub_B775C4(&CoinRoomCoinListViewManager___c_TypeInfo);
    this = (CoinRoomCoinListViewManager_o *)sub_B775C4(&UserItemData_TypeInfo);
    byte_438B702 = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_40;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_40;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    v8 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v8
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v8 - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v12 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_40;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_40;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            v13 = sub_B77694(UserItemData_TypeInfo);
            UserItemData___ctor((UserItemData_o *)v13, 0LL);
            if ( !entity )
              goto LABEL_40;
            if ( !v13 )
              goto LABEL_40;
            age = (System_Int32_array **)entity->fields.age;
            *(_QWORD *)(v13 + 32) = age;
            sub_B77560((BattleServantConfConponent_o *)(v13 + 32), age, v14, v15, v16, v17, v18, v19);
            if ( !entity )
              goto LABEL_40;
            name = (System_Int32_array **)entity->fields.name;
            *(_QWORD *)(v13 + 40) = name;
            sub_B77560((BattleServantConfConponent_o *)(v13 + 40), name, v21, v22, v23, v24, v25, v26);
            if ( !entity )
              goto LABEL_40;
            *(_DWORD *)(v13 + 20) = HIDWORD(entity->fields.emptyMessage);
            itemDetailInfoComp = v6->fields.itemDetailInfoComp;
            v29 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v29,
              (Il2CppObject *)v6,
              (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
              0LL);
            if ( !itemDetailInfoComp )
              goto LABEL_40;
            ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v13, v29, 5, 0LL);
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v12 )
            goto LABEL_40;
          v30 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v12,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v30 || !this )
            goto LABEL_40;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v51,
                 *(_QWORD *)&v30->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v32 = v51;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v34 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v34 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            static_fields = v34->static_fields;
            _9__58_0 = static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v34);
                static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              }
              v37 = (Il2CppObject *)static_fields->__9;
              _9__58_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B77694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
                _9__58_0,
                v37,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                (const MethodInfo_29D640C *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
              v38 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              v38->__9__58_0 = _9__58_0;
              sub_B77560(
                (BattleServantConfConponent_o *)&v38->__9__58_0,
                (System_Int32_array **)_9__58_0,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
            }
            v45 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_1D3C97C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v46 = (System_Action_T1__T2__o *)sub_B77694(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v46,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              (const MethodInfo_26AE29C *)Method_System_Action_CoinRoomCoinIconObject__int___ctor__);
            if ( !bulkSelectDialog )
              goto LABEL_40;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v32,
              iconObject,
              v45,
              (System_Action_CoinRoomCoinIconObject__int__o *)v46,
              v47);
          }
        }
      }
      else
      {
        this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
        if ( !this )
          goto LABEL_40;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
               linkItem[28],
               (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
              linkItem[28],
              (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v9);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v10);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v11);
            return;
          }
LABEL_40:
          sub_B7769C(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      v48 = (CoinRoomCoinListViewManager_o *)sub_B77990(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v48, v49, v50);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__RefrashListDisp(
        CoinRoomCoinListViewManager_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x0
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__c *v17; // x8
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438B705 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_438B705 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v19,
    selectedCoinDic,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
           &v20,
           (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v6 )
      break;
    if ( !v20.fields.current.fields.value )
      sub_B7769C(v6, v7);
    klass = v20.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v7);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v8);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v20,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v10);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v11);
  v12 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_1D2C8E0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v12, v13);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__((System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic, (const MethodInfo_1D2C8E0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
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
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v17 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_B7769C(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v15)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
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

  if ( (byte_438B700 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438B700 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CoinRoomCoinListViewManager__get_ObjectList(
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
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      CoinRoomCoinIconObject__Init(
        (CoinRoomCoinIconObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
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
  __int64 v8; // x9
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v11; // x1
  SelectedUserSvtCoin_o *v12; // x25
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v14; // x21
  CoinRoomCoinListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_438B704 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager_RefrashListDisp__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    this = (CoinRoomCoinListViewManager_o *)sub_B775C4(&SelectedUserSvtCoin_TypeInfo);
    byte_438B704 = 1;
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
    v8 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.dropObjectList);
        HIDWORD(this->fields.dropObjectList) = v4;
      }
      else
      {
        v12 = (SelectedUserSvtCoin_o *)sub_B77694(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v12, v5, v4, 0LL);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          selectedCoinDic,
          klass,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v12,
          (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_1D2C8E0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v14 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v14,
        (Il2CppObject *)v6,
        Method_CoinRoomCoinListViewManager_RefrashListDisp__,
        (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v11 = v14;
        goto LABEL_21;
      }
LABEL_22:
      sub_B7769C(this, iconObject);
    }
    v15 = (CoinRoomCoinListViewManager_o *)sub_B77990(v5->fields.linkItem);
    CoinRoomCoinListViewManager__SetTouchEnabled(v15, v16);
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
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v10; // w22
  CoinRoomCoinListViewManager___c_c *v11; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__45_0; // x24
  Il2CppObject *v14; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  int32_t v23; // w8
  UIProgressBar_o *addSlider; // x0
  int v25; // w8
  float v26; // s0

  if ( (byte_438B6FB & 1) == 0 )
  {
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__);
    sub_B775C4(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_438B6FB = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  selectedCoinDic = this->fields.selectedCoinDic;
  v10 = v8;
  v11 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v11 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B77694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__45_0,
      v14,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      (const MethodInfo_29D640C *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v15 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v15->__9__45_0 = _9__45_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v23 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_1D3C97C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v25 = v7 + v23 * v10;
  if ( v5 <= v25 )
  {
    if ( addSlider )
    {
      v26 = (float)v5;
      goto LABEL_19;
    }
LABEL_20:
    sub_B7769C(addSlider, v22);
  }
  if ( !addSlider )
    goto LABEL_20;
  v26 = (float)v25 / (float)v5;
LABEL_19:
  UIProgressBar__set_value(addSlider, v26, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetAddNumLabel(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  CoinRoomCoinListViewManager___c_c *v4; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__43_0; // x21
  Il2CppObject *v7; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w0
  __int64 v16; // x1
  int v17; // w20
  System_String_o *v18; // x0
  UILabel_o *addLabel; // x19
  System_String_o *v20; // x21
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B6F9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__);
    sub_B775C4(&CoinRoomCoinListViewManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_3249/*"COIN_ROOM_ADD_NUM"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B6F9 = 1;
  }
  selectedCoinDic = this->fields.selectedCoinDic;
  v4 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v4 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__43_0 = static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B77694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__43_0,
      v7,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      (const MethodInfo_29D640C *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v8 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v8->__9__43_0 = _9__43_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_1D3C97C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v15 )
  {
    v17 = v15;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3249/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v20 = v18;
    v24 = v17;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v21);
    v23 = System_String__Format(v20, v22, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v23, 0LL);
      return;
    }
LABEL_19:
    sub_B7769C(v23, v16);
  }
  v23 = (System_String_o *)this->fields.addLabel;
  if ( !v23 )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)v23, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  struct UISlider_o *currentSlider; // x8
  float v9; // s0

  if ( (byte_438B6FA & 1) == 0 )
  {
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    byte_438B6FA = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = CoinRoomUtility__MonthExchangePoint(v4);
  currentSlider = this->fields.currentSlider;
  if ( v5 <= (int)v6 )
  {
    if ( currentSlider )
    {
      v9 = (float)v5;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(v6, v7);
  }
  if ( !currentSlider )
    goto LABEL_12;
  v9 = (float)(int)v6 / (float)v5;
LABEL_11:
  UIProgressBar__set_value((UIProgressBar_o *)this->fields.currentSlider, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetFilterButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438B6FD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438B6FD = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetMode(
        CoinRoomCoinListViewManager_o *this,
        int32_t mode,
        CoinRoomCoinListViewManager_CallbackFunc_o *callback,
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
  CoinRoomCoinListViewManager__SetMode_25845152(this, mode, v10);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_25845152(
        CoinRoomCoinListViewManager_o *this,
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
  CoinRoomCoinListViewManager__RequestListObject(this, v6, 0.0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__SetObjectItem(
        CoinRoomCoinListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438B6FF & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_B775C4(&CoinRoomCoinIconObject_TypeInfo);
    byte_438B6FF = 1;
  }
  if ( !obj
    || (v6 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  CoinRoomCoinIconObject__Init((CoinRoomCoinIconObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
}


void __fastcall CoinRoomCoinListViewManager__SetSelectedDoneLabel(
        CoinRoomCoinListViewManager_o *this,
        int32_t selectedNum,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v7; // x22
  __int64 v8; // x2
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x0
  int32_t size; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B6F8 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3263/*"COIN_ROOM_SELECTED_TARGET_NUM"*/);
    byte_438B6F8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3263/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v7 = v5;
  v16 = selectedNum;
  v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v8);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v13 = (Il2CppObject *)v9,
        size = userServantCoinList->fields._size,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v11),
        v9 = System_String__Format_44897472(v7, v13, v14, 0LL),
        !selectDoneLabel) )
  {
    sub_B7769C(v9, v10);
  }
  UILabel__set_text(selectDoneLabel, v9, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__SetSortButtonBGImage(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438B6FC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17297/*"btn_bg_05"*/);
    sub_B775C4(&StringLiteral_17298/*"btn_bg_06"*/);
    sub_B775C4(&StringLiteral_372/*"#FE4545"*/);
    sub_B775C4(&StringLiteral_357/*"#000000"*/);
    byte_438B6FC = 1;
  }
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17297/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17298/*"btn_bg_06"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_357/*"#000000"*/
     : (System_String_o **)&StringLiteral_372/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B7769C(sort, method);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_438B70C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438B70C = 1;
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
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v10; // w22
  CoinRoomCoinListViewManager___c_c *v11; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__63_0; // x24
  Il2CppObject *v14; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CoinRoomCoinIconObject_o *v22; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  unsigned __int64 v25; // x21
  ListViewItem_o *v26; // x26
  __int64 v27; // x10
  UnityEngine_Object_o *viewObject; // x20
  __int64 v29; // x9
  unsigned __int64 v30; // x21
  ListViewItem_o *v31; // x25
  __int64 v32; // x10
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x9
  CoinRoomCoinListViewManager_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_438B706 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&CoinRoomCoinIconObject_TypeInfo);
    sub_B775C4(&CoinRoomUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__);
    sub_B775C4(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_438B706 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v4 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v3);
  v5 = (int)v4;
  v6 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v4);
  v7 = (int)v6;
  v8 = CoinRoomUtility__CalcPoint(v6);
  selectedCoinDic = this->fields.selectedCoinDic;
  v10 = v8;
  v11 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v11 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B77694(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__63_0,
      v14,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      (const MethodInfo_29D640C *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v15 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v15->__9__63_0 = _9__63_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__63_0,
      (System_Int32_array **)_9__63_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (CoinRoomCoinIconObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                      (System_Func_TSource__int__o *)_9__63_0,
                                      (const MethodInfo_1D3C97C *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = this->fields.itemList;
  if ( v5 > v7 + (int)v22 * v10 )
  {
    if ( itemList )
    {
      v25 = 0LL;
      while ( (__int64)v25 < itemList->fields._size )
      {
        if ( v25 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v26 = itemList->fields._items->m_Items[v25];
        if ( v26 )
        {
          v27 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v27
            && (CoinRoomCoinIconItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(v26[1].fields.sortValue0B) = 1;
            viewObject = (UnityEngine_Object_o *)v26->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v22 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( ((unsigned __int8)v22 & 1) == 0 )
            {
              v22 = (CoinRoomCoinIconObject_o *)v26->fields.viewObject;
              if ( !v22 )
                goto LABEL_50;
              v29 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v29
                || (CoinRoomCoinIconObject_c *)v22->klass->_2.typeHierarchy[v29 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_52;
              }
              CoinRoomCoinIconObject__SetupDisp(v22, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v25;
        if ( !itemList )
          goto LABEL_50;
      }
      return;
    }
LABEL_50:
    sub_B7769C(v22, v23);
  }
  if ( !itemList )
    goto LABEL_50;
  v30 = 0LL;
  while ( (__int64)v30 < itemList->fields._size )
  {
    if ( v30 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v31 = itemList->fields._items->m_Items[v30];
    if ( v31 )
    {
      v32 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v32
        && (CoinRoomCoinIconItem_c *)v31->klass->_2.typeHierarchy[v32 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v33 = (UnityEngine_Object_o *)v31->fields.viewObject;
        BYTE4(v31[1].fields.sortValue0B) = SLODWORD(v31[1].fields.sortValue0B) > 0;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v22 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
        if ( ((unsigned __int8)v22 & 1) == 0 )
        {
          v22 = (CoinRoomCoinIconObject_o *)v31->fields.viewObject;
          if ( !v22 )
            goto LABEL_50;
          v34 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v34
            || (CoinRoomCoinIconObject_c *)v22->klass->_2.typeHierarchy[v34 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_52:
            v35 = (CoinRoomCoinListViewManager_o *)sub_B77990(v22);
            CoinRoomCoinListViewManager__OnClickAllRelease(v35, v36);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(v22, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v30;
    if ( !itemList )
      goto LABEL_50;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager__UpdateSelectNum(
        CoinRoomCoinListViewManager_o *this,
        int32_t deleteNum,
        const MethodInfo *method)
{
  CoinRoomCoinListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v6; // x21
  ListViewItem_o *v7; // x8
  __int64 v8; // x11
  int32_t selectNum; // w9

  v4 = this;
  if ( (byte_438B70F & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinIconItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CoinRoomCoinListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438B70F = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B7769C(this, *(_QWORD *)&deleteNum);
  v6 = 0LL;
  while ( (__int64)v6 < itemList->fields._size )
  {
    if ( v6 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v7 = itemList->fields._items->m_Items[v6];
    if ( v7 )
    {
      v8 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (CoinRoomCoinIconItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        selectNum = v7->fields.selectNum;
        if ( selectNum > deleteNum )
          v7->fields.selectNum = selectNum - 1;
      }
    }
    itemList = v4->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_14;
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

  if ( (byte_438B6F1 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_438B6F1 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomCoinListViewManager_o *)sub_B77990(v7);
  CoinRoomCoinListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_CoinRoomCoinIconObject__o *__fastcall CoinRoomCoinListViewManager__get_ObjectList(
        CoinRoomCoinListViewManager_o *this,
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

  if ( (byte_438B6F5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B6F5 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
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
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_438B6F2 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo);
    byte_438B6F2 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B77990(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
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
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+28h] [xbp-28h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF

  v16 = kind;
  v14 = id;
  v15 = index;
  if ( (byte_43885AB & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&CoinRoomCoinListViewManager_ResultKind_TypeInfo);
    byte_43885AB = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v16, *(_QWORD *)&index);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B77568(this, v13, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinListViewManager_CallbackFunc__Invoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  CoinRoomCoinListViewManager_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  CoinRoomCoinListViewManager_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (CoinRoomCoinListViewManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)index, (unsigned int)id, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)index, (unsigned int)id, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B775EC(v24);
      v27 = sub_B779F0(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_B0F4C0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B77674(v19, v24);
        (*v21)(v23, v28, (unsigned int)index, (unsigned int)id, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_B0F4C0(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)index,
      (unsigned int)id,
      v24);
    goto LABEL_38;
  }
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_43885A6 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomCoinListViewManager___c_TypeInfo);
    byte_43885A6 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v1;
  sub_B77560(static_fields);
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
  if ( (byte_43885A9 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_43885A9 = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_43885A8 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_43885A8 = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_43885A7 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_43885A7 = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_43885AA & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__);
    byte_43885AA = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}