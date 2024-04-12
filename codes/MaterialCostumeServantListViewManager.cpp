void __fastcall MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3749 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_9040/*"MaterialCostumeServant1"*/);
    sub_B52984(&StringLiteral_9041/*"MaterialCostumeServant2"*/);
    byte_42B3749 = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_9040/*"MaterialCostumeServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v9, (System_String_o *)StringLiteral_9041/*"MaterialCostumeServant2"*/, 27, 1, 0LL);
  v10 = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  v10->servantEquipSortInfo = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->servantEquipSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  MaterialCostumeServantListViewManager_o *v8; // x19
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
  if ( (byte_42B3748 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    this = (MaterialCostumeServantListViewManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3748 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v11 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v11 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v11 = 1;
  }
  v8->fields.scaleType = v11;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
LABEL_10:
  sort = v8->fields.sort;
  if ( !sort )
    goto LABEL_27;
  sort->fields.iconScaleKind = v8->fields.scaleType;
  this = (MaterialCostumeServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_27;
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  itemList = v8->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v15 = 0LL;
  while ( (__int64)v15 < itemList->fields._size )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v16 = itemList->fields._items->m_Items[v15];
    if ( v16 )
    {
      v17 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (MaterialCostumeServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (MaterialCostumeServantListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (MaterialCostumeServantListViewManager_o *)v16->fields.viewObject;
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
  MaterialCostumeServantListViewManager__SetMode_31525136(v8, 2, v13);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (MaterialCostumeServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (MaterialCostumeServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL )
  {
LABEL_27:
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__CreateList(
        MaterialCostumeServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  ServantCostumeReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x22
  int32_t v9; // w23
  ServantCostumeEntity_o *v10; // x24
  __int64 v11; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v13; // x26
  const MethodInfo *v14; // x3
  UILabel_o *emptyMessageLabel; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  MaterialCostumeServantListViewManager_c *v22; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v24; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ListViewSort_o *v32; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v35; // x1
  UserServantCollectionEntity_array *userSvtCollList; // [xsp+0h] [xbp-60h]
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B3739 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_B52984(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_B52984(&ServantCostumeEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_42B3739 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_41;
    userSvtCollList = UserServantCollectionMaster__getCollectionList(
                        (UserServantCollectionMaster_o *)Instance,
                        &findSum[1],
                        findSum,
                        0,
                        0,
                        0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Instance )
      goto LABEL_41;
    v8 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
    if ( !v8 )
      goto LABEL_41;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)Instance + 4),
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     v8,
                     v9,
                     (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v10 = (ServantCostumeEntity_o *)Instance;
        v11 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v11
          || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) != ServantCostumeEntity_TypeInfo )
        {
          break;
        }
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 8, 0LL) )
        {
          Instance = (void *)ServantCostumeEntity__checkFlag(v10, 64, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_19;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(
                 MasterData_WarQuestSelectionMaster,
                 v10->fields.svtId,
                 v10->fields.id,
                 0LL) )
          {
LABEL_19:
            itemList = this->fields.itemList;
            v13 = (MaterialCostumeServantListViewItem_o *)sub_B52A54(MaterialCostumeServantListViewItem_TypeInfo);
            MaterialCostumeServantListViewItem___ctor(v13, v10, userSvtCollList, v14);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
        }
        if ( ++v9 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       v8,
                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_22;
      }
LABEL_41:
      sub_B52A5C(Instance, v6);
    }
  }
LABEL_22:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_41;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  v22 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCostumeServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v22 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v22->static_fields->servantSortInfo;
  v24 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v24,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = this->fields.sort;
  if ( !Instance )
    goto LABEL_41;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  v32 = *p_sort;
  if ( !*p_sort )
    goto LABEL_41;
  if ( v32->fields.sortKind != 27 )
  {
    v32->fields.sortKind = 27;
    v32 = *p_sort;
    if ( !*p_sort )
      goto LABEL_41;
  }
  iconScaleKind = v32->fields.iconScaleKind;
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v35);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42B3735 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_42B3735 = 1;
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
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B52A5C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DestroyList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B52A5C(0LL, v3);
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
    sub_B52A5C(0LL, isDecide);
  MaterialCostumeServantSortSelectMenu__Close_31546380(sortSelectMenu, 0LL, method);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v6);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewManager__GetItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B373B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_42B373B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (MaterialCostumeServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
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
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewManager__GetSelectedItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int32_t v5; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  unsigned int v9; // w23
  MaterialCostumeServantListViewItem_o *result; // x0
  __int64 v11; // x9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  MaterialCostumeMenu_o *v13; // x0
  bool v14; // w1
  const MethodInfo *v15; // x2

  v5 = svtId;
  if ( (byte_42B373C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_42B373C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  size = itemList->fields._size;
  if ( size < 1 )
    return 0LL;
  v9 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    result = (MaterialCostumeServantListViewItem_o *)itemList->fields._items->m_Items[v9];
    if ( !result )
LABEL_16:
      sub_B52A5C(result, *(_QWORD *)&svtId);
    *(_QWORD *)&svtId = MaterialCostumeServantListViewItem_TypeInfo;
    v11 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[v11 - 1] != MaterialCostumeServantListViewItem_TypeInfo )
    {
      break;
    }
    svtCostumeEntity_k__BackingField = result->fields._svtCostumeEntity_k__BackingField;
    if ( !svtCostumeEntity_k__BackingField )
      goto LABEL_16;
    if ( svtCostumeEntity_k__BackingField->fields.svtId == v5
      && svtCostumeEntity_k__BackingField->fields.id == costumeId )
    {
      return result;
    }
    if ( (int)++v9 >= size )
      return 0LL;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B52D50(result);
  MaterialCostumeMenu__EndShowCostume(v13, v14, v15);
  return result;
}


void __fastcall MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42B3736 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_42B3736 = 1;
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
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_B52A5C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_31533504(this, 4, v2);
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
  MaterialCostumeServantListViewItem_c *v12; // x1
  __int64 v13; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v15; // x0
  ListViewObject_o *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42B3742 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_42B3742 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B52920(
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
    v12 = MaterialCostumeServantListViewItem_TypeInfo;
    v13 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
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
      sub_B52A5C(linkItem, v12);
    }
    sub_B52D50(linkItem);
    MaterialCostumeServantListViewManager__OnLongPushListView(v15, v16, v17);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortAscendingOrder(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42B3746 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3746 = 1;
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
      sub_B52A5C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortKind(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_42B3744 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3744 = 1;
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
    v5 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectMenu )
      sub_B52A5C(v6, v7);
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v5, v8);
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
  MaterialCostumeServantListViewItem_c *v12; // x1
  __int64 v13; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42B3743 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_42B3743 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B52920(
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
    v12 = MaterialCostumeServantListViewItem_TypeInfo;
    v13 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
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
      sub_B52A5C(linkItem, v12);
    }
    sub_B52D50(linkItem);
    MaterialCostumeServantListViewManager__OnClickSortKind(v15, v16);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42B3741 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3741 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall MaterialCostumeServantListViewManager__RefrashListDisp(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v6; // x20
  int v7; // w8
  __int64 v8; // x21

  if ( (byte_42B373A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    byte_42B373A = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        ObjectList = (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v6->fields._items->m_Items[v8];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v7 = v6->fields._size;
        if ( (int)++v8 >= v7 )
          return;
      }
LABEL_12:
      sub_B52A5C(ObjectList, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestInto(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  MaterialCostumeServantListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B3740 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    sub_B52984(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B3740 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B52A5C(ObjectList, v5);
  v6 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(v10, 5, v11, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v6->fields._size;
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
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

  if ( (byte_42B373E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_B52984(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B373E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject_31533504(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B373F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_B52984(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B373F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCostumeServantListViewObject__Init(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetFilterButtonImage(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42B3745 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42B3745 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_31525136(this, mode, v10);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31525136(
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
  MaterialCostumeServantListViewManager__RequestListObject_31533504(this, v6, v5);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31534216(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_31525136(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__SetObjectItem(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_42B373D & 1) == 0 )
  {
    this = (MaterialCostumeServantListViewManager_o *)sub_B52984(&MaterialCostumeServantListViewObject_TypeInfo);
    byte_42B373D = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCostumeServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  initMode = v5->fields.initMode;
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
  UnityEngine_Object_o *sortKindLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *sortExplanationSprite; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_42B3747 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42B3747 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    v4 = this->fields.sortKindLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    sortExplanationSprite = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !v4 )
      goto LABEL_38;
    UILabel__set_text(v4, sortExplanationSprite, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sortExplanationSprite = (System_String_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sortExplanationSprite & 1) != 0 )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      sortKind = sort->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = (System_String_o *)this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v10 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
LABEL_34:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v17, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sortExplanationSprite = (System_String_o *)this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v15 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
              goto LABEL_34;
            }
          }
        }
      }
    }
LABEL_38:
    sub_B52A5C(sortExplanationSprite, v6);
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

  if ( (byte_42B3731 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_42B3731 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B3733 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3733 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ClippingObjectList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  MaterialCostumeServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B3738 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3738 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (MaterialCostumeServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            (UnityEngine_GameObject_o *)current,
                                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ObjectList(
        MaterialCostumeServantListViewManager_o *this,
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

  if ( (byte_42B3737 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3737 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v3;
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

  if ( (byte_42B3732 & 1) == 0 )
  {
    sub_B52984(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_42B3732 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B3734 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3734 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MaterialCostumeServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager_CallbackFunc___ctor(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall MaterialCostumeServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = kind;
  v12 = costumeId;
  v13 = svtId;
  if ( (byte_42ADCB9 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo);
    byte_42ADCB9 = 1;
  }
  v11[3] = 0LL;
  v11[0] = j_il2cpp_value_box_0(MaterialCostumeServantListViewManager_ResultKind_TypeInfo, &v14);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11[2] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  MaterialCostumeServantListViewManager_CallbackFunc_o *v23; // x8
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
  MaterialCostumeServantListViewManager_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

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
    v10 = (MaterialCostumeServantListViewManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&svtId, *(_QWORD *)&costumeId);
      if ( (sub_B529B4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)svtId, (unsigned int)costumeId, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)svtId, (unsigned int)costumeId, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
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
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B52A34(v20, v25);
        (*v22)(v24, v30, (unsigned int)svtId, (unsigned int)costumeId, v22);
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
            v19 = sub_AEB880(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)svtId,
            (unsigned int)costumeId,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)svtId,
            (unsigned int)costumeId,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)svtId,
      (unsigned int)costumeId,
      v25);
    goto LABEL_38;
  }
}