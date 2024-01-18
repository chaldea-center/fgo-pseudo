void __fastcall CoinRoomCoinListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418886C & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_4119/*"CoinRoomCoinList1"*/, v3);
    byte_418886C = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_4119/*"CoinRoomCoinList1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomCoinListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall CoinRoomCoinListViewManager___ctor(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418886B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v5);
    byte_418886B = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin___ctor__);
  this->fields.selectedCoinDic = (struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectedCoinDic,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DataEntityBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DataEntityBase___ctor__);
  this->fields.userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  System_Int32_array **smallSizeSeed; // x1
  int v14; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v18; // x22
  ListViewItem_o *v19; // x20
  __int64 v20; // x10
  UnityEngine_Object_o *viewObject; // x21

  v8 = this;
  if ( (byte_4188868 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    this = (CoinRoomCoinListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4188868 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v14 = 2;
    goto LABEL_9;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v14 = 3;
    goto LABEL_9;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v14 = 1;
LABEL_9:
    v8->fields.scaleType = v14;
    v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = v8->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v8->fields.scaleType,
        (this = (CoinRoomCoinListViewManager_o *)v8->fields.sort) == 0LL)
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL), (itemList = v8->fields.itemList) == 0LL) )
  {
LABEL_27:
    sub_B2C434(this, method);
  }
  v18 = 0LL;
  while ( (__int64)v18 < itemList->fields._size )
  {
    if ( v18 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v19 = itemList->fields._items->m_Items[v18];
    if ( v19 )
    {
      v20 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (CoinRoomCoinIconItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CoinRoomCoinListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (CoinRoomCoinListViewManager_o *)v19->fields.viewObject;
          if ( !this )
            goto LABEL_27;
          ListViewObject__SetItemSeed((ListViewObject_o *)this, v19, v8->fields.seed, 0LL);
        }
      }
    }
    itemList = v8->fields.itemList;
    ++v18;
    if ( !itemList )
      goto LABEL_27;
  }
  CoinRoomCoinListViewManager__SetMode_26757792(v8, 2, v16);
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
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  CoinRoomUtility_c *v32; // x0
  struct System_Collections_Generic_List_DataEntityBase__o *UserSvtCoins; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserSvtCoinMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t v41; // x25
  int32_t v42; // w26
  bool v43; // w28
  bool v44; // w21
  int32_t currentKey; // w23
  UserSvtCoinEntity_o *Entity; // x27
  CoinRoomCoinIconItem_o *v47; // x22
  const MethodInfo *v48; // x4
  __int64 v49; // x0
  __int64 v50; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  UILabel_o *emptyMessageLabel; // x20
  struct ListViewItemSeed_o *extremelySmallSizeSeed; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  CoinRoomCoinListViewManager_c *v63; // x0
  ListViewSort_o *coinRoomSortInfo; // x22
  ListViewSort_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  ListViewItem_o *v72; // x21
  __int64 v73; // x9
  UnityEngine_Object_o *monitor; // x22
  __int64 v75; // x1
  ListViewObject_o *viewObject; // x0
  int v77; // w19
  CoinRoomCoinListViewManager_o *v79; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v80; // [xsp+18h] [xbp-B8h] BYREF
  int v81[2]; // [xsp+30h] [xbp-A0h]
  int v82; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v83; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v84; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4188851 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, selectedCoinDic);
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, v10);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v21);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v22);
    sub_B2C35C(&ListViewSort_TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v25);
    sub_B2C35C(&LocalizationManager_TypeInfo, v26);
    sub_B2C35C(&NetworkManager_TypeInfo, v27);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_14758/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v29);
    byte_4188851 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  memset(&v83, 0, sizeof(v83));
  v82 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v32 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v32);
  this->fields.userServantCoinList = UserSvtCoins;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    (System_Int32_array **)UserSvtCoins,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager__get_UserId(0LL);
  if ( !selectedCoinDic )
    goto LABEL_56;
  v41 = (int64_t)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                                             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)selectedCoinDic,
                                             (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Keys__);
  if ( !gameObject )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
    &v80,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)gameObject,
    (const MethodInfo_2261674 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v84 = v80;
  v42 = 0;
  v43 = isWarningDialog;
  v44 = isConfirmDialog;
  v79 = this;
  while ( 1 )
  {
    v53 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
            &v84,
            (const MethodInfo_277EEC0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( (v53 & 1) == 0 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    currentKey = (int32_t)v84.fields.currentKey;
    Entity = UserSvtCoinMaster__GetEntity(Master_WarQuestSelectionMaster, v41, (int32_t)v84.fields.currentKey, 0LL);
    v47 = (CoinRoomCoinIconItem_o *)sub_B2C42C(CoinRoomCoinIconItem_TypeInfo);
    CoinRoomCoinIconItem___ctor(v47, v42, Entity, 0, v48);
    if ( isDispSelectCount )
    {
      this = v79;
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)selectedCoinDic,
               currentKey,
               (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
      if ( !Item )
        sub_B2C434(0LL, v50);
      if ( !v47 )
        sub_B2C434(Item, v50);
      v47->fields._selectedNum_k__BackingField = LODWORD(Item->fields._EvalValueBenefit_k__BackingField);
    }
    else
    {
      this = v79;
      if ( !v47 )
        sub_B2C434(v49, v50);
    }
    v47->fields._isWarningDialog_k__BackingField = v43;
    v47->fields._isConfirmDialog_k__BackingField = v44;
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B2C434(0LL, v50);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    ++v42;
  }
  v81[0] = 172;
  v82 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
    &v84,
    (const MethodInfo_277EEBC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v82 = 0;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14758/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_56;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)gameObject, 0LL);
  extremelySmallSizeSeed = this->fields.extremelySmallSizeSeed;
  this->fields.seed = extremelySmallSizeSeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)extremelySmallSizeSeed,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v63 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v63->static_fields->coinRoomSortInfo;
  v65 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914748(v65, coinRoomSortInfo, 0LL);
  if ( !v65
    || (ListViewSort__ClearFilter(v65, 0LL),
        this->fields.sort = v65,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.sort,
          (System_Int32_array **)v65,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL) )
  {
LABEL_56:
    sub_B2C434(gameObject, v31);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v83 = v80;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v83,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v72 = (ListViewItem_o *)v83.fields.currentKey;
    if ( v83.fields.currentKey )
    {
      v73 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v83.fields.currentKey->klass->_2.bitflags2 + 1) < (unsigned int)v73
        || (CoinRoomCoinIconItem_c *)v83.fields.currentKey->klass->_2.typeHierarchy[v73 - 1] != CoinRoomCoinIconItem_TypeInfo )
      {
        v53 = sub_B2C728(v83.fields.currentKey);
LABEL_50:
        sub_B2C434(v53, v54);
      }
      monitor = (UnityEngine_Object_o *)v83.fields.currentKey[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        viewObject = v72->fields.viewObject;
        if ( !viewObject )
          sub_B2C434(0LL, v75);
        ListViewObject__SetItemSeed(viewObject, v72, this->fields.seed, 0LL);
      }
    }
  }
  v81[0] = 322;
  v77 = ++v82;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v77 && v81[v77 - 1] == 322 )
    v82 = v77 - 1;
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  struct System_Collections_Generic_List_DataEntityBase__o **p_userServantCoinList; // x21
  CoinRoomUtility_c *v21; // x0
  System_Int32_array **UserSvtCoins; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CoinRoomCoinListViewManager_c *v35; // x0
  struct ListViewSort_o **p_coinRoomSortInfo; // x8
  struct ListViewSort_o *v37; // x1
  struct ListViewSort_o **p_sort; // x19
  const MethodInfo *v39; // x2
  int32_t sortKind; // w8
  bool v41; // w22
  struct System_Collections_Generic_List_DataEntityBase__o *v42; // x24
  signed __int64 size; // x28
  unsigned __int64 v44; // x23
  UserSvtCoinEntity_o *v45; // x24
  __int64 v46; // x10
  CoinRoomCoinListViewManager_o *v47; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  CoinRoomCoinIconItem_o *v49; // x26
  const MethodInfo *v50; // x4
  const MethodInfo *v51; // x1
  System_String_o *v52; // x0
  UILabel_o *nowLabel; // x21
  System_String_o *v54; // x22
  MethodInfo *v55; // x23
  Il2CppObject *v56; // x0
  UILabel_o *statusLabel; // x21
  const MethodInfo *v58; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ListViewSort_o *v66; // x8
  int32_t v67; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v71; // x1
  struct ListViewSort_o **v72; // [xsp+0h] [xbp-60h]
  int32_t v73; // [xsp+8h] [xbp-58h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4188852 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, v3);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&UserSvtCoinEntity_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_3138/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v15);
    sub_B2C35C(&StringLiteral_3143/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_14758/*"USER_SERVANT_COIN_LIST_EMPTY"*/, v17);
    byte_4188852 = 1;
  }
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
         (const MethodInfo_1737B70 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__SelectedUserSvtCoin____) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.selectedCoinDic;
    if ( !selectedCoinDic )
      goto LABEL_62;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      selectedCoinDic,
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  }
  p_userServantCoinList = &this->fields.userServantCoinList;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.userServantCoinList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
  {
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)*p_userServantCoinList;
    if ( !*p_userServantCoinList )
      goto LABEL_62;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)selectedCoinDic,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_DataEntityBase__Clear__);
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
  v21 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserSvtCoins = (System_Int32_array **)CoinRoomUtility__GetUserSvtCoins((const MethodInfo *)v21);
  *p_userServantCoinList = (struct System_Collections_Generic_List_DataEntityBase__o *)UserSvtCoins;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantCoinList,
    UserSvtCoins,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v35 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v35 = CoinRoomCoinListViewManager_TypeInfo;
  }
  p_coinRoomSortInfo = &v35->static_fields->coinRoomSortInfo;
  v37 = *p_coinRoomSortInfo;
  this->fields.sort = *p_coinRoomSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v37,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.sort;
  if ( !selectedCoinDic )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)selectedCoinDic, 0LL);
  if ( !*p_sort )
    goto LABEL_62;
  sortKind = (*p_sort)->fields.sortKind;
  v41 = sortKind == 27 || sortKind == 2;
  v42 = *p_userServantCoinList;
  v72 = &this->fields.sort;
  if ( !*p_userServantCoinList )
