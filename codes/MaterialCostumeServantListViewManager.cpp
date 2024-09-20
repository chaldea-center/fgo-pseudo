void __fastcall MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  ListViewSort_o *v2; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4A5689A & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8920/*"MaterialCostumeServant1"*/);
    sub_1B885B0(&StringLiteral_8921/*"MaterialCostumeServant2"*/);
    byte_4A5689A = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_8920/*"MaterialCostumeServant1"*/, 27, 1, 0LL);
  MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1B88554(MaterialCostumeServantListViewManager_TypeInfo->static_fields, v1);
  v2 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v2, (System_String_o *)StringLiteral_8921/*"MaterialCostumeServant2"*/, 27, 1, 0LL);
  static_fields = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v2;
  sub_1B88554(&static_fields->servantEquipSortInfo, v2);
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
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCostumeServantListViewManager_o *v5; // x0
  int v6; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v12; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4A56899 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56899 = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v5 = this;
    v6 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v5 = this;
    v6 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v5 = this;
    v6 = 1;
  }
  v5->fields.seed = smallSizeSeed;
  p_seed = &v5->fields.seed;
  *((_DWORD *)p_seed + 79) = v6;
  sub_1B88554(p_seed, smallSizeSeed);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_23;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  sort = (ListViewSort_o *)this->fields.itemList;
  if ( !sort )
    goto LABEL_23;
  v10 = 0;
  while ( v10 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v10,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v12 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MaterialCostumeServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          sort = (ListViewSort_o *)v12->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v12, this->fields.seed, 0LL);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v10;
    if ( !sort )
      goto LABEL_23;
  }
  MaterialCostumeServantListViewManager__SetMode_31181024(this, 2, v9);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1B8880C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__CreateList(
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v14; // x26
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  UILabel_o *emptyMessageLabel; // x20
  MaterialCostumeServantListViewManager_c *v21; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v23; // x1
  struct ListViewSort_o **p_sort; // x20
  struct ListViewSort_o *v25; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v28; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5688A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    sub_1B885B0(&MaterialCostumeServantListViewManager_TypeInfo);
    sub_1B885B0(&ServantCostumeEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A5688A = 1;
  }
  *(_QWORD *)findSum = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_42;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Instance )
      goto LABEL_42;
    v9 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
    if ( !v9 )
      goto LABEL_42;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           *((System_Collections_ObjectModel_Collection_T__o **)Instance + 4),
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     v9,
                     v10,
                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v11 = (ServantCostumeEntity_o *)Instance;
        methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo )
        {
          break;
        }
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 8, 0LL) )
        {
          Instance = (void *)ServantCostumeEntity__checkFlag(v11, 64, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_19;
          if ( !MasterData_object )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(
                 (ServantCostumeReleaseMaster_o *)MasterData_object,
                 v11->fields.svtId,
                 v11->fields.id,
                 0LL) )
          {
LABEL_19:
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v14 = (MaterialCostumeServantListViewItem_o *)sub_1B887FC(MaterialCostumeServantListViewItem_TypeInfo);
            MaterialCostumeServantListViewItem___ctor(v14, v11, CollectionList, v15);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v14;
              sub_1B88554(v19 + 4, v14);
            }
          }
        }
        if ( ++v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                        v9,
                        (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_25;
      }
LABEL_42:
      sub_1B8880C(Instance, v6);
    }
  }
LABEL_25:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  v21 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v21 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v21->static_fields->servantSortInfo;
  v23 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1B88554(&this->fields.sort, v23);
  Instance = this->fields.sort;
  if ( !Instance )
    goto LABEL_42;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  v25 = *p_sort;
  if ( !*p_sort )
    goto LABEL_42;
  if ( v25->fields.sortKind != 27 )
    v25->fields.sortKind = 27;
  iconScaleKind = v25->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_40;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_40;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_40:
    this->fields.seed = normalSizeSeed;
    sub_1B88554(&this->fields.seed, normalSizeSeed);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v28);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A56886 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_4A56886 = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1B8880C(servantSortInfo, v1);
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
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, isDecide);
  MaterialCostumeServantSortSelectMenu__Close_31202496(sortSelectMenu, 0LL, method);
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
  MaterialCostumeServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5688C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4A5688C = 1;
  }
  result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall MaterialCostumeServantListViewManager__GetScaleButtonSpriteName(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


MaterialCostumeServantListViewItem_o *__fastcall MaterialCostumeServantListViewManager__GetSelectedItem(
        MaterialCostumeServantListViewManager_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItem_o *result; // x0
  int32_t sortIndex; // w23
  int32_t v9; // w22
  MaterialCostumeServantListViewItem_c *v10; // x1
  __int64 methodPtr_low; // x9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  MaterialCostumeMenu_o *v13; // x0
  bool v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_4A5688D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4A5688D = 1;
  }
  result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    sortIndex = result->fields.sortIndex;
    if ( sortIndex < 1 )
    {
      return 0LL;
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)result,
                                                           v9,
                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !result )
LABEL_14:
          sub_1B8880C(result, v10);
        v10 = MaterialCostumeServantListViewItem_TypeInfo;
        methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (MaterialCostumeServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewItem_TypeInfo )
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
          return 0LL;
        result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
        if ( !result )
          goto LABEL_14;
      }
      v13 = (MaterialCostumeMenu_o *)sub_1B88ACC(result);
      MaterialCostumeMenu__EndShowCostume(v13, v14, v15);
    }
  }
  return result;
}


