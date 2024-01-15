void __fastcall MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *v8; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ListViewSort_o *v20; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FCBEE & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&MaterialCostumeServantListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8954/*"MaterialCostumeServant1"*/, v6);
    sub_B16FFC(&StringLiteral_8955/*"MaterialCostumeServant2"*/, v7);
    byte_40FCBEE = 1;
  }
  v8 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v8, (System_String_o *)StringLiteral_8954/*"MaterialCostumeServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B16F98(static_fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v20 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v16, v17, v18, v19);
  ListViewSort___ctor_30208480(v20, (System_String_o *)StringLiteral_8955/*"MaterialCostumeServant2"*/, 27, 1, 0LL);
  v21 = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  v21->servantEquipSortInfo = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->servantEquipSortInfo,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall MaterialCostumeServantListViewManager___ctor(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ChangeIconScale(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v14; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v19; // x22
  ListViewItem_o *v20; // x20
  __int64 v21; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v23; // x0
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FCBED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FCBED = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = 1;
  }
  this->fields.scaleType = v14;
  this->fields.seed = smallSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)smallSizeSeed,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_27;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v16 = this->fields.sort;
  if ( !v16 )
    goto LABEL_27;
  ListViewSort__Save(v16, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v19 = 0LL;
  while ( (__int64)v19 < itemList->fields._size )
  {
    if ( v19 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v20 = itemList->fields._items->m_Items[v19];
    if ( v20 )
    {
      v21 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (MaterialCostumeServantListViewItem_c *)v20->klass->_2.typeHierarchy[v21 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v20->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
        {
          v23 = v20->fields.viewObject;
          if ( !v23 )
            goto LABEL_27;
          ListViewObject__SetItemSeed(v23, v20, this->fields.seed, 0LL);
        }
      }
    }
    itemList = this->fields.itemList;
    ++v19;
    if ( !itemList )
      goto LABEL_27;
  }
  MaterialCostumeServantListViewManager__SetMode_30122228(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar || (gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
LABEL_27:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__CreateList(
        MaterialCostumeServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v18; // x0
  ServantCostumeReleaseMaster_o *v19; // x21
  WebViewManager_o *v20; // x0
  WarQuestSelectionMaster_o *v21; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x22
  int32_t v23; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  ServantCostumeEntity_o *v25; // x24
  __int64 v26; // x10
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v32; // x26
  const MethodInfo *v33; // x3
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  MaterialCostumeServantListViewManager_c *v42; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v44; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ListViewSort_o *v52; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v55; // x1
  UserServantCollectionEntity_array *userSvtCollList; // [xsp+0h] [xbp-60h]
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FCBDE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, v11);
    sub_B16FFC(&MaterialCostumeServantListViewManager_TypeInfo, v12);
    sub_B16FFC(&ServantCostumeEntity_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v15);
    byte_40FCBDE = 1;
  }
  *(_QWORD *)findSum = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    userSvtCollList = UserServantCollectionMaster__getCollectionList(
                        MasterData_WarQuestSelectionMaster,
                        &findSum[1],
                        findSum,
                        0,
                        0,
                        0LL);
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v18 )
      goto LABEL_41;
    v19 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v18,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v20 )
      goto LABEL_41;
    v21 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v20,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !v21 )
      goto LABEL_41;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v21->fields.list;
    if ( !list )
      goto LABEL_41;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v21->fields.list,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 list,
                 v23,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Item )
          break;
        v25 = (ServantCostumeEntity_o *)Item;
        v26 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v26
          || (ServantCostumeEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] != ServantCostumeEntity_TypeInfo )
        {
          break;
        }
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Item, 8, 0LL) )
        {
          if ( !ServantCostumeEntity__checkFlag(v25, 64, 0LL) )
            goto LABEL_19;
          if ( !v19 )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(v19, v25->fields.svtId, v25->fields.id, 0LL) )
          {
LABEL_19:
            itemList = this->fields.itemList;
            v32 = (MaterialCostumeServantListViewItem_o *)sub_B170CC(
                                                            MaterialCostumeServantListViewItem_TypeInfo,
                                                            v27,
                                                            v28,
                                                            v29,
                                                            v30);
            MaterialCostumeServantListViewItem___ctor(v32, v25, userSvtCollList, v33);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
        }
        if ( ++v23 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        list,
                        (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_22;
      }
LABEL_41:
      sub_B170D4();
    }
  }