LABEL_62:
    sub_B2C434(selectedCoinDic, v18);
  size = v42->fields._size;
  if ( (int)size >= 1 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)v42->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v45 = (UserSvtCoinEntity_o *)v42->fields._items->m_Items[v44];
      if ( !v45 )
        goto LABEL_62;
      v46 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v46
        || (UserSvtCoinEntity_c *)v45->klass->_2.typeHierarchy[v46 - 1] != UserSvtCoinEntity_TypeInfo )
      {
        goto LABEL_62;
      }
      if ( v45->fields.num >= 1 )
      {
        v47 = this;
        itemList = this->fields.itemList;
        v49 = (CoinRoomCoinIconItem_o *)sub_B2C42C(CoinRoomCoinIconItem_TypeInfo);
        CoinRoomCoinIconItem___ctor(v49, v44, v45, v41, v50);
        if ( !itemList )
          goto LABEL_62;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        this = v47;
      }
      if ( (__int64)++v44 >= size )
        break;
      v42 = *p_userServantCoinList;
      if ( !*p_userServantCoinList )
        goto LABEL_62;
    }
  }
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, 0, v39);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v51);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3138/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  nowLabel = this->fields.nowLabel;
  v54 = v52;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v74 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v52);
  v55 = (MethodInfo *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  v73 = CoinRoomUtility__MaxPoint(v55);
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_String__Format_44301068(v54, (Il2CppObject *)v55, v56, 0LL);
  if ( !nowLabel )
    goto LABEL_62;
  UILabel__set_text(nowLabel, (System_String_o *)selectedCoinDic, 0LL);
  statusLabel = this->fields.statusLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_3143/*"COIN_ROOM_SELECT_LIST_STATUS_TITLE"*/, 0LL);
  if ( !statusLabel )
    goto LABEL_62;
  UILabel__set_text(statusLabel, (System_String_o *)selectedCoinDic, 0LL);
  CoinRoomCoinListViewManager__SetCurrentBar(this, v58);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.addSlider;
  if ( !selectedCoinDic )
    goto LABEL_62;
  UIProgressBar__set_value((UIProgressBar_o *)selectedCoinDic, 0.0, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)LocalizationManager__Get((System_String_o *)StringLiteral_14758/*"USER_SERVANT_COIN_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_62;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)selectedCoinDic, 0LL);
  v66 = *v72;
  if ( !*v72 )
    goto LABEL_62;
  v67 = v66->fields.sortKind;
  if ( v67 != 2 && v67 != 14 && (v67 & 0xFFFFFFFE) != 26 )
  {
    v66->fields.sortKind = 27;
    v66 = *v72;
    if ( !*v72 )
      goto LABEL_62;
  }
  iconScaleKind = v66->fields.iconScaleKind;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
LABEL_60:
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)CoinRoomCoinListViewManager__GetScaleButtonSpriteName(this, v18);
  if ( !scaleChangeTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)selectedCoinDic, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  CoinRoomCoinListViewManager__SetFilterButtonBGImage(this, v71);
}


void __fastcall CoinRoomCoinListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomCoinListViewManager_c *v2; // x0
  ListViewSort_o *coinRoomSortInfo; // x0

  if ( (byte_418884E & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_418884E = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__DeleteContinueData(coinRoomSortInfo, 0LL);
}


void __fastcall CoinRoomCoinListViewManager__DestroyList(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x0
  CoinRoomCoinListViewManager_c *v6; // x0
  ListViewSort_o *coinRoomSortInfo; // x8

  if ( (byte_4188859 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v3);
    byte_4188859 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  selectedCoinDic = this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)selectedCoinDic,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
  v6 = CoinRoomCoinListViewManager_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager_TypeInfo);
    v6 = CoinRoomCoinListViewManager_TypeInfo;
  }
  coinRoomSortInfo = v6->static_fields->coinRoomSortInfo;
  if ( coinRoomSortInfo )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) == 0
      || v6->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v6),
          (coinRoomSortInfo = CoinRoomCoinListViewManager_TypeInfo->static_fields->coinRoomSortInfo) != 0LL) )
    {
      ListViewSort__Save(coinRoomSortInfo, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(selectedCoinDic, v4);
  }
}


void __fastcall CoinRoomCoinListViewManager__EndCloseItemDetail(
        CoinRoomCoinListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CoinRoomCoinListViewManager__RequestListObject(this, 4, 0.0, v2);
  CoinRoomCoinListViewManager__SetMode_26757792(this, 2, v4);
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
    sub_B2C434(0LL, isDecide);
  CoinRoomSortSelectManager__Close_26783056(sortSelectManager, 0LL, method);
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
  char v10; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v12; // x21
  ListViewItem_o *v13; // x8
  __int64 v14; // x11

  if ( (byte_4188865 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, isDecide);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    byte_4188865 = 1;
  }
  sortSelectManager = this->fields.sortSelectManager;
  if ( !sortSelectManager )
    goto LABEL_21;
  CoinRoomSortSelectManager__Close_26783056(sortSelectManager, 0LL, method);
  if ( !isDecide )
    return;
  sort = this->fields.sort;
  if ( !sort
    || ((sortKind = sort->fields.sortKind, sortKind != 27) && sortKind != 2 ? (v10 = 0) : (v10 = 1),
        (itemList = this->fields.itemList) == 0LL) )
  {
LABEL_21:
    sub_B2C434(sortSelectManager, isDecide);
  }
  v12 = 0LL;
  while ( (__int64)v12 < itemList->fields._size )
  {
    if ( v12 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v13 = itemList->fields._items->m_Items[v12];
    if ( v13 )
    {
      v14 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (CoinRoomCoinIconItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        BYTE5(v13[1].fields.sortValue0B) = v10;
      }
    }
    itemList = this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_21;
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v9; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v11; // x1

  if ( (byte_418885E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, v4);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v5);
    byte_418885E = 1;
  }
  v6 = Method_CoinRoomCoinListViewManager_EndShowItemDetail__;
  if ( (*((_BYTE *)Method_CoinRoomCoinListViewManager_EndShowItemDetail__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B2C364(Method_CoinRoomCoinListViewManager_EndShowItemDetail__);
  v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_EndCloseItemDetail__, 0LL);
  if ( !itemDetailInfoComp
    || (ItemDetailInfoComponent__Close_27388112(itemDetailInfoComp, v9, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
    sub_B2C434(scrollView, v11);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418884F & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_TypeInfo, v1);
    byte_418884F = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__InitLoad(coinRoomSortInfo, 0LL);
}


bool __fastcall CoinRoomCoinListViewManager__IsSelectEnable(
        CoinRoomCoinListViewManager_o *this,
        CoinRoomCoinIconItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B2C434(this, 0LL);
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x20
  ListViewSort_o *sort; // x21
  CoinRoomSortSelectManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4188863 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4188863 = 1;
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
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B2C42C(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B2C434(v8, v9);
    CoinRoomSortSelectManager__Open(sortSelectManager, 1, sort, v7, v10);
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *selectedCoinDic; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v17; // x21
  ListViewItem_o *v18; // x27
  __int64 v19; // x10
  UnityEngine_Object_o *viewObject; // x20
  const MethodInfo *v21; // x2
  __int64 v22; // x9
  CoinRoomCoinListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4188862 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B2C35C(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4188862 = 1;
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
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Clear__);
    CoinRoomCoinListViewManager__SetAddBar(this, v12);
    CoinRoomCoinListViewManager__SetAddNumLabel(this, v13);
    v14 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
            (const MethodInfo_1A8BE00 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
    CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v14, v15);
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
      sub_B2C434(selectedCoinDic, v10);
    }
    v17 = 0LL;
    while ( (__int64)v17 < itemList->fields._size )
    {
      if ( v17 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v18 = itemList->fields._items->m_Items[v17];
      if ( v18 )
      {
        v19 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (CoinRoomCoinIconItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == CoinRoomCoinIconItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v18->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)selectedCoinDic & 1) != 0 )
          {
            LODWORD(v18[1].fields.sortValue0B) = 0;
            v18->fields.selectNum = -1;
            BYTE4(v18[1].fields.sortValue0B) = 1;
          }
          else
          {
            selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v18->fields.viewObject;
            if ( !selectedCoinDic )
              goto LABEL_28;
            v22 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&selectedCoinDic->klass->_2.bitflags2 + 1) < (unsigned int)v22
              || (CoinRoomCoinIconObject_c *)selectedCoinDic->klass->_2.typeHierarchy[v22 - 1] != CoinRoomCoinIconObject_TypeInfo )
            {
              v23 = (CoinRoomCoinListViewManager_o *)sub_B2C728(selectedCoinDic);
              CoinRoomCoinListViewManager__OnClicFilterKind(v23, v24);
              return;
            }
            CoinRoomCoinIconObject__ResetItem((CoinRoomCoinIconObject_o *)selectedCoinDic, this->fields.isInput, v21);
          }
        }
      }
      itemList = this->fields.itemList;
      ++v17;
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

  if ( (byte_4188869 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188869 = 1;
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
      sub_B2C434(ScaleButtonSpriteName, v7);
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

  if ( (byte_4188866 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188866 = 1;
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
      sub_B2C434(v3, v4);
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
  CoinRoomSortSelectManager_o *sortSelectManager; // x21
  ListViewSort_o *sort; // x20
  CoinRoomSortSelectManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4188864 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4188864 = 1;
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
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o *)sub_B2C42C(CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    CoinRoomSortSelectManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CoinRoomCoinListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectManager )
      sub_B2C434(v8, v9);
    CoinRoomSortSelectManager__Open(sortSelectManager, 0, sort, v7, v10);
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

  if ( (byte_418885C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418885C = 1;
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
          sub_B2C434(0LL, v7);
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
    sub_B2C434(scrollView, v5);
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
  __int64 v23; // x1
  int32_t *linkItem; // x22
  __int64 v25; // x9
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  DataManager_o *v29; // x23
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **age; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **name; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v46; // x22
  CoinRoomCoinListViewManager_o *v47; // x21
  CoinBulkSelectDialog_o *bulkSelectDialog; // x22
  UserSvtCoinEntity_o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *selectedCoinDic; // x23
  CoinRoomCoinListViewManager___c_c *v51; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__58_0; // x24
  Il2CppObject *v54; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t v62; // w23
  System_Action_T1__T2__o *v63; // x24
  const MethodInfo *v64; // x5
  CoinRoomCoinListViewManager_o *v65; // x0
  CoinRoomCoinIconObject_o *v66; // x1
  const MethodInfo *v67; // x2
  UserSvtCoinEntity_o *v68; // [xsp+0h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = kind;
  v6 = this;
  if ( (byte_418885D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CoinRoomCoinIconObject__int___ctor__, *(_QWORD *)&kind);
    sub_B2C35C(&System_Action_CoinRoomCoinIconObject__int__TypeInfo, v7);
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, v9);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_EndShowItemDetail__, v10);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserSvtCoinMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v17);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v18);
    sub_B2C35C(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__, v21);
    sub_B2C35C(&CoinRoomCoinListViewManager___c_TypeInfo, v22);
    this = (CoinRoomCoinListViewManager_o *)sub_B2C35C(&UserItemData_TypeInfo, v23);
    byte_418885D = 1;
  }
  v68 = 0LL;
  entity = 0LL;
  if ( v6->fields.initMode == 2 )
  {
    if ( !iconObject )
      goto LABEL_40;
    linkItem = (int32_t *)iconObject->fields.linkItem;
    if ( !linkItem )
      goto LABEL_40;
    *(_QWORD *)&kind = CoinRoomCoinIconItem_TypeInfo;
    v25 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v25
      && *(CoinRoomCoinIconItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v25 - 8) == CoinRoomCoinIconItem_TypeInfo )
    {
      if ( v5 == 1 || linkItem[38] < 1 )
      {
        this = (CoinRoomCoinListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        v29 = (DataManager_o *)this;
        if ( v5 == 1 )
        {
          if ( !this )
            goto LABEL_40;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this )
            goto LABEL_40;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                 &entity,
                 linkItem[29],
                 (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          {
            v30 = sub_B2C42C(UserItemData_TypeInfo);
            UserItemData___ctor((UserItemData_o *)v30, 0LL);
            if ( !entity )
              goto LABEL_40;
            if ( !v30 )
              goto LABEL_40;
            age = (System_Int32_array **)entity->fields.age;
            *(_QWORD *)(v30 + 32) = age;
            sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 32), age, v31, v32, v33, v34, v35, v36);
            if ( !entity )
              goto LABEL_40;
            name = (System_Int32_array **)entity->fields.name;
            *(_QWORD *)(v30 + 40) = name;
            sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 40), name, v38, v39, v40, v41, v42, v43);
            if ( !entity )
              goto LABEL_40;
            *(_DWORD *)(v30 + 20) = HIDWORD(entity->fields.emptyMessage);
            itemDetailInfoComp = v6->fields.itemDetailInfoComp;
            v46 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v46,
              (Il2CppObject *)v6,
              (intptr_t)Method_CoinRoomCoinListViewManager_EndShowItemDetail__,
              0LL);
            if ( !itemDetailInfoComp )
              goto LABEL_40;
            ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v30, v46, 5, 0LL);
          }
        }
        else if ( v5 == 2 )
        {
          this = (CoinRoomCoinListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !v29 )
            goto LABEL_40;
          v47 = this;
          this = (CoinRoomCoinListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v29,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserSvtCoinMaster___);
          if ( !v47 || !this )
            goto LABEL_40;
          if ( UserSvtCoinMaster__TryGetEntity(
                 (UserSvtCoinMaster_o *)this,
                 &v68,
                 *(_QWORD *)&v47->fields.m_CachedPtr,
                 linkItem[28],
                 0LL) )
          {
            bulkSelectDialog = v6->fields.bulkSelectDialog;
            v49 = v68;
            selectedCoinDic = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic;
            v51 = CoinRoomCoinListViewManager___c_TypeInfo;
            if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
              v51 = CoinRoomCoinListViewManager___c_TypeInfo;
            }
            static_fields = v51->static_fields;
            _9__58_0 = static_fields->__9__58_0;
            if ( !_9__58_0 )
            {
              if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v51);
                static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              }
              v54 = (Il2CppObject *)static_fields->__9;
              _9__58_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B2C42C(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
              System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
                _9__58_0,
                v54,
                Method_CoinRoomCoinListViewManager___c__OnSelectedCoinIcon_b__58_0__,
                (const MethodInfo_2703950 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
              v55 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
              v55->__9__58_0 = _9__58_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v55->__9__58_0,
                (System_Int32_array **)_9__58_0,
                v56,
                v57,
                v58,
                v59,
                v60,
                v61);
            }
            v62 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                    selectedCoinDic,
                    (System_Func_TSource__int__o *)_9__58_0,
                    (const MethodInfo_1A9A4CC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
            v63 = (System_Action_T1__T2__o *)sub_B2C42C(System_Action_CoinRoomCoinIconObject__int__TypeInfo);
            System_Action_object__int____ctor(
              v63,
              (Il2CppObject *)v6,
              Method_CoinRoomCoinListViewManager_SelectedCoinConfirm__,
              (const MethodInfo_24C950C *)Method_System_Action_CoinRoomCoinIconObject__int___ctor__);
            if ( !bulkSelectDialog )
              goto LABEL_40;
            CoinBulkSelectDialog__Open(
              bulkSelectDialog,
              v49,
              iconObject,
              v62,
              (System_Action_CoinRoomCoinIconObject__int__o *)v63,
              v64);
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
               (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__) )
        {
          this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
              linkItem[28],
              (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Remove__);
            CoinRoomCoinListViewManager__UpdateSelectNum(v6, linkItem[4], v26);
            CoinRoomCoinIconObject__ResetItem(iconObject, v6->fields.isInput, v27);
            CoinRoomCoinListViewManager__RefrashListDisp(v6, 0, v28);
            return;
          }
LABEL_40:
          sub_B2C434(this, *(_QWORD *)&kind);
        }
      }
    }
    else
    {
      v65 = (CoinRoomCoinListViewManager_o *)sub_B2C728(iconObject->fields.linkItem);
      CoinRoomCoinListViewManager__OnClickIcon(v65, v66, v67);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *selectedCoinDic; // x0
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__c *v22; // x8
  const MethodInfo *v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4188860 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__, *(_QWORD *)&num);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__, v9);
    byte_4188860 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.selectedCoinDic;
  if ( !selectedCoinDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v24,
    selectedCoinDic,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v25,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    if ( !v11 )
      break;
    if ( !v25.fields.current.fields.value )
      sub_B2C434(v11, v12);
    klass = v25.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v12);
    CoinRoomCoinIconObject__UpdateItem((CoinRoomCoinIconObject_o *)klass, num, this->fields.isInput, v13);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v25,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  CoinRoomCoinListViewManager__SetAddBar(this, v15);
  CoinRoomCoinListViewManager__SetAddNumLabel(this, v16);
  v17 = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic,
          (const MethodInfo_1A8BE00 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
  CoinRoomCoinListViewManager__SetSelectedDoneLabel(this, v17, v18);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__((System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selectedCoinDic, (const MethodInfo_1A8BE00 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____);
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
    selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
    if ( selectedCoinDic )
    {
      v22 = selectedCoinDic->klass;
      goto LABEL_15;
    }
LABEL_18:
    sub_B2C434(selectedCoinDic, *(_QWORD *)&num);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v20)(
    this->fields.allReleaseButton,
    0LL,
    1LL,
    methodPtr);
  selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.decideButton;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418885B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418885B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CoinRoomCoinListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CoinRoomCoinListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      CoinRoomCoinIconObject__Init(
        (CoinRoomCoinIconObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_CoinRoomCoinIconObject__Dispose__);
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
  __int64 v14; // x1
  struct ListViewItem_o *linkItem; // x22
  __int64 v16; // x9
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *selectedCoinDic; // x24
  int32_t klass; // w23
  System_Action_int__o *v19; // x1
  SelectedUserSvtCoin_o *v20; // x25
  CoinRoomCoinListViewManager_o *bulkSelectDialog; // x20
  System_Action_int__o *v22; // x21
  CoinRoomCoinListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  v4 = num;
  v5 = iconObject;
  v6 = this;
  if ( (byte_418885F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, iconObject);
    sub_B2C35C(&System_Action_int__TypeInfo, v7);
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, v8);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager_RefrashListDisp__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____, v13);
    this = (CoinRoomCoinListViewManager_o *)sub_B2C35C(&SelectedUserSvtCoin_TypeInfo, v14);
    byte_418885F = 1;
  }
  if ( v6->fields.initMode == 2 )
  {
    if ( !v4 )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      if ( this )
      {
        v19 = 0LL;
LABEL_21:
        CoinBulkSelectDialog__Close((CoinBulkSelectDialog_o *)this, v19, *(const MethodInfo **)&num);
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
    v16 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v16
      && (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] == CoinRoomCoinIconItem_TypeInfo )
    {
      this = (CoinRoomCoinListViewManager_o *)v6->fields.selectedCoinDic;
      if ( !this )
        goto LABEL_22;
      this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                                (int32_t)linkItem[1].klass,
                                                (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__ContainsKey__);
      selectedCoinDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic;
      klass = (int32_t)linkItem[1].klass;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !selectedCoinDic )
          goto LABEL_22;
        this = (CoinRoomCoinListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6->fields.selectedCoinDic,
                                                  klass,
                                                  (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Item__);
        if ( !this )
          goto LABEL_22;
        v4 += HIDWORD(this->fields.dropObjectList);
        HIDWORD(this->fields.dropObjectList) = v4;
      }
      else
      {
        v20 = (SelectedUserSvtCoin_o *)sub_B2C42C(SelectedUserSvtCoin_TypeInfo);
        SelectedUserSvtCoin___ctor(v20, v5, v4, 0LL);
        if ( !selectedCoinDic )
          goto LABEL_22;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          selectedCoinDic,
          klass,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v20,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__Add__);
      }
      LODWORD(linkItem[1].fields.sortValue0B) = v4;
      linkItem->fields.selectNum = System_Linq_Enumerable__Count_KeyValuePair_int__SelectedUserSvtCoin__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.selectedCoinDic,
                                     (const MethodInfo_1A8BE00 *)Method_System_Linq_Enumerable_Count_KeyValuePair_int__SelectedUserSvtCoin____)
                                 - 1;
      bulkSelectDialog = (CoinRoomCoinListViewManager_o *)v6->fields.bulkSelectDialog;
      v22 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v22,
        (Il2CppObject *)v6,
        Method_CoinRoomCoinListViewManager_RefrashListDisp__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( bulkSelectDialog )
      {
        this = bulkSelectDialog;
        v19 = v22;
        goto LABEL_21;
      }
LABEL_22:
      sub_B2C434(this, iconObject);
    }
    v23 = (CoinRoomCoinListViewManager_o *)sub_B2C728(v5->fields.linkItem);
    CoinRoomCoinListViewManager__SetTouchEnabled(v23, v24);
  }
}


void __fastcall CoinRoomCoinListViewManager__SetAddBar(CoinRoomCoinListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CoinRoomUtility_c *v8; // x0
  const MethodInfo *v9; // x0
  int v10; // w20
  const MethodInfo *v11; // x0
  int v12; // w21
  int32_t v13; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v15; // w22
  CoinRoomCoinListViewManager___c_c *v16; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__45_0; // x24
  Il2CppObject *v19; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  int32_t v28; // w8
  UIProgressBar_o *addSlider; // x0
  int v30; // w8
  float v31; // s0

  if ( (byte_4188856 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v3);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v4);
    sub_B2C35C(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v5);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__, v6);
    sub_B2C35C(&CoinRoomCoinListViewManager___c_TypeInfo, v7);
    byte_4188856 = 1;
  }
  v8 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v9 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v8);
  v10 = (int)v9;
  v11 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v9);
  v12 = (int)v11;
  v13 = CoinRoomUtility__CalcPoint(v11);
  selectedCoinDic = this->fields.selectedCoinDic;
  v15 = v13;
  v16 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v16 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B2C42C(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__45_0,
      v19,
      Method_CoinRoomCoinListViewManager___c__SetAddBar_b__45_0__,
      (const MethodInfo_2703950 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v20 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v20->__9__45_0 = _9__45_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v28 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__45_0,
          (const MethodInfo_1A9A4CC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  addSlider = (UIProgressBar_o *)this->fields.addSlider;
  v30 = v12 + v28 * v15;
  if ( v10 <= v30 )
  {
    if ( addSlider )
    {
      v31 = (float)v10;
      goto LABEL_19;
    }
LABEL_20:
    sub_B2C434(addSlider, v27);
  }
  if ( !addSlider )
    goto LABEL_20;
  v31 = (float)v30 / (float)v10;
LABEL_19:
  UIProgressBar__set_value(addSlider, v31, 0LL);
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
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x20
  CoinRoomCoinListViewManager___c_c *v12; // x0
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__43_0; // x21
  Il2CppObject *v15; // x22
  struct CoinRoomCoinListViewManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t v23; // w0
  __int64 v24; // x1
  int v25; // w20
  System_String_o *v26; // x0
  UILabel_o *addLabel; // x19
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188854 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, method);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v3);
    sub_B2C35C(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__, v7);
    sub_B2C35C(&CoinRoomCoinListViewManager___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_3124/*"COIN_ROOM_ADD_NUM"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188854 = 1;
  }
  selectedCoinDic = this->fields.selectedCoinDic;
  v12 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v12 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__43_0 = static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B2C42C(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__43_0,
      v15,
      Method_CoinRoomCoinListViewManager___c__SetAddNumLabel_b__43_0__,
      (const MethodInfo_2703950 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v16 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v16->__9__43_0 = _9__43_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
          (System_Func_TSource__int__o *)_9__43_0,
          (const MethodInfo_1A9A4CC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  if ( v23 )
  {
    v25 = v23;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3124/*"COIN_ROOM_ADD_NUM"*/, 0LL);
    addLabel = this->fields.addLabel;
    v28 = v26;
    v31 = v25;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = System_String__Format(v28, v29, 0LL);
    if ( addLabel )
    {
      UILabel__set_text(addLabel, v30, 0LL);
      return;
    }