void __fastcall MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A56887 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewManager_TypeInfo);
    byte_4A56887 = 1;
  }
  v2 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v2 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL) )
  {
    sub_1B8880C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_31189568(this, 4, v2);
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
  struct MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  struct ListViewItem_o *linkItem; // x0
  MaterialCostumeServantListViewItem_c *v7; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v10; // x0
  ListViewObject_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A56893 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4A56893 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  linkItem = (struct ListViewItem_o *)sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v7 = MaterialCostumeServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          1LL,
          LODWORD(klass->_1.name),
          HIDWORD(klass->_1.name),
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_11:
      sub_1B8880C(linkItem, v7);
    }
    v10 = (MaterialCostumeServantListViewManager_o *)sub_1B88ACC(linkItem);
    MaterialCostumeServantListViewManager__OnLongPushListView(v10, v11, v12);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortAscendingOrder(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A56897 & 1) == 0 )
  {
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__);
    byte_4A56897 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnClickSortKind(
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

  if ( (byte_4A56895 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_OnClickSortKind__);
    byte_4A56895 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCostumeServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MaterialCostumeServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v7 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      v8);
    if ( !sortSelectMenu )
      sub_1B8880C(v9, v10);
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v7, v11);
  }
}


void __fastcall MaterialCostumeServantListViewManager__OnLongPushListView(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct MaterialCostumeServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  struct ListViewItem_o *linkItem; // x0
  MaterialCostumeServantListViewItem_c *v7; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  MaterialCostumeServantListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A56894 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewItem_TypeInfo);
    byte_4A56894 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  linkItem = (struct ListViewItem_o *)sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      goto LABEL_11;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_11;
    v7 = MaterialCostumeServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (MaterialCostumeServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
    {
      klass = linkItem[1].klass;
      if ( klass )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          1LL,
          LODWORD(klass->_1.name),
          HIDWORD(klass->_1.name),
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_11:
      sub_1B8880C(linkItem, v7);
    }
    v10 = (MaterialCostumeServantListViewManager_o *)sub_1B88ACC(linkItem);
    MaterialCostumeServantListViewManager__OnClickSortKind(v10, v11);
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
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56892 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56892 = 1;
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
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall MaterialCostumeServantListViewManager__RefrashListDisp(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4A5688B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    byte_4A5688B = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v7 >= v6->fields._size )
        return;
    }
LABEL_9:
    sub_1B8880C(ObjectList, v4);
  }
}


void __fastcall MaterialCostumeServantListViewManager__RequestInto(
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

  if ( (byte_4A56891 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56891 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      MaterialCostumeServantListViewObject__Init_31190864(
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5688F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5688F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      MaterialCostumeServantListViewObject__Init_31190864(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject_31189568(
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

  if ( (byte_4A56890 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__);
    sub_1B885B0(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56890 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      MaterialCostumeServantListViewObject__Init_31190964(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetFilterButtonImage(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A56896 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A56896 = 1;
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


void __fastcall MaterialCostumeServantListViewManager__SetMode(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        MaterialCostumeServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  MaterialCostumeServantListViewManager__SetMode_31181024(this, mode, v6);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31181024(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 1 )
  {
    if ( mode == 1 )
      v6 = 2;
    else
      v6 = 3;
    MaterialCostumeServantListViewManager__RequestListObject_31189568(this, v6, v5);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31190288(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(&this->fields.callbackFunc2, callback);
  MaterialCostumeServantListViewManager__SetMode_31181024(this, mode, v6);
}


void __fastcall MaterialCostumeServantListViewManager__SetObjectItem(
        MaterialCostumeServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5688E & 1) == 0 )
  {
    this = (MaterialCostumeServantListViewManager_o *)sub_1B885B0(&MaterialCostumeServantListViewObject_TypeInfo);
    byte_4A5688E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialCostumeServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCostumeServantListViewObject__Init_31190212(
    (MaterialCostumeServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4A56898 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_11839/*"SERVANT_SORT_TITLE2"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A56898 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    v4 = this->fields.sortKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortExplanationSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !v4 )
      goto LABEL_35;
    UILabel__set_text(v4, sortExplanationSprite, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_31:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v15, 0LL);
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
          v14 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v14, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1B8880C(sortExplanationSprite, v6);
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

  if ( (byte_4A56882 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A56882 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56884 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56884 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1B88ACC(v7);
  MaterialCostumeServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ClippingObjectList(
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56889 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56889 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(
                                 (MaterialCostumeServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1B8880C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1B88554(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCostumeServantListViewObject__o *__fastcall MaterialCostumeServantListViewManager__get_ObjectList(
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56888 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56888 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A56883 & 1) == 0 )
  {
    sub_1B885B0(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A56883 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56885 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56885 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
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
  this->fields.m_target = (Il2CppObject *)sub_19C7CF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7C94;
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
  if ( (byte_4A5689B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo);
    byte_4A5689B = 1;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__Invoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    svtId,
    costumeId,
    *(_QWORD *)&this->fields.extra_arg);
}