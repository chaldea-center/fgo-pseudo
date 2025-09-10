void MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ListViewSort_o *v4; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C224D8 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8956/*"MaterialCostumeServant1"*/);
    sub_1C2D490(&StringLiteral_8957/*"MaterialCostumeServant2"*/);
    byte_4C224D8 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_8956/*"MaterialCostumeServant1"*/, 27, 1, 0);
  MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)MaterialCostumeServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
  v4 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v4, (System_String_o *)StringLiteral_8957/*"MaterialCostumeServant2"*/, 27, 1, 0);
  static_fields = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v4, v6, v7);
}


void MaterialCostumeServantListViewManager___ctor(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MaterialCostumeServantListViewManager__ChangeIconScale(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCostumeServantListViewManager_o *v7; // x0
  int v8; // w8
  CGThumbnailListItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v14; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_4C224D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C224D7 = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = this;
    v8 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = this;
    v8 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = this;
    v8 = 1;
  }
  v7->fields.seed = smallSizeSeed;
  p_seed = (CGThumbnailListItem_o *)&v7->fields.seed;
  p_seed[2].fields.loopIndex = v8;
  sub_1C2D434(p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_23;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  sort = (ListViewSort_o *)this->fields.itemList;
  if ( !sort )
    goto LABEL_23;
  v12 = 0;
  while ( v12 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v12,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (ListViewItem_o *)Item;
      naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MaterialCostumeServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        klass = (UnityEngine_Object_o *)Item[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
        {
          sort = (ListViewSort_o *)v14->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v14, this->fields.seed, 0);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v12;
    if ( !sort )
      goto LABEL_23;
  }
  MaterialCostumeServantListViewManager__SetMode_33091812(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_23:
    sub_1C2D6EC(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void MaterialCostumeServantListViewManager__CreateList(
        MaterialCostumeServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_array *CollectionList; // x20
  Il2CppObject *MasterData_object; // x21
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t v10; // w23
  ServantCostumeEntity_o *v11; // x24
  System_Collections_Generic_List_object__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v13; // x26
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  UILabel_o *emptyMessageLabel; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MaterialCostumeServantListViewManager_c *v24; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v26; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ListViewSort_o *v30; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v33; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C224C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1C2D490(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C224C8 = 1;
  }
  *(_QWORD *)findSum = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_40;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Instance )
      goto LABEL_40;
    v9 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
    if ( !v9 )
      goto LABEL_40;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           *((System_Collections_ObjectModel_Collection_T__o **)Instance + 5),
           (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__) >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     v9,
                     v10,
                     (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
        if ( !Instance )
          break;
        v11 = (ServantCostumeEntity_o *)Instance;
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 8, 0) )
        {
          Instance = (void *)ServantCostumeEntity__checkFlag(v11, 64, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_17;
          if ( !MasterData_object )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(
                 (ServantCostumeReleaseMaster_o *)MasterData_object,
                 v11->fields.svtId,
                 v11->fields.id,
                 0) )
          {
LABEL_17:
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v13 = (MaterialCostumeServantListViewItem_o *)sub_1C2D6DC(MaterialCostumeServantListViewItem_TypeInfo);
            MaterialCostumeServantListViewItem___ctor(v13, v11, CollectionList, v14);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v13,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v13;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
            }
          }
        }
        if ( ++v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                        v9,
                        (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__) )
          goto LABEL_23;
      }
LABEL_40:
      sub_1C2D6EC(Instance, v6);
    }
  }
LABEL_23:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_40;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  v24 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v24 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v24->static_fields->servantSortInfo;
  v26 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v26, v22, v23);
  Instance = this->fields.sort;
  if ( !Instance )
    goto LABEL_40;
  ListViewSort__Load((ListViewSort_o *)Instance, 0);
  v30 = *p_sort;
  if ( !*p_sort )
    goto LABEL_40;
  if ( v30->fields.sortKind != 27 )
    v30->fields.sortKind = 27;
  iconScaleKind = v30->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_38;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_38;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_38:
    this->fields.seed = normalSizeSeed;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v28, v29);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v33);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C224C4 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_4C224C4 = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0) )
  {
    sub_1C2D6EC(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void MaterialCostumeServantListViewManager__DestroyList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
  ListViewSort__Save(sort, 0);
}


void MaterialCostumeServantListViewManager__EndSelectSortKind(
        MaterialCostumeServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_1C2D6EC(0, isDecide);
  MaterialCostumeServantSortSelectMenu__Close_33113448(sortSelectMenu, 0, method);
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v6);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
}