LABEL_19:
    sub_B2C434(v30, v24);
  }
  v30 = (System_String_o *)this->fields.addLabel;
  if ( !v30 )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)v30, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_4188855 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    byte_4188855 = 1;
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
    sub_B2C434(v6, v7);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4188858 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_4188858 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CoinRoomCoinListViewManager__SetMode_26757792(this, mode, v10);
}


void __fastcall CoinRoomCoinListViewManager__SetMode_26757792(
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
  if ( (byte_418885A & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager_o *)sub_B2C35C(&CoinRoomCoinIconObject_TypeInfo, obj);
    byte_418885A = 1;
  }
  if ( !obj
    || (v6 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CoinRoomCoinIconObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CoinRoomCoinIconObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  CoinRoomCoinIconObject__Init((CoinRoomCoinIconObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
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
  System_String_o *v8; // x0
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v10; // x22
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_DataEntityBase__o *userServantCoinList; // x8
  Il2CppObject *v14; // x19
  Il2CppObject *v15; // x0
  int32_t size; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188853 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&selectedNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3138/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v7);
    byte_4188853 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3138/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
  selectDoneLabel = this->fields.selectDoneLabel;
  v10 = v8;
  v17 = selectedNum;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  userServantCoinList = this->fields.userServantCoinList;
  if ( !userServantCoinList
    || (v14 = (Il2CppObject *)v11,
        size = userServantCoinList->fields._size,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size),
        v11 = System_String__Format_44301068(v10, v14, v15, 0LL),
        !selectDoneLabel) )
  {
    sub_B2C434(v11, v12);
  }
  UILabel__set_text(selectDoneLabel, v11, 0LL);
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
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4188857 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16958/*"btn_bg_05"*/, method);
    sub_B2C35C(&StringLiteral_16959/*"btn_bg_06"*/, v3);
    sub_B2C35C(&StringLiteral_361/*"#FE4545"*/, v4);
    sub_B2C35C(&StringLiteral_347/*"#000000"*/, v5);
    byte_4188857 = 1;
  }
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.sortSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_16958/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_16959/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_347/*"#000000"*/
     : (System_String_o **)&StringLiteral_361/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.sortSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B2C434(sort, method);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_4188867 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_4188867 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
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
  __int64 v12; // x1
  CoinRoomUtility_c *v13; // x0
  const MethodInfo *v14; // x0
  int v15; // w20
  const MethodInfo *v16; // x0
  int v17; // w21
  int32_t v18; // w0
  struct System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic; // x23
  int32_t v20; // w22
  CoinRoomCoinListViewManager___c_c *v21; // x8
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *_9__63_0; // x24
  Il2CppObject *v24; // x25
  struct CoinRoomCoinListViewManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CoinRoomCoinIconObject_o *v32; // x0
  __int64 v33; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  unsigned __int64 v35; // x21
  ListViewItem_o *v36; // x26
  __int64 v37; // x10
  UnityEngine_Object_o *viewObject; // x20
  __int64 v39; // x9
  unsigned __int64 v40; // x21
  ListViewItem_o *v41; // x25
  __int64 v42; // x10
  UnityEngine_Object_o *v43; // x20
  __int64 v44; // x9
  CoinRoomCoinListViewManager_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_4188861 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, method);
    sub_B2C35C(&CoinRoomCoinIconObject_TypeInfo, v3);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____, v5);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__, v6);
    sub_B2C35C(&System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__, v11);
    sub_B2C35C(&CoinRoomCoinListViewManager___c_TypeInfo, v12);
    byte_4188861 = 1;
  }
  v13 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v14 = (const MethodInfo *)CoinRoomUtility__MaxPoint((const MethodInfo *)v13);
  v15 = (int)v14;
  v16 = (const MethodInfo *)CoinRoomUtility__MonthExchangePoint(v14);
  v17 = (int)v16;
  v18 = CoinRoomUtility__CalcPoint(v16);
  selectedCoinDic = this->fields.selectedCoinDic;
  v20 = v18;
  v21 = CoinRoomCoinListViewManager___c_TypeInfo;
  if ( (BYTE3(CoinRoomCoinListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomCoinListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomCoinListViewManager___c_TypeInfo);
    v21 = CoinRoomCoinListViewManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__o *)sub_B2C42C(System_Func_KeyValuePair_int__SelectedUserSvtCoin___int__TypeInfo);
    System_Func_KeyValuePair_int__SelectedUserSvtCoin___int____ctor(
      _9__63_0,
      v24,
      Method_CoinRoomCoinListViewManager___c__SetTouchEnabled_b__63_0__,
      (const MethodInfo_2703950 *)Method_System_Func_KeyValuePair_int__SelectedUserSvtCoin___int___ctor__);
    v25 = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
    v25->__9__63_0 = _9__63_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__63_0,
      (System_Int32_array **)_9__63_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (CoinRoomCoinIconObject_o *)System_Linq_Enumerable__Sum_KeyValuePair_int__SelectedUserSvtCoin__(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)selectedCoinDic,
                                      (System_Func_TSource__int__o *)_9__63_0,
                                      (const MethodInfo_1A9A4CC *)Method_System_Linq_Enumerable_Sum_KeyValuePair_int__SelectedUserSvtCoin____);
  itemList = this->fields.itemList;
  if ( v15 > v17 + (int)v32 * v20 )
  {
    if ( itemList )
    {
      v35 = 0LL;
      while ( (__int64)v35 < itemList->fields._size )
      {
        if ( v35 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v36 = itemList->fields._items->m_Items[v35];
        if ( v36 )
        {
          v37 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v36->klass->_2.bitflags2 + 1) >= (unsigned int)v37
            && (CoinRoomCoinIconItem_c *)v36->klass->_2.typeHierarchy[v37 - 1] == CoinRoomCoinIconItem_TypeInfo )
          {
            BYTE4(v36[1].fields.sortValue0B) = 1;
            viewObject = (UnityEngine_Object_o *)v36->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v32 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( ((unsigned __int8)v32 & 1) == 0 )
            {
              v32 = (CoinRoomCoinIconObject_o *)v36->fields.viewObject;
              if ( !v32 )
                goto LABEL_50;
              v39 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v39
                || (CoinRoomCoinIconObject_c *)v32->klass->_2.typeHierarchy[v39 - 1] != CoinRoomCoinIconObject_TypeInfo )
              {
                goto LABEL_52;
              }
              CoinRoomCoinIconObject__SetupDisp(v32, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
            }
          }
        }
        itemList = this->fields.itemList;
        ++v35;
        if ( !itemList )
          goto LABEL_50;
      }
      return;
    }
