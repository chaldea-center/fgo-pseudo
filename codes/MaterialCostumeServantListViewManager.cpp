void __fastcall MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ListViewSort_o *v13; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4189D89 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&MaterialCostumeServantListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_8984/*"MaterialCostumeServant1"*/, v3);
    sub_B2C35C(&StringLiteral_8985/*"MaterialCostumeServant2"*/, v4);
    byte_4189D89 = 1;
  }
  v5 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v5, (System_String_o *)StringLiteral_8984/*"MaterialCostumeServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B2C2F8(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, (System_String_o *)StringLiteral_8985/*"MaterialCostumeServant2"*/, 27, 1, 0LL);
  v14 = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  v14->servantEquipSortInfo = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->servantEquipSortInfo,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  if ( (byte_4189D88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, v10);
    this = (MaterialCostumeServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4189D88 = 1;
  }
  scaleType = v8->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.smallSizeSeed;
    v14 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = (System_Int32_array **)v8->fields.extremelySmallSizeSeed;
    v14 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = (System_Int32_array **)v8->fields.normalSizeSeed;
    v14 = 1;
  }
  v8->fields.scaleType = v14;
  v8->fields.seed = (struct ListViewItemSeed_o *)smallSizeSeed;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.seed, smallSizeSeed, v2, v3, v4, v5, v6, v7);
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
  v18 = 0LL;
  while ( (__int64)v18 < itemList->fields._size )
  {
    if ( v18 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v19 = itemList->fields._items->m_Items[v18];
    if ( v19 )
    {
      v20 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (MaterialCostumeServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (MaterialCostumeServantListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (MaterialCostumeServantListViewManager_o *)v19->fields.viewObject;
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
  MaterialCostumeServantListViewManager__SetMode_28984988(v8, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
  this = (MaterialCostumeServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this
    || (this = (MaterialCostumeServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL )
  {
LABEL_27:
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  void *Instance; // x0
  __int64 v17; // x1
  ServantCostumeReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x22
  int32_t v20; // w23
  ServantCostumeEntity_o *v21; // x24
  __int64 v22; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v24; // x26
  const MethodInfo *v25; // x3
  UILabel_o *emptyMessageLabel; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  MaterialCostumeServantListViewManager_c *v33; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v35; // x1
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ListViewSort_o *v43; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v46; // x1
  UserServantCollectionEntity_array *userSvtCollList; // [xsp+0h] [xbp-60h]
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189D79 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, v11);
    sub_B2C35C(&MaterialCostumeServantListViewManager_TypeInfo, v12);
    sub_B2C35C(&ServantCostumeEntity_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v15);
    byte_4189D79 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_41;
    userSvtCollList = UserServantCollectionMaster__getCollectionList(
                        (UserServantCollectionMaster_o *)Instance,
                        &findSum[1],
                        findSum,
                        0,
                        0,
                        0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Instance )
      goto LABEL_41;
    v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
    if ( !v19 )
      goto LABEL_41;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)Instance + 4),
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     v19,
                     v20,
                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v21 = (ServantCostumeEntity_o *)Instance;
        v22 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v22
          || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v22 - 8) != ServantCostumeEntity_TypeInfo )
        {
          break;
        }
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 8, 0LL) )
        {
          Instance = (void *)ServantCostumeEntity__checkFlag(v21, 64, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_19;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(
                 MasterData_WarQuestSelectionMaster,
                 v21->fields.svtId,
                 v21->fields.id,
                 0LL) )
          {
LABEL_19:
            itemList = this->fields.itemList;
            v24 = (MaterialCostumeServantListViewItem_o *)sub_B2C42C(MaterialCostumeServantListViewItem_TypeInfo);
            MaterialCostumeServantListViewItem___ctor(v24, v21, userSvtCollList, v25);
            if ( !itemList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          }
        }
        if ( ++v20 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        v19,
                        (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_22;
      }
LABEL_41:
      sub_B2C434(Instance, v17);
    }
  }
LABEL_22:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_41;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  v33 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCostumeServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v33 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v33->static_fields->servantSortInfo;
  v35 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v35,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = this->fields.sort;
  if ( !Instance )
    goto LABEL_41;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  v43 = *p_sort;
  if ( !*p_sort )
    goto LABEL_41;
  if ( v43->fields.sortKind != 27 )
  {
    v43->fields.sortKind = 27;
    v43 = *p_sort;
    if ( !*p_sort )
      goto LABEL_41;
  }
  iconScaleKind = v43->fields.iconScaleKind;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v46);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4189D75 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_4189D75 = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
    sub_B2C434(0LL, v3);
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
    sub_B2C434(0LL, isDecide);
  MaterialCostumeServantSortSelectMenu__Close(sortSelectMenu, 0LL);
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

  if ( (byte_4189D7B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, v5);
    byte_4189D7B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(0LL, method);
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

  v5 = svtId;
  if ( (byte_4189D7C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, v8);
    byte_4189D7C = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    result = (MaterialCostumeServantListViewItem_o *)itemList->fields._items->m_Items[v11];
    if ( !result )
LABEL_16:
      sub_B2C434(result, *(_QWORD *)&svtId);
    *(_QWORD *)&svtId = MaterialCostumeServantListViewItem_TypeInfo;
    v13 = *(&MaterialCostumeServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[v13 - 1] != MaterialCostumeServantListViewItem_TypeInfo )
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
    if ( (int)++v11 >= size )
      return 0LL;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B2C728(result);
  MaterialCostumeMenu__EndShowCostume(v15, v16, v17);
  return result;
}


void __fastcall MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4189D76 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_4189D76 = 1;
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
    sub_B2C434(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_28993232(this, 4, v2);
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

  if ( (byte_4189D82 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_4189D82 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
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
      sub_B2C434(linkItem, v12);
    }
    sub_B2C728(linkItem);
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

  if ( (byte_4189D86 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189D86 = 1;
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


void __fastcall MaterialCostumeServantListViewManager__OnClickSortKind(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4189D84 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189D84 = 1;
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
    v7 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !sortSelectMenu )
      sub_B2C434(v8, v9);
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v7, 0LL);
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

  if ( (byte_4189D83 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_4189D83 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
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
      sub_B2C434(linkItem, v12);
    }
    sub_B2C728(linkItem);
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

  if ( (byte_4189D81 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189D81 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v7; // x20
  int v8; // w8
  __int64 v9; // x21

  if ( (byte_4189D7A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v3);
    byte_4189D7A = 1;
  }
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v8 = ObjectList->fields._size;
    if ( v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v8 <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v7->fields._items->m_Items[v9];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v8 = v7->fields._size;
        if ( (int)++v9 >= v8 )
          return;
      }
LABEL_12:
      sub_B2C434(ObjectList, v5);
    }
  }
}


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
  __int64 v9; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  MaterialCostumeServantListViewObject_o *v14; // x21
  System_Action_o *v15; // x22

  if ( (byte_4189D80 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v4);
    sub_B2C35C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_4189D80 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      MaterialCostumeServantListViewObject__Init_25913036(v14, 5, v15, 0.1, 0LL);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189D7E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_4189D7E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
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
      &v21,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      MaterialCostumeServantListViewObject__Init_25913036(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v18,
        delay,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject_28993232(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189D7F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4189D7F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      MaterialCostumeServantListViewObject__Init_25913116(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v16,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetFilterButtonImage(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4189D85 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_4189D85 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_28984988(this, mode, v10);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_28984988(
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
  MaterialCostumeServantListViewManager__RequestListObject_28993232(this, v6, v5);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_28993868(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCostumeServantListViewManager__SetMode_28984988(this, mode, v10);
}


void __fastcall MaterialCostumeServantListViewManager__SetObjectItem(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4189D7D & 1) == 0 )
  {
    this = (MaterialCostumeServantListViewManager_o *)sub_B2C35C(&MaterialCostumeServantListViewObject_TypeInfo, obj);
    byte_4189D7D = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCostumeServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCostumeServantListViewObject__Init_25911496((MaterialCostumeServantListViewObject_o *)obj, v7, 0LL);
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
  System_String_o *sortExplanationSprite; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *sort; // x8
  int32_t sortKind; // w9
  System_String_o **v18; // x8
  struct ListViewSort_o *v19; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x8

  if ( (byte_4189D87 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v4);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v5);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v6);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v7);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v8);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v9);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v10);
    byte_4189D87 = 1;
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
    sortExplanationSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !v12 )
      goto LABEL_38;
    UILabel__set_text(v12, sortExplanationSprite, 0LL);
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
          v18 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v18, 0LL);
          v19 = this->fields.sort;
          if ( v19 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              isAscendingOrder = v19->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v22 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_34:
              if ( isAscendingOrder )
                v25 = v21;
              else
                v25 = v22;
              UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v25, 0LL);
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
          v23 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              isAscendingOrder = v24->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v22 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_34;
            }
          }
        }
      }
    }
LABEL_38:
    sub_B2C434(sortExplanationSprite, v14);
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

  if ( (byte_4189D71 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189D71 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_4189D73 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189D73 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  MaterialCostumeServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189D78 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189D78 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (MaterialCostumeServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            (UnityEngine_GameObject_o *)current,
                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v11;
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189D77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189D77 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
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
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v11;
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

  if ( (byte_4189D72 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189D72 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_4189D74 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189D74 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(
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
  if ( (byte_4185D16 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo, v10);
    byte_4185D16 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(MaterialCostumeServantListViewManager_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&svtId, *(_QWORD *)&costumeId);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
            v19 = sub_AC5258(v24, class_0, v12, v14);
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