MaterialCostumeServantListViewItem_o *MaterialCostumeServantListViewManager__GetItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C224CA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4C224CA = 1;
  }
  result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCostumeServantListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *MaterialCostumeServantListViewManager__GetScaleButtonSpriteName(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


MaterialCostumeServantListViewItem_o *MaterialCostumeServantListViewManager__GetSelectedItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_o *result; // x0
  int32_t sortIndex; // w23
  int32_t v9; // w22
  MaterialCostumeServantListViewItem_c *v10; // x1
  __int64 naturalAligment; // x9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  MaterialCostumeMenu_o *v13; // x0
  bool v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_4C224CB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4C224CB = 1;
  }
  result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    sortIndex = result->fields.sortIndex;
    if ( sortIndex < 1 )
    {
      return 0;
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)result,
                                                           v9,
                                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !result )
LABEL_14:
          sub_1C2D6EC(result, v10);
        v10 = MaterialCostumeServantListViewItem_TypeInfo;
        naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCostumeServantListViewItem_TypeInfo )
        {
          break;
        }
        svtCostumeEntity_k__BackingField = result->fields._svtCostumeEntity_k__BackingField;
        if ( !svtCostumeEntity_k__BackingField )
          goto LABEL_14;
        if ( svtCostumeEntity_k__BackingField->fields.svtId == svtId
          && svtCostumeEntity_k__BackingField->fields.id == costumeId )
        {
          return result;
        }
        if ( sortIndex == ++v9 )
          return 0;
        result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
        if ( !result )
          goto LABEL_14;
      }
      v13 = (MaterialCostumeMenu_o *)sub_1C2D9AC(result);
      MaterialCostumeMenu__EndShowCostume(v13, v14, v15);
    }
  }
  return result;
}


void MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C224C5 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_4C224C5 = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0) )
  {
    sub_1C2D6EC(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_33100504(this, 4, v2);
}


void MaterialCostumeServantListViewManager__OnClickListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void MaterialCostumeServantListViewManager__OnClickSelectListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  struct ListViewItem_o *linkItem; // x0
  MaterialCostumeServantListViewItem_c *v8; // x1
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v11; // x0
  ListViewObject_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C224D1 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4C224D1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v8 = MaterialCostumeServantListViewItem_TypeInfo;
    naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          1,
          LODWORD(klass->_1.name),
          HIDWORD(klass->_1.name),
          callbackFunc->fields.method);
        return;
      }
LABEL_11:
      sub_1C2D6EC(linkItem, v8);
    }
    v11 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(linkItem);
    MaterialCostumeServantListViewManager__OnLongPushListView(v11, v12, v13);
  }
}


void MaterialCostumeServantListViewManager__OnClickSortAscendingOrder(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C224D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__);
    byte_4C224D5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void MaterialCostumeServantListViewManager__OnClickSortKind(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4C224D3 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_OnClickSortKind__);
    byte_4C224D3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCostumeServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v7 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectMenu )
      sub_1C2D6EC(v9, v10);
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v7, v11);
  }
}


void MaterialCostumeServantListViewManager__OnLongPushListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  struct ListViewItem_o *linkItem; // x0
  MaterialCostumeServantListViewItem_c *v8; // x1
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C224D2 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4C224D2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v8 = MaterialCostumeServantListViewItem_TypeInfo;
    naturalAligment = MaterialCostumeServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          1,
          LODWORD(klass->_1.name),
          HIDWORD(klass->_1.name),
          callbackFunc->fields.method);
        return;
      }
LABEL_11:
      sub_1C2D6EC(linkItem, v8);
    }
    v11 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(linkItem);
    MaterialCostumeServantListViewManager__OnClickSortKind(v11, v12);
  }
}