LABEL_50:
    sub_B2C434(v32, v33);
  }
  if ( !itemList )
    goto LABEL_50;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v41 = itemList->fields._items->m_Items[v40];
    if ( v41 )
    {
      v42 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
        && (CoinRoomCoinIconItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        v43 = (UnityEngine_Object_o *)v41->fields.viewObject;
        BYTE4(v41[1].fields.sortValue0B) = SLODWORD(v41[1].fields.sortValue0B) > 0;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v32 = (CoinRoomCoinIconObject_o *)UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
        if ( ((unsigned __int8)v32 & 1) == 0 )
        {
          v32 = (CoinRoomCoinIconObject_o *)v41->fields.viewObject;
          if ( !v32 )
            goto LABEL_50;
          v44 = *(&CoinRoomCoinIconObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v44
            || (CoinRoomCoinIconObject_c *)v32->klass->_2.typeHierarchy[v44 - 1] != CoinRoomCoinIconObject_TypeInfo )
          {
LABEL_52:
            v45 = (CoinRoomCoinListViewManager_o *)sub_B2C728(v32);
            CoinRoomCoinListViewManager__OnClickAllRelease(v45, v46);
            return;
          }
          CoinRoomCoinIconObject__SetupDisp(v32, (const MethodInfo *)CoinRoomCoinIconObject_TypeInfo);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v40;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v8; // x21
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  int32_t selectNum; // w9

  v4 = this;
  if ( (byte_418886A & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinIconItem_TypeInfo, *(_QWORD *)&deleteNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    this = (CoinRoomCoinListViewManager_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                              v6);
    byte_418886A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_14:
    sub_B2C434(this, *(_QWORD *)&deleteNum);
  v8 = 0LL;
  while ( (__int64)v8 < itemList->fields._size )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( v9 )
    {
      v10 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (CoinRoomCoinIconItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == CoinRoomCoinIconItem_TypeInfo )
      {
        selectNum = v9->fields.selectNum;
        if ( selectNum > deleteNum )
          v9->fields.selectNum = selectNum - 1;
      }
    }
    itemList = v4->fields.itemList;
    ++v8;
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

  if ( (byte_418884C & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_418884C = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomCoinListViewManager_o *)sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188850 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4188850 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CoinRoomCoinIconObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomCoinIconObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CoinRoomCoinIconObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_418884D & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager_CallbackFunc_TypeInfo, value);
    byte_418884D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = kind;
  v13 = id;
  v14 = index;
  if ( (byte_4184F0B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&CoinRoomCoinListViewManager_ResultKind_TypeInfo, v10);
    byte_4184F0B = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(CoinRoomCoinListViewManager_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall CoinRoomCoinListViewManager_CallbackFunc__EndInvoke(
        CoinRoomCoinListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  CoinRoomCoinListViewManager_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  CoinRoomCoinListViewManager_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index, *(_QWORD *)&id);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)index, (unsigned int)id, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)index, (unsigned int)id, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, (unsigned int)index, (unsigned int)id, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)index,
            (unsigned int)id,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)index,
      (unsigned int)id,
      v25);
    goto LABEL_38;
  }
}