LABEL_22:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_41;
  UILabel__set_text(emptyMessageLabel, v35, 0LL);
  v42 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCostumeServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v42 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v42->static_fields->servantSortInfo;
  v44 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v44,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !this->fields.sort )
    goto LABEL_41;
  ListViewSort__Load(this->fields.sort, 0LL);
  v52 = *p_sort;
  if ( !*p_sort )
    goto LABEL_41;
  if ( v52->fields.sortKind != 27 )
  {
    v52->fields.sortKind = 27;
    v52 = *p_sort;
    if ( !*p_sort )
      goto LABEL_41;
  }
  iconScaleKind = v52->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_39;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_39;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_39:
    this->fields.seed = normalSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v55);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0

  if ( (byte_40FCBDA & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_40FCBDA = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCostumeServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantEquipSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(servantEquipSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DestroyList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__EndSelectSortKind(
        MaterialCostumeServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_B170D4();
  MaterialCostumeServantSortSelectMenu__Close_30143472(sortSelectMenu, 0LL, method);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v6);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewManager__GetItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FCBE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, v5);
    byte_40FCBE0 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (MaterialCostumeServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    return (MaterialCostumeServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall MaterialCostumeServantListViewManager__GetScaleButtonSpriteName(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewManager__GetSelectedItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  unsigned int v11; // w23
  MaterialCostumeServantListViewItem_o *result; // x0
  __int64 v13; // x9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  MaterialCostumeMenu_o *v15; // x0
  bool v16; // w1
  const MethodInfo *v17; // x2

  if ( (byte_40FCBE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, v8);
    byte_40FCBE1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  size = itemList->fields._size;
  if ( size < 1 )
    return 0LL;
  v11 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    result = (MaterialCostumeServantListViewItem_o *)itemList->fields._items->m_Items[v11];
    if ( !result )
LABEL_16:
      sub_B170D4();
    v13 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[v13 - 1] != MaterialCostumeServantListViewItem_TypeInfo )
    {
      break;
    }
    svtCostumeEntity_k__BackingField = result->fields._svtCostumeEntity_k__BackingField;
    if ( !svtCostumeEntity_k__BackingField )
      goto LABEL_16;
    if ( svtCostumeEntity_k__BackingField->fields.svtId == svtId
      && svtCostumeEntity_k__BackingField->fields.id == costumeId )
    {
      return result;
    }
    if ( (int)++v11 >= size )
      return 0LL;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B173C8(result);
  MaterialCostumeMenu__EndShowCostume(v15, v16, v17);
  return result;
}


void __fastcall MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0

  if ( (byte_40FCBDB & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_40FCBDB = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCostumeServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantEquipSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(servantEquipSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_30130596(this, 4, v2);
}


void __fastcall MaterialCostumeServantListViewManager__OnClickListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSelectListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  struct ListViewItem_o *linkItem; // x0
  __int64 v12; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v14; // x0
  ListViewObject_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_40FCBE7 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_40FCBE7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v12 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        MaterialCostumeServantListViewManager_CallbackFunc__Invoke(
          callbackFunc,
          1,
          (int32_t)klass->_1.name,
          HIDWORD(klass->_1.name),
          0LL);
        return;
      }
LABEL_11:
      sub_B170D4();
    }
    sub_B173C8(linkItem);
    MaterialCostumeServantListViewManager__OnLongPushListView(v14, v15, v16);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortAscendingOrder(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FCBEB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBEB = 1;
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
      sub_B170D4();
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortKind(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40FCBE9 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCBE9 = 1;
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
    v11 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                   MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   v7,
                                                                   v8,
                                                                   v9,
                                                                   v10);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectMenu )
      sub_B170D4();
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v11, v12);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnLongPushListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  struct ListViewItem_o *linkItem; // x0
  __int64 v12; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_40FCBE8 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_40FCBE8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v12 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        MaterialCostumeServantListViewManager_CallbackFunc__Invoke(
          callbackFunc,
          1,
          (int32_t)klass->_1.name,
          HIDWORD(klass->_1.name),
          0LL);
        return;
      }
LABEL_11:
      sub_B170D4();
    }
    sub_B173C8(linkItem);
    MaterialCostumeServantListViewManager__OnClickSortKind(v14, v15);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnMoveEnd(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FCBE6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCBE6 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall MaterialCostumeServantListViewManager__RefrashListDisp(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v6; // x20
  int v7; // w8
  __int64 v8; // x21
  MaterialCostumeServantListViewObject_o *v9; // x0

  if ( (byte_40FCBDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v3);
    byte_40FCBDF = 1;
  }
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v7 = ObjectList->fields._size;
    if ( v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v7 <= (unsigned int)v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v9 = v6->fields._items->m_Items[v8];
        if ( !v9 )
          break;
        ((void (__fastcall *)(MaterialCostumeServantListViewObject_o *, bool, Il2CppMethodPointer))v9->klass->vtable._9_SetInput.method)(
          v9,
          this->fields.isInput,
          v9->klass->vtable._10_Invalidation.methodPtr);
        v7 = v6->fields._size;
        if ( (int)++v8 >= v7 )
          return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestInto(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  MaterialCostumeServantListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCBE5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v4);
    sub_B16FFC(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v6);
    byte_40FCBE5 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(v13, 5, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject(
        MaterialCostumeServantListViewManager_o *this,
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCBE3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40FCBE3 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject_30130596(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCBE4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FCBE4 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetFilterButtonImage(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FCBEA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40FCBEA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        MaterialCostumeServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_30122228(this, mode, v10);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_30122228(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    v6 = 2;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 3;
  }
  MaterialCostumeServantListViewManager__RequestListObject_30130596(this, v6, v5);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_30131308(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_30122228(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__SetObjectItem(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40FCBE2 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewObject_TypeInfo, obj);
    byte_40FCBE2 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCostumeServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  MaterialCostumeServantListViewObject__Init(
    (MaterialCostumeServantListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall MaterialCostumeServantListViewManager__SetSortButtonImage(
        MaterialCostumeServantListViewManager_o *this,
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
  UnityEngine_Object_o *sortKindLabel; // x20
  UILabel_o *v12; // x20
  System_String_o *v13; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v18; // x8
  struct ListViewSort_o *v19; // x8
  UISprite_o *v20; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v22; // x9
  System_String_o **v23; // x10
  UISprite_o *v24; // x0
  System_String_o **v25; // x8
  struct ListViewSort_o *v26; // x8
  System_String_o **v27; // x8

  if ( (byte_40FCBEC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v4);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v5);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v6);
    sub_B16FFC(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, v7);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v8);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v9);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v10);
    byte_40FCBEC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    v12 = this->fields.sortKindLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !v12 )
      goto LABEL_38;
    UILabel__set_text(v12, v13, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      sortKind = sort->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v18 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
          UISprite__set_spriteName(sortExplanationSprite, *v18, 0LL);
          v19 = this->fields.sort;
          if ( v19 )
          {
            v20 = this->fields.sortOrderSprite;
            if ( v20 )
            {
              isAscendingOrder = v19->fields.isAscendingOrder;
              v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              v23 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
LABEL_34:
              if ( isAscendingOrder )
                v27 = v22;
              else
                v27 = v23;
              UISprite__set_spriteName(v20, *v27, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v24 = this->fields.sortExplanationSprite;
        if ( v24 )
        {
          v25 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
          UISprite__set_spriteName(v24, *v25, 0LL);
          v26 = this->fields.sort;
          if ( v26 )
          {
            v20 = this->fields.sortOrderSprite;
            if ( v20 )
            {
              isAscendingOrder = v26->fields.isAscendingOrder;
              v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
              v23 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              goto LABEL_34;
            }
          }
        }
      }
    }
LABEL_38:
    sub_B170D4();
  }
}


void __fastcall MaterialCostumeServantListViewManager__add_callbackFunc(
        MaterialCostumeServantListViewManager_o *this,
        MaterialCostumeServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCostumeServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCostumeServantListViewManager_o *v10; // x0
  MaterialCostumeServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCBD6 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCBD6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCostumeServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MaterialCostumeServantListViewManager__add_callbackFunc2(
        MaterialCostumeServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCostumeServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCBD8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCBD8 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ClippingObjectList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  MaterialCostumeServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FCBDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCBDD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (MaterialCostumeServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            (UnityEngine_GameObject_o *)current,
                                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v14;
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ObjectList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FCBDC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCBDC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v14;
}


void __fastcall MaterialCostumeServantListViewManager__remove_callbackFunc(
        MaterialCostumeServantListViewManager_o *this,
        MaterialCostumeServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCostumeServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCostumeServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCBD7 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCBD7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCostumeServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCostumeServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MaterialCostumeServantListViewManager__remove_callbackFunc2(
        MaterialCostumeServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_40FCBD9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCBD9 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCostumeServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager_CallbackFunc___ctor(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCostumeServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
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
  v13 = costumeId;
  v14 = svtId;
  if ( (byte_40F6963 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo, v10);
    byte_40F6963 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(MaterialCostumeServantListViewManager_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__Invoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  MaterialCostumeServantListViewManager_CallbackFunc_o **v10; // x27
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
  MaterialCostumeServantListViewManager_CallbackFunc_o *v22; // x8
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
  MaterialCostumeServantListViewManager_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

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
    v10 = (MaterialCostumeServantListViewManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&svtId);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)svtId, (unsigned int)costumeId, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)svtId, (unsigned int)costumeId, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
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
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)svtId, (unsigned int)costumeId, v21);
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
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)svtId,
            (unsigned int)costumeId,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)svtId,
            (unsigned int)costumeId,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)svtId,
      (unsigned int)costumeId,
      v24);
    goto LABEL_38;
  }
}