void MaterialCostumeServantListViewManager__OnMoveEnd(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C224D0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C224D0 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void MaterialCostumeServantListViewManager__RefrashListDisp(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4C224C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    byte_4C224C9 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v7 >= v6->fields._size )
        return;
    }
LABEL_9:
    sub_1C2D6EC(ObjectList, v4);
  }
}


void MaterialCostumeServantListViewManager__RequestInto(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3

  if ( (byte_4C224CF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C224CF = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C2D6EC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  v9 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v9,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      MaterialCostumeServantListViewObject__Init_33101800(
        (MaterialCostumeServantListViewObject_o *)Item,
        5,
        v11,
        0.1,
        v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v9;
  }
  while ( v9 < v7->fields._size );
  if ( !v8 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeServantListViewManager__RequestListObject(
        MaterialCostumeServantListViewManager_o *this,
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

  if ( (byte_4C224CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C224CD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      MaterialCostumeServantListViewObject__Init_33101800(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeServantListViewManager__RequestListObject_33100504(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C224CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1C2D490(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C224CE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      MaterialCostumeServantListViewObject__Init_33101900(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


void MaterialCostumeServantListViewManager__SetFilterButtonImage(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C224D4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C224D4 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void MaterialCostumeServantListViewManager__SetMode(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        MaterialCostumeServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  MaterialCostumeServantListViewManager__SetMode_33091812(this, mode, v6);
}


void MaterialCostumeServantListViewManager__SetMode_33091812(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    MaterialCostumeServantListViewManager__RequestListObject_33100504(this, v6, v5);
  }
}


void MaterialCostumeServantListViewManager__SetMode_33101224(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MaterialCostumeServantListViewManager__SetMode_33091812(this, mode, v6);
}


void MaterialCostumeServantListViewManager__SetObjectItem(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C224CC & 1) == 0 )
  {
    this = (MaterialCostumeServantListViewManager_o *)sub_1C2D490(&MaterialCostumeServantListViewObject_TypeInfo);
    byte_4C224CC = 1;
  }
  if ( !obj
    || (naturalAligment = MaterialCostumeServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCostumeServantListViewObject__Init_33101148(
    (MaterialCostumeServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void MaterialCostumeServantListViewManager__SetSortButtonImage(
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4C224D6 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C224D6 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    v4 = this->fields.sortKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortExplanationSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/, 0);
    if ( !v4 )
      goto LABEL_35;
    UILabel__set_text(v4, sortExplanationSprite, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sortExplanationSprite = (System_String_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
LABEL_31:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v15, 0);
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
          v14 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C2D6EC(sortExplanationSprite, v6);
  }
}


void MaterialCostumeServantListViewManager__add_callbackFunc(
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

  if ( (byte_4C224C0 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C224C0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialCostumeServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void MaterialCostumeServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4C224C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C224C2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *MaterialCostumeServantListViewManager__get_ClippingObjectList(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C224C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C224C7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(
                                 (MaterialCostumeServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *MaterialCostumeServantListViewManager__get_ObjectList(
        MaterialCostumeServantListViewManager_o *this,
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C224C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C224C6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v3;
}


void MaterialCostumeServantListViewManager__remove_callbackFunc(
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

  if ( (byte_4C224C1 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_4C224C1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialCostumeServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(v7);
  MaterialCostumeServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void MaterialCostumeServantListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C224C3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C224C3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
  MaterialCostumeServantListViewManager__DeleteContinueData(v10);
}


void MaterialCostumeServantListViewManager_CallbackFunc___ctor(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6AC9C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6AC3C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *MaterialCostumeServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
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

  v20 = svtId;
  v21 = kind;
  v19 = costumeId;
  if ( (byte_4C224D9 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo);
    byte_4C224D9 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             MaterialCostumeServantListViewManager_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&svtId,
             *(_QWORD *)&costumeId,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void MaterialCostumeServantListViewManager_CallbackFunc__Invoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    svtId,
    costumeId,
    this->fields.method);
}