void __fastcall CoinRoomCoinListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CoinRoomCoinListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184F06 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomCoinListViewManager___c_TypeInfo, v1);
    byte_4184F06 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CoinRoomCoinListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CoinRoomCoinListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomCoinListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( (byte_4184F09 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4184F09 = 1;
  }
  if ( !value )
    sub_B2C434(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddBar_b__45_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4184F08 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4184F08 = 1;
  }
  if ( !value )
    sub_B2C434(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetAddNumLabel_b__43_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4184F07 & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4184F07 = 1;
  }
  if ( !value )
    sub_B2C434(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}


int32_t __fastcall CoinRoomCoinListViewManager___c___SetTouchEnabled_b__63_0(
        CoinRoomCoinListViewManager___c_o *this,
        System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__o x,
        const MethodInfo *method)
{
  struct SelectedUserSvtCoin_o *value; // x19

  value = x.fields.value;
  if ( (byte_4184F0A & 1) == 0 )
  {
    this = (CoinRoomCoinListViewManager___c_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_KeyValuePair_int__SelectedUserSvtCoin__get_Value__,
                                                  *(_QWORD *)&x.fields.key);
    byte_4184F0A = 1;
  }
  if ( !value )
    sub_B2C434(this, *(_QWORD *)&x.fields.key);
  return value->fields._num_k__BackingField;
}